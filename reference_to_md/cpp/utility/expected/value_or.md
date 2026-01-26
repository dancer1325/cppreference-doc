 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::expected`](../expected.html "cpp/utility/expected")

[Member functions](../expected.html#Member_functions "cpp/utility/expected")  
---  
[expected::expected](expected.html "cpp/utility/expected/expected")  
[expected::~expected](~expected.html "cpp/utility/expected/~expected")  
[expected::operator=](operator=.html "cpp/utility/expected/operator=")  
[Observers](../expected.html#Observers "cpp/utility/expected")  
[expected::operator->expected::operator*](operator*.html "cpp/utility/expected/operator*")  
[expected::operator boolexpected::has_value](operator_bool.html "cpp/utility/expected/operator bool")  
[expected::value](value.html "cpp/utility/expected/value")  
[expected::error](error.html "cpp/utility/expected/error")  
**expected::value_or**  
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
template< class U = [std::remove_cv_t](../../types/remove_cv.html)<T> >   
constexpr T value_or( U&& default_value ) const&; |  (1)  |  (since C++23)  
template< class U = [std::remove_cv_t](../../types/remove_cv.html)<T> >   
constexpr T value_or( U&& default_value ) &&; |  (2)  |  (since C++23)  
| |   
  
Returns the expected value if it exists, otherwise returns default_value. 

The void partial specialization does not have these member functions. 

1) If [std::is_copy_constructible_v](../../types/is_copy_constructible.html)<T> or [std::is_convertible_v](../../types/is_convertible.html)<U, T> is false, the program is ill-formed.

2) If [std::is_move_constructible_v](../../types/is_move_constructible.html)<T> or [std::is_convertible_v](../../types/is_convertible.html)<U, T> is false, the program is ill-formed.

## Contents

  * [1 Parameters](value_or.html#Parameters)
  * [2 Return value](value_or.html#Return_value)
  * [3 Example](value_or.html#Example)
  * [4 Defect reports](value_or.html#Defect_reports)
  * [5 See also](value_or.html#See_also)

  
---  
  
### Parameters

default_value  |  \-  |  the value to use in case *this does not contain an expected value   
---|---|---  
  
### Return value

1) has_value() ? **this : static_cast<T>([std::forward](../forward.html)<U>(default_value))

2) has_value() ? std::move(**this) : static_cast<T>([std::forward](../forward.html)<U>(default_value))

### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3886](https://cplusplus.github.io/LWG/issue3886) | C++23  | `U` does not have a default template argument  | specified   
  
### See also

[ value](value.html "cpp/utility/expected/value") |  returns the expected value   
(public member function)   
---|---  
[ error_or](error_or.html "cpp/utility/expected/error or") |  returns the unexpected value if present, another value otherwise   
(public member function) 
