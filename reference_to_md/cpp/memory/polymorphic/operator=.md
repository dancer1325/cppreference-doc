 
  


  
  
  
  
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
  
  
  


[`std::polymorphic`](../polymorphic.html "cpp/memory/polymorphic")

[Member functions](../polymorphic.html#Member_functions "cpp/memory/polymorphic")  
---  
[polymorphic::polymorphic](polymorphic.html "cpp/memory/polymorphic/polymorphic")  
[polymorphic::~polymorphic](~polymorphic.html "cpp/memory/polymorphic/~polymorphic")  
**polymorphic::operator=**  
[Observers](../polymorphic.html#Observers "cpp/memory/polymorphic")  
[polymorphic::operator->polymorphic::operator*](operator*.html "cpp/memory/polymorphic/operator*")  
[polymorphic::valueless_after_move](valueless_after_move.html "cpp/memory/polymorphic/valueless after move")  
[polymorphic::get_allocator](get_allocator.html "cpp/memory/polymorphic/get allocator")  
[Modifiers](../polymorphic.html#Modifiers "cpp/memory/polymorphic")  
[polymorphic::swap](swap.html "cpp/memory/polymorphic/swap")  
[Non-member functions](../polymorphic.html#Non-member_functions "cpp/memory/polymorphic")  
[swap(std::polymorphic)](swap2.html "cpp/memory/polymorphic/swap2")  
  


constexpr polymorphic& operator=( const polymorphic& other ); |  (1) | (since C++26)  
---|---|---  
constexpr polymorphic& operator=( polymorphic&& other )  
noexcept(/* see below */); |  (2) | (since C++26)  
| |   
  
Replaces contents of *this with the contents of other. 

Let `traits` be [std::allocator_traits](../allocator_traits.html)<Allocator>: 

1) If [std::addressof](../addressof.html)(other) == this is true, does nothing. Otherwise, let need_update be traits::propagate_on_container_copy_assignment::value: 

  1. If other is valueless, proceeds to the next step. Otherwise, constructs a new owned object in *this using traits::construct with *other as the argument, using the allocator update_alloc ? other.`_[alloc](../polymorphic.html#alloc "cpp/memory/polymorphic")_`` `:` `` _[alloc](../polymorphic.html#alloc "cpp/memory/polymorphic")_`. 
  2. The previously owned object in *this (if any) is destroyed using traits::destroy and then the storage is deallocated.



After updating the object owned by *this, if need_update is true, `_[alloc](../polymorphic.html#alloc "cpp/memory/polymorphic")_` is replaced with a copy of other.`_[alloc](../polymorphic.html#alloc "cpp/memory/polymorphic")_`.

If `T` is an [incomplete type](../../language/type-id.html#Incomplete_type "cpp/language/type"), the program is ill-formed.

2) If [std::addressof](../addressof.html)(other) == this is true, does nothing. Otherwise, let need_update be traits::propagate_on_container_move_assignment::value: 

  * If `_[alloc](../polymorphic.html#alloc "cpp/memory/polymorphic")_`` `== other.`_[alloc](../polymorphic.html#alloc "cpp/memory/polymorphic")_` is true, swaps the owned objects in *this and other; the owned object in other (if any) is then destroyed using traits::destroy and then the storage is deallocated. 
  * Otherwise: 



    

  1. If other is valueless, proceeds to the next step. Otherwise, constructs a new owned object in *this using traits::construct with std::move(*other) as the argument, using the allocator update_alloc ? other.`_[alloc](../polymorphic.html#alloc "cpp/memory/polymorphic")_`` `:` `` _[alloc](../polymorphic.html#alloc "cpp/memory/polymorphic")_`. 
  2. The previously owned object in *this (if any) is destroyed using traits::destroy and then the storage is deallocated.



After updating the objects owned by *this and other, if need_update is true, `_[alloc](../polymorphic.html#alloc "cpp/memory/polymorphic")_` is replaced with a copy of other.`_[alloc](../polymorphic.html#alloc "cpp/memory/polymorphic")_`.

If all following conditions are satisfied, the program is ill-formed: 

  * [std::allocator_traits](../allocator_traits.html)<Allocator>::is_always_equal::value is false. 
  * `T` is an incomplete type.



## Contents

  * [1 Parameters](operator=.html#Parameters)
  * [2 Return value](operator=.html#Return_value)
  * [3 Exceptions](operator=.html#Exceptions)
  * [4 Example](operator=.html#Example)

  
---  
  
### Parameters

other  |  \-  |  another `polymorphic` object whose owned value (if exists) is used for assignment   
---|---|---  
  
### Return value

*this

### Exceptions

1) If any exception is thrown, there are no effects on *this.

2) If any exception is thrown, there are no effects on *this or other.

[`noexcept`](../../language/noexcept_spec.html "cpp/language/noexcept spec") specification: 

noexcept([std::allocator_traits](../allocator_traits.html)<Allocator>::  


propagate_on_container_move_assignment::value  


|| [std::allocator_traits](../allocator_traits.html)<Allocator>::is_always_equal::value)

### Example

| This section is incomplete  
Reason: no example   
---|---
