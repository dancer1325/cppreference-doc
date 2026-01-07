
  


  
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
**is_implicit_lifetime**(C++23)  
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
struct is_implicit_lifetime; |  |  (since C++23)  
| |   
  
`std::is_implicit_lifetime` is a [UnaryTypeTrait](../named_req/UnaryTypeTrait.html "cpp/named req/UnaryTypeTrait"). 

If `T` is an [implicit-lifetime type](../named_req/ImplicitLifetimeType.html "cpp/named req/ImplicitLifetimeType"), provides the member constant value equal to true. For any other type, value is false. 

The behavior is undefined if T is an incomplete type other than an array type or (possibly cv-qualified) void. 

If the program adds specializations for `std::is_implicit_lifetime` or `std::is_implicit_lifetime_v`, the behavior is undefined. 

## Contents

  * [1 Template parameters](is_implicit_lifetime.html#Template_parameters)
  * [2 Helper variable template](is_implicit_lifetime.html#Helper_variable_template)
  * [3 Inherited from std::integral_constant](is_implicit_lifetime.html#Inherited_from_std::integral_constant)
    * [3.1 Member constants](is_implicit_lifetime.html#Member_constants)
    * [3.2 Member functions](is_implicit_lifetime.html#Member_functions)
    * [3.3 Member types](is_implicit_lifetime.html#Member_types)
    * [3.4 Notes](is_implicit_lifetime.html#Notes)
    * [3.5 Example](is_implicit_lifetime.html#Example)
    * [3.6 See also](is_implicit_lifetime.html#See_also)

  
---  
  
### Template parameters

T  |  \-  |  a type to check   
---|---|---  
  
### Helper variable template

template< class T >  
constexpr bool is_implicit_lifetime_v = is_implicit_lifetime<T>::value; |  |  (since C++23)  
---|---|---  
| |   
  


##  Inherited from [ std::integral_constant](integral_constant.html "cpp/types/integral constant")

###  Member constants

value[static] |  true if `T` is an implicit-lifetime type, false otherwise   
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

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_is_implicit_lifetime`](../experimental/feature_test.html#cpp_lib_is_implicit_lifetime "cpp/feature test") | [`202302L`](../compiler_support/23.html#cpp_lib_is_implicit_lifetime_202302L "cpp/compiler support/23") | (C++23) | `std::is_implicit_lifetime`  
  
### Example

Run this code
    
    
    // The following types are collectively called implicit-lifetime types:
    // * scalar types:
    //     * arithmetic types
    //     * enumeration types
    //     * pointer types
    //     * pointer-to-member types
    //     * std::nullptr_t
    // * implicit-lifetime class types
    //     * is an aggregate whose destructor is not user-provided
    //     * has at least one trivial eligible constructor and a trivial,
    //       non-deleted destructor
    // * array types
    // * cv-qualified versions of these types.
    #include <type_traits>
     
    static_assert(std::is_implicit_lifetime_v<int>); // arithmetic type is a scalar type
    static_assert(std::is_implicit_lifetime_v<const int>); // cv-qualified a scalar type
     
    enum E { e };
    static_assert(std::is_implicit_lifetime_v<E>); // enumeration type is a scalar type
    static_assert(std::is_implicit_lifetime_v<int*>); // pointer type is a scalar type
    static_assert(std::is_implicit_lifetime_v<[std::nullptr_t](nullptr_t.html)>); // scalar type
     
    struct S { int x, y; };
    // S is an implicit-lifetime class: an aggregate without user-provided destructor
    static_assert(std::is_implicit_lifetime_v<S>);
     
    static_assert(std::is_implicit_lifetime_v<int S::*>); // pointer-to-member
     
    struct X { ~X() = delete; };
    // X is not implicit-lifetime class due to deleted destructor
    static_assert(!std::is_implicit_lifetime_v<X>);
     
    static_assert(std::is_implicit_lifetime_v<int[8]>); // array type
    static_assert(std::is_implicit_lifetime_v<volatile int[8]>); // cv-qualified array type
     
    int main() {}

### See also

[ is_scalar](is_scalar.html "cpp/types/is scalar")(C++11) |  checks if a type is a scalar type   
(class template)   
---|---  
[ is_array](is_array.html "cpp/types/is array")(C++11) |  checks if a type is an array type   
(class template)   
[ is_aggregate](is_aggregate.html "cpp/types/is aggregate")(C++17) |  checks if a type is an aggregate type   
(class template)   
[ start_lifetime_asstart_lifetime_as_array](../memory/start_lifetime_as.html "cpp/memory/start lifetime as")(C++23) |  implicitly creates objects in given storage with the object representation reused   
(function template) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
