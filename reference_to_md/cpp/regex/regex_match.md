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
[match_results](match_results.html "cpp/regex/match results")(C++11)  
Algorithms  
**regex_match**(C++11)  
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
  


Defined in header `[<regex>](../header/regex.html "cpp/header/regex")` |  |   
---|---|---  
template< class BidirIt, class Alloc, class CharT, class Traits >  
bool regex_match( BidirIt first, BidirIt last,  
[std::match_results](match_results.html)<BidirIt, Alloc>& m,  
const [std::basic_regex](basic_regex.html)<CharT, Traits>& e,  
[std::regex_constants::match_flag_type](match_flag_type.html) flags =  
[std::regex_constants::match_default](match_flag_type.html) ); |  (1)  |  (since C++11)  
template< class BidirIt, class CharT, class Traits >  
bool regex_match( BidirIt first, BidirIt last,  
const [std::basic_regex](basic_regex.html)<CharT, Traits>& e,  
[std::regex_constants::match_flag_type](match_flag_type.html) flags =  
[std::regex_constants::match_default](match_flag_type.html) ); |  (2)  |  (since C++11)  
template< class CharT, class Alloc, class Traits >  
bool regex_match( const CharT* str,  
[std::match_results](match_results.html)<const CharT*, Alloc>& m,  
const [std::basic_regex](basic_regex.html)<CharT, Traits>& e,  
[std::regex_constants::match_flag_type](match_flag_type.html) flags =  
[std::regex_constants::match_default](match_flag_type.html) ); |  (3)  |  (since C++11)  
template< class CharT, class Traits >  
bool regex_match( const CharT* str, const [std::basic_regex](basic_regex.html)<CharT, Traits>& e,  
[std::regex_constants::match_flag_type](match_flag_type.html) flags =  
[std::regex_constants::match_default](match_flag_type.html) ); |  (4)  |  (since C++11)  
template< class STraits, class SAlloc, class Alloc,  
class CharT, class Traits >  
bool regex_match  
( const [std::basic_string](../string/basic_string.html)<CharT, STraits, SAlloc>& s,  
[std::match_results](match_results.html)  
<typename [std::basic_string](../string/basic_string.html)<CharT, STraits, SAlloc>::const_iterator,  
Alloc>& m,  
const [std::basic_regex](basic_regex.html)<CharT, Traits>& e,  
[std::regex_constants::match_flag_type](match_flag_type.html) flags =  
[std::regex_constants::match_default](match_flag_type.html) ); |  (5)  |  (since C++11)  
template< class STraits, class SAlloc, class CharT, class Traits >  
bool regex_match( const [std::basic_string](../string/basic_string.html)<CharT, STraits, SAlloc>& s,  
const [std::basic_regex](basic_regex.html)<CharT, Traits>& e,  
[std::regex_constants::match_flag_type](match_flag_type.html) flags =  
[std::regex_constants::match_default](match_flag_type.html) ); |  (6)  |  (since C++11)  
template< class STraits, class SAlloc, class Alloc,  
class CharT, class Traits >  
bool regex_match  
( const [std::basic_string](../string/basic_string.html)<CharT, STraits, SAlloc>&&,  
[std::match_results](match_results.html)  
<typename [std::basic_string](../string/basic_string.html)<CharT, STraits, SAlloc>::const_iterator,  
Alloc>&,  
const [std::basic_regex](basic_regex.html)<CharT, Traits>&,  
[std::regex_constants::match_flag_type](match_flag_type.html) flags =  
[std::regex_constants::match_default](match_flag_type.html) ) = delete; |  (7)  |  (since C++11)  
| |   
  
Determines if the regular expression e matches the entire target character sequence. The detailed match result is stored in m (if present). 

1,2) The target character sequence is represented by the range `[`first`, `last`)`.  If `BidirIt` does not satisfy the requirements of [LegacyBidirectionalIterator](../named_req/BidirectionalIterator.html "cpp/named req/BidirectionalIterator"), the behavior is undefined.  | (until C++23)  
---|---  
If `BidirIt` does not model [`bidirectional_iterator`](../iterator/bidirectional_iterator.html "cpp/iterator/bidirectional iterator"), the behavior is undefined.  | (since C++23)  
  
3,4) The target character sequence is represented by the range `[`str`, `str + [std::char_traits](../string/char_traits.html)<CharT>::length(str)`)`.

5,6) The target character sequence is represented by the string s.

7) The target character sequence cannot be represented by a [std::string](../string/basic_string.html "cpp/string/basic string") rvalue.

If the match does not exist, the following expressions involving m (if exists) should yield the specified values: 

Expression  |  Value   
---|---  
m.[`ready`](match_results/ready.html "cpp/regex/match results/ready")() | true  
m.[`size`](match_results/size.html "cpp/regex/match results/size")() | ​0​  
m.[`empty`](match_results/empty.html "cpp/regex/match results/empty")() | true  
  
If the match exists, given any integer in `(`​0`, `m.size()`)` as n, the following expressions involving m should yield the specified values for each overload listed below: 

Expression  | Value   
---|---  
Overload (1) |  Overload (3) |  Overload (5)  
m.[`ready`](match_results/ready.html "cpp/regex/match results/ready")() | true  
m.[`size`](match_results/size.html "cpp/regex/match results/size")() | 1 + e.[`mark_count`](basic_regex/mark_count.html "cpp/regex/basic regex/mark count")()  
m.[`empty`](match_results/empty.html "cpp/regex/match results/empty")() | false  
m.[`prefix`](match_results/prefix.html "cpp/regex/match results/prefix")().first | first | str | s.begin()  
m.[`prefix`](match_results/prefix.html "cpp/regex/match results/prefix")().second  
m.[`prefix`](match_results/prefix.html "cpp/regex/match results/prefix")().matched |  false[[1]](regex_match.html#cite_note-1)  
m.[`suffix`](match_results/suffix.html "cpp/regex/match results/suffix")().first | last | [std::char_traits](../string/char_traits.html)<CharT>::  
length(str) + str | s.end()  
m.[`suffix`](match_results/suffix.html "cpp/regex/match results/suffix")().second  
m.[`suffix`](match_results/suffix.html "cpp/regex/match results/suffix")().matched |  false[[2]](regex_match.html#cite_note-2)  
m[`[0]`](match_results/operator_at.html "cpp/regex/match results/operator at").first | first | str | s.begin()  
m[`[0]`](match_results/operator_at.html "cpp/regex/match results/operator at").second | last | [std::char_traits](../string/char_traits.html)<CharT>::  
length(str) + str | s.end()  
m[`[0]`](match_results/operator_at.html "cpp/regex/match results/operator at").matched |  true[[3]](regex_match.html#cite_note-3)  
m[`[n]`](match_results/operator_at.html "cpp/regex/match results/operator at").first | 

  * last if [marked sub-expression](ecmascript.html#Sub-expressions "cpp/regex/ecmascript") n did not participate in the match 
  * the start of the sequence otherwise matching sub-expression n otherwise 

  
m[`[n]`](match_results/operator_at.html "cpp/regex/match results/operator at").second | 

  * last if [marked sub-expression](ecmascript.html#Sub-expressions "cpp/regex/ecmascript") n did not participate in the match 
  * the end of the sequence otherwise matching sub-expression n otherwise 

  
m[`[n]`](match_results/operator_at.html "cpp/regex/match results/operator at").matched | 

  * false if [marked sub-expression](ecmascript.html#Sub-expressions "cpp/regex/ecmascript") n did not participate in the match 
  * true otherwise 

  
  
  1. [↑](regex_match.html#cite_ref-1) The match prefix is empty.
  2. [↑](regex_match.html#cite_ref-2) The match suffix is empty.
  3. [↑](regex_match.html#cite_ref-3) The entire sequence is matched.



## Contents

  * [1 Parameters](regex_match.html#Parameters)
  * [2 Return value](regex_match.html#Return_value)
  * [3 Notes](regex_match.html#Notes)
  * [4 Example](regex_match.html#Example)
  * [5 Defect reports](regex_match.html#Defect_reports)
  * [6 See also](regex_match.html#See_also)

  
---  
  
### Parameters

first, last  |  \-  |  the target character range   
---|---|---  
str  |  \-  |  the target null-terminated C-style string   
s  |  \-  |  the target [std::basic_string](../string/basic_string.html "cpp/string/basic string")  
m  |  \-  |  the match results   
e  |  \-  |  the regular expression   
flags  |  \-  |  flags used to determine how the match will be performed   
  
### Return value

Returns true if the entire target sequence matches e, false otherwise. 

### Notes

Because `regex_match` only considers full matches, the same regex may give different matches between `regex_match` and [std::regex_search](regex_search.html "cpp/regex/regex search"): 
    
    
    [std::regex](basic_regex.html) re("Get|GetValue");
    [std::cmatch](match_results.html) m;
    [std::regex_search](regex_search.html)("GetValue", m, re);  // returns true, and m[0] contains "Get"
    std::regex_match ("GetValue", m, re);  // returns true, and m[0] contains "GetValue"
    [std::regex_search](regex_search.html)("GetValues", m, re); // returns true, and m[0] contains "Get"
    std::regex_match ("GetValues", m, re); // returns false

### Example

Run this code
    
    
    #include <cstddef>
    #include <iostream>
    #include <regex>
    #include <string>
     
    int main()
    {
        // Simple regular expression matching
        const [std::string](../string/basic_string.html) fnames[] = {"foo.txt", "bar.txt", "baz.dat", "zoidberg"};
        const [std::regex](basic_regex.html) txt_regex("[a-z]+\\.txt");
     
        for (const auto& fname : fnames)
            [std::cout](../io/cout.html) << fname << ": " << std::regex_match(fname, txt_regex) << '\n';
     
        // Extraction of a sub-match
        const [std::regex](basic_regex.html) base_regex("([a-z]+)\\.txt");
        [std::smatch](match_results.html) base_match;
     
        for (const auto& fname : fnames)
            if (std::regex_match(fname, base_match, base_regex))
                // The first sub_match is the whole string; the next
                // sub_match is the first parenthesized expression.
                if (base_match.size() == 2)
                {
                    [std::ssub_match](sub_match.html) base_sub_match = base_match[1];
                    [std::string](../string/basic_string.html) base = base_sub_match.str();
                    [std::cout](../io/cout.html) << fname << " has a base of " << base << '\n';
                }
     
        // Extraction of several sub-matches
        const [std::regex](basic_regex.html) pieces_regex("([a-z]+)\\.([a-z]+)");
        [std::smatch](match_results.html) pieces_match;
     
        for (const auto& fname : fnames)
            if (std::regex_match(fname, pieces_match, pieces_regex))
            {
                [std::cout](../io/cout.html) << fname << '\n';
                for ([std::size_t](../types/size_t.html) i = 0; i < pieces_match.size(); ++i)
                {
                    [std::ssub_match](sub_match.html) sub_match = pieces_match[i];
                    [std::string](../string/basic_string.html) piece = sub_match.str();
                    [std::cout](../io/cout.html) << "  submatch " << i << ": " << piece << '\n';
                }
            }
    }

Output: 
    
    
    foo.txt: 1
    bar.txt: 1
    baz.dat: 0
    zoidberg: 0
    foo.txt has a base of foo
    bar.txt has a base of bar
    foo.txt
      submatch 0: foo.txt
      submatch 1: foo
      submatch 2: txt
    bar.txt
      submatch 0: bar.txt
      submatch 1: bar
      submatch 2: txt
    baz.dat
      submatch 0: baz.dat
      submatch 1: baz
      submatch 2: dat

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2205](https://cplusplus.github.io/LWG/issue2205) | C++11  | n could be zero in the postcondition  | can only be positive   
[LWG 2273](https://cplusplus.github.io/LWG/issue2273) | C++11  | it was unclear whether partial matches are considered  | only considers full matches   
[LWG 2329](https://cplusplus.github.io/LWG/issue2329) | C++11  | overload (5) accepted `basic_string` rvalues,  
which could result in dangling iterators  | rejected via deleted overload (7)  
  
### See also

[ basic_regex](basic_regex.html "cpp/regex/basic regex")(C++11) |  regular expression object   
(class template)   
---|---  
[ match_results](match_results.html "cpp/regex/match results")(C++11) |  identifies one regular expression match, including all sub-expression matches   
(class template)   
[ regex_search](regex_search.html "cpp/regex/regex search")(C++11) |  attempts to match a regular expression to any part of a character sequence   
(function template) 
