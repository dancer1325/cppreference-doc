 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::optional`](../optional.html "cpp/utility/optional")

[Member functions](../optional.html#Member_functions "cpp/utility/optional")  
---  
[optional::optional](optional.html "cpp/utility/optional/optional")  
[optional::~optional](~optional.html "cpp/utility/optional/~optional")  
[optional::operator=](operator=.html "cpp/utility/optional/operator=")  
[Observers](../optional.html#Observers "cpp/utility/optional")  
[optional::operator->optional::operator*](operator*.html "cpp/utility/optional/operator*")  
[optional::operator booloptional::has_value](operator_bool.html "cpp/utility/optional/operator bool")  
**optional::value**  
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
  


constexpr T& value() &;  
constexpr const T& value() const &; |  (1)  |  (since C++17)  
---|---|---  
constexpr T&& value() &&;  
constexpr const T&& value() const &&; |  (2)  |  (since C++17)  
| |   
  
If *this contains a value, returns a reference to the contained value. 

Otherwise, throws a [std::bad_optional_access](../bad_optional_access.html "cpp/utility/optional/bad optional access") exception. 

## Contents

  * [1 Parameters](value.html#Parameters)
  * [2 Return value](value.html#Return_value)
  * [3 Exceptions](value.html#Exceptions)
  * [4 Notes](value.html#Notes)
  * [5 Example](value.html#Example)
  * [6 See also](value.html#See_also)

  
---  
  
### Parameters

(none) 

### Return value

A reference to the contained value. 

### Exceptions

[std::bad_optional_access](../bad_optional_access.html "cpp/utility/optional/bad optional access") if *this does not contain a value. 

### Notes

The dereference operator [operator*()](operator*.html "cpp/utility/optional/operator*") does not check if this optional contains a value, which may be more efficient than `value()`. 

### Example

Run this code
    
    
    #include <iostream>
    #include <optional>
     
    int main()
    {
        [std::optional](../optional.html)<int> opt = {};
     
        try
        {
            [[maybe_unused]] int n = opt.value();
        }
        catch(const [std::bad_optional_access](../bad_optional_access.html)& e)
        {
            [std::cout](../../io/cout.html) << e.what() << '\n';
        }
     
        try
        {
            opt.value() = 42;
        }
        catch(const [std::bad_optional_access](../bad_optional_access.html)& e)
        {
            [std::cout](../../io/cout.html) << e.what() << '\n';
        }
     
        opt = 43;
        [std::cout](../../io/cout.html) << *opt << '\n';
     
        opt.value() = 44;
        [std::cout](../../io/cout.html) << opt.value() << '\n';
    }

Output: 
    
    
    bad optional access
    bad optional access
    43
    44

### See also

[ value_or](value_or.html "cpp/utility/optional/value or") |  returns the contained value if available, another value otherwise   
(public member function)   
---|---  
[ operator->operator*](operator*.html "cpp/utility/optional/operator*") |  accesses the contained value   
(public member function)   
[ bad_optional_access](../bad_optional_access.html "cpp/utility/optional/bad optional access")(C++17) |  exception indicating checked access to an optional that doesn't contain a value   
(class) 
