
  


  
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
**underlying_type**(C++11)  
[type_identity](type_identity.html "cpp/types/type identity")(C++20)  
[enable_if](enable_if.html "cpp/types/enable if")(C++11)  
[void_t](void_t.html "cpp/types/void t")(C++17)  
  
[Compile-time rational arithmetic](../utility/ratio.html "cpp/numeric/ratio")  
Compile-time integer sequences  
[integer_sequence](../utility/integer_sequence.html "cpp/utility/integer sequence")(C++14)  
  


Defined in header `[<type_traits>](../header/type_traits.html "cpp/header/type traits")` |  |   
---|---|---  
template< class T >  
struct underlying_type; |  |  (since C++11)  
| |   
  
If `T` is a complete enumeration (enum) type, provides a member typedef `type` that names the underlying type of `T`. 

Otherwise, the behavior is undefined.  | (until C++20)  
---|---  
Otherwise, if `T` is not an enumeration type, there is no member `type`. Otherwise (`T` is an incomplete enumeration type), the program is ill-formed.  | (since C++20)  
  
If the program adds specializations for `std::underlying_type`, the behavior is undefined. 

## Contents

  * [1 Member types](underlying_type.html#Member_types)
  * [2 Helper types](underlying_type.html#Helper_types)
  * [3 Notes](underlying_type.html#Notes)
  * [4 Example](underlying_type.html#Example)
  * [5 Defect reports](underlying_type.html#Defect_reports)
  * [6 See also](underlying_type.html#See_also)

  
---  
  
### Member types

Name  |  Definition   
---|---  
`type` |  the underlying type of `T`  
  
### Helper types

template< class T >  
using underlying_type_t = typename underlying_type<T>::type; |  |  (since C++14)  
---|---|---  
| |   
  
### Notes

Each [enumeration type](../language/enum.html "cpp/language/enum") has an _underlying type_ , which can be 

  1. Specified explicitly (both scoped and unscoped enumerations); 
  2. Omitted, in which case it is int for scoped enumerations or an implementation-defined integral type capable of representing all values of the enum (for unscoped enumerations). 



### Example

Run this code
    
    
    #include <iostream>
    #include <type_traits>
     
    enum e1 {};
    enum class e2 {};
    enum class e3 : unsigned {};
    enum class e4 : int {};
     
    int main()
    {
        constexpr bool e1_t = [std::is_same_v](is_same.html)<std::underlying_type_t<e1>, int>;
        constexpr bool e2_t = [std::is_same_v](is_same.html)<std::underlying_type_t<e2>, int>;
        constexpr bool e3_t = [std::is_same_v](is_same.html)<std::underlying_type_t<e3>, int>;
        constexpr bool e4_t = [std::is_same_v](is_same.html)<std::underlying_type_t<e4>, int>;
     
        [std::cout](../io/cout.html)
            << "underlying type for 'e1' is " << (e1_t ? "int" : "non-int") << '\n'
            << "underlying type for 'e2' is " << (e2_t ? "int" : "non-int") << '\n'
            << "underlying type for 'e3' is " << (e3_t ? "int" : "non-int") << '\n'
            << "underlying type for 'e4' is " << (e4_t ? "int" : "non-int") << '\n';
    }

Possible output: 
    
    
    underlying type for 'e1' is non-int
    underlying type for 'e2' is int
    underlying type for 'e3' is non-int
    underlying type for 'e4' is int

### Defect reports 

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2396](https://cplusplus.github.io/LWG/issue2396) | C++11  | incomplete enumeration types were allowed  | complete enumeration type required   
  
### See also

[ is_enum](is_enum.html "cpp/types/is enum")(C++11) |  checks if a type is an enumeration type   
(class template)   
---|---  
[ is_scoped_enum](is_scoped_enum.html "cpp/types/is scoped enum")(C++23) |  checks if a type is a scoped enumeration type   
(class template)   
[ to_underlying](../utility/to_underlying.html "cpp/utility/to underlying")(C++23) |  converts an enumeration to its underlying type   
(function template) 
