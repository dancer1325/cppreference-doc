[C++](../../cpp.html "cpp")

[Compiler support](../compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](../freestanding.html "cpp/freestanding")  
[Language](../language.html "cpp/language")  
[Standard library](../standard_library.html "cpp/standard library")  
[Standard library headers](../headers.html "cpp/header")  
[Named requirements](../iterator/concepts.html "cpp/named req")  
[Feature test macros](../experimental/feature_test.html "cpp/feature test") (C++20)  
[Language support library](../utility.html#Language_support "cpp/utility")  
[Concepts library](../concepts.html "cpp/concepts") (C++20)  
[Diagnostics library](../error.html "cpp/error")  
[Memory management library](../memory.html "cpp/memory")  
[Metaprogramming library](../meta.html "cpp/meta") (C++11)  
[General utilities library](../utility.html "cpp/utility")  
[Containers library](../container.html "cpp/container")  
[Iterators library](../iterator.html "cpp/iterator")  
[Ranges library](../ranges.html "cpp/ranges") (C++20)  
[Algorithms library](../algorithm.html "cpp/algorithm")  
[Strings library](../string.html "cpp/string")  
[Text processing library](../text.html "cpp/text")  
[Numerics library](../numeric.html "cpp/numeric")  
[Date and time library](../chrono.html "cpp/chrono")  
[Input/output library](../io.html "cpp/io")  
[Filesystem library](../filesystem.html "cpp/filesystem") (C++17)  
[Concurrency support library](../atomic.html "cpp/thread") (C++11)  
[Execution control library](../experimental/execution.html "cpp/execution") (C++26)  
[Technical specifications](../experimental.html "cpp/experimental")  
[Symbols index](../symbol_index.html "cpp/symbol index")  
[External libraries](../links/libs.html "cpp/links/libs")  
  


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
**match_results**(C++11)  
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
[match_flag_type](match_flag_type.html "cpp/regex/match flag type")(C++11)  
[error_type](error_type.html "cpp/regex/error type")(C++11)  
Regex Grammar  
[Modified ECMAScript-262](ecmascript.html "cpp/regex/ecmascript")(C++11)  
  


**`std::match_results`**

Member functions  
---  
[match_results::match_results](match_results/match_results.html "cpp/regex/match results/match results")  
[match_results::~match_results](match_results/~match_results.html "cpp/regex/match results/~match results")  
[match_results::operator=](match_results/operator=.html "cpp/regex/match results/operator=")  
[match_results::get_allocator](match_results/get_allocator.html "cpp/regex/match results/get allocator")  
State  
[match_results::ready](match_results/ready.html "cpp/regex/match results/ready")  
Element access  
[match_results::size](match_results/size.html "cpp/regex/match results/size")  
[match_results::max_size](match_results/max_size.html "cpp/regex/match results/max size")  
[match_results::empty](match_results/empty.html "cpp/regex/match results/empty")  
[match_results::length](match_results/length.html "cpp/regex/match results/length")  
[match_results::position](match_results/position.html "cpp/regex/match results/position")  
[match_results::str](match_results/str.html "cpp/regex/match results/str")  
[match_results::operator[]](match_results/operator_at.html "cpp/regex/match results/operator at")  
[match_results::prefix](match_results/prefix.html "cpp/regex/match results/prefix")  
[match_results::suffix](match_results/suffix.html "cpp/regex/match results/suffix")  
Iterators  
[match_results::beginmatch_results::cbegin](match_results/begin.html "cpp/regex/match results/begin")  
[match_results::endmatch_results::cend](match_results/end.html "cpp/regex/match results/end")  
Format  
[match_results::format](match_results/format.html "cpp/regex/match results/format")  
Modifiers  
[match_results::swap](match_results/swap.html "cpp/regex/match results/swap")  
Non-member functions  
[operator==operator!=](match_results/operator_cmp.html "cpp/regex/match results/operator cmp")(until C++20)  
[swap(std::match_results)](match_results/swap2.html "cpp/regex/match results/swap2")  
  


Defined in header `[<regex>](../header/regex.html "cpp/header/regex")` |  |   
---|---|---  
template<  
class BidirIt,  
class Alloc = [std::allocator](../memory/allocator.html)<[std::sub_match](sub_match.html)<BidirIt>>  
> class match_results; |  (1)  |  (since C++11)  
namespace pmr {  
template <class BidirIt>  
using match_results = std::match_results<BidirIt,  
[std::pmr::polymorphic_allocator](../memory/polymorphic_allocator.html)<  
[std::sub_match](sub_match.html)<BidirIt>>>;  
} |  (2)  |  (since C++17)  
| |   
  
The class template `std::match_results` holds a collection of character sequences that represent the result of a regular expression match. 

This is a specialized allocator-aware container. It can only be default created, obtained from [std::regex_iterator](regex_iterator.html "cpp/regex/regex iterator"), or modified by [std::regex_search](regex_search.html "cpp/regex/regex search") or [std::regex_match](regex_match.html "cpp/regex/regex match"). Because `std::match_results` holds [std::sub_match](sub_match.html "cpp/regex/sub match")es, each of which is a pair of iterators into the original character sequence that was matched, it's undefined behavior to examine `std::match_results` if the original character sequence was destroyed or iterators to it were invalidated for other reasons. 

The first [std::sub_match](sub_match.html "cpp/regex/sub match") (index 0) contained in a `std::match_result` always represents the full match within a target sequence made by a regex, and subsequent [std::sub_match](sub_match.html "cpp/regex/sub match")es represent sub-expression matches corresponding in sequence to the left parenthesis delimiting the sub-expression in the regex. 

`std::match_results` meets the requirements of a [AllocatorAwareContainer](../named_req/AllocatorAwareContainer.html "cpp/named req/AllocatorAwareContainer") and of a [SequenceContainer](../named_req/SequenceContainer.html "cpp/named req/SequenceContainer"), except that only copy assignment, move assignment, and operations defined for a constant containers are supported, and that the semantics of comparison functions are different from those required for a container. 

## Contents

  * [1 Type requirements](match_results.html#Type_requirements)
  * [2 Specializations](match_results.html#Specializations)
  * [3 Member types](match_results.html#Member_types)
  * [4 Member functions](match_results.html#Member_functions)
    * [4.1 State](match_results.html#State)
    * [4.2 Size](match_results.html#Size)
    * [4.3 Element access](match_results.html#Element_access)
    * [4.4 Iterators](match_results.html#Iterators)
    * [4.5 Format](match_results.html#Format)
    * [4.6 Modifiers](match_results.html#Modifiers)
  * [5 Non-member functions](match_results.html#Non-member_functions)

  
---  
  
### Type requirements

-`BidirIt` must meet the requirements of [LegacyBidirectionalIterator](../named_req/BidirectionalIterator.html "cpp/named req/BidirectionalIterator").   
---  
-`Alloc` must meet the requirements of [Allocator](../named_req/Allocator.html "cpp/named req/Allocator").   
  
### Specializations

Several specializations for common character sequence types are provided: 

Defined in header `[<regex>](../header/regex.html "cpp/header/regex")`  
---  
Type  |  Definition   
`std::cmatch` |  std::match_results<const char*>  
`std::wcmatch` |  std::match_results<const wchar_t*>  
`std::smatch` |  std::match_results<std::string::const_iterator>  
`std::wsmatch` |  std::match_results<std::wstring::const_iterator>  
`std::pmr::cmatch` (C++17) |  std::pmr::match_results<const char*>  
`std::pmr::wcmatch` (C++17) |  std::pmr::match_results<const wchar_t*>  
`std::pmr::smatch` (C++17) |  std::pmr::match_results<std::string::const_iterator>  
`std::pmr::wsmatch` (C++17) |  std::pmr::match_results<std::wstring::const_iterator>  
  
### Member types

Member type  |  Definition   
---|---  
`allocator_type` |  `Allocator`  
`value_type` |  [std::sub_match](sub_match.html)<BidirIt>  
`const_reference` |  const value_type&  
`reference` |  `value_type&`  
`const_iterator` |  _implementation-defined_ (depends on the underlying container)   
`iterator` |  `const_iterator`  
`difference_type` |  [std::iterator_traits](../iterator/iterator_traits.html)<BidirIt>::difference_type  
`size_type` |  [std::allocator_traits](../memory/allocator_traits.html)<Alloc>::size_type  
`char_type` |  [std::iterator_traits](../iterator/iterator_traits.html)<BidirIt>::value_type  
`string_type` |  [std::basic_string](../string/basic_string.html)<char_type>  
  
### Member functions

[ (constructor)](match_results/match_results.html "cpp/regex/match results/match results") |  constructs the object   
(public member function)   
---|---  
[ (destructor)](match_results/~match_results.html "cpp/regex/match results/~match results") |  destructs the object   
(public member function)   
[ operator=](match_results/operator=.html "cpp/regex/match results/operator=") |  assigns the contents   
(public member function)   
[ get_allocator](match_results/get_allocator.html "cpp/regex/match results/get allocator") |  returns the associated allocator   
(public member function)   
  
#####  State   
  
[ ready](match_results/ready.html "cpp/regex/match results/ready") |  checks if the results are available   
(public member function)  
  
#####  Size   
  
[ empty](match_results/empty.html "cpp/regex/match results/empty") |  checks whether the match was successful   
(public member function)   
[ size](match_results/size.html "cpp/regex/match results/size") |  returns the number of matches in a fully-established result state   
(public member function)   
[ max_size](match_results/max_size.html "cpp/regex/match results/max size") |  returns the maximum possible number of sub-matches   
(public member function)   
  
#####  Element access   
  
[ length](match_results/length.html "cpp/regex/match results/length") |  returns the length of the particular sub-match   
(public member function)   
[ position](match_results/position.html "cpp/regex/match results/position") |  returns the position of the first character of the particular sub-match   
(public member function)   
[ str](match_results/str.html "cpp/regex/match results/str") |  returns the sequence of characters for the particular sub-match   
(public member function)   
[ operator[]](match_results/operator_at.html "cpp/regex/match results/operator at") |  returns specified sub-match   
(public member function)   
[ prefix](match_results/prefix.html "cpp/regex/match results/prefix") |  returns sub-sequence between the beginning of the target sequence and the beginning of the full match   
(public member function)   
[ suffix](match_results/suffix.html "cpp/regex/match results/suffix") |  returns sub-sequence between the end of the full match and the end of the target sequence   
(public member function)   
  
#####  Iterators   
  
[ begincbegin](match_results/begin.html "cpp/regex/match results/begin") |  returns iterator to the beginning of the list of sub-matches   
(public member function)   
[ endcend](match_results/end.html "cpp/regex/match results/end") |  returns iterator to the end of the list of sub-matches   
(public member function)   
  
#####  Format   
  
[ format](match_results/format.html "cpp/regex/match results/format") |  formats match results for output   
(public member function)   
  
#####  Modifiers   
  
[ swap](match_results/swap.html "cpp/regex/match results/swap") |  swaps the contents   
(public member function)   
  
### Non-member functions

[ operator==operator!=](match_results/operator_cmp.html "cpp/regex/match results/operator cmp")(removed in C++20) |  lexicographically compares the values in the two match result   
(function template)   
---|---  
[ std::swap(std::match_results)](match_results/swap2.html "cpp/regex/match results/swap2")(C++11) |  specializes the [`std::swap`](../utility/swap.html "cpp/algorithm/swap") algorithm   
(function template) 
