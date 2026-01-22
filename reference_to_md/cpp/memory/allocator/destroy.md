 
  


  
  
  
  
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
[allocator::allocate](allocate.html "cpp/memory/allocator/allocate")  
[allocator::allocate_at_least](allocate_at_least.html "cpp/memory/allocator/allocate at least")(C++23)  
[allocator::deallocate](deallocate.html "cpp/memory/allocator/deallocate")  
[allocator::max_size](max_size.html "cpp/memory/allocator/max size")(until C++20)  
[allocator::construct](construct.html "cpp/memory/allocator/construct")(until C++20)  
**allocator::destroy**(until C++20)  
Non-member functions  
[operator==operator!=](operator_cmp.html "cpp/memory/allocator/operator cmp")(until C++20)  
  


Defined in header `[<memory>](../../header/memory.html "cpp/header/memory")` |  |   
---|---|---  
void destroy( pointer p ); |  (1)  |  (until C++11)  
template< class U >  
void destroy( U* p ); |  (2)  |  (since C++11)   
(deprecated in C++17)   
(removed in C++20)  
| |   
  
Calls the destructor of the object pointed to by p. 

1) Calls p->~T().

2) Calls p->~U().

## Contents

  * [1 Parameters](destroy.html#Parameters)
  * [2 Return value](destroy.html#Return_value)
  * [3 Defect reports](destroy.html#Defect_reports)
  * [4 See also](destroy.html#See_also)

  
---  
  
### Parameters

p  |  \-  |  pointer to the object that is going to be destroyed   
---|---|---  
  
### Return value

(none) 

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 400](https://cplusplus.github.io/LWG/issue400) | C++98  | p was cast to `T*`, which is the type of p | removed the redundant cast   
  
### See also

[ destroy](../allocator_traits/destroy.html "cpp/memory/allocator traits/destroy")[static] |  destructs an object stored in the allocated storage   
(function template)   
---|---
