 
  


  
  
  
  
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
**polymorphic_allocator::destroy**(C++20/26*)  
[polymorphic_allocator::allocate_bytes](allocate_bytes.html "cpp/memory/polymorphic allocator/allocate bytes")(C++20)  
[polymorphic_allocator::deallocate_bytes](deallocate_bytes.html "cpp/memory/polymorphic allocator/deallocate bytes")(C++20)  
[polymorphic_allocator::allocate_object](allocate_object.html "cpp/memory/polymorphic allocator/allocate object")(C++20)  
[polymorphic_allocator::deallocate_object](deallocate_object.html "cpp/memory/polymorphic allocator/deallocate object")(C++20)  
[polymorphic_allocator::new_object](new_object.html "cpp/memory/polymorphic allocator/new object")(C++20)  
[polymorphic_allocator::delete_object](delete_object.html "cpp/memory/polymorphic allocator/delete object")(C++20)  
[polymorphic_allocator::select_on_container_copy_construction](select_on_container_copy_construction.html "cpp/memory/polymorphic allocator/select on container copy construction")  
[polymorphic_allocator::resource](resource.html "cpp/memory/polymorphic allocator/resource")  
Non-member functions  
[operator==operator!=](operator_eq.html "cpp/memory/polymorphic allocator/operator eq")(until C++20)  
  


template< class U >  
void destroy( U* p ); |  |  (since C++17)   
(deprecated in C++20)   
(undeprecated in C++26)  
---|---|---  
| |   
  
Destroys the object pointed to by p, as if by calling p->~U(). 

### Parameters

p  |  \-  |  pointer to the object being destroyed   
---|---|---  
  
### Notes

This function is deprecated via [LWG issue 3036](https://cplusplus.github.io/LWG/issue3036), because its functionality can be provided by the default implementation of [std::allocator_traits::destroy](../allocator_traits/destroy.html "cpp/memory/allocator traits/destroy") and hence extraneous. 

This function is undeprecated via [P2875R4](https://wg21.link/P2875R4). 

### See also

[ destroy](../allocator_traits/destroy.html "cpp/memory/allocator traits/destroy")[static] |  destructs an object stored in the allocated storage   
(function template)   
---|---
