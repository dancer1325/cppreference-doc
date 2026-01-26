 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::variant`](../variant.html "cpp/utility/variant")

[Member functions](../variant.html#Member_functions "cpp/utility/variant")  
---  
[variant::variant](variant.html "cpp/utility/variant/variant")  
[variant::~variant](~variant.html "cpp/utility/variant/~variant")  
[variant::operator=](operator=.html "cpp/utility/variant/operator=")  
[Observers](../variant.html#Observers "cpp/utility/variant")  
[variant::index](index.html "cpp/utility/variant/index")  
[variant::valueless_by_exception](valueless_by_exception.html "cpp/utility/variant/valueless by exception")  
[Modifiers](../variant.html#Modifiers "cpp/utility/variant")  
[variant::emplace](emplace.html "cpp/utility/variant/emplace")  
[variant::swap](swap.html "cpp/utility/variant/swap")  
[Visitation](../variant.html#Visitation "cpp/utility/variant")  
[variant::visit](visit.html "cpp/utility/variant/visit")(C++26)  
[Non-member functions](../variant.html#Non-member_functions "cpp/utility/variant")  
[visit(std::variant)](visit2.html "cpp/utility/variant/visit2")  
[holds_alternative](holds_alternative.html "cpp/utility/variant/holds alternative")  
[get(std::variant)](get.html "cpp/utility/variant/get")  
[get_if](get_if.html "cpp/utility/variant/get if")  
[operator==operator!=operator<operator<=operator>operator>=operator<=>](operator_cmp.html "cpp/utility/variant/operator cmp")(C++20)  
[swap(std::variant)](swap2.html "cpp/utility/variant/swap2")  
[Helper classes](../variant.html#Helper_classes "cpp/utility/variant")  
[monostate](monostate.html "cpp/utility/variant/monostate")  
[bad_variant_access](bad_variant_access.html "cpp/utility/variant/bad variant access")  
**variant_size**  
[variant_alternative](variant_alternative.html "cpp/utility/variant/variant alternative")  
[hash<std::variant>](hash.html "cpp/utility/variant/hash")  
[Helper objects](../variant.html#Helper_objects "cpp/utility/variant")  
[variant_npos](variant_npos.html "cpp/utility/variant/variant npos")  
  


Defined in header `[<variant>](../../header/variant.html "cpp/header/variant")` |  |   
---|---|---  
template< class T >  
struct variant_size; /* undefined */ |  (1)  |  (since C++17)  
template< class... Types >  
struct variant_size<[std::variant](../variant.html)<Types...>>  
: [std::integral_constant](../../types/integral_constant.html)<[std::size_t](../../types/size_t.html), sizeof...(Types)> {}; |  (2)  |  (since C++17)  
template< class T >  
class variant_size<const T>; |  (3)  |  (since C++17)  
template< class T >  
class variant_size<volatile T>; |  (4)  |  (since C++17)   
(deprecated in C++20)  
template< class T >  
class variant_size<const volatile T>; |  (5)  |  (since C++17)   
(deprecated in C++20)  
| |   
  
Provides access to the number of alternatives in a possibly cv-qualified variant as a compile-time constant expression. 

Formally, 

2) meets the [UnaryTypeTrait](../../named_req/UnaryTypeTrait.html "cpp/named req/UnaryTypeTrait") requirements with a base characteristic of [std::integral_constant](../../types/integral_constant.html)<[std::size_t](../../types/size_t.html), sizeof...(Types)>

3-5) meets the [UnaryTypeTrait](../../named_req/UnaryTypeTrait.html "cpp/named req/UnaryTypeTrait") requirements with a base characteristic of [std::integral_constant](../../types/integral_constant.html)<[std::size_t](../../types/size_t.html), std::variant_size<T>::value>

## Contents

  * [1 Helper variable template](variant_size.html#Helper_variable_template)
  * [2 Inherited from std::integral_constant](variant_size.html#Inherited_from_std::integral_constant)
    * [2.1 Member constants](variant_size.html#Member_constants)
    * [2.2 Member functions](variant_size.html#Member_functions)
    * [2.3 Member types](variant_size.html#Member_types)
    * [2.4 Notes](variant_size.html#Notes)
    * [2.5 Example](variant_size.html#Example)
    * [2.6 See also](variant_size.html#See_also)

  
---  
  
### Helper variable template

template< class T >  
constexpr [std::size_t](../../types/size_t.html) variant_size_v = std::variant_size<T>::value; |  |  (since C++17)  
---|---|---  
| |   
  
##  Inherited from [ std::integral_constant](../../types/integral_constant.html "cpp/types/integral constant")

###  Member constants

value[static] |  `sizeof...(Types)`   
(public static member constant)  
---|---  
  
###  Member functions

operator std::size_t |  converts the object to [std::size_t](../../types/size_t.html), returns value   
(public member function)  
---|---  
operator()(C++14) |  returns value   
(public member function)  
  
###  Member types

Type  |  Definition   
---|---  
`value_type` |  [std::size_t](../../types/size_t.html)  
`type` |  [std::integral_constant](../../types/integral_constant.html)<[std::size_t](../../types/size_t.html), value>  
  
### Notes

All specializations of `std::variant_size` satisfy [UnaryTypeTrait](../../named_req/UnaryTypeTrait.html "cpp/named req/UnaryTypeTrait") with _base characteristic_ [std::integral_constant](../../types/integral_constant.html)<[std::size_t](../../types/size_t.html), N> for some `N`. 

### Example

Run this code
    
    
    #include <any>
    #include <variant>
     
    static_assert(std::variant_size_v<[std::variant](../variant.html)<>> == 0);
    static_assert(std::variant_size_v<[std::variant](../variant.html)<int>> == 1);
    static_assert(std::variant_size_v<[std::variant](../variant.html)<int, int>> == 2);
    static_assert(std::variant_size_v<[std::variant](../variant.html)<int, int, int>> == 3);
    static_assert(std::variant_size_v<[std::variant](../variant.html)<int, float, double>> == 3);
    static_assert(std::variant_size_v<[std::variant](../variant.html)<[std::monostate](monostate.html), void>> == 2);
    static_assert(std::variant_size_v<[std::variant](../variant.html)<const int, const float>> == 2);
    static_assert(std::variant_size_v<[std::variant](../variant.html)<[std::variant](../variant.html)<[std::any](../any.html)>>> == 1);
     
    int main() {}

### See also

[ variant_alternativevariant_alternative_t](variant_alternative.html "cpp/utility/variant/variant alternative")(C++17) |  obtains the type of the alternative specified by its index, at compile time  
(class template) (alias template)  
---|---  
[ std::tuple_size<std::tuple>](../tuple/tuple_size.html "cpp/utility/tuple/tuple size")(C++11) |  obtains the size of a `tuple`   
(class template specialization) 
