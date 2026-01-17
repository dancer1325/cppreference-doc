 
  


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
  


[`std::match_results`](../match_results.html "cpp/regex/match results")

Member functions  
---  
[match_results::match_results](match_results.html "cpp/regex/match results/match results")  
[match_results::~match_results](~match_results.html "cpp/regex/match results/~match results")  
[match_results::operator=](operator=.html "cpp/regex/match results/operator=")  
[match_results::get_allocator](get_allocator.html "cpp/regex/match results/get allocator")  
State  
[match_results::ready](ready.html "cpp/regex/match results/ready")  
Element access  
[match_results::size](size.html "cpp/regex/match results/size")  
**match_results::max_size**  
[match_results::empty](empty.html "cpp/regex/match results/empty")  
[match_results::length](length.html "cpp/regex/match results/length")  
[match_results::position](position.html "cpp/regex/match results/position")  
[match_results::str](str.html "cpp/regex/match results/str")  
[match_results::operator[]](operator_at.html "cpp/regex/match results/operator at")  
[match_results::prefix](prefix.html "cpp/regex/match results/prefix")  
[match_results::suffix](suffix.html "cpp/regex/match results/suffix")  
Iterators  
[match_results::beginmatch_results::cbegin](begin.html "cpp/regex/match results/begin")  
[match_results::endmatch_results::cend](end.html "cpp/regex/match results/end")  
Format  
[match_results::format](format.html "cpp/regex/match results/format")  
Modifiers  
[match_results::swap](swap.html "cpp/regex/match results/swap")  
Non-member functions  
[operator==operator!=](operator_cmp.html "cpp/regex/match results/operator cmp")(until C++20)  
[swap(std::match_results)](swap2.html "cpp/regex/match results/swap2")  
  


size_type max_size() const noexcept; |  |  (since C++11)  
---|---|---  
| |   
  
Returns the maximum number of submatches the `match_results` type is able to hold due to system or library implementation limitations, i.e. [std::distance](../../iterator/distance.html)(begin(), end()) for the largest number of submatches. 

### Parameters

(none) 

### Return value

Maximum number of submatches. 

### Complexity

Constant. 
