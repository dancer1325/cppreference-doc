
  


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
**regex_search**(C++11)  
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
bool regex_search( BidirIt first, BidirIt last,  
[std::match_results](match_results.html)<BidirIt, Alloc>& m,  
const [std::basic_regex](basic_regex.html)<CharT, Traits>& e,  
[std::regex_constants::match_flag_type](match_flag_type.html) flags =  
[std::regex_constants::match_default](match_flag_type.html) ); |  (1)  |  (since C++11)  
template< class BidirIt, class CharT, class Traits >  
bool regex_search( BidirIt first, BidirIt last,  
const [std::basic_regex](basic_regex.html)<CharT, Traits>& e,  
[std::regex_constants::match_flag_type](match_flag_type.html) flags =  
[std::regex_constants::match_default](match_flag_type.html) ); |  (2)  |  (since C++11)  
template< class CharT, class Alloc, class Traits >  
bool regex_search( const CharT* str,  
[std::match_results](match_results.html)<const CharT*, Alloc>& m,  
const [std::basic_regex](basic_regex.html)<CharT, Traits>& e,  
[std::regex_constants::match_flag_type](match_flag_type.html) flags =  
[std::regex_constants::match_default](match_flag_type.html) ); |  (3)  |  (since C++11)  
template< class CharT, class Traits >  
bool regex_search( const CharT* str, const [std::basic_regex](basic_regex.html)<CharT, Traits>& e,  
[std::regex_constants::match_flag_type](match_flag_type.html) flags =  
[std::regex_constants::match_default](match_flag_type.html) ); |  (4)  |  (since C++11)  
template< class STraits, class SAlloc, class Alloc,  
class CharT, class Traits >  
bool regex_search  
( const [std::basic_string](../string/basic_string.html)<CharT, STraits, SAlloc>& s,  
[std::match_results](match_results.html)  
<typename [std::basic_string](../string/basic_string.html)<CharT, STraits, SAlloc>::const_iterator,  
Alloc>& m,  
const [std::basic_regex](basic_regex.html)<CharT, Traits>& e,  
[std::regex_constants::match_flag_type](match_flag_type.html) flags =  
[std::regex_constants::match_default](match_flag_type.html) ); |  (5)  |  (since C++11)  
template< class STraits, class SAlloc, class CharT, class Traits >  
bool regex_search( const [std::basic_string](../string/basic_string.html)<CharT, STraits, SAlloc>& s,  
const [std::basic_regex](basic_regex.html)<CharT, Traits>& e,  
[std::regex_constants::match_flag_type](match_flag_type.html) flags =  
[std::regex_constants::match_default](match_flag_type.html) ); |  (6)  |  (since C++11)  
template< class STraits, class SAlloc, class Alloc,  
class CharT, class Traits >  
bool regex_search  
( const [std::basic_string](../string/basic_string.html)<CharT, STraits, SAlloc>&&,  
[std::match_results](match_results.html)  
<typename [std::basic_string](../string/basic_string.html)<CharT, STraits, SAlloc>::const_iterator,  
Alloc>&,  
const [std::basic_regex](basic_regex.html)<CharT, Traits>&,  
[std::regex_constants::match_flag_type](match_flag_type.html) flags =  
[std::regex_constants::match_default](match_flag_type.html) ) = delete; |  (7)  |  (since C++11)  
| |   
  
Determines if there is a match between the regular expression e and some subsequence in the target character sequence. The detailed match result is stored in m (if present). 

1,2) The target character sequence is represented by the range `[`first`, `last`)`.  If `BidirIt` does not satisfy the requirements of [LegacyBidirectionalIterator](../named_req/BidirectionalIterator.html "cpp/named req/BidirectionalIterator"), the behavior is undefined.  | (until C++23)  
---|---  
If `BidirIt` does not model [`bidirectional_iterator`](../iterator/bidirectional_iterator.html "cpp/iterator/bidirectional iterator"), the behavior is undefined.  | (since C++23)  
  
3,4) The target character sequence is represented by the range `[`str`, `str + [std::char_traits](../string/char_traits.html)<CharT>::length(str)`)`.

5,6) The target character sequence is represented by the string s.

7) The target character sequence cannot be represented by a [std::string](../string/basic_string.html "cpp/string/basic string") rvalue.

If a match does not exist, the following expressions involving m (if exists) should yield the specified values: 

Expression  |  Value   
---|---  
m.[`ready`](match_results/ready.html "cpp/regex/match results/ready")() | true  
m.[`size`](match_results/size.html "cpp/regex/match results/size")() | ​0​  
m.[`empty`](match_results/empty.html "cpp/regex/match results/empty")() | true  
  
If a match exists, given any integer in `(`​0`, `m.size()`)` as n, the following expressions involving m should yield the specified values for each overload listed below: 

Expression  | Value   
---|---  
Overload (1) |  Overload (3) |  Overload (5)  
m.[`ready`](match_results/ready.html "cpp/regex/match results/ready")() | true  
m.[`size`](match_results/size.html "cpp/regex/match results/size")() | 1 + e.[`mark_count`](basic_regex/mark_count.html "cpp/regex/basic regex/mark count")()  
m.[`empty`](match_results/empty.html "cpp/regex/match results/empty")() | false  
m.[`prefix`](match_results/prefix.html "cpp/regex/match results/prefix")().first | first | str | s.begin()  
m.[`prefix`](match_results/prefix.html "cpp/regex/match results/prefix")().second | m[0].first  
m.[`prefix`](match_results/prefix.html "cpp/regex/match results/prefix")().matched | m.prefix().first != m.prefix().second  
m.[`suffix`](match_results/suffix.html "cpp/regex/match results/suffix")().first | m[0].second  
m.[`suffix`](match_results/suffix.html "cpp/regex/match results/suffix")().second | last | [std::char_traits](../string/char_traits.html)<CharT>::  
length(str) + str | s.end()  
m.[`suffix`](match_results/suffix.html "cpp/regex/match results/suffix")().matched | m.suffix().first != m.suffix().second  
m[`[0]`](match_results/operator_at.html "cpp/regex/match results/operator at").first | the start of the sequence that matched e  
m[`[0]`](match_results/operator_at.html "cpp/regex/match results/operator at").second | the end of the sequence that matched e  
m[`[0]`](match_results/operator_at.html "cpp/regex/match results/operator at").matched | true  
m[`[n]`](match_results/operator_at.html "cpp/regex/match results/operator at").first | 

  * last if [marked sub-expression](ecmascript.html#Sub-expressions "cpp/regex/ecmascript") n did not participate in the match 
  * the start of the sequence otherwise matching sub-expression n otherwise 

  
m[`[n]`](match_results/operator_at.html "cpp/regex/match results/operator at").second | 

  * last if [marked sub-expression](ecmascript.html#Sub-expressions "cpp/regex/ecmascript") n did not participate in the match 
  * the end of the sequence otherwise matching sub-expression n otherwise 

  
m[`[n]`](match_results/operator_at.html "cpp/regex/match results/operator at").matched | 

  * false if [marked sub-expression](ecmascript.html#Sub-expressions "cpp/regex/ecmascript") n did not participate in the match 
  * true otherwise 

  
  
## Contents

  * [1 Parameters](regex_search.html#Parameters)
  * [2 Return value](regex_search.html#Return_value)
  * [3 Notes](regex_search.html#Notes)
  * [4 Example](regex_search.html#Example)
  * [5 Defect reports](regex_search.html#Defect_reports)
  * [6 See also](regex_search.html#See_also)

  
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

Returns true if a match exists, false otherwise. 

### Notes

In order to examine all matches within the target sequence, `std::regex_search` may be called in a loop, restarting each time from m[0].second of the previous call. [std::regex_iterator](regex_iterator.html "cpp/regex/regex iterator") offers an easy interface to this iteration. 

### Example

Run this code
    
    
    #include <cstddef>
    #include <iostream>
    #include <regex>
    #include <string>
     
    int main()
    {
        [std::string](../string/basic_string.html) lines[] = {"Roses are #ff0000",
                               "violets are #0000ff",
                               "all of my base are belong to you"};
     
        [std::regex](basic_regex.html) color_regex("#([a-f0-9]{2})"
                                "([a-f0-9]{2})"
                                "([a-f0-9]{2})");
     
        // simple match
        for (const auto& line : lines)
            [std::cout](../io/cout.html) << line << ": " << [std::boolalpha](../io/manip/boolalpha.html)
                      << std::regex_search(line, color_regex) << '\n';
        [std::cout](../io/cout.html) << '\n';
     
        // show contents of marked subexpressions within each match
        [std::smatch](match_results.html) color_match;
        for (const auto& line : lines)
            if (std::regex_search(line, color_match, color_regex))
            {
                [std::cout](../io/cout.html) << "matches for '" << line << "'\n";
                [std::cout](../io/cout.html) << "Prefix: '" << color_match.prefix() << "'\n";
                for ([std::size_t](../types/size_t.html) i = 0; i < color_match.size(); ++i) 
                    [std::cout](../io/cout.html) << i << ": " << color_match[i] << '\n';
                [std::cout](../io/cout.html) << "Suffix: '" << color_match.suffix() << "\'\n\n";
            }
     
        // repeated search (see also std::regex_iterator)
        [std::string](../string/basic_string.html) log(R"(
            Speed:	366
            Mass:	35
            Speed:	378
            Mass:	32
            Speed:	400
    	Mass:	30)");
        [std::regex](basic_regex.html) r(R"(Speed:\t\d*)");
        for ([std::smatch](match_results.html) sm; regex_search(log, sm, r);)
        {
            [std::cout](../io/cout.html) << sm.str() << '\n';
            log = sm.suffix();
        }
     
        // C-style string demo
        [std::cmatch](match_results.html) cm;
        if (std::regex_search("this is a test", cm, [std::regex](basic_regex.html)("test"))) 
            [std::cout](../io/cout.html) << "\nFound " << cm[0] << " at position "
                      << cm.prefix().length() << '\n';
    }

Output: 
    
    
    Roses are #ff0000: true
    violets are #0000ff: true
    all of my base are belong to you: false
     
    matches for 'Roses are #ff0000'
    Prefix: 'Roses are '
    0: #ff0000
    1: ff
    2: 00
    3: 00
    Suffix: ''
     
    matches for 'violets are #0000ff'
    Prefix: 'violets are '
    0: #0000ff
    1: 00
    2: 00
    3: ff
    Suffix: ''
     
    Speed:	366
    Speed:	378
    Speed:	400
     
    Found test at position 10

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2205](https://cplusplus.github.io/LWG/issue2205) | C++11  | n could be zero in the postcondition  | can only be positive   
[LWG 2329](https://cplusplus.github.io/LWG/issue2329) | C++11  | overload (5) accepted `basic_string` rvalues,  
which could result in dangling iterators  | rejected via deleted overload (7)  
  
### See also

[ basic_regex](basic_regex.html "cpp/regex/basic regex")(C++11) |  regular expression object   
(class template)   
---|---  
[ match_results](match_results.html "cpp/regex/match results")(C++11) |  identifies one regular expression match, including all sub-expression matches   
(class template)   
[ regex_match](regex_match.html "cpp/regex/regex match")(C++11) |  attempts to match a regular expression to an entire character sequence   
(function template) 
