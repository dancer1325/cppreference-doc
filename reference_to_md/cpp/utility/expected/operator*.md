 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::expected`](../expected.html "cpp/utility/expected")

[Member functions](../expected.html#Member_functions "cpp/utility/expected")  
---  
[expected::expected](expected.html "cpp/utility/expected/expected")  
[expected::~expected](~expected.html "cpp/utility/expected/~expected")  
[expected::operator=](operator=.html "cpp/utility/expected/operator=")  
[Observers](../expected.html#Observers "cpp/utility/expected")  
**expected::operator- >expected::operator***  
[expected::operator boolexpected::has_value](operator_bool.html "cpp/utility/expected/operator bool")  
[expected::value](value.html "cpp/utility/expected/value")  
[expected::error](error.html "cpp/utility/expected/error")  
[expected::value_or](value_or.html "cpp/utility/expected/value or")  
[expected::error_or](error_or.html "cpp/utility/expected/error or")  
[Monadic operations](../expected.html#Monadic_operations "cpp/utility/expected")  
[expected::and_then](and_then.html "cpp/utility/expected/and then")  
[expected::or_else](or_else.html "cpp/utility/expected/or else")  
[expected::transform](transform.html "cpp/utility/expected/transform")  
[expected::transform_error](transform_error.html "cpp/utility/expected/transform error")  
[Modifiers](../expected.html#Modifiers "cpp/utility/expected")  
[expected::emplace](emplace.html "cpp/utility/expected/emplace")  
[expected::swap](swap.html "cpp/utility/expected/swap")  
[Non-member functions](../expected.html#Non-member_functions "cpp/utility/expected")  
[operator==(std::expected)](operator_cmp.html "cpp/utility/expected/operator cmp")  
[swap(std::expected)](swap2.html "cpp/utility/expected/swap2")  
[Helper classes](../expected.html#Helper_classes "cpp/utility/expected")  
[unexpected](unexpected.html "cpp/utility/expected/unexpected")  
[bad_expected_access](bad_expected_access.html "cpp/utility/expected/bad expected access")  
[unexpect_tunexpect](unexpect_t.html "cpp/utility/expected/unexpect t")  
  


Primary template |  |   
---|---|---  
constexpr const T* operator->() const noexcept; |  (1)  |  (since C++23)  
constexpr T* operator->() noexcept; |  (2)  |  (since C++23)  
constexpr const T& operator*() const& noexcept; |  (3)  |  (since C++23)  
constexpr T& operator*() & noexcept; |  (4)  |  (since C++23)  
constexpr const T&& operator*() const&& noexcept; |  (5)  |  (since C++23)  
constexpr T&& operator*() && noexcept; |  (6)  |  (since C++23)  
void partial specialization |  |   
constexpr void operator*() const noexcept; |  (7)  |  (since C++23)  
| |   
  
Accesses the expected value contained in *this. 

1,2) Returns a pointer to the expected value.

3-6) Returns a reference to the expected value.

7) Returns nothing.

If has_value() is false, the behavior is undefined.  | (until C++26)  
---|---  
If has_value() is false: 

  * If the implementation is [hardened](../../standard_library.html#Standard_library_hardening "cpp/standard library"), a [contract violation](../../language/contracts.html "cpp/language/contracts") occurs. Moreover, if the contract-violation handler returns under “observe” evaluation semantic, the behavior is undefined. 
  * If the implementation is not hardened, the behavior is undefined. 

| (since C++26)  
  
## Contents

  * [1 Return value](operator*.html#Return_value)
  * [2 Notes](operator*.html#Notes)
  * [3 Example](operator*.html#Example)
  * [4 See also](operator*.html#See_also)

  
---  
  
### Return value

1,2) [std::addressof](../../memory/addressof.html)(`_[val](../expected.html#val "cpp/utility/expected")_` ﻿)

3,4) `_[val](../expected.html#val "cpp/utility/expected")_`

5,6) std::[`move`](../move.html "cpp/utility/move")(`_[val](../expected.html#val "cpp/utility/expected")_` ﻿)

### Notes

These operators do not check whether the optional represents an expected value, users can do so manually by using [`has_value()`](operator_bool.html "cpp/utility/expected/operator bool") or [`operator bool()`](operator_bool.html "cpp/utility/expected/operator bool"). Alternatively, if checked access is needed, [`value()`](value.html "cpp/utility/expected/value") or [`value_or()`](value_or.html "cpp/utility/expected/value or") may be used. 

### Example

Run this code
    
    
    #include <cassert>
    #include <expected>
    #include <iomanip>
    #include <iostream>
    #include <string>
     
    int main()
    {
        using namespace std::string_literals;
     
        [std::expected](../expected.html)<int, [std::string](../../string/basic_string.html)> ex1 = 6;
        [assert](../../error/assert.html)(*ex1 == 6);
     
        *ex1 = 9;
        [assert](../../error/assert.html)(*ex1 == 9);
     
        // *ex1 = "error"s; // error, ex1 contains an expected value of type int
        ex1 = [std::unexpected](unexpected.html)("error"s);
        // *ex1 = 13; // UB, ex1 contains an unexpected value
        [assert](../../error/assert.html)(ex1.value_or(42) == 42);
     
        [std::expected](../expected.html)<[std::string](../../string/basic_string.html), bool> ex2 = "Moon"s;
        [std::cout](../../io/cout.html) << "ex2: " << [std::quoted](../../io/manip/quoted.html)(*ex2) << ", size: " << ex2->size() << '\n';
     
        // You can "take" the expected value by calling operator* on an std::expected rvalue
     
        auto taken = *std::move(ex2);
        [std::cout](../../io/cout.html) << "taken " << [std::quoted](../../io/manip/quoted.html)(taken) << "\n"
                     "ex2: " << [std::quoted](../../io/manip/quoted.html)(*ex2) << ", size: " << ex2->size() << '\n';
    }

Possible output: 
    
    
    ex2: "Moon", size: 4
    taken "Moon"
    ex2: "", size: 0

### See also

[ value](value.html "cpp/utility/expected/value") |  returns the expected value   
(public member function)   
---|---  
[ value_or](value_or.html "cpp/utility/expected/value or") |  returns the expected value if present, another value otherwise   
(public member function)   
[ operator boolhas_value](operator_bool.html "cpp/utility/expected/operator bool") |  checks whether the object contains an expected value   
(public member function)   
[ error](error.html "cpp/utility/expected/error") |  returns the unexpected value   
(public member function) 
