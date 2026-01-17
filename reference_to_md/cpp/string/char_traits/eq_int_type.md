 
  


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
**char_traits::eq_int_type**  
[char_traits::eof](eof.html "cpp/string/char traits/eof")  
[char_traits::not_eof](not_eof.html "cpp/string/char traits/not eof")  
  


static bool eq_int_type( int_type c1, int_type c2 ); |  |  (constexpr since C++11)  
(noexcept since C++11)  
---|---|---  
| |   
  
Checks whether two values of type `int_type` are equal. 

See [CharTraits](../../named_req/CharTraits.html "cpp/named req/CharTraits") for the general requirements on character traits for `X::eq_int_type`. 

### Parameters

c1, c2  |  \-  |  values to compare   
---|---|---  
  
### Return value

true if c1 is equal to c2, false otherwise. 

### Complexity

Constant. 
