
  


[Concurrency support library](../atomic.html "cpp/thread")

| [Threads](../atomic.html#Threads "cpp/thread")  
---  
[thread](../thread/thread.html "cpp/thread/thread")(C++11)  
[jthread](../thread/jthread.html "cpp/thread/jthread")(C++20)  
[hardware_destructive_interference_sizehardware_constructive_interference_size](../thread/hardware_destructive_interference_size.html "cpp/thread/hardware destructive interference size")(C++17)(C++17)  
[`this_thread` namespace](../atomic.html#Functions_managing_the_current_thread "cpp/thread")  
| [get_id](../thread/get_id.html "cpp/thread/get id")(C++11)  
---  
[yield](../thread/yield.html "cpp/thread/yield")(C++11)  
  
| [sleep_for](../thread/sleep_for.html "cpp/thread/sleep for")(C++11)  
---  
[sleep_until](../thread/sleep_until.html "cpp/thread/sleep until")(C++11)  
  
[Cooperative cancellation](../atomic.html#Cooperative_cancellation "cpp/thread")  
| [stop_token](../thread/stop_token.html "cpp/thread/stop token")(C++20)  
---  
[inplace_stop_token](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/inplace_stop_token&action=edit&redlink=1 "cpp/thread/inplace stop token \(page does not exist\)")(C++26)  
[never_stop_token](../thread/never_stop_token.html "cpp/thread/never stop token")(C++26)  
[stop_source](../thread/stop_source.html "cpp/thread/stop source")(C++20)  
[inplace_stop_source](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/inplace_stop_source&action=edit&redlink=1 "cpp/thread/inplace stop source \(page does not exist\)")(C++26)` `  
[stop_callback](../thread/stop_callback.html "cpp/thread/stop callback")(C++20)  
  
| [inplace_stop_callback](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/inplace_stop_callback&action=edit&redlink=1 "cpp/thread/inplace stop callback \(page does not exist\)")(C++26)  
---  
[stop_callback_for_t](../thread/stop_callback_for_t.html "cpp/thread/stop callback for t")(C++26)  
[stoppable_token](../thread/stoppable_token.html "cpp/thread/stoppable token")(C++26)  
[unstoppable_token](../thread/unstoppable_token.html "cpp/thread/unstoppable token")(C++26)  
[_stoppable-source_](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/stoppable_source&action=edit&redlink=1 "cpp/thread/stoppable source \(page does not exist\)")(C++26)  
[_stoppable-callback-for_](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/stoppable_callback_for&action=edit&redlink=1 "cpp/thread/stoppable callback for \(page does not exist\)")(C++26)` `  
  
[Mutual exclusion](../atomic.html#Mutual_exclusion "cpp/thread")  
| [mutex](../thread/mutex.html "cpp/thread/mutex")(C++11)  
---  
[recursive_mutex](../thread/recursive_mutex.html "cpp/thread/recursive mutex")(C++11)  
[shared_mutex](../thread/shared_mutex.html "cpp/thread/shared mutex")(C++17)  
  
| [timed_mutex](../thread/timed_mutex.html "cpp/thread/timed mutex")(C++11)  
---  
[recursive_timed_mutex](../thread/recursive_timed_mutex.html "cpp/thread/recursive timed mutex")(C++11)  
[shared_timed_mutex](../thread/shared_timed_mutex.html "cpp/thread/shared timed mutex")(C++14)  
  
[Generic lock management](../atomic.html#Generic_mutex_management "cpp/thread")  
| [lock](../thread/lock.html "cpp/thread/lock")(C++11)  
---  
[lock_guard](../thread/lock_guard.html "cpp/thread/lock guard")(C++11)  
[scoped_lock](../thread/scoped_lock.html "cpp/thread/scoped lock")(C++17)  
[unique_lock](../thread/unique_lock.html "cpp/thread/unique lock")(C++11)  
[shared_lock](../thread/shared_lock.html "cpp/thread/shared lock")(C++14)  
[once_flag](../thread/once_flag.html "cpp/thread/once flag")(C++11)  
[call_once](../thread/call_once.html "cpp/thread/call once")(C++11)  
  
| [try_lock](../thread/try_lock.html "cpp/thread/try lock")(C++11)  
---  
[defer_locktry_to_lockadopt_lockdefer_lock_ttry_to_lock_tadopt_lock_t](../thread/lock_tag_t.html "cpp/thread/lock tag")(C++11)(C++11)(C++11)(C++11)(C++11)(C++11)  
  
[Condition variables](../atomic.html#Condition_variables "cpp/thread")  
[condition_variable](../thread/condition_variable.html "cpp/thread/condition variable")(C++11)  
[condition_variable_any](../thread/condition_variable_any.html "cpp/thread/condition variable any")(C++11)  
[notify_all_at_thread_exit](../thread/notify_all_at_thread_exit.html "cpp/thread/notify all at thread exit")(C++11)  
[cv_status](../thread/cv_status.html "cpp/thread/cv status")(C++11)  
[Semaphores](../atomic.html#Semaphores "cpp/thread")  
[counting_semaphorebinary_semaphore](../thread/counting_semaphore.html "cpp/thread/counting semaphore")(C++20)(C++20)  
[Latches and Barriers](../atomic.html#Latches_and_Barriers "cpp/thread")  
| [latch](../thread/latch.html "cpp/thread/latch")(C++20)  
---  
  
| [barrier](../thread/barrier.html "cpp/thread/barrier")(C++20)  
---  
  
[Futures](../atomic.html#Futures "cpp/thread")  
| [promise](../thread/promise.html "cpp/thread/promise")(C++11)  
---  
[future](../thread/future.html "cpp/thread/future")(C++11)  
[shared_future](../thread/shared_future.html "cpp/thread/shared future")(C++11)  
[packaged_task](../thread/packaged_task.html "cpp/thread/packaged task")(C++11)  
[async](../thread/async.html "cpp/thread/async")(C++11)  
  
| [launch](../thread/launch.html "cpp/thread/launch")(C++11)  
---  
[future_status](../thread/future_status.html "cpp/thread/future status")(C++11)  
[future_error](../thread/future_error.html "cpp/thread/future error")(C++11)  
[future_category](../thread/future_category.html "cpp/thread/future category")(C++11)  
[future_errc](../thread/future_errc.html "cpp/thread/future errc")(C++11)  
  
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
[atomic](atomic.html "cpp/atomic/atomic")(C++11)  
[atomic_ref](atomic_ref.html "cpp/atomic/atomic ref")(C++20)  
[atomic_flag](atomic_flag.html "cpp/atomic/atomic flag")(C++11)  
[Initialization of atomic types](../atomic.html#Initialization "cpp/thread")  
[atomic_init](atomic_init.html "cpp/atomic/atomic init")(C++11)(deprecated in C++20)  
[ATOMIC_VAR_INIT](ATOMIC_VAR_INIT.html "cpp/atomic/ATOMIC VAR INIT")(C++11)(deprecated in C++20)  
[ATOMIC_FLAG_INIT](ATOMIC_FLAG_INIT.html "cpp/atomic/ATOMIC FLAG INIT")(C++11)  
[Memory ordering](../atomic.html#Memory_synchronization_ordering "cpp/thread")  
**memory_order**(C++11)  
[kill_dependency](kill_dependency.html "cpp/atomic/kill dependency")(C++11)(deprecated in C++26)  
[atomic_thread_fence](atomic_thread_fence.html "cpp/atomic/atomic thread fence")(C++11)  
[atomic_signal_fence](atomic_signal_fence.html "cpp/atomic/atomic signal fence")(C++11)  
[Free functions for atomic operations](../atomic.html#Operations_on_atomic_types "cpp/thread")  
[atomic_storeatomic_store_explicit](atomic_store.html "cpp/atomic/atomic store")(C++11)(C++11)  
[atomic_loadatomic_load_explicit](atomic_load.html "cpp/atomic/atomic load")(C++11)(C++11)  
[atomic_exchangeatomic_exchange_explicit](atomic_exchange.html "cpp/atomic/atomic exchange")(C++11)(C++11)  
[atomic_compare_exchange_weakatomic_compare_exchange_weak_explicitatomic_compare_exchange_strongatomic_compare_exchange_strong_explicit](atomic_compare_exchange.html "cpp/atomic/atomic compare exchange")(C++11)(C++11)(C++11)(C++11)  
[atomic_fetch_addatomic_fetch_add_explicit](atomic_fetch_add.html "cpp/atomic/atomic fetch add")(C++11)(C++11)  
[atomic_fetch_subatomic_fetch_sub_explicit](atomic_fetch_sub.html "cpp/atomic/atomic fetch sub")(C++11)(C++11)  
[atomic_fetch_andatomic_fetch_and_explicit](atomic_fetch_and.html "cpp/atomic/atomic fetch and")(C++11)(C++11)  
[atomic_fetch_oratomic_fetch_or_explicit](atomic_fetch_or.html "cpp/atomic/atomic fetch or")(C++11)(C++11)  
[atomic_fetch_xoratomic_fetch_xor_explicit](atomic_fetch_xor.html "cpp/atomic/atomic fetch xor")(C++11)(C++11)  
[atomic_fetch_maxatomic_fetch_max_explicit](atomic_fetch_max.html "cpp/atomic/atomic fetch max")(C++26)(C++26)  
[atomic_fetch_minatomic_fetch_min_explicit](atomic_fetch_min.html "cpp/atomic/atomic fetch min")(C++26)(C++26)  
[atomic_is_lock_free](atomic_is_lock_free.html "cpp/atomic/atomic is lock free")(C++11)  
[atomic_waitatomic_wait_explicit](atomic_wait.html "cpp/atomic/atomic wait")(C++20)(C++20)  
[atomic_notify_one](atomic_notify_one.html "cpp/atomic/atomic notify one")(C++20)  
[atomic_notify_all](atomic_notify_all.html "cpp/atomic/atomic notify all")(C++20)  
[Free functions for atomic flags](../atomic.html#Flag_type_and_operations "cpp/thread")  
[atomic_flag_test_and_setatomic_flag_test_and_set_explicit](atomic_flag_test_and_set.html "cpp/atomic/atomic flag test and set")(C++11)(C++11)  
[atomic_flag_clearatomic_flag_clear_explicit](atomic_flag_clear.html "cpp/atomic/atomic flag clear")(C++11)(C++11)  
[atomic_flag_testatomic_flag_test_explicit](atomic_flag_test.html "cpp/atomic/atomic flag test")(C++20)(C++20)  
[atomic_flag_waitatomic_flag_wait_explicit](atomic_flag_wait.html "cpp/atomic/atomic flag wait")(C++20)(C++20)  
[atomic_flag_notify_one](atomic_flag_notify_one.html "cpp/atomic/atomic flag notify one")(C++20)  
[atomic_flag_notify_all](atomic_flag_notify_all.html "cpp/atomic/atomic flag notify all")(C++20)  
  


Defined in header `[<atomic>](../header/atomic.html "cpp/header/atomic")` |  |   
---|---|---  
enum memory_order  
{  
memory_order_relaxed,  
memory_order_consume,  
memory_order_acquire,  
memory_order_release,  
memory_order_acq_rel,  
memory_order_seq_cst  
}; |  | (since C++11)   
(until C++20)  
enum class memory_order : /* unspecified */  
{  
relaxed, consume, acquire, release, acq_rel, seq_cst  
};  
inline constexpr memory_order memory_order_relaxed = memory_order::relaxed;  
inline constexpr memory_order memory_order_consume = memory_order::consume;  
inline constexpr memory_order memory_order_acquire = memory_order::acquire;  
inline constexpr memory_order memory_order_release = memory_order::release;  
inline constexpr memory_order memory_order_acq_rel = memory_order::acq_rel;  
inline constexpr memory_order memory_order_seq_cst = memory_order::seq_cst; |  |  (since C++20)  
| |   
  
`std::memory_order` specifies how memory accesses, including regular, non-atomic memory accesses, are to be ordered around an atomic operation. Absent any constraints on a multi-core system, when multiple threads simultaneously read and write to several variables, one thread can observe the values change in an order different from the order another thread wrote them. Indeed, the apparent order of changes can even differ among multiple reader threads. Some similar effects can occur even on uniprocessor systems due to compiler transformations allowed by the memory model. 

The default behavior of all atomic operations in the library provides for _sequentially consistent ordering_ (see discussion below). That default can hurt performance, but the library's atomic operations can be given an additional `std::memory_order` argument to specify the exact constraints, beyond atomicity, that the compiler and processor must enforce for that operation. 

## Contents

  * [1 Constants](memory_order.html#Constants)
  * [2 Formal description](memory_order.html#Formal_description)
    * [2.1 Sequenced-before](memory_order.html#Sequenced-before)
    * [2.2 Carries dependency](memory_order.html#Carries_dependency)
    * [2.3 Modification order](memory_order.html#Modification_order)
    * [2.4 Release sequence](memory_order.html#Release_sequence)
    * [2.5 Synchronizes with](memory_order.html#Synchronizes_with)
    * [2.6 Dependency-ordered before](memory_order.html#Dependency-ordered_before)
    * [2.7 Inter-thread happens-before](memory_order.html#Inter-thread_happens-before)
    * [2.8 Happens-before](memory_order.html#Happens-before)
    * [2.9 Simply happens-before](memory_order.html#Simply_happens-before)
    * [2.10 Happens-before](memory_order.html#Happens-before_2)
    * [2.11 Strongly happens-before](memory_order.html#Strongly_happens-before)
    * [2.12 Visible side-effects](memory_order.html#Visible_side-effects)
    * [2.13 Consume operation](memory_order.html#Consume_operation)
    * [2.14 Acquire operation](memory_order.html#Acquire_operation)
    * [2.15 Release operation](memory_order.html#Release_operation)
  * [3 Explanation](memory_order.html#Explanation)
    * [3.1 Relaxed ordering](memory_order.html#Relaxed_ordering)
    * [3.2 Release-Acquire ordering](memory_order.html#Release-Acquire_ordering)
    * [3.3 Release-Consume ordering](memory_order.html#Release-Consume_ordering)
    * [3.4 Sequentially-consistent ordering](memory_order.html#Sequentially-consistent_ordering)
  * [4 Relationship with volatile](memory_order.html#Relationship_with_volatile)
  * [5 See also](memory_order.html#See_also)
  * [6 External links](memory_order.html#External_links)

  
---  
  
### Constants

Defined in header `[<atomic>](../header/atomic.html "cpp/header/atomic")`  
---  
Name  |  Meaning   
`memory_order_relaxed` |  Relaxed operation: there are no synchronization or ordering constraints imposed on other reads or writes, only this operation's atomicity is guaranteed (see [Relaxed ordering](memory_order.html#Relaxed_ordering) below).   
`memory_order_consume`  
(deprecated in C++26) |  A load operation with this memory order performs a _consume operation_ on the affected memory location: no reads or writes in the current thread dependent on the value currently loaded can be reordered before this load. Writes to data-dependent variables in other threads that release the same atomic variable are visible in the current thread. On most platforms, this affects compiler optimizations only (see [Release-Consume ordering](memory_order.html#Release-Consume_ordering) below).   
`memory_order_acquire` |  A load operation with this memory order performs the _acquire operation_ on the affected memory location: no reads or writes in the current thread can be reordered before this load. All writes in other threads that release the same atomic variable are visible in the current thread (see [Release-Acquire ordering](memory_order.html#Release-Acquire_ordering) below).   
`memory_order_release` |  A store operation with this memory order performs the _release operation_ : no reads or writes in the current thread can be reordered after this store. All writes in the current thread are visible in other threads that acquire the same atomic variable (see [Release-Acquire ordering](memory_order.html#Release-Acquire_ordering) below) and writes that carry a dependency into the atomic variable become visible in other threads that consume the same atomic (see [Release-Consume ordering](memory_order.html#Release-Consume_ordering) below).   
`memory_order_acq_rel` |  A read-modify-write operation with this memory order is both an _acquire operation_ and a _release operation_. No memory reads or writes in the current thread can be reordered before the load, nor after the store. All writes in other threads that release the same atomic variable are visible before the modification and the modification is visible in other threads that acquire the same atomic variable.   
`memory_order_seq_cst` |  A load operation with this memory order performs an _acquire operation_ , a store performs a _release operation_ , and read-modify-write performs both an _acquire operation_ and a _release operation_ , plus a single total order exists in which all threads observe all modifications in the same order (see [Sequentially-consistent ordering](memory_order.html#Sequentially-consistent_ordering) below).   
  
### Formal description

Inter-thread synchronization and memory ordering determine how _evaluations_ and _side effects_ of expressions are ordered between different threads of execution. They are defined in the following terms: 

#### Sequenced-before

Within the same thread, evaluation A may be _sequenced-before_ evaluation B, as described in [evaluation order](../language/eval_order.html "cpp/language/eval order"). 

####  Carries dependency

Within the same thread, evaluation A that is _sequenced-before_ evaluation B may also carry a dependency into B (that is, B depends on A), if any of the following is true:  1) The value of A is used as an operand of B, **except** a) if B is a call to [std::kill_dependency](kill_dependency.html "cpp/atomic/kill dependency"), b) if A is the left operand of the built-in &&, ||, ?:, or , operators. 2) A writes to a scalar object M, B reads from M. 3) A carries dependency into another evaluation X, and X carries dependency into B. | (until C++26)  
---|---  
  
#### Modification order

All modifications to any particular atomic variable occur in a total order that is specific to this one atomic variable. 

The following four requirements are guaranteed for all atomic operations: 

1) **Write-write coherence** : If evaluation A that modifies some atomic M (a write) _happens-before_ evaluation B that modifies M, then A appears earlier than B in the _modification order_ of M.

2) **Read-read coherence** : if a value computation A of some atomic M (a read) _happens-before_ a value computation B on M, and if the value of A comes from a write X on M, then the value of B is either the value stored by X, or the value stored by a side effect Y on M that appears later than X in the _modification order_ of M.

3) **Read-write coherence** : if a value computation A of some atomic M (a read) _happens-before_ an operation B on M (a write), then the value of A comes from a side-effect (a write) X that appears earlier than B in the _modification order_ of M.

4) **Write-read coherence** : if a side effect (a write) X on an atomic object M _happens-before_ a value computation (a read) B of M, then the evaluation B shall take its value from X or from a side effect Y that follows X in the modification order of M.

#### Release sequence

After a _release operation_ A is performed on an atomic object M, the longest continuous subsequence of the modification order of M that consists of: 

1) Writes performed by the same thread that performed A. | (until C++20)  
---|---  
  
2) Atomic read-modify-write operations made to M by any thread.

Is known as _release sequence headed by A_. 

#### Synchronizes with

If an atomic store in thread A is a _release operation_ , an atomic load in thread B from the same variable is an _acquire operation_ , and the load in thread B reads a value written by the store in thread A, then the store in thread A _synchronizes-with_ the load in thread B. 

Also, some library calls may be defined to _synchronize-with_ other library calls on other threads. 

####  Dependency-ordered before

Between threads, evaluation A is _dependency-ordered before_ evaluation B if any of the following is true:  1) A performs a _release operation_ on some atomic M, and, in a different thread, B performs a _consume operation_ on the same atomic M, and B reads a value written by any part of the release sequence headed(until C++20) by A. 2) A is dependency-ordered before X and X carries a dependency into B. | (until C++26)  
---|---  
  
#### Inter-thread happens-before

Between threads, evaluation A _inter-thread happens before_ evaluation B if any of the following is true: 

1) A _synchronizes-with_ B.

2) A is _dependency-ordered before_ B.

3) A _synchronizes-with_ some evaluation X, and X is _sequenced-before_ B.

4) A is _sequenced-before_ some evaluation X, and X _inter-thread happens-before_ B.

5) A _inter-thread happens-before_ some evaluation X, and X _inter-thread happens-before_ B.

  


####  Happens-before

Regardless of threads, evaluation A _happens-before_ evaluation B if any of the following is true:  1) A is _sequenced-before_ B. 2) A _inter-thread happens before_ B. The implementation is required to ensure that the _happens-before_ relation is acyclic, by introducing additional synchronization if necessary (it can only be necessary if a consume operation is involved, see [Batty et al](https://www.cl.cam.ac.uk/~pes20/cpp/popl085ap-sewell.pdf)). If one evaluation modifies a memory location, and the other reads or modifies the same memory location, and if at least one of the evaluations is not an atomic operation, the behavior of the program is undefined (the program has a [data race](../language/multithread.html "cpp/language/multithread")) unless there exists a _happens-before_ relationship between these two evaluations.  | 

####  Simply happens-before

Regardless of threads, evaluation A _simply happens-before_ evaluation B if any of the following is true:  1) A is _sequenced-before_ B. 2) A _synchronizes-with_ B. 3) A _simply happens-before_ X, and X _simply happens-before_ B. Note: without consume operations, _simply happens-before_ and _happens-before_ relations are the same.  | (since C++20)  
---|---  
(until C++26)  
  
####  Happens-before

Regardless of threads, evaluation A _happens-before_ evaluation B if any of the following is true:  1) A is _sequenced-before_ B. 2) A _synchronizes-with_ B. 3) A _happens-before_ X, and X _happens-before_ B.  | (since C++26)  
  
#### Strongly happens-before

Regardless of threads, evaluation A _strongly happens-before_ evaluation B if any of the following is true: 

1) A is _sequenced-before_ B. 2) A _synchronizes-with_ B. 3) A _strongly happens-before_ X, and X _strongly happens-before_ B.  | (until C++20)  
---|---  
1) A is _sequenced-before_ B. 2) A _synchronizes with_ B, and both A and B are sequentially consistent atomic operations. 3) A is _sequenced-before_ X, X _simply(until C++26) happens-before_ Y, and Y is _sequenced-before_ B. 4) A _strongly happens-before_ X, and X _strongly happens-before_ B. Note: informally, if A _strongly happens-before_ B, then A appears to be evaluated before B in all contexts.  |  Note: _strongly happens-before_ excludes consume operations.  | (until C++26)  
---|---  
(since C++20)  
  
#### Visible side-effects

The side-effect A on a scalar M (a write) is _visible_ with respect to value computation B on M (a read) if both of the following are true: 

1) A _happens-before_ B.

2) There is no other side effect X to M where A _happens-before_ X and X _happens-before_ B.

If side-effect A is visible with respect to the value computation B, then the longest contiguous subset of the side-effects to M, in _modification order_ , where B does not _happen-before_ it is known as the _visible sequence of side-effects_ (the value of M, determined by B, will be the value stored by one of these side effects). 

Note: inter-thread synchronization boils down to preventing data races (by establishing happens-before relationships) and defining which side effects become visible under what conditions. 

#### Consume operation

Atomic load with `memory_order_consume` or stronger is a consume operation. Note that [std::atomic_thread_fence](atomic_thread_fence.html "cpp/atomic/atomic thread fence") imposes stronger synchronization requirements than a consume operation. 

#### Acquire operation

Atomic load with `memory_order_acquire` or stronger is an acquire operation. The `lock()` operation on a [Mutex](../named_req/Mutex.html "cpp/named req/Mutex") is also an acquire operation. Note that [std::atomic_thread_fence](atomic_thread_fence.html "cpp/atomic/atomic thread fence") imposes stronger synchronization requirements than an acquire operation. 

#### Release operation

Atomic store with `memory_order_release` or stronger is a release operation. The `unlock()` operation on a [Mutex](../named_req/Mutex.html "cpp/named req/Mutex") is also a release operation. Note that [std::atomic_thread_fence](atomic_thread_fence.html "cpp/atomic/atomic thread fence") imposes stronger synchronization requirements than a release operation. 

### Explanation

#### Relaxed ordering

Atomic operations tagged memory_order_relaxed are not synchronization operations; they do not impose an order among concurrent memory accesses. They only guarantee atomicity and modification order consistency. 

For example, with x and y initially zero, 
    
    
    // Thread 1:
    r1 = y.load(std::memory_order_relaxed); // A
    x.store(r1, std::memory_order_relaxed); // B
    // Thread 2:
    r2 = x.load(std::memory_order_relaxed); // C 
    y.store(42, std::memory_order_relaxed); // D

is allowed to produce r1 == r2 == 42 because, although A is _sequenced-before_ B within thread 1 and C is _sequenced before_ D within thread 2, nothing prevents D from appearing before A in the modification order of y, and B from appearing before C in the modification order of x. The side-effect of D on y could be visible to the load A in thread 1 while the side effect of B on x could be visible to the load C in thread 2. In particular, this may occur if D is completed before C in thread 2, either due to compiler reordering or at runtime. 

Even with relaxed memory model, out-of-thin-air values are not allowed to circularly depend on their own computations, for example, with x and y initially zero, 
    
    
    // Thread 1:
    r1 = y.load(std::memory_order_relaxed);
    if (r1 == 42)
        x.store(r1, std::memory_order_relaxed);
    // Thread 2:
    r2 = x.load(std::memory_order_relaxed);
    if (r2 == 42)
        y.store(42, std::memory_order_relaxed);

is not allowed to produce r1 == r2 == 42 since the store of 42 to y is only possible if the store to x stores 42, which circularly depends on the store to y storing 42. Note that until C++14, this was technically allowed by the specification, but not recommended for implementors.  | (since C++14)  
---|---  
  
Typical use for relaxed memory ordering is incrementing counters, such as the reference counters of [std::shared_ptr](../memory/shared_ptr.html "cpp/memory/shared ptr"), since this only requires atomicity, but not ordering or synchronization (note that decrementing the `std::shared_ptr` counters requires acquire-release synchronization with the destructor). 

Run this code
    
    
    #include <atomic>
    #include <iostream>
    #include <thread>
    #include <vector>
     
    [std::atomic](atomic.html)<int> cnt = {0};
     
    void f()
    {
        for (int n = 0; n < 1000; ++n)
            cnt.fetch_add(1, std::memory_order_relaxed);
    }
     
    int main()
    {
        [std::vector](../container/vector.html)<[std::thread](../thread/thread.html)> v;
        for (int n = 0; n < 10; ++n)
            v.emplace_back(f);
        for (auto& t : v)
            t.join();
        [std::cout](../io/cout.html) << "Final counter value is " << cnt << '\n';
    }

Output: 
    
    
    Final counter value is 10000

#### Release-Acquire ordering

If an atomic store in thread A is tagged memory_order_release, an atomic load in thread B from the same variable is tagged memory_order_acquire, and the load in thread B reads a value written by the store in thread A, then the store in thread A _synchronizes-with_ the load in thread B. 

All memory writes (including non-atomic and relaxed atomic) that _happened-before_ the atomic store from the point of view of thread A, become _visible side-effects_ in thread B. That is, once the atomic load is completed, thread B is guaranteed to see everything thread A wrote to memory. This promise only holds if B actually returns the value that A stored, or a value from later in the release sequence. 

The synchronization is established only between the threads _releasing_ and _acquiring_ the same atomic variable. Other threads can see different order of memory accesses than either or both of the synchronized threads. 

On strongly-ordered systems — x86, SPARC TSO, IBM mainframe, etc. — release-acquire ordering is automatic for the majority of operations. No additional CPU instructions are issued for this synchronization mode; only certain compiler optimizations are affected (e.g., the compiler is prohibited from moving non-atomic stores past the atomic store-release or performing non-atomic loads earlier than the atomic load-acquire). On weakly-ordered systems (ARM, Itanium, PowerPC), special CPU load or memory fence instructions are used. 

Mutual exclusion locks, such as [std::mutex](../thread/mutex.html "cpp/thread/mutex") or [atomic spinlock](atomic_flag.html "cpp/atomic/atomic flag"), are an example of release-acquire synchronization: when the lock is released by thread A and acquired by thread B, everything that took place in the critical section (before the release) in the context of thread A has to be visible to thread B (after the acquire) which is executing the same critical section. 

Run this code
    
    
    #include <atomic>
    #include <cassert>
    #include <string>
    #include <thread>
     
    [std::atomic](atomic.html)<[std::string](../string/basic_string.html)*> ptr;
    int data;
     
    void producer()
    {
        [std::string](../string/basic_string.html)* p = new [std::string](../string/basic_string.html)("Hello");
        data = 42;
        ptr.store(p, std::memory_order_release);
    }
     
    void consumer()
    {
        [std::string](../string/basic_string.html)* p2;
        while (!(p2 = ptr.load(std::memory_order_acquire)))
            ;
        [assert](../error/assert.html)(*p2 == "Hello"); // never fires
        [assert](../error/assert.html)(data == 42); // never fires
    }
     
    int main()
    {
        [std::thread](../thread/thread.html) t1(producer);
        [std::thread](../thread/thread.html) t2(consumer);
        t1.join(); t2.join();
    }

The following example demonstrates transitive release-acquire ordering across three threads, using a release sequence.

Run this code
    
    
    #include <atomic>
    #include <cassert>
    #include <thread>
    #include <vector>
     
    [std::vector](../container/vector.html)<int> data;
    [std::atomic](atomic.html)<int> flag = {0};
     
    void thread_1()
    {
        data.push_back(42);
        flag.store(1, std::memory_order_release);
    }
     
    void thread_2()
    {
        int expected = 1;
        // memory_order_relaxed is okay because this is an RMW,
        // and RMWs (with any ordering) following a release form a release sequence
        while (!flag.compare_exchange_strong(expected, 2, std::memory_order_relaxed))
        {
            expected = 1;
        }
    }
     
    void thread_3()
    {
        while (flag.load(std::memory_order_acquire) < 2)
            ;
        // if we read the value 2 from the atomic flag, we see 42 in the vector
        [assert](../error/assert.html)(data.at(0) == 42); // will never fire
    }
     
    int main()
    {
        [std::thread](../thread/thread.html) a(thread_1);
        [std::thread](../thread/thread.html) b(thread_2);
        [std::thread](../thread/thread.html) c(thread_3);
        a.join(); b.join(); c.join();
    }

#### Release-Consume ordering

If an atomic store in thread A is tagged memory_order_release, an atomic load in thread B from the same variable is tagged memory_order_consume, and the load in thread B reads a value written by the store in thread A, then the store in thread A is _dependency-ordered before_ the load in thread B. All memory writes (non-atomic and relaxed atomic) that _happened-before_ the atomic store from the point of view of thread A, become _visible side-effects_ within those operations in thread B into which the load operation _carries dependency_ , that is, once the atomic load is completed, those operators and functions in thread B that use the value obtained from the load are guaranteed to see what thread A wrote to memory. The synchronization is established only between the threads _releasing_ and _consuming_ the same atomic variable. Other threads can see different order of memory accesses than either or both of the synchronized threads. On all mainstream CPUs other than DEC Alpha, dependency ordering is automatic, no additional CPU instructions are issued for this synchronization mode, only certain compiler optimizations are affected (e.g. the compiler is prohibited from performing speculative loads on the objects that are involved in the dependency chain). Typical use cases for this ordering involve read access to rarely written concurrent data structures (routing tables, configuration, security policies, firewall rules, etc) and publisher-subscriber situations with pointer-mediated publication, that is, when the producer publishes a pointer through which the consumer can access information: there is no need to make everything else the producer wrote to memory visible to the consumer (which may be an expensive operation on weakly-ordered architectures). An example of such scenario is [`rcu_dereference`](https://en.wikipedia.org/wiki/Read-copy-update "enwiki:Read-copy-update").  See also [std::kill_dependency](kill_dependency.html "cpp/atomic/kill dependency") and `[[[carries_dependency](../language/attributes/carries_dependency.html "cpp/language/attributes/carries dependency")]]` for fine-grained dependency chain control. Note that currently (2/2015) no known production compilers track dependency chains: consume operations are lifted to acquire operations.  | (until C++26)  
---|---  
The specification of release-consume ordering is being revised, and the use of `memory_order_consume` is temporarily discouraged.  | (since C++17)  
(until C++26)  
---|---  
Release-consume ordering has the same effect as release-acquire ordering and is deprecated.  | (since C++26)  
  
This example demonstrates dependency-ordered synchronization for pointer-mediated publication: the integer data is not related to the pointer to string by a data-dependency relationship, thus its value is undefined in the consumer.

Run this code
    
    
    #include <atomic>
    #include <cassert>
    #include <string>
    #include <thread>
     
    [std::atomic](atomic.html)<[std::string](../string/basic_string.html)*> ptr;
    int data;
     
    void producer()
    {
        [std::string](../string/basic_string.html)* p = new [std::string](../string/basic_string.html)("Hello");
        data = 42;
        ptr.store(p, std::memory_order_release);
    }
     
    void consumer()
    {
        [std::string](../string/basic_string.html)* p2;
        while (!(p2 = ptr.load(std::memory_order_consume)))
            ;
        [assert](../error/assert.html)(*p2 == "Hello"); // never fires: *p2 carries dependency from ptr
        [assert](../error/assert.html)(data == 42); // may or may not fire: data does not carry dependency from ptr
    }
     
    int main()
    {
        [std::thread](../thread/thread.html) t1(producer);
        [std::thread](../thread/thread.html) t2(consumer);
        t1.join(); t2.join();
    }

  


#### Sequentially-consistent ordering

Atomic operations tagged memory_order_seq_cst not only order memory the same way as release/acquire ordering (everything that _happened-before_ a store in one thread becomes a _visible side effect_ in the thread that did a load), but also establish a _single total modification order_ of all atomic operations that are so tagged. 

Formally, each `memory_order_seq_cst` operation B that loads from atomic variable M, observes one of the following: 

  * the result of the last operation A that modified M, which appears before B in the single total order, 
  * OR, if there was such an A, B may observe the result of some modification on M that is not `memory_order_seq_cst` and does not _happen-before_ A, 
  * OR, if there wasn't such an A, B may observe the result of some unrelated modification of M that is not `memory_order_seq_cst`. 

If there was a `memory_order_seq_cst` [std::atomic_thread_fence](atomic_thread_fence.html "cpp/atomic/atomic thread fence") operation X _sequenced-before_ B, then B observes one of the following: 

  * the last `memory_order_seq_cst` modification of M that appears before X in the single total order, 
  * some unrelated modification of M that appears later in M's modification order. 

For a pair of atomic operations on M called A and B, where A writes and B reads M's value, if there are two `memory_order_seq_cst` [std::atomic_thread_fence](atomic_thread_fence.html "cpp/atomic/atomic thread fence")s X and Y, and if A is _sequenced-before_ X, Y is _sequenced-before_ B, and X appears before Y in the Single Total Order, then B observes either: 

  * the effect of A, 
  * some unrelated modification of M that appears after A in M's modification order. 

For a pair of atomic modifications of M called A and B, B occurs after A in M's modification order if 

  * there is a `memory_order_seq_cst` [std::atomic_thread_fence](atomic_thread_fence.html "cpp/atomic/atomic thread fence") X such that A is _sequenced-before_ X and X appears before B in the Single Total Order, 
  * or, there is a `memory_order_seq_cst` [std::atomic_thread_fence](atomic_thread_fence.html "cpp/atomic/atomic thread fence") Y such that Y is _sequenced-before_ B and A appears before Y in the Single Total Order, 
  * or, there are `memory_order_seq_cst` [std::atomic_thread_fence](atomic_thread_fence.html "cpp/atomic/atomic thread fence")s X and Y such that A is _sequenced-before_ X, Y is _sequenced-before_ B, and X appears before Y in the Single Total Order. 

Note that this means that:  1) as soon as atomic operations that are not tagged `memory_order_seq_cst` enter the picture, the sequential consistency is lost, 2) the sequentially-consistent fences are only establishing total ordering for the fences themselves, not for the atomic operations in the general case (_sequenced-before_ is not a cross-thread relationship, unlike _happens-before_). | (until C++20)  
---|---  
Formally, an atomic operation A on some atomic object M is _coherence-ordered-before_ another atomic operation B on M if any of the following is true:  1) A is a modification, and B reads the value stored by A, 2) A precedes B in the _modification order_ of M, 3) A reads the value stored by an atomic modification X, X precedes B in the _modification order_ , and A and B are not the same atomic read-modify-write operation, 4) A is _coherence-ordered-before_ X, and X is _coherence-ordered-before_ B. There is a single total order S on all `memory_order_seq_cst` operations, including fences, that satisfies the following constraints:  1) if A and B are `memory_order_seq_cst` operations, and A _strongly happens-before_ B, then A precedes B in S, 2) for every pair of atomic operations A and B on an object M, where A is _coherence-ordered-before_ B: a) if A and B are both `memory_order_seq_cst` operations, then A precedes B in S, b) if A is a `memory_order_seq_cst` operation, and B _happens-before_ a `memory_order_seq_cst` fence Y, then A precedes Y in S, c) if a `memory_order_seq_cst` fence X _happens-before_ A, and B is a `memory_order_seq_cst` operation, then X precedes B in S, d) if a `memory_order_seq_cst` fence X _happens-before_ A, and B _happens-before_ a `memory_order_seq_cst` fence Y, then X precedes Y in S. The formal definition ensures that:  1) the single total order is consistent with the _modification order_ of any atomic object, 2) a `memory_order_seq_cst` load gets its value either from the last `memory_order_seq_cst` modification, or from some non-`memory_order_seq_cst` modification that does not _happen-before_ preceding `memory_order_seq_cst` modifications. The single total order might not be consistent with _happens-before_. This allows more efficient implementation of `memory_order_acquire` and `memory_order_release` on some CPUs. It can produce surprising results when `memory_order_acquire` and `memory_order_release` are mixed with `memory_order_seq_cst`. For example, with `x` and `y` initially zero, 
    
    
    // Thread 1:
    x.store(1, std::memory_order_seq_cst); // A
    y.store(1, std::memory_order_release); // B
    // Thread 2:
    r1 = y.fetch_add(1, std::memory_order_seq_cst); // C
    r2 = y.load(std::memory_order_relaxed); // D
    // Thread 3:
    y.store(3, std::memory_order_seq_cst); // E
    r3 = x.load(std::memory_order_seq_cst); // F

is allowed to produce r1 == 1 && r2 == 3 && r3 == 0, where A _happens-before_ C, but C precedes A in the single total order C-E-F-A of `memory_order_seq_cst` (see [Lahav et al](https://plv.mpi-sws.org/scfix/paper.pdf)). Note that:  1) as soon as atomic operations that are not tagged `memory_order_seq_cst` enter the picture, the sequential consistency guarantee for the program is lost, 2) in many cases, `memory_order_seq_cst` atomic operations are reorderable with respect to other atomic operations performed by the same thread. | (since C++20)  
  
Sequential ordering may be necessary for multiple producer-multiple consumer situations where all consumers must observe the actions of all producers occurring in the same order. 

Total sequential ordering requires a full memory fence CPU instruction on all multi-core systems. This may become a performance bottleneck since it forces the affected memory accesses to propagate to every core. 

This example demonstrates a situation where sequential ordering is necessary. Any other ordering may trigger the assert because it would be possible for the threads `c` and `d` to observe changes to the atomics `x` and `y` in opposite order.

Run this code
    
    
    #include <atomic>
    #include <cassert>
    #include <thread>
     
    [std::atomic](atomic.html)<bool> x = {false};
    [std::atomic](atomic.html)<bool> y = {false};
    [std::atomic](atomic.html)<int> z = {0};
     
    void write_x()
    {
        x.store(true, std::memory_order_seq_cst);
    }
     
    void write_y()
    {
        y.store(true, std::memory_order_seq_cst);
    }
     
    void read_x_then_y()
    {
        while (!x.load(std::memory_order_seq_cst))
            ;
        if (y.load(std::memory_order_seq_cst))
            ++z;
    }
     
    void read_y_then_x()
    {
        while (!y.load(std::memory_order_seq_cst))
            ;
        if (x.load(std::memory_order_seq_cst))
            ++z;
    }
     
    int main()
    {
        [std::thread](../thread/thread.html) a(write_x);
        [std::thread](../thread/thread.html) b(write_y);
        [std::thread](../thread/thread.html) c(read_x_then_y);
        [std::thread](../thread/thread.html) d(read_y_then_x);
        a.join(); b.join(); c.join(); d.join();
        [assert](../error/assert.html)(z.load() != 0); // will never happen
    }

### Relationship with volatile

Within a thread of execution, accesses (reads and writes) through [volatile glvalues](../language/cv.html "cpp/language/cv") cannot be reordered past observable side-effects (including other volatile accesses) that are _sequenced-before_ or _sequenced-after_ within the same thread, but this order is not guaranteed to be observed by another thread, since volatile access does not establish inter-thread synchronization. 

In addition, volatile accesses are not atomic (concurrent read and write is a [data race](../language/memory_model.html "cpp/language/memory model")) and do not order memory (non-volatile memory accesses may be freely reordered around the volatile access). 

One notable exception is Visual Studio, where, with default settings, every volatile write has release semantics and every volatile read has acquire semantics ([Microsoft Docs](https://learn.microsoft.com/en-us/cpp/cpp/volatile-cpp)), and thus volatiles may be used for inter-thread synchronization. Standard volatile semantics are not applicable to multi-threaded programming, although they are sufficient for e.g. communication with a [std::signal](../utility/program/signal.html "cpp/utility/program/signal") handler that runs in the same thread when applied to sig_atomic_t variables. The compiler option `/volatile:iso` can be used to restore behavior consistent with the standard, which is the default setting when the target platform is ARM. 

### See also

[C documentation](../../c/atomic/memory_order.html "c/atomic/memory order") for memory order  
---  
  
### External links

1\.  | [MOESI protocol](https://en.wikipedia.org/wiki/MOESI_protocol "enwiki:MOESI protocol")  
---|---  
2\.  | [x86-TSO: A Rigorous and Usable Programmer’s Model for x86 Multiprocessors](https://www.cl.cam.ac.uk/~pes20/weakmemory/cacm.pdf) P. Sewell et. al., 2010   
3\.  | [A Tutorial Introduction to the ARM and POWER Relaxed Memory Models](https://www.cl.cam.ac.uk/~pes20/ppc-supplemental/test7.pdf) P. Sewell et al, 2012   
4\.  | [MESIF: A Two-Hop Cache Coherency Protocol for Point-to-Point Interconnects](https://researchspace.auckland.ac.nz/bitstream/handle/2292/11594/MESIF-2009.pdf?sequence=6) J.R. Goodman, H.H.J. Hum, 2009   
5\.  | [Memory Models](https://research.swtch.com/mm) Russ Cox, 2021   
| This section is incomplete  
Reason: Let's find good refs on QPI, MOESI, and maybe Dragon.   
---|---
