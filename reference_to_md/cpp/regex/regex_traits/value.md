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
  


[`std::regex_traits`](../regex_traits.html "cpp/regex/regex traits")

Member functions  
---  
[regex_traits::regex_traits](regex_traits.html "cpp/regex/regex traits/regex traits")  
[regex_traits::length](length.html "cpp/regex/regex traits/length")  
[regex_traits::translate](translate.html "cpp/regex/regex traits/translate")  
[regex_traits::translate_nocase](translate_nocase.html "cpp/regex/regex traits/translate nocase")  
[regex_traits::transform](transform.html "cpp/regex/regex traits/transform")  
[regex_traits::transform_primary](transform_primary.html "cpp/regex/regex traits/transform primary")  
[regex_traits::lookup_collatename](lookup_collatename.html "cpp/regex/regex traits/lookup collatename")  
[regex_traits::lookup_classname](lookup_classname.html "cpp/regex/regex traits/lookup classname")  
[regex_traits::isctype](isctype.html "cpp/regex/regex traits/isctype")  
**regex_traits::value**  
[regex_traits::imbue](imbue.html "cpp/regex/regex traits/imbue")  
[regex_traits::getloc](getloc.html "cpp/regex/regex traits/getloc")  
  


int value( CharT ch, int radix ) const; |  |  (since C++11)  
---|---|---  
| |   
  
Determines the value represented by the digit ch in the numeric base radix, given the currently imbued locale. This function is called by [std::regex](../basic_regex.html "cpp/regex/basic regex") when processing [Quantifiers](../ecmascript.html#Quantifiers "cpp/regex/ecmascript") such as `{1`} or `{2,5`}, [Backreferences](../ecmascript.html#Backreferences "cpp/regex/ecmascript") such as `\1`, and hexadecimal and Unicode character escapes. 

### Parameters

ch  |  \-  |  the character that may represent a digit   
---|---|---  
radix  |  \-  |  either 8, 10, or 16   
  
### Return value

The numeric value if ch indeed represents a digit in the currently imbued locale that is valid for the numeric base radix, or -1 on error. 

### Example

Run this code
    
    
    #include <iostream>
    #include <locale>
    #include <map>
    #include <regex>
     
    // This custom regex traits allows japanese numerals
    struct jnum_traits : [std::regex_traits](../regex_traits.html)<wchar_t>
    {   
        static [std::map](../../container/map.html)<wchar_t, int> data;
        int value(wchar_t ch, int radix) const
        {
            wchar_t up = [std::toupper](../../string/byte/toupper.html)(ch, getloc());
            return data.count(up) ? data[up] : regex_traits::value(ch, radix);
        }
    };
    [std::map](../../container/map.html)<wchar_t, int> jnum_traits::data = {{L'〇',0}, {L'一',1}, {L'二',2},
                                                {L'三',3}, {L'四',4}, {L'五',5},
                                                {L'六',6}, {L'七',7}, {L'八',8},
                                                {L'九',9}, {L'Ａ',10}, {L'Ｂ',11},
                                                {L'Ｃ',12}, {L'Ｄ',13}, {L'Ｅ',14},
                                                {L'Ｆ',15}};
     
    int main()
    {   
        [std::locale::global](../../locale/locale/global.html)([std::locale](../../locale/locale.html)("ja_JP.utf8"));
        [std::wcout](../../io/cout.html).sync_with_stdio(false);
        [std::wcout](../../io/cout.html).imbue([std::locale](../../locale/locale.html)());
     
        [std::wstring](../../string/basic_string.html) in = L"風";
     
        if ([std::regex_match](../regex_match.html)(in, [std::wregex](../basic_regex.html)(L"\\u98a8")))
            [std::wcout](../../io/cout.html) << "\\u98a8 matched " << in << '\n';
     
        if ([std::regex_match](../regex_match.html)(in, [std::basic_regex](../basic_regex.html)<wchar_t, jnum_traits>(L"\\u九八ａ八")))
            [std::wcout](../../io/cout.html) << L"\\u九八ａ八 with custom traits matched " << in << '\n';
    }

Output: 
    
    
    \u98a8 matched 風
    \u九八ａ八 with custom traits matched 風
