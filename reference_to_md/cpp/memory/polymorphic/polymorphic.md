 
  


  
  
  
  
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
**polymorphic::polymorphic**  
[polymorphic::~polymorphic](~polymorphic.html "cpp/memory/polymorphic/~polymorphic")  
[polymorphic::operator=](operator=.html "cpp/memory/polymorphic/operator=")  
[Observers](../polymorphic.html#Observers "cpp/memory/polymorphic")  
[polymorphic::operator->polymorphic::operator*](operator*.html "cpp/memory/polymorphic/operator*")  
[polymorphic::valueless_after_move](valueless_after_move.html "cpp/memory/polymorphic/valueless after move")  
[polymorphic::get_allocator](get_allocator.html "cpp/memory/polymorphic/get allocator")  
[Modifiers](../polymorphic.html#Modifiers "cpp/memory/polymorphic")  
[polymorphic::swap](swap.html "cpp/memory/polymorphic/swap")  
[Non-member functions](../polymorphic.html#Non-member_functions "cpp/memory/polymorphic")  
[swap(std::polymorphic)](swap2.html "cpp/memory/polymorphic/swap2")  
  


constexpr explicit polymorphic(); |  (1) | (since C++26)  
---|---|---  
constexpr explicit polymorphic( [std::allocator_arg_t](../allocator_arg_t.html), const Allocator& a ); |  (2) | (since C++26)  
template< class U = T >  
constexpr explicit polymorphic( U&& v ); |  (3) | (since C++26)  
template< class U = T >  
constexpr explicit polymorphic( [std::allocator_arg_t](../allocator_arg_t.html), const Allocator& a,  
U&& v ); |  (4) | (since C++26)  
template< class U, class... Args >  
constexpr explicit polymorphic( [std::in_place_type_t](../../utility/in_place.html)<U>, Args&&... args ); |  (5) | (since C++26)  
template< class U, class... Args >  
constexpr explicit polymorphic( [std::allocator_arg_t](../allocator_arg_t.html), const Allocator& a,  
[std::in_place_type_t](../../utility/in_place.html)<U>, Args&&... args ); |  (6) | (since C++26)  
template< class U, class I, class... Args >  
constexpr explicit polymorphic( [std::in_place_type_t](../../utility/in_place.html)<U>,  
[std::initializer_list](../../utility/initializer_list.html)<I> ilist,  
Args&&... args ); |  (7) | (since C++26)  
template< class U, class I, class... Args >  
constexpr explicit polymorphic( [std::allocator_arg_t](../allocator_arg_t.html), const Allocator& a,  
[std::in_place_type_t](../../utility/in_place.html)<U>,  
[std::initializer_list](../../utility/initializer_list.html)<I> ilist,  
Args&&... args ); |  (8) | (since C++26)  
constexpr polymorphic( const polymorphic& other ); |  (9) | (since C++26)  
constexpr polymorphic( [std::allocator_arg_t](../allocator_arg_t.html), const Allocator& a,  
const polymorphic& other ); |  (10) | (since C++26)  
constexpr polymorphic( polymorphic&& other ) noexcept; |  (11) | (since C++26)  
constexpr polymorphic( [std::allocator_arg_t](../allocator_arg_t.html), const Allocator& a,  
polymorphic&& other ) noexcept(/* see below */); |  (12) | (since C++26)  
| |   
  
Constructs a new `polymorphic` object. 

## Contents

  * [1 Parameters](polymorphic.html#Parameters)
  * [2 Effects](polymorphic.html#Effects)
  * [3 Constraints and supplement information](polymorphic.html#Constraints_and_supplement_information)
  * [4 Exceptions](polymorphic.html#Exceptions)
  * [5 Example](polymorphic.html#Example)
  * [6 See also](polymorphic.html#See_also)

  
---  
  
### Parameters

a  |  \-  |  the allocator to be associated   
---|---|---  
v  |  \-  |  value with which to initialize the owned value   
args  |  \-  |  arguments with which to initialize the owned value   
il  |  \-  |  initializer list with which to initialize the owned value   
other  |  \-  |  another `polymorphic` object whose owned value (if exists) is copied   
  
### Effects

The construction of a new `polymorphic` object consists of the following steps: 

1) Constructs the associated allocator `_[alloc](../polymorphic.html#alloc "cpp/memory/polymorphic")_` ﻿: 

  * If the initializer for `_[alloc](../polymorphic.html#alloc "cpp/memory/polymorphic")_` is empty, it is [value-initialized](../../language/value_initialization.html "cpp/language/value initialization"). 
  * If the initializer for `_[alloc](../polymorphic.html#alloc "cpp/memory/polymorphic")_` is not empty, it is [direct-non-list-initialized](../../language/direct_initialization.html "cpp/language/direct initialization") with the initializer argument.



2) Constructs the owned object: 

  * For overloads ([1-8](polymorphic.html#Version_1)), calls [std::allocator_traits](../allocator_traits.html)<Allocator>::construct(`_[alloc](../polymorphic.html#alloc "cpp/memory/polymorphic")_` ﻿,` `p, args...), where 
    * p is a pointer of type `U*`, it points to storage suitable for the owned object to be constructed, and 
    * args... is an expression pack containing the initializer arguments. 
  * For overloads ([9-12](polymorphic.html#Version_9)): 
    * If other is valueless, no owned object is constructed, and *this is also valueless after construction. 
    * Otherwise, if other is an rvalue reference and `_[alloc](../polymorphic.html#alloc "cpp/memory/polymorphic")_` equals other.`_[alloc](../polymorphic.html#alloc "cpp/memory/polymorphic")_` , *this takes ownership of the owned object of other. 
    * Otherwise, the owned object is constructed using `_[alloc](../polymorphic.html#alloc "cpp/memory/polymorphic")_` as described above, where the type of p is determined by the type of the object owned by other.



Overload  | Initializer for...  | Type of the owned object  | [`valueless_after_move()`](valueless_after_move.html "cpp/memory/polymorphic/valueless after move")  
after construction   
---|---|---|---  
`_[alloc](../polymorphic.html#alloc "cpp/memory/polymorphic")_` | the owned object   
([1](polymorphic.html#Version_1)) | (empty)  | (empty)  | `T` | false  
([2](polymorphic.html#Version_2)) | a  
([3](polymorphic.html#Version_3)) | (empty)  | [std::forward](../../utility/forward.html)<U>(v) | `U`  
([4](polymorphic.html#Version_4)) | a  
([5](polymorphic.html#Version_5)) | (empty)  | [std::forward](../../utility/forward.html)<Args>(args)  
([6](polymorphic.html#Version_6)) | a  
([7](polymorphic.html#Version_7)) | (empty)  | ilist,` `  
[std::forward](../../utility/forward.html)<Args>(args)  
([8](polymorphic.html#Version_8)) | a  
([9](polymorphic.html#Version_9)) |  see below  | *other  
(only if other owns a value) | the type of the object owned by other | true only if other is valueless   
([10](polymorphic.html#Version_10)) | a  
([11](polymorphic.html#Version_11)) | std::move` ` ﻿  
` `(other.`_[alloc](../polymorphic.html#alloc "cpp/memory/polymorphic")_` ﻿) | takes ownership  
(only if other owns a value)  
([12](polymorphic.html#Version_12)) | a | see below   
  
9) `_[alloc](../polymorphic.html#alloc "cpp/memory/polymorphic")_` is direct-non-list-initialized with [std::allocator_traits](../allocator_traits.html)<Allocator>::  
` `select_on_container_copy_construction(other.`_[alloc](../polymorphic.html#alloc "cpp/memory/polymorphic")_` ﻿).

12) The owned object is constructed as follows: 

  * If other is valueless, *this is also valueless. 
  * Otherwise, if alloc == other.`_[alloc](../polymorphic.html#alloc "cpp/memory/polymorphic")_` is true, *this takes ownership of the owned object of other. 
  * Otherwise, constructs an owned object with *std::move(other) using `_[alloc](../polymorphic.html#alloc "cpp/memory/polymorphic")_` ﻿.



### Constraints and supplement information

1,2) If any of the following values is false, the program is ill-formed: 

  * [std::is_default_constructible_v](../../types/is_default_constructible.html)<T>
  * [std::is_copy_constructible_v](../../types/is_copy_constructible.html)<T>



1) This overload participates in overload resolution only if [std::is_default_constructible_v](../../types/is_default_constructible.html)<Allocator> is true.

3-8) These overloads participate in overload resolution only if the following values are all true: 

  * [std::derived_from](../../concepts/derived_from.html)<[std::remove_cvref_t](../../types/remove_cvref.html)<U>, T>
  * [std::is_copy_constructible_v](../../types/is_copy_constructible.html)<[std::remove_cvref_t](../../types/remove_cvref.html)<U>>
  * [std::is_constructible_v](../../types/is_constructible.html)<[std::remove_cvref_t](../../types/remove_cvref.html)<U>, /* argument types */>, where /* argument types */ are:



3,4) `U`

5,6) `Args...`

7,8) [std::initializer_list](../../utility/initializer_list.html)<I>&, Args...

3,5,7) These overloads participate in overload resolution only if [std::is_default_constructible_v](../../types/is_default_constructible.html)<Allocator> is true.

3,4) These overloads participate in overload resolution only if all following conditions are satisfied: 

  * [std::is_same_v](../../types/is_same.html)<[std::remove_cvref_t](../../types/remove_cvref.html)<U>, std::polymorphic> is false. 
  * `U` is not a specialization of [std::in_place_type_t](../../utility/in_place.html "cpp/utility/in place").



5-8) These overloads participate in overload resolution only if [std::is_same_v](../../types/is_same.html)<[std::remove_cvref_t](../../types/remove_cvref.html)<U>, U> is true.

### Exceptions

Throws nothing unless [std::allocator_traits](../allocator_traits.html)<Allocator>::allocate or [std::allocator_traits](../allocator_traits.html)<Allocator>::construct throws. 

12)

[`noexcept`](../../language/noexcept_spec.html "cpp/language/noexcept spec") specification: 

noexcept([std::allocator_traits](../allocator_traits.html)<Allocator>::is_always_equal::value)

### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### See also

[ allocator_arg_t](../allocator_arg_t.html "cpp/memory/allocator arg t")(C++11) |  tag type used to select allocator-aware constructor overloads   
(class)   
---|---  
[ in_placein_place_typein_place_indexin_place_tin_place_type_tin_place_index_t](../../utility/in_place.html "cpp/utility/in place")(C++17) |  in-place construction tag  
(tag)
