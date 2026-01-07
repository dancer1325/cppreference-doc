
  


  
---  
[is_scalar](is_scalar.html "cpp/types/is scalar")(C++11)  
[is_compound](is_compound.html "cpp/types/is compound")(C++11)  
[is_integral](is_integral.html "cpp/types/is integral")(C++11)  
[is_floating_point](is_floating_point.html "cpp/types/is floating point")(C++11)` `  
**is_fundamental**(C++11)  
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
  
  
  
  
  
  
  
  
  
  
  


Defined in header `[<type_traits>](../header/type_traits.html "cpp/header/type traits")` |  |   
---|---|---  
template< class T >  
struct is_fundamental; |  |  (since C++11)  
| |   
  
`std::is_fundamental` is a [UnaryTypeTrait](../named_req/UnaryTypeTrait.html "cpp/named req/UnaryTypeTrait"). 

If `T` is a [fundamental type](../language/types.html "cpp/language/types") (that is, arithmetic type, void, or nullptr_t), provides the member constant value equal true. For any other type, value is false. 

If the program adds specializations for `std::is_fundamental` or `std::is_fundamental_v`, the behavior is undefined. 

## Contents

  * [1 Template parameters](is_fundamental.html#Template_parameters)
  * [2 Helper variable template](is_fundamental.html#Helper_variable_template)
  * [3 Inherited from std::integral_constant](is_fundamental.html#Inherited_from_std::integral_constant)
    * [3.1 Member constants](is_fundamental.html#Member_constants)
    * [3.2 Member functions](is_fundamental.html#Member_functions)
    * [3.3 Member types](is_fundamental.html#Member_types)
    * [3.4 Possible implementation](is_fundamental.html#Possible_implementation)
    * [3.5 Example](is_fundamental.html#Example)
    * [3.6 See also](is_fundamental.html#See_also)

  
---  
  
### Template parameters

T  |  \-  |  a type to check   
---|---|---  
  
### Helper variable template

template< class T >  
constexpr bool is_fundamental_v = is_fundamental<T>::value; |  |  (since C++17)  
---|---|---  
| |   
  


##  Inherited from [ std::integral_constant](integral_constant.html "cpp/types/integral constant")

###  Member constants

value[static] |  true if `T` is a fundamental type, false otherwise   
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
    struct is_fundamental
        : [std::integral_constant](integral_constant.html)<
            bool,
            [std::is_arithmetic](is_arithmetic.html)<T>::value ||
            [std::is_void](is_void.html)<T>::value ||
            [std::is_same](is_same.html)<[std::nullptr_t](nullptr_t.html), typename [std::remove_cv](remove_cv.html)<T>::type>::value
            // you can also use 'std::is_null_pointer<T>::value' instead in C++14
    > {};  
  
---  
  
### Example

Run this code
    
    
    #include <type_traits>
     
    static_assert(std::is_fundamental_v<int> == true);
    static_assert(std::is_fundamental_v<int&> == false);
    static_assert(std::is_fundamental_v<int*> == false);
    static_assert(std::is_fundamental_v<void> == true);
    static_assert(std::is_fundamental_v<void*> == false);
    static_assert(std::is_fundamental_v<float> == true);
    static_assert(std::is_fundamental_v<float&> == false);
    static_assert(std::is_fundamental_v<float*> == false);
    static_assert(std::is_fundamental_v<[std::nullptr_t](nullptr_t.html)> == true);
    static_assert(std::is_fundamental_v<std::is_fundamental<int>> == false);
     
    class A {};
    static_assert(std::is_fundamental_v<A> == false);
    static_assert(std::is_fundamental_v<std::is_fundamental<A>::value_type>);
     
    int main() {}

### See also

[ is_compound](is_compound.html "cpp/types/is compound")(C++11) |  checks if a type is a compound type   
(class template)   
---|---  
[ is_arithmetic](is_arithmetic.html "cpp/types/is arithmetic")(C++11) |  checks if a type is an arithmetic type   
(class template)   
[ is_void](is_void.html "cpp/types/is void")(C++11) |  checks if a type is void   
(class template)   
[ is_null_pointer](is_null_pointer.html "cpp/types/is null pointer")(C++11)(DR*) |  checks if a type is [std::nullptr_t](nullptr_t.html "cpp/types/nullptr t")   
(class template) 
