
  


  
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
  
| [is_copy_assignableis_trivially_copy_assignableis_nothrow_copy_assignable](is_copy_assignable.html "cpp/types/is copy assignable")(C++11)(C++11)(C++11)  
---  
[is_move_assignableis_trivially_move_assignableis_nothrow_move_assignable](is_move_assignable.html "cpp/types/is move assignable")(C++11)(C++11)(C++11)  
[is_destructibleis_trivially_destructibleis_nothrow_destructible](is_destructible.html "cpp/types/is destructible")(C++11)(C++11)(C++11)  
**has_virtual_destructor**(C++11)  
[is_swappable_withis_swappableis_nothrow_swappable_withis_nothrow_swappable](is_swappable.html "cpp/types/is swappable")(C++17)(C++17)(C++17)(C++17)  
  
  
  
  
  
  
  
  
  


Defined in header `[<type_traits>](../header/type_traits.html "cpp/header/type traits")` |  |   
---|---|---  
template< class T >  
struct has_virtual_destructor; |  |  (since C++11)  
| |   
  
`std::has_virtual_destructor` is a [UnaryTypeTrait](../named_req/UnaryTypeTrait.html "cpp/named req/UnaryTypeTrait"). 

If `T` is a type with a virtual destructor, the base characteristic is [std::true_type](integral_constant.html "cpp/types/integral constant"). For any other type, the base characteristic is [std::false_type](integral_constant.html "cpp/types/integral constant"). 

If `T` is an incomplete non-union class type, the behavior is undefined. 

If the program adds specializations for `std::has_virtual_destructor` or `std::has_virtual_destructor_v`, the behavior is undefined. 

## Contents

  * [1 Template parameters](has_virtual_destructor.html#Template_parameters)
  * [2 Helper variable template](has_virtual_destructor.html#Helper_variable_template)
  * [3 Inherited from std::integral_constant](has_virtual_destructor.html#Inherited_from_std::integral_constant)
    * [3.1 Member constants](has_virtual_destructor.html#Member_constants)
    * [3.2 Member functions](has_virtual_destructor.html#Member_functions)
    * [3.3 Member types](has_virtual_destructor.html#Member_types)
    * [3.4 Notes](has_virtual_destructor.html#Notes)
    * [3.5 Example](has_virtual_destructor.html#Example)
    * [3.6 Defect reports](has_virtual_destructor.html#Defect_reports)
    * [3.7 See also](has_virtual_destructor.html#See_also)

  
---  
  
### Template parameters

T  |  \-  |  a type to check   
---|---|---  
  
### Helper variable template

template< class T >  
constexpr bool has_virtual_destructor_v = has_virtual_destructor<T>::value; |  |  (since C++17)  
---|---|---  
| |   
  


##  Inherited from [ std::integral_constant](integral_constant.html "cpp/types/integral constant")

###  Member constants

value[static] |  true if `T` has a virtual destructor, false otherwise   
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

If a class `C` has a public virtual destructor, it can be derived from, and the derived object can be safely deleted through a pointer to the base object ([GotW #18](http://www.gotw.ca/publications/mill18.htm)). In this case, [std::is_polymorphic](is_polymorphic.html)<C>::value is true. 

### Example

Run this code
    
    
    #include <type_traits>
     
    struct S {};
    static_assert(!std::has_virtual_destructor_v<S>);
     
    struct B { virtual ~B() {} };
    static_assert(std::has_virtual_destructor_v<B>);
     
    struct D : B { ~D() {} };
    static_assert(std::has_virtual_destructor_v<D>);
     
    int main()
    {
        B* pd = new D;
        delete pd;
    }

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2015](https://cplusplus.github.io/LWG/issue2015) | C++11  | the behavior was undefined if  
`T` is an incomplete union type  | the base characteristic is  
[std::false_type](integral_constant.html "cpp/types/integral constant") in this case   
  
### See also

[ is_destructibleis_trivially_destructibleis_nothrow_destructible](is_destructible.html "cpp/types/is destructible")(C++11)(C++11)(C++11) |  checks if a type has a non-deleted destructor   
(class template)   
---|---  
[ is_polymorphic](is_polymorphic.html "cpp/types/is polymorphic")(C++11) |  checks if a type is a polymorphic class type   
(class template) 
