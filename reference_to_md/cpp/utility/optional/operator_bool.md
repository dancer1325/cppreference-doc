 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::optional`](../optional.html "cpp/utility/optional")

[Member functions](../optional.html#Member_functions "cpp/utility/optional")  
---  
[optional::optional](optional.html "cpp/utility/optional/optional")  
[optional::~optional](~optional.html "cpp/utility/optional/~optional")  
[optional::operator=](operator=.html "cpp/utility/optional/operator=")  
[Observers](../optional.html#Observers "cpp/utility/optional")  
[optional::operator->optional::operator*](operator*.html "cpp/utility/optional/operator*")  
**optional::operator bool optional::has_value**  
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
  


constexpr explicit operator bool() const noexcept; |  |  (since C++17)  
---|---|---  
constexpr bool has_value() const noexcept; |  |  (since C++17)  
| |   
  
Checks whether *this contains a value. 

### Return value

true if *this contains a value, false if *this does not contain a value. 

### Example

Run this code
    
    
    #include <iostream>
    #include <optional>
     
    int main()
    {
        [std::cout](../../io/cout.html) << [std::boolalpha](../../io/manip/boolalpha.html);
     
        [std::optional](../optional.html)<int> opt;
        [std::cout](../../io/cout.html) << opt.has_value() << '\n';
     
        opt = 43;
        if (opt)
            [std::cout](../../io/cout.html) << "value set to " << opt.value() << '\n';
        else
            [std::cout](../../io/cout.html) << "value not set\n";
     
        opt.reset();
        if (opt.has_value())
            [std::cout](../../io/cout.html) << "value still set to " << opt.value() << '\n';
        else
            [std::cout](../../io/cout.html) << "value no longer set\n";
    }

Output: 
    
    
    false
    value set to 43
    value no longer set

### See also

[ operator boolhas_value](../expected/operator_bool.html "cpp/utility/expected/operator bool") |  checks whether the object contains an expected value   
(public member function of `std::expected<T,E>`)   
---|---
