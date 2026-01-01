[C++](../../../cpp.html "cpp")

[Compiler support](../../compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](../../freestanding.html "cpp/freestanding")  
[Language](../../language.html "cpp/language")  
[Standard library](../../standard_library.html "cpp/standard library")  
[Standard library headers](../../headers.html "cpp/header")  
[Named requirements](../../iterator/concepts.html "cpp/named req")  
[Feature test macros](../../experimental/feature_test.html "cpp/feature test") (C++20)  
[Language support library](../../utility.html#Language_support "cpp/utility")  
[Concepts library](../../concepts.html "cpp/concepts") (C++20)  
[Diagnostics library](../../error.html "cpp/error")  
[Memory management library](../../memory.html "cpp/memory")  
[Metaprogramming library](../../meta.html "cpp/meta") (C++11)  
[General utilities library](../../utility.html "cpp/utility")  
[Containers library](../../container.html "cpp/container")  
[Iterators library](../../iterator.html "cpp/iterator")  
[Ranges library](../../ranges.html "cpp/ranges") (C++20)  
[Algorithms library](../../algorithm.html "cpp/algorithm")  
[Strings library](../../string.html "cpp/string")  
[Text processing library](../../text.html "cpp/text")  
[Numerics library](../../numeric.html "cpp/numeric")  
[Date and time library](../../chrono.html "cpp/chrono")  
[Input/output library](../../io.html "cpp/io")  
[Filesystem library](../../filesystem.html "cpp/filesystem") (C++17)  
[Concurrency support library](../../atomic.html "cpp/thread") (C++11)  
[Execution control library](../../experimental/execution.html "cpp/execution") (C++26)  
[Technical specifications](../../experimental.html "cpp/experimental")  
[Symbols index](../../symbol_index.html "cpp/symbol index")  
[External libraries](../../links/libs.html "cpp/links/libs")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/navbar_content&action=edit)

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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/text/navbar_content&action=edit)

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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/regex/navbar_content&action=edit)

[`std::sub_match`](../sub_match.html "cpp/regex/sub match")

Member functions  
---  
[sub_match::sub_match](sub_match.html "cpp/regex/sub match/sub match")  
[sub_match::length](length.html "cpp/regex/sub match/length")  
[sub_match::strsub_match::operator string_type](str.html "cpp/regex/sub match/str")  
**sub_match::compare**  
[sub_match::swap](swap.html "cpp/regex/sub match/swap")  
Non-member functions  
[operator==operator!=operator<<operator<=operator>operator>=operator<=>](operator_cmp.html "cpp/regex/sub match/operator cmp")(until C++20)(until C++20)(until C++20)(until C++20)(until C++20)(C++20)  
[operator<<](operator_ltlt.html "cpp/regex/sub match/operator ltlt")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/regex/sub_match/navbar_content&action=edit)

int compare( const sub_match& m ) const; |  (1)  |  (since C++11)  
---|---|---  
int compare( const string_type& s ) const; |  (2)  |  (since C++11)  
int compare( const value_type* c ) const; |  (3)  |  (since C++11)  
| |   
  
1) Compares two `sub_match`es directly by comparing their underlying character sequences. Equivalent to str().compare(m.str()).

2) Compares a `sub_match` with a [std::basic_string](../../string/basic_string.html "cpp/string/basic string"). Equivalent to str().compare(s).

3) Compares a `sub_match` with a null-terminated sequence of the underlying character type pointed to by s. Equivalent to str().compare(c).

## Contents

  * [1 Parameters](compare.html#Parameters)
  * [2 Return value](compare.html#Return_value)
  * [3 Notes](compare.html#Notes)
  * [4 Example](compare.html#Example)
  * [5 See also](compare.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/regex/sub_match/compare&action=edit&section=1 "Edit section: Parameters")] Parameters

m  |  \-  |  a reference to another sub_match   
---|---|---  
s  |  \-  |  a reference to a string to compare to   
c  |  \-  |  a pointer to a null-terminated character sequence of the underlying `value_type` to compare to   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/regex/sub_match/compare&action=edit&section=2 "Edit section: Return value")] Return value

A value less than zero if this `sub_match` is _less_ than the other character sequence, zero if the both underlying character sequences are equal, greater than zero if this `sub_match` is _greater_ than the other character sequence. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/regex/sub_match/compare&action=edit&section=3 "Edit section: Notes")] Notes

This function is infrequently used directly by application code. Instead, one of the non-member comparison operators is used. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/regex/sub_match/compare&action=edit&section=4 "Edit section: Example")] Example

| This section is incomplete  
Reason: no example   
---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/regex/sub_match/compare&action=edit&section=5 "Edit section: See also")] See also

[ compare](../../string/basic_string/compare.html "cpp/string/basic string/compare") |  compares two strings   
(public member function of `std::basic_string<CharT,Traits,Allocator>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_compare&action=edit)  
---|---  
[ stroperator string_type](str.html "cpp/regex/sub match/str") |  converts to the underlying string type   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/regex/sub_match/dsc_str&action=edit)  
[ operator==operator!=operator<operator<=operator>operator>=operator<=>](operator_cmp.html "cpp/regex/sub match/operator cmp")(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(C++20) |  compares a `sub_match` with another `sub_match`, a string, or a character   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/regex/sub_match/dsc_operator_cmp&action=edit)
