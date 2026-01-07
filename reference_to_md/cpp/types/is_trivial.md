
  


  
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
**is_trivial**(C++11)(deprecated in C++26)  
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
struct is_trivial; |  |  (since C++11)   
(deprecated in C++26)  
| |   
  
`std::is_trivial` is a [UnaryTypeTrait](../named_req/UnaryTypeTrait.html "cpp/named req/UnaryTypeTrait"). 

If `T` is a [trivial type](../named_req/TrivialType.html "cpp/named req/TrivialType"), provides the member constant `value` equal to true. For any other type, `value` is false. 

If [std::remove_all_extents_t](remove_all_extents.html)<T> is an incomplete type and not (possibly cv-qualified) void, the behavior is undefined. 

If the program adds specializations for `std::is_trivial` or `std::is_trivial_v`, the behavior is undefined. 

## Contents

  * [1 Template parameters](is_trivial.html#Template_parameters)
  * [2 Helper variable template](is_trivial.html#Helper_variable_template)
  * [3 Inherited from std::integral_constant](is_trivial.html#Inherited_from_std::integral_constant)
    * [3.1 Member constants](is_trivial.html#Member_constants)
    * [3.2 Member functions](is_trivial.html#Member_functions)
    * [3.3 Member types](is_trivial.html#Member_types)
    * [3.4 Example](is_trivial.html#Example)
    * [3.5 Defect reports](is_trivial.html#Defect_reports)
    * [3.6 See also](is_trivial.html#See_also)

  
---  
  
### Template parameters

T  |  \-  |  a type to check   
---|---|---  
  
### Helper variable template

template< class T >  
constexpr bool is_trivial_v = is_trivial<T>::value; |  |  (since C++17)   
(deprecated in C++26)  
---|---|---  
| |   
  


##  Inherited from [ std::integral_constant](integral_constant.html "cpp/types/integral constant")

###  Member constants

value[static] |  true if `T` is a trivial type, false otherwise   
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
  
### Example

Run this code
    
    
    #include <type_traits>
     
    struct A { int m; };
    static_assert(std::is_trivial_v<A> == true);
     
    struct B { B() {} };
    static_assert(std::is_trivial_v<B> == false);
     
    // The following class shows why std::is_trivial(_v) may be a pitfall.
    class C
    {
    private:
        C() = default;
    };
     
    static_assert(std::is_trivial_v<C> == true);
    static_assert([std::is_trivially_default_constructible_v](is_default_constructible.html)<C> == false);
     
    int main() {}

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2015](https://cplusplus.github.io/LWG/issue2015) | C++11  | `T` could be an array of incomplete  
class type with unknown bound  | the behavior is  
undefined in this case   
  
### See also

[ is_trivially_copyable](is_trivially_copyable.html "cpp/types/is trivially copyable")(C++11) |  checks if a type is trivially copyable   
(class template)   
---|---  
[ is_default_constructibleis_trivially_default_constructibleis_nothrow_default_constructible](is_default_constructible.html "cpp/types/is default constructible")(C++11)(C++11)(C++11) |  checks if a type has a default constructor   
(class template) 
