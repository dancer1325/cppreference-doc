
  


  
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
**is_literal_type**(C++11)(until C++20*)  
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
struct is_literal_type; |  |  (since C++11)   
(deprecated in C++17)   
(removed in C++20)  
| |   
  
`std::is_literal_type` is a [UnaryTypeTrait](../named_req/UnaryTypeTrait.html "cpp/named req/UnaryTypeTrait"). 

(This type trait has been deprecated[[1]](is_literal_type.html#cite_note-1) and removed[[2]](is_literal_type.html#cite_note-2) as offering negligible value to generic code.) 

If `T` satisfies all requirements of [LiteralType](../named_req/LiteralType.html "cpp/named req/LiteralType"), provides the member constant `value` equal to true. For any other type, `value` is false. 

If [std::remove_all_extents_t](remove_all_extents.html)<T> is an incomplete type and not (possibly cv-qualified) void, the behavior is undefined. 

If the program adds specializations for `std::is_literal_type` or `std::is_literal_type_v`, the behavior is undefined. 

## Contents

  * [1 Template parameters](is_literal_type.html#Template_parameters)
  * [2 Helper variable template](is_literal_type.html#Helper_variable_template)
  * [3 Inherited from std::integral_constant](is_literal_type.html#Inherited_from_std::integral_constant)
    * [3.1 Member constants](is_literal_type.html#Member_constants)
    * [3.2 Member functions](is_literal_type.html#Member_functions)
    * [3.3 Member types](is_literal_type.html#Member_types)
    * [3.4 Notes](is_literal_type.html#Notes)
    * [3.5 Example](is_literal_type.html#Example)
    * [3.6 Defect reports](is_literal_type.html#Defect_reports)
    * [3.7 External links](is_literal_type.html#External_links)

  
---  
  
### Template parameters

T  |  \-  |  a type to check   
---|---|---  
  
### Helper variable template

template< class T >  
constexpr bool is_literal_type_v = is_literal_type<T>::value; |  |  (since C++17)   
(deprecated)   
(removed in C++20)  
---|---|---  
| |   
  


##  Inherited from [ std::integral_constant](integral_constant.html "cpp/types/integral constant")

###  Member constants

value[static] |  true if `T` is a literal type, false otherwise   
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

Only literal types may be used as parameters to or returned from [constexpr functions](../language/constexpr.html#constexpr_function "cpp/language/constexpr"). Only literal classes may have constexpr member functions. 

### Example

Run this code
    
    
    #include <type_traits>
     
    struct A { int m; };
    static_assert(std::is_literal_type_v<A> == true);
     
    struct B { virtual ~B(); };
    static_assert(std::is_literal_type_v<B> == false);
     
    int main() {}

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2015](https://cplusplus.github.io/LWG/issue2015) | C++11  | `T` could be an array of incomplete  
class type with unknown bound  | the behavior is  
undefined in this case   
  
### External links

  1. [↑](is_literal_type.html#cite_ref-1) Alisdair Meredith. ["Deprecate the `is_literal` Trait"](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0174r2.html#2.3). [_Deprecating Vestigial Library Parts in C++17_](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0174r2.html). "The `is_literal` type trait offers negligible value to generic code, as what is really needed is the ability to know that a specific construction would produce constant initialization."
  2. [↑](is_literal_type.html#cite_ref-2) Alisdair Meredith, Stephan T. Lavavej, Tomasz Kamiński. ["Deprecated type traits"](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2018/p0619r4.html#3.12). [_Reviewing Deprecated Facilities of C++17 for C++20_](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2018/p0619r4.html). "**Strong recommendation:** Remove the traits that can live on as zombies. [...] **Toronto Review:** Accept strong recommendation, strike from C++20."

  
---
