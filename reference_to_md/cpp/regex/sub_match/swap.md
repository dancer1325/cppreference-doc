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
  


[`std::sub_match`](../sub_match.html "cpp/regex/sub match")

Member functions  
---  
[sub_match::sub_match](sub_match.html "cpp/regex/sub match/sub match")  
[sub_match::length](length.html "cpp/regex/sub match/length")  
[sub_match::strsub_match::operator string_type](str.html "cpp/regex/sub match/str")  
[sub_match::compare](compare.html "cpp/regex/sub match/compare")  
**sub_match::swap**  
Non-member functions  
[operator==operator!=operator<<operator<=operator>operator>=operator<=>](operator_cmp.html "cpp/regex/sub match/operator cmp")(until C++20)(until C++20)(until C++20)(until C++20)(until C++20)(C++20)  
[operator<<](operator_ltlt.html "cpp/regex/sub match/operator ltlt")  
  


void swap( sub_match& s ) noexcept(/* see below */); |  |  (since C++11)  
---|---|---  
| |   
  
Exchanges the contents of two sub-match objects. Equivalent to 

this->pair<BidirIt, BidirIt>::swap(s);  
[std::swap](../../algorithm/swap.html)(matched, s.matched);

## Contents

  * [1 Parameters](swap.html#Parameters)
  * [2 Exceptions](swap.html#Exceptions)
  * [3 Example](swap.html#Example)
  * [4 Defect reports](swap.html#Defect_reports)

  
---  
  
### Parameters

s  |  \-  |  a `sub_match` to swap with   
---|---|---  
Type requirements   
-`BidirIt` must meet the requirements of [LegacySwappable](https://en.cppreference.com/mwiki/index.php?title=cpp/named_req/LegacySwappable&action=edit&redlink=1 "cpp/named req/LegacySwappable \(page does not exist\)").   
  
### Exceptions

[`noexcept`](../../language/noexcept_spec.html "cpp/language/noexcept spec") specification: 

noexcept([std::is_nothrow_swappable_v](../../types/is_swappable.html)<BidirIt>)

### Example

Run this code
    
    
    #include <cassert>
    #include <iostream>
    #include <regex>
     
    int main()
    {
        const char* s = "Quick red cat";
        [std::sub_match](../sub_match.html)<const char*> x, y;
     
        x.first = &s[0];
        x.second = &s[5];
        x.matched = false;
     
        y.first = &s[012];
        y.second = &s[13];
        y.matched = true;
     
        [std::cout](../../io/cout.html) << "Before swap:\n";
        [std::cout](../../io/cout.html) << "x.str() = [" << x.str() << "]\n";
        [std::cout](../../io/cout.html) << "y.str() = [" << y.str() << "]\n";
        [assert](../../error/assert.html)(!x.matched and y.matched);
     
        x.swap(y);
     
        [std::cout](../../io/cout.html) << "After swap:\n";
        [std::cout](../../io/cout.html) << "x.str() = [" << x.str() << "]\n";
        [std::cout](../../io/cout.html) << "y.str() = [" << y.str() << "]\n";
        [assert](../../error/assert.html)(x.matched and !y.matched);
    }

Output: 
    
    
    Before swap:
    x.str() = []
    y.str() = [cat]
    After swap:
    x.str() = [cat]
    y.str() = []

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3204](https://cplusplus.github.io/LWG/issue3204) | C++11  | [std::sub_match](../sub_match.html "cpp/regex/sub match") used inherited std::pair::swap(pair&)  
which led to a slicing  | std::sub_match::swap(sub_match&) is added 
