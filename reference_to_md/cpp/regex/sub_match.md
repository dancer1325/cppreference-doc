
  


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
**sub_match**(C++11)  
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
[syntax_option_type](syntax_option_type.html "cpp/regex/syntax option type")(C++11)  
[match_flag_type](match_flag_type.html "cpp/regex/match flag type")(C++11)  
[error_type](error_type.html "cpp/regex/error type")(C++11)  
Regex Grammar  
[Modified ECMAScript-262](ecmascript.html "cpp/regex/ecmascript")(C++11)  
  


**`std::sub_match`**

Member functions  
---  
[sub_match::sub_match](sub_match/sub_match.html "cpp/regex/sub match/sub match")  
[sub_match::length](sub_match/length.html "cpp/regex/sub match/length")  
[sub_match::strsub_match::operator string_type](sub_match/str.html "cpp/regex/sub match/str")  
[sub_match::compare](sub_match/compare.html "cpp/regex/sub match/compare")  
[sub_match::swap](sub_match/swap.html "cpp/regex/sub match/swap")  
Non-member functions  
[operator==operator!=operator<<operator<=operator>operator>=operator<=>](sub_match/operator_cmp.html "cpp/regex/sub match/operator cmp")(until C++20)(until C++20)(until C++20)(until C++20)(until C++20)(C++20)  
[operator<<](sub_match/operator_ltlt.html "cpp/regex/sub match/operator ltlt")  
  


Defined in header `[<regex>](../header/regex.html "cpp/header/regex")` |  |   
---|---|---  
template< class BidirIt >  
class sub_match; |  |  (since C++11)  
| |   
  
The class template `std::sub_match` is used by the regular expression engine to denote sequences of characters matched by marked sub-expressions. A match is a `[`begin`, `end`)` pair within the target range matched by the regular expression, but with additional observer functions to enhance code clarity. 

Only the default constructor is publicly accessible. Instances of `std::sub_match` are normally constructed and populated as a part of a [std::match_results](match_results.html "cpp/regex/match results") container during the processing of one of the regex algorithms. 

The member functions return defined default values unless the [`matched`](sub_match.html#Data_members) member is true. 

`std::sub_match` inherits from [std::pair](../utility/pair.html)<BidirIt, BidirIt>, although it cannot be treated as a [std::pair](../utility/pair.html "cpp/utility/pair") object because member functions such as assignment will not work as expected. 

## Contents

  * [1 Type requirements](sub_match.html#Type_requirements)
  * [2 Specializations](sub_match.html#Specializations)
  * [3 Nested types](sub_match.html#Nested_types)
  * [4 Data members](sub_match.html#Data_members)
  * [5 Inherited from std::pair](sub_match.html#Inherited_from_std::pair)
    * [5.1 Member functions](sub_match.html#Member_functions)
      * [5.1.1 Observers](sub_match.html#Observers)
      * [5.1.2 Modifiers](sub_match.html#Modifiers)
    * [5.2 Non-member functions](sub_match.html#Non-member_functions)
    * [5.3 Example](sub_match.html#Example)
    * [5.4 See also](sub_match.html#See_also)

  
---  
  
### Type requirements

-`BidirIt` must meet the requirements of [LegacyBidirectionalIterator](../named_req/BidirectionalIterator.html "cpp/named req/BidirectionalIterator").   
---  
  
### Specializations

Several specializations for common character sequence types are provided: 

Defined in header `[<regex>](../header/regex.html "cpp/header/regex")`  
---  
Type  |  Definition   
`std::csub_match` |  std::sub_match<const char*>  
`std::wcsub_match` |  std::sub_match<const wchar_t*>  
`std::ssub_match` |  std::sub_match<std::string::const_iterator>  
`std::wssub_match` |  std::sub_match<std::wstring::const_iterator>  
  
### Nested types

Type  |  Definition   
---|---  
`iterator` |  `BidirIt`  
`value_type` |  [std::iterator_traits](../iterator/iterator_traits.html)<BidirIt>::value_type  
`difference_type` |  [std::iterator_traits](../iterator/iterator_traits.html)<BidirIt>::difference_type  
`string_type` |  [std::basic_string](../string/basic_string.html)<value_type>  
  
### Data members

Member  |  Description   
---|---  
bool `matched` |  whether this match was successful   
(public member object)  
  
##  Inherited from [std::pair](../utility/pair.html "cpp/utility/pair")

BidirIt first |  start of the match sequence   
(public member object)  
---|---  
BidirIt second |  one-past-the-end of the match sequence   
(public member object)  
  
### Member functions

[ (constructor)](sub_match/sub_match.html "cpp/regex/sub match/sub match") |  constructs the match object   
(public member function)   
---|---  
  
#####  Observers   
  
[ length](sub_match/length.html "cpp/regex/sub match/length") |  returns the length of the match (if any)   
(public member function)   
[ stroperator string_type](sub_match/str.html "cpp/regex/sub match/str") |  converts to the underlying string type   
(public member function)   
[ compare](sub_match/compare.html "cpp/regex/sub match/compare") |  compares matched subsequence (if any)   
(public member function)   
  
#####  Modifiers   
  
[ swap](sub_match/swap.html "cpp/regex/sub match/swap") |  swaps the contents   
(public member function)   
  
### Non-member functions

[ operator==operator!=operator<operator<=operator>operator>=operator<=>](sub_match/operator_cmp.html "cpp/regex/sub match/operator cmp")(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(C++20) |  compares a `sub_match` with another `sub_match`, a string, or a character   
(function template)   
---|---  
[ operator<<](sub_match/operator_ltlt.html "cpp/regex/sub match/operator ltlt") |  outputs the matched character subsequence   
(function template)   
  
### Example

Run this code
    
    
    #include <cassert>
    #include <iostream>
    #include <regex>
    #include <string>
     
    int main()
    {
        [std::string](../string/basic_string.html) sentence{"Friday the thirteenth."};
        const [std::regex](basic_regex.html) re{"([A-z]+) ([a-z]+) ([a-z]+)"};
        [std::smatch](match_results.html) words;
        [std::regex_search](regex_search.html)(sentence, words, re);
        [std::cout](../io/cout.html) << [std::boolalpha](../io/manip/boolalpha.html);
        for (const auto& m : words)
        {
            [assert](../error/assert.html)(m.matched);
            [std::cout](../io/cout.html) << "m: [" << m << "], m.length(): " << m.length() << ", "
                         "*m.first: '" << *m.first << "', "
                         "*m.second: '" << *m.second << "'\n";
        }
    }

Output: 
    
    
    m: [Friday the thirteenth], m.length(): 21, *m.first: 'F', *m.second: '.'
    m: [Friday], m.length(): 6, *m.first: 'F', *m.second: ' '
    m: [the], m.length(): 3, *m.first: 't', *m.second: ' '
    m: [thirteenth], m.length(): 10, *m.first: 't', *m.second: '.'

### See also

[ regex_token_iterator](regex_token_iterator.html "cpp/regex/regex token iterator")(C++11) |  iterates through the specified sub-expressions within all regex matches in a given string or through unmatched substrings   
(class template)   
---|---
