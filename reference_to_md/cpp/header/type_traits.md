* == part of the library's [metaprogramming](../meta.md)  

## Contents

  * [1 Classes](type_traits.md#Classes)
    * [1.1 Helper Classes](type_traits.md#Helper_Classes)
    * [1.2 Primary type categories](type_traits.md#Primary_type_categories)
    * [1.3 Composite type categories](type_traits.md#Composite_type_categories)
    * [1.4 Type properties](type_traits.md#Type_properties)
    * [1.5 Supported operations](type_traits.md#Supported_operations)
    * [1.6 Property queries](type_traits.md#Property_queries)
    * [1.7 Type relationships](type_traits.md#Type_relationships)
    * [1.8 Const-volatility specifiers](type_traits.md#Const-volatility_specifiers)
    * [1.9 References](type_traits.md#References)
    * [1.10 Pointers](type_traits.md#Pointers)
    * [1.11 Sign modifiers](type_traits.md#Sign_modifiers)
    * [1.12 Arrays](type_traits.md#Arrays)
    * [1.13 Miscellaneous transformations](#miscellaneous-transformations-)
    * [1.14 Operations on traits](type_traits.md#Operations_on_traits)
  * [2 Functions](type_traits.md#Functions)
    * [2.1 Member relationships](type_traits.md#Member_relationships)
    * [2.2 Constant evaluation context](type_traits.md#Constant_evaluation_context)
  * [3 Synopsis](type_traits.md#Synopsis)
    * [3.1 Class template std::integral_constant](type_traits.md#Class_template_std::integral_constant)
  
###  Classes  

#####  Helper Classes   
  
* [`integral_constant`](../types/integral_constant.md)
  * == [class template](../language/class_template.md) / represent
    * compile-time constant / 
      * specified type
      * specified value
  * requirements
    * C++11
* [`bool_constant`](../types/integral_constant.md)
  * == [class template](../language/class_template.md) / represent
    * compile-time constant /
      * specified type
      * specified value
  * requirements
    * C++17
* `true_type`
  * `std::integral_constant<bool, true>`
* `false_type`
  * `std::integral_constant<bool, false>`  
  
#####  Primary type categories   
  
[ is_void](../types/is_void.md)(C++11) |  checks if a type is void   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_void&action=edit)  
[ is_null_pointer](../types/is_null_pointer.md)(C++11)(DR*) |  checks if a type is [std::nullptr_t](../types/nullptr_t.md)   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_null_pointer&action=edit)  
[ is_integral](../types/is_integral.md)(C++11) |  checks if a type is an integral type   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_integral&action=edit)  
[ is_floating_point](../types/is_floating_point.md)(C++11) |  checks if a type is a floating-point type   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_floating_point&action=edit)  
[ is_array](../types/is_array.md)(C++11) |  checks if a type is an array type   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_array&action=edit)  
[ is_enum](../types/is_enum.md)(C++11) |  checks if a type is an enumeration type   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_enum&action=edit)  
[ is_union](../types/is_union.md)(C++11) |  checks if a type is a union type   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_union&action=edit)  
[ is_class](../types/is_class.md)(C++11) |  checks if a type is a non-union class type   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_class&action=edit)  
[ is_function](../types/is_function.md)(C++11) |  checks if a type is a function type   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_function&action=edit)  
[ is_pointer](../types/is_pointer.md)(C++11) |  checks if a type is a pointer type   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_pointer&action=edit)  
[ is_lvalue_reference](../types/is_lvalue_reference.md)(C++11) |  checks if a type is an _lvalue reference_   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_lvalue_reference&action=edit)  
[ is_rvalue_reference](../types/is_rvalue_reference.md)(C++11) |  checks if a type is an _rvalue reference_   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_rvalue_reference&action=edit)  
[ is_member_object_pointer](../types/is_member_object_pointer.md)(C++11) |  checks if a type is a non-static member object pointer   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_member_object_pointer&action=edit)  
[ is_member_function_pointer](../types/is_member_function_pointer.md)(C++11) |  checks if a type is a non-static member function pointer   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_member_function_pointer&action=edit)  
  
#####  Composite type categories   
  
[ is_fundamental](../types/is_fundamental.md)(C++11) |  checks if a type is a fundamental type   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_fundamental&action=edit)  
[ is_arithmetic](../types/is_arithmetic.md)(C++11) |  checks if a type is an arithmetic type   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_arithmetic&action=edit)  
[ is_scalar](../types/is_scalar.md)(C++11) |  checks if a type is a scalar type   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_scalar&action=edit)  
[ is_object](../types/is_object.md)(C++11) |  checks if a type is an object type   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_object&action=edit)  
[ is_compound](../types/is_compound.md)(C++11) |  checks if a type is a compound type   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_compound&action=edit)  
[ is_reference](../types/is_reference.md)(C++11) |  checks if a type is either an _lvalue reference_ or _rvalue reference_   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_reference&action=edit)  
[ is_member_pointer](../types/is_member_pointer.md)(C++11) |  checks if a type is a pointer to a non-static member function or object   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_member_pointer&action=edit)  
  
#####  Type properties   
  
[ is_const](../types/is_const.md)(C++11) |  checks if a type is const-qualified   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_const&action=edit)  
[ is_volatile](../types/is_volatile.md)(C++11) |  checks if a type is volatile-qualified   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_volatile&action=edit)  
[ is_trivial](../types/is_trivial.md)(C++11)(deprecated in C++26) |  checks if a type is trivial   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_trivial&action=edit)  
[ is_trivially_copyable](../types/is_trivially_copyable.md)(C++11) |  checks if a type is trivially copyable   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_trivially_copyable&action=edit)  
[ is_standard_layout](../types/is_standard_layout.md)(C++11) |  checks if a type is a [standard-layout](../language/data_members.md#Standard-layout) type   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_standard_layout&action=edit)  
[ is_pod](../types/is_pod.md)(C++11)(deprecated in C++20) |  checks if a type is a plain-old data (POD) type   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_pod&action=edit)  
[ is_literal_type](../types/is_literal_type.md)(C++11)(deprecated in C++17)(removed in C++20) |  checks if a type is a literal type   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_literal_type&action=edit)  
[ has_unique_object_representations](../types/has_unique_object_representations.md)(C++17) |  checks if every bit in the type's object representation contributes to its value   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_has_unique_object_representations&action=edit)  
[ is_empty](../types/is_empty.md)(C++11) |  checks if a type is a class (but not union) type and has no non-static data members   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_empty&action=edit)  
[ is_polymorphic](../types/is_polymorphic.md)(C++11) |  checks if a type is a polymorphic class type   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_polymorphic&action=edit)  
[ is_abstract](../types/is_abstract.md)(C++11) |  checks if a type is an abstract class type   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_abstract&action=edit)  
[ is_final](../types/is_final.md)(C++14) |  checks if a type is a final class type   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_final&action=edit)  
[ is_aggregate](../types/is_aggregate.md)(C++17) |  checks if a type is an aggregate type   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_aggregate&action=edit)  
[ is_implicit_lifetime](../types/is_implicit_lifetime.md)(C++23) |  checks if a type is an implicit-lifetime type   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_implicit_lifetime&action=edit)  
[ is_signed](../types/is_signed.md)(C++11) |  checks if a type is a signed arithmetic type   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_signed&action=edit)  
[ is_unsigned](../types/is_unsigned.md)(C++11) |  checks if a type is an unsigned arithmetic type   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_unsigned&action=edit)  
[ is_bounded_array](../types/is_bounded_array.md)(C++20) |  checks if a type is an array type of known bound   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_bounded_array&action=edit)  
[ is_unbounded_array](../types/is_unbounded_array.md)(C++20) |  checks if a type is an array type of unknown bound   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_unbounded_array&action=edit)  
[ is_scoped_enum](../types/is_scoped_enum.md)(C++23) |  checks if a type is a scoped enumeration type   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_scoped_enum&action=edit)  
  
#####  Supported operations   

[ is_constructibleis_trivially_constructibleis_nothrow_constructible](../types/is_constructible.md)(C++11)(C++11)(C++11) |  checks if a type has a constructor for specific arguments   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_constructible&action=edit)  
[ is_default_constructibleis_trivially_default_constructibleis_nothrow_default_constructible](../types/is_default_constructible.md)(C++11)(C++11)(C++11) |  checks if a type has a default constructor   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_default_constructible&action=edit)  
[ is_copy_constructibleis_trivially_copy_constructibleis_nothrow_copy_constructible](../types/is_copy_constructible.md)(C++11)(C++11)(C++11) |  checks if a type has a copy constructor   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_copy_constructible&action=edit)  
[ is_move_constructibleis_trivially_move_constructibleis_nothrow_move_constructible](../types/is_move_constructible.md)(C++11)(C++11)(C++11) |  checks if a type can be constructed from an rvalue reference   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_move_constructible&action=edit)  
[ is_assignableis_trivially_assignableis_nothrow_assignable](../types/is_assignable.md)(C++11)(C++11)(C++11) |  checks if a type has an assignment operator for a specific argument   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_assignable&action=edit)  
[ is_copy_assignableis_trivially_copy_assignableis_nothrow_copy_assignable](../types/is_copy_assignable.md)(C++11)(C++11)(C++11) |  checks if a type has a copy assignment operator   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_copy_assignable&action=edit)  
[ is_move_assignableis_trivially_move_assignableis_nothrow_move_assignable](../types/is_move_assignable.md)(C++11)(C++11)(C++11) |  checks if a type has a move assignment operator   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_move_assignable&action=edit)  
[ is_destructibleis_trivially_destructibleis_nothrow_destructible](../types/is_destructible.md)(C++11)(C++11)(C++11) |  checks if a type has a non-deleted destructor   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_destructible&action=edit)  
[ has_virtual_destructor](../types/has_virtual_destructor.md)(C++11) |  checks if a type has a virtual destructor   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_has_virtual_destructor&action=edit)  
[ is_swappable_withis_swappableis_nothrow_swappable_withis_nothrow_swappable](../types/is_swappable.md)(C++17)(C++17)(C++17)(C++17) |  checks if objects of a type can be swapped with objects of same or different type   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_swappable&action=edit)  
[ reference_converts_from_temporary](../types/reference_converts_from_temporary.md)(C++23) |  checks if a reference is bound to a temporary in copy-initialization   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_reference_converts_from_temporary&action=edit)  
[ reference_constructs_from_temporary](../types/reference_constructs_from_temporary.md)(C++23) |  checks if a reference is bound to a temporary in direct-initialization   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_reference_constructs_from_temporary&action=edit)  
  
#####  Property queries   

[ alignment_of](../types/alignment_of.md)(C++11) |  obtains the type's alignment requirements   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_alignment_of&action=edit)  
[ rank](../types/rank.md)(C++11) |  obtains the number of dimensions of an array type   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_rank&action=edit)  
[ extent](../types/extent.md)(C++11) |  obtains the size of an array type along a specified dimension   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_extent&action=edit)  
  
#####  Type relationships   

[ is_same](../types/is_same.md)(C++11) |  checks if two types are the same   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_same&action=edit)  
[ is_base_of](../types/is_base_of.md)(C++11) |  checks if a type is a base of the other type   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_base_of&action=edit)  
[ is_virtual_base_of](../types/is_virtual_base_of.md)(C++26) |  checks if a type is a virtual base of the other type   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_virtual_base_of&action=edit)  
[ is_convertibleis_nothrow_convertible](../types/is_convertible.md)(C++11)(C++20) |  checks if a type can be converted to the other type   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_convertible&action=edit)  
[ is_layout_compatible](../types/is_layout_compatible.md)(C++20) |  checks if two types are [_layout-compatible_](../language/data_members.md#Standard_layout)   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_layout_compatible&action=edit)  
[ is_pointer_interconvertible_base_of](../types/is_pointer_interconvertible_base_of.md)(C++20) |  checks if a type is a _[pointer-interconvertible](../language/static_cast.md#pointer-interconvertible)_ (initial) base of another type   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_pointer_interconvertible_base_of&action=edit)  
[ is_invocableis_invocable_ris_nothrow_invocableis_nothrow_invocable_r](../types/is_invocable.md)(C++17) |  checks if a type can be invoked (as if by [std::invoke](../utility/functional/invoke.md)) with the given argument types   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_invocable&action=edit)  
  
#####  Const-volatility specifiers   
  
[ remove_cvremove_constremove_volatile](../types/remove_cv.md)(C++11)(C++11)(C++11) |  removes const and/or volatile specifiers from the given type   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_remove_cv&action=edit)  
[ add_cvadd_constadd_volatile](../types/add_cv.md)(C++11)(C++11)(C++11) |  adds const and/or volatile specifiers to the given type   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_add_cv&action=edit)  
  
#####  References   
  
[ remove_reference](../types/remove_reference.md)(C++11) |  removes a reference from the given type   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_remove_reference&action=edit)  
[ add_lvalue_referenceadd_rvalue_reference](../types/add_reference.md)(C++11)(C++11) |  adds an _lvalue_ or _rvalue_ reference to the given type   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_add_reference&action=edit)  
  
#####  Pointers   
  
[ remove_pointer](../types/remove_pointer.md)(C++11) |  removes a pointer from the given type   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_remove_pointer&action=edit)  
[ add_pointer](../types/add_pointer.md)(C++11) |  adds a pointer to the given type   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_add_pointer&action=edit)  
  
#####  Sign modifiers   
  
[ make_signed](../types/make_signed.md)(C++11) |  obtains the corresponding signed type for the given integral type   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_make_signed&action=edit)  
[ make_unsigned](../types/make_unsigned.md)(C++11) |  obtains the corresponding signed type for the given integral type   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_make_unsigned&action=edit)  
  
#####  Arrays   
  
[ remove_extent](../types/remove_extent.md)(C++11) |  removes one extent from the given array type   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_remove_extent&action=edit)  
[ remove_all_extents](../types/remove_all_extents.md)(C++11) |  removes all extents from the given array type   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_remove_all_extents&action=edit)  
  
#####  Miscellaneous transformations   
  
[ aligned_storage](../types/aligned_storage.md)(since C++11)(deprecated in C++23) |  defines the type suitable for use as uninitialized storage for types of given size   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_aligned_storage&action=edit)  
[ aligned_union](../types/aligned_union.md)(since C++11)(deprecated in C++23) |  defines the type suitable for use as uninitialized storage for all given types   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_aligned_union&action=edit)  
[ decay](../types/decay.md)(C++11) |  applies type transformations as when passing a function argument by value   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_decay&action=edit)  
[ remove_cvref](../types/remove_cvref.md)(C++20) |  combines [std::remove_cv](../types/remove_cv.md) and [std::remove_reference](../types/remove_reference.md)   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_remove_cvref&action=edit)  
[ enable_if](../types/enable_if.md)(C++11) |  conditionally [removes](../language/sfinae.md) a function overload or template specialization from overload resolution   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_enable_if&action=edit)  
[ conditional](../types/conditional.md)(C++11) |  chooses one type or another based on compile-time boolean   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_conditional&action=edit)  
[ common_type](../types/common_type.md)(C++11) |  determines the common type of a group of types   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_common_type&action=edit)  
[ common_referencebasic_common_reference](../types/common_reference.md)(C++20) |  determines the common reference type of a group of types   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_common_reference&action=edit)  
* [`underlying_type`](../types/underlying_type.md)
  * == class template /
    * obtains the underlying integer type / given enumeration type
  * requirements
    * C++11
* [ result_ofinvoke_result](../types/result_of.md)(C++11)(removed in C++20)(C++17) |  deduces the result type of invoking a callable object with a set of arguments   
  (class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_result_of&action=edit)  
  [ void_t](../types/void_t.md)(C++17) |  void variadic alias template   
  (alias template)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_void_t&action=edit)  
  [ type_identity](../types/type_identity.md)(C++20) |  returns the type argument unchanged   
  (class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_type_identity&action=edit)  
  [ unwrap_referenceunwrap_ref_decay](../utility/functional/unwrap_reference.md)(C++20)(C++20) |  get the reference type wrapped in [std::reference_wrapper](../utility/functional/reference_wrapper.md)   
  (class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:utility/functional/dsc_unwrap_reference&action=edit)  
  
#####  Operations on traits   
  
[ conjunction](../types/conjunction.md)(C++17) |  variadic logical AND metafunction   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_conjunction&action=edit)  
[ disjunction](../types/disjunction.md)(C++17) |  variadic logical OR metafunction   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_disjunction&action=edit)  
[ negation](../types/negation.md)(C++17) |  logical NOT metafunction   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_negation&action=edit)  
  
###  Functions  
  
#####  Member relationships   
  
[ is_pointer_interconvertible_with_class](../types/is_pointer_interconvertible_with_class.md)(C++20) |  checks if objects of a type are _[pointer-interconvertible](../language/static_cast.md#pointer-interconvertible)_ with the specified subobject of that type   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_pointer_interconvertible_with_class&action=edit)  
[ is_corresponding_member](../types/is_corresponding_member.md)(C++20) |  checks if two specified members correspond to each other in the common initial subsequence of two specified types   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_corresponding_member&action=edit)  
  
#####  Constant evaluation context   
  
[ is_constant_evaluated](../types/is_constant_evaluated.md)(C++20) |  detects whether the call occurs within a constant-evaluated context   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_constant_evaluated&action=edit)  
[ is_within_lifetime](../types/is_within_lifetime.md)(C++26) |  checks whether a pointer is within the object's lifetime at compile time   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:types/dsc_is_within_lifetime&action=edit)  
  
### Synopsis
    
    namespace std {
      // helper class
      template<class T, T v> struct integral_constant;
     
      template<bool B>
        using bool_constant = integral_constant<bool, B>;
      using true_type  = bool_constant<true>;
      using false_type = bool_constant<false>;
     
      // primary type categories
      template<class T> struct is_void;
      template<class T> struct is_null_pointer;
      template<class T> struct is_integral;
      template<class T> struct is_floating_point;
      template<class T> struct is_array;
      template<class T> struct is_pointer;
      template<class T> struct is_lvalue_reference;
      template<class T> struct is_rvalue_reference;
      template<class T> struct is_member_object_pointer;
      template<class T> struct is_member_function_pointer;
      template<class T> struct is_enum;
      template<class T> struct is_union;
      template<class T> struct is_class;
      template<class T> struct is_function;
     
      // composite type categories
      template<class T> struct is_reference;
      template<class T> struct is_arithmetic;
      template<class T> struct is_fundamental;
      template<class T> struct is_object;
      template<class T> struct is_scalar;
      template<class T> struct is_compound;
      template<class T> struct is_member_pointer;
     
      // type properties
      template<class T> struct is_const;
      template<class T> struct is_volatile;
      template<class T> struct is_trivial;
      template<class T> struct is_trivially_copyable;
      template<class T> struct is_standard_layout;
      template<class T> struct is_empty;
      template<class T> struct is_polymorphic;
      template<class T> struct is_abstract;
      template<class T> struct is_final;
      template<class T> struct is_aggregate;
     
      template<class T> struct is_signed;
      template<class T> struct is_unsigned;
      template<class T> struct is_bounded_array;
      template<class T> struct is_unbounded_array;
      template<class T> struct is_scoped_enum;
     
      template<class T, class... Args> struct is_constructible;
      template<class T> struct is_default_constructible;
      template<class T> struct is_copy_constructible;
      template<class T> struct is_move_constructible;
     
      template<class T, class U> struct is_assignable;
      template<class T> struct is_copy_assignable;
      template<class T> struct is_move_assignable;
     
      template<class T, class U> struct is_swappable_with;
      template<class T> struct is_swappable;
     
      template<class T> struct is_destructible;
     
      template<class T, class... Args> struct is_trivially_constructible;
      template<class T> struct is_trivially_default_constructible;
      template<class T> struct is_trivially_copy_constructible;
      template<class T> struct is_trivially_move_constructible;
     
      template<class T, class U> struct is_trivially_assignable;
      template<class T> struct is_trivially_copy_assignable;
      template<class T> struct is_trivially_move_assignable;
      template<class T> struct is_trivially_destructible;
     
      template<class T, class... Args> struct is_nothrow_constructible;
      template<class T> struct is_nothrow_default_constructible;
      template<class T> struct is_nothrow_copy_constructible;
      template<class T> struct is_nothrow_move_constructible;
     
      template<class T, class U> struct is_nothrow_assignable;
      template<class T> struct is_nothrow_copy_assignable;
      template<class T> struct is_nothrow_move_assignable;
     
      template<class T, class U> struct is_nothrow_swappable_with;
      template<class T> struct is_nothrow_swappable;
     
      template<class T> struct is_nothrow_destructible;
     
      template<class T> struct has_virtual_destructor;
     
      template<class T> struct has_unique_object_representations;
     
      template<class T, class U> struct reference_constructs_from_temporary;
      template<class T, class U> struct reference_converts_from_temporary;
     
      // type property queries
      template<class T> struct alignment_of;
      template<class T> struct rank;
      template<class T, unsigned I = 0> struct extent;
     
      // type relations
      template<class T, class U> struct is_same;
      template<class Base, class Derived> struct is_base_of;
      template<class Base, class Derived> struct is_virtual_base_of;
      template<class From, class To> struct is_convertible;
      template<class From, class To> struct is_nothrow_convertible;
      template<class T, class U> struct is_layout_compatible;
      template<class Base, class Derived> struct is_pointer_interconvertible_base_of;
     
      template<class Fn, class... ArgTypes> struct is_invocable;
      template<class R, class Fn, class... ArgTypes> struct is_invocable_r;
     
      template<class Fn, class... ArgTypes> struct is_nothrow_invocable;
      template<class R, class Fn, class... ArgTypes> struct is_nothrow_invocable_r;
     
      // const-volatile modifications
      template<class T> struct remove_const;
      template<class T> struct remove_volatile;
      template<class T> struct remove_cv;
      template<class T> struct add_const;
      template<class T> struct add_volatile;
      template<class T> struct add_cv;
     
      template<class T>
        using remove_const_t    = typename remove_const<T>::type;
      template<class T>
        using remove_volatile_t = typename remove_volatile<T>::type;
      template<class T>
        using remove_cv_t       = typename remove_cv<T>::type;
      template<class T>
        using add_const_t       = typename add_const<T>::type;
      template<class T>
        using add_volatile_t    = typename add_volatile<T>::type;
      template<class T>
        using add_cv_t          = typename add_cv<T>::type;
     
      // reference modifications
      template<class T> struct remove_reference;
      template<class T> struct add_lvalue_reference;
      template<class T> struct add_rvalue_reference;
     
      template<class T>
        using remove_reference_t     = typename remove_reference<T>::type;
      template<class T>
        using add_lvalue_reference_t = typename add_lvalue_reference<T>::type;
      template<class T>
        using add_rvalue_reference_t = typename add_rvalue_reference<T>::type;
     
      // sign modifications
      template<class T> struct make_signed;
      template<class T> struct make_unsigned;
     
      template<class T>
        using make_signed_t   = typename make_signed<T>::type;
      template<class T>
        using make_unsigned_t = typename make_unsigned<T>::type;
     
      // array modifications
      template<class T> struct remove_extent;
      template<class T> struct remove_all_extents;
     
      template<class T>
        using remove_extent_t      = typename remove_extent<T>::type;
      template<class T>
        using remove_all_extents_t = typename remove_all_extents<T>::type;
     
      // pointer modifications
      template<class T> struct remove_pointer;
      template<class T> struct add_pointer;
     
      template<class T>
        using remove_pointer_t = typename remove_pointer<T>::type;
      template<class T>
        using add_pointer_t    = typename add_pointer<T>::type;
     
      // other transformations
      template<class T> struct type_identity;
      template<class T> struct remove_cvref;
      template<class T> struct decay;
      template<bool, class T = void> struct enable_if;
      template<bool, class T, class F> struct conditional;
      template<class... T> struct common_type;
      template<class T, class U, template<class> class TQual, template<class> class UQual>
        struct basic_common_reference { };
      template<class... T> struct common_reference;
      template<class T> struct underlying_type;
      template<class Fn, class... ArgTypes> struct invoke_result;
      template<class T> struct unwrap_reference;
      template<class T> struct unwrap_ref_decay;
     
      template<class T>
        using type_identity_t    = typename type_identity<T>::type;
      template<class T>
        using remove_cvref_t     = typename remove_cvref<T>::type;
      template<class T>
        using decay_t            = typename decay<T>::type;
      template<bool b, class T = void>
        using enable_if_t        = typename enable_if<b, T>::type;
      template<bool b, class T, class F>
        using conditional_t      = typename conditional<b, T, F>::type;
      template<class... T>
        using common_type_t      = typename common_type<T...>::type;
      template<class... T>
        using common_reference_t = typename common_reference<T...>::type;
      template<class T>
        using underlying_type_t  = typename underlying_type<T>::type;
      template<class Fn, class... ArgTypes>
        using invoke_result_t    = typename invoke_result<Fn, ArgTypes...>::type;
      template<class T>
        using unwrap_reference_t = typename unwrap_reference<T>::type;
      template<class T>
        using unwrap_ref_decay_t = typename unwrap_ref_decay<T>::type;
      template<class...>
        using void_t             = void;
     
      // logical operator traits
      template<class... B> struct conjunction;
      template<class... B> struct disjunction;
      template<class B> struct negation;
     
      // primary type categories
      template<class T>
        inline constexpr bool is_void_v = is_void<T>::value;
      template<class T>
        inline constexpr bool is_null_pointer_v = is_null_pointer<T>::value;
      template<class T>
        inline constexpr bool is_integral_v = is_integral<T>::value;
      template<class T>
        inline constexpr bool is_floating_point_v = is_floating_point<T>::value;
      template<class T>
        inline constexpr bool is_array_v = is_array<T>::value;
      template<class T>
        inline constexpr bool is_pointer_v = is_pointer<T>::value;
      template<class T>
        inline constexpr bool is_lvalue_reference_v = is_lvalue_reference<T>::value;
      template<class T>
        inline constexpr bool is_rvalue_reference_v = is_rvalue_reference<T>::value;
      template<class T>
        inline constexpr bool is_member_object_pointer_v = is_member_object_pointer<T>::value;
      template<class T>
        inline constexpr bool is_member_function_pointer_v = is_member_function_pointer<T>::value;
      template<class T>
        inline constexpr bool is_enum_v = is_enum<T>::value;
      template<class T>
        inline constexpr bool is_union_v = is_union<T>::value;
      template<class T>
        inline constexpr bool is_class_v = is_class<T>::value;
      template<class T>
        inline constexpr bool is_function_v = is_function<T>::value;
     
      // composite type categories
      template<class T>
        inline constexpr bool is_reference_v = is_reference<T>::value;
      template<class T>
        inline constexpr bool is_arithmetic_v = is_arithmetic<T>::value;
      template<class T>
        inline constexpr bool is_fundamental_v = is_fundamental<T>::value;
      template<class T>
        inline constexpr bool is_object_v = is_object<T>::value;
      template<class T>
        inline constexpr bool is_scalar_v = is_scalar<T>::value;
      template<class T>
        inline constexpr bool is_compound_v = is_compound<T>::value;
      template<class T>
        inline constexpr bool is_member_pointer_v = is_member_pointer<T>::value;
     
      // type properties
      template<class T>
        inline constexpr bool is_const_v = is_const<T>::value;
      template<class T>
        inline constexpr bool is_volatile_v = is_volatile<T>::value;
      template<class T>
        inline constexpr bool is_trivial_v = is_trivial<T>::value;
      template<class T>
        inline constexpr bool is_trivially_copyable_v = is_trivially_copyable<T>::value;
      template<class T>
        inline constexpr bool is_standard_layout_v = is_standard_layout<T>::value;
      template<class T>
        inline constexpr bool is_empty_v = is_empty<T>::value;
      template<class T>
        inline constexpr bool is_polymorphic_v = is_polymorphic<T>::value;
      template<class T>
        inline constexpr bool is_abstract_v = is_abstract<T>::value;
      template<class T>
        inline constexpr bool is_final_v = is_final<T>::value;
      template<class T>
        inline constexpr bool is_aggregate_v = is_aggregate<T>::value;
      template<class T>
        inline constexpr bool is_signed_v = is_signed<T>::value;
      template<class T>
        inline constexpr bool is_unsigned_v = is_unsigned<T>::value;
      template<class T>
        inline constexpr bool is_bounded_array_v = is_bounded_array<T>::value;
      template<class T>
        inline constexpr bool is_unbounded_array_v = is_unbounded_array<T>::value;
      template<class T>
        inline constexpr bool is_scoped_enum_v = is_scoped_enum<T>::value;
      template<class T, class... Args>
        inline constexpr bool is_constructible_v = is_constructible<T, Args...>::value;
      template<class T>
        inline constexpr bool is_default_constructible_v = is_default_constructible<T>::value;
      template<class T>
        inline constexpr bool is_copy_constructible_v = is_copy_constructible<T>::value;
      template<class T>
        inline constexpr bool is_move_constructible_v = is_move_constructible<T>::value;
      template<class T, class U>
        inline constexpr bool is_assignable_v = is_assignable<T, U>::value;
      template<class T>
        inline constexpr bool is_copy_assignable_v = is_copy_assignable<T>::value;
      template<class T>
        inline constexpr bool is_move_assignable_v = is_move_assignable<T>::value;
      template<class T, class U>
        inline constexpr bool is_swappable_with_v = is_swappable_with<T, U>::value;
      template<class T>
        inline constexpr bool is_swappable_v = is_swappable<T>::value;
      template<class T>
        inline constexpr bool is_destructible_v = is_destructible<T>::value;
      template<class T, class... Args>
        inline constexpr bool is_trivially_constructible_v
          = is_trivially_constructible<T, Args...>::value;
      template<class T>
        inline constexpr bool is_trivially_default_constructible_v
          = is_trivially_default_constructible<T>::value;
      template<class T>
        inline constexpr bool is_trivially_copy_constructible_v
          = is_trivially_copy_constructible<T>::value;
      template<class T>
        inline constexpr bool is_trivially_move_constructible_v
          = is_trivially_move_constructible<T>::value;
      template<class T, class U>
        inline constexpr bool is_trivially_assignable_v = is_trivially_assignable<T, U>::value;
      template<class T>
        inline constexpr bool is_trivially_copy_assignable_v
          = is_trivially_copy_assignable<T>::value;
      template<class T>
        inline constexpr bool is_trivially_move_assignable_v
          = is_trivially_move_assignable<T>::value;
      template<class T>
        inline constexpr bool is_trivially_destructible_v = is_trivially_destructible<T>::value;
      template<class T, class... Args>
        inline constexpr bool is_nothrow_constructible_v
          = is_nothrow_constructible<T, Args...>::value;
      template<class T>
        inline constexpr bool is_nothrow_default_constructible_v
          = is_nothrow_default_constructible<T>::value;
      template<class T>
        inline constexpr bool is_nothrow_copy_constructible_v
          = is_nothrow_copy_constructible<T>::value;
      template<class T>
        inline constexpr bool is_nothrow_move_constructible_v
          = is_nothrow_move_constructible<T>::value;
      template<class T, class U>
        inline constexpr bool is_nothrow_assignable_v = is_nothrow_assignable<T, U>::value;
      template<class T>
        inline constexpr bool is_nothrow_copy_assignable_v = is_nothrow_copy_assignable<T>::value;
      template<class T>
        inline constexpr bool is_nothrow_move_assignable_v = is_nothrow_move_assignable<T>::value;
      template<class T, class U>
        inline constexpr bool is_nothrow_swappable_with_v = is_nothrow_swappable_with<T, U>::value;
      template<class T>
        inline constexpr bool is_nothrow_swappable_v = is_nothrow_swappable<T>::value;
      template<class T>
        inline constexpr bool is_nothrow_destructible_v = is_nothrow_destructible<T>::value;
      template<class T>
        inline constexpr bool has_virtual_destructor_v = has_virtual_destructor<T>::value;
      template<class T>
        inline constexpr bool has_unique_object_representations_v
          = has_unique_object_representations<T>::value;
      template<class T, class U>
        inline constexpr bool reference_constructs_from_temporary_v
          = reference_constructs_from_temporary<T, U>::value;
      template<class T, class U>
        inline constexpr bool reference_converts_from_temporary_v
          = reference_converts_from_temporary<T, U>::value;
     
      // type property queries
      template<class T>
        inline constexpr size_t alignment_of_v = alignment_of<T>::value;
      template<class T>
        inline constexpr size_t rank_v = rank<T>::value;
      template<class T, unsigned I = 0>
        inline constexpr size_t extent_v = extent<T, I>::value;
     
      // type relations
      template<class T, class U>
        inline constexpr bool is_same_v = is_same<T, U>::value;
      template<class Base, class Derived>
        inline constexpr bool is_base_of_v = is_base_of<Base, Derived>::value;
      template<class Base, class Derived>
        inline constexpr bool is_virtual_base_of_v = is_virtual_base_of<Base, Derived>::value;
      template<class From, class To>
        inline constexpr bool is_convertible_v = is_convertible<From, To>::value;
      template<class From, class To>
        inline constexpr bool is_nothrow_convertible_v = is_nothrow_convertible<From, To>::value;
      template<class T, class U>
        inline constexpr bool is_layout_compatible_v = is_layout_compatible<T, U>::value;
      template<class Base, class Derived>
        inline constexpr bool is_pointer_interconvertible_base_of_v
          = is_pointer_interconvertible_base_of<Base, Derived>::value;
      template<class Fn, class... ArgTypes>
        inline constexpr bool is_invocable_v = is_invocable<Fn, ArgTypes...>::value;
      template<class R, class Fn, class... ArgTypes>
        inline constexpr bool is_invocable_r_v = is_invocable_r<R, Fn, ArgTypes...>::value;
      template<class Fn, class... ArgTypes>
        inline constexpr bool is_nothrow_invocable_v = is_nothrow_invocable<Fn, ArgTypes...>::value;
      template<class R, class Fn, class... ArgTypes>
        inline constexpr bool is_nothrow_invocable_r_v
          = is_nothrow_invocable_r<R, Fn, ArgTypes...>::value;
     
      // logical operator traits
      template<class... B>
        inline constexpr bool conjunction_v = conjunction<B...>::value;
      template<class... B>
        inline constexpr bool disjunction_v = disjunction<B...>::value;
      template<class B>
        inline constexpr bool negation_v = negation<B>::value;
     
      // member relationships
      template<class S, class M>
        constexpr bool is_pointer_interconvertible_with_class(M S::*m) noexcept;
      template<class S1, class S2, class M1, class M2>
        constexpr bool is_corresponding_member(M1 S1::*m1, M2 S2::*m2) noexcept;
     
      // constant evaluation context
      constexpr bool is_constant_evaluated() noexcept;
      consteval bool is_within_lifetime(const auto*) noexcept;
    }

#### Class template [`std::integral_constant`](../types/integral_constant.md)
    
    namespace std {
      template <class T, T v>
      struct integral_constant {
        static constexpr T value = v;
        using value_type = T;
        using type = integral_constant<T, v>;
        constexpr operator value_type() const noexcept { return value; }
        constexpr value_type operator()() const noexcept { return value; }
      };
    }
