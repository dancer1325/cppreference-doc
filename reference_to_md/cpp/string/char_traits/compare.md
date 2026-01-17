 
  


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
**char_traits::compare**  
[char_traits::length](length.html "cpp/string/char traits/length")  
[char_traits::find](find.html "cpp/string/char traits/find")  
[char_traits::to_char_type](to_char_type.html "cpp/string/char traits/to char type")  
[char_traits::to_int_type](to_int_type.html "cpp/string/char traits/to int type")  
[char_traits::eq_int_type](eq_int_type.html "cpp/string/char traits/eq int type")  
[char_traits::eof](eof.html "cpp/string/char traits/eof")  
[char_traits::not_eof](not_eof.html "cpp/string/char traits/not eof")  
  


static int compare( const char_type* s1, const char_type* s2,  
[std::size_t](../../types/size_t.html) count ); |  |  (constexpr since C++17)  
---|---|---  
| |   
  
Compares the first count characters of the character strings s1 and s2. The comparison is done lexicographically. 

If count is zero, strings are considered equal. 

See [CharTraits](../../named_req/CharTraits.html "cpp/named req/CharTraits") for the general requirements on character traits for `X::compare`. 

### Parameters

s1, s2  |  \-  |  pointers to character strings to compare   
---|---|---  
count  |  \-  |  the number of characters to compare from each character string   
  
### Return value

Negative value if s1 is _less than_ s2. 

​0​ if s1 is _equal to_ s2. 

Positive value if s1 is _greater than_ s2. 

### Complexity

Linear in count. 
