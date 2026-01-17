 
  


[Strings library](../../string.html "cpp/string")

Classes  
---  
[basic_string](../basic_string.html "cpp/string/basic string")  
[basic_string_view](../basic_string_view.html "cpp/string/basic string view")(C++17)  
[char_traits](../char_traits.html "cpp/string/char traits")  
  


[`std::char_traits`](../char_traits.html "cpp/string/char traits")

Member functions  
---  
[char_traits::assign](assign.html "cpp/string/char traits/assign")  
[char_traits::eqchar_traits::lt](cmp.html "cpp/string/char traits/cmp")  
[char_traits::move](move.html "cpp/string/char traits/move")  
[char_traits::copy](copy.html "cpp/string/char traits/copy")  
[char_traits::compare](compare.html "cpp/string/char traits/compare")  
[char_traits::length](length.html "cpp/string/char traits/length")  
[char_traits::find](find.html "cpp/string/char traits/find")  
[char_traits::to_char_type](to_char_type.html "cpp/string/char traits/to char type")  
**char_traits::to_int_type**  
[char_traits::eq_int_type](eq_int_type.html "cpp/string/char traits/eq int type")  
[char_traits::eof](eof.html "cpp/string/char traits/eof")  
[char_traits::not_eof](not_eof.html "cpp/string/char traits/not eof")  
  


static int_type to_int_type( char_type c ); |  |  (constexpr since C++11)  
(noexcept since C++11)  
---|---|---  
| |   
  
Converts c to `int_type`. 

See [CharTraits](../../named_req/CharTraits.html "cpp/named req/CharTraits") for the general requirements on character traits for `X::to_int_type`. 

## Contents

  * [1 Parameters](to_int_type.html#Parameters)
  * [2 Return value](to_int_type.html#Return_value)
  * [3 Complexity](to_int_type.html#Complexity)
  * [4 Notes](to_int_type.html#Notes)

  
---  
  
### Parameters

c  |  \-  |  value to convert   
---|---|---  
  
### Return value

A value equivalent to c. 

### Complexity

Constant. 

### Notes

For every valid value of `char_type`, there must be a unique value of `int_type` distinct from [eof()](eof.html "cpp/string/char traits/eof"). 
