 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
[expected::value_or](value_or.html "cpp/utility/expected/value or")  
**expected::error_or**  
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
  


template< class G = E >   
constexpr E error_or( G&& default_value ) const&; |  (1)  |  (since C++23)  
---|---|---  
template< class G = E >   
constexpr E error_or( G&& default_value ) &&; |  (2)  |  (since C++23)  
| |   
  
Returns the unexpected value if it exists, otherwise returns default_value. 

1) If [std::is_copy_constructible_v](../../types/is_copy_constructible.html)<E> or [std::is_convertible_v](../../types/is_convertible.html)<G, E> is false, the program is ill-formed.

2) If [std::is_move_constructible_v](../../types/is_move_constructible.html)<E> or [std::is_convertible_v](../../types/is_convertible.html)<G, E> is false, the program is ill-formed.

## Contents

  * [1 Parameters](error_or.html#Parameters)
  * [2 Return value](error_or.html#Return_value)
  * [3 Example](error_or.html#Example)
  * [4 See also](error_or.html#See_also)

  
---  
  
### Parameters

default_value  |  \-  |  the value to use in case *this does not contain an unexpected value   
---|---|---  
Type requirements   
  
### Return value

1) has_value() ? [std::forward](../forward.html)<G>(default_value) : error()

2) has_value() ? [std::forward](../forward.html)<G>(default_value) : std::move(error())

### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### See also

[ error](error.html "cpp/utility/expected/error") |  returns the unexpected value   
(public member function)   
---|---  
[ value_or](value_or.html "cpp/utility/expected/value or") |  returns the expected value if present, another value otherwise   
(public member function) 
