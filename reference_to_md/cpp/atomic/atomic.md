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
**atomic**(C++11)  
[atomic_ref](atomic_ref.html "cpp/atomic/atomic ref")(C++20)  
[atomic_flag](atomic_flag.html "cpp/atomic/atomic flag")(C++11)  
[Initialization of atomic types](../atomic.html#Initialization "cpp/thread")  
[atomic_init](atomic_init.html "cpp/atomic/atomic init")(C++11)(deprecated in C++20)  
[ATOMIC_VAR_INIT](ATOMIC_VAR_INIT.html "cpp/atomic/ATOMIC VAR INIT")(C++11)(deprecated in C++20)  
[ATOMIC_FLAG_INIT](ATOMIC_FLAG_INIT.html "cpp/atomic/ATOMIC FLAG INIT")(C++11)  
[Memory ordering](../atomic.html#Memory_synchronization_ordering "cpp/thread")  
[memory_order](memory_order.html "cpp/atomic/memory order")(C++11)  
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
  


**`std::atomic`**

[Member functions](atomic.html#Member_functions "cpp/atomic/atomic")  
---  
[atomic::atomic](atomic/atomic.html "cpp/atomic/atomic/atomic")  
[atomic::operator=](atomic/operator=.html "cpp/atomic/atomic/operator=")  
[atomic::is_lock_free](atomic/is_lock_free.html "cpp/atomic/atomic/is lock free")  
[atomic::store](atomic/store.html "cpp/atomic/atomic/store")  
[atomic::load](atomic/load.html "cpp/atomic/atomic/load")  
[atomic::operator T](atomic/operator_T.html "cpp/atomic/atomic/operator T")  
[atomic::exchange](atomic/exchange.html "cpp/atomic/atomic/exchange")  
[atomic::compare_exchange_strongatomic::compare_exchange_weak](atomic/compare_exchange.html "cpp/atomic/atomic/compare exchange")  
[atomic::wait](atomic/wait.html "cpp/atomic/atomic/wait")(C++20)  
[atomic::notify_one](atomic/notify_one.html "cpp/atomic/atomic/notify one")(C++20)  
[atomic::notify_all](atomic/notify_all.html "cpp/atomic/atomic/notify all")(C++20)  
[Constants](atomic.html#Constants "cpp/atomic/atomic")  
[atomic::is_always_lock_free](atomic/is_always_lock_free.html "cpp/atomic/atomic/is always lock free")(C++17)  
[Specialized member functions](atomic.html#Specialized_member_functions "cpp/atomic/atomic")  
[Specialized for integral,  
floating-point](atomic.html#Specialized_for_integral.2C_floating-point_and_pointer_types "cpp/atomic/atomic") (C++20)  
[and pointer types](atomic.html#Specialized_for_integral.2C_floating-point_and_pointer_types "cpp/atomic/atomic")  
[atomic::fetch_add](atomic/fetch_add.html "cpp/atomic/atomic/fetch add")  
[atomic::fetch_sub](atomic/fetch_sub.html "cpp/atomic/atomic/fetch sub")  
[atomic::operator+=atomic::operator-=](atomic/operator_arith2.html "cpp/atomic/atomic/operator arith2")  
[Specialized for integral and  
pointer types only](atomic.html#Specialized_for_integral_and_pointer_types_only "cpp/atomic/atomic")  
[atomic::fetch_max](atomic/fetch_max.html "cpp/atomic/atomic/fetch max")(C++26)  
[atomic::fetch_min](atomic/fetch_min.html "cpp/atomic/atomic/fetch min")(C++26)  
[atomic::operator++atomic::operator++(int)atomic::operator--atomic::operator--(int)](atomic/operator_arith.html "cpp/atomic/atomic/operator arith")  
[Specialized for integral types only](atomic.html#Specialized_for_integral_types_only "cpp/atomic/atomic")  
[atomic::fetch_and](atomic/fetch_and.html "cpp/atomic/atomic/fetch and")  
[atomic::fetch_or](atomic/fetch_or.html "cpp/atomic/atomic/fetch or")  
[atomic::fetch_xor](atomic/fetch_xor.html "cpp/atomic/atomic/fetch xor")  
[atomic::operator&=atomic::operator|=atomic::operator^=](atomic/operator_arith3.html "cpp/atomic/atomic/operator arith3")  
  


Defined in header `[<atomic>](../header/atomic.html "cpp/header/atomic")` |  |   
---|---|---  
template< class T >  
struct atomic; |  (1)  |  (since C++11)  
template< class U >  
struct atomic<U*>; |  (2)  |  (since C++11)  
| |   
Defined in header `[<memory>](../header/memory.html "cpp/header/memory")` |  |   
template< class U >  
struct atomic<[std::shared_ptr](../memory/shared_ptr.html)<U>>; |  (3)  |  (since C++20)  
template< class U >  
struct atomic<[std::weak_ptr](../memory/weak_ptr.html)<U>>; |  (4)  |  (since C++20)  
| |   
Defined in header `[<stdatomic.h>](../header/stdatomic.h.html "cpp/header/stdatomic.h")` |  |   
#define _Atomic(T) /* see below */ |  (5)  |  (since C++23)  
| |   
  
Each instantiation and full specialization of the `std::atomic` template defines an atomic type. If one thread writes to an atomic object while another thread reads from it, the behavior is well-defined (see [memory model](../language/memory_model.html "cpp/language/memory model") for details on data races). 

In addition, accesses to atomic objects may establish inter-thread synchronization and order non-atomic memory accesses as specified by [std::memory_order](memory_order.html "cpp/atomic/memory order"). 

`std::atomic` is neither copyable nor movable. 

The compatibility macro `_Atomic` is provided in [`<stdatomic.h>`](../header/stdatomic.h.html "cpp/header/stdatomic.h") such that `_Atomic(T)` is identical to `std::atomic<T>` while both are well-formed. It is unspecified whether any declaration in namespace `std` is available when [`<stdatomic.h>`](../header/stdatomic.h.html "cpp/header/stdatomic.h") is included.  | (since C++23)  
---|---  
  
## Contents

  * [1 Specializations](atomic.html#Specializations)
    * [1.1 Primary template](atomic.html#Primary_template)
    * [1.2 Partial specializations](atomic.html#Partial_specializations)
    * [1.3 Specializations for integral types](atomic.html#Specializations_for_integral_types)
    * [1.4 Specializations for floating-point types](atomic.html#Specializations_for_floating-point_types)
  * [2 Member types](atomic.html#Member_types)
  * [3 Member functions](atomic.html#Member_functions)
  * [4 Constants](atomic.html#Constants)
  * [5 Specialized member functions](atomic.html#Specialized_member_functions)
    * [5.1 Specialized for integral, floating-point(since C++20) and pointer types](atomic.html#Specialized_for_integral.2C_floating-point.28since_C.2B.2B20.29_and_pointer_types)
    * [5.2 Specialized for integral and pointer types only](atomic.html#Specialized_for_integral_and_pointer_types_only)
    * [5.3 Specialized for integral types only](atomic.html#Specialized_for_integral_types_only)
  * [6 Type aliases](atomic.html#Type_aliases)
    * [6.1 Aliases for all std::atomic<Integral>](atomic.html#Aliases_for_all_std::atomic.3CIntegral.3E)
    * [6.2 Aliases for special-purpose types](atomic.html#Aliases_for_special-purpose_types)
  * [7 Notes](atomic.html#Notes)
  * [8 Example](atomic.html#Example)
  * [9 Defect reports](atomic.html#Defect_reports)
  * [10 See also](atomic.html#See_also)

  
---  
  
### Specializations

#### Primary template

The primary `std::atomic` template may be instantiated with any [TriviallyCopyable](../named_req/TriviallyCopyable.html "cpp/named req/TriviallyCopyable") type `T` satisfying both [CopyConstructible](../named_req/CopyConstructible.html "cpp/named req/CopyConstructible") and [CopyAssignable](../named_req/CopyAssignable.html "cpp/named req/CopyAssignable"). The program is ill-formed if any of following values is false: 

  * [std::is_trivially_copyable](../types/is_trivially_copyable.html)<T>::value
  * [std::is_copy_constructible](../types/is_copy_constructible.html)<T>::value
  * [std::is_move_constructible](../types/is_move_constructible.html)<T>::value
  * [std::is_copy_assignable](../types/is_copy_assignable.html)<T>::value
  * [std::is_move_assignable](../types/is_move_assignable.html)<T>::value
  * [std::is_same](../types/is_same.html)<T, typename [std::remove_cv](../types/remove_cv.html)<T>::type>::value


    
    
    struct Counters { int a; int b; }; // user-defined trivially-copyable type
    std::atomic<Counters> cnt;         // specialization for the user-defined type

std::atomic<bool> uses the primary template. It is guaranteed to be a [standard layout struct](../language/classes.html#Standard-layout_class "cpp/language/classes") and has a [trivial destructor](../language/destructor.html#Trivial_destructor "cpp/language/destructor"). 

#### Partial specializations

The standard library provides partial specializations of the `std::atomic` template for the following types with additional properties that the primary template does not have: 

2) Partial specializations `std::atomic<U*>` for all pointer types. These specializations have standard layout, trivial default constructors,(until C++20) and trivial destructors. Besides the operations provided for all atomic types, these specializations additionally support atomic arithmetic operations appropriate to pointer types, such as [`fetch_add`](atomic/fetch_add.html "cpp/atomic/atomic/fetch add"), [`fetch_sub`](atomic/fetch_sub.html "cpp/atomic/atomic/fetch sub").

3,4) Partial specializations std::atomic<[std::shared_ptr](../memory/shared_ptr.html)<U>> and std::atomic<[std::weak_ptr](../memory/weak_ptr.html)<U>> are provided for [std::shared_ptr](../memory/shared_ptr.html "cpp/memory/shared ptr") and [std::weak_ptr](../memory/weak_ptr.html "cpp/memory/weak ptr"). See [`std::atomic<std::shared_ptr>`](../memory/shared_ptr/atomic2.html "cpp/memory/shared ptr/atomic2") and [`std::atomic<std::weak_ptr>`](../memory/weak_ptr/atomic2.html "cpp/memory/weak ptr/atomic2") for details.  | (since C++20)  
---|---  
  
#### Specializations for integral types

When instantiated with one of the following integral types, `std::atomic` provides additional atomic operations appropriate to integral types such as [`fetch_add`](atomic/fetch_add.html "cpp/atomic/atomic/fetch add"), [`fetch_sub`](atomic/fetch_sub.html "cpp/atomic/atomic/fetch sub"), [`fetch_and`](atomic/fetch_and.html "cpp/atomic/atomic/fetch and"), [`fetch_or`](atomic/fetch_or.html "cpp/atomic/atomic/fetch or"), [`fetch_xor`](atomic/fetch_xor.html "cpp/atomic/atomic/fetch xor"): 

    

  * The character types char, char8_t(since C++20), char16_t, char32_t, and wchar_t; 
  * The standard signed integer types: signed char, short, int, long, and long long; 
  * The standard unsigned integer types: unsigned char, unsigned short, unsigned int, unsigned long, and unsigned long long; 
  * Any additional integral types needed by the typedefs in the header [`<cstdint>`](../header/cstdint.html "cpp/header/cstdint"). 



Additionally, the resulting `std::atomic<_Integral_ >` specialization has standard layout, a trivial default constructor,(until C++20) and a trivial destructor. Signed integer arithmetic is defined to use two's complement; there are no undefined results. 

####  Specializations for floating-point types

When instantiated with one of the cv-unqualified floating-point types (float, double, long double and cv-unqualified [extended floating-point types](../language/types.html#Extended_floating-point_types "cpp/language/types")(since C++23)), `std::atomic` provides additional atomic operations appropriate to floating-point types such as [`fetch_add`](atomic/fetch_add.html "cpp/atomic/atomic/fetch add") and [`fetch_sub`](atomic/fetch_sub.html "cpp/atomic/atomic/fetch sub"). Additionally, the resulting `std::atomic<_Floating_ >` specialization has standard layout and a trivial destructor. No operations result in undefined behavior even if the result is not representable in the floating-point type. The [floating-point environment](../numeric/fenv.html "cpp/numeric/fenv") in effect may be different from the calling thread's floating-point environment.  | (since C++20)  
---|---  
  
### Member types

Type  |  Definition   
---|---  
`value_type` |  `T` (regardless of whether specialized or not)  
`difference_type`[[1]](atomic.html#cite_note-1) |  |  `value_type` (only for `atomic<_Integral_ >` and `atomic<_Floating_ >`(since C++20) specializations)  
|   
---|---  
[std::ptrdiff_t](../types/ptrdiff_t.html "cpp/types/ptrdiff t") (only for `std::atomic<U*>` specializations) |   
  
  1. [↑](atomic.html#cite_ref-1) `difference_type` is not defined in the primary `std::atomic` template or in the partial specializations for [std::shared_ptr](../memory/shared_ptr.html "cpp/memory/shared ptr") and [std::weak_ptr](../memory/weak_ptr.html "cpp/memory/weak ptr").



### Member functions

[ (constructor)](atomic/atomic.html "cpp/atomic/atomic/atomic") |  constructs an atomic object   
(public member function)   
---|---  
[ operator=](atomic/operator=.html "cpp/atomic/atomic/operator=") |  stores a value into an atomic object   
(public member function)   
[ is_lock_free](atomic/is_lock_free.html "cpp/atomic/atomic/is lock free") |  checks if the atomic object is lock-free   
(public member function)   
[ store](atomic/store.html "cpp/atomic/atomic/store") |  atomically replaces the value of the atomic object with a non-atomic argument   
(public member function)   
[ load](atomic/load.html "cpp/atomic/atomic/load") |  atomically obtains the value of the atomic object   
(public member function)   
[ operator T](atomic/operator_T.html "cpp/atomic/atomic/operator T") |  loads a value from an atomic object   
(public member function)   
[ exchange](atomic/exchange.html "cpp/atomic/atomic/exchange") |  atomically replaces the value of the atomic object and obtains the value held previously   
(public member function)   
[ compare_exchange_weakcompare_exchange_strong](atomic/compare_exchange.html "cpp/atomic/atomic/compare exchange") |  atomically compares the value of the atomic object with non-atomic argument and performs atomic exchange if equal or atomic load if not   
(public member function)   
[ wait](atomic/wait.html "cpp/atomic/atomic/wait")(C++20) |  blocks the thread until notified and the atomic value changes   
(public member function)   
[ notify_one](atomic/notify_one.html "cpp/atomic/atomic/notify one")(C++20) |  notifies at least one thread waiting on the atomic object   
(public member function)   
[ notify_all](atomic/notify_all.html "cpp/atomic/atomic/notify all")(C++20) |  notifies all threads blocked waiting on the atomic object   
(public member function)   
  
###  Constants  
  
[ is_always_lock_free](atomic/is_always_lock_free.html "cpp/atomic/atomic/is always lock free")[static] (C++17) |  indicates that the type is always lock-free   
(public static member constant)   
  
### Specialized member functions

#####  Specialized for integral, floating-point(since C++20) and pointer types   
  
---  
[ fetch_add](atomic/fetch_add.html "cpp/atomic/atomic/fetch add") |  atomically adds the argument to the value stored in the atomic object and obtains the value held previously   
(public member function)   
[ fetch_sub](atomic/fetch_sub.html "cpp/atomic/atomic/fetch sub") |  atomically subtracts the argument from the value stored in the atomic object and obtains the value held previously   
(public member function)   
[ operator+=operator-=](atomic/operator_arith2.html "cpp/atomic/atomic/operator arith2") |  adds to or subtracts from the atomic value   
(public member function)   
  
#####  Specialized for integral and pointer types only   
  
[ fetch_max](atomic/fetch_max.html "cpp/atomic/atomic/fetch max")(C++26) |  atomically performs [std::max](../algorithm/max.html "cpp/algorithm/max") between the argument and the value of the atomic object and obtains the value held previously   
(public member function)   
[ fetch_min](atomic/fetch_min.html "cpp/atomic/atomic/fetch min")(C++26) |  atomically performs [std::min](../algorithm/min.html "cpp/algorithm/min") between the argument and the value of the atomic object and obtains the value held previously   
(public member function)   
[ operator++operator++(int)operator--operator--(int)](atomic/operator_arith.html "cpp/atomic/atomic/operator arith") |  increments or decrements the atomic value by one   
(public member function)   
  
#####  Specialized for integral types only   
  
[ fetch_and](atomic/fetch_and.html "cpp/atomic/atomic/fetch and") |  atomically performs bitwise AND between the argument and the value of the atomic object and obtains the value held previously   
(public member function)   
[ fetch_or](atomic/fetch_or.html "cpp/atomic/atomic/fetch or") |  atomically performs bitwise OR between the argument and the value of the atomic object and obtains the value held previously   
(public member function)   
[ fetch_xor](atomic/fetch_xor.html "cpp/atomic/atomic/fetch xor") |  atomically performs bitwise XOR between the argument and the value of the atomic object and obtains the value held previously   
(public member function)   
[ operator&=operator|=operator^=](atomic/operator_arith3.html "cpp/atomic/atomic/operator arith3") |  performs bitwise AND, OR, XOR with the atomic value   
(public member function)   
  
### Type aliases

Type aliases are provided for bool and all integral types listed above, as follows: 

#####  Aliases for all `std::atomic<Integral>`  
  
---  
** atomic_bool**(C++11) |  std::atomic<bool>   
(typedef)   
** atomic_char**(C++11) |  std::atomic<char>   
(typedef)   
** atomic_schar**(C++11) |  std::atomic<signed char>   
(typedef)   
** atomic_uchar**(C++11) |  std::atomic<unsigned char>   
(typedef)   
** atomic_short**(C++11) |  std::atomic<short>   
(typedef)   
** atomic_ushort**(C++11) |  std::atomic<unsigned short>   
(typedef)   
** atomic_int**(C++11) |  std::atomic<int>   
(typedef)   
** atomic_uint**(C++11) |  std::atomic<unsigned int>   
(typedef)   
** atomic_long**(C++11) |  std::atomic<long>   
(typedef)   
** atomic_ulong**(C++11) |  std::atomic<unsigned long>   
(typedef)   
** atomic_llong**(C++11) |  std::atomic<long long>   
(typedef)   
** atomic_ullong**(C++11) |  std::atomic<unsigned long long>   
(typedef)   
** atomic_char8_t**(C++20) |  std::atomic<char8_t>   
(typedef)   
** atomic_char16_t**(C++11) |  std::atomic<char16_t>   
(typedef)   
** atomic_char32_t**(C++11) |  std::atomic<char32_t>   
(typedef)   
** atomic_wchar_t**(C++11) |  std::atomic<wchar_t>   
(typedef)   
** atomic_int8_t**(C++11)(optional) |  std::atomic<[std::int8_t](../types/integer.html)>   
(typedef)   
** atomic_uint8_t**(C++11)(optional) |  std::atomic<[std::uint8_t](../types/integer.html)>   
(typedef)   
** atomic_int16_t**(C++11)(optional) |  std::atomic<[std::int16_t](../types/integer.html)>   
(typedef)   
** atomic_uint16_t**(C++11)(optional) |  std::atomic<[std::uint16_t](../types/integer.html)>   
(typedef)   
** atomic_int32_t**(C++11)(optional) |  std::atomic<[std::int32_t](../types/integer.html)>   
(typedef)   
** atomic_uint32_t**(C++11)(optional) |  std::atomic<[std::uint32_t](../types/integer.html)>   
(typedef)   
** atomic_int64_t**(C++11)(optional) |  std::atomic<[std::int64_t](../types/integer.html)>   
(typedef)   
** atomic_uint64_t**(C++11)(optional) |  std::atomic<[std::uint64_t](../types/integer.html)>   
(typedef)   
** atomic_int_least8_t**(C++11) |  std::atomic<[std::int_least8_t](../types/integer.html)>   
(typedef)   
** atomic_uint_least8_t**(C++11) |  std::atomic<[std::uint_least8_t](../types/integer.html)>   
(typedef)   
** atomic_int_least16_t**(C++11) |  std::atomic<[std::int_least16_t](../types/integer.html)>   
(typedef)   
** atomic_uint_least16_t**(C++11) |  std::atomic<[std::uint_least16_t](../types/integer.html)>   
(typedef)   
** atomic_int_least32_t**(C++11) |  std::atomic<[std::int_least32_t](../types/integer.html)>   
(typedef)   
** atomic_uint_least32_t**(C++11) |  std::atomic<[std::uint_least32_t](../types/integer.html)>   
(typedef)   
** atomic_int_least64_t**(C++11) |  std::atomic<[std::int_least64_t](../types/integer.html)>   
(typedef)   
** atomic_uint_least64_t**(C++11) |  std::atomic<[std::uint_least64_t](../types/integer.html)>   
(typedef)   
** atomic_int_fast8_t**(C++11) |  std::atomic<[std::int_fast8_t](../types/integer.html)>   
(typedef)   
** atomic_uint_fast8_t**(C++11) |  std::atomic<[std::uint_fast8_t](../types/integer.html)>   
(typedef)   
** atomic_int_fast16_t**(C++11) |  std::atomic<[std::int_fast16_t](../types/integer.html)>   
(typedef)   
** atomic_uint_fast16_t**(C++11) |  std::atomic<[std::uint_fast16_t](../types/integer.html)>   
(typedef)   
** atomic_int_fast32_t**(C++11) |  std::atomic<[std::int_fast32_t](../types/integer.html)>   
(typedef)   
** atomic_uint_fast32_t**(C++11) |  std::atomic<[std::uint_fast32_t](../types/integer.html)>   
(typedef)   
** atomic_int_fast64_t**(C++11) |  std::atomic<[std::int_fast64_t](../types/integer.html)>   
(typedef)   
** atomic_uint_fast64_t**(C++11) |  std::atomic<[std::uint_fast64_t](../types/integer.html)>   
(typedef)   
** atomic_intptr_t**(C++11)(optional) |  std::atomic<[std::intptr_t](../types/integer.html)>   
(typedef)   
** atomic_uintptr_t**(C++11)(optional) |  std::atomic<[std::uintptr_t](../types/integer.html)>   
(typedef)   
** atomic_size_t**(C++11) |  std::atomic<[std::size_t](../types/size_t.html)>   
(typedef)   
** atomic_ptrdiff_t**(C++11) |  std::atomic<[std::ptrdiff_t](../types/ptrdiff_t.html)>   
(typedef)   
** atomic_intmax_t**(C++11) |  std::atomic<[std::intmax_t](../types/integer.html)>   
(typedef)   
** atomic_uintmax_t**(C++11) |  std::atomic<[std::uintmax_t](../types/integer.html)>   
(typedef)   
  
#####  Aliases for special-purpose types   
  
** atomic_signed_lock_free**(C++20) |  a signed integral atomic type that is lock-free and for which waiting/notifying is most efficient   
(typedef)   
** atomic_unsigned_lock_free**(C++20) |  an unsigned integral atomic type that is lock-free and for which waiting/notifying is most efficient   
(typedef)   
Note: `std::atomic_int _N_ _t`, `std::atomic_uint _N_ _t`, `std::atomic_intptr_t`, and `std::atomic_uintptr_t` are defined if and only if `std::int _N_ _t`, `std::uint _N_ _t`, [std::intptr_t](../types/integer.html "cpp/types/integer"), and [std::uintptr_t](../types/integer.html "cpp/types/integer") are defined, respectively.  `std::atomic_signed_lock_free` and `std::atomic_unsigned_lock_free` are optional in freestanding implementations.  | (since C++20)  
---|---  
  
### Notes

There are non-member function template equivalents for all member functions of `std::atomic`. Those non-member functions may be additionally overloaded for types that are not specializations of `std::atomic`, but are able to guarantee atomicity. The only such type in the standard library is [std::shared_ptr](../memory/shared_ptr.html)<U>. 

`_Atomic` is a [keyword](../../c/keyword/_Atomic.html "c/keyword/ Atomic") and used to provide [atomic types](../../c/language/atomic.html "c/language/atomic") in C. 

Implementations are recommended to ensure that the representation of `_Atomic(T)` in C is same as that of `std::atomic<T>` in C++ for every possible type `T`. The mechanisms used to ensure atomicity and memory ordering should be compatible. 

On GCC and Clang, some of the functionality described here requires linking against `-latomic`. 

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_atomic_ref`](../experimental/feature_test.html#cpp_lib_atomic_ref "cpp/feature test") | [`201806L`](../compiler_support/20.html#cpp_lib_atomic_ref_201806L "cpp/compiler support/20") | (C++20) | `std::atomic_ref`  
[`__cpp_lib_constexpr_atomic`](../experimental/feature_test.html#cpp_lib_constexpr_atomic "cpp/feature test") | [`202411L`](../compiler_support/26.html#cpp_lib_constexpr_atomic_202411L "cpp/compiler support/26") | (C++26) | constexpr `std::atomic` and std::atomic_ref  
  
### Example

Run this code
    
    
    #include <atomic>
    #include <iostream>
    #include <thread>
    #include <vector>
     
    std::atomic_int acnt;
    int cnt;
     
    void f()
    {
        for (auto n{10000}; n; --n)
        {
            ++acnt;
            ++cnt;
            // Note: for this example, relaxed memory order is sufficient,
            // e.g. acnt.fetch_add(1, std::memory_order_relaxed);
        }
    }
     
    int main()
    {
        {
            [std::vector](../container/vector.html)<[std::jthread](../thread/jthread.html)> pool;
            for (int n = 0; n < 10; ++n)
                pool.emplace_back(f);
        }
     
        [std::cout](../io/cout.html) << "The atomic counter is " << acnt << '\n'
                  << "The non-atomic counter is " << cnt << '\n';
    }

Possible output: 
    
    
    The atomic counter is 100000
    The non-atomic counter is 69696

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2441](https://cplusplus.github.io/LWG/issue2441) | C++11  | typedefs for atomic versions of optional  
[fixed width integer types](../types/integer.html "cpp/types/integer") were missing  | added   
[LWG 3012](https://cplusplus.github.io/LWG/issue3012) | C++11  | `std::atomic<T>` was permitted for any `T`  
that is trivially copyable but not copyable  | such specializations are forbidden   
[LWG 3949](https://cplusplus.github.io/LWG/issue3949) | C++17  | the wording requiring std::atomic<bool> to have a  
trivial destructor was accidently dropped in C++17  | added back   
[LWG 4069](https://cplusplus.github.io/LWG/issue4069)  
([P3323R1](https://wg21.link/P3323R1))  | C++11  | support for cv-qualified `T` was questionable  | disallow `T` being cv-qualified   
[P0558R1](https://wg21.link/P0558R1) | C++11  | template argument deduction for some  
functions for atomic types might accidently  
fail; invalid pointer operations were provided  | specification was substantially rewritten:  
member typedefs `value_type`  
and `difference_type` are added   
  
### See also

[ atomic_flag](atomic_flag.html "cpp/atomic/atomic flag")(C++11) |  the lock-free boolean atomic type   
(class)   
---|---  
[ std::atomic<std::shared_ptr>](../memory/shared_ptr/atomic2.html "cpp/memory/shared ptr/atomic2")(C++20) |  atomic shared pointer   
(class template specialization)   
[ std::atomic<std::weak_ptr>](../memory/weak_ptr/atomic2.html "cpp/memory/weak ptr/atomic2")(C++20) |  atomic weak pointer   
(class template specialization)   
[C documentation](../../c/language/atomic.html "c/language/atomic") for Atomic types
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
