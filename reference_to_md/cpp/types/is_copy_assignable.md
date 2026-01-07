
  


  
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
  
| Supported operations  
---  
| [is_constructibleis_trivially_constructibleis_nothrow_constructible](is_constructible.html "cpp/types/is constructible")(C++11)(C++11)(C++11)  
---  
[is_default_constructibleis_trivially_default_constructibleis_nothrow_default_constructible](is_default_constructible.html "cpp/types/is default constructible")(C++11)(C++11)(C++11)  
[is_copy_constructibleis_trivially_copy_constructibleis_nothrow_copy_constructible](is_copy_constructible.html "cpp/types/is copy constructible")(C++11)(C++11)(C++11)  
[is_move_constructibleis_trivially_move_constructibleis_nothrow_move_constructible](is_move_constructible.html "cpp/types/is move constructible")(C++11)(C++11)(C++11)  
[is_assignableis_trivially_assignableis_nothrow_assignable](is_assignable.html "cpp/types/is assignable")(C++11)(C++11)(C++11)  
  
| **is_copy_assignable is_trivially_copy_assignableis_nothrow_copy_assignable**(C++11)(C++11)(C++11)  
---  
[is_move_assignableis_trivially_move_assignableis_nothrow_move_assignable](is_move_assignable.html "cpp/types/is move assignable")(C++11)(C++11)(C++11)  
[is_destructibleis_trivially_destructibleis_nothrow_destructible](is_destructible.html "cpp/types/is destructible")(C++11)(C++11)(C++11)  
[has_virtual_destructor](has_virtual_destructor.html "cpp/types/has virtual destructor")(C++11)  
[is_swappable_withis_swappableis_nothrow_swappable_withis_nothrow_swappable](is_swappable.html "cpp/types/is swappable")(C++17)(C++17)(C++17)(C++17)  
  
  
  
  
  
  
  
  
  


Defined in header `[<type_traits>](../header/type_traits.html "cpp/header/type traits")` |  |   
---|---|---  
template< class T >  
struct is_copy_assignable; |  (1)  |  (since C++11)  
template< class T >  
struct is_trivially_copy_assignable; |  (2)  |  (since C++11)  
template< class T >  
struct is_nothrow_copy_assignable; |  (3)  |  (since C++11)  
| |   
Type trait  | The value of the member constant `value`  
---|---  
`T` is a [referenceable type](../meta.html#Definitions "cpp/meta") |  `T` is not a referenceable type   
(1) | [std::is_assignable](is_assignable.html)<T&, const T&>::value | false  
(2) | [std::is_trivially_assignable](is_assignable.html)<T&, const T&>::value  
(3) | [std::is_nothrow_assignable](is_assignable.html)<T&, const T&>::value  
  
If `T` is not a complete type, (possibly cv-qualified) void, or an array of unknown bound, the behavior is undefined. 

If an instantiation of a template above depends, directly or indirectly, on an incomplete type, and that instantiation could yield a different result if that type were hypothetically completed, the behavior is undefined. 

If the program adds specializations for any of the templates described on this page, the behavior is undefined. 

## Contents

  * [1 Helper variable templates](is_copy_assignable.html#Helper_variable_templates)
  * [2 Inherited from std::integral_constant](is_copy_assignable.html#Inherited_from_std::integral_constant)
    * [2.1 Member constants](is_copy_assignable.html#Member_constants)
    * [2.2 Member functions](is_copy_assignable.html#Member_functions)
    * [2.3 Member types](is_copy_assignable.html#Member_types)
    * [2.4 Possible implementation](is_copy_assignable.html#Possible_implementation)
    * [2.5 Notes](is_copy_assignable.html#Notes)
    * [2.6 Example](is_copy_assignable.html#Example)
    * [2.7 Defect reports](is_copy_assignable.html#Defect_reports)
    * [2.8 See also](is_copy_assignable.html#See_also)

  
---  
  
### Helper variable templates

template< class T >  
inline constexpr bool is_copy_assignable_v =  
is_copy_assignable<T>::value; |  |  (since C++17)  
---|---|---  
template< class T >  
inline constexpr bool is_trivially_copy_assignable_v =  
is_trivially_copy_assignable<T>::value; |  |  (since C++17)  
template< class T >  
inline constexpr bool is_nothrow_copy_assignable_v =  
is_nothrow_copy_assignable<T>::value; |  |  (since C++17)  
| |   
  


##  Inherited from [ std::integral_constant](integral_constant.html "cpp/types/integral constant")

###  Member constants

value[static] |  true if `T` is copy-assignable, false otherwise   
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
    struct is_copy_assignable
        : [std::is_assignable](is_assignable.html)<typename [std::add_lvalue_reference](add_reference.html)<T>::type,
                             typename [std::add_lvalue_reference](add_reference.html)<const T>::type> {};
     
    template<class T>
    struct is_trivially_copy_assignable
        : [std::is_trivially_assignable](is_assignable.html)<typename [std::add_lvalue_reference](add_reference.html)<T>::type,
                                       typename [std::add_lvalue_reference](add_reference.html)<const T>::type> {};
     
    template<class T>
    struct is_nothrow_copy_assignable
        : [std::is_nothrow_assignable](is_assignable.html)<typename [std::add_lvalue_reference](add_reference.html)<T>::type,
                                     typename [std::add_lvalue_reference](add_reference.html)<const T>::type> {};  
  
---  
  
### Notes

The trait `std::is_copy_assignable` is less strict than [CopyAssignable](../named_req/CopyAssignable.html "cpp/named req/CopyAssignable") because it does not check the type of the result of the assignment (which, for a [CopyAssignable](../named_req/CopyAssignable.html "cpp/named req/CopyAssignable") type, must be an lvalue of type `T`) and does not check the semantic requirement that the argument expression remains unchanged. It also does not check that `T` satisfies [MoveAssignable](../named_req/MoveAssignable.html "cpp/named req/MoveAssignable"), which is required of all [CopyAssignable](../named_req/CopyAssignable.html "cpp/named req/CopyAssignable") types. 

### Example

Run this code
    
    
    #include <iostream>
    #include <type_traits>
    #include <utility>
     
    struct Foo { int n; };
     
    int main()
    {
        [std::cout](../io/cout.html) << [std::boolalpha](../io/manip/boolalpha.html)
                  << "Foo is trivially copy-assignable? "
                  << std::is_trivially_copy_assignable<Foo>::value << '\n'
                  << "int[2] is copy-assignable? "
                  << std::is_copy_assignable<int[2]>::value << '\n'
                  << "int is nothrow copy-assignable? "
                  << std::is_nothrow_copy_assignable<int>::value << '\n';
    }

Output: 
    
    
    Foo is trivially copy-assignable? true
    int[2] is copy-assignable? false
    int is nothrow copy-assignable? true

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2196](https://cplusplus.github.io/LWG/issue2196) | C++11  | the behavior was unclear if const T& cannot be formed  | the value produced is false in this case   
  
### See also

[ is_assignableis_trivially_assignableis_nothrow_assignable](is_assignable.html "cpp/types/is assignable")(C++11)(C++11)(C++11) |  checks if a type has an assignment operator for a specific argument   
(class template)   
---|---  
[ is_move_assignableis_trivially_move_assignableis_nothrow_move_assignable](is_move_assignable.html "cpp/types/is move assignable")(C++11)(C++11)(C++11) |  checks if a type has a move assignment operator   
(class template) 
