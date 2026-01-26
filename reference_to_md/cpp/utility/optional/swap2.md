 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::optional`](../optional.html "cpp/utility/optional")

[Member functions](../optional.html#Member_functions "cpp/utility/optional")  
---  
[optional::optional](optional.html "cpp/utility/optional/optional")  
[optional::~optional](~optional.html "cpp/utility/optional/~optional")  
[optional::operator=](operator=.html "cpp/utility/optional/operator=")  
[Observers](../optional.html#Observers "cpp/utility/optional")  
[optional::operator->optional::operator*](operator*.html "cpp/utility/optional/operator*")  
[optional::operator booloptional::has_value](operator_bool.html "cpp/utility/optional/operator bool")  
[optional::value](value.html "cpp/utility/optional/value")  
[optional::value_or](value_or.html "cpp/utility/optional/value or")  
[Iterators](../optional.html#Iterators "cpp/utility/optional")  
[optional::begin](begin.html "cpp/utility/optional/begin")(C++26)  
[optional::end](end.html "cpp/utility/optional/end")(C++26)  
[Monadic operations](../optional.html#Monadic_operations "cpp/utility/optional")  
[optional::and_then](and_then.html "cpp/utility/optional/and then")(C++23)  
[optional::transform](transform.html "cpp/utility/optional/transform")(C++23)  
[optional::or_else](or_else.html "cpp/utility/optional/or else")(C++23)  
[Modifiers](../optional.html#Modifiers "cpp/utility/optional")  
[optional::emplace](emplace.html "cpp/utility/optional/emplace")  
[optional::swap](swap.html "cpp/utility/optional/swap")  
[optional::reset](reset.html "cpp/utility/optional/reset")  
[Non-member functions](../optional.html#Non-member_functions "cpp/utility/optional")  
[operator==operator!=operator<operator<=operator>operator>=operator<=>](operator_cmp.html "cpp/utility/optional/operator cmp")(C++20)  
[make_optional](make_optional.html "cpp/utility/optional/make optional")  
**swap(std::optional)**  
[Deduction guides](deduction_guides.html "cpp/utility/optional/deduction guides")  
[Helper classes](../optional.html#Helper_classes "cpp/utility/optional")  
[hash<std::optional>](hash.html "cpp/utility/optional/hash")  
[nullopt_t](nullopt_t.html "cpp/utility/optional/nullopt t")  
[in_place_t](../in_place.html "cpp/utility/in place")  
[bad_optional_access](../bad_optional_access.html "cpp/utility/optional/bad optional access")  
[Helper objects](../optional.html#Helpers "cpp/utility/optional")  
[nullopt](nullopt.html "cpp/utility/optional/nullopt")  
[in_place](../in_place.html "cpp/utility/in place")  
  


Defined in header `[<optional>](../../header/optional.html "cpp/header/optional")` |  |   
---|---|---  
template< class T >  
void swap( [std::optional](../optional.html)<T>& lhs,  
[std::optional](../optional.html)<T>& rhs ) noexcept(/* see below */); |  |  (since C++17)   
(constexpr since C++20)  
| |   
  
Overloads the [std::swap](../swap.html "cpp/algorithm/swap") algorithm for [std::optional](../optional.html "cpp/utility/optional"). Exchanges the state of lhs with that of rhs. Effectively calls lhs.swap(rhs). 

This overload participates in overload resolution only if [std::is_move_constructible_v](../../types/is_move_constructible.html)<T> and [std::is_swappable_v](../../types/is_swappable.html)<T> are both true. 

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

lhs, rhs  |  \-  |  `optional` objects whose states to swap   
---|---|---  
  
### Return value

(none) 

### Exceptions

[`noexcept`](../../language/noexcept_spec.html "cpp/language/noexcept spec") specification: 

noexcept(noexcept(lhs.swap(rhs)))

### Notes

[Feature-test](../feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_optional`](../../experimental/feature_test.html#cpp_lib_optional "cpp/feature test") | [`202106L`](../../compiler_support/20.html#cpp_lib_optional_202106L "cpp/compiler support/20") | (C++20)  
(DR20) | Fully constexpr  
  
### Example

Run this code
    
    
    #include <iostream>
    #include <optional>
    #include <string>
     
    int main()
    {
        [std::optional](../optional.html)<[std::string](../../string/basic_string.html)> a{"██████"}, b{"▒▒▒▒▒▒"};
     
        auto print = [&](auto const& s)
        {
            [std::cout](../../io/cout.html) << s << "\t"
                         "a = " << a.value_or("(null)") << "  "
                         "b = " << b.value_or("(null)") << '\n';
        };
     
        print("Initially:");
        [std::swap](../../algorithm/swap.html)(a, b);
        print("swap(a, b):");
        a.reset();
        print("\n""a.reset():");
        [std::swap](../../algorithm/swap.html)(a, b);
        print("swap(a, b):");
    }

Output: 
    
    
    Initially:   a = ██████  b = ▒▒▒▒▒▒
    swap(a, b):  a = ▒▒▒▒▒▒  b = ██████
     
    a.reset():   a = (null)  b = ██████
    swap(a, b):  a = ██████  b = (null)

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[P2231R1](https://wg21.link/P2231R1) | C++20  | `swap` was not constexpr while the required operations can be constexpr in C++20  | made constexpr  
  
### See also

[ swap](swap.html "cpp/utility/optional/swap") |  exchanges the contents   
(public member function)   
---|---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
