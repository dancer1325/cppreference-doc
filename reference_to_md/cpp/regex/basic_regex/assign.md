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
**basic_regex::assign**  
Observers  
[basic_regex::mark_count](mark_count.html "cpp/regex/basic regex/mark count")  
[basic_regex::flags](flags.html "cpp/regex/basic regex/flags")  
Locale  
[basic_regex::getloc](getloc.html "cpp/regex/basic regex/getloc")  
[basic_regex::imbue](imbue.html "cpp/regex/basic regex/imbue")  
Modifiers  
[basic_regex::swap](swap.html "cpp/regex/basic regex/swap")  
[Constants](constants.html "cpp/regex/basic regex/constants")  
Non-member Functions  
[swap(std::basic_regex)](swap2.html "cpp/regex/basic regex/swap2")  
[Deduction guides](deduction_guides.html "cpp/regex/basic regex/deduction guides")(C++17)  
  


basic_regex& assign( const basic_regex& other ); |  (1)  |  (since C++11)  
---|---|---  
basic_regex& assign( basic_regex&& other ) noexcept; |  (2)  |  (since C++11)  
basic_regex& assign( const CharT* s,  
flag_type f = [std::regex_constants::ECMAScript](../syntax_option_type.html) ); |  (3)  |  (since C++11)  
basic_regex& assign( const CharT* ptr, [std::size_t](../../types/size_t.html) count,  
flag_type f = [std::regex_constants::ECMAScript](../syntax_option_type.html) ); |  (4)  |  (since C++11)  
template< class ST, class SA >  
basic_regex& assign( const [std::basic_string](../../string/basic_string.html)<CharT,ST,SA>& str,  
flag_type f = [std::regex_constants::ECMAScript](../syntax_option_type.html) ); |  (5)  |  (since C++11)  
template< class InputIt >  
basic_regex& assign( InputIt first, InputIt last,  
flag_type f = [std::regex_constants::ECMAScript](../syntax_option_type.html) ); |  (6)  |  (since C++11)  
basic_regex& assign( [std::initializer_list](../../utility/initializer_list.html)<CharT> ilist,  
flag_type f = [std::regex_constants::ECMAScript](../syntax_option_type.html) ); |  (7)  |  (since C++11)  
| |   
  
Assigns the contents to the regular expression. 

1) Assigns the contents of other. [flags()](flags.html "cpp/regex/basic regex/flags") and [mark_count()](mark_count.html "cpp/regex/basic regex/mark count") are equivalent to the values of other.flags() and other.mark_count() after the call.

2) Assigns the contents of other using move semantics. [flags()](flags.html "cpp/regex/basic regex/flags") and [mark_count()](mark_count.html "cpp/regex/basic regex/mark count") are equivalent to the values of other.flags() and other.mark_count() before the assignment. After the call, other is in a valid, but unspecified state.

3-7) Assigns a sequence of characters to the regular expression. The syntax flags are set to `f`. [mark_count()](mark_count.html "cpp/regex/basic regex/mark count") returns the number of marked subexpressions within the resulting subexpression after the call.

3) Assigns a null-terminated string pointed to by s.

4) Assigns a sequence of count characters, pointed to by s.

5) Assigns the string str.

6) Assigns the characters in the range `[`first`, `last`)`.

7) Assigns the characters in the initializer list ilist.

## Contents

  * [1 Parameters](assign.html#Parameters)
  * [2 Return value](assign.html#Return_value)
  * [3 Exceptions](assign.html#Exceptions)
  * [4 Example](assign.html#Example)
  * [5 See also](assign.html#See_also)

  
---  
  
### Parameters

other  |  \-  |  another regular expression to assign   
---|---|---  
s  |  \-  |  pointer to a character sequence to assign   
str  |  \-  |  string to assign   
first, last  |  \-  |  the range of characters to assign   
ilist  |  \-  |  initializer list containing characters to assign   
Type requirements   
-`InputIt` must meet the requirements of [LegacyInputIterator](../../named_req/InputIterator.html "cpp/named req/InputIterator").   
  
### Return value

*this

### Exceptions

1) May throw implementation-defined exceptions.

3-7) [std::regex_error](../regex_error.html "cpp/regex/regex error") if the supplied regular expression is not valid. The object is not modified in that case.

### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### See also

[ operator=](operator=.html "cpp/regex/basic regex/operator=") |  assigns the contents   
(public member function)   
---|---
