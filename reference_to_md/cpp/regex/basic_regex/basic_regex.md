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
  


[`std::basic_regex`](../basic_regex.html "cpp/regex/basic regex")

Member Functions  
---  
**basic_regex::basic_regex**  
[basic_regex::~basic_regex](~basic_regex.html "cpp/regex/basic regex/~basic regex")  
[basic_regex::operator=](operator=.html "cpp/regex/basic regex/operator=")  
[basic_regex::assign](assign.html "cpp/regex/basic regex/assign")  
Observers  
[basic_regex::mark_count](mark_count.html "cpp/regex/basic regex/mark count")  
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
  


basic_regex(); |  (1)  |  (since C++11)  
---|---|---  
explicit basic_regex( const CharT* s,  
flag_type f = [std::regex_constants::ECMAScript](../syntax_option_type.html) ); |  (2)  |  (since C++11)  
basic_regex( const CharT* s, [std::size_t](../../types/size_t.html) count,  
flag_type f = [std::regex_constants::ECMAScript](../syntax_option_type.html) ); |  (3)  |  (since C++11)  
basic_regex( const basic_regex& other ); |  (4)  |  (since C++11)  
basic_regex( basic_regex&& other ) noexcept; |  (5)  |  (since C++11)  
template< class ST, class SA >  
explicit basic_regex( const [std::basic_string](../../string/basic_string.html)<CharT,ST,SA>& str,  
flag_type f = [std::regex_constants::ECMAScript](../syntax_option_type.html) ); |  (6)  |  (since C++11)  
template< class ForwardIt >  
basic_regex( ForwardIt first, ForwardIt last,  
flag_type f = [std::regex_constants::ECMAScript](../syntax_option_type.html) ); |  (7)  |  (since C++11)  
basic_regex( [std::initializer_list](../../utility/initializer_list.html)<CharT> init,  
flag_type f = [std::regex_constants::ECMAScript](../syntax_option_type.html) ); |  (8)  |  (since C++11)  
| |   
  
Constructs a new regular expression from a sequence of characters interpreted according to the flags f. 

1) Default constructor. Constructs an empty regular expression which will match nothing.

2) Constructs a regex from a null-terminated string s.

3) Constructs a regex from a sequence of count characters, pointed to by s.

4) Copy constructor. Constructs a regex by copying other.

5) Move constructor. Constructs a regex with the contents of other using move semantics.

6) Constructs a regex from a string str.

7) Range constructor. Constructs the string with the contents of the range `[`first`, `last`)`.

8) Initializer list constructor. Constructs the string with the contents of the initializer list init.

### Parameters

s  |  \-  |  pointer to a null-terminated string   
---|---|---  
count  |  \-  |  length of a character sequence used to initialize the regex   
first, last  |  \-  |  range of a character sequence used to initialize the regex   
str  |  \-  |  a basic_string used as a source used to initialize the regex   
other  |  \-  |  another regex to use as source to initialize the regex   
init  |  \-  |  initializer list used to initialize the regex   
f  |  \-  |  flags used to guide the interpretation of the character sequence as a regular expression   
Type requirements   
-`ForwardIt` must meet the requirements of [LegacyForwardIterator](../../named_req/ForwardIterator.html "cpp/named req/ForwardIterator").   
  
### Exceptions

1) May throw implementation-defined exceptions.

2,3) [std::regex_error](../regex_error.html "cpp/regex/regex error") if the supplied regular expression is not valid.

4) May throw implementation-defined exceptions.

6-8) [std::regex_error](../regex_error.html "cpp/regex/regex error") if the supplied regular expression is not valid.

### Example

Run this code
    
    
    #include <iomanip>
    #include <iostream>
    #include <regex>
    #include <string>
     
    void match_and_print(const [std::string](../../string/basic_string.html)& text, const [std::regex](../basic_regex.html)& pattern)
    {
        [std::sregex_iterator](../regex_iterator.html) it(text.begin(), text.end(), pattern), it_end;
        int count = 0;
        for (; it != it_end; ++it)
        {
            const [std::smatch](../match_results.html)& match = *it;
            [std::cout](../../io/cout.html) << ++count << ". " << [std::quoted](../../io/manip/quoted.html)(match.str()) << '\n';
        }
        [std::cout](../../io/cout.html) << (count ? "\n" : "no match found\n\n");
    }
     
    int main()
    {
        const [std::string](../../string/basic_string.html) text = "Hello, World! 12345";
     
        // Matches one or more digits
        [std::string](../../string/basic_string.html) pattern_text = "\\d+";
        [std::cout](../../io/cout.html) << "digits (" << pattern_text << "):\n";
        auto pattern = [std::regex](../basic_regex.html)(pattern_text);
        match_and_print(text, pattern);
     
        // Matches one or more characters split by space
        pattern_text = "[^\\s]+";
        [std::cout](../../io/cout.html) << "words (" << pattern_text << "):\n";
        pattern = [std::regex](../basic_regex.html)(pattern_text);
        match_and_print(text, pattern);
     
        // Matches one or more characters split by space
        pattern_text = "[a-zA-Z]+";
        [std::cout](../../io/cout.html) << "words without symbols and digits (" << pattern_text << "):\n";
        pattern = [std::regex](../basic_regex.html)(pattern_text);
        match_and_print(text, pattern);
     
        // Matches one non digits, non alphabet
        pattern_text = "[^0-9A-Za-z]";
        [std::cout](../../io/cout.html) << "symbol (" << pattern_text << "):\n";
        pattern = [std::regex](../basic_regex.html)(pattern_text);
        match_and_print(text, pattern);
     
        // Matches one or more lowercase
        pattern_text = "[a-z]+";
        [std::cout](../../io/cout.html) << "lowercase (" << pattern_text << "):\n";
        pattern = [std::regex](../basic_regex.html)(pattern_text);
        match_and_print(text, pattern);
     
        // Matches one or more lowercase with std::regex::icase flag
        pattern_text = "[a-z]+";
        [std::cout](../../io/cout.html) << "lowercase with ignore case flag (" << pattern_text << "):\n";
        pattern = [std::regex](../basic_regex.html)(pattern_text, std::regex::icase);
        match_and_print(text, pattern);
     
        // Matches basic POSIX regular expression
        pattern_text = "[[:digit:]]+";
        [std::cout](../../io/cout.html) << "basic POSIX regex (" << pattern_text << "):\n";
        pattern = [std::regex](../basic_regex.html)(pattern_text, std::regex::basic);
        match_and_print(text, pattern);
     
        // Matches extended POSIX regular expression
        pattern_text = "[[:digit:]]+";
        [std::cout](../../io/cout.html) << "extended POSIX regex (" << pattern_text << "):\n";
        pattern = [std::regex](../basic_regex.html)(pattern_text, std::regex::extended);
        match_and_print(text, pattern);
    }

Output: 
    
    
    digits (\d+):
    1. "12345"
     
    words ([^\s]+):
    1. "Hello,"
    2. "World!"
    3. "12345"
     
    words without symbols and digits ([a-zA-Z]+):
    1. "Hello"
    2. "World"
     
    symbol ([^0-9A-Za-z]):
    1. ","
    2. " "
    3. "!"
    4. " "
     
    lowercase ([a-z]+):
    1. "ello"
    2. "orld"
     
    lowercase with ignore case flag ([a-z]+):
    1. "Hello"
    2. "World"
     
    basic POSIX regex ([[:digit:]]+):
    no match found
     
    extended POSIX regex ([[:digit:]]+):
    1. "12345"
