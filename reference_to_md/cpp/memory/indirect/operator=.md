 
  


  
  
  
  
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
  
  
  


[`std::indirect`](../indirect.html "cpp/memory/indirect")

[Member functions](../indirect.html#Member_functions "cpp/memory/indirect")  
---  
[indirect::indirect](indirect.html "cpp/memory/indirect/indirect")  
[indirect::~indirect](~indirect.html "cpp/memory/indirect/~indirect")  
**indirect::operator=**  
[Observers](../indirect.html#Observers "cpp/memory/indirect")  
[indirect::operator->indirect::operator*](operator*.html "cpp/memory/indirect/operator*")  
[indirect::valueless_after_move](valueless_after_move.html "cpp/memory/indirect/valueless after move")  
[indirect::get_allocator](get_allocator.html "cpp/memory/indirect/get allocator")  
[Modifiers](../indirect.html#Modifiers "cpp/memory/indirect")  
[indirect::swap](swap.html "cpp/memory/indirect/swap")  
[Non-member functions](../indirect.html#Non-member_functions "cpp/memory/indirect")  
[operator==operator<=>](operator_cmp.html "cpp/memory/indirect/operator cmp")  
[swap(std::indirect)](swap2.html "cpp/memory/indirect/swap2")  
[Deduction guides](deduction_guides.html "cpp/memory/indirect/deduction guides")  
[Helper classes](../indirect.html#Helper_classes "cpp/memory/indirect")  
[hash<std::indirect>](hash.html "cpp/memory/indirect/hash")  
  


constexpr indirect& operator=( const indirect& other ); |  (1) | (since C++26)  
---|---|---  
constexpr indirect& operator=( indirect&& other ) noexcept(/* see below */); |  (2) | (since C++26)  
template< class U = T >  
constexpr indirect& operator=( U&& value ); |  (3) | (since C++26)  
| |   
  
Replaces contents of *this with value or the contents of other. 

Let `traits` be [std::allocator_traits](../allocator_traits.html)<Allocator>: 

1) If [std::addressof](../addressof.html)(other) == this is true, does nothing. Otherwise, let need_update be traits::propagate_on_container_copy_assignment::value: 

  * If other is valueless, *this becomes valueless and the object owned by *this (if any) is destroyed using traits::destroy and then the storage is deallocated. 
  * Otherwise, if `_[alloc](../indirect.html#alloc "cpp/memory/indirect")_`` `== other.`_[alloc](../indirect.html#alloc "cpp/memory/indirect")_` is true and *this is not valueless, equivalent to **this = *other. 
  * Otherwise: 



    

  1. Constructs a new owned object in *this using traits::construct with *other as the argument, using the allocator update_alloc ? other.`_[alloc](../indirect.html#alloc "cpp/memory/indirect")_`` `:` `` _[alloc](../indirect.html#alloc "cpp/memory/indirect")_`. 
  2. The previously owned object in *this (if any) is destroyed using traits::destroy and then the storage is deallocated. 
  3. `_[p](../indirect.html#p "cpp/memory/indirect")_` points to the new owned object.



After updating the object owned by *this, if need_update is true, `_[alloc](../indirect.html#alloc "cpp/memory/indirect")_` is replaced with a copy of other.`_[alloc](../indirect.html#alloc "cpp/memory/indirect")_`.

If [std::is_copy_assignable_v](../../types/is_copy_assignable.html)<T> && [std::is_copy_constructible_v](../../types/is_copy_constructible.html)<T> is false, the program is ill-formed.

2) If [std::addressof](../addressof.html)(other) == this is true, does nothing. Otherwise, let need_update be traits::propagate_on_container_move_assignment::value: 

  * If other is valueless, *this becomes valueless and the object owned by *this (if any) is destroyed using traits::destroy and then the storage is deallocated. 
  * Otherwise, if `_[alloc](../indirect.html#alloc "cpp/memory/indirect")_`` `== other.`_[alloc](../indirect.html#alloc "cpp/memory/indirect")_` is true, swaps the owned objects in *this and other; the owned object in other (if any) is then destroyed using traits::destroy and then the storage is deallocated. 
  * Otherwise: 



    

  1. Constructs a new owned object in *this using traits::construct with std::move(*other) as the argument, using the allocator update_alloc ? other.`_[alloc](../indirect.html#alloc "cpp/memory/indirect")_`` `:` `` _[alloc](../indirect.html#alloc "cpp/memory/indirect")_`. 
  2. The previously owned object in *this (if any) is destroyed using traits::destroy and then the storage is deallocated. 
  3. `_[p](../indirect.html#p "cpp/memory/indirect")_` points to the new owned object.



After updating the objects owned by *this and other, if need_update is true, `_[alloc](../indirect.html#alloc "cpp/memory/indirect")_` is replaced with a copy of other.`_[alloc](../indirect.html#alloc "cpp/memory/indirect")_`.

If [std::is_copy_constructible_v](../../types/is_copy_constructible.html)<T> is false, the program is ill-formed.

3) If *this is valueless, then constructs an owned object with [std::forward](../../utility/forward.html)<U>(value) using `_[alloc](../indirect.html#alloc "cpp/memory/indirect")_` ﻿. Otherwise, equivalent to **this = [std::forward](../../utility/forward.html)<U>(value).

This overload participates in overload resolution only if all following conditions are satisfied: 

  * [std::is_same_v](../../types/is_same.html)<[std::remove_cvref_t](../../types/remove_cvref.html)<U>, std::indirect> is false. 
  * [std::is_constructible_v](../../types/is_constructible.html)<T, U> is true. 
  * [std::is_assignable_v](../../types/is_assignable.html)<T&, U> is true.



## Contents

  * [1 Parameters](operator=.html#Parameters)
  * [2 Return value](operator=.html#Return_value)
  * [3 Exceptions](operator=.html#Exceptions)
  * [4 Example](operator=.html#Example)

  
---  
  
### Parameters

other  |  \-  |  another `indirect` object whose owned value (if exists) is used for assignment   
---|---|---  
value  |  \-  |  value to assign to or construct the owned value   
  
### Return value

*this

### Exceptions

1) If any exception is thrown, the result of this->valueless_after_move() remains unchanged.

If an exception is thrown during the call to `T`’s selected copy constructor, no effect.

If an exception is thrown during the call to `T`’s copy assignment operator, the state of this->`_[p](../indirect.html#p "cpp/memory/indirect")_` is as defined by the exception safety guarantee of `T`’s copy assignment operator.

2) If any exception is thrown, there are no effects on *this or other.

[`noexcept`](../../language/noexcept_spec.html "cpp/language/noexcept spec") specification: 

noexcept([std::allocator_traits](../allocator_traits.html)<Allocator>::  


propagate_on_container_move_assignment::value  


|| [std::allocator_traits](../allocator_traits.html)<Allocator>::is_always_equal::value)

### Example

| This section is incomplete  
Reason: no example   
---|---
