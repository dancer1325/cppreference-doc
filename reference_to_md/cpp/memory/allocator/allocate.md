 
  


  
  
  
  
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
  
  
  


[`std::allocator`](../allocator.html "cpp/memory/allocator")

Member functions  
---  
[allocator::allocator](allocator.html "cpp/memory/allocator/allocator")  
[allocator::~allocator](~allocator.html "cpp/memory/allocator/~allocator")  
[allocator::address](address.html "cpp/memory/allocator/address")(until C++20)  
**allocator::allocate**  
[allocator::allocate_at_least](allocate_at_least.html "cpp/memory/allocator/allocate at least")(C++23)  
[allocator::deallocate](deallocate.html "cpp/memory/allocator/deallocate")  
[allocator::max_size](max_size.html "cpp/memory/allocator/max size")(until C++20)  
[allocator::construct](construct.html "cpp/memory/allocator/construct")(until C++20)  
[allocator::destroy](destroy.html "cpp/memory/allocator/destroy")(until C++20)  
Non-member functions  
[operator==operator!=](operator_cmp.html "cpp/memory/allocator/operator cmp")(until C++20)  
  


| (1) |   
---|---|---  
pointer allocate( size_type n, const void* hint = 0 ); |  |  (until C++17)  
T* allocate( [std::size_t](../../types/size_t.html) n, const void* hint ); |  |  (since C++17)   
(deprecated)   
(removed in C++20)  
| (2) |   
T* allocate( [std::size_t](../../types/size_t.html) n ); |  | (since C++17)   
(until C++20)  
constexpr T* allocate( [std::size_t](../../types/size_t.html) n ); |  |  (since C++20)  
| |   
  
Allocates n * sizeof(T) bytes of uninitialized storage by calling ::[operator new](../new/operator_new.html)([std::size_t](../../types/size_t.html)) or ::[operator new](../new/operator_new.html)([std::size_t](../../types/size_t.html), [std::align_val_t](../new/align_val_t.html))(since C++17), but it is unspecified when and how this function is called. The pointer hint may be used to provide locality of reference: the allocator, if supported by the implementation, will attempt to allocate the new memory block as close as possible to hint. 

Then, this function creates an array of type `T[n]` in the storage and starts its lifetime, but does not start lifetime of any of its elements. 

Use of this function is ill-formed if `T` is an [incomplete type](../../language/type-id.html#Incomplete_type "cpp/language/type"). 

In order to use this function in a constant expression, the allocated storage must be deallocated within the evaluation of the same expression.  | (since C++20)  
---|---  
  
## Contents

  * [1 Parameters](allocate.html#Parameters)
  * [2 Return value](allocate.html#Return_value)
  * [3 Exceptions](allocate.html#Exceptions)
  * [4 Notes](allocate.html#Notes)
  * [5 Defect reports](allocate.html#Defect_reports)
  * [6 See also](allocate.html#See_also)

  
---  
  
### Parameters

n  |  \-  |  the number of objects to allocate storage for   
---|---|---  
hint  |  \-  |  pointer to a nearby memory location   
  
### Return value

Pointer to the first element of an array of n objects of type `T` whose elements have not been constructed yet. 

### Exceptions

Throws [std::bad_array_new_length](../new/bad_array_new_length.html "cpp/memory/new/bad array new length") if [std::numeric_limits](../../types/numeric_limits.html)<[std::size_t](../../types/size_t.html)>::max() / sizeof(T) < n.  | (since C++11)  
---|---  
  
Throws [std::bad_alloc](../new/bad_alloc.html "cpp/memory/new/bad alloc") if allocation fails. 

### Notes

The "unspecified when and how" wording makes it possible to [combine or optimize away heap allocations](../../language/new.html#Allocation "cpp/language/new") made by the standard library containers, even though such optimizations are disallowed for direct calls to `::operator new`. For example, this is implemented by libc++ ([[1]](https://github.com/llvm-mirror/libcxx/blob/master@%7B2017-02-09%7D/include/memory#L1766-L1772) and [[2]](https://github.com/llvm-mirror/libcxx/blob/master@%7B2017-02-09%7D/include/new#L211-L217)). 

After calling `allocate()` and before construction of elements, pointer arithmetic of `T*` is well-defined within the allocated array, but the behavior is undefined if elements are accessed. 

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 578](https://cplusplus.github.io/LWG/issue578) | C++98  | hint was required to be either ​0​ or a  
pointer previously returned from `allocate()`  
and not yet passed to [deallocate()](deallocate.html "cpp/memory/allocator/deallocate") | not required   
[LWG 3190](https://cplusplus.github.io/LWG/issue3190) | C++11  | `allocate()` might allocate storage of wrong size  | throws [std::bad_array_new_length](../new/bad_array_new_length.html "cpp/memory/new/bad array new length") instead   
  
### See also

[ allocate](../allocator_traits/allocate.html "cpp/memory/allocator traits/allocate")[static] |  allocates uninitialized storage using the allocator   
(public static member function of `std::allocator_traits<Alloc>`)   
---|---
