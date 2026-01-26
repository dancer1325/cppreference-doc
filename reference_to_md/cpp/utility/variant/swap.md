 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
**variant::swap**  
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
[variant_size](variant_size.html "cpp/utility/variant/variant size")  
[variant_alternative](variant_alternative.html "cpp/utility/variant/variant alternative")  
[hash<std::variant>](hash.html "cpp/utility/variant/hash")  
[Helper objects](../variant.html#Helper_objects "cpp/utility/variant")  
[variant_npos](variant_npos.html "cpp/utility/variant/variant npos")  
  


void swap( variant& rhs ) noexcept(/* see below */); |  | (since C++17)   
(constexpr since C++20)  
---|---|---  
| |   
  
Swaps two [`variant`](../variant.html "cpp/utility/variant") objects. 

  * If both *this and rhs are valueless by exception, does nothing. 
  * Otherwise, if both *this and rhs hold the same alternative, calls swap(*[std::get_if](get_if.html)<i>(this), *[std::get_if](get_if.html)<i>([std::addressof](../../memory/addressof.html)(rhs))) where i is [`index()`](index.html "cpp/utility/variant/index"). If an exception is thrown, the state of the values depends on the exception safety of the `swap` function called. 
  * Otherwise, exchanges values of rhs and *this. If an exception is thrown, the state of *this and rhs depends on exception safety of variant's move constructor. 



The program is ill-formed unless type `T_i` are [Swappable](../../named_req/Swappable.html "cpp/named req/Swappable") and [std::is_move_constructible_v](../../types/is_move_constructible.html)<T_i> is true for all `T_i` in `Types...`. 

## Contents

  * [1 Parameters](swap.html#Parameters)
  * [2 Return value](swap.html#Return_value)
  * [3 Exceptions](swap.html#Exceptions)
  * [4 Notes](swap.html#Notes)
  * [5 Example](swap.html#Example)
  * [6 Defect reports](swap.html#Defect_reports)
  * [7 See also](swap.html#See_also)

  
---  
  
### Parameters

rhs  |  \-  |  a `variant` object to swap with   
---|---|---  
  
### Return value

(none) 

### Exceptions

If this->index() == rhs.index(), may throw any exception thrown by swap(*[std::get_if](get_if.html)<i>(this), *[std::get_if](get_if.html)<i>([std::addressof](../../memory/addressof.html)(rhs))) with i being [`index()`](index.html "cpp/utility/variant/index"). 

Otherwise, may throw any exception thrown by the move constructors of the alternatives currently held by *this and rhs. 

[`noexcept`](../../language/noexcept_spec.html "cpp/language/noexcept spec") specification: 

noexcept((([std::is_nothrow_move_constructible_v](../../types/is_move_constructible.html)<Types> &&  
[std::is_nothrow_swappable_v](../../types/is_swappable.html)<Types>) && ...))

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
     
    int main()
    {
        [std::variant](../variant.html)<int, [std::string](../../string/basic_string.html)> v1{2}, v2{"abc"};
        [std::visit](visit.html)([](auto&& x) { [std::cout](../../io/cout.html) << x << ' '; }, v1);
        [std::visit](visit.html)([](auto&& x) { [std::cout](../../io/cout.html) << x << '\n'; }, v2);
        v1.swap(v2);
        [std::visit](visit.html)([](auto&& x) { [std::cout](../../io/cout.html) << x << ' '; }, v1);
        [std::visit](visit.html)([](auto&& x) { [std::cout](../../io/cout.html) << x << '\n'; }, v2);
    }

Output: 
    
    
    2 abc
    abc 2

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[P2231R1](https://wg21.link/P2231R1) | C++20  | `swap` was not constexpr while non-trivial destructors can be constexpr in C++20  | made constexpr  
  
### See also

[ std::swap(std::variant)](swap2.html "cpp/utility/variant/swap2")(C++17) |  specializes the [std::swap](../swap.html "cpp/algorithm/swap") algorithm   
(function template)   
---|---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
