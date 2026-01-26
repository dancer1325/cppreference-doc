 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
[swap(std::optional)](swap2.html "cpp/utility/optional/swap2")  
[Deduction guides](deduction_guides.html "cpp/utility/optional/deduction guides")  
[Helper classes](../optional.html#Helper_classes "cpp/utility/optional")  
**hash <std::optional>**  
[nullopt_t](nullopt_t.html "cpp/utility/optional/nullopt t")  
[in_place_t](../in_place.html "cpp/utility/in place")  
[bad_optional_access](../bad_optional_access.html "cpp/utility/optional/bad optional access")  
[Helper objects](../optional.html#Helpers "cpp/utility/optional")  
[nullopt](nullopt.html "cpp/utility/optional/nullopt")  
[in_place](../in_place.html "cpp/utility/in place")  
  


Defined in header `[<optional>](../../header/optional.html "cpp/header/optional")` |  |   
---|---|---  
template< class T >  
struct hash<[std::optional](../optional.html)<T>>; |  |  (since C++17)  
| |   
  
The template specialization of [std::hash](../hash.html "cpp/utility/hash") for the [std::optional](../optional.html "cpp/utility/optional") class allows users to obtain hashes of the values contained in `optional` objects. 

The specialization `std::hash`<[std::optional](../optional.html)<T>> is enabled (see [std::hash](../hash.html "cpp/utility/hash")) if [std::hash](../hash.html)<[std::remove_const_t](../../types/remove_cv.html)<T>> is enabled, and is disabled otherwise. 

When enabled, for an object `o` of type [std::optional](../optional.html)<T> that contains a value, `std::hash`<[std::optional](../optional.html)<T>>()(o) evaluates to the same value as [std::hash](../hash.html)<[std::remove_const_t](../../types/remove_cv.html)<T>>()(*o). For an optional that does not contain a value, the hash is unspecified. 

The member functions of this specialization are not guaranteed to be noexcept because the hash of the underlying type might throw. 

### Template parameters

T  |  \-  |  the type of the value contained in `optional` object   
---|---|---  
  
### Example

Run this code
    
    
    #include <iostream>
    #include <optional>
    #include <string>
    #include <unordered_set>
     
    using namespace std::literals;
     
    int main()
    {
        using OptStr = [std::optional](../optional.html)<[std::string](../../string/basic_string.html)>;
     
        // hash<optional> makes it possible to use unordered_set
        [std::unordered_set](../../container/unordered_set.html)<OptStr> s =
        {
            "ABC"s, "abc"s, [std::nullopt](nullopt.html), "def"s
        };
     
        for (const auto& o : s)
            [std::cout](../../io/cout.html) << o.value_or("(null)") << '\t' << [std::hash](../hash.html)<OptStr>{}(o) << '\n';
    }

Possible output: 
    
    
    def     11697390762615875584
    (null)  18446744073709548283
    abc     3663726644998027833
    ABC     11746482041453314842

### See also

[ hash](../hash.html "cpp/utility/hash")(C++11) |  hash function object   
(class template)   
---|---
