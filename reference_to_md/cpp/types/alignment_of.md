
  


[Metaprogramming library](../meta.html "cpp/meta")

Type traits  
---  
| Type categories  
---  
[is_void](is_void.html "cpp/types/is void")(C++11)  
[is_null_pointer](is_null_pointer.html "cpp/types/is null pointer")(C++11)(DR*)  
| [is_array](is_array.html "cpp/types/is array")(C++11)  
---  
[is_pointer](is_pointer.html "cpp/types/is pointer")(C++11)  
[is_enum](is_enum.html "cpp/types/is enum")(C++11)  
[is_union](is_union.html "cpp/types/is union")(C++11)  
[is_class](is_class.html "cpp/types/is class")(C++11)  
[is_function](is_function.html "cpp/types/is function")(C++11)  
[is_reference](is_reference.html "cpp/types/is reference")(C++11)` `  
  
| [is_object](is_object.html "cpp/types/is object")(C++11)  
---  
[is_scalar](is_scalar.html "cpp/types/is scalar")(C++11)  
[is_compound](is_compound.html "cpp/types/is compound")(C++11)  
[is_integral](is_integral.html "cpp/types/is integral")(C++11)  
[is_floating_point](is_floating_point.html "cpp/types/is floating point")(C++11)` `  
[is_fundamental](is_fundamental.html "cpp/types/is fundamental")(C++11)  
[is_arithmetic](is_arithmetic.html "cpp/types/is arithmetic")(C++11)  
  
[is_lvalue_reference](is_lvalue_reference.html "cpp/types/is lvalue reference")(C++11)  
[is_rvalue_reference](is_rvalue_reference.html "cpp/types/is rvalue reference")(C++11)  
[is_member_pointer](is_member_pointer.html "cpp/types/is member pointer")(C++11)  
[is_member_object_pointer](is_member_object_pointer.html "cpp/types/is member object pointer")(C++11)  
[is_member_function_pointer](is_member_function_pointer.html "cpp/types/is member function pointer")(C++11)  
Type properties  
[is_const](is_const.html "cpp/types/is const")(C++11)  
[is_volatile](is_volatile.html "cpp/types/is volatile")(C++11)  
[is_empty](is_empty.html "cpp/types/is empty")(C++11)  
[is_polymorphic](is_polymorphic.html "cpp/types/is polymorphic")(C++11)  
[is_final](is_final.html "cpp/types/is final")(C++14)  
[is_abstract](is_abstract.html "cpp/types/is abstract")(C++11)  
[is_aggregate](is_aggregate.html "cpp/types/is aggregate")(C++17)  
[is_implicit_lifetime](is_implicit_lifetime.html "cpp/types/is implicit lifetime")(C++23)  
[is_trivial](is_trivial.html "cpp/types/is trivial")(C++11)(deprecated in C++26)  
[is_trivially_copyable](is_trivially_copyable.html "cpp/types/is trivially copyable")(C++11)  
[is_standard_layout](is_standard_layout.html "cpp/types/is standard layout")(C++11)  
[is_literal_type](is_literal_type.html "cpp/types/is literal type")(C++11)(until C++20*)  
[is_pod](is_pod.html "cpp/types/is pod")(C++11)(deprecated in C++20)  
[is_signed](is_signed.html "cpp/types/is signed")(C++11)  
[is_unsigned](is_unsigned.html "cpp/types/is unsigned")(C++11)  
[is_bounded_array](is_bounded_array.html "cpp/types/is bounded array")(C++20)  
[is_unbounded_array](is_unbounded_array.html "cpp/types/is unbounded array")(C++20)  
[is_scoped_enum](is_scoped_enum.html "cpp/types/is scoped enum")(C++23)  
[has_unique_object_representations](has_unique_object_representations.html "cpp/types/has unique object representations")(C++17)  
Type trait constants  
[integral_constantbool_constanttrue_typefalse_type](integral_constant.html "cpp/types/integral constant")(C++11)(C++17)(C++11)(C++11)  
Metafunctions  
[conjunction](conjunction.html "cpp/types/conjunction")(C++17)  
[disjunction](disjunction.html "cpp/types/disjunction")(C++17)  
[negation](negation.html "cpp/types/negation")(C++17)  
  
| Supported operations  
---  
| [is_constructibleis_trivially_constructibleis_nothrow_constructible](is_constructible.html "cpp/types/is constructible")(C++11)(C++11)(C++11)  
---  
[is_default_constructibleis_trivially_default_constructibleis_nothrow_default_constructible](is_default_constructible.html "cpp/types/is default constructible")(C++11)(C++11)(C++11)  
[is_copy_constructibleis_trivially_copy_constructibleis_nothrow_copy_constructible](is_copy_constructible.html "cpp/types/is copy constructible")(C++11)(C++11)(C++11)  
[is_move_constructibleis_trivially_move_constructibleis_nothrow_move_constructible](is_move_constructible.html "cpp/types/is move constructible")(C++11)(C++11)(C++11)  
[is_assignableis_trivially_assignableis_nothrow_assignable](is_assignable.html "cpp/types/is assignable")(C++11)(C++11)(C++11)  
  
| [is_copy_assignableis_trivially_copy_assignableis_nothrow_copy_assignable](is_copy_assignable.html "cpp/types/is copy assignable")(C++11)(C++11)(C++11)  
---  
[is_move_assignableis_trivially_move_assignableis_nothrow_move_assignable](is_move_assignable.html "cpp/types/is move assignable")(C++11)(C++11)(C++11)  
[is_destructibleis_trivially_destructibleis_nothrow_destructible](is_destructible.html "cpp/types/is destructible")(C++11)(C++11)(C++11)  
[has_virtual_destructor](has_virtual_destructor.html "cpp/types/has virtual destructor")(C++11)  
[is_swappable_withis_swappableis_nothrow_swappable_withis_nothrow_swappable](is_swappable.html "cpp/types/is swappable")(C++17)(C++17)(C++17)(C++17)  
  
  
  
Relationships and property queries  
| [is_same](is_same.html "cpp/types/is same")(C++11)  
---  
[is_convertibleis_nothrow_convertible](is_convertible.html "cpp/types/is convertible")(C++11)(C++20)  
[is_layout_compatible](is_layout_compatible.html "cpp/types/is layout compatible")(C++20)  
[is_pointer_interconvertible_base_of](is_pointer_interconvertible_base_of.html "cpp/types/is pointer interconvertible base of")(C++20)  
[is_pointer_interconvertible_with_class](is_pointer_interconvertible_with_class.html "cpp/types/is pointer interconvertible with class")(C++20)` `  
[is_corresponding_member](is_corresponding_member.html "cpp/types/is corresponding member")(C++20)  
[reference_constructs_from_temporary](reference_constructs_from_temporary.html "cpp/types/reference constructs from temporary")(C++23)  
[reference_converts_from_temporary](reference_converts_from_temporary.html "cpp/types/reference converts from temporary")(C++23)  
  
| [is_base_of](is_base_of.html "cpp/types/is base of")(C++11)  
---  
[is_virtual_base_of](is_virtual_base_of.html "cpp/types/is virtual base of")(C++26)  
**alignment_of**(C++11)  
[rank](rank.html "cpp/types/rank")(C++11)  
[extent](extent.html "cpp/types/extent")(C++11)  
[is_invocableis_invocable_ris_nothrow_invocableis_nothrow_invocable_r](is_invocable.html "cpp/types/is invocable")(C++17)(C++17)(C++17)(C++17)  
  
Type modifications  
| [remove_cvremove_constremove_volatile](remove_cv.html "cpp/types/remove cv")(C++11)(C++11)(C++11)  
---  
[add_cvadd_constadd_volatile](add_cv.html "cpp/types/add cv")(C++11)(C++11)(C++11)  
[make_signed](make_signed.html "cpp/types/make signed")(C++11)  
[make_unsigned](make_unsigned.html "cpp/types/make unsigned")(C++11)  
  
| [remove_reference](remove_reference.html "cpp/types/remove reference")(C++11)  
---  
[add_lvalue_referenceadd_rvalue_reference](add_reference.html "cpp/types/add reference")(C++11)(C++11)  
[remove_pointer](remove_pointer.html "cpp/types/remove pointer")(C++11)  
[add_pointer](add_pointer.html "cpp/types/add pointer")(C++11)  
[remove_extent](remove_extent.html "cpp/types/remove extent")(C++11)  
[remove_all_extents](remove_all_extents.html "cpp/types/remove all extents")(C++11)  
  
  
  
Type transformations  
| [aligned_storage](aligned_storage.html "cpp/types/aligned storage")(C++11)(deprecated in C++23)  
---  
[aligned_union](aligned_union.html "cpp/types/aligned union")(C++11)(deprecated in C++23)  
[decay](decay.html "cpp/types/decay")(C++11)  
[remove_cvref](remove_cvref.html "cpp/types/remove cvref")(C++20)  
[result_ofinvoke_result](result_of.html "cpp/types/result of")(C++11)(until C++20*)(C++17)  
  
  
  
| [conditional](conditional.html "cpp/types/conditional")(C++11)  
---  
[common_type](common_type.html "cpp/types/common type")(C++11)  
[common_reference](common_reference.html "cpp/types/common reference")(C++20)  
[underlying_type](underlying_type.html "cpp/types/underlying type")(C++11)  
[type_identity](type_identity.html "cpp/types/type identity")(C++20)  
[enable_if](enable_if.html "cpp/types/enable if")(C++11)  
[void_t](void_t.html "cpp/types/void t")(C++17)  
  
[Compile-time rational arithmetic](../utility/ratio.html "cpp/numeric/ratio")  
Compile-time integer sequences  
[integer_sequence](../utility/integer_sequence.html "cpp/utility/integer sequence")(C++14)  
  


Defined in header `[<type_traits>](../header/type_traits.html "cpp/header/type traits")` |  |   
---|---|---  
template< class T >  
struct alignment_of; |  |  (since C++11)  
| |   
  
Provides the member constant value equal to the [alignment requirement](../language/objects.html#Alignment "cpp/language/object") of the type `T`, as if obtained by an [`alignof`](../language/alignof.html "cpp/language/alignof") expression. If `T` is an array type, returns the alignment requirements of the element type. If `T` is a reference type, returns the alignment requirements of the type referred to. 

If alignof(T) is not a valid expression, the behavior is undefined. 

If the program adds specializations for `std::alignment_of` or `std::alignment_of_v`(since C++17), the behavior is undefined. 

## Contents

  * [1 Helper variable template](alignment_of.html#Helper_variable_template)
  * [2 Inherited from std::integral_constant](alignment_of.html#Inherited_from_std::integral_constant)
    * [2.1 Member constants](alignment_of.html#Member_constants)
    * [2.2 Member functions](alignment_of.html#Member_functions)
    * [2.3 Member types](alignment_of.html#Member_types)
    * [2.4 Possible implementation](alignment_of.html#Possible_implementation)
    * [2.5 Notes](alignment_of.html#Notes)
    * [2.6 Example](alignment_of.html#Example)
    * [2.7 See also](alignment_of.html#See_also)

  
---  
  
### Helper variable template 

template< class T >  
constexpr [std::size_t](size_t.html) alignment_of_v = alignment_of<T>::value; |  |  (since C++17)  
---|---|---  
| |   
  
##  Inherited from [ std::integral_constant](integral_constant.html "cpp/types/integral constant")

###  Member constants

value[static] |  alignof(T)   
(public static member constant)  
---|---  
  
###  Member functions

operator std::size_t |  converts the object to [std::size_t](size_t.html), returns value   
(public member function)  
---|---  
operator()(C++14) |  returns value   
(public member function)  
  
###  Member types

Type  |  Definition   
---|---  
`value_type` |  [std::size_t](size_t.html)  
`type` |  [std::integral_constant](integral_constant.html)<[std::size_t](size_t.html), value>  
  
### Possible implementation
    
    
    template<class T>
    struct alignment_of : [std::integral_constant](integral_constant.html)<[std::size_t](size_t.html), alignof(T)> {};  
  
---  
  
### Notes

This type trait predates the [`alignof`](../language/alignof.html "cpp/language/alignof") keyword, which can be used to obtain the same value with less verbosity. 

### Example

Run this code
    
    
    #include <cstdint>
    #include <iostream>
    #include <type_traits>
     
    struct A {};
    struct B
    {
        [std::int8_t](integer.html) p;
        [std::int16_t](integer.html) q;
    };
     
    int main()
    {
        [std::cout](../io/cout.html) << std::alignment_of<A>::value << ' ';
        [std::cout](../io/cout.html) << std::alignment_of<B>::value << ' ';
        [std::cout](../io/cout.html) << std::alignment_of<int>() << ' '; // alt syntax
        [std::cout](../io/cout.html) << std::alignment_of_v<double> << '\n'; // c++17 alt syntax
    }

Possible output: 
    
    
    1 2 4 8

### See also

`**[alignof](../language/alignof.html "cpp/language/alignof")**` (C++11) |  queries alignment requirements of a type  
(operator)  
---|---  
`**[alignas](../language/alignas.html "cpp/language/alignas")**` (C++11) |  specifies that the storage for the variable should be aligned by specific amount  
(specifier)  
[ aligned_storage](aligned_storage.html "cpp/types/aligned storage")(since C++11)(deprecated in C++23) |  defines the type suitable for use as uninitialized storage for types of given size   
(class template)   
[ aligned_union](aligned_union.html "cpp/types/aligned union")(since C++11)(deprecated in C++23) |  defines the type suitable for use as uninitialized storage for all given types   
(class template)   
[ max_align_t](max_align_t.html "cpp/types/max align t")(C++11) |  trivial type with alignment requirement as great as any other scalar type   
(typedef) 
