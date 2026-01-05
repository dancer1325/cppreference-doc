
  


[Text processing library](../text.html "cpp/text")

[Localization library](../locale.html "cpp/locale")  
---  
[Regular expressions library](../regex.html "cpp/regex") (C++11)  
[Formatting library](format.html "cpp/utility/format") (C++20)  
[Null-terminated sequence utilities](../text.html#Null-terminated_sequence_utilities "cpp/text")  
[Byte strings](../string/byte.html "cpp/string/byte")  
[Multibyte strings](../string/multibyte.html "cpp/string/multibyte")  
[Wide strings](../string/wide.html "cpp/string/wide")  
[Primitive numeric conversions](../text.html#Primitive_numeric_conversions "cpp/text")  
| [to_chars](to_chars.html "cpp/utility/to chars")(C++17)  
---  
[to_chars_result](to_chars_result.html "cpp/utility/to chars result")(C++17)  
[from_chars](from_chars.html "cpp/utility/from chars")(C++17)  
[from_chars_result](from_chars_result.html "cpp/utility/from chars result")(C++17)  
**chars_format**(C++17)  
  
[Text encoding identifications](../text.html#Text_encoding_identifications "cpp/text")  
| [text_encoding](../locale/text_encoding.html "cpp/text/text encoding")(C++26)  
---  
  


Defined in header `[<charconv>](../header/charconv.html "cpp/header/charconv")` |  |   
---|---|---  
enum class chars_format {  
scientific = /*unspecified*/,  
fixed = /*unspecified*/,  
hex = /*unspecified*/,  
general = fixed | scientific  
}; |  |  (since C++17)  
| |   
  
A [BitmaskType](../named_req/BitmaskType.html "cpp/named req/BitmaskType") used to specify floating-point formatting for [`std::to_chars`](to_chars.html "cpp/utility/to chars") and [`std::from_chars`](from_chars.html "cpp/utility/from chars"). 

### Notes

[Feature-test](feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_to_chars`](../experimental/feature_test.html#cpp_lib_to_chars "cpp/feature test") | [`201611L`](../compiler_support/17.html#cpp_lib_to_chars_201611L "cpp/compiler support/17") | (C++17) | Elementary string conversions (std::to_chars, std::from_chars)   
  
### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### See also

[ to_chars](to_chars.html "cpp/utility/to chars")(C++17) |  converts an integer or floating-point value to a character sequence   
(function)   
---|---  
[ from_chars](from_chars.html "cpp/utility/from chars")(C++17) |  converts a character sequence to an integer or floating-point value   
(function) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
