 
  


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
  


[`std::regex_iterator`](../regex_iterator.html "cpp/regex/regex iterator")

Member functions  
---  
[regex_iterator::regex_iterator](regex_iterator.html "cpp/regex/regex iterator/regex iterator")  
[regex_iterator::operator=](operator=.html "cpp/regex/regex iterator/operator=")  
Comparisons  
[regex_iterator::operator==regex_iterator::operator!=](operator_cmp.html "cpp/regex/regex iterator/operator cmp")(until C++20)  
Observers  
[regex_iterator::operator*regex_iterator::operator->](operator*.html "cpp/regex/regex iterator/operator*")  
Modifiers  
**regex_iterator::operator++ regex_iterator::operator++(int)**  
  


regex_iterator& operator++(); |  |  (since C++11)  
---|---|---  
regex_iterator operator++( int ); |  |  (since C++11)  
| |   
  
Advances the iterator on the next match. 

| This section is incomplete  
Reason: explain better   
---|---  
  
At first, a local variable of type `BidirIt` is constructed with the value of match[0].second. 

If the iterator holds a zero-length match and start == end, *this is set to end-of-sequence iterator and the function returns. 

Otherwise, if the iterator holds a zero-length match the operator invokes the following: 

regex_search(start, end, match, *pregex,   
flags | regex_constants::match_not_null |   
regex_constants::match_continuous);

If the call returns true, the function returns. 

Otherwise the operator increments `start` and continues as if the most recent match was not a zero-length match. 

If the most recent match was not a zero-length match, the operator sets `flags` to flags | regex_constants::match_prev_avail and invokes the following: 

regex_search(start, end, match, *pregex, flags);

If the call returns false, the iterator sets *this to the end-of-sequence iterator, the function returns. 

In all cases in which the call to regex_search returns true, match.prefix().first will be equal to the previous value of match[0].second and for each index i in the range `[`​0​`, `match.size()`)` for which match[i].matched is true, match[i].position() will return distance(begin, match[i].first). 

This means that match[i].position() gives the offset from the beginning of the target sequence, which is often not the same as the offset from the sequence passed in the call to regex_search. 

It is unspecified how the implementation makes these adjustments. This means that a compiler may call an implementation-specific search function, in which case a user-defined specialization of regex_search will not be called. 

The behavior is undefined if the iterator is end-of-sequence iterator. 

### Parameters

(none) 

### Return value

1) *this

2) The previous value of the iterator.
