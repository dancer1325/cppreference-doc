
  


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
[syntax_option_type](syntax_option_type.html "cpp/regex/syntax option type")(C++11)  
[match_flag_type](match_flag_type.html "cpp/regex/match flag type")(C++11)  
**error_type**(C++11)  
Regex Grammar  
[Modified ECMAScript-262](ecmascript.html "cpp/regex/ecmascript")(C++11)  
  


Defined in header `[<regex>](../header/regex.html "cpp/header/regex")` |  |   
---|---|---  
using error_type = /* implementation-defined */; |  (1)  |  (since C++11)  
constexpr error_type error_collate = /* unspecified */;  
constexpr error_type error_ctype = /* unspecified */;  
constexpr error_type error_escape = /* unspecified */;  
constexpr error_type error_backref = /* unspecified */;  
constexpr error_type error_brack = /* unspecified */;  
constexpr error_type error_paren = /* unspecified */;  
constexpr error_type error_brace = /* unspecified */;  
constexpr error_type error_badbrace = /* unspecified */;  
constexpr error_type error_range = /* unspecified */;  
constexpr error_type error_space = /* unspecified */;  
constexpr error_type error_badrepeat = /* unspecified */;  
constexpr error_type error_complexity = /* unspecified */;  
constexpr error_type error_stack = /* unspecified */; |  (2)  |  (since C++11)   
(inline since C++17)  
| |   
  
1) The `error_type` is a type that describes errors that may occur during regular expression parsing.

## Contents

  * [1 Constants](error_type.html#Constants)
  * [2 Example](error_type.html#Example)
  * [3 Defect reports](error_type.html#Defect_reports)
  * [4 See also](error_type.html#See_also)

  
---  
  
### Constants

Name  |  Explanation   
---|---  
`error_collate` |  the expression contains an invalid collating element name   
`error_ctype` |  the expression contains an invalid character class name   
`error_escape` |  the expression contains an invalid escaped character or a trailing escape   
`error_backref` |  the expression contains an invalid back reference   
`error_brack` |  the expression contains mismatched square brackets ('[' and ']')   
`error_paren` |  the expression contains mismatched parentheses ('(' and ')')   
`error_brace` |  the expression contains mismatched curly braces ('{' and '}')   
`error_badbrace` |  the expression contains an invalid range in a {} expression   
`error_range` |  the expression contains an invalid character range (e.g. [b-a])   
`error_space` |  there was not enough memory to convert the expression into a finite state machine   
`error_badrepeat` |  '*', '?', '+' or '{' was not preceded by a valid regular expression   
`error_complexity` |  the complexity of an attempted match exceeded a predefined level   
`error_stack` |  there was not enough memory to perform a match   
  
### Example

Implements regular expressions checker:

Run this code
    
    
    #include <cstddef>
    #include <iomanip>
    #include <iostream>
    #include <regex>
    #include <sstream>
    #include <string>
     
    void regular_expression_checker(const [std::string](../string/basic_string.html)& text,
                                    const [std::string](../string/basic_string.html)& regex,
                                    const std::regex::flag_type flags)
    {
        [std::cout](../io/cout.html) << "Text: " << [std::quoted](../io/manip/quoted.html)(text) << '\n'
                  << "Regex: " << [std::quoted](../io/manip/quoted.html)(regex) << '\n';
     
        try
        {
            const [std::regex](basic_regex.html) re{regex, flags};
            const bool matched = [std::regex_match](regex_match.html)(text, re);
     
            [std::stringstream](../io/basic_stringstream.html) out;
            out << (matched ? "MATCH!\n" : "DOES NOT MATCH!\n");
     
            [std::smatch](match_results.html) m;
            if ([std::regex_search](regex_search.html)(text, m, re); !m.empty())
            {
                out << "prefix = [" << m.prefix().str().data() << "]\n";
     
                for ([std::size_t](../types/size_t.html) i{}; i != m.size(); ++i)
                    out << "  m[" << i << "] = [" << m[i].str().data() << "]\n";
     
                out << "suffix = [" << m.suffix().str().data() << "]\n";
            }
            [std::cout](../io/cout.html) << out.str() << '\n';
        }
        catch ([std::regex_error](regex_error.html)& e)
        {
            [std::cout](../io/cout.html) << "Error: " << e.what() << ".\n\n";
        }
    }
     
    int main()
    {
        constexpr std::regex::flag_type your_flags
            = std::regex::flag_type{0}
        // Choose one of the supported grammars:
            | std::regex::ECMAScript
        //  | std::regex::basic
        //  | std::regex::extended
        //  | std::regex::awk
        //  | std::regex::grep
        //  | std::regex::egrep
        // Choose any of the next options:
        //  | std::regex::icase
        //  | std::regex::nosubs
        //  | std::regex::optimize
        //  | std::regex::collate
        //  | std::regex::multiline
            ;
     
        const [std::string](../string/basic_string.html) your_text = "Hello regular expressions.";
        const [std::string](../string/basic_string.html) your_regex = R"(([a-zA-Z]+) ([a-z]+) ([a-z]+)\.)";
        regular_expression_checker(your_text, your_regex, your_flags);
     
        regular_expression_checker("Invalid!", R"(((.)(.))", your_flags);
        regular_expression_checker("Invalid!", R"([.)", your_flags);
        regular_expression_checker("Invalid!", R"([.]{})", your_flags);
        regular_expression_checker("Invalid!", R"([1-0])", your_flags);
    }

Possible output: 
    
    
    Text: "Hello regular expressions."
    Regex: "([a-zA-Z]+) ([a-z]+) ([a-z]+)\\."
    MATCH!
    prefix = []
      m[0] = [Hello regular expressions.]
      m[1] = [Hello]
      m[2] = [regular]
      m[3] = [expressions]
    suffix = []
     
    Text: "Invalid!"
    Regex: "((.)(.)"
    Error: Mismatched '(' and ')' in regular expression.
     
    Text: "Invalid!"
    Regex: "[."
    Error: Unexpected character within '[...]' in regular expression.
     
    Text: "Invalid!"
    Regex: "[.]{}"
    Error: Invalid range in '{}' in regular expression.
     
    Text: "Invalid!"
    Regex: "[1-0]"
    Error: Invalid range in bracket expression..

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2053](https://cplusplus.github.io/LWG/issue2053) | C++11  | the constants were declared static | removed the static specifier   
  
### See also

[ regex_error](regex_error.html "cpp/regex/regex error")(C++11) |  reports errors generated by the regular expressions library   
(class)   
---|---
