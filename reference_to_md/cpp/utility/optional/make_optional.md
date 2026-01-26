 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
**make_optional**  
[swap(std::optional)](swap2.html "cpp/utility/optional/swap2")  
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
constexpr [std::optional](../optional.html)<[std::decay_t](../../types/decay.html)<T>> make_optional( T&& value ); |  (1)  |  (since C++17)  
template< class T, class... Args >  
constexpr [std::optional](../optional.html)<T> make_optional( Args&&... args ); |  (2) | (since C++17)  
template< class T, class U, class... Args >  
constexpr [std::optional](../optional.html)<T> make_optional( [std::initializer_list](../initializer_list.html)<U> il,  
Args&&... args ); |  (3)  |  (since C++17)  
| |   
  
1) Creates an optional object from value. Effectively calls [std::optional](../optional.html)<[std::decay_t](../../types/decay.html)<T>>([std::forward](../forward.html)<T>(value)).

2) Creates an optional object constructed in-place from args.... Equivalent to return [std::optional](../optional.html)<T>([std::in_place](../in_place.html), [std::forward](../forward.html)<Args>(args)...);.  
This overload participates in overload resolution only if [std::is_constructible_v](../../types/is_constructible.html)<T, Args...> is true.

3) Creates an optional object constructed in-place from il and args.... Equivalent to return [std::optional](../optional.html)<T>([std::in_place](../in_place.html), il, [std::forward](../forward.html)<Args>(args)...);.  
This overload participates in overload resolution only if [std::is_constructible_v](../../types/is_constructible.html)<T, [std::initializer_list](../initializer_list.html)<U>&, Args...> is true.

## Contents

  * [1 Parameters](make_optional.html#Parameters)
  * [2 Return value](make_optional.html#Return_value)
  * [3 Exceptions](make_optional.html#Exceptions)
  * [4 Notes](make_optional.html#Notes)
  * [5 Example](make_optional.html#Example)
  * [6 See also](make_optional.html#See_also)

  
---  
  
### Parameters

value  |  \-  |  the value to construct optional object with   
---|---|---  
il, args  |  \-  |  arguments to be passed to the constructor of `T`  
  
### Return value

The constructed optional object. 

### Exceptions

Throws any exception thrown by the constructor of `T`. 

### Notes

`T` need not be movable for overloads ([2,3](make_optional.html#Version_2)) due to guaranteed copy elision. 

### Example

Run this code
    
    
    #include <iomanip>
    #include <iostream>
    #include <optional>
    #include <string>
    #include <vector>
     
    int main()
    {
        auto op1 = std::make_optional<[std::vector](../../container/vector.html)<char>>({'a','b','c'});
        [std::cout](../../io/cout.html) << "op1: ";
        for (char c : op1.value())
            [std::cout](../../io/cout.html) << c << ',';
        auto op2 = std::make_optional<[std::vector](../../container/vector.html)<int>>(5, 2);
        [std::cout](../../io/cout.html) << "\nop2: ";
        for (int i : *op2)
            [std::cout](../../io/cout.html) << i << ',';
        [std::string](../../string/basic_string.html) str{"hello world"};
        auto op3 = std::make_optional<[std::string](../../string/basic_string.html)>(std::move(str));
        [std::cout](../../io/cout.html) << "\nop3: " << [std::quoted](../../io/manip/quoted.html)(op3.value_or("empty value")) << '\n';
        [std::cout](../../io/cout.html) << "str: " << [std::quoted](../../io/manip/quoted.html)(str) << '\n';
    }

Possible output: 
    
    
    op1: a,b,c,
    op2: 2,2,2,2,2,
    op3: "hello world"
    str: ""

### See also

[ (constructor)](optional.html "cpp/utility/optional/optional") |  constructs the `optional` object   
(public member function)   
---|---
