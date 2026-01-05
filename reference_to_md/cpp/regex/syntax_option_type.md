
  


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
[regex_token_iterator](regex_token_iterator.html "cpp/regex/regex token iterator")(C++11)  
Exceptions  
[regex_error](regex_error.html "cpp/regex/regex error")(C++11)  
Traits  
[regex_traits](regex_traits.html "cpp/regex/regex traits")(C++11)  
Constants  
**syntax_option_type**(C++11)  
[match_flag_type](match_flag_type.html "cpp/regex/match flag type")(C++11)  
[error_type](error_type.html "cpp/regex/error type")(C++11)  
Regex Grammar  
[Modified ECMAScript-262](ecmascript.html "cpp/regex/ecmascript")(C++11)  
  


Defined in header `[<regex>](../header/regex.html "cpp/header/regex")` |  |   
---|---|---  
using syntax_option_type = /* implementation-defined */; |  (1)  |  (since C++11)  
constexpr syntax_option_type icase = /* unspecified */;  
constexpr syntax_option_type nosubs = /* unspecified */;  
constexpr syntax_option_type optimize = /* unspecified */;  
constexpr syntax_option_type collate = /* unspecified */;  
constexpr syntax_option_type ECMAScript = /* unspecified */;  
constexpr syntax_option_type basic = /* unspecified */;  
constexpr syntax_option_type extended = /* unspecified */;  
constexpr syntax_option_type awk = /* unspecified */;  
constexpr syntax_option_type grep = /* unspecified */;  
constexpr syntax_option_type egrep = /* unspecified */; |  (2)  |  (since C++11)   
(inline since C++17)  
inline constexpr syntax_option_type multiline = /* unspecified */; |  (3)  |  (since C++17)  
| |   
  
1) The `syntax_option_type` is a [BitmaskType](../named_req/BitmaskType.html "cpp/named req/BitmaskType") that contains options that govern how regular expressions behave.

2,3) The possible values (`icase`, `optimize`, etc.) for type (1) are duplicated inside [`std::basic_regex`](basic_regex/constants.html "cpp/regex/basic regex/constants").

## Contents

  * [1 Constants](syntax_option_type.html#Constants)
  * [2 Notes](syntax_option_type.html#Notes)
  * [3 Example](syntax_option_type.html#Example)
  * [4 Defect reports](syntax_option_type.html#Defect_reports)
  * [5 See also](syntax_option_type.html#See_also)

  
---  
  
### Constants

Grammar option  |  Effect(s)   
---|---  
`ECMAScript` |  Use the [Modified ECMAScript regular expression grammar](ecmascript.html "cpp/regex/ecmascript").   
`basic` |  Use the basic POSIX regular expression grammar ([grammar documentation](https://pubs.opengroup.org/onlinepubs/9699919799/basedefs/V1_chap09.html#tag_09_03)).   
`extended` |  Use the extended POSIX regular expression grammar ([grammar documentation](https://pubs.opengroup.org/onlinepubs/9699919799/basedefs/V1_chap09.html#tag_09_04)).   
`awk` |  Use the regular expression grammar used by the _awk_ utility in POSIX ([grammar documentation](https://pubs.opengroup.org/onlinepubs/9699919799/utilities/awk.html#tag_20_06_13_04)).   
`grep` |  Use the regular expression grammar used by the _grep_ utility in POSIX. This is effectively the same as the `basic` option with the addition of newline '\n' as an alternation separator.   
`egrep` |  Use the regular expression grammar used by the _grep_ utility, with the _-E_ option, in POSIX. This is effectively the same as the `extended` option with the addition of newline '\n' as an alternation separator in addition to '|'.   
Grammar variation  |  Effect(s)   
`icase` |  Character matching should be performed without regard to case.   
`nosubs` |  When performing matches, all marked sub-expressions `**( expr)**` are treated as non-marking sub-expressions `**(?: expr)**`. No matches are stored in the supplied [std::regex_match](regex_match.html "cpp/regex/regex match") structure and mark_count() is zero.   
`optimize` |  Instructs the regular expression engine to make matching faster, with the potential cost of making construction slower. For example, this might mean converting a non-deterministic FSA to a deterministic FSA.   
`collate` |  Character ranges of the form _"[a-b]"_ will be locale sensitive.   
`multiline` (C++17) |  Specifies that `^` shall match the beginning of a line and `$` shall match the end of a line, if the ECMAScript engine is selected.   
  
At most one grammar option can be chosen out of `ECMAScript`, `basic`, `extended`, `awk`, `grep`, `egrep`. If no grammar is chosen, `ECMAScript` is assumed to be selected. The other options serve as variations, such that [std::regex](basic_regex.html)("meow", std::regex::icase) is equivalent to [std::regex](basic_regex.html)("meow", std::regex::ECMAScript|std::regex::icase). 

### Notes

Because POSIX uses "leftmost longest" matching rule (the longest matching subsequence is matched, and if there are several such subsequences, the first one is matched), it is not suitable, for example, for parsing markup languages: a POSIX regex such as "<tag[^>]*>.*</tag>" would match everything from the first "<tag" to the last "</tag>", including every "</tag>" and "<tag>" in-between. On the other hand, ECMAScript supports non-greedy matches, and the ECMAScript regex "<tag[^>]*>.*?</tag>" would match only until the first closing tag. 

### Example

Illustrates the difference in the matching algorithm between ECMAScript and POSIX regular expressions:

Run this code
    
    
    #include <iostream>
    #include <regex>
    #include <string>
     
    int main()
    {
        [std::string](../string/basic_string.html) str = "zzxayyzz";
        [std::regex](basic_regex.html) re1(".*(a|xayy)"); // ECMA
        [std::regex](basic_regex.html) re2(".*(a|xayy)", std::regex::extended); // POSIX
     
        [std::cout](../io/cout.html) << "Searching for .*(a|xayy) in zzxayyzz:\n";
        [std::smatch](match_results.html) m;
        [std::regex_search](regex_search.html)(str, m, re1);
        [std::cout](../io/cout.html) << "  ECMA (depth first search) match: " << m[0] << '\n';
        [std::regex_search](regex_search.html)(str, m, re2);
        [std::cout](../io/cout.html) << "  POSIX (leftmost longest)  match: " << m[0] << '\n';
    }

Output: 
    
    
    Searching for .*(a|xayy) in zzxayyzz:
      ECMA (depth first search) match: zzxa
      POSIX (leftmost longest)  match: zzxayy

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2053](https://cplusplus.github.io/LWG/issue2053) | C++11  | the constants were declared static | removed the static specifier   
  
### See also

[ basic_regex](basic_regex.html "cpp/regex/basic regex")(C++11) |  regular expression object   
(class template)   
---|---
