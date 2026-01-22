 
  


  
  
  
  
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
  
  
  


[`std::pointer_traits`](../pointer_traits.html "cpp/memory/pointer traits")

Member functions  
---  
**pointer_traits::pointer_to**(C++11)  
[pointer_traits::to_address](to_address.html "cpp/memory/pointer traits/to address")(C++20)(optional)  
  


Defined in header `[<memory>](../../header/memory.html "cpp/header/memory")` |  |   
---|---|---  
static pointer  
pointer_to( element_type& r ); |  (1)  |  (since C++11)   
(member of `pointer_traits<Ptr>` specialization)  
| (2) |   
static pointer  
pointer_to( element_type& r ) noexcept; |  | (since C++11)   
(until C++20)   
(member of `pointer_traits<T*>` specialization)  
static constexpr pointer  
pointer_to( element_type& r ) noexcept; |  |  (since C++20)   
(member of `pointer_traits<T*>` specialization)  
| |   
  
Constructs a dereferenceable pointer or pointer-like object (["fancy pointer"](../../named_req/Allocator.html#Fancy_pointers "cpp/named req/Allocator")) to its argument. 

1) The version of this function in the non-specialized [std::pointer_traits](../pointer_traits.html "cpp/memory/pointer traits") template simply calls Ptr::pointer_to(r), and if Ptr does not provide a static member function `pointer_to`, instantiation of this function is a compile-time error.

2) The version of this function in the specialization of [std::pointer_traits](../pointer_traits.html "cpp/memory/pointer traits") for pointer types returns [std::addressof](../addressof.html)(r).

## Contents

  * [1 Parameters](pointer_to.html#Parameters)
  * [2 Return value](pointer_to.html#Return_value)
  * [3 Exceptions](pointer_to.html#Exceptions)
  * [4 Notes](pointer_to.html#Notes)
  * [5 See also](pointer_to.html#See_also)

  
---  
  
### Parameters

r  |  \-  |  reference to an object of type element_type&, except if element_type is void, in which case the type of `r` is unspecified   
---|---|---  
  
### Return value

A dereferenceable pointer to r, of the type pointer_traits<>::pointer. 

### Exceptions

1) Unspecified (typically same as Ptr::pointer_to).

### Notes

The [Boost.Intrusive library version](https://www.boost.org/doc/libs/release/doc/html/boost/intrusive/pointer_traits.html) of this function returns pointer([std::addressof](../addressof.html)(r)) if Ptr::pointer_to does not exist. 

### See also

[ addressof](../addressof.html "cpp/memory/addressof")(C++11) |  obtains actual address of an object, even if the `**&**` operator is overloaded   
(function template)   
---|---  
[ address](../allocator/address.html "cpp/memory/allocator/address")(until C++20) |  obtains the address of an object, even if operator& is overloaded   
(public member function of `std::allocator<T>`)   
[ to_address](to_address.html "cpp/memory/pointer traits/to address")[static] (C++20)(optional) |  obtains a raw pointer from a fancy pointer (inverse of `pointer_to`)   
(public static member function)   
[ to_address](../to_address.html "cpp/memory/to address")(C++20) |  obtains a raw pointer from a pointer-like type   
(function template) 
