 
  


  
  
  
  
[operator newoperator new[]](../new/operator_new.html "cpp/memory/new/operator new")  
[operator deleteoperator delete[]](../new/operator_delete.html "cpp/memory/new/operator delete")  
[nothrow_t](../new/nothrow_t.html "cpp/memory/new/nothrow t")  
[nothrow](../new/nothrow.html "cpp/memory/new/nothrow")  
[new_handler](../new/new_handler.html "cpp/memory/new/new handler")  
[set_new_handler](../new/set_new_handler.html "cpp/memory/new/set new handler")  
[get_new_handler](../new/get_new_handler.html "cpp/memory/new/get new handler")(C++11)  
[bad_alloc](../new/bad_alloc.html "cpp/memory/new/bad alloc")  
[bad_array_new_length](../new/bad_array_new_length.html "cpp/memory/new/bad array new length")(C++11)  
[align_val_t](../new/align_val_t.html "cpp/memory/new/align val t")(C++17)  
[destroying_delete_t](../new/destroying_delete_t.html "cpp/memory/new/destroying delete t")(C++20)  
[launder](../../utility/launder.html "cpp/utility/launder")(C++17)  
[Smart pointers](../../memory.html#Smart_pointers "cpp/memory")  
[unique_ptr](../unique_ptr.html "cpp/memory/unique ptr")(C++11)  
[shared_ptr](../shared_ptr.html "cpp/memory/shared ptr")(C++11)  
[weak_ptr](../weak_ptr.html "cpp/memory/weak ptr")(C++11)  
[auto_ptr](../auto_ptr.html "cpp/memory/auto ptr")(until C++17*)  
[owner_less](../owner_less.html "cpp/memory/owner less")(C++11)  
[owner_less<void>](../owner_less_void.html "cpp/memory/owner less void")(C++17)  
[owner_hash](../owner_hash.html "cpp/memory/owner hash")(C++26)  
[owner_equal](../owner_equal.html "cpp/memory/owner equal")(C++26)  
[enable_shared_from_this](../enable_shared_from_this.html "cpp/memory/enable shared from this")(C++11)  
[bad_weak_ptr](../bad_weak_ptr.html "cpp/memory/bad weak ptr")(C++11)  
[default_delete](../default_delete.html "cpp/memory/default delete")(C++11)  
[out_ptr_t](../out_ptr_t.html "cpp/memory/out ptr t")(C++23)  
[inout_ptr_t](../inout_ptr_t.html "cpp/memory/inout ptr t")(C++23)  
[Miscellaneous](../../memory.html#Miscellaneous "cpp/memory")  
[pointer_traits](../pointer_traits.html "cpp/memory/pointer traits")(C++11)  
[to_address](../to_address.html "cpp/memory/to address")(C++20)  
[addressof](../addressof.html "cpp/memory/addressof")(C++11)  
[align](../align.html "cpp/memory/align")(C++11)  
[assume_aligned](../assume_aligned.html "cpp/memory/assume aligned")(C++20)  
[is_sufficiently_aligned](../is_sufficiently_aligned.html "cpp/memory/is sufficiently aligned")(C++26)  
[C Library](../c.html "cpp/memory/c")  
| [malloc](../c/malloc.html "cpp/memory/c/malloc")  
---  
[calloc](../c/calloc.html "cpp/memory/c/calloc")  
[realloc](../c/realloc.html "cpp/memory/c/realloc")  
  
| [free](../c/free.html "cpp/memory/c/free")  
---  
[aligned_alloc](../c/aligned_alloc.html "cpp/memory/c/aligned alloc")(C++17)  
  
  
  


[`std::shared_ptr`](../shared_ptr.html "cpp/memory/shared ptr")

Member functions  
---  
[shared_ptr::shared_ptr](shared_ptr.html "cpp/memory/shared ptr/shared ptr")  
[shared_ptr::~shared_ptr](~shared_ptr.html "cpp/memory/shared ptr/~shared ptr")  
[shared_ptr::operator=](operator=.html "cpp/memory/shared ptr/operator=")  
Modifiers  
[shared_ptr::reset](reset.html "cpp/memory/shared ptr/reset")  
[shared_ptr::swap](swap.html "cpp/memory/shared ptr/swap")  
Observers  
[shared_ptr::get](get.html "cpp/memory/shared ptr/get")  
[shared_ptr::operator*shared_ptr::operator->](operator*.html "cpp/memory/shared ptr/operator*")  
[shared_ptr::operator[]](operator_at.html "cpp/memory/shared ptr/operator at")(C++17)  
[shared_ptr::use_count](use_count.html "cpp/memory/shared ptr/use count")  
[shared_ptr::unique](unique.html "cpp/memory/shared ptr/unique")(until C++20*)  
[shared_ptr::operator bool](operator_bool.html "cpp/memory/shared ptr/operator bool")  
[shared_ptr::owner_before](owner_before.html "cpp/memory/shared ptr/owner before")  
[shared_ptr::owner_hash](owner_hash.html "cpp/memory/shared ptr/owner hash")(C++26)  
[shared_ptr::owner_equal](owner_equal.html "cpp/memory/shared ptr/owner equal")(C++26)  
Non-member functions  
[swap(std::shared_ptr)](swap2.html "cpp/memory/shared ptr/swap2")  
[make_sharedmake_shared_for_overwrite](make_shared.html "cpp/memory/shared ptr/make shared")(C++20)  
[allocate_sharedallocate_shared_for_overwrite](allocate_shared.html "cpp/memory/shared ptr/allocate shared")(C++20)  
[static_pointer_castdynamic_pointer_castconst_pointer_castreinterpret_pointer_cast](pointer_cast.html "cpp/memory/shared ptr/pointer cast")(C++17)  
[get_deleter](get_deleter.html "cpp/memory/shared ptr/get deleter")  
[operator==operator!=operator<operator<=operator>operator>=operator<=>](operator_cmp.html "cpp/memory/shared ptr/operator cmp")(until C++20)(until C++20)(until C++20)(until C++20)(until C++20)(C++20)  
[operator<<](operator_ltlt.html "cpp/memory/shared ptr/operator ltlt")  
**atomic_xxx** functions (until C++26*)  
Helper classes  
[atomic<std::shared_ptr>](atomic2.html "cpp/memory/shared ptr/atomic2")(C++20)  
[hash<std::shared_ptr>](hash.html "cpp/memory/shared ptr/hash")  
[Deduction guides](deduction_guides.html "cpp/memory/shared ptr/deduction guides")(C++17)  
  


Defined in header `[<memory>](../../header/memory.html "cpp/header/memory")` |  |   
---|---|---  
template< class T >  
bool atomic_is_lock_free( const [std::shared_ptr](../shared_ptr.html)<T>* p ); |  (1)  |  (since C++11)   
(deprecated in C++20)   
(removed in C++26)  
template< class T >  
[std::shared_ptr](../shared_ptr.html)<T> atomic_load( const [std::shared_ptr](../shared_ptr.html)<T>* p ); |  (2)  |  (since C++11)   
(deprecated in C++20)   
(removed in C++26)  
template< class T >  
[std::shared_ptr](../shared_ptr.html)<T> atomic_load_explicit  
( const [std::shared_ptr](../shared_ptr.html)<T>* p, [std::memory_order](../../atomic/memory_order.html) mo ); |  (3)  |  (since C++11)   
(deprecated in C++20)   
(removed in C++26)  
template< class T >  
void atomic_store( [std::shared_ptr](../shared_ptr.html)<T>* p, [std::shared_ptr](../shared_ptr.html)<T> r ); |  (4)  |  (since C++11)   
(deprecated in C++20)   
(removed in C++26)  
template< class T >  
void atomic_store_explicit  
( [std::shared_ptr](../shared_ptr.html)<T>* p, [std::shared_ptr](../shared_ptr.html)<T> r,  
[std::memory_order](../../atomic/memory_order.html) mo ); |  (5)  |  (since C++11)   
(deprecated in C++20)   
(removed in C++26)  
template< class T >  
[std::shared_ptr](../shared_ptr.html)<T> atomic_exchange  
( [std::shared_ptr](../shared_ptr.html)<T>* p, [std::shared_ptr](../shared_ptr.html)<T> r ); |  (6)  |  (since C++11)   
(deprecated in C++20)   
(removed in C++26)  
template< class T >  
[std::shared_ptr](../shared_ptr.html)<T> atomic_exchange_explicit  
( [std::shared_ptr](../shared_ptr.html)<T>* p, [std::shared_ptr](../shared_ptr.html)<T> r,  
[std::memory_order](../../atomic/memory_order.html) mo ); |  (7)  |  (since C++11)   
(deprecated in C++20)   
(removed in C++26)  
template< class T >  
bool atomic_compare_exchange_weak  
( [std::shared_ptr](../shared_ptr.html)<T>* p, [std::shared_ptr](../shared_ptr.html)<T>* expected,  
[std::shared_ptr](../shared_ptr.html)<T> desired ); |  (8)  |  (since C++11)   
(deprecated in C++20)   
(removed in C++26)  
template< class T >  
bool atomic_compare_exchange_strong  
( [std::shared_ptr](../shared_ptr.html)<T>* p, [std::shared_ptr](../shared_ptr.html)<T>* expected,  
[std::shared_ptr](../shared_ptr.html)<T> desired ); |  (9)  |  (since C++11)   
(deprecated in C++20)   
(removed in C++26)  
template< class T >  
bool atomic_compare_exchange_strong_explicit  
( [std::shared_ptr](../shared_ptr.html)<T>* p, [std::shared_ptr](../shared_ptr.html)<T>* expected,  
[std::shared_ptr](../shared_ptr.html)<T> desired,  
[std::memory_order](../../atomic/memory_order.html) success, [std::memory_order](../../atomic/memory_order.html) failure ); |  (10)  |  (since C++11)   
(deprecated in C++20)   
(removed in C++26)  
template< class T >  
bool atomic_compare_exchange_weak_explicit  
( [std::shared_ptr](../shared_ptr.html)<T>* p, [std::shared_ptr](../shared_ptr.html)<T>* expected,  
[std::shared_ptr](../shared_ptr.html)<T> desired,  
[std::memory_order](../../atomic/memory_order.html) success, [std::memory_order](../../atomic/memory_order.html) failure ); |  (11)  |  (since C++11)   
(deprecated in C++20)   
(removed in C++26)  
| |   
  
If multiple threads of execution access the same [std::shared_ptr](../shared_ptr.html "cpp/memory/shared ptr") object without synchronization and any of those accesses uses a non-const member function of `shared_ptr` then a data race will occur unless all such access is performed through these functions, which are overloads of the corresponding atomic access functions ([std::atomic_load](../../atomic/atomic_load.html "cpp/atomic/atomic load"), [std::atomic_store](../../atomic/atomic_store.html "cpp/atomic/atomic store"), etc.). 

Note that the control block of a `shared_ptr` is thread-safe: different [std::shared_ptr](../shared_ptr.html "cpp/memory/shared ptr") objects can be accessed using mutable operations, such as operator= or `reset`, simultaneously by multiple threads, even when these instances are copies, and share the same control block internally. 

1) Determines whether atomic access to the shared pointer pointed-to by p is lock-free.

2) Equivalent to atomic_load_explicit(p, [std::memory_order_seq_cst](../../atomic/memory_order.html)).

3) Returns the shared pointer pointed-to by p.

As with the non-specialized [std::atomic_load_explicit](../../atomic/atomic_load.html "cpp/atomic/atomic load"), if mo is [std::memory_order_release](../../atomic/memory_order.html) or [std::memory_order_acq_rel](../../atomic/memory_order.html), the behavior is undefined.

4) Equivalent to atomic_store_explicit(p, r, [std::memory_order_seq_cst](../../atomic/memory_order.html)).

5) Stores the shared pointer r in the shared pointer pointed-to by p atomically, [as if](../../language/as_if.html "cpp/language/as if") by p->swap(r).

As with the non-specialized [std::atomic_store_explicit](../../atomic/atomic_store.html "cpp/atomic/atomic store"), if mo is [std::memory_order_acquire](../../atomic/memory_order.html) or [std::memory_order_acq_rel](../../atomic/memory_order.html), the behavior is undefined.

6) Equivalent to atomic_exchange_explicit(p, r, [std::memory_order_seq_cst](../../atomic/memory_order.html)).

7) Stores the shared pointer r in the shared pointer pointed to by p and returns the value formerly pointed-to by p, atomically, [as if](../../language/as_if.html "cpp/language/as if") by p->swap(r) and returns a copy of r after the swap.

8) Equivalent to

atomic_compare_exchange_weak_explicit  
(p, expected, desired, [std::memory_order_seq_cst](../../atomic/memory_order.html),  
[std::memory_order_seq_cst](../../atomic/memory_order.html)).

9) Equivalent to

atomic_compare_exchange_strong_explicit  
(p, expected, desired, [std::memory_order_seq_cst](../../atomic/memory_order.html),  
[std::memory_order_seq_cst](../../atomic/memory_order.html)).

10,11) Compares the shared pointers pointed-to by p and expected. 

  * If they are equivalent (store the same pointer value, and either share ownership of the same object or are both empty), assigns desired into *p using the memory ordering constraints specified by success and returns true. 
  * If they are not equivalent, assigns *p into *expected using the memory ordering constraints specified by failure and returns false.



`atomic_compare_exchange_weak_explicit` may fail spuriously.

If expected is a null pointer, or failure is [std::memory_order_release](../../atomic/memory_order.html) or [std::memory_order_acq_rel](../../atomic/memory_order.html), the behavior is undefined.

If p is a null pointer, the behaviors of these functions are all undefined. 

## Contents

  * [1 Parameters](atomic.html#Parameters)
  * [2 Exceptions](atomic.html#Exceptions)
  * [3 Return value](atomic.html#Return_value)
  * [4 Notes](atomic.html#Notes)
  * [5 Example](atomic.html#Example)
  * [6 Defect reports](atomic.html#Defect_reports)
  * [7 See also](atomic.html#See_also)

  
---  
  
### Parameters

p, expected  |  \-  |  a pointer to a [std::shared_ptr](../shared_ptr.html "cpp/memory/shared ptr")  
---|---|---  
r, desired  |  \-  |  a [std::shared_ptr](../shared_ptr.html "cpp/memory/shared ptr")  
mo, success, failure  |  \-  |  memory ordering selectors of type [std::memory_order](../../atomic/memory_order.html "cpp/atomic/memory order")  
  
### Exceptions

These functions do not throw exceptions. 

### Return value

1) true if atomic access is implemented using lock-free instructions.

2,3) A copy of the pointed-to shared pointer.

4,5) (none)

6,7) A copy of the formerly pointed-to shared pointer.

8-11) true if the shared pointers were equivalent and the exchange was performed, false otherwise.

### Notes

These functions are typically implemented using mutexes, stored in a global hash table where the pointer value is used as the key. 

The [Concurrency TS](../../experimental/concurrency.html "cpp/experimental/concurrency") offers atomic smart pointer classes `atomic_shared_ptr` and `atomic_weak_ptr` as a replacement for the use of these functions. 

These functions were deprecated in favor of the specializations of the [std::atomic](../../atomic/atomic.html "cpp/atomic/atomic") template: [std::atomic](../../atomic/atomic.html)<[std::shared_ptr](../shared_ptr.html)> and [std::atomic](../../atomic/atomic.html)<[std::weak_ptr](../weak_ptr.html)>.  | (since C++20)  
(until C++26)  
---|---  
These functions were removed in favor of the specializations of the [std::atomic](../../atomic/atomic.html "cpp/atomic/atomic") template: [std::atomic](../../atomic/atomic.html)<[std::shared_ptr](../shared_ptr.html)> and [std::atomic](../../atomic/atomic.html)<[std::weak_ptr](../weak_ptr.html)>.  | (since C++26)  
  
### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2172](https://cplusplus.github.io/LWG/issue2172) | C++11  | expected could be a null pointer  | the behavior is undefined in this case   
[LWG 2980](https://cplusplus.github.io/LWG/issue2980) | C++11  | empty `shared_ptr`s were never equivalent  | equivalent if they store the same pointer value   
  
### See also

[ atomic_is_lock_free](../../atomic/atomic_is_lock_free.html "cpp/atomic/atomic is lock free")(C++11) |  checks if the atomic type's operations are lock-free   
(function template)   
---|---  
[ atomic_storeatomic_store_explicit](../../atomic/atomic_store.html "cpp/atomic/atomic store")(C++11)(C++11) |  atomically replaces the value of the atomic object with a non-atomic argument   
(function template)   
[ atomic_loadatomic_load_explicit](../../atomic/atomic_load.html "cpp/atomic/atomic load")(C++11)(C++11) |  atomically obtains the value stored in an atomic object   
(function template)   
[ atomic_exchangeatomic_exchange_explicit](../../atomic/atomic_exchange.html "cpp/atomic/atomic exchange")(C++11)(C++11) |  atomically replaces the value of the atomic object with non-atomic argument and returns the old value of the atomic   
(function template)   
[ atomic_compare_exchange_weakatomic_compare_exchange_weak_explicitatomic_compare_exchange_strongatomic_compare_exchange_strong_explicit](../../atomic/atomic_compare_exchange.html "cpp/atomic/atomic compare exchange")(C++11)(C++11)(C++11)(C++11) |  atomically compares the value of the atomic object with non-atomic argument and performs atomic exchange if equal or atomic load if not   
(function template) 
