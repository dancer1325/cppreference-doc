[C++](../cpp.html "cpp")

[Compiler support](compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](freestanding.html "cpp/freestanding")  
[Language](language.html "cpp/language")  
[Standard library](standard_library.html "cpp/standard library")  
[Standard library headers](headers.html "cpp/header")  
[Named requirements](iterator/concepts.html "cpp/named req")  
[Feature test macros](experimental/feature_test.html "cpp/feature test") (C++20)  
[Language support library](utility.html#Language_support "cpp/utility")  
[Concepts library](concepts.html "cpp/concepts") (C++20)  
[Diagnostics library](error.html "cpp/error")  
[Memory management library](memory.html "cpp/memory")  
[Metaprogramming library](meta.html "cpp/meta") (C++11)  
[General utilities library](utility.html "cpp/utility")  
[Containers library](container.html "cpp/container")  
[Iterators library](iterator.html "cpp/iterator")  
[Ranges library](ranges.html "cpp/ranges") (C++20)  
[Algorithms library](algorithm.html "cpp/algorithm")  
[Strings library](string.html "cpp/string")  
[Text processing library](text.html "cpp/text")  
[Numerics library](numeric.html "cpp/numeric")  
[Date and time library](chrono.html "cpp/chrono")  
[Input/output library](io.html "cpp/io")  
[Filesystem library](filesystem.html "cpp/filesystem") (C++17)  
[Concurrency support library](atomic.html "cpp/thread") (C++11)  
[Execution control library](experimental/execution.html "cpp/execution") (C++26)  
[Technical specifications](experimental.html "cpp/experimental")  
[Symbols index](symbol_index.html "cpp/symbol index")  
[External libraries](links/libs.html "cpp/links/libs")  
  


[Text processing library](text.html "cpp/text")

[Localization library](locale.html "cpp/locale")  
---  
**Regular expressions library** (C++11)  
[Formatting library](utility/format.html "cpp/utility/format") (C++20)  
[Null-terminated sequence utilities](text.html#Null-terminated_sequence_utilities "cpp/text")  
[Byte strings](string/byte.html "cpp/string/byte")  
[Multibyte strings](string/multibyte.html "cpp/string/multibyte")  
[Wide strings](string/wide.html "cpp/string/wide")  
[Primitive numeric conversions](text.html#Primitive_numeric_conversions "cpp/text")  
| [to_chars](utility/to_chars.html "cpp/utility/to chars")(C++17)  
---  
[to_chars_result](utility/to_chars_result.html "cpp/utility/to chars result")(C++17)  
[from_chars](utility/from_chars.html "cpp/utility/from chars")(C++17)  
[from_chars_result](utility/from_chars_result.html "cpp/utility/from chars result")(C++17)  
[chars_format](utility/chars_format.html "cpp/utility/chars format")(C++17)  
  
[Text encoding identifications](text.html#Text_encoding_identifications "cpp/text")  
| [text_encoding](locale/text_encoding.html "cpp/text/text encoding")(C++26)  
---  
  


**Regular expressions library**

Classes  
---  
[basic_regex](regex/basic_regex.html "cpp/regex/basic regex")(C++11)  
[sub_match](regex/sub_match.html "cpp/regex/sub match")(C++11)  
[match_results](regex/match_results.html "cpp/regex/match results")(C++11)  
Algorithms  
[regex_match](regex/regex_match.html "cpp/regex/regex match")(C++11)  
[regex_search](regex/regex_search.html "cpp/regex/regex search")(C++11)  
[regex_replace](regex/regex_replace.html "cpp/regex/regex replace")(C++11)  
Iterators  
[regex_iterator](regex/regex_iterator.html "cpp/regex/regex iterator")(C++11)  
[regex_token_iterator](regex/regex_token_iterator.html "cpp/regex/regex token iterator")(C++11)  
Exceptions  
[regex_error](regex/regex_error.html "cpp/regex/regex error")(C++11)  
Traits  
[regex_traits](regex/regex_traits.html "cpp/regex/regex traits")(C++11)  
Constants  
[syntax_option_type](regex/syntax_option_type.html "cpp/regex/syntax option type")(C++11)  
[match_flag_type](regex/match_flag_type.html "cpp/regex/match flag type")(C++11)  
[error_type](regex/error_type.html "cpp/regex/error type")(C++11)  
Regex Grammar  
[Modified ECMAScript-262](regex/ecmascript.html "cpp/regex/ecmascript")(C++11)  
  


The regular expressions library provides a class that represents [regular expressions](https://en.wikipedia.org/wiki/Regular_expression "enwiki:Regular expression"), which are a kind of mini-language used to perform pattern matching within strings. Almost all operations with regexes can be characterized by operating on several of the following objects: 

  * **Target sequence**. The character sequence that is searched for a pattern. This may be a range specified by two iterators, a null-terminated character string or a [std::string](string/basic_string.html "cpp/string/basic string"). 


  * **Pattern**. This is the regular expression itself. It determines what constitutes a match. It is an object of type [std::basic_regex](regex/basic_regex.html "cpp/regex/basic regex"), constructed from a string with special [grammar](regex.html#Regular_expression_grammars). 


  * **Matched array**. The information about matches may be retrieved as an object of type [std::match_results](regex/match_results.html "cpp/regex/match results"). 


  * **Replacement string**. This is a string that determines how to replace the matches. 



## Contents

  * [1 Regular expression grammars](regex.html#Regular_expression_grammars)
  * [2 Main classes](regex.html#Main_classes)
  * [3 Algorithms](regex.html#Algorithms)
  * [4 Iterators](regex.html#Iterators)
  * [5 Exceptions](regex.html#Exceptions)
  * [6 Traits](regex.html#Traits)
  * [7 Constants](regex.html#Constants)
  * [8 Example](regex.html#Example)

  
---  
  
### Regular expression grammars

Patterns and replacement strings support the following regular expression grammars: 

  * [Modified ECMAScript regular expression grammar](regex/ecmascript.html "cpp/regex/ecmascript"). This is the default grammar. 
  * [Basic POSIX regular expression grammar](https://pubs.opengroup.org/onlinepubs/9699919799/basedefs/V1_chap09.html#tag_09_03). 
  * [Extended POSIX regular expression grammar](https://pubs.opengroup.org/onlinepubs/9699919799/basedefs/V1_chap09.html#tag_09_04). 
  * The regular expression grammar used by the [awk](https://pubs.opengroup.org/onlinepubs/9699919799/utilities/awk.html#tag_20_06_13_04) utility in POSIX. 
  * The regular expression grammar used by the [grep](https://pubs.opengroup.org/onlinepubs/9699919799/utilities/grep.html) utility in POSIX. This is effectively the same as the basic POSIX regular expression grammar, with the addition of newline '\n' as an alternation separator. 
  * The regular expression grammar used by the grep utility, with the -E option, in POSIX. This is effectively the same as the extended POSIX regular expression grammar, with the addition of newline '\n' as an alternation separator in addition to '|'. 



Some grammar variations (such as case-insensitive matching) are also avaliable, see [this page](regex/basic_regex/constants.html "cpp/regex/basic regex/constants") for details. 

### Main classes

These classes encapsulate a regular expression and the results of matching a regular expression within a target sequence of characters. 

[ basic_regex](regex/basic_regex.html "cpp/regex/basic regex")(C++11) |  regular expression object   
(class template)   
---|---  
[ sub_match](regex/sub_match.html "cpp/regex/sub match")(C++11) |  identifies the sequence of characters matched by a sub-expression   
(class template)   
[ match_results](regex/match_results.html "cpp/regex/match results")(C++11) |  identifies one regular expression match, including all sub-expression matches   
(class template)   
  
### Algorithms

These functions are used to apply the regular expression encapsulated in a regex to a target sequence of characters. 

[ regex_match](regex/regex_match.html "cpp/regex/regex match")(C++11) |  attempts to match a regular expression to an entire character sequence   
(function template)   
---|---  
[ regex_search](regex/regex_search.html "cpp/regex/regex search")(C++11) |  attempts to match a regular expression to any part of a character sequence   
(function template)   
[ regex_replace](regex/regex_replace.html "cpp/regex/regex replace")(C++11) |  replaces occurrences of a regular expression with formatted replacement text   
(function template)   
  
### Iterators

The regex iterators are used to traverse the entire set of regular expression matches found within a sequence. 

[ regex_iterator](regex/regex_iterator.html "cpp/regex/regex iterator")(C++11) |  iterates through all regex matches within a character sequence   
(class template)   
---|---  
[ regex_token_iterator](regex/regex_token_iterator.html "cpp/regex/regex token iterator")(C++11) |  iterates through the specified sub-expressions within all regex matches in a given string or through unmatched substrings   
(class template)   
  
### Exceptions

This class defines the type of objects thrown as exceptions to report errors from the regular expressions library. 

[ regex_error](regex/regex_error.html "cpp/regex/regex error")(C++11) |  reports errors generated by the regular expressions library   
(class)   
---|---  
  
### Traits

The regex traits class is used to encapsulate the localizable aspects of a regex. 

[ regex_traits](regex/regex_traits.html "cpp/regex/regex traits")(C++11) |  provides metainformation about a character type, required by the regex library   
(class template)   
---|---  
  
### Constants

Defined in namespace `std::regex_constants`  
---  
[ syntax_option_type](regex/syntax_option_type.html "cpp/regex/syntax option type")(C++11) |  general options controlling regex behavior   
(typedef)   
[ match_flag_type](regex/match_flag_type.html "cpp/regex/match flag type")(C++11) |  options specific to matching   
(typedef)   
[ error_type](regex/error_type.html "cpp/regex/error type")(C++11) |  describes different types of matching errors   
(typedef)   
  
### Example

Run this code
    
    
    #include <iostream>
    #include <iterator>
    #include <regex>
    #include <string>
     
    int main()
    {
        [std::string](string/basic_string.html) s = "Some people, when confronted with a problem, think "
            "\"I know, I'll use regular expressions.\" "
            "Now they have two problems.";
     
        [std::regex](regex/basic_regex.html) self_regex("REGULAR EXPRESSIONS",
            [std::regex_constants::ECMAScript](regex/syntax_option_type.html) | [std::regex_constants::icase](regex/syntax_option_type.html));
        if ([std::regex_search](regex/regex_search.html)(s, self_regex))
            [std::cout](io/cout.html) << "Text contains the phrase 'regular expressions'\n";
     
        [std::regex](regex/basic_regex.html) word_regex("(\\w+)");
        auto words_begin = 
            [std::sregex_iterator](regex/regex_iterator.html)(s.begin(), s.end(), word_regex);
        auto words_end = [std::sregex_iterator](regex/regex_iterator.html)();
     
        [std::cout](io/cout.html) << "Found "
                  << [std::distance](iterator/distance.html)(words_begin, words_end)
                  << " words\n";
     
        const int N = 6;
        [std::cout](io/cout.html) << "Words longer than " << N << " characters:\n";
        for ([std::sregex_iterator](regex/regex_iterator.html) i = words_begin; i != words_end; ++i)
        {
            [std::smatch](regex/match_results.html) match = *i;
            [std::string](string/basic_string.html) match_str = match.str();
            if (match_str.size() > N)
                [std::cout](io/cout.html) << "  " << match_str << '\n';
        }
     
        [std::regex](regex/basic_regex.html) long_word_regex("(\\w{7,})");
        [std::string](string/basic_string.html) new_s = [std::regex_replace](regex/regex_replace.html)(s, long_word_regex, "[$&]");
        [std::cout](io/cout.html) << new_s << '\n';
    }

Output: 
    
    
    Text contains the phrase 'regular expressions'
    Found 20 words
    Words longer than 6 characters:
      confronted
      problem
      regular
      expressions
      problems
    Some people, when [confronted] with a [problem], think 
    "I know, I'll use [regular] [expressions]." Now they have two [problems].
