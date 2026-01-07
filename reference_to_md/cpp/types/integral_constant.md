
  


  
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
**integral_constant bool_constanttrue_typefalse_type**(C++11)(C++17)(C++11)(C++11)  
Metafunctions  
[conjunction](conjunction.html "cpp/types/conjunction")(C++17)  
[disjunction](disjunction.html "cpp/types/disjunction")(C++17)  
[negation](negation.html "cpp/types/negation")(C++17)  
  
  
  
  
  
  
  
  
  
  
  


Defined in header `[<type_traits>](../header/type_traits.html "cpp/header/type traits")` |  |   
---|---|---  
template< class T, T v >  
struct integral_constant; |  |  (since C++11)  
| |   
  
`std::integral_constant` wraps a static constant of specified type. It is the base class for the C++ type traits. 

If the program adds specializations for `std::integral_constant`, the behavior is undefined. 

## Contents

  * [1 Helper alias templates](integral_constant.html#Helper_alias_templates)
  * [2 Specializations](integral_constant.html#Specializations)
  * [3 Member types](integral_constant.html#Member_types)
  * [4 Member constants](integral_constant.html#Member_constants)
  * [5 Member functions](integral_constant.html#Member_functions)
  * [6 std::integral_constant::operator value_type](integral_constant.html#std::integral_constant::operator_value_type)
  * [7 std::integral_constant::operator()](integral_constant.html#std::integral_constant::operator.28.29)
    * [7.1 Possible implementation](integral_constant.html#Possible_implementation)
    * [7.2 Notes](integral_constant.html#Notes)
    * [7.3 Example](integral_constant.html#Example)
    * [7.4 See also](integral_constant.html#See_also)

  
---  
  
### Helper alias templates

A helper alias template `std::bool_constant` is defined for the common case where `T` is bool. 

template< bool B >  
using bool_constant = integral_constant<bool, B>; |  |  (since C++17)  
---|---|---  
| |   
  
### Specializations

Two typedefs for the common case where `T` is bool are provided: 

Defined in header `[<type_traits>](../header/type_traits.html "cpp/header/type traits")`  
---  
Name  |  Definition   
`true_type` |  std::integral_constant<bool, true>  
`false_type` |  std::integral_constant<bool, false>  
  
### Member types

Name  |  Definition   
---|---  
`value_type` |  T  
`type` |  std::integral_constant<T, v>  
  
### Member constants

Name  |  Value   
---|---  
constexpr T value[static] |  v   
(public static member constant)  
  
### Member functions

** operator value_type** |  returns the wrapped value   
(public member function)   
---|---  
** operator()**(C++14) |  returns the wrapped value   
(public member function) &action=edit)  
  
##  std::integral_constant::operator value_type

constexpr operator value_type() const noexcept; |  |   
---|---|---  
| |   
  
Conversion function. Returns the wrapped value. 

##  std::integral_constant::operator()

constexpr value_type operator()() const noexcept; |  |  (since C++14)  
---|---|---  
| |   
  
Returns the wrapped value. This function enables `std::integral_constant` to serve as a source of compile-time function objects. 

### Possible implementation
    
    
    template<class T, T v>
    struct integral_constant
    {
        static constexpr T value = v;
        using value_type = T;
        using type = integral_constant; // using injected-class-name
        constexpr operator value_type() const noexcept { return value; }
        constexpr value_type operator()() const noexcept { return value; } // since c++14
    };  
  
---  
  
### Notes

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_integral_constant_callable`](../experimental/feature_test.html#cpp_lib_integral_constant_callable "cpp/feature test") | [`201304L`](../compiler_support/14.html#cpp_lib_integral_constant_callable_201304L "cpp/compiler support/14") | (C++14) | `std::integral_constant::operator()`  
[`__cpp_lib_bool_constant`](../experimental/feature_test.html#cpp_lib_bool_constant "cpp/feature test") | [`201505L`](../compiler_support/17.html#cpp_lib_bool_constant_201505L "cpp/compiler support/17") | (C++17) | `std::bool_constant`  
  
### Example

Run this code
    
    
    #include <type_traits>
     
    using two_t = std::integral_constant<int, 2>;
    using four_t = std::integral_constant<int, 4>;
     
    static_assert(not [std::is_same_v](is_same.html)<two_t, four_t>);
    static_assert(two_t::value * 2 == four_t::value, "2*2 != 4");
    static_assert(two_t() << 1 == four_t() >> 0, "2*2 != 4");
     
    enum class E{ e1, e2 };
    using c1 = std::integral_constant<E, E::e1>;
    using c2 = std::integral_constant<E, E::e2>;
    static_assert(c1::value != E::e2);
    static_assert(c1() == E::e1);
    static_assert([std::is_same_v](is_same.html)<c2, c2>);
     
    int main() {}

### See also

[ integer_sequence](../utility/integer_sequence.html "cpp/utility/integer sequence")(C++14) |  implements compile-time sequence of integers   
(class template)   
---|---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
