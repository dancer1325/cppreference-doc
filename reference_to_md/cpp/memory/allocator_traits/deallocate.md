 
  


  
  
  
  
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
  
  
  


[`std::allocator_traits`](../allocator_traits.html "cpp/memory/allocator traits")

[Member types](../allocator_traits.html#Member_types "cpp/memory/allocator traits")  
---  
[Member functions](../allocator_traits.html#Member_functions "cpp/memory/allocator traits")  
[allocator_traits::allocate](allocate.html "cpp/memory/allocator traits/allocate")  
[allocator_traits::allocate_at_least](allocate_at_least.html "cpp/memory/allocator traits/allocate at least")(C++23)  
**allocator_traits::deallocate**  
[allocator_traits::construct](construct.html "cpp/memory/allocator traits/construct")  
[allocator_traits::destroy](destroy.html "cpp/memory/allocator traits/destroy")  
[allocator_traits::max_size](max_size.html "cpp/memory/allocator traits/max size")  
[allocator_traits::select_on_container_copy_construction](select_on_container_copy_construction.html "cpp/memory/allocator traits/select on container copy construction")  
  


Defined in header `[<memory>](../../header/memory.html "cpp/header/memory")` |  |   
---|---|---  
static void deallocate( Alloc& a, pointer p, size_type n ); |  | (since C++11)   
(constexpr since C++20)  
| |   
  
Uses the allocator a to deallocate the storage referenced by p, by calling a.deallocate(p, n). 

## Contents

  * [1 Parameters](deallocate.html#Parameters)
  * [2 Return value](deallocate.html#Return_value)
  * [3 Example](deallocate.html#Example)
  * [4 See also](deallocate.html#See_also)

  
---  
  
### Parameters

a  |  \-  |  allocator to use   
---|---|---  
p  |  \-  |  pointer to the previously allocated storage   
n  |  \-  |  the number of objects the storage was allocated for   
  
### Return value

(none) 

### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### See also

[ allocate](allocate.html "cpp/memory/allocator traits/allocate")[static] |  allocates uninitialized storage using the allocator   
(public static member function)   
---|---  
[ deallocate](../allocator/deallocate.html "cpp/memory/allocator/deallocate") |  deallocates storage   
(public member function of `std::allocator<T>`) 
