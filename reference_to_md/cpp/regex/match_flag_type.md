
  


[Text processing library](../text.html "cpp/text")

[Localization library](../locale.html "cpp/locale")  
---  
[Regular expressions library](../regex.html "cpp/regex") (C++11)  
[Formatting library](../utility/format.html "cpp/utility/format") (C++20)  
[Null-terminated sequence utilities](../text.html#Null-terminated_sequence_utilities "cpp/text")  
[Byte strings](../string/byte.html "cpp/string/byte")  
[Multibyte strings](../string/multibyte.html "cpp/string/multibyte")  
[Wide strings](../string/wide.html "cpp/string/wide")  
[Primitive numeric conversions](../text.html#Primitive_numeric_conversions "cpp/text")  
| [to_chars](../utility/to_chars.html "cpp/utility/to chars")(C++17)  
---  
[to_chars_result](../utility/to_chars_result.html "cpp/utility/to chars result")(C++17)  
[from_chars](../utility/from_chars.html "cpp/utility/from chars")(C++17)  
[from_chars_result](../utility/from_chars_result.html "cpp/utility/from chars result")(C++17)  
[chars_format](../utility/chars_format.html "cpp/utility/chars format")(C++17)  
  
[Text encoding identifications](../text.html#Text_encoding_identifications "cpp/text")  
| [text_encoding](../locale/text_encoding.html "cpp/text/text encoding")(C++26)  
---  
  


[Regular expressions library](../regex.html "cpp/regex")

Classes  
---  
[basic_regex](basic_regex.html "cpp/regex/basic regex")(C++11)  
[sub_match](sub_match.html "cpp/regex/sub match")(C++11)  
[match_results](match_results.html "cpp/regex/match results")(C++11)  
Algorithms  
[regex_match](regex_match.html "cpp/regex/regex match")(C++11)  
[regex_search](regex_search.html "cpp/regex/regex search")(C++11)  
[regex_replace](regex_replace.html "cpp/regex/regex replace")(C++11)  
Iterators  
[regex_iterator](regex_iterator.html "cpp/regex/regex iterator")(C++11)  
[regex_token_iterator](regex_token_iterator.html "cpp/regex/regex token iterator")(C++11)  
Exceptions  
[regex_error](regex_error.html "cpp/regex/regex error")(C++11)  
Traits  
[regex_traits](regex_traits.html "cpp/regex/regex traits")(C++11)  
Constants  
[syntax_option_type](syntax_option_type.html "cpp/regex/syntax option type")(C++11)  
**match_flag_type**(C++11)  
[error_type](error_type.html "cpp/regex/error type")(C++11)  
Regex Grammar  
[Modified ECMAScript-262](ecmascript.html "cpp/regex/ecmascript")(C++11)  
  


Defined in header `[<regex>](../header/regex.html "cpp/header/regex")` |  |   
---|---|---  
using match_flag_type = /* implementation-defined */; |  (1)  |  (since C++11)  
constexpr match_flag_type match_default = {};  
constexpr match_flag_type match_not_bol = /* unspecified */;  
constexpr match_flag_type match_not_eol = /* unspecified */;  
constexpr match_flag_type match_not_bow = /* unspecified */;  
constexpr match_flag_type match_not_eow = /* unspecified */;  
constexpr match_flag_type match_any = /* unspecified */;  
constexpr match_flag_type match_not_null = /* unspecified */;  
constexpr match_flag_type match_continuous = /* unspecified */;  
constexpr match_flag_type match_prev_avail = /* unspecified */;  
constexpr match_flag_type format_default = {};  
constexpr match_flag_type format_sed = /* unspecified */;  
constexpr match_flag_type format_no_copy = /* unspecified */;  
constexpr match_flag_type format_first_only = /* unspecified */; |  (2)  |  (since C++11)   
(inline since C++17)  
| |   
  
1) `match_flag_type` is a [BitmaskType](../named_req/BitmaskType.html "cpp/named req/BitmaskType") that specifies additional regular expression matching options.

### Constants

Note: `[`first`, `last`)` refers to the character sequence being matched. 

Name  |  Explanation   
---|---  
`match_not_bol` |  The first character in `[`first`, `last`)` will be treated as if it is **not** at the beginning of a line  
(i.e. `^` will not match `[`first`, `first`)`).   
`match_not_eol` |  The last character in `[`first`, `last`)` will be treated as if it is **not** at the end of a line  
(i.e. `$` will not match `[`last`, `last`)`).   
`match_not_bow` |  `\b` will not match `[`first`, `first`)`.   
`match_not_eow` |  `\b` will not match `[`last`, `last`)`.   
`match_any` |  If more than one match is possible, then any match is an acceptable result.   
`match_not_null` |  Do not match empty sequences.   
`match_continuous` |  Only match a sub-sequence that begins at first.   
`match_prev_avail` |  \--first is a valid iterator position.  
When set, causes `match_not_bol` and `match_not_bow` to be ignored.   
`format_default` |  Use ECMAScript rules to construct strings in [std::regex_replace](regex_replace.html "cpp/regex/regex replace") ([syntax documentation](https://ecma-international.org/ecma-262/5.1/#sec-15.5.4.11)).   
`format_sed` |  Use POSIX _sed_ utility rules in [std::regex_replace](regex_replace.html "cpp/regex/regex replace") ([syntax documentation](https://pubs.opengroup.org/onlinepubs/9699919799/utilities/sed.html#tag_20_116_13_03)).   
`format_no_copy` |  Do not copy un-matched strings to the output in [std::regex_replace](regex_replace.html "cpp/regex/regex replace").   
`format_first_only` |  Only replace the first match in [std::regex_replace](regex_replace.html "cpp/regex/regex replace").   
  
All constants, except for `match_default` and `format_default`, are bitmask elements. The `match_default` and `format_default` constants are empty bitmasks. 

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2053](https://cplusplus.github.io/LWG/issue2053) | C++11  | 1\. the constants were declared static  
2\. `match_default` and `format_default` were initialized from ​0​ | 1\. removed the static specifier  
2\. initialized from {}  
  
### See also

[ regex_match](regex_match.html "cpp/regex/regex match")(C++11) |  attempts to match a regular expression to an entire character sequence   
(function template)   
---|---  
[ syntax_option_type](syntax_option_type.html "cpp/regex/syntax option type")(C++11) |  general options controlling regex behavior   
(typedef)   
[ error_type](error_type.html "cpp/regex/error type")(C++11) |  describes different types of matching errors   
(typedef) 
