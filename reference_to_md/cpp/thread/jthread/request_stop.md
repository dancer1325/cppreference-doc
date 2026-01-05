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
  


[`std::jthread`](../jthread.html "cpp/thread/jthread")

Member functions  
---  
[jthread::jthread](jthread.html "cpp/thread/jthread/jthread")  
[jthread::~jthread](~jthread.html "cpp/thread/jthread/~jthread")  
[jthread::operator=](operator=.html "cpp/thread/jthread/operator=")  
Observers  
[jthread::joinable](joinable.html "cpp/thread/jthread/joinable")  
[jthread::get_id](get_id.html "cpp/thread/jthread/get id")  
[jthread::native_handle](native_handle.html "cpp/thread/jthread/native handle")  
[jthread::hardware_concurrency](hardware_concurrency.html "cpp/thread/jthread/hardware concurrency")  
Operations  
[jthread::join](join.html "cpp/thread/jthread/join")  
[jthread::detach](detach.html "cpp/thread/jthread/detach")  
[jthread::swap](swap.html "cpp/thread/jthread/swap")  
Stop token handling  
[jthread::get_stop_source](get_stop_source.html "cpp/thread/jthread/get stop source")  
[jthread::get_stop_token](get_stop_token.html "cpp/thread/jthread/get stop token")  
**jthread::request_stop**  
Non-member functions  
[swap(std::jthread)](swap2.html "cpp/thread/jthread/swap2")  
  


bool request_stop() noexcept; |  |  (since C++20)  
---|---|---  
| |   
  
Issues a stop request to the internal stop-state, if it has not yet already had stop requested. 

The determination is made atomically, and if stop was requested, the stop-state is atomically updated to avoid race conditions, such that: 

  * stop_requested() and stop_possible() can be concurrently invoked on other [std::stop_token](../stop_token.html "cpp/thread/stop token")s and [std::stop_source](../stop_source.html "cpp/thread/stop source")s of the same shared stop-state. 
  * request_stop() can be concurrently invoked from multiple threads on the same `jthread` object or on other [std::stop_source](../stop_source.html "cpp/thread/stop source") objects associated with the same stop-state, and only one will actually perform the stop request. 



However, see the Notes section. 

## Contents

  * [1 Parameters](request_stop.html#Parameters)
  * [2 Return value](request_stop.html#Return_value)
  * [3 Postconditions](request_stop.html#Postconditions)
  * [4 Notes](request_stop.html#Notes)
  * [5 Example](request_stop.html#Example)

  
---  
  
### Parameters

(none) 

### Return value

true if this invocation made a stop request, otherwise false. 

### Postconditions

For a [std::stop_token](../stop_token.html "cpp/thread/stop token") retrieved by get_stop_token() or a [std::stop_source](../stop_source.html "cpp/thread/stop source") retrieved by get_stop_source(), stop_requested() is true. 

### Notes

If the request_stop() does issue a stop request (i.e., returns true), then any std::stop_callbacks registered for the same associated stop-state will be invoked synchronously, on the same thread request_stop() is issued on. If an invocation of a callback exits via an exception, [std::terminate](../../error/terminate.html "cpp/error/terminate") is called. 

If a stop request has already been made, this function returns false. However there is no guarantee that another thread or [std::stop_source](../stop_source.html "cpp/thread/stop source") object which has just (successfully) requested stop for the same stop-state is not still in the middle of invoking a [std::stop_callback](../stop_callback.html "cpp/thread/stop callback") function. 

If the request_stop() does issue a stop request (i.e., returns true), then all condition variables of base type [std::condition_variable_any](../condition_variable_any.html "cpp/thread/condition variable any") registered with an interruptible wait for [std::stop_token](../stop_token.html "cpp/thread/stop token")s associated with the `jthread`'s internal stop-state will be awoken. 

### Example

Run this code
    
    
    #include <chrono>
    #include <condition_variable>
    #include <iostream>
    #include <mutex>
    #include <thread>
     
    using namespace std::chrono_literals;
     
    // Helper function to quickly show which thread printed what
    void print(auto txt)
    {
        [std::cout](../../io/cout.html) << [std::this_thread::get_id](../get_id.html)() << ' ' << txt;
    }
     
    int main()
    {
        // A sleepy worker thread
        [std::jthread](../jthread.html) sleepy_worker(
            []([std::stop_token](../stop_token.html) stoken)
            {
                for (int i = 10; i; --i)
                {
                    [std::this_thread::sleep_for](../sleep_for.html)(300ms);
                    if (stoken.stop_requested())
                    {
                        print("Sleepy worker is requested to stop\n");
                        return;
                    }
                    print("Sleepy worker goes back to sleep\n");
                }
            });
     
        // A waiting worker thread
        // The condition variable will be awoken by the stop request.
        [std::jthread](../jthread.html) waiting_worker(
            []([std::stop_token](../stop_token.html) stoken)
            {
                [std::mutex](../mutex.html) mutex;
                [std::unique_lock](../unique_lock.html) lock(mutex);
                [std::condition_variable_any](../condition_variable_any.html)().wait(lock, stoken, []{ return false; });
                print("Waiting worker is requested to stop\n");
                return;
            });
     
        // Sleep this thread to give threads time to spin
        [std::this_thread::sleep_for](../sleep_for.html)(400ms);
     
        // std::jthread::request_stop() can be called explicitly:
        print("Requesting stop of sleepy worker\n");
        sleepy_worker.request_stop();
        sleepy_worker.join();
        print("Sleepy worker joined\n");
     
        // Or automatically using RAII:
        // waiting_worker's destructor will call request_stop()
        // and join the thread automatically.
    }

Possible output: 
    
    
    140287602706176 Sleepy worker goes back to sleep
    140287623300928 Requesting stop of sleepy worker
    140287602706176 Sleepy worker is requested to stop
    140287623300928 Sleepy worker joined
    140287594313472 Waiting worker is requested to stop
