
  


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
  
| [barrier](barrier.html "cpp/thread/barrier")(C++20)  
---  
  
[Futures](../atomic.html#Futures "cpp/thread")  
| [promise](promise.html "cpp/thread/promise")(C++11)  
---  
[future](future.html "cpp/thread/future")(C++11)  
[shared_future](shared_future.html "cpp/thread/shared future")(C++11)  
[packaged_task](packaged_task.html "cpp/thread/packaged task")(C++11)  
**async**(C++11)  
  
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
  


Defined in header `[<future>](../header/future.html "cpp/header/future")` |  |   
---|---|---  
template< class F, class... Args >  
[std::future](future.html)</* see below */> async( F&& f, Args&&... args ); |  (1)  |  (since C++11)  
template< class F, class... Args >  
[std::future](future.html)</* see below */> async( [std::launch](launch.html) policy,  
F&& f, Args&&... args ); |  (2)  |  (since C++11)  
| |   
  
The function template `std::async` runs the function f asynchronously (potentially in a separate thread which might be a part of a thread pool) and returns a [std::future](future.html "cpp/thread/future") that will eventually hold the result of that function call. 

1) Behaves as if (2) is called with policy being [std::launch::async](launch.html) | [std::launch::deferred](launch.html).

2) Calls a function f with arguments args according to a specific launch policy policy (see [below](async.html#Launch_policies)).

The return type of `std::async` is [std::future](future.html)<V>, where `V` is: 

typename [std::result_of](../types/result_of.html)<typename [std::decay](../types/decay.html)<F>::type(  
typename [std::decay](../types/decay.html)<Args>::type...)>::type.  | (until C++17)  
---|---  
[std::invoke_result_t](../types/result_of.html)<[std::decay_t](../types/decay.html)<F>, [std::decay_t](../types/decay.html)<Args>...>.  | (since C++17)  
  
  


If any of the following conditions is satisfied, the program is ill-formed: 

  * `F` is not [MoveConstructible](../named_req/MoveConstructible.html "cpp/named req/MoveConstructible"). 
  * Any type in `Args` is not [MoveConstructible](../named_req/MoveConstructible.html "cpp/named req/MoveConstructible"). 
  * [`_INVOKE_`](../functional.html "cpp/utility/functional")([`_decay-copy_`](../standard_library/decay-copy.html "cpp/standard library/decay-copy")([std::forward](../utility/forward.html)<F>(f)),  
` `[` _decay-copy_`](../standard_library/decay-copy.html "cpp/standard library/decay-copy")([std::forward](../utility/forward.html)<Args>(args))...) is not a valid expression. 

| (until C++20)  
---|---  
If any of the following is false, the program is ill-formed: 

  * [std::is_constructible_v](../types/is_constructible.html)<[std::decay_t](../types/decay.html)<F>, F>
  * ([std::is_constructible_v](../types/is_constructible.html)<[std::decay_t](../types/decay.html)<Args>, Args> && ...)
  * [std::is_invocable_v](../types/is_invocable.html)<[std::decay_t](../types/decay.html)<F>, [std::decay_t](../types/decay.html)<Args>...>

| (since C++20)  
  
The call to `std::async` [synchronizes with](../atomic/memory_order.html "cpp/atomic/memory order") the call to f, and the completion of f is [sequenced before](../language/eval_order.html "cpp/language/eval order") making the shared state ready. 

## Contents

  * [1 Parameters](async.html#Parameters)
  * [2 Return value](async.html#Return_value)
  * [3 Launch policies](async.html#Launch_policies)
    * [3.1 Async invocation](async.html#Async_invocation)
    * [3.2 Deferred invocation](async.html#Deferred_invocation)
    * [3.3 Other policies](async.html#Other_policies)
  * [4 Policy selection](async.html#Policy_selection)
  * [5 Exceptions](async.html#Exceptions)
  * [6 Notes](async.html#Notes)
  * [7 Example](async.html#Example)
  * [8 Defect reports](async.html#Defect_reports)
  * [9 See also](async.html#See_also)

  
---  
  
### Parameters

f  |  \-  |  [Callable](../named_req/Callable.html "cpp/named req/Callable") object to call   
---|---|---  
args  |  \-  |  parameters to pass to f  
policy  |  \-  |  bitmask value, where individual bits control the allowed methods of execution   
  
### Return value

[std::future](future.html "cpp/thread/future") referring to the shared state created by this call to `std::async`. 

### Launch policies

#### Async invocation

If the _async_ flag is set, i.e. (policy & [std::launch::async](launch.html)) != 0, then `std::async` calls 

[`_INVOKE_`](../functional.html "cpp/utility/functional")([`_decay-copy_`](../standard_library/decay-copy.html "cpp/standard library/decay-copy")([std::forward](../utility/forward.html)<F>(f)),  
[` _decay-copy_`](../standard_library/decay-copy.html "cpp/standard library/decay-copy")([std::forward](../utility/forward.html)<Args>(args))...) | (until C++23)  
---|---  
[std::invoke](../utility/functional/invoke.html)(auto([std::forward](../utility/forward.html)<F>(f)),  
auto([std::forward](../utility/forward.html)<Args>(args))...) | (since C++23)  
  
as if in a new thread of execution represented by a [std::thread](thread.html "cpp/thread/thread") object. 

The calls of [`_decay-copy_`](../standard_library/decay-copy.html "cpp/standard library/decay-copy") are evaluated in the current thread.  | (until C++23)  
---|---  
The values produced by auto are [materialized](../language/implicit_cast.html#Temporary_materialization "cpp/language/implicit conversion") in the current thread.  | (since C++23)  
  
If the function f returns a value or throws an exception, it is stored in the shared state accessible through the [std::future](future.html "cpp/thread/future") that `std::async` returns to the caller. 

#### Deferred invocation

If the _deferred_ flag is set (i.e. (policy & [std::launch::deferred](launch.html)) != 0), then `std::async` stores 

[`_decay-copy_`](../standard_library/decay-copy.html "cpp/standard library/decay-copy")([std::forward](../utility/forward.html)<F>(f)) and [`_decay-copy_`](../standard_library/decay-copy.html "cpp/standard library/decay-copy")([std::forward](../utility/forward.html)<Args>(args))... in the shared state.  | (until C++23)  
---|---  
auto([std::forward](../utility/forward.html)<F>(f)) and auto([std::forward](../utility/forward.html)<Args>(args))... in the shared state.  | (since C++23)  
  
_Lazy evaluation_ is performed: 

  * The first call to a non-timed wait function on the [std::future](future.html "cpp/thread/future") that `std::async` returned to the caller will evaluate [`_INVOKE_`](../functional.html "cpp/utility/functional")(std::move(g), std::move(xyz)) in the thread that called the waiting function (which does not have to be the thread that originally called `std::async`), where 



    

  * g is the stored value of [`_decay-copy_`](../standard_library/decay-copy.html "cpp/standard library/decay-copy")([std::forward](../utility/forward.html)<F>(f)) and 
  * xyz is the stored copy of [`_decay-copy_`](../standard_library/decay-copy.html "cpp/standard library/decay-copy")([std::forward](../utility/forward.html)<Args>(args)).... 


| (until C++23)  
---|---  
  
    

  * g is the stored value of auto([std::forward](../utility/forward.html)<F>(f)) and 
  * xyz is the stored copy of auto([std::forward](../utility/forward.html)<Args>(args)).... 


| (since C++23)  
  
  * The result or exception is placed in the shared state associated with the returned [std::future](future.html "cpp/thread/future") and only then it is made ready. All further accesses to the same [std::future](future.html "cpp/thread/future") will return the result immediately. 



#### Other policies

If neither [std::launch::async](launch.html "cpp/thread/launch") nor [std::launch::deferred](launch.html "cpp/thread/launch"), nor any implementation-defined policy flag is set in policy, the behavior is undefined. 

### Policy selection

If more than one flag is set, it is implementation-defined which policy is selected. For the default (both the [std::launch::async](launch.html "cpp/thread/launch") and [std::launch::deferred](launch.html "cpp/thread/launch") flags are set in policy), standard recommends (but does not require) utilizing available concurrency, and deferring any additional tasks. 

If the [std::launch::async](launch.html "cpp/thread/launch") policy is chosen, 

  * a call to a waiting function on an asynchronous return object that shares the shared state created by this `std::async` call blocks until the associated thread has completed, as if joined, or else time out; and 
  * the associated thread completion _synchronizes-with_ the successful return from the first function that is waiting on the shared state, or with the return of the last function that releases the shared state, whichever comes first. 



### Exceptions

Throws 

  * [std::bad_alloc](../memory/new/bad_alloc.html "cpp/memory/new/bad alloc"), if the memory for the internal data structures cannot be allocated, or 
  * [std::system_error](../error/system_error.html "cpp/error/system error") with error condition [std::errc::resource_unavailable_try_again](../error/errc.html "cpp/error/errc"), if policy == [std::launch::async](launch.html) and the implementation is unable to start a new thread. 
    * If policy is [std::launch::async](launch.html) | [std::launch::deferred](launch.html) or has additional bits set, it will fall back to deferred invocation or the implementation-defined policies in this case. 



### Notes

The implementation may extend the behavior of the first overload of `std::async` by enabling additional (implementation-defined) bits in the default launch policy. 

Examples of implementation-defined launch policies are the sync policy (execute immediately, within the `std::async` call) and the task policy (similar to `std::async`, but thread-locals are not cleared) 

If the [std::future](future.html "cpp/thread/future") obtained from `std::async` is not moved from or bound to a reference, the destructor of the [std::future](future.html "cpp/thread/future") will block at the end of the full expression until the asynchronous operation completes, essentially making code such as the following synchronous: 
    
    
    std::async([std::launch::async](launch.html), []{ f(); }); // temporary's dtor waits for f()
    std::async([std::launch::async](launch.html), []{ g(); }); // does not start until f() completes

Note that the destructors of [std::future](future.html "cpp/thread/future")s obtained by means other than a call to `std::async` never block. 

### Example

Run this code
    
    
    #include <algorithm>
    #include <future>
    #include <iostream>
    #include <mutex>
    #include <numeric>
    #include <string>
    #include <vector>
     
    [std::mutex](mutex.html) m;
     
    struct X
    {
        void foo(int i, const [std::string](../string/basic_string.html)& str)
        {
            [std::lock_guard](lock_guard.html)<[std::mutex](mutex.html)> lk(m);
            [std::cout](../io/cout.html) << str << ' ' << i << '\n';
        }
     
        void bar(const [std::string](../string/basic_string.html)& str)
        {
            [std::lock_guard](lock_guard.html)<[std::mutex](mutex.html)> lk(m);
            [std::cout](../io/cout.html) << str << '\n';
        }
     
        int operator()(int i)
        {
            [std::lock_guard](lock_guard.html)<[std::mutex](mutex.html)> lk(m);
            [std::cout](../io/cout.html) << i << '\n';
            return i + 10;
        }
    };
     
    template<typename RandomIt>
    int parallel_sum(RandomIt beg, RandomIt end)
    {
        auto len = end - beg;
        if (len < 1000)
            return [std::accumulate](../algorithm/accumulate.html)(beg, end, 0);
     
        RandomIt mid = beg + len / 2;
        auto handle = std::async([std::launch::async](launch.html),
                                 parallel_sum<RandomIt>, mid, end);
        int sum = parallel_sum(beg, mid);
        return sum + handle.get();
    }
     
    int main()
    {
        [std::vector](../container/vector.html)<int> v(10000, 1);
        [std::cout](../io/cout.html) << "The sum is " << parallel_sum(v.begin(), v.end()) << '\n';
     
        X x;
        // Calls (&x)->foo(42, "Hello") with default policy:
        // may print "Hello 42" concurrently or defer execution
        auto a1 = std::async(&X::foo, &x, 42, "Hello");
        // Calls x.bar("world!") with deferred policy
        // prints "world!" when a2.get() or a2.wait() is called
        auto a2 = std::async([std::launch::deferred](launch.html), &X::bar, x, "world!");
        // Calls X()(43); with async policy
        // prints "43" concurrently
        auto a3 = std::async([std::launch::async](launch.html), X(), 43);
        a2.wait();                     // prints "world!"
        [std::cout](../io/cout.html) << a3.get() << '\n'; // prints "53"
    } // if a1 is not done at this point, destructor of a1 prints "Hello 42" here

Possible output: 
    
    
    The sum is 10000
    43
    world!
    53
    Hello 42

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2021](https://cplusplus.github.io/LWG/issue2021) | C++11  | return type incorrect and value category  
of arguments unclear in the deferred case  | corrected return type and  
clarified that rvalues are used   
[LWG 2078](https://cplusplus.github.io/LWG/issue2078) | C++11  | it was unclear whether [std::system_error](../error/system_error.html "cpp/error/system error")  
may be thrown if policy specifies other  
launch policies besides [std::launch::async](launch.html "cpp/thread/launch") | can only be thrown if  
policy == [std::launch::async](launch.html)  
[LWG 2100](https://cplusplus.github.io/LWG/issue2100) | C++11  | timed waiting functions could not timeout  
if [std::launch::async](launch.html "cpp/thread/launch") policy is used  | allowed   
[LWG 2120](https://cplusplus.github.io/LWG/issue2120) | C++11  | the behavior was unclear if no standard  
or implementation-defined policy is set  | the behavior is  
undefined in this case   
[LWG 2186](https://cplusplus.github.io/LWG/issue2186) | C++11  | it was unclear how the value returned and the  
exception thrown from the lazy evaluation are handled  | they are stored in  
the shared state   
[LWG 2752](https://cplusplus.github.io/LWG/issue2752) | C++11  | `std::async` might not throw [std::bad_alloc](../memory/new/bad_alloc.html "cpp/memory/new/bad alloc") if the  
memory for the internal data structures cannot be allocated  | throws   
[LWG 3476](https://cplusplus.github.io/LWG/issue3476) | C++20  | (the decayed types of) `F` and the argument types  
were directly required to be move constructible  | removed these requirements[[1]](async.html#cite_note-1)  
  
  1. [↑](async.html#cite_ref-1) The move-constructibility is already indirectly required by [std::is_constructible_v](../types/is_constructible.html "cpp/types/is constructible").



### See also

[ future](future.html "cpp/thread/future")(C++11) |  waits for a value that is set asynchronously   
(class template)   
---|---  
[C++ documentation](../experimental/execution.html "cpp/execution") for Execution support library
