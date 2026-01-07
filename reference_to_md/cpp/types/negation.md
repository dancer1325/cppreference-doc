
  


  
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
**negation**(C++17)  
  
  
  
  
  
  
  
  
  
  
  


Defined in header `[<type_traits>](../header/type_traits.html "cpp/header/type traits")` |  |   
---|---|---  
template< class B >  
struct negation; |  |  (since C++17)  
| |   
  
Forms the [logical negation](https://en.wikipedia.org/wiki/Negation "enwiki:Negation") of the type trait B. 

The type std::negation<B> is a [UnaryTypeTrait](../named_req/UnaryTypeTrait.html "cpp/named req/UnaryTypeTrait") with a base characteristic of [std::bool_constant](integral_constant.html)<!bool(B::value)>. 

If the program adds specializations for `std::negation` or `std::negation_v`, the behavior is undefined. 

## Contents

  * [1 Template parameters](negation.html#Template_parameters)
  * [2 Helper variable template](negation.html#Helper_variable_template)
  * [3 Inherited from std::integral_constant](negation.html#Inherited_from_std::integral_constant)
    * [3.1 Member constants](negation.html#Member_constants)
    * [3.2 Member functions](negation.html#Member_functions)
    * [3.3 Member types](negation.html#Member_types)
    * [3.4 Possible implementation](negation.html#Possible_implementation)
    * [3.5 Notes](negation.html#Notes)
    * [3.6 Example](negation.html#Example)
    * [3.7 See also](negation.html#See_also)

  
---  
  
### Template parameters

B  |  \-  |  any type such that the expression bool(B::value) is a valid constant expression   
---|---|---  
  
### Helper variable template

template< class B >  
constexpr bool negation_v = negation<B>::value; |  |  (since C++17)  
---|---|---  
| |   
  


##  Inherited from [ std::integral_constant](integral_constant.html "cpp/types/integral constant")

###  Member constants

value[static] |  true if `B` has a member ::value that is false when explicitly converted to bool, false otherwise   
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
  
### Possible implementation
    
    
    template<class B>
    struct negation : [std::bool_constant](integral_constant.html)<!bool(B::value)> { };  
  
---  
  
### Notes

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_logical_traits`](../experimental/feature_test.html#cpp_lib_logical_traits "cpp/feature test") | [`201510L`](../compiler_support/17.html#cpp_lib_logical_traits_201510L "cpp/compiler support/17") | (C++17) | [Logical operator type traits](../meta.html#Operations_on_traits "cpp/meta")  
  
### Example

Run this code
    
    
    #include <type_traits>
     
    static_assert(
        [std::is_same](is_same.html)<
            [std::bool_constant](integral_constant.html)<false>,
            typename std::negation<[std::bool_constant](integral_constant.html)<true>>::type>::value,
        "");
    static_assert(
        [std::is_same](is_same.html)<
            [std::bool_constant](integral_constant.html)<true>,
            typename std::negation<[std::bool_constant](integral_constant.html)<false>>::type>::value,
        "");
     
    static_assert(std::negation_v<[std::bool_constant](integral_constant.html)<true>> == false);
    static_assert(std::negation_v<[std::bool_constant](integral_constant.html)<false>> == true);
     
    int main() {}

### See also

[ conjunction](conjunction.html "cpp/types/conjunction")(C++17) |  variadic logical AND metafunction   
(class template)   
---|---  
[ disjunction](disjunction.html "cpp/types/disjunction")(C++17) |  variadic logical OR metafunction   
(class template)   
[ integral_constantbool_constant](integral_constant.html "cpp/types/integral constant")(C++11)(C++17) |  compile-time constant of specified type with specified value   
(class template) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
