[C++](../../cpp.html "cpp")

[Compiler support](../compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](../freestanding.html "cpp/freestanding")  
[Language](../language.html "cpp/language")  
[Standard library](../standard_library.html "cpp/standard library")  
[Standard library headers](../headers.html "cpp/header")  
[Named requirements](../iterator/concepts.html "cpp/named req")  
[Feature test macros](../experimental/feature_test.html "cpp/feature test") (C++20)  
[Language support library](../utility.html#Language_support "cpp/utility")  
[Concepts library](../concepts.html "cpp/concepts") (C++20)  
[Diagnostics library](../error.html "cpp/error")  
[Memory management library](../memory.html "cpp/memory")  
[Metaprogramming library](../meta.html "cpp/meta") (C++11)  
[General utilities library](../utility.html "cpp/utility")  
[Containers library](../container.html "cpp/container")  
[Iterators library](../iterator.html "cpp/iterator")  
[Ranges library](../ranges.html "cpp/ranges") (C++20)  
[Algorithms library](../algorithm.html "cpp/algorithm")  
[Strings library](../string.html "cpp/string")  
[Text processing library](../text.html "cpp/text")  
[Numerics library](../numeric.html "cpp/numeric")  
[Date and time library](../chrono.html "cpp/chrono")  
[Input/output library](../io.html "cpp/io")  
[Filesystem library](../filesystem.html "cpp/filesystem") (C++17)  
[Concurrency support library](../atomic.html "cpp/thread") (C++11)  
[Execution control library](../experimental/execution.html "cpp/execution") (C++26)  
[Technical specifications](../experimental.html "cpp/experimental")  
[Symbols index](../symbol_index.html "cpp/symbol index")  
[External libraries](../links/libs.html "cpp/links/libs")  
  


[Concurrency support library](../atomic.html "cpp/thread")

| [Threads](../atomic.html#Threads "cpp/thread")  
---  
[thread](thread.html "cpp/thread/thread")(C++11)  
[jthread](jthread.html "cpp/thread/jthread")(C++20)  
[hardware_destructive_interference_sizehardware_constructive_interference_size](hardware_destructive_interference_size.html "cpp/thread/hardware destructive interference size")(C++17)(C++17)  
[`this_thread` namespace](../atomic.html#Functions_managing_the_current_thread "cpp/thread")  
| [get_id](get_id.html "cpp/thread/get id")(C++11)  
---  
[yield](yield.html "cpp/thread/yield")(C++11)  
  
| [sleep_for](sleep_for.html "cpp/thread/sleep for")(C++11)  
---  
[sleep_until](sleep_until.html "cpp/thread/sleep until")(C++11)  
  
[Cooperative cancellation](../atomic.html#Cooperative_cancellation "cpp/thread")  
| [stop_token](stop_token.html "cpp/thread/stop token")(C++20)  
---  
[inplace_stop_token](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/inplace_stop_token&action=edit&redlink=1 "cpp/thread/inplace stop token \(page does not exist\)")(C++26)  
[never_stop_token](never_stop_token.html "cpp/thread/never stop token")(C++26)  
[stop_source](stop_source.html "cpp/thread/stop source")(C++20)  
[inplace_stop_source](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/inplace_stop_source&action=edit&redlink=1 "cpp/thread/inplace stop source \(page does not exist\)")(C++26)` `  
[stop_callback](stop_callback.html "cpp/thread/stop callback")(C++20)  
  
| [inplace_stop_callback](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/inplace_stop_callback&action=edit&redlink=1 "cpp/thread/inplace stop callback \(page does not exist\)")(C++26)  
---  
[stop_callback_for_t](stop_callback_for_t.html "cpp/thread/stop callback for t")(C++26)  
[stoppable_token](stoppable_token.html "cpp/thread/stoppable token")(C++26)  
[unstoppable_token](unstoppable_token.html "cpp/thread/unstoppable token")(C++26)  
[_stoppable-source_](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/stoppable_source&action=edit&redlink=1 "cpp/thread/stoppable source \(page does not exist\)")(C++26)  
[_stoppable-callback-for_](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/stoppable_callback_for&action=edit&redlink=1 "cpp/thread/stoppable callback for \(page does not exist\)")(C++26)` `  
  
[Mutual exclusion](../atomic.html#Mutual_exclusion "cpp/thread")  
| [mutex](mutex.html "cpp/thread/mutex")(C++11)  
---  
[recursive_mutex](recursive_mutex.html "cpp/thread/recursive mutex")(C++11)  
[shared_mutex](shared_mutex.html "cpp/thread/shared mutex")(C++17)  
  
| [timed_mutex](timed_mutex.html "cpp/thread/timed mutex")(C++11)  
---  
[recursive_timed_mutex](recursive_timed_mutex.html "cpp/thread/recursive timed mutex")(C++11)  
[shared_timed_mutex](shared_timed_mutex.html "cpp/thread/shared timed mutex")(C++14)  
  
[Generic lock management](../atomic.html#Generic_mutex_management "cpp/thread")  
| [lock](lock.html "cpp/thread/lock")(C++11)  
---  
[lock_guard](lock_guard.html "cpp/thread/lock guard")(C++11)  
[scoped_lock](scoped_lock.html "cpp/thread/scoped lock")(C++17)  
[unique_lock](unique_lock.html "cpp/thread/unique lock")(C++11)  
[shared_lock](shared_lock.html "cpp/thread/shared lock")(C++14)  
[once_flag](once_flag.html "cpp/thread/once flag")(C++11)  
[call_once](call_once.html "cpp/thread/call once")(C++11)  
  
| [try_lock](try_lock.html "cpp/thread/try lock")(C++11)  
---  
[defer_locktry_to_lockadopt_lockdefer_lock_ttry_to_lock_tadopt_lock_t](lock_tag_t.html "cpp/thread/lock tag")(C++11)(C++11)(C++11)(C++11)(C++11)(C++11)  
  
[Condition variables](../atomic.html#Condition_variables "cpp/thread")  
[condition_variable](condition_variable.html "cpp/thread/condition variable")(C++11)  
[condition_variable_any](condition_variable_any.html "cpp/thread/condition variable any")(C++11)  
[notify_all_at_thread_exit](notify_all_at_thread_exit.html "cpp/thread/notify all at thread exit")(C++11)  
[cv_status](cv_status.html "cpp/thread/cv status")(C++11)  
[Semaphores](../atomic.html#Semaphores "cpp/thread")  
[counting_semaphorebinary_semaphore](counting_semaphore.html "cpp/thread/counting semaphore")(C++20)(C++20)  
[Latches and Barriers](../atomic.html#Latches_and_Barriers "cpp/thread")  
| [latch](latch.html "cpp/thread/latch")(C++20)  
---  
  
| **barrier**(C++20)  
---  
  
[Futures](../atomic.html#Futures "cpp/thread")  
| [promise](promise.html "cpp/thread/promise")(C++11)  
---  
[future](future.html "cpp/thread/future")(C++11)  
[shared_future](shared_future.html "cpp/thread/shared future")(C++11)  
[packaged_task](packaged_task.html "cpp/thread/packaged task")(C++11)  
[async](async.html "cpp/thread/async")(C++11)  
  
| [launch](launch.html "cpp/thread/launch")(C++11)  
---  
[future_status](future_status.html "cpp/thread/future status")(C++11)  
[future_error](future_error.html "cpp/thread/future error")(C++11)  
[future_category](future_category.html "cpp/thread/future category")(C++11)  
[future_errc](future_errc.html "cpp/thread/future errc")(C++11)  
  
[Safe reclamation](../atomic.html#Safe_reclamation "cpp/thread")  
| [rcu_obj_base](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/rcu_obj_base&action=edit&redlink=1 "cpp/thread/rcu obj base \(page does not exist\)")(C++26)  
---  
[rcu_domain](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/rcu_domain&action=edit&redlink=1 "cpp/thread/rcu domain \(page does not exist\)")(C++26)  
[rcu_default_domain](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/rcu_default_domain&action=edit&redlink=1 "cpp/thread/rcu default domain \(page does not exist\)")(C++26)  
  
| [rcu_synchronize](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/rcu_synchronize&action=edit&redlink=1 "cpp/thread/rcu synchronize \(page does not exist\)")(C++26)  
---  
[rcu_barrier](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/rcu_barrier&action=edit&redlink=1 "cpp/thread/rcu barrier \(page does not exist\)")(C++26)  
[rcu_retire](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/rcu_retire&action=edit&redlink=1 "cpp/thread/rcu retire \(page does not exist\)")(C++26)  
  
[Hazard pointers](../atomic.html#Hazard_pointers "cpp/thread")  
[hazard_pointer_obj_base](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/hazard_pointer_obj_base&action=edit&redlink=1 "cpp/thread/hazard pointer obj base \(page does not exist\)")(C++26)  
[hazard_pointer](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/hazard_pointer&action=edit&redlink=1 "cpp/thread/hazard pointer \(page does not exist\)")(C++26)  
[make_hazard_pointer](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/make_hazard_pointer&action=edit&redlink=1 "cpp/thread/make hazard pointer \(page does not exist\)")(C++26)  
  
| [Atomic types](../atomic.html#Atomic_types "cpp/thread")  
---  
[atomic](../atomic/atomic.html "cpp/atomic/atomic")(C++11)  
[atomic_ref](../atomic/atomic_ref.html "cpp/atomic/atomic ref")(C++20)  
[atomic_flag](../atomic/atomic_flag.html "cpp/atomic/atomic flag")(C++11)  
[Initialization of atomic types](../atomic.html#Initialization "cpp/thread")  
[atomic_init](../atomic/atomic_init.html "cpp/atomic/atomic init")(C++11)(deprecated in C++20)  
[ATOMIC_VAR_INIT](../atomic/ATOMIC_VAR_INIT.html "cpp/atomic/ATOMIC VAR INIT")(C++11)(deprecated in C++20)  
[ATOMIC_FLAG_INIT](../atomic/ATOMIC_FLAG_INIT.html "cpp/atomic/ATOMIC FLAG INIT")(C++11)  
[Memory ordering](../atomic.html#Memory_synchronization_ordering "cpp/thread")  
[memory_order](../atomic/memory_order.html "cpp/atomic/memory order")(C++11)  
[kill_dependency](../atomic/kill_dependency.html "cpp/atomic/kill dependency")(C++11)(deprecated in C++26)  
[atomic_thread_fence](../atomic/atomic_thread_fence.html "cpp/atomic/atomic thread fence")(C++11)  
[atomic_signal_fence](../atomic/atomic_signal_fence.html "cpp/atomic/atomic signal fence")(C++11)  
[Free functions for atomic operations](../atomic.html#Operations_on_atomic_types "cpp/thread")  
[atomic_storeatomic_store_explicit](../atomic/atomic_store.html "cpp/atomic/atomic store")(C++11)(C++11)  
[atomic_loadatomic_load_explicit](../atomic/atomic_load.html "cpp/atomic/atomic load")(C++11)(C++11)  
[atomic_exchangeatomic_exchange_explicit](../atomic/atomic_exchange.html "cpp/atomic/atomic exchange")(C++11)(C++11)  
[atomic_compare_exchange_weakatomic_compare_exchange_weak_explicitatomic_compare_exchange_strongatomic_compare_exchange_strong_explicit](../atomic/atomic_compare_exchange.html "cpp/atomic/atomic compare exchange")(C++11)(C++11)(C++11)(C++11)  
[atomic_fetch_addatomic_fetch_add_explicit](../atomic/atomic_fetch_add.html "cpp/atomic/atomic fetch add")(C++11)(C++11)  
[atomic_fetch_subatomic_fetch_sub_explicit](../atomic/atomic_fetch_sub.html "cpp/atomic/atomic fetch sub")(C++11)(C++11)  
[atomic_fetch_andatomic_fetch_and_explicit](../atomic/atomic_fetch_and.html "cpp/atomic/atomic fetch and")(C++11)(C++11)  
[atomic_fetch_oratomic_fetch_or_explicit](../atomic/atomic_fetch_or.html "cpp/atomic/atomic fetch or")(C++11)(C++11)  
[atomic_fetch_xoratomic_fetch_xor_explicit](../atomic/atomic_fetch_xor.html "cpp/atomic/atomic fetch xor")(C++11)(C++11)  
[atomic_fetch_maxatomic_fetch_max_explicit](../atomic/atomic_fetch_max.html "cpp/atomic/atomic fetch max")(C++26)(C++26)  
[atomic_fetch_minatomic_fetch_min_explicit](../atomic/atomic_fetch_min.html "cpp/atomic/atomic fetch min")(C++26)(C++26)  
[atomic_is_lock_free](../atomic/atomic_is_lock_free.html "cpp/atomic/atomic is lock free")(C++11)  
[atomic_waitatomic_wait_explicit](../atomic/atomic_wait.html "cpp/atomic/atomic wait")(C++20)(C++20)  
[atomic_notify_one](../atomic/atomic_notify_one.html "cpp/atomic/atomic notify one")(C++20)  
[atomic_notify_all](../atomic/atomic_notify_all.html "cpp/atomic/atomic notify all")(C++20)  
[Free functions for atomic flags](../atomic.html#Flag_type_and_operations "cpp/thread")  
[atomic_flag_test_and_setatomic_flag_test_and_set_explicit](../atomic/atomic_flag_test_and_set.html "cpp/atomic/atomic flag test and set")(C++11)(C++11)  
[atomic_flag_clearatomic_flag_clear_explicit](../atomic/atomic_flag_clear.html "cpp/atomic/atomic flag clear")(C++11)(C++11)  
[atomic_flag_testatomic_flag_test_explicit](../atomic/atomic_flag_test.html "cpp/atomic/atomic flag test")(C++20)(C++20)  
[atomic_flag_waitatomic_flag_wait_explicit](../atomic/atomic_flag_wait.html "cpp/atomic/atomic flag wait")(C++20)(C++20)  
[atomic_flag_notify_one](../atomic/atomic_flag_notify_one.html "cpp/atomic/atomic flag notify one")(C++20)  
[atomic_flag_notify_all](../atomic/atomic_flag_notify_all.html "cpp/atomic/atomic flag notify all")(C++20)  
  


**`std::barrier`**

Member functions  
---  
[barrier::barrier](barrier/barrier.html "cpp/thread/barrier/barrier")  
[barrier::~barrier](barrier/~barrier.html "cpp/thread/barrier/~barrier")  
[barrier::arrive](barrier/arrive.html "cpp/thread/barrier/arrive")  
[barrier::wait](barrier/wait.html "cpp/thread/barrier/wait")  
[barrier::arrive_and_wait](barrier/arrive_and_wait.html "cpp/thread/barrier/arrive and wait")  
[barrier::arrive_and_drop](barrier/arrive_and_drop.html "cpp/thread/barrier/arrive and drop")  
Constants  
[barrier::max](barrier/max.html "cpp/thread/barrier/max")  
  


Defined in header `[<barrier>](../header/barrier.html "cpp/header/barrier")` |  |   
---|---|---  
template< class CompletionFunction = /* see below */ >  
class barrier; |  |  (since C++20)  
| |   
  
The class template `std::barrier` provides a thread-coordination mechanism that blocks a group of threads of known size until all threads in that group have reached the barrier. Unlike [std::latch](latch.html "cpp/thread/latch"), barriers are reusable: once a group of arriving threads are unblocked, the barrier can be reused. Unlike [std::latch](latch.html "cpp/thread/latch"), barriers execute a possibly empty callable before unblocking threads. 

A barrier object's lifetime consists of one or more phases. Each phase defines a _phase synchronization point_ where waiting threads block. Threads can arrive at the barrier, but defer waiting on the _phase synchronization point_ by calling [`arrive`](barrier/arrive.html "cpp/thread/barrier/arrive"). Such threads can later block on the _phase synchronization point_ by calling [`wait`](barrier/wait.html "cpp/thread/barrier/wait"). 

A barrier _phase_ consists of the following steps: 

  1. The _expected count_ is decremented by each call to [`arrive`](barrier/arrive.html "cpp/thread/barrier/arrive") or [`arrive_and_drop`](barrier/arrive_and_drop.html "cpp/thread/barrier/arrive and drop"). 
  2. When the expected count reaches zero, the _phase completion step_ is run, meaning that the [`_completion_`](barrier.html#Data_members) is invoked, and all threads blocked on the phase synchronization point are unblocked. The end of the completion step [strongly happens-before](../atomic/memory_order.html#Strongly_happens-before "cpp/atomic/memory order") all calls that were unblocked by the completion step return.  
Exactly once after the expected count reaches zero, a thread executes the completion step during its call to [`arrive`](barrier/arrive.html "cpp/thread/barrier/arrive"), [`arrive_and_drop`](barrier/arrive_and_drop.html "cpp/thread/barrier/arrive and drop"), or [`wait`](barrier/wait.html "cpp/thread/barrier/wait"), except that it is implementation-defined whether the step executes if no thread calls [`wait`](barrier/wait.html "cpp/thread/barrier/wait"). 
  3. When the completion step finishes, the expected count is reset to the value specified at construction less the number of calls to [`arrive_and_drop`](barrier/arrive_and_drop.html "cpp/thread/barrier/arrive and drop") since, and the next _barrier phase_ begins. 



Concurrent invocations of the member functions of `barrier`, except for the destructor, do not introduce data races. 

## Contents

  * [1 Template parameters](barrier.html#Template_parameters)
  * [2 Member types](barrier.html#Member_types)
  * [3 Data members](barrier.html#Data_members)
  * [4 Member functions](barrier.html#Member_functions)
    * [4.1 Constants](barrier.html#Constants)
  * [5 Notes](barrier.html#Notes)
  * [6 Example](barrier.html#Example)
  * [7 Defect reports](barrier.html#Defect_reports)
  * [8 See also](barrier.html#See_also)

  
---  
  
### Template parameters

CompletionFunction  |  \-  |  a function object type   
---|---|---  
-`CompletionFunction` must meet the requirements of [MoveConstructible](../named_req/MoveConstructible.html "cpp/named req/MoveConstructible") and [Destructible](../named_req/Destructible.html "cpp/named req/Destructible"). [std::is_nothrow_invocable_v](../types/is_invocable.html)<CompletionFunction&> must be true.   
  
The default template argument of `CompletionFunction` is an unspecified function object type that additionally meets the requirements of [DefaultConstructible](../named_req/DefaultConstructible.html "cpp/named req/DefaultConstructible"). Calling an lvalue of it with no arguments has no effects. 

### Member types

Name  |  Definition   
---|---  
`arrival_token` |  an unspecified object type meeting requirements of [MoveConstructible](../named_req/MoveConstructible.html "cpp/named req/MoveConstructible"), [MoveAssignable](../named_req/MoveAssignable.html "cpp/named req/MoveAssignable") and [Destructible](../named_req/Destructible.html "cpp/named req/Destructible")  
  
### Data members

Member  |  Definition   
---|---  
`CompletionFunction` `_completion_` |  a completion function object which is called on every phase completion step  
(exposition-only member object*)  
  
### Member functions

[ (constructor)](barrier/barrier.html "cpp/thread/barrier/barrier") |  constructs a `barrier`   
(public member function)   
---|---  
[ (destructor)](barrier/~barrier.html "cpp/thread/barrier/~barrier") |  destroys the `barrier`   
(public member function)   
operator=[deleted] |  `barrier` is not assignable   
(public member function)  
[ arrive](barrier/arrive.html "cpp/thread/barrier/arrive") |  arrives at barrier and decrements the expected count   
(public member function)   
[ wait](barrier/wait.html "cpp/thread/barrier/wait") |  blocks at the phase synchronization point until its phase completion step is run   
(public member function)   
[ arrive_and_wait](barrier/arrive_and_wait.html "cpp/thread/barrier/arrive and wait") |  arrives at barrier and decrements the expected count by one, then blocks until current phase completes   
(public member function)   
[ arrive_and_drop](barrier/arrive_and_drop.html "cpp/thread/barrier/arrive and drop") |  decrements both the initial expected count for subsequent phases and the expected count for current phase by one   
(public member function)   
  
#####  Constants   
  
[ max](barrier/max.html "cpp/thread/barrier/max")[static] |  the maximum value of expected count supported by the implementation   
(public static member function)   
  
### Notes

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_barrier`](../experimental/feature_test.html#cpp_lib_barrier "cpp/feature test") | [`201907L`](../compiler_support/20.html#cpp_lib_barrier_201907L "cpp/compiler support/20") | (C++20) | [`std::barrier`](barrier.html#top)  
[`202302L`](../compiler_support/20.html#cpp_lib_barrier_202302L "cpp/compiler support/20") | (C++20)  
(DR) | Relaxed guarantees for phase completion   
  
### Example

Run this code
    
    
    #include <barrier>
    #include <iostream>
    #include <string>
    #include <syncstream>
    #include <thread>
    #include <vector>
     
    int main()
    {
        const auto workers = {"Anil", "Busara", "Carl"};
     
        auto on_completion = []() noexcept
        {
            // locking not needed here
            static auto phase =
                "... done\n"
                "Cleaning up...\n";
            [std::cout](../io/cout.html) << phase;
            phase = "... done\n";
        };
     
        std::barrier sync_point([std::ssize](../iterator/size.html)(workers), on_completion);
     
        auto work = [&]([std::string](../string/basic_string.html) name)
        {
            [std::string](../string/basic_string.html) product = "  " + name + " worked\n";
            [std::osyncstream](../io/basic_osyncstream.html)([std::cout](../io/cout.html)) << product;  // ok, op<< call is atomic
            sync_point.arrive_and_wait();
     
            product = "  " + name + " cleaned\n";
            [std::osyncstream](../io/basic_osyncstream.html)([std::cout](../io/cout.html)) << product;
            sync_point.arrive_and_wait();
        };
     
        [std::cout](../io/cout.html) << "Starting...\n";
        [std::vector](../container/vector.html)<[std::jthread](jthread.html)> threads;
        threads.reserve([std::size](../iterator/size.html)(workers));
        for (auto const& worker : workers)
            threads.emplace_back(work, worker);
    }

Possible output: 
    
    
    Starting...
      Anil worked
      Carl worked
      Busara worked
    ... done
    Cleaning up...
      Busara cleaned
      Carl cleaned
      Anil cleaned
    ... done

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[P2588R3](https://wg21.link/P2588R3) | C++20  | old phase completion guarantees might prevent hardware acceleration  | relaxed   
  
### See also

[ latch](latch.html "cpp/thread/latch")(C++20) |  single-use thread barrier   
(class)   
---|---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
