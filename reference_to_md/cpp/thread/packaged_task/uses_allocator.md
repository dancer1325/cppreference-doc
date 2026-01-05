[C++](../../../cpp.html "cpp")

[Compiler support](../../compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](../../freestanding.html "cpp/freestanding")  
[Language](../../language.html "cpp/language")  
[Standard library](../../standard_library.html "cpp/standard library")  
[Standard library headers](../../headers.html "cpp/header")  
[Named requirements](../../iterator/concepts.html "cpp/named req")  
[Feature test macros](../../experimental/feature_test.html "cpp/feature test") (C++20)  
[Language support library](../../utility.html#Language_support "cpp/utility")  
[Concepts library](../../concepts.html "cpp/concepts") (C++20)  
[Diagnostics library](../../error.html "cpp/error")  
[Memory management library](../../memory.html "cpp/memory")  
[Metaprogramming library](../../meta.html "cpp/meta") (C++11)  
[General utilities library](../../utility.html "cpp/utility")  
[Containers library](../../container.html "cpp/container")  
[Iterators library](../../iterator.html "cpp/iterator")  
[Ranges library](../../ranges.html "cpp/ranges") (C++20)  
[Algorithms library](../../algorithm.html "cpp/algorithm")  
[Strings library](../../string.html "cpp/string")  
[Text processing library](../../text.html "cpp/text")  
[Numerics library](../../numeric.html "cpp/numeric")  
[Date and time library](../../chrono.html "cpp/chrono")  
[Input/output library](../../io.html "cpp/io")  
[Filesystem library](../../filesystem.html "cpp/filesystem") (C++17)  
[Concurrency support library](../../atomic.html "cpp/thread") (C++11)  
[Execution control library](../../experimental/execution.html "cpp/execution") (C++26)  
[Technical specifications](../../experimental.html "cpp/experimental")  
[Symbols index](../../symbol_index.html "cpp/symbol index")  
[External libraries](../../links/libs.html "cpp/links/libs")  
  


[Concurrency support library](../../atomic.html "cpp/thread")

| [Threads](../../atomic.html#Threads "cpp/thread")  
---  
[thread](../thread.html "cpp/thread/thread")(C++11)  
[jthread](../jthread.html "cpp/thread/jthread")(C++20)  
[hardware_destructive_interference_sizehardware_constructive_interference_size](../hardware_destructive_interference_size.html "cpp/thread/hardware destructive interference size")(C++17)(C++17)  
[`this_thread` namespace](../../atomic.html#Functions_managing_the_current_thread "cpp/thread")  
| [get_id](../get_id.html "cpp/thread/get id")(C++11)  
---  
[yield](../yield.html "cpp/thread/yield")(C++11)  
  
| [sleep_for](../sleep_for.html "cpp/thread/sleep for")(C++11)  
---  
[sleep_until](../sleep_until.html "cpp/thread/sleep until")(C++11)  
  
[Cooperative cancellation](../../atomic.html#Cooperative_cancellation "cpp/thread")  
| [stop_token](../stop_token.html "cpp/thread/stop token")(C++20)  
---  
[inplace_stop_token](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/inplace_stop_token&action=edit&redlink=1 "cpp/thread/inplace stop token \(page does not exist\)")(C++26)  
[never_stop_token](../never_stop_token.html "cpp/thread/never stop token")(C++26)  
[stop_source](../stop_source.html "cpp/thread/stop source")(C++20)  
[inplace_stop_source](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/inplace_stop_source&action=edit&redlink=1 "cpp/thread/inplace stop source \(page does not exist\)")(C++26)` `  
[stop_callback](../stop_callback.html "cpp/thread/stop callback")(C++20)  
  
| [inplace_stop_callback](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/inplace_stop_callback&action=edit&redlink=1 "cpp/thread/inplace stop callback \(page does not exist\)")(C++26)  
---  
[stop_callback_for_t](../stop_callback_for_t.html "cpp/thread/stop callback for t")(C++26)  
[stoppable_token](../stoppable_token.html "cpp/thread/stoppable token")(C++26)  
[unstoppable_token](../unstoppable_token.html "cpp/thread/unstoppable token")(C++26)  
[_stoppable-source_](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/stoppable_source&action=edit&redlink=1 "cpp/thread/stoppable source \(page does not exist\)")(C++26)  
[_stoppable-callback-for_](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/stoppable_callback_for&action=edit&redlink=1 "cpp/thread/stoppable callback for \(page does not exist\)")(C++26)` `  
  
[Mutual exclusion](../../atomic.html#Mutual_exclusion "cpp/thread")  
| [mutex](../mutex.html "cpp/thread/mutex")(C++11)  
---  
[recursive_mutex](../recursive_mutex.html "cpp/thread/recursive mutex")(C++11)  
[shared_mutex](../shared_mutex.html "cpp/thread/shared mutex")(C++17)  
  
| [timed_mutex](../timed_mutex.html "cpp/thread/timed mutex")(C++11)  
---  
[recursive_timed_mutex](../recursive_timed_mutex.html "cpp/thread/recursive timed mutex")(C++11)  
[shared_timed_mutex](../shared_timed_mutex.html "cpp/thread/shared timed mutex")(C++14)  
  
[Generic lock management](../../atomic.html#Generic_mutex_management "cpp/thread")  
| [lock](../lock.html "cpp/thread/lock")(C++11)  
---  
[lock_guard](../lock_guard.html "cpp/thread/lock guard")(C++11)  
[scoped_lock](../scoped_lock.html "cpp/thread/scoped lock")(C++17)  
[unique_lock](../unique_lock.html "cpp/thread/unique lock")(C++11)  
[shared_lock](../shared_lock.html "cpp/thread/shared lock")(C++14)  
[once_flag](../once_flag.html "cpp/thread/once flag")(C++11)  
[call_once](../call_once.html "cpp/thread/call once")(C++11)  
  
| [try_lock](../try_lock.html "cpp/thread/try lock")(C++11)  
---  
[defer_locktry_to_lockadopt_lockdefer_lock_ttry_to_lock_tadopt_lock_t](../lock_tag_t.html "cpp/thread/lock tag")(C++11)(C++11)(C++11)(C++11)(C++11)(C++11)  
  
[Condition variables](../../atomic.html#Condition_variables "cpp/thread")  
[condition_variable](../condition_variable.html "cpp/thread/condition variable")(C++11)  
[condition_variable_any](../condition_variable_any.html "cpp/thread/condition variable any")(C++11)  
[notify_all_at_thread_exit](../notify_all_at_thread_exit.html "cpp/thread/notify all at thread exit")(C++11)  
[cv_status](../cv_status.html "cpp/thread/cv status")(C++11)  
[Semaphores](../../atomic.html#Semaphores "cpp/thread")  
[counting_semaphorebinary_semaphore](../counting_semaphore.html "cpp/thread/counting semaphore")(C++20)(C++20)  
[Latches and Barriers](../../atomic.html#Latches_and_Barriers "cpp/thread")  
| [latch](../latch.html "cpp/thread/latch")(C++20)  
---  
  
| [barrier](../barrier.html "cpp/thread/barrier")(C++20)  
---  
  
[Futures](../../atomic.html#Futures "cpp/thread")  
| [promise](../promise.html "cpp/thread/promise")(C++11)  
---  
[future](../future.html "cpp/thread/future")(C++11)  
[shared_future](../shared_future.html "cpp/thread/shared future")(C++11)  
[packaged_task](../packaged_task.html "cpp/thread/packaged task")(C++11)  
[async](../async.html "cpp/thread/async")(C++11)  
  
| [launch](../launch.html "cpp/thread/launch")(C++11)  
---  
[future_status](../future_status.html "cpp/thread/future status")(C++11)  
[future_error](../future_error.html "cpp/thread/future error")(C++11)  
[future_category](../future_category.html "cpp/thread/future category")(C++11)  
[future_errc](../future_errc.html "cpp/thread/future errc")(C++11)  
  
[Safe reclamation](../../atomic.html#Safe_reclamation "cpp/thread")  
| [rcu_obj_base](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/rcu_obj_base&action=edit&redlink=1 "cpp/thread/rcu obj base \(page does not exist\)")(C++26)  
---  
[rcu_domain](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/rcu_domain&action=edit&redlink=1 "cpp/thread/rcu domain \(page does not exist\)")(C++26)  
[rcu_default_domain](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/rcu_default_domain&action=edit&redlink=1 "cpp/thread/rcu default domain \(page does not exist\)")(C++26)  
  
| [rcu_synchronize](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/rcu_synchronize&action=edit&redlink=1 "cpp/thread/rcu synchronize \(page does not exist\)")(C++26)  
---  
[rcu_barrier](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/rcu_barrier&action=edit&redlink=1 "cpp/thread/rcu barrier \(page does not exist\)")(C++26)  
[rcu_retire](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/rcu_retire&action=edit&redlink=1 "cpp/thread/rcu retire \(page does not exist\)")(C++26)  
  
[Hazard pointers](../../atomic.html#Hazard_pointers "cpp/thread")  
[hazard_pointer_obj_base](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/hazard_pointer_obj_base&action=edit&redlink=1 "cpp/thread/hazard pointer obj base \(page does not exist\)")(C++26)  
[hazard_pointer](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/hazard_pointer&action=edit&redlink=1 "cpp/thread/hazard pointer \(page does not exist\)")(C++26)  
[make_hazard_pointer](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/make_hazard_pointer&action=edit&redlink=1 "cpp/thread/make hazard pointer \(page does not exist\)")(C++26)  
  
| [Atomic types](../../atomic.html#Atomic_types "cpp/thread")  
---  
[atomic](../../atomic/atomic.html "cpp/atomic/atomic")(C++11)  
[atomic_ref](../../atomic/atomic_ref.html "cpp/atomic/atomic ref")(C++20)  
[atomic_flag](../../atomic/atomic_flag.html "cpp/atomic/atomic flag")(C++11)  
[Initialization of atomic types](../../atomic.html#Initialization "cpp/thread")  
[atomic_init](../../atomic/atomic_init.html "cpp/atomic/atomic init")(C++11)(deprecated in C++20)  
[ATOMIC_VAR_INIT](../../atomic/ATOMIC_VAR_INIT.html "cpp/atomic/ATOMIC VAR INIT")(C++11)(deprecated in C++20)  
[ATOMIC_FLAG_INIT](../../atomic/ATOMIC_FLAG_INIT.html "cpp/atomic/ATOMIC FLAG INIT")(C++11)  
[Memory ordering](../../atomic.html#Memory_synchronization_ordering "cpp/thread")  
[memory_order](../../atomic/memory_order.html "cpp/atomic/memory order")(C++11)  
[kill_dependency](../../atomic/kill_dependency.html "cpp/atomic/kill dependency")(C++11)(deprecated in C++26)  
[atomic_thread_fence](../../atomic/atomic_thread_fence.html "cpp/atomic/atomic thread fence")(C++11)  
[atomic_signal_fence](../../atomic/atomic_signal_fence.html "cpp/atomic/atomic signal fence")(C++11)  
[Free functions for atomic operations](../../atomic.html#Operations_on_atomic_types "cpp/thread")  
[atomic_storeatomic_store_explicit](../../atomic/atomic_store.html "cpp/atomic/atomic store")(C++11)(C++11)  
[atomic_loadatomic_load_explicit](../../atomic/atomic_load.html "cpp/atomic/atomic load")(C++11)(C++11)  
[atomic_exchangeatomic_exchange_explicit](../../atomic/atomic_exchange.html "cpp/atomic/atomic exchange")(C++11)(C++11)  
[atomic_compare_exchange_weakatomic_compare_exchange_weak_explicitatomic_compare_exchange_strongatomic_compare_exchange_strong_explicit](../../atomic/atomic_compare_exchange.html "cpp/atomic/atomic compare exchange")(C++11)(C++11)(C++11)(C++11)  
[atomic_fetch_addatomic_fetch_add_explicit](../../atomic/atomic_fetch_add.html "cpp/atomic/atomic fetch add")(C++11)(C++11)  
[atomic_fetch_subatomic_fetch_sub_explicit](../../atomic/atomic_fetch_sub.html "cpp/atomic/atomic fetch sub")(C++11)(C++11)  
[atomic_fetch_andatomic_fetch_and_explicit](../../atomic/atomic_fetch_and.html "cpp/atomic/atomic fetch and")(C++11)(C++11)  
[atomic_fetch_oratomic_fetch_or_explicit](../../atomic/atomic_fetch_or.html "cpp/atomic/atomic fetch or")(C++11)(C++11)  
[atomic_fetch_xoratomic_fetch_xor_explicit](../../atomic/atomic_fetch_xor.html "cpp/atomic/atomic fetch xor")(C++11)(C++11)  
[atomic_fetch_maxatomic_fetch_max_explicit](../../atomic/atomic_fetch_max.html "cpp/atomic/atomic fetch max")(C++26)(C++26)  
[atomic_fetch_minatomic_fetch_min_explicit](../../atomic/atomic_fetch_min.html "cpp/atomic/atomic fetch min")(C++26)(C++26)  
[atomic_is_lock_free](../../atomic/atomic_is_lock_free.html "cpp/atomic/atomic is lock free")(C++11)  
[atomic_waitatomic_wait_explicit](../../atomic/atomic_wait.html "cpp/atomic/atomic wait")(C++20)(C++20)  
[atomic_notify_one](../../atomic/atomic_notify_one.html "cpp/atomic/atomic notify one")(C++20)  
[atomic_notify_all](../../atomic/atomic_notify_all.html "cpp/atomic/atomic notify all")(C++20)  
[Free functions for atomic flags](../../atomic.html#Flag_type_and_operations "cpp/thread")  
[atomic_flag_test_and_setatomic_flag_test_and_set_explicit](../../atomic/atomic_flag_test_and_set.html "cpp/atomic/atomic flag test and set")(C++11)(C++11)  
[atomic_flag_clearatomic_flag_clear_explicit](../../atomic/atomic_flag_clear.html "cpp/atomic/atomic flag clear")(C++11)(C++11)  
[atomic_flag_testatomic_flag_test_explicit](../../atomic/atomic_flag_test.html "cpp/atomic/atomic flag test")(C++20)(C++20)  
[atomic_flag_waitatomic_flag_wait_explicit](../../atomic/atomic_flag_wait.html "cpp/atomic/atomic flag wait")(C++20)(C++20)  
[atomic_flag_notify_one](../../atomic/atomic_flag_notify_one.html "cpp/atomic/atomic flag notify one")(C++20)  
[atomic_flag_notify_all](../../atomic/atomic_flag_notify_all.html "cpp/atomic/atomic flag notify all")(C++20)  
  


[`std::packaged_task`](../packaged_task.html "cpp/thread/packaged task")

Member functions  
---  
[packaged_task::packaged_task](packaged_task.html "cpp/thread/packaged task/packaged task")  
[packaged_task::~packaged_task](~packaged_task.html "cpp/thread/packaged task/~packaged task")  
[packaged_task::operator=](operator=.html "cpp/thread/packaged task/operator=")  
[packaged_task::valid](valid.html "cpp/thread/packaged task/valid")  
[packaged_task::swap](swap.html "cpp/thread/packaged task/swap")  
Getting the result  
[packaged_task::get_future](get_future.html "cpp/thread/packaged task/get future")  
Execution  
[packaged_task::operator()](operator\(\).html "cpp/thread/packaged task/operator\(\)")  
[packaged_task::make_ready_at_thread_exit](make_ready_at_thread_exit.html "cpp/thread/packaged task/make ready at thread exit")  
[packaged_task::reset](reset.html "cpp/thread/packaged task/reset")  
Non-member functions  
[swap(std::packaged_task)](swap2.html "cpp/thread/packaged task/swap2")  
Helper classes  
**uses_allocator <std::packaged_task>**(until C++17)  
[Deduction guides](deduction_guides.html "cpp/thread/packaged task/deduction guides")(C++17)  
  


template< class R, class Alloc >  
struct uses_allocator<[std::packaged_task](../packaged_task.html)<R>, Alloc> : true_type {}; |  |  (since C++11)   
(removed in C++17)  
---|---|---  
| |   
  
Provides a specialization of the [std::uses_allocator](../../memory/uses_allocator.html "cpp/memory/uses allocator") type trait for [std::packaged_task](../packaged_task.html "cpp/thread/packaged task"). 

## Contents

  * [1 Inherited from std::integral_constant](uses_allocator.html#Inherited_from_std::integral_constant)
    * [1.1 Member constants](uses_allocator.html#Member_constants)
    * [1.2 Member functions](uses_allocator.html#Member_functions)
    * [1.3 Member types](uses_allocator.html#Member_types)
    * [1.4 See also](uses_allocator.html#See_also)

  
---  
  
##  Inherited from [ std::integral_constant](../../types/integral_constant.html "cpp/types/integral constant")

###  Member constants

value[static] |  true   
(public static member constant)  
---|---  
  
###  Member functions

operator bool |  converts the object to bool, returns value   
(public member function)  
---|---  
operator()(C++14) |  returns value   
(public member function)  
  
###  Member types

Type  |  Definition   
---|---  
`value_type` |  bool  
`type` |  [std::integral_constant](../../types/integral_constant.html)<bool, value>  
  
### See also

[ uses_allocator](../../memory/uses_allocator.html "cpp/memory/uses allocator")(C++11) |  checks if the specified type supports uses-allocator construction   
(class template)   
---|---
