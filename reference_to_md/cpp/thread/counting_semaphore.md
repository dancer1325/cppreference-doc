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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/navbar_content&action=edit)

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
**counting_semaphore binary_semaphore**(C++20)(C++20)  
[Latches and Barriers](../atomic.html#Latches_and_Barriers "cpp/thread")  
| [latch](latch.html "cpp/thread/latch")(C++20)  
---  
  
| [barrier](barrier.html "cpp/thread/barrier")(C++20)  
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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/thread/navbar_content&action=edit)

**`std::counting_semaphore`**

Member functions  
---  
[counting_semaphore::counting_semaphore](counting_semaphore/counting_semaphore.html "cpp/thread/counting semaphore/counting semaphore")  
[counting_semaphore::~counting_semaphore](counting_semaphore/~counting_semaphore.html "cpp/thread/counting semaphore/~counting semaphore")  
Operations  
[counting_semaphore::release](counting_semaphore/release.html "cpp/thread/counting semaphore/release")  
[counting_semaphore::acquire](counting_semaphore/acquire.html "cpp/thread/counting semaphore/acquire")  
[counting_semaphore::try_acquire](counting_semaphore/try_acquire.html "cpp/thread/counting semaphore/try acquire")  
[counting_semaphore::try_acquire_for](counting_semaphore/try_acquire_for.html "cpp/thread/counting semaphore/try acquire for")  
[counting_semaphore::try_acquire_until](counting_semaphore/try_acquire_until.html "cpp/thread/counting semaphore/try acquire until")  
Constants  
[counting_semaphore::max](counting_semaphore/max.html "cpp/thread/counting semaphore/max")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/thread/counting_semaphore/navbar_content&action=edit)

Defined in header `[<semaphore>](../header/semaphore.html "cpp/header/semaphore")` |  |   
---|---|---  
template< [std::ptrdiff_t](../types/ptrdiff_t.html) LeastMaxValue = /* implementation-defined */ >  
class counting_semaphore; |  (1)  |  (since C++20)  
using binary_semaphore = std::counting_semaphore<1>; |  (2)  |  (since C++20)  
| |   
  
1) A `counting_semaphore` is a lightweight synchronization primitive that can control access to a shared resource. Unlike a [std::mutex](mutex.html "cpp/thread/mutex"), a `counting_semaphore` allows more than one concurrent access to the same resource, for at least `LeastMaxValue` concurrent accessors. The program is ill-formed if `LeastMaxValue` is negative.

2) `binary_semaphore` is an alias for specialization of `std::counting_semaphore` with `LeastMaxValue` being 1. Implementations may implement `binary_semaphore` more efficiently than the default implementation of `std::counting_semaphore`.

A `counting_semaphore` contains an internal counter initialized by the constructor. This counter is decremented by calls to acquire() and related methods, and is incremented by calls to release(). When the counter is zero, acquire() blocks until the counter is incremented, but try_acquire() does not block; try_acquire_for() and try_acquire_until() block until the counter is incremented or a timeout is reached. 

Similar to [std::condition_variable::wait()](condition_variable/wait.html "cpp/thread/condition variable/wait"), `counting_semaphore`'s try_acquire() can spuriously fail. 

Specializations of `std::counting_semaphore` are not [DefaultConstructible](../named_req/DefaultConstructible.html "cpp/named req/DefaultConstructible"), [CopyConstructible](../named_req/CopyConstructible.html "cpp/named req/CopyConstructible"), [MoveConstructible](../named_req/MoveConstructible.html "cpp/named req/MoveConstructible"), [CopyAssignable](../named_req/CopyAssignable.html "cpp/named req/CopyAssignable"), or [MoveAssignable](../named_req/MoveAssignable.html "cpp/named req/MoveAssignable"). 

## Contents

  * [1 Data Members](counting_semaphore.html#Data_Members)
  * [2 Member functions](counting_semaphore.html#Member_functions)
    * [2.1 Operations](counting_semaphore.html#Operations)
    * [2.2 Constants](counting_semaphore.html#Constants)
  * [3 Notes](counting_semaphore.html#Notes)
  * [4 Example](counting_semaphore.html#Example)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/counting_semaphore&action=edit&section=1 "Edit section: Data Members")] Data Members

Member name  |  Definition   
---|---  
`_counter_` (private) |  The internal counter of type [std::ptrdiff_t](../types/ptrdiff_t.html "cpp/types/ptrdiff t").  
(exposition-only member object*)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/counting_semaphore&action=edit&section=2 "Edit section: Member functions")] Member functions

[ (constructor)](counting_semaphore/counting_semaphore.html "cpp/thread/counting semaphore/counting semaphore") |  constructs a `counting_semaphore`   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/thread/counting_semaphore/dsc_constructor&action=edit)  
---|---  
[ (destructor)](counting_semaphore/~counting_semaphore.html "cpp/thread/counting semaphore/~counting semaphore") |  destructs the `counting_semaphore`   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/thread/counting_semaphore/dsc_destructor&action=edit)  
operator=[deleted] |  `counting_semaphore` is not assignable   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/thread/counting_semaphore/dsc_operator%3D&action=edit)  
  
#####  Operations   
  
[ release](counting_semaphore/release.html "cpp/thread/counting semaphore/release") |  increments the internal counter and unblocks acquirers   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/thread/counting_semaphore/dsc_release&action=edit)  
[ acquire](counting_semaphore/acquire.html "cpp/thread/counting semaphore/acquire") |  decrements the internal counter or blocks until it can   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/thread/counting_semaphore/dsc_acquire&action=edit)  
[ try_acquire](counting_semaphore/try_acquire.html "cpp/thread/counting semaphore/try acquire") |  tries to decrement the internal counter without blocking   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/thread/counting_semaphore/dsc_try_acquire&action=edit)  
[ try_acquire_for](counting_semaphore/try_acquire_for.html "cpp/thread/counting semaphore/try acquire for") |  tries to decrement the internal counter, blocking for up to a duration time   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/thread/counting_semaphore/dsc_try_acquire_for&action=edit)  
[ try_acquire_until](counting_semaphore/try_acquire_until.html "cpp/thread/counting semaphore/try acquire until") |  tries to decrement the internal counter, blocking until a point in time   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/thread/counting_semaphore/dsc_try_acquire_until&action=edit)  
  
#####  Constants   
  
[ max](counting_semaphore/max.html "cpp/thread/counting semaphore/max")[static] |  returns the maximum possible value of the internal counter   
(public static member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/thread/counting_semaphore/dsc_max&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/counting_semaphore&action=edit&section=3 "Edit section: Notes")] Notes

As its name indicates, the `LeastMaxValue` is the _minimum_ max value, not the _actual_ max value. Thus max() can yield a number larger than `LeastMaxValue`. 

Unlike [std::mutex](mutex.html "cpp/thread/mutex") a `counting_semaphore` is not tied to threads of execution - acquiring a semaphore can occur on a different thread than releasing the semaphore, for example. All operations on `counting_semaphore` can be performed concurrently and without any relation to specific threads of execution, with the exception of the destructor which cannot be performed concurrently but can be performed on a different thread. 

Semaphores are also often used for the semantics of signaling/notifying rather than mutual exclusion, by initializing the semaphore with ​0​ and thus blocking the receiver(s) that try to acquire(), until the notifier "signals" by invoking release(n). In this respect semaphores can be considered alternatives to [std::condition_variable](condition_variable.html "cpp/thread/condition variable")s, often with better performance. 

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_semaphore`](../experimental/feature_test.html#cpp_lib_semaphore "cpp/feature test") | [`201907L`](../compiler_support/20.html#cpp_lib_semaphore_201907L "cpp/compiler support/20") | (C++20) | `std::counting_semaphore`, `std::binary_semaphore`  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/thread/counting_semaphore&action=edit&section=4 "Edit section: Example")] Example

Run this code
    
    
    #include <chrono>
    #include <iostream>
    #include <semaphore>
    #include <thread>
     
    // global binary semaphore instances
    // object counts are set to zero
    // objects are in non-signaled state
    std::binary_semaphore
        smphSignalMainToThread{0},
        smphSignalThreadToMain{0};
     
    void ThreadProc()
    {
        // wait for a signal from the main proc
        // by attempting to decrement the semaphore
        smphSignalMainToThread.acquire();
     
        // this call blocks until the semaphore's count
        // is increased from the main proc
     
        [std::cout](../io/cout.html) << "[thread] Got the signal\n"; // response message
     
        // wait for 3 seconds to imitate some work
        // being done by the thread
        using namespace std::literals;
        [std::this_thread::sleep_for](sleep_for.html)(3s);
     
        [std::cout](../io/cout.html) << "[thread] Send the signal\n"; // message
     
        // signal the main proc back
        smphSignalThreadToMain.release();
    }
     
    int main()
    {
        // create some worker thread
        [std::thread](thread.html) thrWorker(ThreadProc);
     
        [std::cout](../io/cout.html) << "[main] Send the signal\n"; // message
     
        // signal the worker thread to start working
        // by increasing the semaphore's count
        smphSignalMainToThread.release();
     
        // wait until the worker thread is done doing the work
        // by attempting to decrement the semaphore's count
        smphSignalThreadToMain.acquire();
     
        [std::cout](../io/cout.html) << "[main] Got the signal\n"; // response message
        thrWorker.join();
    }

Output: 
    
    
    [main] Send the signal
    [thread] Got the signal
    [thread] Send the signal
    [main] Got the signal
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
