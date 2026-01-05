
[Object lifetime](lifetime.html "cpp/language/lifetime")  
[Storage duration and linkage](storage_duration.html "cpp/language/storage duration")  
[Definitions and ODR](definition.html "cpp/language/definition")  
[Name lookup](lookup.html "cpp/language/lookup")  
[ Qualified name lookup](qualified_lookup.html "cpp/language/qualified lookup")  
[ Unqualified name lookup](unqualified_lookup.html "cpp/language/unqualified lookup")  
[The as-if rule](as_if.html "cpp/language/as if")  
[Undefined behavior](ub.html "cpp/language/ub")  
[Memory model](memory_model.html "cpp/language/memory model")  
**Multi-threaded executions and data races** (C++11)  
[Character sets and encodings](charset.html "cpp/language/charset")  
[Phases of translation](translation_phases.html "cpp/language/translation phases")  
[The `main` function](main_function.html "cpp/language/main function")  
[Modules](modules.html "cpp/language/modules") (C++20)  
[Contracts](contracts.html "cpp/language/contracts") (C++26)  
  


A _thread of execution_ is a flow of control within a program that begins with the invocation of a specific top-level function (by [std::thread](../thread/thread.html "cpp/thread/thread"), [std::async](../thread/async.html "cpp/thread/async"), [std::jthread](../thread/jthread.html "cpp/thread/jthread")(since C++20) or other means), and recursively including every function invocation subsequently executed by the thread. 

  * When one thread creates another, the initial call to the top-level function of the new thread is executed by the new thread, not by the creating thread. 



Any thread can potentially access any object and function in the program: 

  * Objects with automatic and thread-local [storage duration](storage_duration.html "cpp/language/storage duration") may still be accessed by another thread through a pointer or by reference. 
  * Under a [hosted implementation](../freestanding.html "cpp/freestanding"), a C++ program can have more than one thread running concurrently. The execution of each thread proceeds as defined by the rest of this page. The execution of the entire program consists of an execution of all of its threads. 
  * Under a [freestanding implementation](../freestanding.html "cpp/freestanding"), it is implementation-defined whether a program can have more than one thread of execution. 



For a [signal handler](../utility/program/signal.html#Signal_handler "cpp/utility/program/signal") that is not executed as a result of a call to [std::raise](../utility/program/raise.html "cpp/utility/program/raise"), it is unspecified which thread of execution contains the signal handler invocation. 

## Contents

  * [1 Data races](multithread.html#Data_races)
    * [1.1 Container data races](multithread.html#Container_data_races)
  * [2 Memory order](multithread.html#Memory_order)
  * [3 Forward progress](multithread.html#Forward_progress)
    * [3.1 Obstruction freedom](multithread.html#Obstruction_freedom)
    * [3.2 Lock freedom](multithread.html#Lock_freedom)
    * [3.3 Progress guarantee](multithread.html#Progress_guarantee)
    * [3.4 Trivial infinite loops](multithread.html#Trivial_infinite_loops)
    * [3.5 Concurrent forward progress](multithread.html#Concurrent_forward_progress)
    * [3.6 Parallel forward progress](multithread.html#Parallel_forward_progress)
    * [3.7 Weakly parallel forward progress](multithread.html#Weakly_parallel_forward_progress)
  * [4 Defect reports](multithread.html#Defect_reports)

  
---  
  
### Data races

Different threads of execution are always allowed to access (read and modify) different [memory locations](memory_model.html#Memory_location "cpp/language/memory model") concurrently, with no interference and no synchronization requirements. 

Two expression [evaluations](eval_order.html "cpp/language/eval order") _conflict_ if one of them modifies a memory location or starts/ends the lifetime of an object in a memory location, and the other one reads or modifies the same memory location or starts/ends the lifetime of an object occupying storage that overlaps with the memory location. 

A program that has two conflicting evaluations has a _data race_ unless 

  * both evaluations execute on the same thread or in the same [signal handler](../utility/program/signal.html#Signal_handler "cpp/utility/program/signal"), or 
  * both conflicting evaluations are atomic operations (see [std::atomic](../atomic/atomic.html "cpp/atomic/atomic")), or 
  * one of the conflicting evaluations _happens-before_ another (see [std::memory_order](../atomic/memory_order.html "cpp/atomic/memory order")). 



If a data race occurs, the behavior of the program is undefined. 

(In particular, release of a [std::mutex](../thread/mutex.html "cpp/thread/mutex") is _synchronized-with_ , and therefore, _happens-before_ acquisition of the same mutex by another thread, which makes it possible to use mutex locks to guard against data races.) 
    
    
    int cnt = 0;
    auto f = [&] { cnt++; };
    [std::thread](../thread/thread.html) t1{f}, t2{f}, t3{f}; // undefined behavior
    
    
    [std::atomic](../atomic/atomic.html)<int> cnt{0};
    auto f = [&] { cnt++; };
    [std::thread](../thread/thread.html) t1{f}, t2{f}, t3{f}; // OK

#### Container data races

All [containers](../container.html "cpp/container") in the standard library except [`std`::vector<bool>](../container/vector_bool.html "cpp/container/vector bool") guarantee that concurrent modifications on contents of the contained object in different elements in the same container will never result in data races. 
    
    
    [std::vector](../container/vector.html)<int> vec = {1, 2, 3, 4};
    auto f = [&](int index) { vec[index] = 5; };
    [std::thread](../thread/thread.html) t1{f, 0}, t2{f, 1}; // OK
    [std::thread](../thread/thread.html) t3{f, 2}, t4{f, 2}; // undefined behavior
    
    
    [std::vector](../container/vector.html)<bool> vec = {false, false};
    auto f = [&](int index) { vec[index] = true; };
    [std::thread](../thread/thread.html) t1{f, 0}, t2{f, 1}; // undefined behavior

### Memory order

When a thread reads a value from a memory location, it may see the initial value, the value written in the same thread, or the value written in another thread. See [std::memory_order](../atomic/memory_order.html "cpp/atomic/memory order") for details on the order in which writes made from threads become visible to other threads. 

### Forward progress

#### Obstruction freedom

When only one thread that is not blocked in a standard library function executes an [atomic function](../atomic.html#Atomic_operations "cpp/thread") that is lock-free, that execution is guaranteed to complete (all standard library lock-free operations are [obstruction-free](https://en.wikipedia.org/wiki/Non-blocking_algorithm#Obstruction-freedom "enwiki:Non-blocking algorithm")). 

#### Lock freedom

When one or more lock-free atomic functions run concurrently, at least one of them is guaranteed to complete (all standard library lock-free operations are [lock-free](https://en.wikipedia.org/wiki/Non-blocking_algorithm#Lock-freedom "enwiki:Non-blocking algorithm") — it is the job of the implementation to ensure they cannot be live-locked indefinitely by other threads, such as by continuously stealing the cache line). 

#### Progress guarantee

In a valid C++ program, every thread eventually does one of the following: 

  * Terminates. 
  * Invokes [std::this_thread::yield](../thread/yield.html "cpp/thread/yield"). 
  * Makes a call to an library I/O function. 
  * Performs an access through a [volatile](cv.html "cpp/language/cv") glvalue. 
  * Performs an atomic operation or a synchronization operation. 
  * Continues execution of a trivial infinite loop (see below). 



A thread is said to _make progress_ if it performs one of the execution steps above, blocks in a standard library function, or calls an atomic lock-free function that does not complete because of a non-blocked concurrent thread. 

This allows the compilers to remove, merge and reorder all loops that have no observable behavior, without having to prove that they would eventually terminate because it can assume that no thread of execution can execute forever without performing any of these observable behaviors. An affordance is made for trivial infinite loops, which cannot be removed nor reordered. 

#### Trivial infinite loops

A _trivially empty iteration statement_ is an iteration statement matching one of the following forms:   
  
---  
`**while (**` condition `**) ;**` |  (1)  |   
`**while (**` condition `**) { }**` |  (2)  |   
`**do ; while (**` condition `**) ;**` |  (3)  |   
`**do { } while (**` condition `**) ;**` |  (4)  |   
`**for (**` init-statement condition ﻿(optional) `**; ) ;**` |  (5)  |   
`**for (**` init-statement condition ﻿(optional) `**; ) { }**` |  (6)  |   
  
1) A [while statement](while.html "cpp/language/while") whose loop body is an empty simple statement.

2) A [while statement](while.html "cpp/language/while") whose loop body is an empty compound statement.

3) A [do-while statement](do.html "cpp/language/do") whose loop body is an empty simple statement.

4) A [do-while statement](do.html "cpp/language/do") whose loop body is an empty compound statement.

5) A [for statement](for.html "cpp/language/for") whose loop body is an empty simple statement, the for statement does not have an iteration-expression.

6) A [for statement](for.html "cpp/language/for") whose loop body is an empty compound statement, the for statement does not have an iteration-expression.

The _controlling expression_ of a trivially empty iteration statement is: 

1-4) condition.

5,6) condition if present, otherwise true.

A _trivial infinite loop_ is a trivially empty iteration statement for which the converted controlling expression is a [constant expression](constant_expression.html "cpp/language/constant expression"), when [manifestly constant-evaluated](constant_expression.html#Manifestly_constant-evaluated_expressions "cpp/language/constant expression"), and evaluates to true. 

The loop body of a trivial infinite loop is replaced with a call to the function [std::this_thread::yield](../thread/yield.html "cpp/thread/yield"). It is implementation-defined whether this replacement occurs on [freestanding implementations](../freestanding.html "cpp/freestanding"). 
    
    
    for (;;); // trivial infinite loop, well defined as of P2809
    for (;;) { int x; } // undefined behavior

####  Concurrent forward progress

If a thread offers _concurrent forward progress guarantee_ , it will _make progress_ (as defined above) in finite amount of time, for as long as it has not terminated, regardless of whether other threads (if any) are making progress. The standard encourages, but doesn't require that the main thread and the threads started by [std::thread](../thread/thread.html "cpp/thread/thread") and [std::jthread](../thread/jthread.html "cpp/thread/jthread")(since C++20) offer concurrent forward progress guarantee. 

####  Parallel forward progress

If a thread offers _parallel forward progress guarantee_ , the implementation is not required to ensure that the thread will eventually make progress if it has not yet executed any execution step (I/O, volatile, atomic, or synchronization), but once this thread has executed a step, it provides _concurrent forward progress_ guarantees (this rule describes a thread in a thread pool that executes tasks in arbitrary order). 

####  Weakly parallel forward progress

If a thread offers _weakly parallel forward progress guarantee_ , it does not guarantee to eventually make progress, regardless of whether other threads make progress or not. Such threads can still be guaranteed to make progress by blocking with forward progress guarantee delegation: if a thread `P` blocks in this manner on the completion of a set of threads `S`, then at least one thread in `S` will offer a forward progress guarantee that is same or stronger than `P`. Once that thread completes, another thread in `S` will be similarly strengthened. Once the set is empty, `P` will unblock. The [parallel algorithms](../algorithm.html "cpp/algorithm") from the C++ standard library block with forward progress delegation on the completion of an unspecified set of library-managed threads.  | (since C++17)  
---|---  
  
### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 1953](https://cplusplus.github.io/CWG/issues/1953.html) | C++11  | two expression evaluations that start/end the lifetimes  
of objects with overlapping storages did not conflict  | they conflict   
[LWG 2200](https://cplusplus.github.io/LWG/issue2200) | C++11  | it was unclear whether the container data race  
requirement only applies to sequence containers  | applies to all containers   
[P2809R3](https://wg21.link/P2809R3) | C++11  | the behavior of executing “trivial”[[1]](multithread.html#cite_note-1)  
infinite loops was undefined  | properly defines “trivial infinite loops”  
and made the behavior well-defined   
  
  1. [↑](multithread.html#cite_ref-1) “Trivial” here means executing the infinite loop never makes any progress.


