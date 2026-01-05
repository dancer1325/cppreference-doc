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
**regex_traits::isctype**  
[regex_traits::value](value.html "cpp/regex/regex traits/value")  
[regex_traits::imbue](imbue.html "cpp/regex/regex traits/imbue")  
[regex_traits::getloc](getloc.html "cpp/regex/regex traits/getloc")  
  


bool isctype( CharT c, char_class_type f ) const; |  |   
---|---|---  
| |   
  
Determines whether the character c belongs to the character class identified by f, which, in turn, is a value returned by [lookup_classname()](lookup_classname.html "cpp/regex/regex traits/lookup classname") or a bitwise OR of several such values. 

The version of this function provided in the standard library specializations of [std::regex_traits](../regex_traits.html "cpp/regex/regex traits") does the following: 

1) First converts f to a value m of type [std::ctype_base::mask](../../locale/ctype_base.html "cpp/locale/ctype base").

For each [std::ctype](../../locale/ctype.html "cpp/locale/ctype") category listed in the table in the page [lookup_classname()](lookup_classname.html "cpp/regex/regex traits/lookup classname"), if the bits in f corresponding to the category are set, the corresponding bits in m will also be set.

2) Then attempts to classify the character in the imbued locale by calling [std::use_facet](../../locale/use_facet.html)<[std::ctype](../../locale/ctype.html)<CharT>>(getloc()).is(m, c). 

  * If that returns true, `isctype()` will also return true. 
  * Otherwise, if c equals '_', and f includes the result of calling [lookup_classname()](lookup_classname.html "cpp/regex/regex traits/lookup classname") for the character class `[:w:]`, true is returned, otherwise false is returned.



## Contents

  * [1 Parameters](isctype.html#Parameters)
  * [2 Return value](isctype.html#Return_value)
  * [3 Example](isctype.html#Example)
  * [4 Defect reports](isctype.html#Defect_reports)
  * [5 See also](isctype.html#See_also)

  
---  
  
### Parameters

c  |  \-  |  the character to classify   
---|---|---  
f  |  \-  |  the bitmask obtained from one or several calls to [lookup_classname()](lookup_classname.html "cpp/regex/regex traits/lookup classname")  
  
### Return value

true if c is classified by f, false otherwise. 

### Example

Run this code
    
    
    #include <iostream>
    #include <regex>
    #include <string>
     
    int main()
    {
        [std::regex_traits](../regex_traits.html)<char> t;
        [std::string](../../string/basic_string.html) str_alnum = "alnum";
        auto a = t.lookup_classname(str_alnum.begin(), str_alnum.end());
        [std::string](../../string/basic_string.html) str_w = "w"; // [:w:] is [:alnum:] plus '_'
        auto w = t.lookup_classname(str_w.begin(), str_w.end());
        [std::cout](../../io/cout.html) << [std::boolalpha](../../io/manip/boolalpha.html)
                  << t.isctype('A', w) << ' ' << t.isctype('A', a) << '\n'
                  << t.isctype('_', w) << ' ' << t.isctype('_', a) << '\n'
                  << t.isctype(' ', w) << ' ' << t.isctype(' ', a) << '\n';
    }

Output: 
    
    
    true true
    true false
    false false

Demonstrates a custom regex traits implementation of [`lookup_classname()`](lookup_classname.html "cpp/regex/regex traits/lookup classname") / `isctype()`:

Run this code
    
    
    #include <cwctype>
    #include <iostream>
    #include <locale>
    #include <regex>
     
    // This custom regex traits uses wctype/iswctype to implement lookup_classname/isctype.
    struct wctype_traits : [std::regex_traits](../regex_traits.html)<wchar_t>
    {
        using char_class_type = [std::wctype_t](../../string/wide.html);
     
        template<class It>
        char_class_type lookup_classname(It first, It last, bool = false) const
        {
            return [std::wctype](../../string/wide/wctype.html)([std::string](../../string/basic_string.html)(first, last).c_str());
        }
     
        bool isctype(wchar_t c, char_class_type f) const
        {
            return [std::iswctype](../../string/wide/iswctype.html)(c, f);
        }
    };
     
    int main()
    {
        [std::locale::global](../../locale/locale/global.html)([std::locale](../../locale/locale.html)("ja_JP.utf8"));
        [std::wcout](../../io/cout.html).sync_with_stdio(false);
        [std::wcout](../../io/cout.html).imbue([std::locale](../../locale/locale.html)());
     
        [std::wsmatch](../match_results.html) m;
        [std::wstring](../../string/basic_string.html) in = L"風の谷のナウシカ";
        // matches all characters (they are classified as alnum)
        [std::regex_search](../regex_search.html)(in, m, [std::wregex](../basic_regex.html)(L"([[:alnum:]]+)"));
        [std::wcout](../../io/cout.html) << "alnums: " << m[1] << '\n'; // prints "風の谷のナウシカ"
        // matches only the katakana
        [std::regex_search](../regex_search.html)(in, m,
                          [std::basic_regex](../basic_regex.html)<wchar_t, wctype_traits>(L"([[:jkata:]]+)"));
        [std::wcout](../../io/cout.html) << "katakana: " << m[1] << '\n'; // prints "ナウシカ"
    }

Output: 
    
    
    alnums: 風の谷のナウシカ
    katakana: ナウシカ

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2018](https://cplusplus.github.io/LWG/issue2018) | C++11  | the value of m was unspecified  | matches [lookup_classname()](lookup_classname.html "cpp/regex/regex traits/lookup classname")'s minimal support   
  
### See also

[ lookup_classname](lookup_classname.html "cpp/regex/regex traits/lookup classname") |  gets a character class by name   
(public member function)   
---|---  
[ do_is](../../locale/ctype/is.html "cpp/locale/ctype/is")[virtual] |  classifies a character or a character sequence   
(virtual protected member function of `std::ctype<CharT>`)   
[ iswctype](../../string/wide/iswctype.html "cpp/string/wide/iswctype") |  classifies a wide character according to the specified [`LC_CTYPE`](../../locale/LC_categories.html "cpp/locale/LC categories") category   
(function) 
