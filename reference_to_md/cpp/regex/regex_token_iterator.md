
  


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
**regex_token_iterator**(C++11)  
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
  


**`std::regex_token_iterator`**

Member functions  
---  
[regex_token_iterator::regex_token_iterator](regex_token_iterator/regex_token_iterator.html "cpp/regex/regex token iterator/regex token iterator")  
[regex_token_iterator::operator=](regex_token_iterator/operator=.html "cpp/regex/regex token iterator/operator=")  
Comparisons  
[regex_token_iterator::operator==regex_token_iterator::operator!=](regex_token_iterator/operator_cmp.html "cpp/regex/regex token iterator/operator cmp")(until C++20)  
Observers  
[regex_token_iterator::operator*regex_token_iterator::operator->](regex_token_iterator/operator*.html "cpp/regex/regex token iterator/operator*")  
Modifiers  
[regex_token_iterator::operator++regex_token_iterator::operator++(int)](regex_token_iterator/operator_arith.html "cpp/regex/regex token iterator/operator arith")  
  


Defined in header `[<regex>](../header/regex.html "cpp/header/regex")` |  |   
---|---|---  
template<  
class BidirIt,  
class CharT = typename [std::iterator_traits](../iterator/iterator_traits.html)<BidirIt>::value_type,  
class Traits = [std::regex_traits](regex_traits.html)<CharT>  
> class regex_token_iterator |  |  (since C++11)  
| |   
  
`std::regex_token_iterator` is a read-only [LegacyForwardIterator](../named_req/ForwardIterator.html "cpp/named req/ForwardIterator") that accesses the individual sub-matches of every match of a regular expression within the underlying character sequence. It can also be used to access the parts of the sequence that were not matched by the given regular expression (e.g. as a tokenizer). 

On construction, it constructs an [std::regex_iterator](regex_iterator.html "cpp/regex/regex iterator") and on every increment it steps through the requested sub-matches from the current match_results, incrementing the underlying [std::regex_iterator](regex_iterator.html "cpp/regex/regex iterator") when incrementing away from the last submatch. 

The default-constructed `std::regex_token_iterator` is the end-of-sequence iterator. When a valid `std::regex_token_iterator` is incremented after reaching the last submatch of the last match, it becomes equal to the end-of-sequence iterator. Dereferencing or incrementing it further invokes undefined behavior. 

Just before becoming the end-of-sequence iterator, a `std::regex_token_iterator` may become a _suffix iterator_ , if the index -1 (non-matched fragment) appears in the list of the requested submatch indices. Such iterator, if dereferenced, returns a match_results corresponding to the sequence of characters between the last match and the end of sequence. 

A typical implementation of `std::regex_token_iterator` holds the underlying [std::regex_iterator](regex_iterator.html "cpp/regex/regex iterator"), a container (e.g. [std::vector](../container/vector.html)<int>) of the requested submatch indices, the internal counter equal to the index of the submatch, a pointer to [std::sub_match](sub_match.html "cpp/regex/sub match"), pointing at the current submatch of the current match, and a [std::match_results](match_results.html "cpp/regex/match results") object containing the last non-matched character sequence (used in tokenizer mode). 

## Contents

  * [1 Type requirements](regex_token_iterator.html#Type_requirements)
  * [2 Specializations](regex_token_iterator.html#Specializations)
  * [3 Member types](regex_token_iterator.html#Member_types)
  * [4 Member functions](regex_token_iterator.html#Member_functions)
  * [5 Notes](regex_token_iterator.html#Notes)
  * [6 Example](regex_token_iterator.html#Example)
  * [7 Defect reports](regex_token_iterator.html#Defect_reports)

  
---  
  
### Type requirements

-`BidirIt` must meet the requirements of [LegacyBidirectionalIterator](../named_req/BidirectionalIterator.html "cpp/named req/BidirectionalIterator").   
---  
  
### Specializations

Several specializations for common character sequence types are defined: 

Defined in header `[<regex>](../header/regex.html "cpp/header/regex")`  
---  
Type  |  Definition   
`**std::cregex_token_iterator**` |  std::regex_token_iterator<const char*>  
`**std::wcregex_token_iterator**` |  std::regex_token_iterator<const wchar_t*>  
`**std::sregex_token_iterator**` |  std::regex_token_iterator<[std::string](../string/basic_string.html)::const_iterator>  
`**std::wsregex_token_iterator**` |  std::regex_token_iterator<[std::wstring](../string/basic_string.html)::const_iterator>  
  
### Member types

Member type  |  Definition   
---|---  
`value_type` |  [std::sub_match](sub_match.html)<BidirIt>  
`difference_type` |  [std::ptrdiff_t](../types/ptrdiff_t.html "cpp/types/ptrdiff t")  
`pointer` |  const value_type*  
`reference` |  const value_type&  
`iterator_category` |  [std::forward_iterator_tag](../iterator/iterator_tags.html "cpp/iterator/iterator tags")  
`iterator_concept` (C++20) |  [std::input_iterator_tag](../iterator/iterator_tags.html "cpp/iterator/iterator tags")  
`regex_type` |  [std::basic_regex](basic_regex.html)<CharT, Traits>  
  
### Member functions

[ (constructor)](regex_token_iterator/regex_token_iterator.html "cpp/regex/regex token iterator/regex token iterator") |  constructs a new `regex_token_iterator`   
(public member function)   
---|---  
(destructor)(implicitly declared) |  destructs a `regex_token_iterator`, including the cached value   
(public member function)   
[ operator=](regex_token_iterator/operator=.html "cpp/regex/regex token iterator/operator=") |  assigns contents   
(public member function)   
[ operator==operator!=](regex_token_iterator/operator_cmp.html "cpp/regex/regex token iterator/operator cmp")(removed in C++20) |  compares two `regex_token_iterator`s   
(public member function)   
[ operator*operator->](regex_token_iterator/operator*.html "cpp/regex/regex token iterator/operator*") |  accesses current submatch   
(public member function)   
[ operator++operator++(int)](regex_token_iterator/operator_arith.html "cpp/regex/regex token iterator/operator arith") |  advances the iterator to the next submatch   
(public member function)   
  
### Notes

It is the programmer's responsibility to ensure that the [std::basic_regex](basic_regex.html "cpp/regex/basic regex") object passed to the iterator's constructor outlives the iterator. Because the iterator stores a [std::regex_iterator](regex_iterator.html "cpp/regex/regex iterator") which stores a pointer to the regex, incrementing the iterator after the regex was destroyed results in undefined behavior. 

### Example

Run this code
    
    
    #include <algorithm>
    #include <fstream>
    #include <iostream>
    #include <iterator>
    #include <regex>
     
    int main()
    {
        // Tokenization (non-matched fragments)
        // Note that regex is matched only two times; when the third value is obtained
        // the iterator is a suffix iterator.
        const [std::string](../string/basic_string.html) text = "Quick brown fox.";
        const [std::regex](basic_regex.html) ws_re("\\s+"); // whitespace
        [std::copy](../algorithm/copy.html)(std::sregex_token_iterator(text.begin(), text.end(), ws_re, -1),
                  std::sregex_token_iterator(),
                  [std::ostream_iterator](../iterator/ostream_iterator.html)<[std::string](../string/basic_string.html)>([std::cout](../io/cout.html), "\n"));
     
        [std::cout](../io/cout.html) << '\n';
     
        // Iterating the first submatches
        const [std::string](../string/basic_string.html) html = R"(<p><a href="http://google.com">google</a> )"
                                 R"(< a HREF ="http://cppreference.com">cppreference</a>\n</p>)";
        const [std::regex](basic_regex.html) url_re(R"!!(<\s*A\s+[^>]*href\s*=\s*"([^"]*)")!!", std::regex::icase);
        std::copy(std::sregex_token_iterator(html.begin(), html.end(), url_re, 1),
                  std::sregex_token_iterator(),
                  std::ostream_iterator<std::string>(std::cout, "\n"));
    }

Output: 
    
    
    Quick
    brown
    fox.
     
    http://google.com
    http://cppreference.com

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3698](https://cplusplus.github.io/LWG/issue3698)  
([P2770R0](https://wg21.link/P2770R0))  | C++20  | `regex_token_iterator` was a [`forward_iterator`](../iterator/forward_iterator.html "cpp/iterator/forward iterator")  
while being a stashing iterator  | made [`input_iterator`](../iterator/input_iterator.html "cpp/iterator/input iterator")[[1]](regex_token_iterator.html#cite_note-1)  
  
  1. [↑](regex_token_iterator.html#cite_ref-1) `iterator_category` was unchanged by the resolution, because changing it to [std::input_iterator_tag](../iterator/iterator_tags.html "cpp/iterator/iterator tags") might break too much existing code.


