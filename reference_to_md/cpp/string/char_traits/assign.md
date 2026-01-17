 
  


[Strings library](../../string.html "cpp/string")

Classes  
---  
[basic_string](../basic_string.html "cpp/string/basic string")  
[basic_string_view](../basic_string_view.html "cpp/string/basic string view")(C++17)  
[char_traits](../char_traits.html "cpp/string/char traits")  
  


[`std::char_traits`](../char_traits.html "cpp/string/char traits")

Member functions  
---  
**char_traits::assign**  
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
[char_traits::not_eof](not_eof.html "cpp/string/char traits/not eof")  
  


static void assign( char_type& c1, const char_type& c2 ); |  (1)  |  (noexcept since C++11)  
(constexpr since C++17)  
---|---|---  
static char_type* assign( char_type* ptr, [std::size_t](../../types/size_t.html) count, char_type c2 ); |  (2)  |  (constexpr since C++20)  
| |   
  
1) Assigns c2 to c1, behaves identically to c1 = c2.

2) Assigns c2 to each character in count characters in the character sequence pointed to by ptr.

See [CharTraits](../../named_req/CharTraits.html "cpp/named req/CharTraits") for the general requirements on character traits for `X::assign`. 

### Parameters

c1  |  \-  |  character to assign to   
---|---|---  
c2  |  \-  |  character value to assign   
ptr  |  \-  |  pointer to a character sequence to assign to   
count  |  \-  |  the length of the character sequence   
  
### Return value

1) (none)

2) ptr

### Complexity

1) Constant.

2) Linear in count.
