 
  


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
**char_traits::find**  
[char_traits::to_char_type](to_char_type.html "cpp/string/char traits/to char type")  
[char_traits::to_int_type](to_int_type.html "cpp/string/char traits/to int type")  
[char_traits::eq_int_type](eq_int_type.html "cpp/string/char traits/eq int type")  
[char_traits::eof](eof.html "cpp/string/char traits/eof")  
[char_traits::not_eof](not_eof.html "cpp/string/char traits/not eof")  
  


static const char_type*  
find( const char_type* ptr, [std::size_t](../../types/size_t.html) count, const char_type& ch ); |  |  (constexpr since C++17)  
---|---|---  
| |   
  
Searches for character ch within the first count characters of the sequence pointed to by ptr. 

See [CharTraits](../../named_req/CharTraits.html "cpp/named req/CharTraits") for the general requirements on character traits for `X::find`. 

### Parameters

ptr  |  \-  |  pointer to a character string to search   
---|---|---  
count  |  \-  |  the number of characters to analyze   
ch  |  \-  |  the character to search for   
  
### Return value

A pointer to the first character in the range specified by `[`ptr`, `ptr + count`)` that compares equal to ch, or a null pointer if not found. 

### Complexity

Linear in count. 
