 
  


[Text processing library](../../text.html "cpp/text")

[Localization library](../../locale.html "cpp/locale")  
---  
[Regular expressions library](../../regex.html "cpp/regex") (C++11)  
[Formatting library](../../utility/format.html "cpp/utility/format") (C++20)  
[Null-terminated sequence utilities](../../text.html#Null-terminated_sequence_utilities "cpp/text")  
[Byte strings](../../string/byte.html "cpp/string/byte")  
[Multibyte strings](../../string/multibyte.html "cpp/string/multibyte")  
[Wide strings](../../string/wide.html "cpp/string/wide")  
[Primitive numeric conversions](../../text.html#Primitive_numeric_conversions "cpp/text")  
| [to_chars](../../utility/to_chars.html "cpp/utility/to chars")(C++17)  
---  
[to_chars_result](../../utility/to_chars_result.html "cpp/utility/to chars result")(C++17)  
[from_chars](../../utility/from_chars.html "cpp/utility/from chars")(C++17)  
[from_chars_result](../../utility/from_chars_result.html "cpp/utility/from chars result")(C++17)  
[chars_format](../../utility/chars_format.html "cpp/utility/chars format")(C++17)  
  
[Text encoding identifications](../../text.html#Text_encoding_identifications "cpp/text")  
| [text_encoding](../../locale/text_encoding.html "cpp/text/text encoding")(C++26)  
---  
  


[`std::text_encoding`](../../locale/text_encoding.html "cpp/text/text encoding")

[Member functions](../../locale/text_encoding.html#Member_functions "cpp/text/text encoding")  
---  
[Creation](../../locale/text_encoding.html#Creation "cpp/text/text encoding")  
[text_encoding::text_encoding](text_encoding.html "cpp/text/text encoding/text encoding")  
[text_encoding::literal](literal.html "cpp/text/text encoding/literal")  
[text_encoding::environment](environment.html "cpp/text/text encoding/environment")  
[Observers](../../locale/text_encoding.html#Observers "cpp/text/text encoding")  
[text_encoding::mib](mib.html "cpp/text/text encoding/mib")  
[text_encoding::name](name.html "cpp/text/text encoding/name")  
**text_encoding::aliases**  
[text_encoding::environment_is](environment_is.html "cpp/text/text encoding/environment is")  
[Helpers](../../locale/text_encoding.html#Helpers "cpp/text/text encoding")  
[text_encoding::_comp-name_](comp-name.html "cpp/text/text encoding/comp-name")  
[Non-member functions](../../locale/text_encoding.html#Non-member_functions "cpp/text/text encoding")  
[operator==(std::text_encoding)](operator_eq.html "cpp/text/text encoding/operator eq")  
[Member types](../../locale/text_encoding.html#Member_types "cpp/text/text encoding")  
[text_encoding::id](id.html "cpp/text/text encoding/id")  
[text_encoding::aliases_view](aliases_view.html "cpp/text/text encoding/aliases view")  
[Helper classes](../../locale/text_encoding.html#Helper_classes "cpp/text/text encoding")  
[hash<std::text_encoding>](hash.html "cpp/text/text encoding/hash")  
  


constexpr aliases_view aliases() const noexcept; |  |  (since C++26)  
---|---|---  
| |   
  
Returns a non-empty range of type [`text_encoding::aliases_view`](aliases_view.html "cpp/text/text encoding/aliases view") containing the aliases of *this if it represents a known registered character encoding. Otherwise, returns an empty range of type `text_encoding::aliases_view`. 

### Parameters

(none) 

### Return value

A [`view`](../../ranges/view.html "cpp/ranges/view") containing aliases of the known registered character encoding represented by *this; otherwise an empty range. 

### Example

| This section is incomplete  
Reason: no example   
---|---
