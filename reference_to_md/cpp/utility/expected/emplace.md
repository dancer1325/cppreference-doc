 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
[expected::error_or](error_or.html "cpp/utility/expected/error or")  
[Monadic operations](../expected.html#Monadic_operations "cpp/utility/expected")  
[expected::and_then](and_then.html "cpp/utility/expected/and then")  
[expected::or_else](or_else.html "cpp/utility/expected/or else")  
[expected::transform](transform.html "cpp/utility/expected/transform")  
[expected::transform_error](transform_error.html "cpp/utility/expected/transform error")  
[Modifiers](../expected.html#Modifiers "cpp/utility/expected")  
**expected::emplace**  
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
template< class... Args >  
constexpr T& emplace( Args&&... args ) noexcept; |  (1)  |  (since C++23)  
template< class U, class... Args >  
constexpr T& emplace( [std::initializer_list](../initializer_list.html)<U> il, Args&&... args ) noexcept; |  (2)  |  (since C++23)  
void partial specialization |  |   
constexpr void emplace() noexcept; |  (3)  |  (since C++23)  
| |   
  
Constructs an expected value in-place. After the call, [`has_value()`](operator_bool.html "cpp/utility/expected/operator bool") returns true. 

1) Destroys the contained value, then [direct-initializes](../../language/direct_initialization.html "cpp/language/direct initialization") the expected value contained in *this with [std::forward](../forward.html)<Args>(args)....

This overload participates in overload resolution only if [std::is_nothrow_constructible_v](../../types/is_constructible.html)<T, Args...> is true.

2) Destroys the contained value, then direct-initializes the expected value contained in *this with il and [std::forward](../forward.html)<Args>(args)....

This overload participates in overload resolution only if [std::is_nothrow_constructible_v](../../types/is_constructible.html)<T, [std::initializer_list](../initializer_list.html)<U>&, Args...> is true.

3) If *this contains an unexpected value, destroys that value.

## Contents

  * [1 Parameters](emplace.html#Parameters)
  * [2 Return value](emplace.html#Return_value)
  * [3 Notes](emplace.html#Notes)
  * [4 Example](emplace.html#Example)
  * [5 See also](emplace.html#See_also)

  
---  
  
### Parameters

args  |  \-  |  the arguments to pass to the constructor   
---|---|---  
il  |  \-  |  the initializer list to pass to the constructor   
  
### Return value

1) *[std::construct_at](../../memory/construct_at.html)([std::addressof](../../memory/addressof.html)([`_val_`](../expected.html#Data_members "cpp/utility/expected")), [std::forward](../forward.html)<Args>(args)...)

2) *[std::construct_at](../../memory/construct_at.html)([std::addressof](../../memory/addressof.html)([`_val_`](../expected.html#Data_members "cpp/utility/expected")), il, [std::forward](../forward.html)<Args>(args)...)

### Notes

If the construction of `T` is potentially-throwing, [`operator=`](operator=.html "cpp/utility/expected/operator=") can be used instead. 

### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### See also

[ operator=](operator=.html "cpp/utility/expected/operator=") |  assigns contents   
(public member function)   
---|---
