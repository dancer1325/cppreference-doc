 
  


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
**text_encoding::name**  
[text_encoding::aliases](aliases.html "cpp/text/text encoding/aliases")  
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
  


constexpr const char* name() const noexcept; |  |  (since C++26)  
---|---|---  
| |   
  
Returns the primary name of *this. Equivalent to return` `` _[name_](../../locale/text_encoding.html#name "cpp/text/text encoding")_` ;. 

Accessing elements of `_[name_](../../locale/text_encoding.html#name "cpp/text/text encoding")_` outside of the range `[`name()`, `name() + [std::strlen](../../string/byte/strlen.html)(name()) + 1`)` is undefined behavior. 

### Parameters

(none) 

### Return value

Primary name `_[name_](../../locale/text_encoding.html#name "cpp/text/text encoding")_` that is represented by a null-terminated byte string. 

### Example

| This section is incomplete  
Reason: no example   
---|---
