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
  


[`std::regex_token_iterator`](../regex_token_iterator.html "cpp/regex/regex token iterator")

Member functions  
---  
**regex_token_iterator::regex_token_iterator**  
[regex_token_iterator::operator=](operator=.html "cpp/regex/regex token iterator/operator=")  
Comparisons  
[regex_token_iterator::operator==regex_token_iterator::operator!=](operator_cmp.html "cpp/regex/regex token iterator/operator cmp")(until C++20)  
Observers  
[regex_token_iterator::operator*regex_token_iterator::operator->](operator*.html "cpp/regex/regex token iterator/operator*")  
Modifiers  
[regex_token_iterator::operator++regex_token_iterator::operator++(int)](operator_arith.html "cpp/regex/regex token iterator/operator arith")  
  


regex_token_iterator(); |  (1)  |  (since C++11)  
---|---|---  
regex_token_iterator( BidirIt a, BidirIt b,  
const regex_type& re,  
int submatch = 0,  
[std::regex_constants::match_flag_type](../match_flag_type.html) m =  
[std::regex_constants::match_default](../match_flag_type.html) ); |  (2)  |  (since C++11)  
regex_token_iterator( BidirIt a, BidirIt b,  
const regex_type& re,  
const [std::vector](../../container/vector.html)<int>& submatches,  
[std::regex_constants::match_flag_type](../match_flag_type.html) m =  
[std::regex_constants::match_default](../match_flag_type.html) ); |  (3)  |  (since C++11)  
regex_token_iterator( BidirIt a, BidirIt b,  
const regex_type& re,  
[std::initializer_list](../../utility/initializer_list.html)<int> submatches,  
[std::regex_constants::match_flag_type](../match_flag_type.html) m =  
[std::regex_constants::match_default](../match_flag_type.html) ); |  (4)  |  (since C++11)  
template< [std::size_t](../../types/size_t.html) N >  
regex_token_iterator( BidirIt a, BidirIt b,  
const regex_type& re,  
const int (&submatches)[N],  
[std::regex_constants::match_flag_type](../match_flag_type.html) m =  
[std::regex_constants::match_default](../match_flag_type.html) ); |  (5)  |  (since C++11)  
regex_token_iterator( const regex_token_iterator& other ); |  (6)  |  (since C++11)  
regex_token_iterator( BidirIt a, BidirIt b,  
const regex_type&& re,  
int submatch = 0,  
[std::regex_constants::match_flag_type](../match_flag_type.html) m =  
[std::regex_constants::match_default](../match_flag_type.html) ) = delete; |  (7)  |  (since C++11)  
regex_token_iterator( BidirIt a, BidirIt b,  
const regex_type&& re,  
const [std::vector](../../container/vector.html)<int>& submatches,  
[std::regex_constants::match_flag_type](../match_flag_type.html) m =  
[std::regex_constants::match_default](../match_flag_type.html) ) = delete; |  (8)  |  (since C++11)  
regex_token_iterator( BidirIt a, BidirIt b,  
const regex_type&& re,  
[std::initializer_list](../../utility/initializer_list.html)<int> submatches,  
[std::regex_constants::match_flag_type](../match_flag_type.html) m =  
[std::regex_constants::match_default](../match_flag_type.html) ) = delete; |  (9)  |  (since C++11)  
template< [std::size_t](../../types/size_t.html) N >  
regex_token_iterator( BidirIt a, BidirIt b,  
const regex_type&& re,  
const int (&submatches)[N],  
[std::regex_constants::match_flag_type](../match_flag_type.html) m =  
[std::regex_constants::match_default](../match_flag_type.html) ) = delete; |  (10)  |  (since C++11)  
| |   
  
Constructs a new `regex_token_iterator`: 

1) Default constructor. Constructs the end-of-sequence iterator.

2-5) First, copies the list of the requested submatch out of the submatches or submatch argument into the member list stored in the iterator and constructs the member [std::regex_iterator](../regex_iterator.html "cpp/regex/regex iterator") by passing a, b, re, and m to its four-argument constructor (that constructor performs the initial call to [std::regex_search](../regex_search.html "cpp/regex/regex search")) and sets the internal counter of submatches to zero. 

  * If, after construction, the member `regex_iterator` is not an end-of-sequence iterator, sets the member pointer to the address of the current [std::sub_match](../sub_match.html "cpp/regex/sub match"). 
  * Otherwise (if the member `regex_iterator` is an end-of-sequence iterator), but the value -1 is one of the values in submatches/submatch, turns *this into a _suffix iterator_ pointing at the range `[`a`, `b`)` (the entire string is the non-matched suffix). 
  * Otherwise (if -1 is not in the list of submatches), turns *this into the end-of-sequence iterator.



The behavior is undefined if any value in submatches is less than -1. 

6) Copy constructor: performs member-wise copy (including making a copy of the member `regex_iterator` and the member pointer to current sub_match).

7-10) The overloads (2-5) are prohibited from being called with a temporary regex since otherwise the returned iterator would be immediately invalidated.

### Parameters

a  |  \-  |  [LegacyBidirectionalIterator](../../named_req/BidirectionalIterator.html "cpp/named req/BidirectionalIterator") to the beginning of the target character sequence   
---|---|---  
b  |  \-  |  [LegacyBidirectionalIterator](../../named_req/BidirectionalIterator.html "cpp/named req/BidirectionalIterator") to the end of the target character sequence   
re  |  \-  |  regular expression used to search the target character sequence   
submatch  |  \-  |  the index of the submatch that should be returned. "0" represents the entire match, and "-1" represents the parts that are not matched (e.g, the stuff between matches)   
submatches  |  \-  |  the sequence of submatch indices that should be iterated over within each match, may include the special value -1 for the non-matched fragments   
m  |  \-  |  flags that govern the behavior of re  
  
### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2332](https://cplusplus.github.io/LWG/issue2332) | C++11  | a `regex_token_iterator` constructed from a  
temporary `basic_regex` became invalid immediately  | such construction is disallowed via deleted overloads 
