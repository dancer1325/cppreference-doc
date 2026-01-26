 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::optional`](../optional.html "cpp/utility/optional")

[Member functions](../optional.html#Member_functions "cpp/utility/optional")  
---  
[optional::optional](optional.html "cpp/utility/optional/optional")  
[optional::~optional](~optional.html "cpp/utility/optional/~optional")  
[optional::operator=](operator=.html "cpp/utility/optional/operator=")  
[Observers](../optional.html#Observers "cpp/utility/optional")  
**optional::operator- >optional::operator***  
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
[hash<std::optional>](hash.html "cpp/utility/optional/hash")  
[nullopt_t](nullopt_t.html "cpp/utility/optional/nullopt t")  
[in_place_t](../in_place.html "cpp/utility/in place")  
[bad_optional_access](../bad_optional_access.html "cpp/utility/optional/bad optional access")  
[Helper objects](../optional.html#Helpers "cpp/utility/optional")  
[nullopt](nullopt.html "cpp/utility/optional/nullopt")  
[in_place](../in_place.html "cpp/utility/in place")  
  


constexpr const T* operator->() const noexcept; |  (1)  |  (since C++17)  
---|---|---  
constexpr T* operator->() noexcept; |  (2)  |  (since C++17)  
constexpr const T& operator*() const& noexcept; |  (3)  |  (since C++17)  
constexpr T& operator*() & noexcept; |  (4)  |  (since C++17)  
constexpr const T&& operator*() const&& noexcept; |  (5)  |  (since C++17)  
constexpr T&& operator*() && noexcept; |  (6)  |  (since C++17)  
| |   
  
Accesses the contained value. 

1,2) Returns a pointer to the contained value.

3-6) Returns a reference to the contained value.

If [has_value()](operator_bool.html "cpp/utility/optional/operator bool") is false, the behavior is undefined.  | (until C++26)  
---|---  
If [has_value()](operator_bool.html "cpp/utility/optional/operator bool") is false: 

  * If the implementation is [hardened](../../standard_library.html#Standard_library_hardening "cpp/standard library"), a [contract violation](../../language/contracts.html "cpp/language/contracts") occurs. Moreover, if the contract-violation handler returns under “observe” evaluation semantic, the behavior is undefined. 
  * If the implementation is not hardened, the behavior is undefined. 

| (since C++26)  
  
## Contents

  * [1 Return value](operator*.html#Return_value)
  * [2 Notes](operator*.html#Notes)
  * [3 Example](operator*.html#Example)
  * [4 Defect reports](operator*.html#Defect_reports)
  * [5 See also](operator*.html#See_also)

  
---  
  
### Return value

1,2) `_[val](../optional.html#val "cpp/utility/optional")_`

3,4) *`_[val](../optional.html#val "cpp/utility/optional")_`

5,6) std::move(*`_[val](../optional.html#val "cpp/utility/optional")_` ﻿)

### Notes

This operator does not check whether *this contains a value, users can do so manually by using [has_value()](operator_bool.html "cpp/utility/optional/operator bool") or [operator bool()](operator_bool.html "cpp/utility/optional/operator bool"). Alternatively, if checked access is needed, [value()](value.html "cpp/utility/optional/value") or [value_or()](value_or.html "cpp/utility/optional/value or") may be used. 

### Example

Run this code
    
    
    #include <iomanip>
    #include <iostream>
    #include <optional>
    #include <string>
     
    int main()
    {
        using namespace std::string_literals;
     
        [std::optional](../optional.html)<int> opt1{1};
        [std::cout](../../io/cout.html) << "opt1: " << *opt1 << '\n';
     
        *opt1 = 2;
        [std::cout](../../io/cout.html) << "opt1: " << *opt1 << '\n';
     
        [std::optional](../optional.html)<[std::string](../../string/basic_string.html)> opt2{"abc"s};
        [std::cout](../../io/cout.html) << "opt2: " << [std::quoted](../../io/manip/quoted.html)(*opt2) << ", size: " << opt2->size() << '\n';
     
        // You can “take” the contained value by calling operator* on an rvalue to optional
        auto taken = *std::move(opt2);
        [std::cout](../../io/cout.html) << "taken: " << [std::quoted](../../io/manip/quoted.html)(taken) << "\n"
                     "opt2: " << [std::quoted](../../io/manip/quoted.html)(*opt2) << ", size: " << opt2->size() << '\n';
    }

Output: 
    
    
    opt1: 1
    opt1: 2
    opt2: "abc", size: 3
    taken: "abc"
    opt2: "", size: 0

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2762](https://cplusplus.github.io/LWG/issue2762) | C++17  | `operator->` and `operator*` might be potentially-throwing  | made noexcept   
  
### See also

[ value](value.html "cpp/utility/optional/value") |  returns the contained value   
(public member function)   
---|---  
[ value_or](value_or.html "cpp/utility/optional/value or") |  returns the contained value if available, another value otherwise   
(public member function) 
