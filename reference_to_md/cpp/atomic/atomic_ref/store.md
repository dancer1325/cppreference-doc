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
[thread](../../thread/thread.html "cpp/thread/thread")(C++11)  
[jthread](../../thread/jthread.html "cpp/thread/jthread")(C++20)  
[hardware_destructive_interference_sizehardware_constructive_interference_size](../../thread/hardware_destructive_interference_size.html "cpp/thread/hardware destructive interference size")(C++17)(C++17)  
[`this_thread` namespace](../../atomic.html#Functions_managing_the_current_thread "cpp/thread")  
| [get_id](../../thread/get_id.html "cpp/thread/get id")(C++11)  
---  
[yield](../../thread/yield.html "cpp/thread/yield")(C++11)  
  
| [sleep_for](../../thread/sleep_for.html "cpp/thread/sleep for")(C++11)  
---  
[sleep_until](../../thread/sleep_until.html "cpp/thread/sleep until")(C++11)  
  
[Cooperative cancellation](../../atomic.html#Cooperative_cancellation "cpp/thread")  
| [stop_token](../../thread/stop_token.html "cpp/thread/stop token")(C++20)  
---  
[inplace_stop_token](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/inplace_stop_token&action=edit&redlink=1 "cpp/thread/inplace stop token \(page does not exist\)")(C++26)  
[never_stop_token](../../thread/never_stop_token.html "cpp/thread/never stop token")(C++26)  
[stop_source](../../thread/stop_source.html "cpp/thread/stop source")(C++20)  
[inplace_stop_source](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/inplace_stop_source&action=edit&redlink=1 "cpp/thread/inplace stop source \(page does not exist\)")(C++26)` `  
[stop_callback](../../thread/stop_callback.html "cpp/thread/stop callback")(C++20)  
  
| [inplace_stop_callback](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/inplace_stop_callback&action=edit&redlink=1 "cpp/thread/inplace stop callback \(page does not exist\)")(C++26)  
---  
[stop_callback_for_t](../../thread/stop_callback_for_t.html "cpp/thread/stop callback for t")(C++26)  
[stoppable_token](../../thread/stoppable_token.html "cpp/thread/stoppable token")(C++26)  
[unstoppable_token](../../thread/unstoppable_token.html "cpp/thread/unstoppable token")(C++26)  
[_stoppable-source_](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/stoppable_source&action=edit&redlink=1 "cpp/thread/stoppable source \(page does not exist\)")(C++26)  
[_stoppable-callback-for_](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/stoppable_callback_for&action=edit&redlink=1 "cpp/thread/stoppable callback for \(page does not exist\)")(C++26)` `  
  
[Mutual exclusion](../../atomic.html#Mutual_exclusion "cpp/thread")  
| [mutex](../../thread/mutex.html "cpp/thread/mutex")(C++11)  
---  
[recursive_mutex](../../thread/recursive_mutex.html "cpp/thread/recursive mutex")(C++11)  
[shared_mutex](../../thread/shared_mutex.html "cpp/thread/shared mutex")(C++17)  
  
| [timed_mutex](../../thread/timed_mutex.html "cpp/thread/timed mutex")(C++11)  
---  
[recursive_timed_mutex](../../thread/recursive_timed_mutex.html "cpp/thread/recursive timed mutex")(C++11)  
[shared_timed_mutex](../../thread/shared_timed_mutex.html "cpp/thread/shared timed mutex")(C++14)  
  
[Generic lock management](../../atomic.html#Generic_mutex_management "cpp/thread")  
| [lock](../../thread/lock.html "cpp/thread/lock")(C++11)  
---  
[lock_guard](../../thread/lock_guard.html "cpp/thread/lock guard")(C++11)  
[scoped_lock](../../thread/scoped_lock.html "cpp/thread/scoped lock")(C++17)  
[unique_lock](../../thread/unique_lock.html "cpp/thread/unique lock")(C++11)  
[shared_lock](../../thread/shared_lock.html "cpp/thread/shared lock")(C++14)  
[once_flag](../../thread/once_flag.html "cpp/thread/once flag")(C++11)  
[call_once](../../thread/call_once.html "cpp/thread/call once")(C++11)  
  
| [try_lock](../../thread/try_lock.html "cpp/thread/try lock")(C++11)  
---  
[defer_locktry_to_lockadopt_lockdefer_lock_ttry_to_lock_tadopt_lock_t](../../thread/lock_tag_t.html "cpp/thread/lock tag")(C++11)(C++11)(C++11)(C++11)(C++11)(C++11)  
  
[Condition variables](../../atomic.html#Condition_variables "cpp/thread")  
[condition_variable](../../thread/condition_variable.html "cpp/thread/condition variable")(C++11)  
[condition_variable_any](../../thread/condition_variable_any.html "cpp/thread/condition variable any")(C++11)  
[notify_all_at_thread_exit](../../thread/notify_all_at_thread_exit.html "cpp/thread/notify all at thread exit")(C++11)  
[cv_status](../../thread/cv_status.html "cpp/thread/cv status")(C++11)  
[Semaphores](../../atomic.html#Semaphores "cpp/thread")  
[counting_semaphorebinary_semaphore](../../thread/counting_semaphore.html "cpp/thread/counting semaphore")(C++20)(C++20)  
[Latches and Barriers](../../atomic.html#Latches_and_Barriers "cpp/thread")  
| [latch](../../thread/latch.html "cpp/thread/latch")(C++20)  
---  
  
| [barrier](../../thread/barrier.html "cpp/thread/barrier")(C++20)  
---  
  
[Futures](../../atomic.html#Futures "cpp/thread")  
| [promise](../../thread/promise.html "cpp/thread/promise")(C++11)  
---  
[future](../../thread/future.html "cpp/thread/future")(C++11)  
[shared_future](../../thread/shared_future.html "cpp/thread/shared future")(C++11)  
[packaged_task](../../thread/packaged_task.html "cpp/thread/packaged task")(C++11)  
[async](../../thread/async.html "cpp/thread/async")(C++11)  
  
| [launch](../../thread/launch.html "cpp/thread/launch")(C++11)  
---  
[future_status](../../thread/future_status.html "cpp/thread/future status")(C++11)  
[future_error](../../thread/future_error.html "cpp/thread/future error")(C++11)  
[future_category](../../thread/future_category.html "cpp/thread/future category")(C++11)  
[future_errc](../../thread/future_errc.html "cpp/thread/future errc")(C++11)  
  
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
[atomic](../atomic.html "cpp/atomic/atomic")(C++11)  
[atomic_ref](../atomic_ref.html "cpp/atomic/atomic ref")(C++20)  
[atomic_flag](../atomic_flag.html "cpp/atomic/atomic flag")(C++11)  
[Initialization of atomic types](../../atomic.html#Initialization "cpp/thread")  
[atomic_init](../atomic_init.html "cpp/atomic/atomic init")(C++11)(deprecated in C++20)  
[ATOMIC_VAR_INIT](../ATOMIC_VAR_INIT.html "cpp/atomic/ATOMIC VAR INIT")(C++11)(deprecated in C++20)  
[ATOMIC_FLAG_INIT](../ATOMIC_FLAG_INIT.html "cpp/atomic/ATOMIC FLAG INIT")(C++11)  
[Memory ordering](../../atomic.html#Memory_synchronization_ordering "cpp/thread")  
[memory_order](../memory_order.html "cpp/atomic/memory order")(C++11)  
[kill_dependency](../kill_dependency.html "cpp/atomic/kill dependency")(C++11)(deprecated in C++26)  
[atomic_thread_fence](../atomic_thread_fence.html "cpp/atomic/atomic thread fence")(C++11)  
[atomic_signal_fence](../atomic_signal_fence.html "cpp/atomic/atomic signal fence")(C++11)  
[Free functions for atomic operations](../../atomic.html#Operations_on_atomic_types "cpp/thread")  
[atomic_storeatomic_store_explicit](../atomic_store.html "cpp/atomic/atomic store")(C++11)(C++11)  
[atomic_loadatomic_load_explicit](../atomic_load.html "cpp/atomic/atomic load")(C++11)(C++11)  
[atomic_exchangeatomic_exchange_explicit](../atomic_exchange.html "cpp/atomic/atomic exchange")(C++11)(C++11)  
[atomic_compare_exchange_weakatomic_compare_exchange_weak_explicitatomic_compare_exchange_strongatomic_compare_exchange_strong_explicit](../atomic_compare_exchange.html "cpp/atomic/atomic compare exchange")(C++11)(C++11)(C++11)(C++11)  
[atomic_fetch_addatomic_fetch_add_explicit](../atomic_fetch_add.html "cpp/atomic/atomic fetch add")(C++11)(C++11)  
[atomic_fetch_subatomic_fetch_sub_explicit](../atomic_fetch_sub.html "cpp/atomic/atomic fetch sub")(C++11)(C++11)  
[atomic_fetch_andatomic_fetch_and_explicit](../atomic_fetch_and.html "cpp/atomic/atomic fetch and")(C++11)(C++11)  
[atomic_fetch_oratomic_fetch_or_explicit](../atomic_fetch_or.html "cpp/atomic/atomic fetch or")(C++11)(C++11)  
[atomic_fetch_xoratomic_fetch_xor_explicit](../atomic_fetch_xor.html "cpp/atomic/atomic fetch xor")(C++11)(C++11)  
[atomic_fetch_maxatomic_fetch_max_explicit](../atomic_fetch_max.html "cpp/atomic/atomic fetch max")(C++26)(C++26)  
[atomic_fetch_minatomic_fetch_min_explicit](../atomic_fetch_min.html "cpp/atomic/atomic fetch min")(C++26)(C++26)  
[atomic_is_lock_free](../atomic_is_lock_free.html "cpp/atomic/atomic is lock free")(C++11)  
[atomic_waitatomic_wait_explicit](../atomic_wait.html "cpp/atomic/atomic wait")(C++20)(C++20)  
[atomic_notify_one](../atomic_notify_one.html "cpp/atomic/atomic notify one")(C++20)  
[atomic_notify_all](../atomic_notify_all.html "cpp/atomic/atomic notify all")(C++20)  
[Free functions for atomic flags](../../atomic.html#Flag_type_and_operations "cpp/thread")  
[atomic_flag_test_and_setatomic_flag_test_and_set_explicit](../atomic_flag_test_and_set.html "cpp/atomic/atomic flag test and set")(C++11)(C++11)  
[atomic_flag_clearatomic_flag_clear_explicit](../atomic_flag_clear.html "cpp/atomic/atomic flag clear")(C++11)(C++11)  
[atomic_flag_testatomic_flag_test_explicit](../atomic_flag_test.html "cpp/atomic/atomic flag test")(C++20)(C++20)  
[atomic_flag_waitatomic_flag_wait_explicit](../atomic_flag_wait.html "cpp/atomic/atomic flag wait")(C++20)(C++20)  
[atomic_flag_notify_one](../atomic_flag_notify_one.html "cpp/atomic/atomic flag notify one")(C++20)  
[atomic_flag_notify_all](../atomic_flag_notify_all.html "cpp/atomic/atomic flag notify all")(C++20)  
  


[`std::atomic_ref`](../atomic_ref.html "cpp/atomic/atomic ref")

[Member functions](../atomic_ref.html#Member_functions "cpp/atomic/atomic ref")  
---  
[atomic_ref::atomic_ref](atomic_ref.html "cpp/atomic/atomic ref/atomic ref")  
[atomic_ref::operator=](operator=.html "cpp/atomic/atomic ref/operator=")  
[atomic_ref::is_lock_free](is_lock_free.html "cpp/atomic/atomic ref/is lock free")  
**atomic_ref::store**  
[atomic_ref::load](load.html "cpp/atomic/atomic ref/load")  
[atomic_ref::operator value_type](operator_T.html "cpp/atomic/atomic ref/operator T")  
[atomic_ref::exchange](exchange.html "cpp/atomic/atomic ref/exchange")  
[atomic_ref::compare_exchange_strongatomic_ref::compare_exchange_weak](compare_exchange.html "cpp/atomic/atomic ref/compare exchange")  
[atomic_ref::wait](wait.html "cpp/atomic/atomic ref/wait")  
[atomic_ref::notify_one](notify_one.html "cpp/atomic/atomic ref/notify one")  
[atomic_ref::notify_all](notify_all.html "cpp/atomic/atomic ref/notify all")  
[atomic_ref::address](address.html "cpp/atomic/atomic ref/address")(C++26)  
[Operations for arithmetic types  
(except `bool` and pointer-to-object)](../atomic_ref.html#Provided_only_when_T_is_an_arithmetic_type_other_than_cv_bool_or_a_pointer-to-object_type "cpp/atomic/atomic ref")  
[atomic_ref::fetch_add](fetch_add.html "cpp/atomic/atomic ref/fetch add")  
[atomic_ref::fetch_sub](fetch_sub.html "cpp/atomic/atomic ref/fetch sub")  
[atomic_ref::operator+=atomic_ref::operator-=](operator_arith2.html "cpp/atomic/atomic ref/operator arith2")  
[Operations for integral types  
(except `bool` and pointer-to-object)](../atomic_ref.html#Provided_only_when_T_is_an_integral_type_other_than_cv_bool_or_a_pointer-to-object_type "cpp/atomic/atomic ref")  
[atomic_ref::fetch_max](fetch_max.html "cpp/atomic/atomic ref/fetch max")(C++26)  
[atomic_ref::fetch_min](fetch_min.html "cpp/atomic/atomic ref/fetch min")(C++26)  
[atomic_ref::operator++atomic_ref::operator++(int)atomic_ref::operator--atomic_ref::operator--(int)](operator_arith.html "cpp/atomic/atomic ref/operator arith")  
[Operations for integral types  
(except `bool`)](../atomic_ref.html#Provided_only_when_T_is_an_integral_type_other_than_cv_bool "cpp/atomic/atomic ref")  
[atomic_ref::fetch_and](fetch_and.html "cpp/atomic/atomic ref/fetch and")  
[atomic_ref::fetch_or](fetch_or.html "cpp/atomic/atomic ref/fetch or")  
[atomic_ref::fetch_xor](fetch_xor.html "cpp/atomic/atomic ref/fetch xor")  
[atomic_ref::operator&=atomic_ref::operator|=atomic_ref::operator^=](operator_arith3.html "cpp/atomic/atomic ref/operator arith3")  
[Constants](../atomic_ref.html#Constants "cpp/atomic/atomic ref")  
[atomic_ref::is_always_lock_free](is_always_lock_free.html "cpp/atomic/atomic ref/is always lock free")  
[atomic_ref::required_alignment](required_alignment.html "cpp/atomic/atomic ref/required alignment")  
  


void store( value_type desired,  
[std::memory_order](../memory_order.html) order =  
[std::memory_order_seq_cst](../memory_order.html) ) const noexcept; |  | (constexpr since C++26)  
---|---|---  
| |   
  
Atomically replaces the current value of the referenced object with desired. Memory is affected according to the value of order. 

This overload participates in overload resolution only if [std::is_const_v](../../types/is_const.html)<T> is false. 

If order is not [std::memory_order_relaxed](../memory_order.html), [std::memory_order_release](../memory_order.html) or [std::memory_order_seq_cst](../memory_order.html), the behavior is undefined. 

### Parameters

desired  |  \-  |  the value to store into the referenced object   
---|---|---  
order  |  \-  |  memory order constraints to enforce   
  
### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3508](https://cplusplus.github.io/LWG/issue3508)  
([P3323R1](https://wg21.link/P3323R1))  | C++20  | `store` was meaningless for const T | constrained to accept only non-const `T`  
  
### See also

[ operator=](operator=.html "cpp/atomic/atomic ref/operator=") |  stores a value into the object referenced by an `atomic_ref` object   
(public member function)   
---|---
