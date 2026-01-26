 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
**optional::value_or**  
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
  


template< class U = [std::remove_cv_t](../../types/remove_cv.html)<T> >   
constexpr T value_or( U&& default_value ) const&; |  (1)  |  (since C++17)  
---|---|---  
template< class U = [std::remove_cv_t](../../types/remove_cv.html)<T> >   
constexpr T value_or( U&& default_value ) &&; |  (2)  |  (since C++17)  
| |   
  
Returns the contained value if *this contains a value, otherwise returns default_value. 

1) If [std::is_copy_constructible_v](../../types/is_copy_constructible.html)<T> && [std::is_convertible_v](../../types/is_convertible.html)<U&&, T> is false, the program is ill-formed.

2) If [std::is_move_constructible_v](../../types/is_move_constructible.html)<T> && [std::is_convertible_v](../../types/is_convertible.html)<U&&, T> is false, the program is ill-formed.

## Contents

  * [1 Parameters](value_or.html#Parameters)
  * [2 Return value](value_or.html#Return_value)
  * [3 Example](value_or.html#Example)
  * [4 Defect reports](value_or.html#Defect_reports)
  * [5 See also](value_or.html#See_also)

  
---  
  
### Parameters

default_value  |  \-  |  the value to be returned if *this does not contain a value   
---|---|---  
  
### Return value

1) has_value() ? **this : static_cast<T>([std::forward](../forward.html)<U>(default_value));

2) has_value() ? std::move(**this) : static_cast<T>([std::forward](../forward.html)<U>(default_value))

### Example

Run this code
    
    
    #include <cstdlib>
    #include <iostream>
    #include <optional>
     
    [std::optional](../optional.html)<const char*> maybe_getenv(const char* n)
    {
        if (const char* x = [std::getenv](../program/getenv.html)(n))
            return x;
        else
            return {};
    }
     
    int main()
    {
        [std::cout](../../io/cout.html) << maybe_getenv("SHELL").value_or("(none)") << '\n';
        [std::cout](../../io/cout.html) << maybe_getenv("MYPWD").value_or("(none)") << '\n';
    }

Possible output: 
    
    
    /usr/bin/zsh
    (none)

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3886](https://cplusplus.github.io/LWG/issue3886) | C++17  | `U` does not have a default template argument  | specified   
  
### See also

[ value](value.html "cpp/utility/optional/value") |  returns the contained value   
(public member function)   
---|---
