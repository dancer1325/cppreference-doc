
  


  
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
**reference_constructs_from_temporary**(C++23)  
[reference_converts_from_temporary](reference_converts_from_temporary.html "cpp/types/reference converts from temporary")(C++23)  
  
| [is_base_of](is_base_of.html "cpp/types/is base of")(C++11)  
---  
[is_virtual_base_of](is_virtual_base_of.html "cpp/types/is virtual base of")(C++26)  
[alignment_of](alignment_of.html "cpp/types/alignment of")(C++11)  
[rank](rank.html "cpp/types/rank")(C++11)  
[extent](extent.html "cpp/types/extent")(C++11)  
[is_invocableis_invocable_ris_nothrow_invocableis_nothrow_invocable_r](is_invocable.html "cpp/types/is invocable")(C++17)(C++17)(C++17)(C++17)  
  
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
template< class T, class U >  
struct reference_constructs_from_temporary; |  |  (since C++23)  
| |   
  
Let `V` be [std::remove_cv_t](remove_cv.html)<U> if `U` is a scalar type or _cv_ `void`, or `U` otherwise. If `T` is a reference type, and given a hypothetic expression e such that decltype(e) is `V`, the variable definition T ref(e); is well-formed and [binds a temporary object](../language/reference_initialization.html#Lifetime_of_a_temporary "cpp/language/reference initialization") to `ref`, then provides the member constant `value` equal to true. Otherwise, `value` is false. 

If `T` is an lvalue reference type to a const- but not volatile-qualified object type or an rvalue reference type, both [std::remove_reference_t](remove_reference.html)<T> and [std::remove_reference_t](remove_reference.html)<U> shall be [complete types](../language/type-id.html#Incomplete_type "cpp/language/type"), _cv_ void, or an [arrays of unknown bound](../language/array.html#Arrays_of_unknown_bound "cpp/language/array"); otherwise the behavior is undefined. 

If an instantiation of a template above depends, directly or indirectly, on an incomplete type, and that instantiation could yield a different result if that type were hypothetically completed, the behavior is undefined. 

If the program adds specializations for `std::reference_constructs_from_temporary` or `std::reference_constructs_from_temporary_v`, the behavior is undefined. 

## Contents

  * [1 Helper variable template](reference_constructs_from_temporary.html#Helper_variable_template)
  * [2 Inherited from std::integral_constant](reference_constructs_from_temporary.html#Inherited_from_std::integral_constant)
    * [2.1 Member constants](reference_constructs_from_temporary.html#Member_constants)
    * [2.2 Member functions](reference_constructs_from_temporary.html#Member_functions)
    * [2.3 Member types](reference_constructs_from_temporary.html#Member_types)
    * [2.4 Notes](reference_constructs_from_temporary.html#Notes)
    * [2.5 Example](reference_constructs_from_temporary.html#Example)
    * [2.6 See also](reference_constructs_from_temporary.html#See_also)

  
---  
  
### Helper variable template

template< class T, class U >  
inline constexpr bool reference_constructs_from_temporary_v =  
std::reference_constructs_from_temporary<T, U>::value; |  |  (since C++23)  
---|---|---  
| |   
  


##  Inherited from [ std::integral_constant](integral_constant.html "cpp/types/integral constant")

###  Member constants

value[static] |  true if `T` is a reference type, a `U` value can be bound to `T` in direct-initialization, and a temporary object would be bound to the reference, false otherwise   
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

`std::reference_constructs_from_temporary` can be used for rejecting some cases that always produce dangling references. 

It is also possible to use member initializer list to reject binding a temporary object to a reference if the compiler has implemented [CWG1696](https://cplusplus.github.io/CWG/issues/1696.html). 

### Example

Run this code
    
    
    #include <type_traits>
     
    static_assert(std::reference_constructs_from_temporary_v<int&&, int> == true);
    static_assert(std::reference_constructs_from_temporary_v<const int&, int> == true);
    static_assert(std::reference_constructs_from_temporary_v<int&&, int&&> == false);
    static_assert(std::reference_constructs_from_temporary_v<const int&, int&&> == false);
    static_assert(std::reference_constructs_from_temporary_v<int&&, long&&> == true);
    static_assert(std::reference_constructs_from_temporary_v<int&&, long> == true);
     
    int main() {}

### See also

[ is_constructibleis_trivially_constructibleis_nothrow_constructible](is_constructible.html "cpp/types/is constructible")(C++11)(C++11)(C++11) |  checks if a type has a constructor for specific arguments   
(class template)   
---|---  
[ (constructor)](../utility/tuple/tuple.html "cpp/utility/tuple/tuple") |  constructs a new `tuple`   
(public member function of `std::tuple<Types...>`)   
[ (constructor)](../utility/pair/pair.html "cpp/utility/pair/pair") |  constructs new `pair`   
(public member function of `std::pair<T1,T2>`)   
[ make_from_tuple](../utility/make_from_tuple.html "cpp/utility/make from tuple")(C++17) |  construct an object with a tuple of arguments   
(function template) 
