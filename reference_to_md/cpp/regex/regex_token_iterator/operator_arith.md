 
  


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
  


[`std::regex_token_iterator`](../regex_token_iterator.html "cpp/regex/regex token iterator")

Member functions  
---  
[regex_token_iterator::regex_token_iterator](regex_token_iterator.html "cpp/regex/regex token iterator/regex token iterator")  
[regex_token_iterator::operator=](operator=.html "cpp/regex/regex token iterator/operator=")  
Comparisons  
[regex_token_iterator::operator==regex_token_iterator::operator!=](operator_cmp.html "cpp/regex/regex token iterator/operator cmp")(until C++20)  
Observers  
[regex_token_iterator::operator*regex_token_iterator::operator->](operator*.html "cpp/regex/regex token iterator/operator*")  
Modifiers  
**regex_token_iterator::operator++ regex_token_iterator::operator++(int)**  
  


regex_token_iterator& operator++(); |  |  (since C++11)  
---|---|---  
regex_token_iterator operator++( int ); |  |  (since C++11)  
| |   
  
Advances the iterator on the next sub match. 

| This section is incomplete  
Reason: Explain better. For example, `subs` is an exposition-only vector of matched sub-expressions.   
---|---  
  
If *this is a suffix iterator, sets *this to an end-of-sequence iterator. 

Otherwise, if N + 1 < subs.size(), increments N and sets result to the address of the current match. 

Otherwise, sets `N` to ​0​ and increments `position`. If `position` is not an end-of-sequence iterator the operator sets result to the address of the current match. 

Otherwise, if any of the values stored in subs is equal to -1 and prev->suffix().length() is not ​0​ the operator sets `*this` to a suffix iterator that points to the range [prev->suffix().first, prev->suffix().second). 

Otherwise, sets *this to an end-of-sequence iterator. 

The behavior is undefined if the iterator is end-of-sequence iterator. 

### Parameters

(none) 

### Return value

1) *this

2) The previous value of the iterator.
