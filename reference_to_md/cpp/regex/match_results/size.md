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
**match_results::size**  
[match_results::max_size](max_size.html "cpp/regex/match results/max size")  
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
  


size_type size() const noexcept; |  |  (since C++11)  
---|---|---  
| |   
  
Returns the number of submatches, i.e. [std::distance](../../iterator/distance.html)(begin(), end()). 

Returns ​0​ if *this does not represent the result of a successful match. 

## Contents

  * [1 Parameters](size.html#Parameters)
  * [2 Return value](size.html#Return_value)
  * [3 Complexity](size.html#Complexity)
  * [4 Example](size.html#Example)
  * [5 See also](size.html#See_also)

  
---  
  
### Parameters

(none) 

### Return value

The number of submatches. 

### Complexity

Constant. 

### Example

Run this code
    
    
    #include <iostream>
    #include <regex>
    #include <string>
     
    int main()
    {
        [std::regex](../basic_regex.html) re("a(a)*b");
        [std::string](../../string/basic_string.html) target("aaab");
        [std::smatch](../match_results.html) sm;
     
        [std::cout](../../io/cout.html) << sm.size() << '\n';
     
        [std::regex_match](../regex_match.html)(target, sm, re);
        [std::cout](../../io/cout.html) << sm.size() << '\n';
    }

Output: 
    
    
    0
    2

### See also

[ begincbegin](begin.html "cpp/regex/match results/begin") |  returns iterator to the beginning of the list of sub-matches   
(public member function)   
---|---  
[ endcend](end.html "cpp/regex/match results/end") |  returns iterator to the end of the list of sub-matches   
(public member function) 
