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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/navbar_content&action=edit)

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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/text/navbar_content&action=edit)

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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/regex/navbar_content&action=edit)

[`std::basic_regex`](../basic_regex.html "cpp/regex/basic regex")

Member Functions  
---  
[basic_regex::basic_regex](basic_regex.html "cpp/regex/basic regex/basic regex")  
[basic_regex::~basic_regex](~basic_regex.html "cpp/regex/basic regex/~basic regex")  
[basic_regex::operator=](operator=.html "cpp/regex/basic regex/operator=")  
[basic_regex::assign](assign.html "cpp/regex/basic regex/assign")  
Observers  
**basic_regex::mark_count**  
[basic_regex::flags](flags.html "cpp/regex/basic regex/flags")  
Locale  
[basic_regex::getloc](getloc.html "cpp/regex/basic regex/getloc")  
[basic_regex::imbue](imbue.html "cpp/regex/basic regex/imbue")  
Modifiers  
[basic_regex::swap](swap.html "cpp/regex/basic regex/swap")  
[Constants](constants.html "cpp/regex/basic regex/constants")  
Non-member Functions  
[swap(std::basic_regex)](swap2.html "cpp/regex/basic regex/swap2")  
[Deduction guides](deduction_guides.html "cpp/regex/basic regex/deduction guides")(C++17)  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/regex/basic_regex/navbar_content&action=edit)

unsigned mark_count() const; |  |  (since C++11)  
---|---|---  
| |   
  
Returns the number of marked sub-expressions (also known as capture groups) within the regular expression. 

## Contents

  * [1 Parameters](mark_count.html#Parameters)
  * [2 Return value](mark_count.html#Return_value)
  * [3 Exceptions](mark_count.html#Exceptions)
  * [4 Example](mark_count.html#Example)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/regex/basic_regex/mark_count&action=edit&section=1 "Edit section: Parameters")] Parameters

(none) 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/regex/basic_regex/mark_count&action=edit&section=2 "Edit section: Return value")] Return value

The number of marked sub-expressions within the regular expression. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/impldef_exception&action=edit&section=T-1 "Template:cpp/impldef exception")] Exceptions

May throw implementation-defined exceptions. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/regex/basic_regex/mark_count&action=edit&section=3 "Edit section: Example")] Example

Run this code
    
    
    #include <iostream>
    #include <regex>
     
    int main()
    {    
        [std::regex](../basic_regex.html) r1{"abcde"};
        [std::cout](../../io/cout.html) << "r1 has " << r1.mark_count() << " subexpressions" << '\n';
        // Expected: 0
     
        [std::regex](../basic_regex.html) r2{"ab(c)de"};
        [std::cout](../../io/cout.html) << "r2 has " << r2.mark_count() << " subexpressions" << '\n';
        // Expected: 1
     
        [std::regex](../basic_regex.html) r3{"a(bc)d(e)"}; 
        [std::cout](../../io/cout.html) << "r3 has " << r3.mark_count() << " subexpressions" << '\n';
        // Expected: 2
     
        // Nested sub-expressions
        [std::regex](../basic_regex.html) r4{"abc(de(fg))"};
        [std::cout](../../io/cout.html) << "r4 has " << r4.mark_count() << " subexpressions" << '\n';
        // Expected: 2
     
        // Escaped parentheses
        [std::regex](../basic_regex.html) r5{"a(bc\\(\\)de)"};
        [std::cout](../../io/cout.html) << "r5 has " << r5.mark_count() << " subexpressions" << '\n';
        // Expected: 1
     
        // Using nosubs flag
        [std::regex](../basic_regex.html) r6{"ab(c)de", [std::regex_constants::nosubs](../syntax_option_type.html)};
        [std::cout](../../io/cout.html) << "r6 has " << r6.mark_count() << " subexpressions" << '\n';
        // Expected: 0
    }

Output: 
    
    
    r1 has 0 subexpressions
    r2 has 1 subexpressions
    r3 has 2 subexpressions
    r4 has 2 subexpressions
    r5 has 1 subexpressions
    r6 has 0 subexpressions
