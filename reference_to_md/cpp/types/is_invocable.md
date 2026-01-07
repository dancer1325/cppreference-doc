
  


  
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
[alignment_of](alignment_of.html "cpp/types/alignment of")(C++11)  
[rank](rank.html "cpp/types/rank")(C++11)  
[extent](extent.html "cpp/types/extent")(C++11)  
**is_invocable is_invocable_ris_nothrow_invocableis_nothrow_invocable_r**(C++17)(C++17)(C++17)(C++17)  
  
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
  
  
  
  
  


Defined in header `[<type_traits>](../header/type_traits.html "cpp/header/type traits")` |  |   
---|---|---  
template< class Fn, class... ArgTypes >  
struct is_invocable; |  (1)  |  (since C++17)  
template< class R, class Fn, class... ArgTypes >  
struct is_invocable_r; |  (2)  |  (since C++17)  
template< class Fn, class... ArgTypes >  
struct is_nothrow_invocable; |  (3)  |  (since C++17)  
template< class R, class Fn, class... ArgTypes >  
struct is_nothrow_invocable_r; |  (4)  |  (since C++17)  
| |   
  
1) Determines whether [`_INVOKE_`](../functional.html "cpp/utility/functional")([std::declval](../utility/declval.html)<Fn>(), [std::declval](../utility/declval.html)<ArgTypes>()...) is well formed when treated as an unevaluated operand.

2) Determines whether [`_INVOKE <R>_`](../functional.html "cpp/utility/functional")([std::declval](../utility/declval.html)<Fn>(), [std::declval](../utility/declval.html)<ArgTypes>()...) is well formed when treated as an unevaluated operand.

3) Determines whether [`_INVOKE_`](../functional.html "cpp/utility/functional")([std::declval](../utility/declval.html)<Fn>(), [std::declval](../utility/declval.html)<ArgTypes>()...) is well formed when treated as an unevaluated operand, and is known not to throw any exceptions.

4) Determines whether [`_INVOKE <R>_`](../functional.html "cpp/utility/functional")([std::declval](../utility/declval.html)<Fn>(), [std::declval](../utility/declval.html)<ArgTypes>()...) is well formed when treated as an unevaluated operand, and is known not to throw any exceptions.

If `Fn, R` or any type in the parameter pack `ArgTypes` is not a complete type, (possibly cv-qualified) void, or an array of unknown bound, the behavior is undefined. 

If an instantiation of a template above depends, directly or indirectly, on an incomplete type, and that instantiation could yield a different result if that type were hypothetically completed, the behavior is undefined. 

If the program adds specializations for any of the templates described on this page, the behavior is undefined. 

## Contents

  * [1 Helper variable templates](is_invocable.html#Helper_variable_templates)
  * [2 Inherited from std::integral_constant](is_invocable.html#Inherited_from_std::integral_constant)
    * [2.1 Member constants](is_invocable.html#Member_constants)
    * [2.2 Member functions](is_invocable.html#Member_functions)
    * [2.3 Member types](is_invocable.html#Member_types)
    * [2.4 Notes](is_invocable.html#Notes)
    * [2.5 Examples](is_invocable.html#Examples)
    * [2.6 See also](is_invocable.html#See_also)

  
---  
  
### Helper variable templates

Defined in header `[<type_traits>](../header/type_traits.html "cpp/header/type traits")` |  |   
---|---|---  
template< class Fn, class... ArgTypes >  
inline constexpr bool is_invocable_v =  
std::is_invocable<Fn, ArgTypes...>::value; |  (1)  |  (since C++17)  
template< class R, class Fn, class... ArgTypes >  
inline constexpr bool is_invocable_r_v =  
std::is_invocable_r<R, Fn, ArgTypes...>::value; |  (2)  |  (since C++17)  
template< class Fn, class... ArgTypes >  
inline constexpr bool is_nothrow_invocable_v =  
std::is_nothrow_invocable<Fn, ArgTypes...>::value; |  (3)  |  (since C++17)  
template< class R, class Fn, class... ArgTypes >  
inline constexpr bool is_nothrow_invocable_r_v =  
std::is_nothrow_invocable_r<R, Fn, ArgTypes...>::value; |  (4)  |  (since C++17)  
| |   
  


##  Inherited from [ std::integral_constant](integral_constant.html "cpp/types/integral constant")

###  Member constants

value[static] |  true if (for overload (1)) [`_INVOKE_`](../functional.html "cpp/utility/functional")([std::declval](../utility/declval.html)<Fn>(), [std::declval](../utility/declval.html)<ArgTypes>()...) is well formed when treated as an unevaluated operand, false otherwise   
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
`type` |  [std::integral_constant](integral_constant.html)<bool, value>  
  
### Notes

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_is_invocable`](../experimental/feature_test.html#cpp_lib_is_invocable "cpp/feature test") | [`201703L`](../compiler_support/17.html#cpp_lib_is_invocable_201703L "cpp/compiler support/17") | (C++17) | `std::is_invocable`, [std::invoke_result](result_of.html "cpp/types/result of")  
  
### Examples

Run this code
    
    
    #include <type_traits>
     
    auto func2(char) -> int (*)()
    {
        return nullptr;
    }
     
    int main()
    {
        static_assert(std::is_invocable_v<int()>);
        static_assert(not std::is_invocable_v<int(), int>);
        static_assert(std::is_invocable_r_v<int, int()>);
        static_assert(not std::is_invocable_r_v<int*, int()>);
        static_assert(std::is_invocable_r_v<void, void(int), int>);
        static_assert(not std::is_invocable_r_v<void, void(int), void>);
        static_assert(std::is_invocable_r_v<int(*)(), decltype(func2), char>);
        static_assert(not std::is_invocable_r_v<int(*)(), decltype(func2), void>);
    }

### See also

[ invokeinvoke_r](../utility/functional/invoke.html "cpp/utility/functional/invoke")(C++17)(C++23) |  invokes any [Callable](../named_req/Callable.html "cpp/named req/Callable") object with given arguments and possibility to specify return type(since C++23)   
(function template)   
---|---  
[ result_ofinvoke_result](result_of.html "cpp/types/result of")(C++11)(removed in C++20)(C++17) |  deduces the result type of invoking a callable object with a set of arguments   
(class template)   
[ declval](../utility/declval.html "cpp/utility/declval")(C++11) |  obtains a reference to an object of the template type argument for use in an unevaluated context   
(function template)   
[ invocableregular_invocable](../concepts/invocable.html "cpp/concepts/invocable")(C++20) |  specifies that a callable type can be invoked with a given set of argument types   
(concept) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
