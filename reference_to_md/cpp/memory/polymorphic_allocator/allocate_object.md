 
  


  
  
  
  
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
  
  
  


[`std::pmr::polymorphic_allocator`](../polymorphic_allocator.html "cpp/memory/polymorphic allocator")

Member functions  
---  
[polymorphic_allocator::polymorphic_allocator](polymorphic_allocator.html "cpp/memory/polymorphic allocator/polymorphic allocator")  
[polymorphic_allocator::allocate](allocate.html "cpp/memory/polymorphic allocator/allocate")  
[polymorphic_allocator::deallocate](deallocate.html "cpp/memory/polymorphic allocator/deallocate")  
[polymorphic_allocator::construct](construct.html "cpp/memory/polymorphic allocator/construct")  
[polymorphic_allocator::destroy](destroy.html "cpp/memory/polymorphic allocator/destroy")(C++20/26*)  
[polymorphic_allocator::allocate_bytes](allocate_bytes.html "cpp/memory/polymorphic allocator/allocate bytes")(C++20)  
[polymorphic_allocator::deallocate_bytes](deallocate_bytes.html "cpp/memory/polymorphic allocator/deallocate bytes")(C++20)  
**polymorphic_allocator::allocate_object**(C++20)  
[polymorphic_allocator::deallocate_object](deallocate_object.html "cpp/memory/polymorphic allocator/deallocate object")(C++20)  
[polymorphic_allocator::new_object](new_object.html "cpp/memory/polymorphic allocator/new object")(C++20)  
[polymorphic_allocator::delete_object](delete_object.html "cpp/memory/polymorphic allocator/delete object")(C++20)  
[polymorphic_allocator::select_on_container_copy_construction](select_on_container_copy_construction.html "cpp/memory/polymorphic allocator/select on container copy construction")  
[polymorphic_allocator::resource](resource.html "cpp/memory/polymorphic allocator/resource")  
Non-member functions  
[operator==operator!=](operator_eq.html "cpp/memory/polymorphic allocator/operator eq")(until C++20)  
  


template< class U >  
U* allocate_object( [std::size_t](../../types/size_t.html) n = 1 ); |  |  (since C++20)  
---|---|---  
| |   
  
Allocates storage for n objects of type `U` using the underlying memory resource. 

If [std::numeric_limits](../../types/numeric_limits.html)<[std::size_t](../../types/size_t.html)>::max() / sizeof(U) < n, throws [std::bad_array_new_length](../new/bad_array_new_length.html "cpp/memory/new/bad array new length"), otherwise equivalent to return static_cast<U*>(allocate_bytes(n * sizeof(U), alignof(U)));. 

## Contents

  * [1 Parameters](allocate_object.html#Parameters)
  * [2 Return value](allocate_object.html#Return_value)
  * [3 Notes](allocate_object.html#Notes)
  * [4 Exceptions](allocate_object.html#Exceptions)
  * [5 See also](allocate_object.html#See_also)

  
---  
  
### Parameters

n  |  \-  |  the number of objects to allocate storage for   
---|---|---  
  
### Return value

A pointer to the allocated storage. 

### Notes

This function was introduced for use with the fully-specialized allocator [std::pmr::polymorphic_allocator](../polymorphic_allocator.html)<>, but it may be useful in any specialization as a shortcut to avoid having to rebind from [std::pmr::polymorphic_allocator](../polymorphic_allocator.html)<T> to [std::pmr::polymorphic_allocator](../polymorphic_allocator.html)<U>. 

Since `U` is not deduced, it must be provided as a template argument when calling this function. 

### Exceptions

Throws [std::bad_array_new_length](../new/bad_array_new_length.html "cpp/memory/new/bad array new length") if n > [std::numeric_limits](../../types/numeric_limits.html)<[std::size_t](../../types/size_t.html)>::max() / sizeof(U); may also be any exceptions thrown by the call to resource()->allocate. 

### See also

[ allocate_bytes](allocate_bytes.html "cpp/memory/polymorphic allocator/allocate bytes")(C++20) |  allocate raw aligned memory from the underlying resource   
(public member function)   
---|---  
[ new_object](new_object.html "cpp/memory/polymorphic allocator/new object")(C++20) |  allocates and constructs an object   
(public member function)   
[ allocate](allocate.html "cpp/memory/polymorphic allocator/allocate") |  allocate memory   
(public member function)   
[ allocate](../allocator_traits/allocate.html "cpp/memory/allocator traits/allocate")[static] |  allocates uninitialized storage using the allocator   
(public static member function of `std::allocator_traits<Alloc>`)   
[ allocate](../memory_resource/allocate.html "cpp/memory/memory resource/allocate") |  allocates memory   
(public member function of `std::pmr::memory_resource`) 
