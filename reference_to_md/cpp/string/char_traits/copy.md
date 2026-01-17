 
  


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
**char_traits::copy**  
[char_traits::compare](compare.html "cpp/string/char traits/compare")  
[char_traits::length](length.html "cpp/string/char traits/length")  
[char_traits::find](find.html "cpp/string/char traits/find")  
[char_traits::to_char_type](to_char_type.html "cpp/string/char traits/to char type")  
[char_traits::to_int_type](to_int_type.html "cpp/string/char traits/to int type")  
[char_traits::eq_int_type](eq_int_type.html "cpp/string/char traits/eq int type")  
[char_traits::eof](eof.html "cpp/string/char traits/eof")  
[char_traits::not_eof](not_eof.html "cpp/string/char traits/not eof")  
  


static char_type*  
copy( char_type* dest, const char_type* src, [std::size_t](../../types/size_t.html) count ); |  |  (constexpr since C++20)  
---|---|---  
| |   
  
Copies count characters from the character string pointed to by src to the character string pointed to by dest. 

If `[`dest`, `dest + count`)` and `[`src`, `src + count`)` overlap, the behavior is undefined. 

See [CharTraits](../../named_req/CharTraits.html "cpp/named req/CharTraits") for the general requirements on character traits for `X::copy`. 

## Contents

  * [1 Parameters](copy.html#Parameters)
  * [2 Return value](copy.html#Return_value)
  * [3 Exceptions](copy.html#Exceptions)
  * [4 Complexity](copy.html#Complexity)
  * [5 See also](copy.html#See_also)

  
---  
  
### Parameters

dest  |  \-  |  pointer to a character string to copy to   
---|---|---  
src  |  \-  |  pointer to a character string to copy from   
count  |  \-  |  the number of characters to copy   
  
### Return value

dest

### Exceptions

Throws nothing. 

### Complexity

Linear in count. 

### See also

[ assign](assign.html "cpp/string/char traits/assign")[static] |  assigns a character   
(public static member function)   
---|---
