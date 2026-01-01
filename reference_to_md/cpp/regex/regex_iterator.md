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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/navbar_content&action=edit)

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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/text/navbar_content&action=edit)

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
**regex_iterator**(C++11)  
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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/regex/navbar_content&action=edit)

**`std::regex_iterator`**

Member functions  
---  
[regex_iterator::regex_iterator](regex_iterator/regex_iterator.html "cpp/regex/regex iterator/regex iterator")  
[regex_iterator::operator=](regex_iterator/operator=.html "cpp/regex/regex iterator/operator=")  
Comparisons  
[regex_iterator::operator==regex_iterator::operator!=](regex_iterator/operator_cmp.html "cpp/regex/regex iterator/operator cmp")(until C++20)  
Observers  
[regex_iterator::operator*regex_iterator::operator->](regex_iterator/operator*.html "cpp/regex/regex iterator/operator*")  
Modifiers  
[regex_iterator::operator++regex_iterator::operator++(int)](regex_iterator/operator_arith.html "cpp/regex/regex iterator/operator arith")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/regex/regex_iterator/navbar_content&action=edit)

Defined in header `[<regex>](../header/regex.html "cpp/header/regex")` |  |   
---|---|---  
template<  
class BidirIt,  
class CharT = typename [std::iterator_traits](../iterator/iterator_traits.html)<BidirIt>::value_type,  
class Traits = [std::regex_traits](regex_traits.html)<CharT>  
> class regex_iterator |  |  (since C++11)  
| |   
  
`std::regex_iterator` is a read-only iterator that accesses the individual matches of a regular expression within the underlying character sequence. It meets the requirements of a [LegacyForwardIterator](../named_req/ForwardIterator.html "cpp/named req/ForwardIterator"), except that for dereferenceable values a and b with a == b, *a and *b will not be bound to the same object. 

On construction, and on every increment, it calls [std::regex_search](regex_search.html "cpp/regex/regex search") and remembers the result (that is, saves a copy of the [std::match_results](match_results.html)<BidirIt> value). The first object may be read when the iterator is constructed or when the first dereferencing is done. Otherwise, dereferencing only returns a copy of the most recently obtained regex match. 

The default-constructed `std::regex_iterator` is the end-of-sequence iterator. When a valid `std::regex_iterator` is incremented after reaching the last match ([std::regex_search](regex_search.html "cpp/regex/regex search") returns false), it becomes equal to the end-of-sequence iterator. Dereferencing or incrementing it further invokes undefined behavior. 

A typical implementation of `std::regex_iterator` holds the begin and the end iterators for the underlying sequence (two instances of `BidirIt`), a pointer to the regular expression (const regex_type*), the match flags ([std::regex_constants::match_flag_type](match_flag_type.html "cpp/regex/match flag type")), and the current match ([std::match_results](match_results.html)<BidirIt>). 

## Contents

  * [1 Type requirements](regex_iterator.html#Type_requirements)
  * [2 Specializations](regex_iterator.html#Specializations)
  * [3 Member types](regex_iterator.html#Member_types)
  * [4 Data members](regex_iterator.html#Data_members)
  * [5 Member functions](regex_iterator.html#Member_functions)
  * [6 Notes](regex_iterator.html#Notes)
  * [7 Example](regex_iterator.html#Example)
  * [8 Defect reports](regex_iterator.html#Defect_reports)
  * [9 See also](regex_iterator.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/regex/regex_iterator&action=edit&section=1 "Edit section: Type requirements")] Type requirements

-`BidirIt` must meet the requirements of [LegacyBidirectionalIterator](../named_req/BidirectionalIterator.html "cpp/named req/BidirectionalIterator").   
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/regex/regex_iterator&action=edit&section=2 "Edit section: Specializations")] Specializations

Several specializations for common character sequence types are defined: 

Defined in header `[<regex>](../header/regex.html "cpp/header/regex")`  
---  
Type  |  Definition   
`**std::cregex_iterator**` |  std::regex_iterator<const char*>  
`**std::wcregex_iterator**` |  std::regex_iterator<const wchar_t*>  
`**std::sregex_iterator**` |  std::regex_iterator<[std::string](../string/basic_string.html)::const_iterator>  
`**std::wsregex_iterator**` |  std::regex_iterator<[std::wstring](../string/basic_string.html)::const_iterator>  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/regex/regex_iterator&action=edit&section=3 "Edit section: Member types")] Member types

Type  |  Definition   
---|---  
`value_type` |  [std::match_results](match_results.html)<BidirIt>  
`difference_type` |  [std::ptrdiff_t](../types/ptrdiff_t.html "cpp/types/ptrdiff t")  
`pointer` |  const value_type*  
`reference` |  const value_type&  
`iterator_category` |  [std::forward_iterator_tag](../iterator/iterator_tags.html "cpp/iterator/iterator tags")  
`iterator_concept` (C++20) |  [std::input_iterator_tag](../iterator/iterator_tags.html "cpp/iterator/iterator tags")  
`regex_type` |  [std::basic_regex](basic_regex.html)<CharT, Traits>  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/regex/regex_iterator&action=edit&section=4 "Edit section: Data members")] Data members

Member  |  Description   
---|---  
`BidiIt` `_begin_` (private) |  the begin iterator  
(exposition-only member object*)  
`BidiIt` `_end_` (private) |  the end iterator  
(exposition-only member object*)  
const regex_type* `_pregex_` (private) |  a pointer to a regular expression  
(exposition-only member object*)  
regex_constants::match_flag_type `_flags_` (private) |  a flag  
(exposition-only member object*)  
match_results<BidiIt> `_match_` (private) |  the current match  
(exposition-only member object*)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/regex/regex_iterator&action=edit&section=5 "Edit section: Member functions")] Member functions

[ (constructor)](regex_iterator/regex_iterator.html "cpp/regex/regex iterator/regex iterator") |  constructs a new `regex_iterator`   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/regex/regex_iterator/dsc_constructor&action=edit)  
---|---  
(destructor)(implicitly declared) |  destructs a `regex_iterator`, including the cached value   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/regex/regex_iterator/dsc_destructor&action=edit)  
[ operator=](regex_iterator/operator=.html "cpp/regex/regex iterator/operator=") |  assigns contents   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/regex/regex_iterator/dsc_operator%3D&action=edit)  
[ operator==operator!=](regex_iterator/operator_cmp.html "cpp/regex/regex iterator/operator cmp")(removed in C++20) |  compares two `regex_iterator`s   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/regex/regex_iterator/dsc_operator_cmp&action=edit)  
[ operator*operator->](regex_iterator/operator*.html "cpp/regex/regex iterator/operator*") |  accesses the current match   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/regex/regex_iterator/dsc_operator*&action=edit)  
[ operator++operator++(int)](regex_iterator/operator_arith.html "cpp/regex/regex iterator/operator arith") |  advances the iterator to the next match   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/regex/regex_iterator/dsc_operator_arith&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/regex/regex_iterator&action=edit&section=6 "Edit section: Notes")] Notes

It is the programmer's responsibility to ensure that the [std::basic_regex](basic_regex.html "cpp/regex/basic regex") object passed to the iterator's constructor outlives the iterator. Because the iterator stores a pointer to the regex, incrementing the iterator after the regex was destroyed accesses a dangling pointer. 

If the part of the regular expression that matched is just an [assertion](ecmascript.html#Assertions "cpp/regex/ecmascript") (`^`, `$`, `\b`, `\B`), the match stored in the iterator is a zero-length match, that is, match[0].first == match[0].second. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/regex/regex_iterator&action=edit&section=7 "Edit section: Example")] Example

Run this code
    
    
    #include <iostream>
    #include <iterator>
    #include <regex>
    #include <string>
     
    int main()
    {
        const [std::string](../string/basic_string.html) s = "Quick brown fox.";
     
        [std::regex](basic_regex.html) words_regex("[^\\s]+");
        auto words_begin = std::sregex_iterator(s.begin(), s.end(), words_regex);
        auto words_end = std::sregex_iterator();
     
        [std::cout](../io/cout.html) << "Found " << [std::distance](../iterator/distance.html)(words_begin, words_end) << " words:\n";
     
        for (std::sregex_iterator i = words_begin; i != words_end; ++i)
        {
            [std::smatch](match_results.html) match = *i;
            [std::string](../string/basic_string.html) match_str = match.str();
            [std::cout](../io/cout.html) << match_str << '\n';
        }
    }

Output: 
    
    
    Found 3 words:
    Quick
    brown
    fox.

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/regex/regex_iterator&action=edit&section=8 "Edit section: Defect reports")] Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3698](https://cplusplus.github.io/LWG/issue3698)  
([P2770R0](https://wg21.link/P2770R0))  | C++20  | `regex_iterator` was a [`forward_iterator`](../iterator/forward_iterator.html "cpp/iterator/forward iterator")  
while being a stashing iterator  | made [`input_iterator`](../iterator/input_iterator.html "cpp/iterator/input iterator")[[1]](regex_iterator.html#cite_note-1)  
  
  1. [↑](regex_iterator.html#cite_ref-1) `iterator_category` was unchanged by the resolution, because changing it to [std::input_iterator_tag](../iterator/iterator_tags.html "cpp/iterator/iterator tags") might break too much existing code.



### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/regex/regex_iterator&action=edit&section=9 "Edit section: See also")] See also

[ match_results](match_results.html "cpp/regex/match results")(C++11) |  identifies one regular expression match, including all sub-expression matches   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/regex/dsc_match_results&action=edit)  
---|---  
[ regex_search](regex_search.html "cpp/regex/regex search")(C++11) |  attempts to match a regular expression to any part of a character sequence   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/regex/dsc_regex_search&action=edit)  
---
