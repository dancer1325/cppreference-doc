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
  


[Memory management library](../../memory.html "cpp/memory")

| [_voidify_](../voidify.html "cpp/memory/voidify")(exposition only*)  
---  
[Allocators](../../memory.html#Allocators "cpp/memory")  
| [allocator](../allocator.html "cpp/memory/allocator")  
---  
[allocator_traits](../allocator_traits.html "cpp/memory/allocator traits")(C++11)  
[allocation_result](../allocation_result.html "cpp/memory/allocation result")(C++23)  
[scoped_allocator_adaptor](../scoped_allocator_adaptor.html "cpp/memory/scoped allocator adaptor")(C++11)  
[pmr::polymorphic_allocator](../polymorphic_allocator.html "cpp/memory/polymorphic allocator")(C++17)  
  
| [allocator_arg](../allocator_arg.html "cpp/memory/allocator arg")(C++11)  
---  
[uses_allocator](../uses_allocator.html "cpp/memory/uses allocator")(C++11)  
[uses_allocator_construction_args](../uses_allocator_construction_args.html "cpp/memory/uses allocator construction args")(C++20)  
[make_obj_using_allocator](../make_obj_using_allocator.html "cpp/memory/make obj using allocator")(C++20)  
[uninitialized_construct_using_allocator](../uninitialized_construct_using_allocator.html "cpp/memory/uninitialized construct using allocator")(C++20)  
  
[Uninitialized memory algorithms](../../memory.html#Uninitialized_memory_algorithms "cpp/memory")  
| [uninitialized_copy](../uninitialized_copy.html "cpp/memory/uninitialized copy")  
---  
[uninitialized_fill](../uninitialized_fill.html "cpp/memory/uninitialized fill")  
[uninitialized_move](../uninitialized_move.html "cpp/memory/uninitialized move")(C++17)  
[uninitialized_copy_n](../uninitialized_copy_n.html "cpp/memory/uninitialized copy n")(C++11)  
[uninitialized_fill_n](../uninitialized_fill_n.html "cpp/memory/uninitialized fill n")  
[uninitialized_move_n](../uninitialized_move_n.html "cpp/memory/uninitialized move n")(C++17)  
[construct_at](../construct_at.html "cpp/memory/construct at")(C++20)  
  
| [uninitialized_default_construct](../uninitialized_default_construct.html "cpp/memory/uninitialized default construct")(C++17)  
---  
[uninitialized_value_construct](../uninitialized_value_construct.html "cpp/memory/uninitialized value construct")(C++17)  
[destroy](../destroy.html "cpp/memory/destroy")(C++17)  
[uninitialized_default_construct_n](../uninitialized_default_construct_n.html "cpp/memory/uninitialized default construct n")(C++17)  
[uninitialized_value_construct_n](../uninitialized_value_construct_n.html "cpp/memory/uninitialized value construct n")(C++17)  
[destroy_n](../destroy_n.html "cpp/memory/destroy n")(C++17)  
[destroy_at](../destroy_at.html "cpp/memory/destroy at")(C++17)  
  
[Constrained uninitialized memory algorithms](../../memory.html#Constrained_uninitialized_memory_algorithms "cpp/memory")  
| [ranges::uninitialized_copy](../ranges/uninitialized_copy.html "cpp/memory/ranges/uninitialized copy")(C++20)  
---  
[ranges::uninitialized_fill](../ranges/uninitialized_fill.html "cpp/memory/ranges/uninitialized fill")(C++20)  
[ranges::uninitialized_move](../ranges/uninitialized_move.html "cpp/memory/ranges/uninitialized move")(C++20)  
[ranges::uninitialized_copy_n](../ranges/uninitialized_copy_n.html "cpp/memory/ranges/uninitialized copy n")(C++20)` `  
[ranges::uninitialized_fill_n](../ranges/uninitialized_fill_n.html "cpp/memory/ranges/uninitialized fill n")(C++20)  
[ranges::uninitialized_move_n](../ranges/uninitialized_move_n.html "cpp/memory/ranges/uninitialized move n")(C++20)  
[ranges::construct_at](../ranges/construct_at.html "cpp/memory/ranges/construct at")(C++20)  
  
| [ranges::uninitialized_default_construct](../ranges/uninitialized_default_construct.html "cpp/memory/ranges/uninitialized default construct")(C++20)  
---  
[ranges::uninitialized_value_construct](../ranges/uninitialized_value_construct.html "cpp/memory/ranges/uninitialized value construct")(C++20)  
[ranges::destroy](../ranges/destroy.html "cpp/memory/ranges/destroy")(C++20)  
[ranges::uninitialized_default_construct_n](../ranges/uninitialized_default_construct_n.html "cpp/memory/ranges/uninitialized default construct n")(C++20)` `  
[ranges::uninitialized_value_construct_n](../ranges/uninitialized_value_construct_n.html "cpp/memory/ranges/uninitialized value construct n")(C++20)  
[ranges::destroy_n](../ranges/destroy_n.html "cpp/memory/ranges/destroy n")(C++20)  
[ranges::destroy_at](../ranges/destroy_at.html "cpp/memory/ranges/destroy at")(C++20)  
  
[Memory resources](../../memory.html#Memory_resources "cpp/memory")  
| [pmr::memory_resource](../memory_resource.html "cpp/memory/memory resource")(C++17)  
---  
[pmr::get_default_resource](../get_default_resource.html "cpp/memory/get default resource")(C++17)  
[pmr::set_default_resource](../set_default_resource.html "cpp/memory/set default resource")(C++17)  
[pmr::new_delete_resource](../new_delete_resource.html "cpp/memory/new delete resource")(C++17)  
[pmr::pool_options](../pool_options.html "cpp/memory/pool options")(C++17)  
  
| [pmr::null_memory_resource](../null_memory_resource.html "cpp/memory/null memory resource")(C++17)  
---  
[pmr::synchronized_pool_resource](../synchronized_pool_resource.html "cpp/memory/synchronized pool resource")(C++17)  
[pmr::unsynchronized_pool_resource](../unsynchronized_pool_resource.html "cpp/memory/unsynchronized pool resource")(C++17)  
[pmr::monotonic_buffer_resource](../monotonic_buffer_resource.html "cpp/memory/monotonic buffer resource")(C++17)  
  
  
  
| [Explicit lifetime management](../../memory.html#Explicit_lifetime_management "cpp/memory")  
---  
[start_lifetime_as](../start_lifetime_as.html "cpp/memory/start lifetime as")(C++23)  
[start_lifetime_as_array](../start_lifetime_as.html "cpp/memory/start lifetime as")(C++23)  
  
| [Types for composite class design](../../memory.html#Types_for_composite_class_design "cpp/memory")  
---  
[indirect](../indirect.html "cpp/memory/indirect")(C++26)  
[polymorphic](../polymorphic.html "cpp/memory/polymorphic")(C++26)  
  
[Uninitialized storage](../../memory.html#Uninitialized_storage "cpp/memory") (until C++20)  
| [raw_storage_iterator](../raw_storage_iterator.html "cpp/memory/raw storage iterator")(until C++20*)  
---  
[get_temporary_buffer](../get_temporary_buffer.html "cpp/memory/get temporary buffer")(until C++20*)  
  
| [return_temporary_buffer](../return_temporary_buffer.html "cpp/memory/return temporary buffer")(until C++20*)  
---  
  
  
  
[Garbage collector support](../../memory.html#Garbage_collector_support "cpp/memory") (until C++23)  
| [declare_reachable](../gc/declare_reachable.html "cpp/memory/gc/declare reachable")(C++11)(until C++23)  
---  
[declare_no_pointers](../gc/declare_no_pointers.html "cpp/memory/gc/declare no pointers")(C++11)(until C++23)  
[pointer_safety](../gc/pointer_safety.html "cpp/memory/gc/pointer safety")(C++11)(until C++23)  
  
| [undeclare_reachable](../gc/undeclare_reachable.html "cpp/memory/gc/undeclare reachable")(C++11)(until C++23)  
---  
[undeclare_no_pointers](../gc/undeclare_no_pointers.html "cpp/memory/gc/undeclare no pointers")(C++11)(until C++23)  
[get_pointer_safety](../gc/get_pointer_safety.html "cpp/memory/gc/get pointer safety")(C++11)(until C++23)  
  
| [Low level memory  
management](../new.html#Low_level_memory_management "cpp/memory/new")  
---  
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
  
  
  


[`std::weak_ptr`](../weak_ptr.html "cpp/memory/weak ptr")

Member functions  
---  
[weak_ptr::weak_ptr](weak_ptr.html "cpp/memory/weak ptr/weak ptr")  
[weak_ptr::~weak_ptr](~weak_ptr.html "cpp/memory/weak ptr/~weak ptr")  
[weak_ptr::operator=](operator=.html "cpp/memory/weak ptr/operator=")  
Modifiers  
[weak_ptr::reset](reset.html "cpp/memory/weak ptr/reset")  
[weak_ptr::swap](swap.html "cpp/memory/weak ptr/swap")  
Observers  
[weak_ptr::use_count](use_count.html "cpp/memory/weak ptr/use count")  
[weak_ptr::expired](expired.html "cpp/memory/weak ptr/expired")  
[weak_ptr::lock](lock.html "cpp/memory/weak ptr/lock")  
[weak_ptr::owner_before](owner_before.html "cpp/memory/weak ptr/owner before")  
[weak_ptr::owner_hash](owner_hash.html "cpp/memory/weak ptr/owner hash")(C++26)  
[weak_ptr::owner_equal](owner_equal.html "cpp/memory/weak ptr/owner equal")(C++26)  
Non-member functions  
[swap(std::weak_ptr)](swap2.html "cpp/memory/weak ptr/swap2")  
Helper classes  
**atomic <std::weak_ptr>**(C++20)  
[Deduction guides](deduction_guides.html "cpp/memory/weak ptr/deduction guides")(C++17)  
  


Defined in header `[<memory>](../../header/memory.html "cpp/header/memory")` |  |   
---|---|---  
template< class T > struct [std::atomic](../../atomic/atomic.html)<[std::weak_ptr](../weak_ptr.html)<T>>; |  |  (since C++20)  
| |   
  
The partial template specialization of [std::atomic](../../atomic/atomic.html "cpp/atomic/atomic") for [std::weak_ptr](../weak_ptr.html)<T> allows users to manipulate weak_ptr objects atomically. 

If multiple threads of execution access the same [std::weak_ptr](../weak_ptr.html "cpp/memory/weak ptr") object without synchronization and any of those accesses uses a non-const member function of weak_ptr then a data race will occur unless all such access is performed through an instance of [std::atomic](../../atomic/atomic.html)<[std::weak_ptr](../weak_ptr.html)>. 

Associated `use_count` increments are guaranteed to be part of the atomic operation. Associated `use_count` decrements are sequenced after the atomic operation, but are not required to be part of it, except for the `use_count` change when overriding `expected` in a failed CAS. Any associated deletion and deallocation are sequenced after the atomic update step and are not part of the atomic operation. 

Note that the control block used by [std::weak_ptr](../weak_ptr.html "cpp/memory/weak ptr") and [std::shared_ptr](../shared_ptr.html "cpp/memory/shared ptr") is thread-safe: different non-atomic [std::weak_ptr](../weak_ptr.html "cpp/memory/weak ptr") objects can be accessed using mutable operations, such as operator= or `reset`, simultaneously by multiple threads, even when these instances are copies or otherwise share the same control block internally. 

The type `T` may be an incomplete type. 

## Contents

  * [1 Member types](atomic2.html#Member_types)
  * [2 Member functions](atomic2.html#Member_functions)
  * [3 atomic<weak_ptr<T>>::atomic](atomic2.html#atomic.3Cweak_ptr.3CT.3E.3E::atomic)
  * [4 atomic<weak_ptr<T>>::operator=](atomic2.html#atomic.3Cweak_ptr.3CT.3E.3E::operator.3D)
  * [5 atomic<weak_ptr<T>>::is_lock_free](atomic2.html#atomic.3Cweak_ptr.3CT.3E.3E::is_lock_free)
  * [6 atomic<weak_ptr<T>>::store](atomic2.html#atomic.3Cweak_ptr.3CT.3E.3E::store)
  * [7 atomic<weak_ptr<T>>::load](atomic2.html#atomic.3Cweak_ptr.3CT.3E.3E::load)
  * [8 atomic<weak_ptr<T>>::operator std::weak_ptr<T>](atomic2.html#atomic.3Cweak_ptr.3CT.3E.3E::operator_std::weak_ptr.3CT.3E)
  * [9 atomic<weak_ptr<T>>::exchange](atomic2.html#atomic.3Cweak_ptr.3CT.3E.3E::exchange)
  * [10 atomic<weak_ptr<T>>::compare_exchange_weak, compare_exchange_strong](atomic2.html#atomic.3Cweak_ptr.3CT.3E.3E::compare_exchange_weak.2C_compare_exchange_strong)
  * [11 atomic<weak_ptr<T>>::wait](atomic2.html#atomic.3Cweak_ptr.3CT.3E.3E::wait)
  * [12 atomic<weak_ptr<T>>::notify_one](atomic2.html#atomic.3Cweak_ptr.3CT.3E.3E::notify_one)
  * [13 atomic<weak_ptr<T>>::notify_all](atomic2.html#atomic.3Cweak_ptr.3CT.3E.3E::notify_all)
    * [13.1 Member constants](atomic2.html#Member_constants)
  * [14 atomic<weak_ptr<T>>::is_always_lock_free](atomic2.html#atomic.3Cweak_ptr.3CT.3E.3E::is_always_lock_free)
    * [14.1 Example](atomic2.html#Example)
    * [14.2 See also](atomic2.html#See_also)

  
---  
  
### Member types

Member type  |  Definition   
---|---  
`value_type` |  [std::weak_ptr](../weak_ptr.html)<T>  
  
### Member functions

All non-specialized [std::atomic](../../atomic/atomic.html "cpp/atomic/atomic") functions are also provided by this specialization, and no additional member functions. 

##  atomic<weak_ptr<T>>::atomic

constexpr atomic() noexcept = default; |  (1)  |   
---|---|---  
atomic([std::weak_ptr](../weak_ptr.html)<T> desired) noexcept; |  (2)  |   
atomic(const atomic&) = delete; |  (3)  |   
| |   
  
1) Initializes the underlying `weak_ptr<T>` to default-constructed value.

2) Initializes the underlying `weak_ptr<T>` to a copy of `desired`. As with any [std::atomic](../../atomic/atomic.html "cpp/atomic/atomic") type, initialization is not an atomic operation.

3) Atomic types are not copy/move constructible. 

##  atomic<weak_ptr<T>>::operator=

void operator=(const atomic&) = delete; |  (1)  |   
---|---|---  
void operator=([std::weak_ptr](../weak_ptr.html)<T> desired) noexcept; |  (2)  |   
| |   
  
1) Atomic types are not copy/move assignable.

2) Value assignment, equivalent to store(desired). 

##  atomic<weak_ptr<T>>::is_lock_free

bool is_lock_free() const noexcept; |  |   
---|---|---  
| |   
  
Returns true if the atomic operations on all objects of this type are lock-free, false otherwise. 

##  atomic<weak_ptr<T>>::store

void store([std::weak_ptr](../weak_ptr.html)<T> desired,  
[std::memory_order](../../atomic/memory_order.html) order = [std::memory_order_seq_cst](../../atomic/memory_order.html)) noexcept; |  |   
---|---|---  
| |   
  
Atomically replaces the value of *this with the value of `desired` as if by p.swap(desired) where p is the underlying [std::weak_ptr](../weak_ptr.html)<T>. Memory is ordered according to `order`. The behavior is undefined if `order` is [std::memory_order_consume](../../atomic/memory_order.html "cpp/atomic/memory order"), [std::memory_order_acquire](../../atomic/memory_order.html "cpp/atomic/memory order"), or [std::memory_order_acq_rel](../../atomic/memory_order.html "cpp/atomic/memory order"). 

##  atomic<weak_ptr<T>>::load

[std::weak_ptr](../weak_ptr.html)<T> load([std::memory_order](../../atomic/memory_order.html) order = [std::memory_order_seq_cst](../../atomic/memory_order.html)) const noexcept; |  |   
---|---|---  
| |   
  
Atomically returns a copy of the underlying [std::weak_ptr](../weak_ptr.html)<T>. Memory is ordered according to `order`. The behavior is undefined if `order` is [std::memory_order_release](../../atomic/memory_order.html "cpp/atomic/memory order") or [std::memory_order_acq_rel](../../atomic/memory_order.html "cpp/atomic/memory order"). 

##  atomic<weak_ptr<T>>::operator std::weak_ptr<T>

operator [std::weak_ptr](../weak_ptr.html)<T>() const noexcept; |  |   
---|---|---  
| |   
  
Equivalent to return load();. 

##  atomic<weak_ptr<T>>::exchange

[std::weak_ptr](../weak_ptr.html)<T> exchange([std::weak_ptr](../weak_ptr.html)<T> desired,  
[std::memory_order](../../atomic/memory_order.html) order = [std::memory_order_seq_cst](../../atomic/memory_order.html)) noexcept; |  |   
---|---|---  
| |   
  
Atomically replaces the underlying [std::weak_ptr](../weak_ptr.html)<T> with `desired` as if by p.swap(desired) where p is the underlying [std::weak_ptr](../weak_ptr.html)<T>, and returns a copy of the value that p had immediately before the swap. Memory is ordered according to `order`. This is an atomic read-modify-write operation. 

##  atomic<weak_ptr<T>>::compare_exchange_weak, compare_exchange_strong

bool compare_exchange_strong([std::weak_ptr](../weak_ptr.html)<T>& expected, [std::weak_ptr](../weak_ptr.html)<T> desired,  
[std::memory_order](../../atomic/memory_order.html) success, [std::memory_order](../../atomic/memory_order.html) failure) noexcept; |  (1)  |   
---|---|---  
bool compare_exchange_weak([std::weak_ptr](../weak_ptr.html)<T>& expected, [std::weak_ptr](../weak_ptr.html)<T> desired,  
[std::memory_order](../../atomic/memory_order.html) success, [std::memory_order](../../atomic/memory_order.html) failure) noexcept; |  (2)  |   
bool compare_exchange_strong([std::weak_ptr](../weak_ptr.html)<T>& expected, [std::weak_ptr](../weak_ptr.html)<T> desired,  
[std::memory_order](../../atomic/memory_order.html) order = [std::memory_order_seq_cst](../../atomic/memory_order.html)) noexcept; |  (3)  |   
bool compare_exchange_weak([std::weak_ptr](../weak_ptr.html)<T>& expected, [std::weak_ptr](../weak_ptr.html)<T> desired,  
[std::memory_order](../../atomic/memory_order.html) order = [std::memory_order_seq_cst](../../atomic/memory_order.html)) noexcept; |  (4)  |   
| |   
  
1) If the underlying [std::weak_ptr](../weak_ptr.html)<T> stores the same pointer value as `expected` and shares ownership with it, or if both underlying and `expected` are empty, assigns from `desired` to the underlying [std::weak_ptr](../weak_ptr.html)<T>, returns true, and orders memory according to `success`, otherwise assigns from the underlying [std::weak_ptr](../weak_ptr.html)<T> to `expected`, returns false, and orders memory according to `failure`. The behavior is undefined if `failure` is [std::memory_order_release](../../atomic/memory_order.html "cpp/atomic/memory order") or [std::memory_order_acq_rel](../../atomic/memory_order.html "cpp/atomic/memory order"). On success, the operation is an atomic read-modify-write operation on *this and `expected` is not accessed after the atomic update. On failure, the operation is an atomic load operation on *this and `expected` is updated with the existing value read from the atomic object. This update to `expected`'s use_count is part of this atomic operation, although the write itself (and any subsequent deallocation/destruction) is not required to be.

2) Same as (1), but may also fail spuriously.

3) Equivalent to: return compare_exchange_strong(expected, desired, order, fail_order);, where `fail_order` is the same as `order` except that [std::memory_order_acq_rel](../../atomic/memory_order.html "cpp/atomic/memory order") is replaced by [std::memory_order_acquire](../../atomic/memory_order.html "cpp/atomic/memory order") and [std::memory_order_release](../../atomic/memory_order.html "cpp/atomic/memory order") is replaced by [std::memory_order_relaxed](../../atomic/memory_order.html "cpp/atomic/memory order").

4) Equivalent to: return compare_exchange_weak(expected, desired, order, fail_order);, where `fail_order` is the same as `order` except that [std::memory_order_acq_rel](../../atomic/memory_order.html "cpp/atomic/memory order") is replaced by [std::memory_order_acquire](../../atomic/memory_order.html "cpp/atomic/memory order") and [std::memory_order_release](../../atomic/memory_order.html "cpp/atomic/memory order") is replaced by [std::memory_order_relaxed](../../atomic/memory_order.html "cpp/atomic/memory order"). 

##  atomic<weak_ptr<T>>::wait

void wait([std::weak_ptr](../weak_ptr.html)<T> old  
[std::memory_order](../../atomic/memory_order.html) order = [std::memory_order_seq_cst](../../atomic/memory_order.html)) const noexcept; |  |   
---|---|---  
| |   
  
Performs an atomic waiting operation. 

Compares load(order) with `old` and if they are equivalent then blocks until *this is notified by `notify_one()` or `notify_all()`. This is repeated until load(order) changes. This function is guaranteed to return only if value has changed, even if underlying implementation unblocks spuriously. 

Memory is ordered according to `order`. The behavior is undefined if `order` is [std::memory_order_release](../../atomic/memory_order.html "cpp/atomic/memory order") or [std::memory_order_acq_rel](../../atomic/memory_order.html "cpp/atomic/memory order"). 

Notes: two [std::weak_ptr](../weak_ptr.html "cpp/memory/weak ptr")s are equivalent if they store the same pointer and either share ownership or are both empty. 

##  atomic<weak_ptr<T>>::notify_one

void notify_one() noexcept; |  |   
---|---|---  
| |   
  
Performs an atomic notifying operation. 

If there is a thread blocked in atomic waiting operations (i.e. `wait()`) on *this, then unblocks at least one such thread; otherwise does nothing. 

##  atomic<weak_ptr<T>>::notify_all

void notify_all() noexcept; |  |   
---|---|---  
| |   
  
Performs an atomic notifying operation. 

Unblocks all threads blocked in atomic waiting operations (i.e. `wait()`) on *this, if there are any; otherwise does nothing. 

### Member constants

The only standard [std::atomic](../../atomic/atomic.html "cpp/atomic/atomic") member constant `is_always_lock_free` is also provided by this specialization. 

##  atomic<weak_ptr<T>>::is_always_lock_free

static constexpr bool is_always_lock_free = /*implementation-defined*/; |  |   
---|---|---  
| |   
  
### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### See also

[ atomic](../../atomic/atomic.html "cpp/atomic/atomic")(C++11) |  atomic class template and specializations for bool, integral, floating-point,(since C++20) and pointer types   
(class template)   
---|---
