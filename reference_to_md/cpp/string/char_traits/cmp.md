 
  


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
**char_traits::eq char_traits::lt**  
[char_traits::move](move.html "cpp/string/char traits/move")  
[char_traits::copy](copy.html "cpp/string/char traits/copy")  
[char_traits::compare](compare.html "cpp/string/char traits/compare")  
[char_traits::length](length.html "cpp/string/char traits/length")  
[char_traits::find](find.html "cpp/string/char traits/find")  
[char_traits::to_char_type](to_char_type.html "cpp/string/char traits/to char type")  
[char_traits::to_int_type](to_int_type.html "cpp/string/char traits/to int type")  
[char_traits::eq_int_type](eq_int_type.html "cpp/string/char traits/eq int type")  
[char_traits::eof](eof.html "cpp/string/char traits/eof")  
[char_traits::not_eof](not_eof.html "cpp/string/char traits/not eof")  
  


static bool eq( char_type a, char_type b ); |  (1)  |  (constexpr since C++11)  
(noexcept since C++11)  
---|---|---  
static bool lt( char_type a, char_type b ); |  (2)  |  (constexpr since C++11)  
(noexcept since C++11)  
| |   
  
Compares two characters. 

1) Compares a and b for equality, behaves identically to 

  * static_cast<unsigned char>(a) == static_cast<unsigned char>(b), if `char_type` is char, 
  * a == b otherwise.



2) Compares a and b in such a way that they are totally ordered, behaves identically to 

  * static_cast<unsigned char>(a) < static_cast<unsigned char>(b), if `char_type` is char, 
  * a < b otherwise.



See [CharTraits](../../named_req/CharTraits.html "cpp/named req/CharTraits") for the general requirements on character traits for `X::eq` and `X::lt`. 

## Contents

  * [1 Parameters](cmp.html#Parameters)
  * [2 Return value](cmp.html#Return_value)
  * [3 Complexity](cmp.html#Complexity)
  * [4 Defect reports](cmp.html#Defect_reports)

  
---  
  
### Parameters

a, b  |  \-  |  character values to compare   
---|---|---  
  
### Return value

1) true if a and b are equal, false otherwise.

2) true if a is less than b, false otherwise.

### Complexity

Constant. 

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 467](https://cplusplus.github.io/LWG/issue467) | C++98  | for [std::char_traits](../char_traits.html)<char>, the semantics of `eq()` and `lt()`  
are the same as the built-in == and < on char respectively[[1]](cmp.html#cite_note-1) | changed to built-in == and  
< on unsigned char  
  
  1. [↑](cmp.html#cite_ref-1) Most implementations call [std::memcmp()](../byte/memcmp.html "cpp/string/byte/memcmp") for efficiency, which interprets the data as arrays of unsigned char. If char [is signed](../../language/types.html#Character_types "cpp/language/types") on such implementations, [std::char_traits](../char_traits.html)<char> fails to satisfy the requirements of [CharTraits](../../named_req/CharTraits.html "cpp/named req/CharTraits").


