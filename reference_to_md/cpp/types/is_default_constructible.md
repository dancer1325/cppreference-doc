
  


  
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
**is_default_constructible is_trivially_default_constructibleis_nothrow_default_constructible**(C++11)(C++11)(C++11)  
[is_copy_constructibleis_trivially_copy_constructibleis_nothrow_copy_constructible](is_copy_constructible.html "cpp/types/is copy constructible")(C++11)(C++11)(C++11)  
[is_move_constructibleis_trivially_move_constructibleis_nothrow_move_constructible](is_move_constructible.html "cpp/types/is move constructible")(C++11)(C++11)(C++11)  
[is_assignableis_trivially_assignableis_nothrow_assignable](is_assignable.html "cpp/types/is assignable")(C++11)(C++11)(C++11)  
  
| [is_copy_assignableis_trivially_copy_assignableis_nothrow_copy_assignable](is_copy_assignable.html "cpp/types/is copy assignable")(C++11)(C++11)(C++11)  
---  
[is_move_assignableis_trivially_move_assignableis_nothrow_move_assignable](is_move_assignable.html "cpp/types/is move assignable")(C++11)(C++11)(C++11)  
[is_destructibleis_trivially_destructibleis_nothrow_destructible](is_destructible.html "cpp/types/is destructible")(C++11)(C++11)(C++11)  
[has_virtual_destructor](has_virtual_destructor.html "cpp/types/has virtual destructor")(C++11)  
[is_swappable_withis_swappableis_nothrow_swappable_withis_nothrow_swappable](is_swappable.html "cpp/types/is swappable")(C++17)(C++17)(C++17)(C++17)  
  
  
  
  
  
  
  
  
  


Defined in header `[<type_traits>](../header/type_traits.html "cpp/header/type traits")` |  |   
---|---|---  
template< class T >  
struct is_default_constructible; |  (1)  |  (since C++11)  
template< class T >  
struct is_trivially_default_constructible; |  (2)  |  (since C++11)  
template< class T >  
struct is_nothrow_default_constructible; |  (3)  |  (since C++11)  
| |   
  
1) Provides the member constant `value` equal to [std::is_constructible](is_constructible.html)<T>::value.

2) Provides the member constant `value` equal to [std::is_trivially_constructible](is_constructible.html)<T>::value.

3) Provides the member constant `value` equal to [std::is_nothrow_constructible](is_constructible.html)<T>::value.

If `T` is not a complete type, (possibly cv-qualified) void, or an array of unknown bound, the behavior is undefined. 

If an instantiation of a template above depends, directly or indirectly, on an incomplete type, and that instantiation could yield a different result if that type were hypothetically completed, the behavior is undefined. 

If the program adds specializations for any of the templates described on this page, the behavior is undefined. 

## Contents

  * [1 Helper variable templates](is_default_constructible.html#Helper_variable_templates)
  * [2 Inherited from std::integral_constant](is_default_constructible.html#Inherited_from_std::integral_constant)
    * [2.1 Member constants](is_default_constructible.html#Member_constants)
    * [2.2 Member functions](is_default_constructible.html#Member_functions)
    * [2.3 Member types](is_default_constructible.html#Member_types)
    * [2.4 Possible implementation](is_default_constructible.html#Possible_implementation)
    * [2.5 Notes](is_default_constructible.html#Notes)
    * [2.6 Example](is_default_constructible.html#Example)
    * [2.7 See also](is_default_constructible.html#See_also)

  
---  
  
### Helper variable templates

template< class T >  
inline constexpr bool is_default_constructible_v =  
is_default_constructible<T>::value; |  |  (since C++17)  
---|---|---  
template< class T >  
inline constexpr bool is_trivially_default_constructible_v =  
is_trivially_default_constructible<T>::value; |  |  (since C++17)  
template< class T >  
inline constexpr bool is_nothrow_default_constructible_v =  
is_nothrow_default_constructible<T>::value; |  |  (since C++17)  
| |   
  


##  Inherited from [ std::integral_constant](integral_constant.html "cpp/types/integral constant")

###  Member constants

value[static] |  true if `T` is default-constructible, false otherwise   
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
    struct is_default_constructible : [std::is_constructible](is_constructible.html)<T> {};
     
    template<class T>
    struct is_trivially_default_constructible : [std::is_trivially_constructible](is_constructible.html)<T> {};
     
    template<class T>
    struct is_nothrow_default_constructible : [std::is_nothrow_constructible](is_constructible.html)<T> {};  
  
---  
  
### Notes

In many implementations, `std::is_nothrow_default_constructible` also checks if the destructor throws because it is effectively noexcept(T()). Same applies to `std::is_trivially_default_constructible`, which, in these implementations, also requires that the destructor is trivial: [GCC bug 51452](https://gcc.gnu.org/bugzilla/show_bug.cgi?id=51452), [LWG issue 2116](https://cplusplus.github.io/LWG/issue2116). 

std::is_default_constructible<T> does not test that T x; would compile; it attempts [direct-initialization](../language/direct_initialization.html "cpp/language/direct initialization") with an empty argument list (see [std::is_constructible](is_constructible.html "cpp/types/is constructible")). Thus, std::is_default_constructible_v<const int> and std::is_default_constructible_v<const int[10]> are true. 

### Example

Run this code
    
    
    #include <string>
    #include <type_traits>
     
    struct S1
    {
        [std::string](../string/basic_string.html) str; // member has a non-trivial default constructor
    };
    static_assert(std::is_default_constructible_v<S1> == true);
    static_assert(std::is_trivially_default_constructible_v<S1> == false);
     
    struct S2
    {
        int n;
        S2() = default; // trivial and non-throwing
    };
    static_assert(std::is_trivially_default_constructible_v<S2> == true);
    static_assert(std::is_nothrow_default_constructible_v<S2> == true);
     
    int main() {}

### See also

[ is_constructibleis_trivially_constructibleis_nothrow_constructible](is_constructible.html "cpp/types/is constructible")(C++11)(C++11)(C++11) |  checks if a type has a constructor for specific arguments   
(class template)   
---|---  
[ is_copy_constructibleis_trivially_copy_constructibleis_nothrow_copy_constructible](is_copy_constructible.html "cpp/types/is copy constructible")(C++11)(C++11)(C++11) |  checks if a type has a copy constructor   
(class template)   
[ is_move_constructibleis_trivially_move_constructibleis_nothrow_move_constructible](is_move_constructible.html "cpp/types/is move constructible")(C++11)(C++11)(C++11) |  checks if a type can be constructed from an rvalue reference   
(class template)   
[ default_initializable](../concepts/default_initializable.html "cpp/concepts/default initializable")(C++20) |  specifies that an object of a type can be default constructed   
(concept) 
