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
[sub_match::compare](compare.html "cpp/regex/sub match/compare")  
[sub_match::swap](swap.html "cpp/regex/sub match/swap")  
Non-member functions  
**operator== operator!=operator<<operator<=operator>operator>=operator<=>**(until C++20)(until C++20)(until C++20)(until C++20)(until C++20)(C++20)  
[operator<<](operator_ltlt.html "cpp/regex/sub match/operator ltlt")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/regex/sub_match/navbar_content&action=edit)

Defined in header `[<regex>](../../header/regex.html "cpp/header/regex")` |  |   
---|---|---  
Direct comparison |  |   
template< class BidirIt >  
bool operator== ( const [std::sub_match](../sub_match.html)<BidirIt>& lhs,   
const [std::sub_match](../sub_match.html)<BidirIt>& rhs ); |  (1)  |  (since C++11)  
template< class BidirIt >  
bool operator!= ( const [std::sub_match](../sub_match.html)<BidirIt>& lhs,   
const [std::sub_match](../sub_match.html)<BidirIt>& rhs ); |  (2)  |  (since C++11)   
(until C++20)  
template< class BidirIt >  
bool operator< ( const [std::sub_match](../sub_match.html)<BidirIt>& lhs,   
const [std::sub_match](../sub_match.html)<BidirIt>& rhs ); |  (3)  |  (since C++11)   
(until C++20)  
template< class BidirIt >  
bool operator<= ( const [std::sub_match](../sub_match.html)<BidirIt>& lhs,   
const [std::sub_match](../sub_match.html)<BidirIt>& rhs ); |  (4)  |  (since C++11)   
(until C++20)  
template< class BidirIt >  
bool operator> ( const [std::sub_match](../sub_match.html)<BidirIt>& lhs,   
const [std::sub_match](../sub_match.html)<BidirIt>& rhs ); |  (5)  |  (since C++11)   
(until C++20)  
template< class BidirIt >  
bool operator>= ( const [std::sub_match](../sub_match.html)<BidirIt>& lhs,   
const [std::sub_match](../sub_match.html)<BidirIt>& rhs ); |  (6)  |  (since C++11)   
(until C++20)  
template< class BidirIt >  
auto operator<=>( const [std::sub_match](../sub_match.html)<BidirIt>& lhs,   
const [std::sub_match](../sub_match.html)<BidirIt>& rhs ); |  (7)  |  (since C++20)  
Comparing with a [std::basic_string](../../string/basic_string.html "cpp/string/basic string") |  |   
template< class BidirIt, class Traits, class Alloc >  
bool operator== ( const [std::sub_match](../sub_match.html)<BidirIt>& lhs,  
const [std::basic_string](../../string/basic_string.html)</*value-type-of*/<BidirIt>,  
Traits, Alloc>& str ); |  (8)  |  (since C++11)  
template< class BidirIt, class Traits, class Alloc >  
bool operator!= ( const [std::sub_match](../sub_match.html)<BidirIt>& lhs,  
const [std::basic_string](../../string/basic_string.html)</*value-type-of*/<BidirIt>,  
Traits, Alloc>& str ); |  (9)  |  (since C++11)   
(until C++20)  
template< class BidirIt, class Traits, class Alloc >  
bool operator< ( const [std::sub_match](../sub_match.html)<BidirIt>& lhs,  
const [std::basic_string](../../string/basic_string.html)</*value-type-of*/<BidirIt>,  
Traits, Alloc>& str ); |  (10)  |  (since C++11)   
(until C++20)  
template< class BidirIt, class Traits, class Alloc >  
bool operator<= ( const [std::sub_match](../sub_match.html)<BidirIt>& lhs,  
const [std::basic_string](../../string/basic_string.html)</*value-type-of*/<BidirIt>,  
Traits, Alloc>& str ); |  (11)  |  (since C++11)   
(until C++20)  
template< class BidirIt, class Traits, class Alloc >  
bool operator> ( const [std::sub_match](../sub_match.html)<BidirIt>& lhs,  
const [std::basic_string](../../string/basic_string.html)</*value-type-of*/<BidirIt>,  
Traits, Alloc>& str ); |  (12)  |  (since C++11)   
(until C++20)  
template< class BidirIt, class Traits, class Alloc >  
bool operator>= ( const [std::sub_match](../sub_match.html)<BidirIt>& lhs,  
const [std::basic_string](../../string/basic_string.html)</*value-type-of*/<BidirIt>,  
Traits, Alloc>& str ); |  (13)  |  (since C++11)   
(until C++20)  
template< class BidirIt, class Traits, class Alloc >  
auto operator<=>( const [std::sub_match](../sub_match.html)<BidirIt>& lhs,  
const [std::basic_string](../../string/basic_string.html)</*value-type-of*/<BidirIt>,  
Traits, Alloc>& str ); |  (14)  |  (since C++20)  
template< class BidirIt, class Traits, class Alloc >  
bool operator== ( const [std::basic_string](../../string/basic_string.html)</*value-type-of*/<BidirIt>,  
Traits, Alloc>& str,  
const [std::sub_match](../sub_match.html)<BidirIt>& rhs ); |  (15)  |  (since C++11)   
(until C++20)  
template< class BidirIt, class Traits, class Alloc >  
bool operator!= ( const [std::basic_string](../../string/basic_string.html)</*value-type-of*/<BidirIt>,  
Traits, Alloc>& str,  
const [std::sub_match](../sub_match.html)<BidirIt>& rhs ); |  (16)  |  (since C++11)   
(until C++20)  
template< class BidirIt, class Traits, class Alloc >  
bool operator< ( const [std::basic_string](../../string/basic_string.html)</*value-type-of*/<BidirIt>,  
Traits, Alloc>& str,  
const [std::sub_match](../sub_match.html)<BidirIt>& rhs ); |  (17)  |  (since C++11)   
(until C++20)  
template< class BidirIt, class Traits, class Alloc >  
bool operator<= ( const [std::basic_string](../../string/basic_string.html)</*value-type-of*/<BidirIt>,  
Traits, Alloc>& str,  
const [std::sub_match](../sub_match.html)<BidirIt>& rhs ); |  (18)  |  (since C++11)   
(until C++20)  
template< class BidirIt, class Traits, class Alloc >  
bool operator> ( const [std::basic_string](../../string/basic_string.html)</*value-type-of*/<BidirIt>,  
Traits, Alloc>& str,  
const [std::sub_match](../sub_match.html)<BidirIt>& rhs ); |  (19)  |  (since C++11)   
(until C++20)  
template< class BidirIt, class Traits, class Alloc >  
bool operator>= ( const [std::basic_string](../../string/basic_string.html)</*value-type-of*/<BidirIt>,  
Traits, Alloc>& str,  
const [std::sub_match](../sub_match.html)<BidirIt>& rhs ); |  (20)  |  (since C++11)   
(until C++20)  
Comparing with a C-style string |  |   
template< class BidirIt >  
bool operator== ( const [std::sub_match](../sub_match.html)<BidirIt>& lhs,  
const /*value-type-of*/<BidirIt>* s ); |  (21)  |  (since C++11)  
template< class BidirIt >  
bool operator!= ( const [std::sub_match](../sub_match.html)<BidirIt>& lhs,  
const /*value-type-of*/<BidirIt>* s ); |  (22)  |  (since C++11)   
(until C++20)  
template< class BidirIt >  
bool operator< ( const [std::sub_match](../sub_match.html)<BidirIt>& lhs,  
const /*value-type-of*/<BidirIt>* s ); |  (23)  |  (since C++11)   
(until C++20)  
template< class BidirIt >  
bool operator<= ( const [std::sub_match](../sub_match.html)<BidirIt>& lhs,  
const /*value-type-of*/<BidirIt>* s ); |  (24)  |  (since C++11)   
(until C++20)  
template< class BidirIt >  
bool operator> ( const [std::sub_match](../sub_match.html)<BidirIt>& lhs,  
const /*value-type-of*/<BidirIt>* s ); |  (25)  |  (since C++11)   
(until C++20)  
template< class BidirIt >  
bool operator>= ( const [std::sub_match](../sub_match.html)<BidirIt>& lhs,  
const /*value-type-of*/<BidirIt>* s ); |  (26)  |  (since C++11)   
(until C++20)  
template< class BidirIt >  
auto operator<=>( const [std::sub_match](../sub_match.html)<BidirIt>& lhs,  
const /*value-type-of*/<BidirIt>* s ); |  (27)  |  (since C++20)  
template< class BidirIt >  
bool operator== ( const /*value-type-of*/<BidirIt>* s,  
const [std::sub_match](../sub_match.html)<BidirIt>& rhs ); |  (28)  |  (since C++11)   
(until C++20)  
template< class BidirIt >  
bool operator!= ( const /*value-type-of*/<BidirIt>* s,  
const [std::sub_match](../sub_match.html)<BidirIt>& rhs ); |  (29)  |  (since C++11)   
(until C++20)  
template< class BidirIt >  
bool operator< ( const /*value-type-of*/<BidirIt>* s,  
const [std::sub_match](../sub_match.html)<BidirIt>& rhs ); |  (30)  |  (since C++11)   
(until C++20)  
template< class BidirIt >  
bool operator<= ( const /*value-type-of*/<BidirIt>* s,  
const [std::sub_match](../sub_match.html)<BidirIt>& rhs ); |  (31)  |  (since C++11)   
(until C++20)  
template< class BidirIt >  
bool operator> ( const /*value-type-of*/<BidirIt>* s,  
const [std::sub_match](../sub_match.html)<BidirIt>& rhs ); |  (32)  |  (since C++11)   
(until C++20)  
template< class BidirIt >  
bool operator>= ( const /*value-type-of*/<BidirIt>* s,  
const [std::sub_match](../sub_match.html)<BidirIt>& rhs ); |  (33)  |  (since C++11)   
(until C++20)  
Comparing with a single character |  |   
template< class BidirIt >  
bool operator== ( const [std::sub_match](../sub_match.html)<BidirIt>& lhs,  
const /*value-type-of*/<BidirIt>& ch ); |  (34)  |  (since C++11)  
template< class BidirIt >  
bool operator!= ( const [std::sub_match](../sub_match.html)<BidirIt>& lhs,  
const /*value-type-of*/<BidirIt>& ch ); |  (35)  |  (since C++11)   
(until C++20)  
template< class BidirIt >  
bool operator< ( const [std::sub_match](../sub_match.html)<BidirIt>& lhs,  
const /*value-type-of*/<BidirIt>& ch ); |  (36)  |  (since C++11)   
(until C++20)  
template< class BidirIt >  
bool operator<= ( const [std::sub_match](../sub_match.html)<BidirIt>& lhs,  
const /*value-type-of*/<BidirIt>& ch ); |  (37)  |  (since C++11)   
(until C++20)  
template< class BidirIt >  
bool operator> ( const [std::sub_match](../sub_match.html)<BidirIt>& lhs,  
const /*value-type-of*/<BidirIt>& ch ); |  (38)  |  (since C++11)   
(until C++20)  
template< class BidirIt >  
bool operator>= ( const [std::sub_match](../sub_match.html)<BidirIt>& lhs,  
const /*value-type-of*/<BidirIt>& ch ); |  (39)  |  (since C++11)   
(until C++20)  
template< class BidirIt >  
auto operator<=>( const [std::sub_match](../sub_match.html)<BidirIt>& lhs,  
const /*value-type-of*/<BidirIt>& ch ); |  (40)  |  (since C++20)  
template< class BidirIt >  
bool operator== ( const /*value-type-of*/<BidirIt>& ch,  
const [std::sub_match](../sub_match.html)<BidirIt>& rhs ); |  (41)  |  (since C++11)   
(until C++20)  
template< class BidirIt >  
bool operator!= ( const /*value-type-of*/<BidirIt>& ch,  
const [std::sub_match](../sub_match.html)<BidirIt>& rhs ); |  (42)  |  (since C++11)   
(until C++20)  
template< class BidirIt >  
bool operator< ( const /*value-type-of*/<BidirIt>& ch,  
const [std::sub_match](../sub_match.html)<BidirIt>& rhs ); |  (43)  |  (since C++11)   
(until C++20)  
template< class BidirIt >  
bool operator<= ( const /*value-type-of*/<BidirIt>& ch,  
const [std::sub_match](../sub_match.html)<BidirIt>& rhs ); |  (44)  |  (since C++11)   
(until C++20)  
template< class BidirIt >  
bool operator> ( const /*value-type-of*/<BidirIt>& ch,  
const [std::sub_match](../sub_match.html)<BidirIt>& rhs ); |  (45)  |  (since C++11)   
(until C++20)  
template< class BidirIt >  
bool operator>= ( const /*value-type-of*/<BidirIt>& ch,  
const [std::sub_match](../sub_match.html)<BidirIt>& rhs ); |  (46)  |  (since C++11)   
(until C++20)  
Helper type aliases |  |   
template< class BidirIt >  
using /*value-type-of*/ =  
typename [std::iterator_traits](../../iterator/iterator_traits.html)<BidirIt>::value_type; |  (47) | (exposition only*)  
template< class BidirIt >  
using /*cat-type-of*/ =  
[std::compare_three_way_result_t](../../utility/compare/compare_three_way_result.html)  
<[std::basic_string](../../string/basic_string.html)</*value-type-of*/<BidirIt>>>; |  (48) | (since C++20)   
(exposition only*)  
| |   
  
Compares a `sub_match` to another `sub_match`, a [std::string](../../string/basic_string.html "cpp/string/basic string"), a C-style string or a single character. 

1-7) Compares two `sub_match` directly.

8-20) Compares a `sub_match` with a [std::basic_string](../../string/basic_string.html "cpp/string/basic string").

21-33) Compares a `sub_match` with a C-style string.

34-46) Compares a `sub_match` with a single character.

The `<`, `<=`, `>`, `>=`, and `!=` operators are [synthesized](../../language/operators.html#Comparison_operators "cpp/language/operators") from operator<=> and operator== respectively.  | (since C++20)  
---|---  
  
47) `_value-type-of_` ﻿<BidirIt> is the [value type](../../iterator.html#Types_and_writability "cpp/iterator") of `BidirIt`.

48) `_cat-type-of_` ﻿<BidirIt> is the result type of three-way comparison of [std::sub_match](../sub_match.html)<BidirIt>.

## Contents

  * [1 Parameters](operator_cmp.html#Parameters)
  * [2 Return value](operator_cmp.html#Return_value)
  * [3 Notes](operator_cmp.html#Notes)
  * [4 Example](operator_cmp.html#Example)
  * [5 Defect reports](operator_cmp.html#Defect_reports)
  * [6 See also](operator_cmp.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/regex/sub_match/operator_cmp&action=edit&section=1 "Edit section: Parameters")] Parameters

lhs, rhs  |  \-  |  a `sub_match` to compare   
---|---|---  
str  |  \-  |  a [std::basic_string](../../string/basic_string.html "cpp/string/basic string") to compare   
s  |  \-  |  a pointer to a C-style string to compare   
ch  |  \-  |  a character to compare   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/regex/sub_match/operator_cmp&action=edit&section=2 "Edit section: Return value")] Return value

Let target be the following values: 

1-7) rhs

8-20) typename [std::sub_match](../sub_match.html)<BidirIt>::string_type(str.data(), str.size())

21-33) s

34-46) typename [std::sub_match](../sub_match.html)<BidirIt>::string_type(1, ch)

The return values are defined as follows: 

Operator  | Return value   
---|---  
Overloads (1-14,21-27,34-40)  
(overloads with parameter lhs) |  Overloads (15-20,28-33,41-46)   
(overloads without parameter lhs)  
`==` | lhs.compare(target) == 0 | rhs.compare(target) == 0  
`!=` | lhs.compare(target) != 0 | rhs.compare(target) != 0  
`<` | lhs.compare(target) < 0 | rhs.compare(target) > 0  
`<=` | lhs.compare(target) <= 0 | rhs.compare(target) >= 0  
`>` | lhs.compare(target) > 0 | rhs.compare(target) < 0  
`>=` | lhs.compare(target) >= 0 | rhs.compare(target) <= 0  
`<=>` |  static_cast<`_cat-type-of_` ﻿<BidirIt>>  
` `(lhs.compare(target) <=> 0) |  N/A  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/regex/sub_match/operator_cmp&action=edit&section=3 "Edit section: Notes")] Notes

The return type of operator<=> is guaranteed to be a comparison category type. If `_value-type-of_` ﻿<BidirIt> is char, wchar_t, char8_t, char16_t, or char32_t, the return type of `operator<=>` is [`std::strong_ordering`](../../utility/compare/strong_ordering.html "cpp/utility/compare/strong ordering"). 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/regex/sub_match/operator_cmp&action=edit&section=4 "Edit section: Example")] Example

| This section is incomplete  
Reason: no example   
---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/regex/sub_match/operator_cmp&action=edit&section=5 "Edit section: Defect reports")] Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2217](https://cplusplus.github.io/LWG/issue2217) | C++11  | for comparisons with [std::string](../../string/basic_string.html "cpp/string/basic string"), the  
argument of [`compare()`](compare.html "cpp/regex/sub match/compare") was str.c_str() | the argument is  
string_type(str.data(), str.size()))  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/regex/sub_match/operator_cmp&action=edit&section=6 "Edit section: See also")] See also

[ compare](compare.html "cpp/regex/sub match/compare") |  compares matched subsequence (if any)   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/regex/sub_match/dsc_compare&action=edit)  
---|---
