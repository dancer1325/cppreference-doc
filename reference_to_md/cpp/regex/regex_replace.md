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
[regex_match](regex_match.html "cpp/regex/regex match")(C++11)  
[regex_search](regex_search.html "cpp/regex/regex search")(C++11)  
**regex_replace**(C++11)  
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
template< class OutputIt, class BidirIt, class Traits, class CharT,  
class STraits, class SAlloc >  
OutputIt regex_replace( OutputIt out, BidirIt first, BidirIt last,  
const [std::basic_regex](basic_regex.html)<CharT, Traits>& re,  
const [std::basic_string](../string/basic_string.html)<CharT, STraits, SAlloc>& fmt,  
[std::regex_constants::match_flag_type](match_flag_type.html) flags =  
[std::regex_constants::match_default](match_flag_type.html) ); |  (1)  |  (since C++11)  
template< class OutputIt, class BidirIt, class Traits, class CharT >  
OutputIt regex_replace( OutputIt out, BidirIt first, BidirIt last,  
const [std::basic_regex](basic_regex.html)<CharT, Traits>& re,  
const CharT* fmt,  
[std::regex_constants::match_flag_type](match_flag_type.html) flags =  
[std::regex_constants::match_default](match_flag_type.html) ); |  (2)  |  (since C++11)  
template< class Traits, class CharT,  
class STraits, class SAlloc, class FTraits, class FAlloc >  
[std::basic_string](../string/basic_string.html)<CharT, STraits, SAlloc>  
regex_replace( const [std::basic_string](../string/basic_string.html)<CharT, STraits, SAlloc>& str,  
const [std::basic_regex](basic_regex.html)<CharT, Traits>& re,  
const [std::basic_string](../string/basic_string.html)<CharT, FTraits, FAlloc>& fmt,  
[std::regex_constants::match_flag_type](match_flag_type.html) flags =  
[std::regex_constants::match_default](match_flag_type.html) ); |  (3)  |  (since C++11)  
template< class Traits, class CharT, class STraits, class SAlloc >  
[std::basic_string](../string/basic_string.html)<CharT, STraits, SAlloc>  
regex_replace( const [std::basic_string](../string/basic_string.html)<CharT, STraits, SAlloc>& str,  
const [std::basic_regex](basic_regex.html)<CharT, Traits>& re,  
const CharT* fmt,  
[std::regex_constants::match_flag_type](match_flag_type.html) flags =  
[std::regex_constants::match_default](match_flag_type.html) ); |  (4)  |  (since C++11)  
template< class Traits, class CharT, class STraits, class SAlloc >  
[std::basic_string](../string/basic_string.html)<CharT>  
regex_replace( const CharT* s, const [std::basic_regex](basic_regex.html)<CharT, Traits>& re,  
const [std::basic_string](../string/basic_string.html)<CharT, STraits, SAlloc>& fmt,  
[std::regex_constants::match_flag_type](match_flag_type.html) flags =  
[std::regex_constants::match_default](match_flag_type.html) ); |  (5)  |  (since C++11)  
template< class Traits, class CharT >  
[std::basic_string](../string/basic_string.html)<CharT>  
regex_replace( const CharT* s, const [std::basic_regex](basic_regex.html)<CharT, Traits>& re,  
const CharT* fmt,  
[std::regex_constants::match_flag_type](match_flag_type.html) flags =  
[std::regex_constants::match_default](match_flag_type.html) ); |  (6)  |  (since C++11)  
| |   
  
`regex_replace` uses the regular expression re to perform substitution on the target character sequence: 

1,2) Copies characters in the range `[`first`, `last`)` to out, replacing any sequences that match re with characters formatted by fmt. Equivalent to: 
    
    
    using iter_type = [std::regex_iterator](regex_iterator.html)<BidirIt, CharT, Traits>;
    iter_type seq_begin(first, last, re, flags), seq_end;
     
    using result_type = [std::match_results](match_results.html)<BidirIt>;
    result_type m;
     
    bool need_to_copy = (flags & [std::regex_constants::format_no_copy](match_flag_type.html)) == 0;
    bool format_all = (flags & [std::regex_constants::format_first_only](match_flag_type.html)) != 0;
     
    for (iter_type i = seq_begin; i != seq.end(); ++i)
    {
        m = *i;
        if (need_to_copy)
            out = [std::copy](../algorithm/copy.html)(m.prefix().first, m.prefix().second, out);
        if (format_all || i == seq_begin)
            out = /* replace-expr */
    }
     
    if (need_to_copy)
        out = m.ready()
                  ? [std::copy](../algorithm/copy.html)(m.suffix().first, m.suffix().second, out)
                  : [std::copy](../algorithm/copy.html)(first, last, out);
     
    return out;

1) The expression /* replace-expr */ is m.format(out, fmt, flags).

2) The expression /* replace-expr */ is m.format(out, fmt, fmt + [std::char_traits](../string/char_traits.html)<CharT>::length(fmt), flags).

3,4) Equivalent to [std::basic_string](../string/basic_string.html)<CharT, STraits, SAlloc> result;  
regex_replace([std::back_inserter](../iterator/back_inserter.html)(result),  
str.begin(), str.end(), re, fmt, flags);  
return result;.

5,6) Equivalent to [std::basic_string](../string/basic_string.html)<CharT, STraits, SAlloc> result;  
regex_replace([std::back_inserter](../iterator/back_inserter.html)(result),  
s, s + [std::char_traits](../string/char_traits.html)<CharT>::length(s), re, fmt, flags);  
return result;. 

## Contents

  * [1 Parameters](regex_replace.html#Parameters)
  * [2 Return value](regex_replace.html#Return_value)
  * [3 Exceptions](regex_replace.html#Exceptions)
  * [4 Example](regex_replace.html#Example)
  * [5 Defect reports](regex_replace.html#Defect_reports)
  * [6 See also](regex_replace.html#See_also)

  
---  
  
### Parameters

first, last  |  \-  |  the target character range   
---|---|---  
str  |  \-  |  the target [std::string](../string/basic_string.html "cpp/string/basic string")  
s  |  \-  |  the target null-terminated C-style string   
re  |  \-  |  the regular expression   
fmt  |  \-  |  the regex replacement format string, exact syntax depends on the value of flags  
flags  |  \-  |  flags used to determine how the match will be performed   
out  |  \-  |  output iterator to store the result of the replacement   
  
### Return value

As described above. 

### Exceptions

May throw [std::regex_error](regex_error.html "cpp/regex/regex error") to indicate an [error condition](error_type.html "cpp/regex/error type"). 

### Example

Run this code
    
    
    #include <iostream>
    #include <iterator>
    #include <regex>
    #include <string>
     
    int main()
    {
        [std::string](../string/basic_string.html) text = "Quick brown fox";
        [std::regex](basic_regex.html) vowel_re("a|e|i|o|u");
     
        // write the results to an output iterator
        std::regex_replace([std::ostreambuf_iterator](../iterator/ostreambuf_iterator.html)<char>([std::cout](../io/cout.html)),
                           text.begin(), text.end(), vowel_re, "*");
     
        // construct a string holding the results
        [std::cout](../io/cout.html) << '\n' << std::regex_replace(text, vowel_re, "[$&]") << '\n';
    }

Output: 
    
    
    Q**ck br*wn f*x
    Q[u][i]ck br[o]wn f[o]x

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2213](https://cplusplus.github.io/LWG/issue2213) | C++11  | out was not updated by the replacements  | out is updated   
  
### See also

[ regex_search](regex_search.html "cpp/regex/regex search")(C++11) |  attempts to match a regular expression to any part of a character sequence   
(function template)   
---|---  
[ match_flag_type](match_flag_type.html "cpp/regex/match flag type")(C++11) |  options specific to matching   
(typedef)   
[ replace](../string/basic_string/replace.html "cpp/string/basic string/replace") |  replaces specified portion of a string   
(public member function of `std::basic_string<CharT,Traits,Allocator>`) 
