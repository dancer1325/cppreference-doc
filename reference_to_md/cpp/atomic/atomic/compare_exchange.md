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
  


[`std::atomic`](../atomic.html "cpp/atomic/atomic")

[Member functions](../atomic.html#Member_functions "cpp/atomic/atomic")  
---  
[atomic::atomic](atomic.html "cpp/atomic/atomic/atomic")  
[atomic::operator=](operator=.html "cpp/atomic/atomic/operator=")  
[atomic::is_lock_free](is_lock_free.html "cpp/atomic/atomic/is lock free")  
[atomic::store](store.html "cpp/atomic/atomic/store")  
[atomic::load](load.html "cpp/atomic/atomic/load")  
[atomic::operator T](operator_T.html "cpp/atomic/atomic/operator T")  
[atomic::exchange](exchange.html "cpp/atomic/atomic/exchange")  
**atomic::compare_exchange_strong atomic::compare_exchange_weak**  
[atomic::wait](wait.html "cpp/atomic/atomic/wait")(C++20)  
[atomic::notify_one](notify_one.html "cpp/atomic/atomic/notify one")(C++20)  
[atomic::notify_all](notify_all.html "cpp/atomic/atomic/notify all")(C++20)  
[Constants](../atomic.html#Constants "cpp/atomic/atomic")  
[atomic::is_always_lock_free](is_always_lock_free.html "cpp/atomic/atomic/is always lock free")(C++17)  
[Specialized member functions](../atomic.html#Specialized_member_functions "cpp/atomic/atomic")  
[Specialized for integral,  
floating-point](../atomic.html#Specialized_for_integral.2C_floating-point_and_pointer_types "cpp/atomic/atomic") (C++20)  
[and pointer types](../atomic.html#Specialized_for_integral.2C_floating-point_and_pointer_types "cpp/atomic/atomic")  
[atomic::fetch_add](fetch_add.html "cpp/atomic/atomic/fetch add")  
[atomic::fetch_sub](fetch_sub.html "cpp/atomic/atomic/fetch sub")  
[atomic::operator+=atomic::operator-=](operator_arith2.html "cpp/atomic/atomic/operator arith2")  
[Specialized for integral and  
pointer types only](../atomic.html#Specialized_for_integral_and_pointer_types_only "cpp/atomic/atomic")  
[atomic::fetch_max](fetch_max.html "cpp/atomic/atomic/fetch max")(C++26)  
[atomic::fetch_min](fetch_min.html "cpp/atomic/atomic/fetch min")(C++26)  
[atomic::operator++atomic::operator++(int)atomic::operator--atomic::operator--(int)](operator_arith.html "cpp/atomic/atomic/operator arith")  
[Specialized for integral types only](../atomic.html#Specialized_for_integral_types_only "cpp/atomic/atomic")  
[atomic::fetch_and](fetch_and.html "cpp/atomic/atomic/fetch and")  
[atomic::fetch_or](fetch_or.html "cpp/atomic/atomic/fetch or")  
[atomic::fetch_xor](fetch_xor.html "cpp/atomic/atomic/fetch xor")  
[atomic::operator&=atomic::operator|=atomic::operator^=](operator_arith3.html "cpp/atomic/atomic/operator arith3")  
  


bool compare_exchange_weak( T& expected, T desired,  
[std::memory_order](../memory_order.html) success,   
[std::memory_order](../memory_order.html) failure ) noexcept; |  (1)  |  (since C++11)  
---|---|---  
bool compare_exchange_weak( T& expected, T desired,  
[std::memory_order](../memory_order.html) success,   
[std::memory_order](../memory_order.html) failure ) volatile noexcept; |  (2)  |  (since C++11)  
bool compare_exchange_weak( T& expected, T desired,  
[std::memory_order](../memory_order.html) order =  
[std::memory_order_seq_cst](../memory_order.html) ) noexcept; |  (3)  |  (since C++11)  
bool compare_exchange_weak( T& expected, T desired,  
[std::memory_order](../memory_order.html) order =  
[std::memory_order_seq_cst](../memory_order.html) ) volatile noexcept; |  (4)  |  (since C++11)  
bool compare_exchange_strong( T& expected, T desired,  
[std::memory_order](../memory_order.html) success,   
[std::memory_order](../memory_order.html) failure ) noexcept; |  (5)  |  (since C++11)  
bool compare_exchange_strong( T& expected, T desired,  
[std::memory_order](../memory_order.html) success,   
[std::memory_order](../memory_order.html) failure ) volatile noexcept; |  (6)  |  (since C++11)  
bool compare_exchange_strong( T& expected, T desired,  
[std::memory_order](../memory_order.html) order =   
[std::memory_order_seq_cst](../memory_order.html) ) noexcept; |  (7)  |  (since C++11)  
bool compare_exchange_strong  
( T& expected, T desired,  
[std::memory_order](../memory_order.html) order = [std::memory_order_seq_cst](../memory_order.html) ) volatile noexcept; |  (8)  |  (since C++11)  
| |   
  
Atomically compares the [object representation](../../language/objects.html "cpp/language/object")(until C++20)[value representation](../../language/objects.html "cpp/language/object")(since C++20) of *this with that of expected. If those are bitwise-equal, replaces the former with desired (performs read-modify-write operation). Otherwise, loads the actual value stored in *this into expected (performs load operation). 

Overloads  | Memory model for   
---|---  
read‑modify‑write operation  | load operation   
(1,2,5,6) | success | failure  
(3,4,7,8) | order | 

  * [std::memory_order_acquire](../memory_order.html) if  
order is [std::memory_order_acq_rel](../memory_order.html)
  * [std::memory_order_relaxed](../memory_order.html) if  
order is [std::memory_order_release](../memory_order.html)
  * otherwise order

  
  
If failure is stronger than success or(until C++17) is one of [std::memory_order_release](../memory_order.html) and [std::memory_order_acq_rel](../memory_order.html), the behavior is undefined. 

It is deprecated if [std::atomic](../atomic.html)<T>::is_always_lock_free is false and any volatile overload participates in overload resolution.  | (since C++20)  
---|---  
  
## Contents

  * [1 Parameters](compare_exchange.html#Parameters)
  * [2 Return value](compare_exchange.html#Return_value)
  * [3 Notes](compare_exchange.html#Notes)
  * [4 Example](compare_exchange.html#Example)
  * [5 See also](compare_exchange.html#See_also)

  
---  
  
### Parameters

expected  |  \-  |  reference to the value expected to be found in the atomic object   
---|---|---  
desired  |  \-  |  the value to store in the atomic object if it is as expected   
success  |  \-  |  the memory synchronization ordering for the read-modify-write operation if the comparison succeeds   
failure  |  \-  |  the memory synchronization ordering for the load operation if the comparison fails   
order  |  \-  |  the memory synchronization ordering for both operations   
  
### Return value

true if the underlying atomic value was successfully changed, false otherwise. 

### Notes

The comparison and copying are bitwise (similar to [std::memcmp](../../string/byte/memcmp.html "cpp/string/byte/memcmp") and [std::memcpy](../../string/byte/memcpy.html "cpp/string/byte/memcpy")); no constructor, assignment operator, or comparison operator are used. 

`compare_exchange_weak` is allowed to fail spuriously, that is, acts as if *this != expected even if they are equal. When a compare-and-exchange is in a loop, `compare_exchange_weak` will yield better performance on some platforms. 

When `compare_exchange_weak` would require a loop and `compare_exchange_strong` would not, `compare_exchange_strong` is preferable unless the object representation of `T` may include padding bits,(until C++20) trap bits, or offers multiple object representations for the same value (e.g. floating-point NaN). In those cases, `compare_exchange_weak` typically works because it quickly converges on some stable object representation. 

For a union with bits that participate in the value representations of some members but not the others, compare-and-exchange might always fail because such padding bits have indeterminate values when they do not participate in the value representation of the active member. 

Padding bits that never participate in an object's value representation are ignored.  | (since C++20)  
---|---  
  
### Example

Compare-and-exchange operations are often used as basic building blocks of [lock-free](https://en.wikipedia.org/wiki/Non-blocking_algorithm "enwiki:Non-blocking algorithm") data structures.

Run this code
    
    
    #include <atomic>
     
    template<typename T>
    struct node
    {
        T data;
        node* next;
        node(const T& data) : data(data), next(nullptr) {}
    };
     
    template<typename T>
    class stack
    {
        [std::atomic](../atomic.html)<node<T>*> head;
    public:
        void push(const T& data)
        {
            node<T>* new_node = new node<T>(data);
     
            // put the current value of head into new_node->next
            new_node->next = head.load([std::memory_order_relaxed](../memory_order.html));
     
            // now make new_node the new head, but if the head
            // is no longer what's stored in new_node->next
            // (some other thread must have inserted a node just now)
            // then put that new head into new_node->next and try again
            while (!head.compare_exchange_weak(new_node->next, new_node,
                                               [std::memory_order_release](../memory_order.html),
                                               [std::memory_order_relaxed](../memory_order.html)))
                ; // the body of the loop is empty
     
    // Note: the above use is not thread-safe in at least 
    // GCC prior to 4.8.3 (bug 60272), clang prior to 2014-05-05 (bug 18899)
    // MSVC prior to 2014-03-17 (bug 819819). The following is a workaround:
    //      node<T>* old_head = head.load(std::memory_order_relaxed);
    //      do
    //      {
    //          new_node->next = old_head;
    //      }
    //      while (!head.compare_exchange_weak(old_head, new_node,
    //                                         std::memory_order_release,
    //                                         std::memory_order_relaxed));
        }
    };
     
    int main()
    {
        stack<int> s;
        s.push(1);
        s.push(2);
        s.push(3);
    }

Demonstrates how `std::compare_exchange_strong` either changes the value of the atomic variable or the variable used for comparison.| This section is incomplete  
Reason: more practical use of the strong CAS would be nice, such as where Concurrency in Action uses it   
---|---  
  
Run this code
    
    
    #include <atomic>
    #include <iostream>
     
    [std::atomic](../atomic.html)<int> ai;
     
    int tst_val = 4;
    int new_val = 5;
    bool exchanged = false;
     
    void valsout()
    {
        [std::cout](../../io/cout.html) << "ai = " << ai
    	      << "  tst_val = " << tst_val
    	      << "  new_val = " << new_val
    	      << "  exchanged = " << [std::boolalpha](../../io/manip/boolalpha.html) << exchanged
    	      << '\n';
    }
     
    int main()
    {
        ai = 3;
        valsout();
     
        // tst_val != ai   ==>  tst_val is modified
        exchanged = ai.compare_exchange_strong(tst_val, new_val);
        valsout();
     
        // tst_val == ai   ==>  ai is modified
        exchanged = ai.compare_exchange_strong(tst_val, new_val);
        valsout();
    }

Output: 
    
    
    ai = 3  tst_val = 4  new_val = 5  exchanged = false
    ai = 3  tst_val = 3  new_val = 5  exchanged = false
    ai = 5  tst_val = 3  new_val = 5  exchanged = true

### See also

[ atomic_compare_exchange_weakatomic_compare_exchange_weak_explicitatomic_compare_exchange_strongatomic_compare_exchange_strong_explicit](../atomic_compare_exchange.html "cpp/atomic/atomic compare exchange")(C++11)(C++11)(C++11)(C++11) |  atomically compares the value of the atomic object with non-atomic argument and performs atomic exchange if equal or atomic load if not   
(function template)   
---|---
