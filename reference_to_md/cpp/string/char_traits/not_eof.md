 
  


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
[char_traits::to_int_type](to_int_type.html "cpp/string/char traits/to int type")  
[char_traits::eq_int_type](eq_int_type.html "cpp/string/char traits/eq int type")  
[char_traits::eof](eof.html "cpp/string/char traits/eof")  
**char_traits::not_eof**  
  


static int_type not_eof( int_type e ); |  |  (constexpr since C++11)  
(noexcept since C++11)  
---|---|---  
| |   
  
Given e, produces a suitable value that is not equivalent to `_eof_`. 

This function is typically used when a value other than `_eof_` needs to be returned, such as in implementations of [std::basic_streambuf::overflow()](../../io/basic_streambuf/overflow.html "cpp/io/basic streambuf/overflow"). 

See [CharTraits](../../named_req/CharTraits.html "cpp/named req/CharTraits") for the general requirements on character traits for `X::not_eof`. 

## Contents

  * [1 Parameters](not_eof.html#Parameters)
  * [2 Return value](not_eof.html#Return_value)
  * [3 Complexity](not_eof.html#Complexity)
  * [4 See also](not_eof.html#See_also)

  
---  
  
### Parameters

e  |  \-  |  value to analyze   
---|---|---  
  
### Return value

e if e and `_eof_` value are not equivalent, or some other non-eof value otherwise. 

### Complexity

Constant. 

### See also

[ eof](eof.html "cpp/string/char traits/eof")[static] |  returns an _eof_ value   
(public static member function)   
---|---
