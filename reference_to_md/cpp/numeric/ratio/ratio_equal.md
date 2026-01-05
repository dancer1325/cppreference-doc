[C++](../../../cpp.html "cpp")

[Compiler support](../../compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](../../freestanding.html "cpp/freestanding")  
[Language](../../language.html "cpp/language")  
[Standard library](../../standard_library.html "cpp/standard library")  
[Standard library headers](../../headers.html "cpp/header")  
[Named requirements](../../iterator/concepts.html "cpp/named req")  
[Feature test macros](../../experimental/feature_test.html "cpp/feature test") (C++20)  
[Language support library](../../utility.html#Language_support "cpp/utility")  
[Concepts library](../../concepts.html "cpp/concepts") (C++20)  
[Diagnostics library](../../error.html "cpp/error")  
[Memory management library](../../memory.html "cpp/memory")  
[Metaprogramming library](../../meta.html "cpp/meta") (C++11)  
[General utilities library](../../utility.html "cpp/utility")  
[Containers library](../../container.html "cpp/container")  
[Iterators library](../../iterator.html "cpp/iterator")  
[Ranges library](../../ranges.html "cpp/ranges") (C++20)  
[Algorithms library](../../algorithm.html "cpp/algorithm")  
[Strings library](../../string.html "cpp/string")  
[Text processing library](../../text.html "cpp/text")  
[Numerics library](../../numeric.html "cpp/numeric")  
[Date and time library](../../chrono.html "cpp/chrono")  
[Input/output library](../../io.html "cpp/io")  
[Filesystem library](../../filesystem.html "cpp/filesystem") (C++17)  
[Concurrency support library](../../atomic.html "cpp/thread") (C++11)  
[Execution control library](../../experimental/execution.html "cpp/execution") (C++26)  
[Technical specifications](../../experimental.html "cpp/experimental")  
[Symbols index](../../symbol_index.html "cpp/symbol index")  
[External libraries](../../links/libs.html "cpp/links/libs")  
  


[Metaprogramming library](../../meta.html "cpp/meta")

Type traits  
---  
| Type categories  
---  
[is_void](../../types/is_void.html "cpp/types/is void")(C++11)  
[is_null_pointer](../../types/is_null_pointer.html "cpp/types/is null pointer")(C++11)(DR*)  
| [is_array](../../types/is_array.html "cpp/types/is array")(C++11)  
---  
[is_pointer](../../types/is_pointer.html "cpp/types/is pointer")(C++11)  
[is_enum](../../types/is_enum.html "cpp/types/is enum")(C++11)  
[is_union](../../types/is_union.html "cpp/types/is union")(C++11)  
[is_class](../../types/is_class.html "cpp/types/is class")(C++11)  
[is_function](../../types/is_function.html "cpp/types/is function")(C++11)  
[is_reference](../../types/is_reference.html "cpp/types/is reference")(C++11)` `  
  
| [is_object](../../types/is_object.html "cpp/types/is object")(C++11)  
---  
[is_scalar](../../types/is_scalar.html "cpp/types/is scalar")(C++11)  
[is_compound](../../types/is_compound.html "cpp/types/is compound")(C++11)  
[is_integral](../../types/is_integral.html "cpp/types/is integral")(C++11)  
[is_floating_point](../../types/is_floating_point.html "cpp/types/is floating point")(C++11)` `  
[is_fundamental](../../types/is_fundamental.html "cpp/types/is fundamental")(C++11)  
[is_arithmetic](../../types/is_arithmetic.html "cpp/types/is arithmetic")(C++11)  
  
[is_lvalue_reference](../../types/is_lvalue_reference.html "cpp/types/is lvalue reference")(C++11)  
[is_rvalue_reference](../../types/is_rvalue_reference.html "cpp/types/is rvalue reference")(C++11)  
[is_member_pointer](../../types/is_member_pointer.html "cpp/types/is member pointer")(C++11)  
[is_member_object_pointer](../../types/is_member_object_pointer.html "cpp/types/is member object pointer")(C++11)  
[is_member_function_pointer](../../types/is_member_function_pointer.html "cpp/types/is member function pointer")(C++11)  
Type properties  
[is_const](../../types/is_const.html "cpp/types/is const")(C++11)  
[is_volatile](../../types/is_volatile.html "cpp/types/is volatile")(C++11)  
[is_empty](../../types/is_empty.html "cpp/types/is empty")(C++11)  
[is_polymorphic](../../types/is_polymorphic.html "cpp/types/is polymorphic")(C++11)  
[is_final](../../types/is_final.html "cpp/types/is final")(C++14)  
[is_abstract](../../types/is_abstract.html "cpp/types/is abstract")(C++11)  
[is_aggregate](../../types/is_aggregate.html "cpp/types/is aggregate")(C++17)  
[is_implicit_lifetime](../../types/is_implicit_lifetime.html "cpp/types/is implicit lifetime")(C++23)  
[is_trivial](../../types/is_trivial.html "cpp/types/is trivial")(C++11)(deprecated in C++26)  
[is_trivially_copyable](../../types/is_trivially_copyable.html "cpp/types/is trivially copyable")(C++11)  
[is_standard_layout](../../types/is_standard_layout.html "cpp/types/is standard layout")(C++11)  
[is_literal_type](../../types/is_literal_type.html "cpp/types/is literal type")(C++11)(until C++20*)  
[is_pod](../../types/is_pod.html "cpp/types/is pod")(C++11)(deprecated in C++20)  
[is_signed](../../types/is_signed.html "cpp/types/is signed")(C++11)  
[is_unsigned](../../types/is_unsigned.html "cpp/types/is unsigned")(C++11)  
[is_bounded_array](../../types/is_bounded_array.html "cpp/types/is bounded array")(C++20)  
[is_unbounded_array](../../types/is_unbounded_array.html "cpp/types/is unbounded array")(C++20)  
[is_scoped_enum](../../types/is_scoped_enum.html "cpp/types/is scoped enum")(C++23)  
[has_unique_object_representations](../../types/has_unique_object_representations.html "cpp/types/has unique object representations")(C++17)  
Type trait constants  
[integral_constantbool_constanttrue_typefalse_type](../../types/integral_constant.html "cpp/types/integral constant")(C++11)(C++17)(C++11)(C++11)  
Metafunctions  
[conjunction](../../types/conjunction.html "cpp/types/conjunction")(C++17)  
[disjunction](../../types/disjunction.html "cpp/types/disjunction")(C++17)  
[negation](../../types/negation.html "cpp/types/negation")(C++17)  
  
| Supported operations  
---  
| [is_constructibleis_trivially_constructibleis_nothrow_constructible](../../types/is_constructible.html "cpp/types/is constructible")(C++11)(C++11)(C++11)  
---  
[is_default_constructibleis_trivially_default_constructibleis_nothrow_default_constructible](../../types/is_default_constructible.html "cpp/types/is default constructible")(C++11)(C++11)(C++11)  
[is_copy_constructibleis_trivially_copy_constructibleis_nothrow_copy_constructible](../../types/is_copy_constructible.html "cpp/types/is copy constructible")(C++11)(C++11)(C++11)  
[is_move_constructibleis_trivially_move_constructibleis_nothrow_move_constructible](../../types/is_move_constructible.html "cpp/types/is move constructible")(C++11)(C++11)(C++11)  
[is_assignableis_trivially_assignableis_nothrow_assignable](../../types/is_assignable.html "cpp/types/is assignable")(C++11)(C++11)(C++11)  
  
| [is_copy_assignableis_trivially_copy_assignableis_nothrow_copy_assignable](../../types/is_copy_assignable.html "cpp/types/is copy assignable")(C++11)(C++11)(C++11)  
---  
[is_move_assignableis_trivially_move_assignableis_nothrow_move_assignable](../../types/is_move_assignable.html "cpp/types/is move assignable")(C++11)(C++11)(C++11)  
[is_destructibleis_trivially_destructibleis_nothrow_destructible](../../types/is_destructible.html "cpp/types/is destructible")(C++11)(C++11)(C++11)  
[has_virtual_destructor](../../types/has_virtual_destructor.html "cpp/types/has virtual destructor")(C++11)  
[is_swappable_withis_swappableis_nothrow_swappable_withis_nothrow_swappable](../../types/is_swappable.html "cpp/types/is swappable")(C++17)(C++17)(C++17)(C++17)  
  
  
  
Relationships and property queries  
| [is_same](../../types/is_same.html "cpp/types/is same")(C++11)  
---  
[is_convertibleis_nothrow_convertible](../../types/is_convertible.html "cpp/types/is convertible")(C++11)(C++20)  
[is_layout_compatible](../../types/is_layout_compatible.html "cpp/types/is layout compatible")(C++20)  
[is_pointer_interconvertible_base_of](../../types/is_pointer_interconvertible_base_of.html "cpp/types/is pointer interconvertible base of")(C++20)  
[is_pointer_interconvertible_with_class](../../types/is_pointer_interconvertible_with_class.html "cpp/types/is pointer interconvertible with class")(C++20)` `  
[is_corresponding_member](../../types/is_corresponding_member.html "cpp/types/is corresponding member")(C++20)  
[reference_constructs_from_temporary](../../types/reference_constructs_from_temporary.html "cpp/types/reference constructs from temporary")(C++23)  
[reference_converts_from_temporary](../../types/reference_converts_from_temporary.html "cpp/types/reference converts from temporary")(C++23)  
  
| [is_base_of](../../types/is_base_of.html "cpp/types/is base of")(C++11)  
---  
[is_virtual_base_of](../../types/is_virtual_base_of.html "cpp/types/is virtual base of")(C++26)  
[alignment_of](../../types/alignment_of.html "cpp/types/alignment of")(C++11)  
[rank](../../types/rank.html "cpp/types/rank")(C++11)  
[extent](../../types/extent.html "cpp/types/extent")(C++11)  
[is_invocableis_invocable_ris_nothrow_invocableis_nothrow_invocable_r](../../types/is_invocable.html "cpp/types/is invocable")(C++17)(C++17)(C++17)(C++17)  
  
Type modifications  
| [remove_cvremove_constremove_volatile](../../types/remove_cv.html "cpp/types/remove cv")(C++11)(C++11)(C++11)  
---  
[add_cvadd_constadd_volatile](../../types/add_cv.html "cpp/types/add cv")(C++11)(C++11)(C++11)  
[make_signed](../../types/make_signed.html "cpp/types/make signed")(C++11)  
[make_unsigned](../../types/make_unsigned.html "cpp/types/make unsigned")(C++11)  
  
| [remove_reference](../../types/remove_reference.html "cpp/types/remove reference")(C++11)  
---  
[add_lvalue_referenceadd_rvalue_reference](../../types/add_reference.html "cpp/types/add reference")(C++11)(C++11)  
[remove_pointer](../../types/remove_pointer.html "cpp/types/remove pointer")(C++11)  
[add_pointer](../../types/add_pointer.html "cpp/types/add pointer")(C++11)  
[remove_extent](../../types/remove_extent.html "cpp/types/remove extent")(C++11)  
[remove_all_extents](../../types/remove_all_extents.html "cpp/types/remove all extents")(C++11)  
  
  
  
Type transformations  
| [aligned_storage](../../types/aligned_storage.html "cpp/types/aligned storage")(C++11)(deprecated in C++23)  
---  
[aligned_union](../../types/aligned_union.html "cpp/types/aligned union")(C++11)(deprecated in C++23)  
[decay](../../types/decay.html "cpp/types/decay")(C++11)  
[remove_cvref](../../types/remove_cvref.html "cpp/types/remove cvref")(C++20)  
[result_ofinvoke_result](../../types/result_of.html "cpp/types/result of")(C++11)(until C++20*)(C++17)  
  
  
  
| [conditional](../../types/conditional.html "cpp/types/conditional")(C++11)  
---  
[common_type](../../types/common_type.html "cpp/types/common type")(C++11)  
[common_reference](../../types/common_reference.html "cpp/types/common reference")(C++20)  
[underlying_type](../../types/underlying_type.html "cpp/types/underlying type")(C++11)  
[type_identity](../../types/type_identity.html "cpp/types/type identity")(C++20)  
[enable_if](../../types/enable_if.html "cpp/types/enable if")(C++11)  
[void_t](../../types/void_t.html "cpp/types/void t")(C++17)  
  
[Compile-time rational arithmetic](../../utility/ratio.html "cpp/numeric/ratio")  
Compile-time integer sequences  
[integer_sequence](../../utility/integer_sequence.html "cpp/utility/integer sequence")(C++14)  
  


[Compile time rational arithmetic](../../utility/ratio.html "cpp/numeric/ratio")

[ratio](ratio.html "cpp/numeric/ratio/ratio")(C++11)  
---  
Arithmetic  
[ratio_add](ratio_add.html "cpp/numeric/ratio/ratio add")(C++11)  
[ratio_subtract](ratio_subtract.html "cpp/numeric/ratio/ratio subtract")(C++11)  
[ratio_multiply](ratio_multiply.html "cpp/numeric/ratio/ratio multiply")(C++11)  
[ratio_divide](ratio_divide.html "cpp/numeric/ratio/ratio divide")(C++11)  
Comparison  
**ratio_equal**(C++11)  
[ratio_not_equal](ratio_not_equal.html "cpp/numeric/ratio/ratio not equal")(C++11)  
[ratio_less](ratio_less.html "cpp/numeric/ratio/ratio less")(C++11)  
[ratio_less_equal](ratio_less_equal.html "cpp/numeric/ratio/ratio less equal")(C++11)  
[ratio_greater](ratio_greater.html "cpp/numeric/ratio/ratio greater")(C++11)  
[ratio_greater_equal](ratio_greater_equal.html "cpp/numeric/ratio/ratio greater equal")(C++11)  
  


Defined in header `[<ratio>](../../header/ratio.html "cpp/header/ratio")` |  |   
---|---|---  
template< class R1, class R2 >  
struct ratio_equal : [std::integral_constant](../../types/integral_constant.html)<bool, /* see below */> { }; |  |  (since C++11)  
| |   
  
If the ratios `R1` and `R2` are equal, provides the member constant value equal true. Otherwise, value is false. 

## Contents

  * [1 Helper variable template](ratio_equal.html#Helper_variable_template)
  * [2 Inherited from std::integral_constant](ratio_equal.html#Inherited_from_std::integral_constant)
    * [2.1 Member constants](ratio_equal.html#Member_constants)
    * [2.2 Member functions](ratio_equal.html#Member_functions)
    * [2.3 Member types](ratio_equal.html#Member_types)
    * [2.4 Possible implementation](ratio_equal.html#Possible_implementation)
    * [2.5 Example](ratio_equal.html#Example)
    * [2.6 See also](ratio_equal.html#See_also)

  
---  
  
### Helper variable template

template< class R1, class R2 >  
constexpr bool ratio_equal_v = ratio_equal<R1, R2>::value; |  |  (since C++17)  
---|---|---  
| |   
  


##  Inherited from [ std::integral_constant](../../types/integral_constant.html "cpp/types/integral constant")

###  Member constants

value[static] |  true if R1::num == R2::num && R1::den == R2::den, false otherwise   
(public static member constant)  
---|---  
  
###  Member functions

operator bool |  converts the object to bool, returns value   
(public member function)  
---|---  
operator()(C++14) |  returns value   
(public member function)  
  
###  Member types

Type  |  Definition   
---|---  
`value_type` |  bool  
`type` |  [std::integral_constant](../../types/integral_constant.html)<bool, value>  
  
### Possible implementation
    
    
    template< class R1, class R2 >
    struct ratio_equal : public [std::integral_constant](../../types/integral_constant.html) <
                                     bool,
                                     R1::num == R2::num && R1::den == R2::den
                                > {};  
  
---  
  
### Example

Run this code
    
    
    #include <iostream>
    #include <ratio>
     
    int main()
    {
        constexpr bool equ = std::ratio_equal_v<[std::ratio](ratio.html)<2,3>,
                                                [std::ratio](ratio.html)<6,9>>;
        static_assert(equ);
        [std::cout](../../io/cout.html) << "2/3 " << (equ ? "==" : "!=") << " 6/9\n";
    }

Output: 
    
    
    2/3 == 6/9

### See also

[ ratio_not_equal](ratio_not_equal.html "cpp/numeric/ratio/ratio not equal")(C++11) |  compares two `ratio` objects for inequality at compile-time   
(class template)   
---|---
