
  


  
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
**is_polymorphic**(C++11)  
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
struct is_polymorphic; |  |  (since C++11)  
| |   
  
`std::is_polymorphic` is a [UnaryTypeTrait](../named_req/UnaryTypeTrait.html "cpp/named req/UnaryTypeTrait"). 

If `T` is a [polymorphic class](../language/objects.html#Polymorphic_objects "cpp/language/object") (that is, a non-union class that declares or inherits at least one virtual function), provides the member constant `value` equal to true. For any other type, `value` is false. 

If `T` is an incomplete non-union class type, the behavior is undefined. 

If the program adds specializations for `std::is_polymorphic` or `std::is_polymorphic_v`, the behavior is undefined. 

## Contents

  * [1 Template parameters](is_polymorphic.html#Template_parameters)
  * [2 Helper variable template](is_polymorphic.html#Helper_variable_template)
  * [3 Inherited from std::integral_constant](is_polymorphic.html#Inherited_from_std::integral_constant)
    * [3.1 Member constants](is_polymorphic.html#Member_constants)
    * [3.2 Member functions](is_polymorphic.html#Member_functions)
    * [3.3 Member types](is_polymorphic.html#Member_types)
    * [3.4 Possible implementation](is_polymorphic.html#Possible_implementation)
    * [3.5 Example](is_polymorphic.html#Example)
    * [3.6 Defect reports](is_polymorphic.html#Defect_reports)
    * [3.7 See also](is_polymorphic.html#See_also)

  
---  
  
### Template parameters

T  |  \-  |  a type to check   
---|---|---  
  
### Helper variable template

template< class T >  
constexpr bool is_polymorphic_v = is_polymorphic<T>::value; |  |  (since C++17)  
---|---|---  
| |   
  


##  Inherited from [ std::integral_constant](integral_constant.html "cpp/types/integral constant")

###  Member constants

value[static] |  true if `T` is a [polymorphic](../language/objects.html#Polymorphic_objects "cpp/language/object") class type, false otherwise   
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
    
    
    namespace detail
    {
        template<class T>
        [std::true_type](integral_constant.html) detect_is_polymorphic(
            decltype(dynamic_cast<const volatile void*>(static_cast<T*>(nullptr)))
        );
        template<class T>
        [std::false_type](integral_constant.html) detect_is_polymorphic(...);
    } // namespace detail
     
    template<class T>
    struct is_polymorphic : decltype(detail::detect_is_polymorphic<T>(nullptr)) {};  
  
---  
  
### Example

Run this code
    
    
    #include <type_traits>
     
    struct A { int m; };
    static_assert(!std::is_polymorphic_v<A>);
     
    struct B { virtual void foo(); };
    static_assert(std::is_polymorphic_v<B>);
     
    struct C : B {};
    static_assert(std::is_polymorphic_v<C>);
     
    struct D { virtual ~D() = default; };
    static_assert(std::is_polymorphic_v<D>);
     
    // Uses inheritance, but not the virtual keyword:
    struct E : A {};
    static_assert(!std::is_polymorphic_v<E>);
     
    struct F : virtual A {};
    static_assert(!std::is_polymorphic_v<F>);
     
    struct AX : A {};
    struct AY : A {};
    struct XY : virtual AX, virtual AY {};
    static_assert(!std::is_polymorphic_v<XY>);
     
    int main() {}

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2015](https://cplusplus.github.io/LWG/issue2015) | C++11  | the behavior was undefined if  
`T` is an incomplete union type  | the base characteristic is  
[std::false_type](integral_constant.html "cpp/types/integral constant") in this case   
  
### See also

[ is_class](is_class.html "cpp/types/is class")(C++11) |  checks if a type is a non-union class type   
(class template)   
---|---  
[ is_abstract](is_abstract.html "cpp/types/is abstract")(C++11) |  checks if a type is an abstract class type   
(class template)   
[ has_virtual_destructor](has_virtual_destructor.html "cpp/types/has virtual destructor")(C++11) |  checks if a type has a virtual destructor   
(class template) 
