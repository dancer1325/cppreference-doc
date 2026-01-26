 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
**optional::swap**  
[optional::reset](reset.html "cpp/utility/optional/reset")  
[Non-member functions](../optional.html#Non-member_functions "cpp/utility/optional")  
[operator==operator!=operator<operator<=operator>operator>=operator<=>](operator_cmp.html "cpp/utility/optional/operator cmp")(C++20)  
[make_optional](make_optional.html "cpp/utility/optional/make optional")  
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
  


void swap( optional& other ) noexcept(/* see below */); |  |  (since C++17)   
(constexpr since C++20)  
---|---|---  
| |   
  
Swaps the contents with those of other. 

  * If neither *this nor other contain a value, the function has no effect. 


  * If only one of *this and other contains a value (let's call this object `in` and the other `un`), the contained value of `un` is [direct-initialized](../../language/direct_initialization.html "cpp/language/direct initialization") from std::move(*in), followed by destruction of the contained value of `in` as if by in->T::~T(). After this call, `in` does not contain a value; `un` contains a value. 


  * If both *this and other contain values, the contained values are exchanged by calling using [std::swap](../../algorithm/swap.html); swap(**this, *other). 



The program is ill-formed unless type `T` is [Swappable](../../named_req/Swappable.html "cpp/named req/Swappable") and [std::is_move_constructible_v](../../types/is_move_constructible.html)<T> is true. 

## Contents

  * [1 Parameters](swap.html#Parameters)
  * [2 Return value](swap.html#Return_value)
  * [3 Exceptions](swap.html#Exceptions)
  * [4 Example](swap.html#Example)
  * [5 Defect reports](swap.html#Defect_reports)
  * [6 See also](swap.html#See_also)

  
---  
  
### Parameters

other  |  \-  |  the `optional` object to exchange the contents with   
---|---|---  
  
### Return value

(none) 

### Exceptions

[`noexcept`](../../language/noexcept_spec.html "cpp/language/noexcept spec") specification: 

noexcept([std::is_nothrow_move_constructible_v](../../types/is_move_constructible.html)<T> &&  
[std::is_nothrow_swappable_v](../../types/is_swappable.html)<T>)

In the case of thrown exception, the states of the contained values of *this and other are determined by the exception safety guarantees of `swap` of type `T` or `T`'s move constructor, whichever is called. For both *this and other, if the object contained a value, it is left containing a value, and the other way round. 

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
        [std::optional](../optional.html)<[std::string](../../string/basic_string.html)> opt1("First example text");
        [std::optional](../optional.html)<[std::string](../../string/basic_string.html)> opt2("2nd text");
     
        enum Swap { Before, After };
        auto print_opts = [&](Swap e)
        {
            [std::cout](../../io/cout.html) << (e == Before ? "Before swap:\n" : "After swap:\n");
            [std::cout](../../io/cout.html) << "opt1 contains '" << opt1.value_or("") << "'\n";
            [std::cout](../../io/cout.html) << "opt2 contains '" << opt2.value_or("") << "'\n";
            [std::cout](../../io/cout.html) << (e == Before ? "---SWAP---\n": "\n");
        };
     
        print_opts(Before);
        opt1.swap(opt2);
        print_opts(After);
     
        // Swap with only 1 set
        opt1 = "Lorem ipsum dolor sit amet, consectetur tincidunt.";
        opt2.reset();
     
        print_opts(Before);
        opt1.swap(opt2);
        print_opts(After);
    }

Output: 
    
    
    Before swap:
    opt1 contains 'First example text'
    opt2 contains '2nd text'
    ---SWAP---
    After swap:
    opt1 contains '2nd text'
    opt2 contains 'First example text'
     
    Before swap:
    opt1 contains 'Lorem ipsum dolor sit amet, consectetur tincidunt.'
    opt2 contains ''
    ---SWAP---
    After swap:
    opt1 contains ''
    opt2 contains 'Lorem ipsum dolor sit amet, consectetur tincidunt.'

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[P2231R1](https://wg21.link/P2231R1) | C++20  | `swap` was not constexpr while the required operations can be constexpr in C++20  | made constexpr  
  
### See also

[ std::swap(std::optional)](swap2.html "cpp/utility/optional/swap2")(C++17) |  specializes the [std::swap](../swap.html "cpp/algorithm/swap") algorithm   
(function template)   
---|---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
