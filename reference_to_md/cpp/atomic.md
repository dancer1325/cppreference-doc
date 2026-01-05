[C++](../cpp.html "cpp")

[Compiler support](compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](freestanding.html "cpp/freestanding")  
[Language](language.html "cpp/language")  
[Standard library](standard_library.html "cpp/standard library")  
[Standard library headers](headers.html "cpp/header")  
[Named requirements](iterator/concepts.html "cpp/named req")  
[Feature test macros](experimental/feature_test.html "cpp/feature test") (C++20)  
[Language support library](utility.html#Language_support "cpp/utility")  
[Concepts library](concepts.html "cpp/concepts") (C++20)  
[Diagnostics library](error.html "cpp/error")  
[Memory management library](memory.html "cpp/memory")  
[Metaprogramming library](meta.html "cpp/meta") (C++11)  
[General utilities library](utility.html "cpp/utility")  
[Containers library](container.html "cpp/container")  
[Iterators library](iterator.html "cpp/iterator")  
[Ranges library](ranges.html "cpp/ranges") (C++20)  
[Algorithms library](algorithm.html "cpp/algorithm")  
[Strings library](string.html "cpp/string")  
[Text processing library](text.html "cpp/text")  
[Numerics library](numeric.html "cpp/numeric")  
[Date and time library](chrono.html "cpp/chrono")  
[Input/output library](io.html "cpp/io")  
[Filesystem library](filesystem.html "cpp/filesystem") (C++17)  
**Concurrency support library** (C++11)  
[Execution control library](experimental/execution.html "cpp/execution") (C++26)  
[Technical specifications](experimental.html "cpp/experimental")  
[Symbols index](symbol_index.html "cpp/symbol index")  
[External libraries](links/libs.html "cpp/links/libs")  
  


**Concurrency support library**

| [Threads](atomic.html#Threads "cpp/thread")  
---  
[thread](thread/thread.html "cpp/thread/thread")(C++11)  
[jthread](thread/jthread.html "cpp/thread/jthread")(C++20)  
[hardware_destructive_interference_sizehardware_constructive_interference_size](thread/hardware_destructive_interference_size.html "cpp/thread/hardware destructive interference size")(C++17)(C++17)  
[`this_thread` namespace](atomic.html#Functions_managing_the_current_thread "cpp/thread")  
| [get_id](thread/get_id.html "cpp/thread/get id")(C++11)  
---  
[yield](thread/yield.html "cpp/thread/yield")(C++11)  
  
| [sleep_for](thread/sleep_for.html "cpp/thread/sleep for")(C++11)  
---  
[sleep_until](thread/sleep_until.html "cpp/thread/sleep until")(C++11)  
  
[Cooperative cancellation](atomic.html#Cooperative_cancellation "cpp/thread")  
| [stop_token](thread/stop_token.html "cpp/thread/stop token")(C++20)  
---  
[inplace_stop_token](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/inplace_stop_token&action=edit&redlink=1 "cpp/thread/inplace stop token \(page does not exist\)")(C++26)  
[never_stop_token](thread/never_stop_token.html "cpp/thread/never stop token")(C++26)  
[stop_source](thread/stop_source.html "cpp/thread/stop source")(C++20)  
[inplace_stop_source](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/inplace_stop_source&action=edit&redlink=1 "cpp/thread/inplace stop source \(page does not exist\)")(C++26)` `  
[stop_callback](thread/stop_callback.html "cpp/thread/stop callback")(C++20)  
  
| [inplace_stop_callback](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/inplace_stop_callback&action=edit&redlink=1 "cpp/thread/inplace stop callback \(page does not exist\)")(C++26)  
---  
[stop_callback_for_t](thread/stop_callback_for_t.html "cpp/thread/stop callback for t")(C++26)  
[stoppable_token](thread/stoppable_token.html "cpp/thread/stoppable token")(C++26)  
[unstoppable_token](thread/unstoppable_token.html "cpp/thread/unstoppable token")(C++26)  
[_stoppable-source_](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/stoppable_source&action=edit&redlink=1 "cpp/thread/stoppable source \(page does not exist\)")(C++26)  
[_stoppable-callback-for_](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/stoppable_callback_for&action=edit&redlink=1 "cpp/thread/stoppable callback for \(page does not exist\)")(C++26)` `  
  
[Mutual exclusion](atomic.html#Mutual_exclusion "cpp/thread")  
| [mutex](thread/mutex.html "cpp/thread/mutex")(C++11)  
---  
[recursive_mutex](thread/recursive_mutex.html "cpp/thread/recursive mutex")(C++11)  
[shared_mutex](thread/shared_mutex.html "cpp/thread/shared mutex")(C++17)  
  
| [timed_mutex](thread/timed_mutex.html "cpp/thread/timed mutex")(C++11)  
---  
[recursive_timed_mutex](thread/recursive_timed_mutex.html "cpp/thread/recursive timed mutex")(C++11)  
[shared_timed_mutex](thread/shared_timed_mutex.html "cpp/thread/shared timed mutex")(C++14)  
  
[Generic lock management](atomic.html#Generic_mutex_management "cpp/thread")  
| [lock](thread/lock.html "cpp/thread/lock")(C++11)  
---  
[lock_guard](thread/lock_guard.html "cpp/thread/lock guard")(C++11)  
[scoped_lock](thread/scoped_lock.html "cpp/thread/scoped lock")(C++17)  
[unique_lock](thread/unique_lock.html "cpp/thread/unique lock")(C++11)  
[shared_lock](thread/shared_lock.html "cpp/thread/shared lock")(C++14)  
[once_flag](thread/once_flag.html "cpp/thread/once flag")(C++11)  
[call_once](thread/call_once.html "cpp/thread/call once")(C++11)  
  
| [try_lock](thread/try_lock.html "cpp/thread/try lock")(C++11)  
---  
[defer_locktry_to_lockadopt_lockdefer_lock_ttry_to_lock_tadopt_lock_t](thread/lock_tag_t.html "cpp/thread/lock tag")(C++11)(C++11)(C++11)(C++11)(C++11)(C++11)  
  
[Condition variables](atomic.html#Condition_variables "cpp/thread")  
[condition_variable](thread/condition_variable.html "cpp/thread/condition variable")(C++11)  
[condition_variable_any](thread/condition_variable_any.html "cpp/thread/condition variable any")(C++11)  
[notify_all_at_thread_exit](thread/notify_all_at_thread_exit.html "cpp/thread/notify all at thread exit")(C++11)  
[cv_status](thread/cv_status.html "cpp/thread/cv status")(C++11)  
[Semaphores](atomic.html#Semaphores "cpp/thread")  
[counting_semaphorebinary_semaphore](thread/counting_semaphore.html "cpp/thread/counting semaphore")(C++20)(C++20)  
[Latches and Barriers](atomic.html#Latches_and_Barriers "cpp/thread")  
| [latch](thread/latch.html "cpp/thread/latch")(C++20)  
---  
  
| [barrier](thread/barrier.html "cpp/thread/barrier")(C++20)  
---  
  
[Futures](atomic.html#Futures "cpp/thread")  
| [promise](thread/promise.html "cpp/thread/promise")(C++11)  
---  
[future](thread/future.html "cpp/thread/future")(C++11)  
[shared_future](thread/shared_future.html "cpp/thread/shared future")(C++11)  
[packaged_task](thread/packaged_task.html "cpp/thread/packaged task")(C++11)  
[async](thread/async.html "cpp/thread/async")(C++11)  
  
| [launch](thread/launch.html "cpp/thread/launch")(C++11)  
---  
[future_status](thread/future_status.html "cpp/thread/future status")(C++11)  
[future_error](thread/future_error.html "cpp/thread/future error")(C++11)  
[future_category](thread/future_category.html "cpp/thread/future category")(C++11)  
[future_errc](thread/future_errc.html "cpp/thread/future errc")(C++11)  
  
[Safe reclamation](atomic.html#Safe_reclamation "cpp/thread")  
| [rcu_obj_base](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/rcu_obj_base&action=edit&redlink=1 "cpp/thread/rcu obj base \(page does not exist\)")(C++26)  
---  
[rcu_domain](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/rcu_domain&action=edit&redlink=1 "cpp/thread/rcu domain \(page does not exist\)")(C++26)  
[rcu_default_domain](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/rcu_default_domain&action=edit&redlink=1 "cpp/thread/rcu default domain \(page does not exist\)")(C++26)  
  
| [rcu_synchronize](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/rcu_synchronize&action=edit&redlink=1 "cpp/thread/rcu synchronize \(page does not exist\)")(C++26)  
---  
[rcu_barrier](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/rcu_barrier&action=edit&redlink=1 "cpp/thread/rcu barrier \(page does not exist\)")(C++26)  
[rcu_retire](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/rcu_retire&action=edit&redlink=1 "cpp/thread/rcu retire \(page does not exist\)")(C++26)  
  
[Hazard pointers](atomic.html#Hazard_pointers "cpp/thread")  
[hazard_pointer_obj_base](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/hazard_pointer_obj_base&action=edit&redlink=1 "cpp/thread/hazard pointer obj base \(page does not exist\)")(C++26)  
[hazard_pointer](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/hazard_pointer&action=edit&redlink=1 "cpp/thread/hazard pointer \(page does not exist\)")(C++26)  
[make_hazard_pointer](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/make_hazard_pointer&action=edit&redlink=1 "cpp/thread/make hazard pointer \(page does not exist\)")(C++26)  
  
| [Atomic types](atomic.html#Atomic_types "cpp/thread")  
---  
[atomic](atomic/atomic.html "cpp/atomic/atomic")(C++11)  
[atomic_ref](atomic/atomic_ref.html "cpp/atomic/atomic ref")(C++20)  
[atomic_flag](atomic/atomic_flag.html "cpp/atomic/atomic flag")(C++11)  
[Initialization of atomic types](atomic.html#Initialization "cpp/thread")  
[atomic_init](atomic/atomic_init.html "cpp/atomic/atomic init")(C++11)(deprecated in C++20)  
[ATOMIC_VAR_INIT](atomic/ATOMIC_VAR_INIT.html "cpp/atomic/ATOMIC VAR INIT")(C++11)(deprecated in C++20)  
[ATOMIC_FLAG_INIT](atomic/ATOMIC_FLAG_INIT.html "cpp/atomic/ATOMIC FLAG INIT")(C++11)  
[Memory ordering](atomic.html#Memory_synchronization_ordering "cpp/thread")  
[memory_order](atomic/memory_order.html "cpp/atomic/memory order")(C++11)  
[kill_dependency](atomic/kill_dependency.html "cpp/atomic/kill dependency")(C++11)(deprecated in C++26)  
[atomic_thread_fence](atomic/atomic_thread_fence.html "cpp/atomic/atomic thread fence")(C++11)  
[atomic_signal_fence](atomic/atomic_signal_fence.html "cpp/atomic/atomic signal fence")(C++11)  
[Free functions for atomic operations](atomic.html#Operations_on_atomic_types "cpp/thread")  
[atomic_storeatomic_store_explicit](atomic/atomic_store.html "cpp/atomic/atomic store")(C++11)(C++11)  
[atomic_loadatomic_load_explicit](atomic/atomic_load.html "cpp/atomic/atomic load")(C++11)(C++11)  
[atomic_exchangeatomic_exchange_explicit](atomic/atomic_exchange.html "cpp/atomic/atomic exchange")(C++11)(C++11)  
[atomic_compare_exchange_weakatomic_compare_exchange_weak_explicitatomic_compare_exchange_strongatomic_compare_exchange_strong_explicit](atomic/atomic_compare_exchange.html "cpp/atomic/atomic compare exchange")(C++11)(C++11)(C++11)(C++11)  
[atomic_fetch_addatomic_fetch_add_explicit](atomic/atomic_fetch_add.html "cpp/atomic/atomic fetch add")(C++11)(C++11)  
[atomic_fetch_subatomic_fetch_sub_explicit](atomic/atomic_fetch_sub.html "cpp/atomic/atomic fetch sub")(C++11)(C++11)  
[atomic_fetch_andatomic_fetch_and_explicit](atomic/atomic_fetch_and.html "cpp/atomic/atomic fetch and")(C++11)(C++11)  
[atomic_fetch_oratomic_fetch_or_explicit](atomic/atomic_fetch_or.html "cpp/atomic/atomic fetch or")(C++11)(C++11)  
[atomic_fetch_xoratomic_fetch_xor_explicit](atomic/atomic_fetch_xor.html "cpp/atomic/atomic fetch xor")(C++11)(C++11)  
[atomic_fetch_maxatomic_fetch_max_explicit](atomic/atomic_fetch_max.html "cpp/atomic/atomic fetch max")(C++26)(C++26)  
[atomic_fetch_minatomic_fetch_min_explicit](atomic/atomic_fetch_min.html "cpp/atomic/atomic fetch min")(C++26)(C++26)  
[atomic_is_lock_free](atomic/atomic_is_lock_free.html "cpp/atomic/atomic is lock free")(C++11)  
[atomic_waitatomic_wait_explicit](atomic/atomic_wait.html "cpp/atomic/atomic wait")(C++20)(C++20)  
[atomic_notify_one](atomic/atomic_notify_one.html "cpp/atomic/atomic notify one")(C++20)  
[atomic_notify_all](atomic/atomic_notify_all.html "cpp/atomic/atomic notify all")(C++20)  
[Free functions for atomic flags](atomic.html#Flag_type_and_operations "cpp/thread")  
[atomic_flag_test_and_setatomic_flag_test_and_set_explicit](atomic/atomic_flag_test_and_set.html "cpp/atomic/atomic flag test and set")(C++11)(C++11)  
[atomic_flag_clearatomic_flag_clear_explicit](atomic/atomic_flag_clear.html "cpp/atomic/atomic flag clear")(C++11)(C++11)  
[atomic_flag_testatomic_flag_test_explicit](atomic/atomic_flag_test.html "cpp/atomic/atomic flag test")(C++20)(C++20)  
[atomic_flag_waitatomic_flag_wait_explicit](atomic/atomic_flag_wait.html "cpp/atomic/atomic flag wait")(C++20)(C++20)  
[atomic_flag_notify_one](atomic/atomic_flag_notify_one.html "cpp/atomic/atomic flag notify one")(C++20)  
[atomic_flag_notify_all](atomic/atomic_flag_notify_all.html "cpp/atomic/atomic flag notify all")(C++20)  
  


C++ includes built-in support for threads, atomic operations, mutual exclusion, condition variables, and futures. 

## Contents

  * [1 Threads](atomic.html#Threads)
    * [1.1 Functions managing the current thread](atomic.html#Functions_managing_the_current_thread)
  * [2 Cooperative cancellation (since C++20)](atomic.html#Cooperative_cancellation_.28since_C.2B.2B20.29)
    * [2.1 Stop token types](atomic.html#Stop_token_types)
    * [2.2 Stop source types](atomic.html#Stop_source_types)
    * [2.3 Stop callback types](atomic.html#Stop_callback_types)
    * [2.4 Concepts (since C++20)](atomic.html#Concepts_.28since_C.2B.2B20.29)
  * [3 Cache size access (since C++17)](atomic.html#Cache_size_access_.28since_C.2B.2B17.29)
  * [4 Atomic operations](atomic.html#Atomic_operations)
    * [4.1 Atomic types](atomic.html#Atomic_types)
    * [4.2 Operations on atomic types](atomic.html#Operations_on_atomic_types)
    * [4.3 Flag type and operations](atomic.html#Flag_type_and_operations)
    * [4.4 Initialization](atomic.html#Initialization)
    * [4.5 Memory synchronization ordering](atomic.html#Memory_synchronization_ordering)
    * [4.6 C compatibility macros (since C++23)](atomic.html#C_compatibility_macros_.28since_C.2B.2B23.29)
  * [5 Mutual exclusion](atomic.html#Mutual_exclusion)
    * [5.1 Generic mutex management](atomic.html#Generic_mutex_management)
    * [5.2 Generic locking algorithms](atomic.html#Generic_locking_algorithms)
    * [5.3 Call once](atomic.html#Call_once)
  * [6 Condition variables](atomic.html#Condition_variables)
  * [7 Semaphores (since C++20)](atomic.html#Semaphores_.28since_C.2B.2B20.29)
  * [8 Latches and Barriers (since C++20)](atomic.html#Latches_and_Barriers_.28since_C.2B.2B20.29)
  * [9 Futures](atomic.html#Futures)
    * [9.1 Future errors](atomic.html#Future_errors)
  * [10 Safe reclamation (since C++26)](atomic.html#Safe_reclamation_.28since_C.2B.2B26.29)
    * [10.1 Read-Copy-Update mechanism](atomic.html#Read-Copy-Update_mechanism)
    * [10.2 Hazard pointers](atomic.html#Hazard_pointers)
  * [11 See also](atomic.html#See_also)

  
---  
  
### Threads

Threads enable programs to execute across several processor cores. 

Defined in header `[<thread>](header/thread.html "cpp/header/thread")`  
---  
[ thread](thread/thread.html "cpp/thread/thread")(C++11) |  manages a separate thread   
(class)   
[ jthread](thread/jthread.html "cpp/thread/jthread")(C++20) |  [std::thread](thread/thread.html "cpp/thread/thread") with support for auto-joining and cancellation   
(class)   
  
#####  Functions managing the current thread   
  
Defined in namespace `this_thread`  
[ yield](thread/yield.html "cpp/thread/yield")(C++11) |  suggests that the implementation reschedule execution of threads   
(function)   
[ get_id](thread/get_id.html "cpp/thread/get id")(C++11) |  returns the thread id of the current thread   
(function)   
[ sleep_for](thread/sleep_for.html "cpp/thread/sleep for")(C++11) |  stops the execution of the current thread for a specified time duration   
(function)   
[ sleep_until](thread/sleep_until.html "cpp/thread/sleep until")(C++11) |  stops the execution of the current thread until a specified time point   
(function)   
  
### Cooperative cancellation (since C++20)

The components _stop source_ , _stop token_ , and _stop callback_ can be used to asynchronously request that an operation stops execution in a timely manner, typically because the result is no longer required. Such a request is called a _stop request_. 

These components specify the semantics of shared access to a _stop state_. Any object modeling any of these components that refer to the same stop state is an associated stop source, stop token, or stop callback, respectively. 

The concepts [`_stoppable-source_`](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/stoppable-source&action=edit&redlink=1 "cpp/thread/stoppable-source \(page does not exist\)"), [`stoppable_token`](thread/stoppable_token.html "cpp/thread/stoppable token"), and [`_stoppable-callback-for_`](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/stoppable-callback-for&action=edit&redlink=1 "cpp/thread/stoppable-callback-for \(page does not exist\)") specify the required syntax and model semantics of stop source, stop token, and stop callback, respectively.  | (since C++26)  
---|---  
  
They are designed: 

  * to cooperatively cancel the execution such as for [std::jthread](thread/jthread.html "cpp/thread/jthread"), 
  * to interrupt [std::condition_variable_any](thread/condition_variable_any.html "cpp/thread/condition variable any") waiting functions, 



  * to perform stopped completion of an asynchronous operation created by execution::connect, 

| (since C++26)  
---|---  
  
  * or for a custom execution management implementation. 



In fact, they do not even need to be used to "stop" anything, but can instead be used for a thread-safe one-time function(s) invocation trigger, for example. 

Defined in header `[<stop_token>](header/stop_token.html "cpp/header/stop token")`  
---  
  
#####  Stop token types   
  
[ stop_token](thread/stop_token.html "cpp/thread/stop token")(C++20) |  an interface for querying if a [std::jthread](thread/jthread.html "cpp/thread/jthread") cancellation request has been made   
(class)   
[ never_stop_token](thread/never_stop_token.html "cpp/thread/never stop token")(C++26) |  provides a stop token interface that a stop is never possible nor requested   
(class)   
[ inplace_stop_token](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/inplace_stop_token&action=edit&redlink=1 "cpp/thread/inplace stop token \(page does not exist\)")(C++26) |  a stop token that references stop state of its associated `std::inplace_stop_source` object   
(class)   
  
#####  Stop source types   
  
[ stop_source](thread/stop_source.html "cpp/thread/stop source")(C++20) |  class representing a request to stop one or more [std::jthread](thread/jthread.html "cpp/thread/jthread")s   
(class)   
[ inplace_stop_source](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/inplace_stop_source&action=edit&redlink=1 "cpp/thread/inplace stop source \(page does not exist\)")(C++26) |  a `_stoppable-source_` that is the sole owner of the stop state   
(class)   
  
#####  Stop callback types   
  
[ stop_callback](thread/stop_callback.html "cpp/thread/stop callback")(C++20) |  an interface for registering callbacks on [std::jthread](thread/jthread.html "cpp/thread/jthread") cancellation   
(class template)   
[ inplace_stop_callback](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/inplace_stop_callback&action=edit&redlink=1 "cpp/thread/inplace stop callback \(page does not exist\)")(C++26) |  a stop callback for `std::inplace_stop_token`   
(class template)   
[ stop_callback_for_t](thread/stop_callback_for_t.html "cpp/thread/stop callback for t")(C++26) |  obtains the callback type for a given stop token type  
(alias template)  
  
#####  Concepts (since C++20)  
  
[ stoppable_token](thread/stoppable_token.html "cpp/thread/stoppable token")(C++26) |  specifies the basic interface of stop tokens which allows queries for stop requests and whether the stop request is possible   
(concept)   
[ unstoppable_token](thread/unstoppable_token.html "cpp/thread/unstoppable token")(C++26) |  specifies a stop token that does not allow stopping   
(concept)   
[__stoppable-source__](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/stoppable-source&action=edit&redlink=1 "cpp/thread/stoppable-source \(page does not exist\)")(C++26) |  specifies that a type is a factory for associated stop tokens and a stop request can be made upon it  
(exposition-only concept*)  
[__stoppable-callback-for__](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/stoppable-callback-for&action=edit&redlink=1 "cpp/thread/stoppable-callback-for \(page does not exist\)")(C++26) |  specifies an interface for registering callbacks with a given stop token type  
(exposition-only concept*)  
  
### Cache size access (since C++17)

Defined in header `[<new>](header/new.html "cpp/header/new")`  
---  
[ hardware_destructive_interference_sizehardware_constructive_interference_size](thread/hardware_destructive_interference_size.html "cpp/thread/hardware destructive interference size")(C++17) |  min offset to avoid false sharing  
max offset to promote true sharing   
(constant)   
  
### Atomic operations

These components are provided for fine-grained atomic operations allowing for lockless concurrent programming. Each atomic operation is indivisible with regards to any other atomic operation that involves the same object. Atomic objects are [free of data races](language/memory_model.html#Threads_and_data_races "cpp/language/memory model"). 

Defined in header `[<atomic>](header/atomic.html "cpp/header/atomic")`  
---  
  
#####  Atomic types   
  
[ atomic](atomic/atomic.html "cpp/atomic/atomic")(C++11) |  atomic class template and specializations for bool, integral, floating-point,(since C++20) and pointer types   
(class template)   
[ atomic_ref](atomic/atomic_ref.html "cpp/atomic/atomic ref")(C++20) |  provides atomic operations on non-atomic objects   
(class template)   
  
#####  Operations on atomic types   
  
[ atomic_is_lock_free](atomic/atomic_is_lock_free.html "cpp/atomic/atomic is lock free")(C++11) |  checks if the atomic type's operations are lock-free   
(function template)   
[ atomic_storeatomic_store_explicit](atomic/atomic_store.html "cpp/atomic/atomic store")(C++11)(C++11) |  atomically replaces the value of the atomic object with a non-atomic argument   
(function template)   
[ atomic_loadatomic_load_explicit](atomic/atomic_load.html "cpp/atomic/atomic load")(C++11)(C++11) |  atomically obtains the value stored in an atomic object   
(function template)   
[ atomic_exchangeatomic_exchange_explicit](atomic/atomic_exchange.html "cpp/atomic/atomic exchange")(C++11)(C++11) |  atomically replaces the value of the atomic object with non-atomic argument and returns the old value of the atomic   
(function template)   
[ atomic_compare_exchange_weakatomic_compare_exchange_weak_explicitatomic_compare_exchange_strongatomic_compare_exchange_strong_explicit](atomic/atomic_compare_exchange.html "cpp/atomic/atomic compare exchange")(C++11)(C++11)(C++11)(C++11) |  atomically compares the value of the atomic object with non-atomic argument and performs atomic exchange if equal or atomic load if not   
(function template)   
[ atomic_fetch_addatomic_fetch_add_explicit](atomic/atomic_fetch_add.html "cpp/atomic/atomic fetch add")(C++11)(C++11) |  adds a non-atomic value to an atomic object and obtains the previous value of the atomic   
(function template)   
[ atomic_fetch_subatomic_fetch_sub_explicit](atomic/atomic_fetch_sub.html "cpp/atomic/atomic fetch sub")(C++11)(C++11) |  subtracts a non-atomic value from an atomic object and obtains the previous value of the atomic   
(function template)   
[ atomic_fetch_andatomic_fetch_and_explicit](atomic/atomic_fetch_and.html "cpp/atomic/atomic fetch and")(C++11)(C++11) |  replaces the atomic object with the result of bitwise AND with a non-atomic argument and obtains the previous value of the atomic   
(function template)   
[ atomic_fetch_oratomic_fetch_or_explicit](atomic/atomic_fetch_or.html "cpp/atomic/atomic fetch or")(C++11)(C++11) |  replaces the atomic object with the result of bitwise OR with a non-atomic argument and obtains the previous value of the atomic   
(function template)   
[ atomic_fetch_xoratomic_fetch_xor_explicit](atomic/atomic_fetch_xor.html "cpp/atomic/atomic fetch xor")(C++11)(C++11) |  replaces the atomic object with the result of bitwise XOR with a non-atomic argument and obtains the previous value of the atomic   
(function template)   
[ atomic_fetch_maxatomic_fetch_max_explicit](atomic/atomic_fetch_max.html "cpp/atomic/atomic fetch max")(C++26)(C++26) |  replaces the atomic object with the result of [std::max](algorithm/max.html "cpp/algorithm/max") with a non-atomic argument and obtains the previous value of the atomic   
(function template)   
[ atomic_fetch_minatomic_fetch_min_explicit](atomic/atomic_fetch_min.html "cpp/atomic/atomic fetch min")(C++26)(C++26) |  replaces the atomic object with the result of [std::min](algorithm/min.html "cpp/algorithm/min") with a non-atomic argument and obtains the previous value of the atomic   
(function template)   
[ atomic_waitatomic_wait_explicit](atomic/atomic_wait.html "cpp/atomic/atomic wait")(C++20)(C++20) |  blocks the thread until notified and the atomic value changes   
(function template)   
[ atomic_notify_one](atomic/atomic_notify_one.html "cpp/atomic/atomic notify one")(C++20) |  notifies a thread blocked in atomic_wait   
(function template)   
[ atomic_notify_all](atomic/atomic_notify_all.html "cpp/atomic/atomic notify all")(C++20) |  notifies all threads blocked in atomic_wait   
(function template)   
  
#####  Flag type and operations   
  
[ atomic_flag](atomic/atomic_flag.html "cpp/atomic/atomic flag")(C++11) |  the lock-free boolean atomic type   
(class)   
[ atomic_flag_test_and_setatomic_flag_test_and_set_explicit](atomic/atomic_flag_test_and_set.html "cpp/atomic/atomic flag test and set")(C++11)(C++11) |  atomically sets the flag to true and returns its previous value   
(function)   
[ atomic_flag_clearatomic_flag_clear_explicit](atomic/atomic_flag_clear.html "cpp/atomic/atomic flag clear")(C++11)(C++11) |  atomically sets the value of the flag to false   
(function)   
[ atomic_flag_testatomic_flag_test_explicit](atomic/atomic_flag_test.html "cpp/atomic/atomic flag test")(C++20)(C++20) |  atomically returns the value of the flag   
(function)   
[ atomic_flag_waitatomic_flag_wait_explicit](atomic/atomic_flag_wait.html "cpp/atomic/atomic flag wait")(C++20)(C++20) |  blocks the thread until notified and the flag changes   
(function)   
[ atomic_flag_notify_one](atomic/atomic_flag_notify_one.html "cpp/atomic/atomic flag notify one")(C++20) |  notifies a thread blocked in atomic_flag_wait   
(function)   
[ atomic_flag_notify_all](atomic/atomic_flag_notify_all.html "cpp/atomic/atomic flag notify all")(C++20) |  notifies all threads blocked in atomic_flag_wait   
(function)   
  
#####  Initialization   
  
[ atomic_init](atomic/atomic_init.html "cpp/atomic/atomic init")(C++11)(deprecated in C++20) |  non-atomic initialization of a default-constructed atomic object   
(function template)   
[ ATOMIC_VAR_INIT](atomic/ATOMIC_VAR_INIT.html "cpp/atomic/ATOMIC VAR INIT")(C++11)(deprecated in C++20) |  constant initialization of an atomic variable of static storage duration   
(function macro)   
[ ATOMIC_FLAG_INIT](atomic/ATOMIC_FLAG_INIT.html "cpp/atomic/ATOMIC FLAG INIT")(C++11) |  initializes an [std::atomic_flag](atomic/atomic_flag.html "cpp/atomic/atomic flag") to false   
(macro constant)   
  
#####  Memory synchronization ordering   
  
[ memory_order](atomic/memory_order.html "cpp/atomic/memory order")(C++11) |  defines memory ordering constraints for the given atomic operation   
(enum)   
[ kill_dependency](atomic/kill_dependency.html "cpp/atomic/kill dependency")(C++11)(deprecated in C++26) |  removes the specified object from the [std::memory_order_consume](atomic/memory_order.html "cpp/atomic/memory order") dependency tree   
(function template)   
[ atomic_thread_fence](atomic/atomic_thread_fence.html "cpp/atomic/atomic thread fence")(C++11) |  generic memory order-dependent fence synchronization primitive   
(function)   
[ atomic_signal_fence](atomic/atomic_signal_fence.html "cpp/atomic/atomic signal fence")(C++11) |  fence between a thread and a signal handler executed in the same thread   
(function)   
Defined in header `[<stdatomic.h>](header/stdatomic.h.html "cpp/header/stdatomic.h")`  
  
#####  C compatibility macros (since C++23)  
  
[ _Atomic](atomic/atomic.html "cpp/atomic/atomic")(C++23) |  compatibility macro such that _Atomic(T) is identical to [std::atomic](atomic/atomic.html)<T>   
(function macro)   
  
Neither the `_Atomic` macro, nor any of the non-macro global namespace declarations are provided by any C++ standard library header other than [`<stdatomic.h>`](header/stdatomic.h.html "cpp/header/stdatomic.h"). 

### Mutual exclusion

Mutual exclusion algorithms prevent multiple threads from simultaneously accessing shared resources. This prevents data races and provides support for synchronization between threads. 

Defined in header `[<mutex>](header/mutex.html "cpp/header/mutex")`  
---  
[ mutex](thread/mutex.html "cpp/thread/mutex")(C++11) |  provides basic mutual exclusion facility   
(class)   
[ timed_mutex](thread/timed_mutex.html "cpp/thread/timed mutex")(C++11) |  provides mutual exclusion facility which implements locking with a timeout   
(class)   
[ recursive_mutex](thread/recursive_mutex.html "cpp/thread/recursive mutex")(C++11) |  provides mutual exclusion facility which can be locked recursively by the same thread   
(class)   
[ recursive_timed_mutex](thread/recursive_timed_mutex.html "cpp/thread/recursive timed mutex")(C++11) |  provides mutual exclusion facility which can be locked recursively  
by the same thread and implements locking with a timeout   
(class)   
Defined in header `[<shared_mutex>](header/shared_mutex.html "cpp/header/shared mutex")`  
[ shared_mutex](thread/shared_mutex.html "cpp/thread/shared mutex")(C++17) |  provides shared mutual exclusion facility   
(class)   
[ shared_timed_mutex](thread/shared_timed_mutex.html "cpp/thread/shared timed mutex")(C++14) |  provides shared mutual exclusion facility and implements locking with a timeout   
(class)   
  
#####  Generic mutex management   
  
Defined in header `[<mutex>](header/mutex.html "cpp/header/mutex")`  
[ lock_guard](thread/lock_guard.html "cpp/thread/lock guard")(C++11) |  implements a strictly scope-based mutex ownership wrapper   
(class template)   
[ scoped_lock](thread/scoped_lock.html "cpp/thread/scoped lock")(C++17) |  deadlock-avoiding RAII wrapper for multiple mutexes   
(class template)   
[ unique_lock](thread/unique_lock.html "cpp/thread/unique lock")(C++11) |  implements movable mutex ownership wrapper   
(class template)   
[ shared_lock](thread/shared_lock.html "cpp/thread/shared lock")(C++14) |  implements movable shared mutex ownership wrapper   
(class template)   
[ defer_locktry_to_lockadopt_lockdefer_lock_ttry_to_lock_tadopt_lock_t](thread/lock_tag_t.html "cpp/thread/lock tag")(C++11) |  tags used to specify locking strategy  
(tag)  
  
#####  Generic locking algorithms   
  
[ try_lock](thread/try_lock.html "cpp/thread/try lock")(C++11) |  attempts to obtain ownership of mutexes via repeated calls to `try_lock`   
(function template)   
[ lock](thread/lock.html "cpp/thread/lock")(C++11) |  locks specified mutexes, blocks if any are unavailable   
(function template)   
  
#####  Call once   
  
[ once_flag](thread/once_flag.html "cpp/thread/once flag")(C++11) |  helper object to ensure that [`call_once`](thread/call_once.html "cpp/thread/call once") invokes the function only once   
(class)   
[ call_once](thread/call_once.html "cpp/thread/call once")(C++11) |  invokes a function only once even if called from multiple threads   
(function template)   
  
### Condition variables

A condition variable is a synchronization primitive that allows multiple threads to communicate with each other. It allows some number of threads to wait (possibly with a timeout) for notification from another thread that they may proceed. A condition variable is always associated with a mutex. 

Defined in header `[<condition_variable>](header/condition_variable.html "cpp/header/condition variable")`  
---  
[ condition_variable](thread/condition_variable.html "cpp/thread/condition variable")(C++11) |  provides a condition variable associated with a [std::unique_lock](thread/unique_lock.html "cpp/thread/unique lock")   
(class)   
[ condition_variable_any](thread/condition_variable_any.html "cpp/thread/condition variable any")(C++11) |  provides a condition variable associated with any lock type   
(class)   
[ notify_all_at_thread_exit](thread/notify_all_at_thread_exit.html "cpp/thread/notify all at thread exit")(C++11) |  schedules a call to `notify_all` to be invoked when this thread is completely finished   
(function)   
[ cv_status](thread/cv_status.html "cpp/thread/cv status")(C++11) |  lists the possible results of timed waits on condition variables   
(enum)   
  
### Semaphores (since C++20)

A semaphore is a lightweight synchronization primitive used to constrain concurrent access to a shared resource. When either would suffice, a semaphore can be more efficient than a condition variable. 

Defined in header `[<semaphore>](header/semaphore.html "cpp/header/semaphore")`  
---  
[ counting_semaphore](thread/counting_semaphore.html "cpp/thread/counting semaphore")(C++20) |  semaphore that models a non-negative resource count   
(class template)   
[ binary_semaphore](thread/counting_semaphore.html "cpp/thread/counting semaphore")(C++20) |  semaphore that has only two states   
(typedef)   
  
### Latches and Barriers (since C++20)

Latches and barriers are thread coordination mechanisms that allow any number of threads to block until an expected number of threads arrive. A latch cannot be reused, while a barrier can be used repeatedly. 

Defined in header `[<latch>](header/latch.html "cpp/header/latch")`  
---  
[ latch](thread/latch.html "cpp/thread/latch")(C++20) |  single-use thread barrier   
(class)   
Defined in header `[<barrier>](header/barrier.html "cpp/header/barrier")`  
[ barrier](thread/barrier.html "cpp/thread/barrier")(C++20) |  reusable thread barrier   
(class template)   
  
### Futures

The standard library provides facilities to obtain values that are returned and to catch exceptions that are thrown by asynchronous tasks (i.e. functions launched in separate threads). These values are communicated in a _shared state_ , in which the asynchronous task may write its return value or store an exception, and which may be examined, waited for, and otherwise manipulated by other threads that hold instances of [std::future](thread/future.html "cpp/thread/future") or [std::shared_future](thread/shared_future.html "cpp/thread/shared future") that reference that shared state. 

Defined in header `[<future>](header/future.html "cpp/header/future")`  
---  
[ promise](thread/promise.html "cpp/thread/promise")(C++11) |  stores a value for asynchronous retrieval   
(class template)   
[ packaged_task](thread/packaged_task.html "cpp/thread/packaged task")(C++11) |  packages a function to store its return value for asynchronous retrieval   
(class template)   
[ future](thread/future.html "cpp/thread/future")(C++11) |  waits for a value that is set asynchronously   
(class template)   
[ shared_future](thread/shared_future.html "cpp/thread/shared future")(C++11) |  waits for a value (possibly referenced by other futures) that is set asynchronously   
(class template)   
[ async](thread/async.html "cpp/thread/async")(C++11) |  runs a function asynchronously (potentially in a new thread) and returns a [std::future](thread/future.html "cpp/thread/future") that will hold the result   
(function template)   
[ launch](thread/launch.html "cpp/thread/launch")(C++11) |  specifies the launch policy for [std::async](thread/async.html "cpp/thread/async")   
(enum)   
[ future_status](thread/future_status.html "cpp/thread/future status")(C++11) |  specifies the results of timed waits performed on [std::future](thread/future.html "cpp/thread/future") and [std::shared_future](thread/shared_future.html "cpp/thread/shared future")   
(enum)   
  
#####  Future errors   
  
[ future_error](thread/future_error.html "cpp/thread/future error")(C++11) |  reports an error related to futures or promises   
(class)   
[ future_category](thread/future_category.html "cpp/thread/future category")(C++11) |  identifies the future error category   
(function)   
[ future_errc](thread/future_errc.html "cpp/thread/future errc")(C++11) |  identifies the future error codes   
(enum)   
  
### Safe reclamation (since C++26)

Safe-reclamation techniques are most frequently used to straightforwardly resolve access-deletion races. 

#####  Read-Copy-Update mechanism   
  
---  
Defined in header `[<rcu>](header/rcu.html "cpp/header/rcu")`  
[ rcu_obj_base](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/rcu_obj_base&action=edit&redlink=1 "cpp/thread/rcu obj base \(page does not exist\)")(C++26) |  allows an object to be protected by RCU   
(class template)   
[ rcu_domain](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/rcu_domain&action=edit&redlink=1 "cpp/thread/rcu domain \(page does not exist\)")(C++26) |  provides regions of RCU protection   
(class)   
[ rcu_default_domain](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/rcu_default_domain&action=edit&redlink=1 "cpp/thread/rcu default domain \(page does not exist\)")(C++26) |  returns a reference to a static-duration object of type `std::rcu_domain`   
(function)   
[ rcu_synchronize](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/rcu_synchronize&action=edit&redlink=1 "cpp/thread/rcu synchronize \(page does not exist\)")(C++26) |  blocks until a protection region unlocks on a RCU domain   
(function)   
[ rcu_barrier](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/rcu_barrier&action=edit&redlink=1 "cpp/thread/rcu barrier \(page does not exist\)")(C++26) |  may evaluate scheduled operations on a RCU domain and blocks until all preceding evaluations are complete   
(function)   
[ rcu_retire](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/rcu_retire&action=edit&redlink=1 "cpp/thread/rcu retire \(page does not exist\)")(C++26) |  schedules the evaluation of a specified function on a RCU domain, potentially allocating memory, and invoking scheduled evaluations   
(function template)   
  
#####  Hazard pointers   
  
Defined in header `[<hazard_pointer>](header/hazard_pointer.html "cpp/header/hazard pointer")`  
[ hazard_pointer_obj_base](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/hazard_pointer_obj_base&action=edit&redlink=1 "cpp/thread/hazard pointer obj base \(page does not exist\)")(C++26) |  allows an object to be hazard-protectable   
(class template)   
[ hazard_pointer](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/hazard_pointer&action=edit&redlink=1 "cpp/thread/hazard pointer \(page does not exist\)")(C++26) |  single-writer multi-reader pointer that can be owned by at most one thread at any point of time   
(class)   
[ make_hazard_pointer](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/make_hazard_pointer&action=edit&redlink=1 "cpp/thread/make hazard pointer \(page does not exist\)")(C++26) |  constructs a hazard pointer   
(function)   
  
### See also

[C documentation](../c/thread.html "c/thread") for Concurrency support library  
---
