 
  


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
  


[Regular expressions library](../../regex.html "cpp/regex")

Classes  
---  
[basic_regex](../basic_regex.html "cpp/regex/basic regex")(C++11)  
[sub_match](../sub_match.html "cpp/regex/sub match")(C++11)  
[match_results](../match_results.html "cpp/regex/match results")(C++11)  
Algorithms  
[regex_match](../regex_match.html "cpp/regex/regex match")(C++11)  
[regex_search](../regex_search.html "cpp/regex/regex search")(C++11)  
[regex_replace](../regex_replace.html "cpp/regex/regex replace")(C++11)  
Iterators  
[regex_iterator](../regex_iterator.html "cpp/regex/regex iterator")(C++11)  
[regex_token_iterator](../regex_token_iterator.html "cpp/regex/regex token iterator")(C++11)  
Exceptions  
[regex_error](../regex_error.html "cpp/regex/regex error")(C++11)  
Traits  
[regex_traits](../regex_traits.html "cpp/regex/regex traits")(C++11)  
Constants  
[syntax_option_type](../syntax_option_type.html "cpp/regex/syntax option type")(C++11)  
[match_flag_type](../match_flag_type.html "cpp/regex/match flag type")(C++11)  
[error_type](../error_type.html "cpp/regex/error type")(C++11)  
Regex Grammar  
[Modified ECMAScript-262](../ecmascript.html "cpp/regex/ecmascript")(C++11)  
  


[`std::basic_regex`](../basic_regex.html "cpp/regex/basic regex")

Member Functions  
---  
[basic_regex::basic_regex](basic_regex.html "cpp/regex/basic regex/basic regex")  
[basic_regex::~basic_regex](~basic_regex.html "cpp/regex/basic regex/~basic regex")  
[basic_regex::operator=](operator=.html "cpp/regex/basic regex/operator=")  
[basic_regex::assign](assign.html "cpp/regex/basic regex/assign")  
Observers  
[basic_regex::mark_count](mark_count.html "cpp/regex/basic regex/mark count")  
[basic_regex::flags](flags.html "cpp/regex/basic regex/flags")  
Locale  
**basic_regex::getloc**  
[basic_regex::imbue](imbue.html "cpp/regex/basic regex/imbue")  
Modifiers  
[basic_regex::swap](swap.html "cpp/regex/basic regex/swap")  
[Constants](constants.html "cpp/regex/basic regex/constants")  
Non-member Functions  
[swap(std::basic_regex)](swap2.html "cpp/regex/basic regex/swap2")  
[Deduction guides](deduction_guides.html "cpp/regex/basic regex/deduction guides")(C++17)  
  


locale_type getloc() const; |  |  (since C++11)  
---|---|---  
| |   
  
Returns the current locale associated with the regular expression. 

Effectively calls traits_i.getloc() where `traits_i` is a default initialized instance of the type `Traits`, stored within the regular expression object. 

## Contents

  * [1 Parameters](getloc.html#Parameters)
  * [2 Return value](getloc.html#Return_value)
  * [3 Exceptions](getloc.html#Exceptions)
  * [4 Example](getloc.html#Example)
  * [5 See also](getloc.html#See_also)

  
---  
  
### Parameters

(none) 

### Return value

The current locale associated with the regular expression. 

### Exceptions

May throw implementation-defined exceptions. 

### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### See also

[ imbue](imbue.html "cpp/regex/basic regex/imbue") |  set locale information   
(public member function)   
---|---
