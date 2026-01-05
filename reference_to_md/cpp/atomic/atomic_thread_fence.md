
  


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
[memory_order](memory_order.html "cpp/atomic/memory order")(C++11)  
[kill_dependency](kill_dependency.html "cpp/atomic/kill dependency")(C++11)(deprecated in C++26)  
**atomic_thread_fence**(C++11)  
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
extern "C" void atomic_thread_fence( [std::memory_order](memory_order.html) order ) noexcept; |  |  (since C++11)  
| |   
  
Establishes [memory synchronization ordering](memory_order.html "cpp/atomic/memory order") of non-atomic and relaxed atomic accesses, as instructed by order, without an associated atomic operation. Note however, that at least one atomic operation is required to set up the synchronization, as described below. 

## Contents

  * [1 Fence-atomic synchronization](atomic_thread_fence.html#Fence-atomic_synchronization)
  * [2 Atomic-fence synchronization](atomic_thread_fence.html#Atomic-fence_synchronization)
  * [3 Fence-fence synchronization](atomic_thread_fence.html#Fence-fence_synchronization)
  * [4 Parameters](atomic_thread_fence.html#Parameters)
  * [5 Notes](atomic_thread_fence.html#Notes)
  * [6 Example](atomic_thread_fence.html#Example)
  * [7 See also](atomic_thread_fence.html#See_also)

  
---  
  
#### Fence-atomic synchronization

A release fence `F` in thread `A` synchronizes-with atomic [acquire operation](memory_order.html "cpp/atomic/memory order") `Y` in thread `B`, if 

  * there exists an atomic store `X` (with any memory order), 
  * `Y` reads the value written by `X` (or the value would be written by [release sequence headed by `X`](memory_order.html "cpp/atomic/memory order") if `X` were a release operation), 
  * `F` is sequenced-before `X` in thread `A`. 



In this case, all non-atomic and relaxed atomic stores that are [sequenced-before](memory_order.html "cpp/atomic/memory order") `F` in thread `A` will [happen-before](memory_order.html "cpp/atomic/memory order") all non-atomic and relaxed atomic loads from the same locations made in thread `B` after `Y`. 

#### Atomic-fence synchronization

An atomic [release operation](memory_order.html "cpp/atomic/memory order") `X` in thread `A` synchronizes-with an acquire fence `F` in thread `B`, if 

  * there exists an atomic read `Y` (with any memory order), 
  * `Y` reads the value written by `X` (or by the [release sequence headed by X](memory_order.html "cpp/atomic/memory order")), 
  * `Y` is sequenced-before `F` in thread `B`. 



In this case, all non-atomic and relaxed atomic stores that are [sequenced-before](memory_order.html "cpp/atomic/memory order") `X` in thread `A` will [happen-before](memory_order.html "cpp/atomic/memory order") all non-atomic and relaxed atomic loads from the same locations made in thread `B` after `F`. 

#### Fence-fence synchronization

A release fence `FA` in thread `A` synchronizes-with an acquire fence `FB` in thread `B`, if 

  * there exists an atomic object `M`, 
  * there exists an atomic write `X` (with any memory order) that modifies `M` in thread `A`, 
  * `FA` is sequenced-before `X` in thread `A`, 
  * there exists an atomic read `Y` (with any memory order) in thread `B`, 
  * `Y` reads the value written by `X` (or the value would be written by [release sequence headed by `X`](memory_order.html "cpp/atomic/memory order") if `X` were a release operation), 
  * `Y` is sequenced-before `FB` in thread `B`. 



In this case, all non-atomic and relaxed atomic stores that are [sequenced-before](memory_order.html "cpp/atomic/memory order") `FA` in thread `A` will [happen-before](memory_order.html "cpp/atomic/memory order") all non-atomic and relaxed atomic loads from the same locations made in thread `B` after `FB`. 

Depending on the value of the order parameter, the effects of this call are: 

  * When order == [std::memory_order_relaxed](memory_order.html), there are no effects. 
  * When order == [std::memory_order_acquire](memory_order.html) or order == [std::memory_order_consume](memory_order.html), is an acquire fence. 
  * When order == [std::memory_order_release](memory_order.html), is a release fence. 
  * When order == [std::memory_order_acq_rel](memory_order.html), is both a release fence and an acquire fence. 
  * When order == [std::memory_order_seq_cst](memory_order.html), is a sequentially-consistent ordering acquire fence and release fence. 



### Parameters

order  |  \-  |  the memory ordering executed by this fence   
---|---|---  
  
### Notes

On x86 (including x86-64), `atomic_thread_fence` functions issue no CPU instructions and only affect compile-time code motion, except for std::atomic_thread_fence([std::memory_order_seq_cst](memory_order.html)). 

`atomic_thread_fence` imposes stronger synchronization constraints than an atomic store operation with the same [std::memory_order](memory_order.html "cpp/atomic/memory order"). While an atomic store-release operation prevents all preceding reads and writes from moving past the store-release, an `atomic_thread_fence` with [std::memory_order_release](memory_order.html) ordering prevents all preceding reads and writes from moving past all subsequent stores. 

Fence-fence synchronization can be used to add synchronization to a sequence of several relaxed atomic operations, for example: 
    
    
    // Global
    [std::string](../string/basic_string.html) computation(int);
    void print([std::string](../string/basic_string.html));
     
    [std::atomic](atomic.html)<int> arr[3] = {-1, -1, -1};
    [std::string](../string/basic_string.html) data[1000]; //non-atomic data
     
    // Thread A, compute 3 values.
    void ThreadA(int v0, int v1, int v2)
    {
    //  assert(0 <= v0, v1, v2 < 1000);
        data[v0] = computation(v0);
        data[v1] = computation(v1);
        data[v2] = computation(v2);
        std::atomic_thread_fence([std::memory_order_release](memory_order.html));
        [std::atomic_store_explicit](atomic_store.html)(&arr[0], v0, [std::memory_order_relaxed](memory_order.html));
        [std::atomic_store_explicit](atomic_store.html)(&arr[1], v1, [std::memory_order_relaxed](memory_order.html));
        [std::atomic_store_explicit](atomic_store.html)(&arr[2], v2, [std::memory_order_relaxed](memory_order.html));
    }
     
    // Thread B, prints between 0 and 3 values already computed.
    void ThreadB()
    {
        int v0 = [std::atomic_load_explicit](atomic_load.html)(&arr[0], [std::memory_order_relaxed](memory_order.html));
        int v1 = [std::atomic_load_explicit](atomic_load.html)(&arr[1], [std::memory_order_relaxed](memory_order.html));
        int v2 = [std::atomic_load_explicit](atomic_load.html)(&arr[2], [std::memory_order_relaxed](memory_order.html));
        std::atomic_thread_fence([std::memory_order_acquire](memory_order.html));
    //  v0, v1, v2 might turn out to be -1, some or all of them.
    //  Otherwise it is safe to read the non-atomic data because of the fences:
        if (v0 != -1)
            print(data[v0]);
        if (v1 != -1)
            print(data[v1]);
        if (v2 != -1)
            print(data[v2]);
    }

### Example

Scan an array of mailboxes, and process only the ones intended for us, without unnecessary synchronization. This example uses atomic-fence synchronization. 
    
    
    const int num_mailboxes = 32;
    [std::atomic](atomic.html)<int> mailbox_receiver[num_mailboxes];
    [std::string](../string/basic_string.html) mailbox_data[num_mailboxes];
     
    // The writer threads update non-atomic shared data 
    // and then update mailbox_receiver[i] as follows:
    mailbox_data[i] = ...;
    [std::atomic_store_explicit](atomic_store.html)(&mailbox_receiver[i], receiver_id, [std::memory_order_release](memory_order.html));
     
    // Reader thread needs to check all mailbox[i], but only needs to sync with one.
    for (int i = 0; i < num_mailboxes; ++i)
        if ([std::atomic_load_explicit](atomic_load.html)(&mailbox_receiver[i],
            [std::memory_order_relaxed](memory_order.html)) == my_id)
        {
            // synchronize with just one writer
            std::atomic_thread_fence([std::memory_order_acquire](memory_order.html));
            // guaranteed to observe everything done in the writer thread
            // before the atomic_store_explicit()
            do_work(mailbox_data[i]);
        }

### See also

[ memory_order](memory_order.html "cpp/atomic/memory order")(C++11) |  defines memory ordering constraints for the given atomic operation   
(enum)   
---|---  
[ atomic_signal_fence](atomic_signal_fence.html "cpp/atomic/atomic signal fence")(C++11) |  fence between a thread and a signal handler executed in the same thread   
(function)   
[C documentation](../../c/atomic/atomic_thread_fence.html "c/atomic/atomic thread fence") for atomic_thread_fence
