 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
**optional::end**(C++26)  
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
  


constexpr iterator end() noexcept; |  |  (since C++26)  
---|---|---  
constexpr const_iterator end() const noexcept; |  |  (since C++26)  
| |   
  
Returns a past-the-end iterator. Equivalent to return begin() + has_value();. 

![range-begin-end.svg](https://upload.cppreference.com/mwiki/images/1/1b/range-begin-end.svg)

## Contents

  * [1 Return value](end.html#Return_value)
  * [2 Complexity](end.html#Complexity)
  * [3 Notes](end.html#Notes)
  * [4 Example](end.html#Example)
  * [5 See also](end.html#See_also)

  
---  
  
### Return value

Past-the-end iterator 

### Complexity

Constant. 

### Notes

[Feature-test](../feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_optional_range_support`](../../experimental/feature_test.html#cpp_lib_optional_range_support "cpp/feature test") | [`202406L`](../../compiler_support/26.html#cpp_lib_optional_range_support_202406L "cpp/compiler support/26") | (C++26) | Range support for [std::optional](../optional.html "cpp/utility/optional")  
  
### Example

Run this code
    
    
    #include <optional>
    #include <print>
     
    int main()
    {
        constexpr [std::optional](../optional.html)<int> none{[std::nullopt](nullopt.html)}; // optional @1
        constexpr [std::optional](../optional.html)<int> some{42};           // optional @2
     
        static_assert(none.begin() == none.end());
        static_assert(some.begin() != some.end());
     
        // ranged-for loop support
        for (int i : none)
            [std::println](../../io/println.html)("Optional @1 has a value of {}", i);
     
        for (int i : some)
            [std::println](../../io/println.html)("Optional @2 has a value of {}", i);
    }

Output: 
    
    
    Optional @2 has a value of 42

### See also

[ begin](begin.html "cpp/utility/optional/begin")(C++26) |  returns an iterator to the beginning   
(public member function)   
---|---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
