 
  


  
  
  
  
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
[atomic_xxx](atomic.html "cpp/memory/shared ptr/atomic")functions (until C++26*)  
Helper classes  
**atomic <std::shared_ptr>**(C++20)  
[hash<std::shared_ptr>](hash.html "cpp/memory/shared ptr/hash")  
[Deduction guides](deduction_guides.html "cpp/memory/shared ptr/deduction guides")(C++17)  
  


Defined in header `[<memory>](../../header/memory.html "cpp/header/memory")` |  |   
---|---|---  
template< class T >  
struct [std::atomic](../../atomic/atomic.html)<[std::shared_ptr](../shared_ptr.html)<T>>; |  |  (since C++20)  
| |   
  
The partial template specialization of [std::atomic](../../atomic/atomic.html "cpp/atomic/atomic") for [std::shared_ptr](../shared_ptr.html)<T> allows users to manipulate `shared_ptr` objects atomically. 

If multiple threads of execution access the same [std::shared_ptr](../shared_ptr.html "cpp/memory/shared ptr") object without synchronization and any of those accesses uses a non-const member function of shared_ptr then a data race will occur unless all such access is performed through an instance of [std::atomic](../../atomic/atomic.html)<[std::shared_ptr](../shared_ptr.html)> (or, deprecated as of C++20, through the [standalone functions](atomic.html "cpp/memory/shared ptr/atomic") for atomic access to [std::shared_ptr](../shared_ptr.html "cpp/memory/shared ptr")). 

Associated `use_count` increments are guaranteed to be part of the atomic operation. Associated `use_count` decrements are sequenced after the atomic operation, but are not required to be part of it, except for the `use_count` change when overriding expected in a failed CAS. Any associated deletion and deallocation are sequenced after the atomic update step and are not part of the atomic operation. 

Note that the control block of a `shared_ptr` is thread-safe: different non-atomic [std::shared_ptr](../shared_ptr.html "cpp/memory/shared ptr") objects can be accessed using mutable operations, such as operator= or reset, simultaneously by multiple threads, even when these instances are copies, and share the same control block internally. 

The type T may be an incomplete type. 

## Contents

  * [1 Member types](atomic2.html#Member_types)
  * [2 Member functions](atomic2.html#Member_functions)
  * [3 atomic<shared_ptr<T>>::atomic](atomic2.html#atomic.3Cshared_ptr.3CT.3E.3E::atomic)
  * [4 atomic<shared_ptr<T>>::operator=](atomic2.html#atomic.3Cshared_ptr.3CT.3E.3E::operator.3D)
  * [5 atomic<shared_ptr<T>>::is_lock_free](atomic2.html#atomic.3Cshared_ptr.3CT.3E.3E::is_lock_free)
  * [6 atomic<shared_ptr<T>>::store](atomic2.html#atomic.3Cshared_ptr.3CT.3E.3E::store)
  * [7 atomic<shared_ptr<T>>::load](atomic2.html#atomic.3Cshared_ptr.3CT.3E.3E::load)
  * [8 atomic<shared_ptr<T>>::operator std::shared_ptr<T>](atomic2.html#atomic.3Cshared_ptr.3CT.3E.3E::operator_std::shared_ptr.3CT.3E)
  * [9 atomic<shared_ptr<T>>::exchange](atomic2.html#atomic.3Cshared_ptr.3CT.3E.3E::exchange)
  * [10 atomic<shared_ptr<T>>::compare_exchange_weak, compare_exchange_strong](atomic2.html#atomic.3Cshared_ptr.3CT.3E.3E::compare_exchange_weak.2C_compare_exchange_strong)
  * [11 atomic<shared_ptr<T>>::wait](atomic2.html#atomic.3Cshared_ptr.3CT.3E.3E::wait)
  * [12 atomic<shared_ptr<T>>::notify_one](atomic2.html#atomic.3Cshared_ptr.3CT.3E.3E::notify_one)
  * [13 atomic<shared_ptr<T>>::notify_all](atomic2.html#atomic.3Cshared_ptr.3CT.3E.3E::notify_all)
    * [13.1 Member constants](atomic2.html#Member_constants)
  * [14 atomic<shared_ptr<T>>::is_always_lock_free](atomic2.html#atomic.3Cshared_ptr.3CT.3E.3E::is_always_lock_free)
    * [14.1 Notes](atomic2.html#Notes)
    * [14.2 Example](atomic2.html#Example)
    * [14.3 Defect reports](atomic2.html#Defect_reports)
    * [14.4 See also](atomic2.html#See_also)

  
---  
  
### Member types

Member type  |  Definition   
---|---  
`value_type` |  [std::shared_ptr](../shared_ptr.html)<T>  
  
### Member functions

All non-specialized [std::atomic](../../atomic/atomic.html "cpp/atomic/atomic") functions are also provided by this specialization, and no additional member functions. 

##  atomic<shared_ptr<T>>::atomic

constexpr atomic() noexcept = default; |  (1)  |   
---|---|---  
constexpr atomic( [std::nullptr_t](../../types/nullptr_t.html) ) noexcept : atomic() {} |  (2)  |   
atomic( [std::shared_ptr](../shared_ptr.html)<T> desired ) noexcept; |  (3)  |   
atomic( const atomic& ) = delete; |  (4)  |   
| |   
  
1,2) Initializes the underlying shared_ptr<T> to the null value.

3) Initializes the underlying shared_ptr<T> to a copy of desired. As with any [std::atomic](../../atomic/atomic.html "cpp/atomic/atomic") type, initialization is not an atomic operation.

4) Atomic types are not copy/move constructible. 

##  atomic<shared_ptr<T>>::operator=

void operator=( const atomic& ) = delete; |  (1)  |   
---|---|---  
void operator=( [std::shared_ptr](../shared_ptr.html)<T> desired ) noexcept; |  (2)  |   
void operator=( [std::nullptr_t](../../types/nullptr_t.html) ) noexcept; |  (3)  |   
| |   
  
1) Atomic types are not copy/move assignable.

2) Value assignment, equivalent to store(desired).

3) Resets the atomic shared pointer to null pointer value. Equivalent to store(nullptr);. 

##  atomic<shared_ptr<T>>::is_lock_free

bool is_lock_free() const noexcept; |  |   
---|---|---  
| |   
  
Returns true if the atomic operations on all objects of this type are lock-free, false otherwise. 

##  atomic<shared_ptr<T>>::store

void store( [std::shared_ptr](../shared_ptr.html)<T> desired,  
[std::memory_order](../../atomic/memory_order.html) order = [std::memory_order_seq_cst](../../atomic/memory_order.html) ) noexcept; |  |   
---|---|---  
| |   
  
Atomically replaces the value of *this with the value of desired as if by p.swap(desired) where p is the underlying [std::shared_ptr](../shared_ptr.html)<T>. Memory is ordered according to order. The behavior is undefined if order is [std::memory_order_consume](../../atomic/memory_order.html "cpp/atomic/memory order"), [std::memory_order_acquire](../../atomic/memory_order.html "cpp/atomic/memory order"), or [std::memory_order_acq_rel](../../atomic/memory_order.html "cpp/atomic/memory order"). 

##  atomic<shared_ptr<T>>::load

[std::shared_ptr](../shared_ptr.html)<T> load( [std::memory_order](../../atomic/memory_order.html) order = [std::memory_order_seq_cst](../../atomic/memory_order.html) ) const noexcept; |  |   
---|---|---  
| |   
  
Atomically returns a copy of the underlying shared pointer. Memory is ordered according to order. The behavior is undefined if order is [std::memory_order_release](../../atomic/memory_order.html "cpp/atomic/memory order") or [std::memory_order_acq_rel](../../atomic/memory_order.html "cpp/atomic/memory order"). 

##  atomic<shared_ptr<T>>::operator std::shared_ptr<T>

operator [std::shared_ptr](../shared_ptr.html)<T>() const noexcept; |  |   
---|---|---  
| |   
  
Equivalent to return load();. 

##  atomic<shared_ptr<T>>::exchange

[std::shared_ptr](../shared_ptr.html)<T> exchange( [std::shared_ptr](../shared_ptr.html)<T> desired,  
[std::memory_order](../../atomic/memory_order.html) order = [std::memory_order_seq_cst](../../atomic/memory_order.html) ) noexcept; |  |   
---|---|---  
| |   
  
Atomically replaces the underlying [std::shared_ptr](../shared_ptr.html)<T> with desired as if by p.swap(desired) where p is the underlying [std::shared_ptr](../shared_ptr.html)<T> and returns a copy of the value that p had immediately before the swap. Memory is ordered according to order. This is an atomic read-modify-write operation. 

##  atomic<shared_ptr<T>>::compare_exchange_weak, compare_exchange_strong

bool compare_exchange_strong( [std::shared_ptr](../shared_ptr.html)<T>& expected, [std::shared_ptr](../shared_ptr.html)<T> desired,  
[std::memory_order](../../atomic/memory_order.html) success, [std::memory_order](../../atomic/memory_order.html) failure ) noexcept; |  (1)  |   
---|---|---  
bool compare_exchange_weak( [std::shared_ptr](../shared_ptr.html)<T>& expected, [std::shared_ptr](../shared_ptr.html)<T> desired,  
[std::memory_order](../../atomic/memory_order.html) success, [std::memory_order](../../atomic/memory_order.html) failure ) noexcept; |  (2)  |   
bool compare_exchange_strong( [std::shared_ptr](../shared_ptr.html)<T>& expected, [std::shared_ptr](../shared_ptr.html)<T> desired,  
[std::memory_order](../../atomic/memory_order.html) order = [std::memory_order_seq_cst](../../atomic/memory_order.html) ) noexcept; |  (3)  |   
bool compare_exchange_weak( [std::shared_ptr](../shared_ptr.html)<T>& expected, [std::shared_ptr](../shared_ptr.html)<T> desired,  
[std::memory_order](../../atomic/memory_order.html) order = [std::memory_order_seq_cst](../../atomic/memory_order.html) ) noexcept; |  (4)  |   
| |   
  
1) If the underlying [std::shared_ptr](../shared_ptr.html)<T> stores the same T* as expected and shares ownership with it, or if both underlying and expected are empty, assigns from desired to the underlying [std::shared_ptr](../shared_ptr.html)<T>, returns true, and orders memory according to success, otherwise assigns from the underlying [std::shared_ptr](../shared_ptr.html)<T> to expected, returns false, and orders memory according to failure. The behavior is undefined if failure is [std::memory_order_release](../../atomic/memory_order.html "cpp/atomic/memory order") or [std::memory_order_acq_rel](../../atomic/memory_order.html "cpp/atomic/memory order"). On success, the operation is an atomic read-modify-write operation on *this and expected is not accessed after the atomic update. On failure, the operation is an atomic load operation on *this and expected is updated with the existing value read from the atomic object. This update to expected's `use_count` is part of this atomic operation, although the write itself (and any subsequent deallocation/destruction) is not required to be.

2) Same as (1), but may also fail spuriously.

3) Equivalent to: return compare_exchange_strong(expected, desired, order, fail_order);, where `fail_order` is the same as order except that [std::memory_order_acq_rel](../../atomic/memory_order.html "cpp/atomic/memory order") is replaced by [std::memory_order_acquire](../../atomic/memory_order.html "cpp/atomic/memory order") and [std::memory_order_release](../../atomic/memory_order.html "cpp/atomic/memory order") is replaced by [std::memory_order_relaxed](../../atomic/memory_order.html "cpp/atomic/memory order").

4) Equivalent to: return compare_exchange_weak(expected, desired, order, fail_order);, where `fail_order` is the same as order except that [std::memory_order_acq_rel](../../atomic/memory_order.html "cpp/atomic/memory order") is replaced by [std::memory_order_acquire](../../atomic/memory_order.html "cpp/atomic/memory order") and [std::memory_order_release](../../atomic/memory_order.html "cpp/atomic/memory order") is replaced by [std::memory_order_relaxed](../../atomic/memory_order.html "cpp/atomic/memory order"). 

##  atomic<shared_ptr<T>>::wait

void wait( [std::shared_ptr](../shared_ptr.html)<T> old,  
[std::memory_order](../../atomic/memory_order.html) order = [std::memory_order_seq_cst](../../atomic/memory_order.html) ) const noexcept; |  |   
---|---|---  
| |   
  
Performs an atomic waiting operation. 

Compares load(order) with old and if they are equivalent then blocks until *this is notified by `notify_one()` or `notify_all()`. This is repeated until load(order) changes. This function is guaranteed to return only if value has changed, even if underlying implementation unblocks spuriously. 

Memory is ordered according to order. The behavior is undefined if order is [std::memory_order_release](../../atomic/memory_order.html "cpp/atomic/memory order") or [std::memory_order_acq_rel](../../atomic/memory_order.html "cpp/atomic/memory order"). 

Notes: two `shared_ptr`s are equivalent if they store the same pointer and either share ownership or are both empty. 

##  atomic<shared_ptr<T>>::notify_one

void notify_one() noexcept; |  |   
---|---|---  
| |   
  
Performs an atomic notifying operation. 

If there is a thread blocked in atomic waiting operations (i.e. `wait()`) on *this, then unblocks at least one such thread; otherwise does nothing. 

##  atomic<shared_ptr<T>>::notify_all

void notify_all() noexcept; |  |   
---|---|---  
| |   
  
Performs an atomic notifying operation. 

Unblocks all threads blocked in atomic waiting operations (i.e. `wait()`) on *this, if there are any; otherwise does nothing. 

### Member constants

The only standard [std::atomic](../../atomic/atomic.html "cpp/atomic/atomic") member constant `is_always_lock_free` is also provided by this specialization. 

##  atomic<shared_ptr<T>>::is_always_lock_free

static constexpr bool is_always_lock_free = /*implementation-defined*/; |  |   
---|---|---  
| |   
  
### Notes

[Feature-test](../../utility/feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_atomic_shared_ptr`](../../experimental/feature_test.html#cpp_lib_atomic_shared_ptr "cpp/feature test") | [`201711L`](../../compiler_support/20.html#cpp_lib_atomic_shared_ptr_201711L "cpp/compiler support/20") | (C++20) | [`std::atomic<std::shared_ptr>`](atomic2.html#top)  
  
### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3661](https://cplusplus.github.io/LWG/issue3661) | C++20  | `atomic<shared_ptr<T>>` was not constant-initializable from nullptr | made constant-initializable   
[LWG 3893](https://cplusplus.github.io/LWG/issue3893) | C++20  | [LWG3661](https://cplusplus.github.io/LWG/issue3661) made `atomic<shared_ptr<T>>` not assignable from `nullptr_t` | assignability restored   
  
### See also

[ atomic](../../atomic/atomic.html "cpp/atomic/atomic")(C++11) |  atomic class template and specializations for bool, integral, floating-point,(since C++20) and pointer types   
(class template)   
---|---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
