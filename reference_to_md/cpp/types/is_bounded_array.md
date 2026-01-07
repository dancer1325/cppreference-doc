
  


  
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
**is_bounded_array**(C++20)  
[is_unbounded_array](is_unbounded_array.html "cpp/types/is unbounded array")(C++20)  
[is_scoped_enum](is_scoped_enum.html "cpp/types/is scoped enum")(C++23)  
[has_unique_object_representations](has_unique_object_representations.html "cpp/types/has unique object representations")(C++17)  
Type trait constants  
[integral_constantbool_constanttrue_typefalse_type](integral_constant.html "cpp/types/integral constant")(C++11)(C++17)(C++11)(C++11)  
Metafunctions  
[conjunction](conjunction.html "cpp/types/conjunction")(C++17)  
[disjunction](disjunction.html "cpp/types/disjunction")(C++17)  
[negation](negation.html "cpp/types/negation")(C++17)  
  
  
  
  
  
  
  
  
  
  
  


Defined in header `[<type_traits>](../header/type_traits.html "cpp/header/type traits")` |  |   
---|---|---  
template< class T >  
struct is_bounded_array; |  |  (since C++20)  
| |   
  
`std::is_bounded_array` is a [UnaryTypeTrait](../named_req/UnaryTypeTrait.html "cpp/named req/UnaryTypeTrait"). 

Checks whether `T` is an array type of known bound. Provides the member constant `value` which is equal to true, if `T` is an array type of known bound. Otherwise, `value` is equal to false. 

If the program adds specializations for `std::is_bounded_array` or `std::is_bounded_array_v`, the behavior is undefined. 

## Contents

  * [1 Template parameters](is_bounded_array.html#Template_parameters)
  * [2 Helper variable template](is_bounded_array.html#Helper_variable_template)
  * [3 Inherited from std::integral_constant](is_bounded_array.html#Inherited_from_std::integral_constant)
    * [3.1 Member constants](is_bounded_array.html#Member_constants)
    * [3.2 Member functions](is_bounded_array.html#Member_functions)
    * [3.3 Member types](is_bounded_array.html#Member_types)
    * [3.4 Possible implementation](is_bounded_array.html#Possible_implementation)
    * [3.5 Notes](is_bounded_array.html#Notes)
    * [3.6 Example](is_bounded_array.html#Example)
    * [3.7 See also](is_bounded_array.html#See_also)

  
---  
  
### Template parameters

T  |  \-  |  a type to check   
---|---|---  
  
### Helper variable template

template< class T >  
constexpr bool is_bounded_array_v = is_bounded_array<T>::value; |  |  (since C++20)  
---|---|---  
| |   
  


##  Inherited from [ std::integral_constant](integral_constant.html "cpp/types/integral constant")

###  Member constants

value[static] |  true if `T` is an array type of known bound, false otherwise   
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
    
    
    template<class T>
    struct is_bounded_array : [std::false_type](integral_constant.html) {};
     
    template<class T, [std::size_t](size_t.html) N>
    struct is_bounded_array<T[N]> : [std::true_type](integral_constant.html) {};  
  
---  
  
### Notes

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_bounded_array_traits`](../experimental/feature_test.html#cpp_lib_bounded_array_traits "cpp/feature test") | [`201902L`](../compiler_support/20.html#cpp_lib_bounded_array_traits_201902L "cpp/compiler support/20") | (C++20) | `std::is_bounded_array`, [std::is_unbounded_array](is_unbounded_array.html "cpp/types/is unbounded array")  
  
### Example

Run this code
    
    
    #include <iostream>
    #include <type_traits>
     
    #define OUT(...) std::cout << #__VA_ARGS__ << " : " << __VA_ARGS__ << '\n'
     
    class A {};
     
    int main()
    {
        [std::cout](../io/cout.html) << [std::boolalpha](../io/manip/boolalpha.html);
        OUT(std::is_bounded_array_v<A>);
        OUT(std::is_bounded_array_v<A[]>);
        OUT(std::is_bounded_array_v<A[3]>);
        OUT(std::is_bounded_array_v<float>);
        OUT(std::is_bounded_array_v<int>);
        OUT(std::is_bounded_array_v<int[]>);
        OUT(std::is_bounded_array_v<int[3]>);
    }

Output: 
    
    
    std::is_bounded_array_v<A> : false
    std::is_bounded_array_v<A[]> : false
    std::is_bounded_array_v<A[3]> : true
    std::is_bounded_array_v<float> : false
    std::is_bounded_array_v<int> : false
    std::is_bounded_array_v<int[]> : false
    std::is_bounded_array_v<int[3]> : true

### See also

[ is_array](is_array.html "cpp/types/is array")(C++11) |  checks if a type is an array type   
(class template)   
---|---  
[ is_unbounded_array](is_unbounded_array.html "cpp/types/is unbounded array")(C++20) |  checks if a type is an array type of unknown bound   
(class template)   
[ extent](extent.html "cpp/types/extent")(C++11) |  obtains the size of an array type along a specified dimension   
(class template) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
