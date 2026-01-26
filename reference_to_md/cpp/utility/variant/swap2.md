 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
**swap(std::variant)**  
[Helper classes](../variant.html#Helper_classes "cpp/utility/variant")  
[monostate](monostate.html "cpp/utility/variant/monostate")  
[bad_variant_access](bad_variant_access.html "cpp/utility/variant/bad variant access")  
[variant_size](variant_size.html "cpp/utility/variant/variant size")  
[variant_alternative](variant_alternative.html "cpp/utility/variant/variant alternative")  
[hash<std::variant>](hash.html "cpp/utility/variant/hash")  
[Helper objects](../variant.html#Helper_objects "cpp/utility/variant")  
[variant_npos](variant_npos.html "cpp/utility/variant/variant npos")  
  


Defined in header `[<variant>](../../header/variant.html "cpp/header/variant")` |  |   
---|---|---  
template< class... Types >  
void swap( [std::variant](../variant.html)<Types...>& lhs,  
[std::variant](../variant.html)<Types...>& rhs ) noexcept(/* see below */); |  | (since C++17)   
(constexpr since C++20)  
| |   
  
Overloads the [std::swap](../swap.html "cpp/algorithm/swap") algorithm for [std::variant](../variant.html "cpp/utility/variant"). Effectively calls lhs.swap(rhs). 

This overload participates in overload resolution only if [std::is_move_constructible_v](../../types/is_move_constructible.html)<T_i> and [std::is_swappable_v](../../types/is_swappable.html)<T_i> are both true for all `T_i` in `Types...`. 

## Contents

  * [1 Parameters](swap2.html#Parameters)
  * [2 Return value](swap2.html#Return_value)
  * [3 Exceptions](swap2.html#Exceptions)
  * [4 Notes](swap2.html#Notes)
  * [5 Example](swap2.html#Example)
  * [6 Defect reports](swap2.html#Defect_reports)
  * [7 See also](swap2.html#See_also)

  
---  
  
### Parameters

lhs, rhs  |  \-  |  `variant` objects whose values to swap   
---|---|---  
  
### Return value

(none) 

### Exceptions

[`noexcept`](../../language/noexcept_spec.html "cpp/language/noexcept spec") specification: 

noexcept(noexcept(lhs.swap(rhs)))

### Notes

[Feature-test](../feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_variant`](../../experimental/feature_test.html#cpp_lib_variant "cpp/feature test") | [`202106L`](../../compiler_support/20.html#cpp_lib_variant_202106L "cpp/compiler support/20") | (C++20)  
(DR) | Fully constexpr `std::variant`  
  
### Example

Run this code
    
    
    #include <iostream>
    #include <string>
    #include <variant>
     
    void print(auto const& v, char term = '\n')
    {
        [std::visit](visit.html)([](auto&& o) { [std::cout](../../io/cout.html) << o; }, v);
        [std::cout](../../io/cout.html) << term;
    }
     
    int main()
    {
        [std::variant](../variant.html)<int, [std::string](../../string/basic_string.html)> v1{123}, v2{"XYZ"};
        print(v1, ' ');
        print(v2);
     
        [std::swap](../../algorithm/swap.html)(v1, v2);
        print(v1, ' ');
        print(v2);
     
        [std::variant](../variant.html)<double, [std::string](../../string/basic_string.html)> v3{3.14};
        // std::swap(v1, v3); // ERROR: ~ inconsistent parameter packs
    }

Output: 
    
    
    123 XYZ
    XYZ 123

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[P2231R1](https://wg21.link/P2231R1) | C++20  | `swap` was not constexpr while the required operations can be constexpr in C++20  | made constexpr  
  
### See also

[ swap](swap.html "cpp/utility/variant/swap") |  swaps with another `variant`   
(public member function)   
---|---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
