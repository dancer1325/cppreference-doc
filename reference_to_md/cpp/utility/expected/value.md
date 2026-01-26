 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::expected`](../expected.html "cpp/utility/expected")

[Member functions](../expected.html#Member_functions "cpp/utility/expected")  
---  
[expected::expected](expected.html "cpp/utility/expected/expected")  
[expected::~expected](~expected.html "cpp/utility/expected/~expected")  
[expected::operator=](operator=.html "cpp/utility/expected/operator=")  
[Observers](../expected.html#Observers "cpp/utility/expected")  
[expected::operator->expected::operator*](operator*.html "cpp/utility/expected/operator*")  
[expected::operator boolexpected::has_value](operator_bool.html "cpp/utility/expected/operator bool")  
**expected::value**  
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
constexpr T& value() &; |  (1)  |  (since C++23)  
constexpr const T& value() const&; |  (2)  |  (since C++23)  
constexpr T&& value() &&; |  (3)  |  (since C++23)  
constexpr const T&& value() const&&; |  (4)  |  (since C++23)  
void partial specialization |  |   
constexpr void value() const&; |  (5)  |  (since C++23)  
constexpr void value() &&; |  (6)  |  (since C++23)  
| |   
  
If *this contains an expected value, returns a reference to the contained value. Returns nothing for void partial specialization. 

Otherwise, throws an exception of type [std::bad_expected_access](bad_expected_access.html)<[std::decay_t](../../types/decay.html)<E>> that contains a copy of [`error()`](error.html "cpp/utility/expected/error"). 

1,2) If [std::is_copy_constructible_v](../../types/is_copy_constructible.html)<E> is false, the program is ill-formed.

3,4) If [std::is_copy_constructible_v](../../types/is_copy_constructible.html)<E> or [std::is_constructible_v](../../types/is_constructible.html)<E, decltype(std::move(error()))> is false, the program is ill-formed.

5) If [std::is_copy_constructible_v](../../types/is_copy_constructible.html)<E> is false, the program is ill-formed.

6) If [std::is_move_constructible_v](../../types/is_move_constructible.html)<E> is false, the program is ill-formed.

## Contents

  * [1 Return value](value.html#Return_value)
  * [2 Exceptions](value.html#Exceptions)
  * [3 Example](value.html#Example)
  * [4 Defect reports](value.html#Defect_reports)
  * [5 See also](value.html#See_also)

  
---  
  
### Return value

1,2) [`_val_`](../expected.html#Data_members "cpp/utility/expected")

3,4) std::move(`_val_`)

### Exceptions

1,2,5) Throws [std::bad_expected_access](bad_expected_access.html)([std::as_const](../as_const.html)(error())) if *this contains an unexpected value.

3,4,6) Throws [std::bad_expected_access](bad_expected_access.html)(std::move(error())) if *this contains an unexpected value.

### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3940](https://cplusplus.github.io/LWG/issue3940) | C++23  | `E` was not required to be copy/move-constructible for overloads (5,6) | required   
  
### See also

[ value_or](value_or.html "cpp/utility/expected/value or") |  returns the expected value if present, another value otherwise   
(public member function)   
---|---  
[ operator->operator*](operator*.html "cpp/utility/expected/operator*") |  accesses the expected value   
(public member function)   
[ error](error.html "cpp/utility/expected/error") |  returns the unexpected value   
(public member function)   
[ bad_expected_access](bad_expected_access.html "cpp/utility/expected/bad expected access")(C++23) |  exception indicating checked access to an `expected` that contains an unexpected value   
(class template) 
