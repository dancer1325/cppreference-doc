
  


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
**scoped_lock**(C++17)  
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
  


**`std::scoped_lock`**

Member functions  
---  
[scoped_lock::scoped_lock](scoped_lock/scoped_lock.html "cpp/thread/scoped lock/scoped lock")  
[scoped_lock::~scoped_lock](scoped_lock/~scoped_lock.html "cpp/thread/scoped lock/~scoped lock")  
  


Defined in header `[<mutex>](../header/mutex.html "cpp/header/mutex")` |  |   
---|---|---  
template< class... MutexTypes >  
class scoped_lock; |  |  (since C++17)  
| |   
  
The class `scoped_lock` is a mutex wrapper that provides a convenient [RAII-style](https://en.wikipedia.org/wiki/Resource_Acquisition_Is_Initialization "enwiki:Resource Acquisition Is Initialization") mechanism for owning zero or more mutexes for the duration of a scoped block. 

When a `scoped_lock` object is created, it attempts to take ownership of the mutexes it is given. When control leaves the scope in which the `scoped_lock` object was created, the `scoped_lock` is destructed and the mutexes are released. If several mutexes are given, deadlock avoidance algorithm is used as if by [std::lock](lock.html "cpp/thread/lock"). 

The `scoped_lock` class is non-copyable. 

## Contents

  * [1 Template parameters](scoped_lock.html#Template_parameters)
  * [2 Member types](scoped_lock.html#Member_types)
  * [3 Member functions](scoped_lock.html#Member_functions)
  * [4 Notes](scoped_lock.html#Notes)
  * [5 Example](scoped_lock.html#Example)
  * [6 Defect reports](scoped_lock.html#Defect_reports)
  * [7 See also](scoped_lock.html#See_also)

  
---  
  
### Template parameters

MutexTypes  |  \-  |  the types of the mutexes to lock. The types must meet the [Lockable](../named_req/Lockable.html "cpp/named req/Lockable") requirements unless sizeof...(MutexTypes) == 1, in which case the only type must meet [BasicLockable](../named_req/BasicLockable.html "cpp/named req/BasicLockable")  
---|---|---  
  
### Member types

Member type  |  Definition   
---|---  
`mutex_type`  
(conditionally present) |  If sizeof...(MutexTypes) == 1, member type `mutex_type` is the same as `Mutex`, the sole type in `MutexTypes...`. Otherwise, there is no member `mutex_type`.   
  
### Member functions

[ (constructor)](scoped_lock/scoped_lock.html "cpp/thread/scoped lock/scoped lock") |  constructs a `scoped_lock`, optionally locking the given mutexes   
(public member function)   
---|---  
[ (destructor)](scoped_lock/~scoped_lock.html "cpp/thread/scoped lock/~scoped lock") |  destructs the `scoped_lock` object, unlocks the underlying mutexes   
(public member function)   
operator=[deleted] |  not copy-assignable   
(public member function)   
  
### Notes

A common beginner error is to "forget" to give a `scoped_lock` variable a name, e.g. std::scoped_lock(mtx); (which default constructs a `scoped_lock` variable named `mtx`) or std::scoped_lock{mtx}; (which constructs a prvalue object that is immediately destroyed), thereby not actually constructing a lock that holds a mutex for the rest of the scope. 

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_scoped_lock`](../experimental/feature_test.html#cpp_lib_scoped_lock "cpp/feature test") | [`201703L`](../compiler_support/17.html#cpp_lib_scoped_lock_201703L "cpp/compiler support/17") | (C++17) | [`std::scoped_lock`](scoped_lock.html#Top)  
  
### Example

The following example uses `std::scoped_lock` to lock pairs of mutexes without deadlock and is RAII-style.

Run this code
    
    
    #include <chrono>
    #include <functional>
    #include <iostream>
    #include <mutex>
    #include <string>
    #include <syncstream>
    #include <thread>
    #include <vector>
    using namespace std::chrono_literals;
     
    struct Employee
    {
        [std::vector](../container/vector.html)<[std::string](../string/basic_string.html)> lunch_partners;
        [std::string](../string/basic_string.html) id;
        [std::mutex](mutex.html) m;
        Employee([std::string](../string/basic_string.html) id) : id(id) {}
        [std::string](../string/basic_string.html) partners() const
        {
            [std::string](../string/basic_string.html) ret = "Employee " + id + " has lunch partners: ";
            for (int count{}; const auto& partner : lunch_partners)
                ret += (count++ ? ", " : "") + partner;
            return ret;
        }
    };
     
    void send_mail(Employee&, Employee&)
    {
        // Simulate a time-consuming messaging operation
        [std::this_thread::sleep_for](sleep_for.html)(1s);
    }
     
    void assign_lunch_partner(Employee& e1, Employee& e2)
    {
        [std::osyncstream](../io/basic_osyncstream.html) synced_out([std::cout](../io/cout.html));
        synced_out << e1.id << " and " << e2.id << " are waiting for locks" << [std::endl](../io/manip/endl.html);
     
        {
            // Use std::scoped_lock to acquire two locks without worrying about
            // other calls to assign_lunch_partner deadlocking us
            // and it also provides a convenient RAII-style mechanism
     
            std::scoped_lock lock(e1.m, e2.m);
     
            // Equivalent code 1 (using std::lock and std::lock_guard)
            // std::lock(e1.m, e2.m);
            // std::lock_guard<std::mutex> lk1(e1.m, std::adopt_lock);
            // std::lock_guard<std::mutex> lk2(e2.m, std::adopt_lock);
     
            // Equivalent code 2 (if unique_locks are needed, e.g. for condition variables)
            // std::unique_lock<std::mutex> lk1(e1.m, std::defer_lock);
            // std::unique_lock<std::mutex> lk2(e2.m, std::defer_lock);
            // std::lock(lk1, lk2);
            synced_out << e1.id << " and " << e2.id << " got locks" << [std::endl](../io/manip/endl.html);
            e1.lunch_partners.push_back(e2.id);
            e2.lunch_partners.push_back(e1.id);
        }
     
        send_mail(e1, e2);
        send_mail(e2, e1);
    }
     
    int main()
    {
        Employee alice("Alice"), bob("Bob"), christina("Christina"), dave("Dave");
     
        // Assign in parallel threads because mailing users about lunch assignments
        // takes a long time
        [std::vector](../container/vector.html)<[std::thread](thread.html)> threads;
        threads.emplace_back(assign_lunch_partner, [std::ref](../utility/functional/ref.html)(alice), [std::ref](../utility/functional/ref.html)(bob));
        threads.emplace_back(assign_lunch_partner, [std::ref](../utility/functional/ref.html)(christina), [std::ref](../utility/functional/ref.html)(bob));
        threads.emplace_back(assign_lunch_partner, [std::ref](../utility/functional/ref.html)(christina), [std::ref](../utility/functional/ref.html)(alice));
        threads.emplace_back(assign_lunch_partner, [std::ref](../utility/functional/ref.html)(dave), [std::ref](../utility/functional/ref.html)(bob));
     
        for (auto& thread : threads)
            thread.join();
        [std::osyncstream](../io/basic_osyncstream.html)([std::cout](../io/cout.html)) << alice.partners() << '\n'  
                                    << bob.partners() << '\n'
                                    << christina.partners() << '\n' 
                                    << dave.partners() << '\n';
    }

Possible output: 
    
    
    Alice and Bob are waiting for locks
    Alice and Bob got locks
    Christina and Bob are waiting for locks
    Christina and Alice are waiting for locks
    Dave and Bob are waiting for locks
    Dave and Bob got locks
    Christina and Alice got locks
    Christina and Bob got locks
    Employee Alice has lunch partners: Bob, Christina
    Employee Bob has lunch partners: Alice, Dave, Christina
    Employee Christina has lunch partners: Alice, Bob
    Employee Dave has lunch partners: Bob

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2981](https://cplusplus.github.io/LWG/issue2981) | C++17  | redundant deduction guide from `scoped_lock<MutexTypes...>` was provided  | removed   
  
### See also

[ unique_lock](unique_lock.html "cpp/thread/unique lock")(C++11) |  implements movable mutex ownership wrapper   
(class template)   
---|---  
[ lock_guard](lock_guard.html "cpp/thread/lock guard")(C++11) |  implements a strictly scope-based mutex ownership wrapper   
(class template) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
