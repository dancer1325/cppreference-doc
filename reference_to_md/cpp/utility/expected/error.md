 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
**expected::error**  
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
  


constexpr const E& error() const& noexcept; |  (1)  |  (since C++23)  
---|---|---  
constexpr E& error() & noexcept; |  (2)  |  (since C++23)  
constexpr const E&& error() const&& noexcept; |  (3)  |  (since C++23)  
constexpr E&& error() && noexcept; |  (4)  |  (since C++23)  
| |   
  
Accesses the unexpected value contained in *this. 

If has_value() is true, the behavior is undefined.  | (until C++26)  
---|---  
If has_value() is true: 

  * If the implementation is [hardened](../../standard_library.html#Standard_library_hardening "cpp/standard library"), a [contract violation](../../language/contracts.html "cpp/language/contracts") occurs. Moreover, if the contract-violation handler returns under “observe” evaluation semantic, the behavior is undefined. 
  * If the implementation is not hardened, the behavior is undefined. 

| (since C++26)  
  
### Return value

1,2) `_[unex](../expected.html#unex "cpp/utility/expected")_`

3,4) std::move(`_[unex](../expected.html#unex "cpp/utility/expected")_` ﻿)

### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### See also

[ error_or](error_or.html "cpp/utility/expected/error or") |  returns the unexpected value if present, another value otherwise   
(public member function)   
---|---  
[ operator->operator*](operator*.html "cpp/utility/expected/operator*") |  accesses the expected value   
(public member function)   
[ value](value.html "cpp/utility/expected/value") |  returns the expected value   
(public member function)   
[ operator boolhas_value](operator_bool.html "cpp/utility/expected/operator bool") |  checks whether the object contains an expected value   
(public member function) 
