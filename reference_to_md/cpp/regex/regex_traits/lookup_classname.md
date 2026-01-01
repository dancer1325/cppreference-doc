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
**regex_traits::lookup_classname**  
[regex_traits::isctype](isctype.html "cpp/regex/regex traits/isctype")  
[regex_traits::value](value.html "cpp/regex/regex traits/value")  
[regex_traits::imbue](imbue.html "cpp/regex/regex traits/imbue")  
[regex_traits::getloc](getloc.html "cpp/regex/regex traits/getloc")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/regex/regex_traits/navbar_content&action=edit)

template< class ForwardIt >  
char_class_type lookup_classname( ForwardIt first,  
ForwardIt last,  
bool icase = false ) const; |  |   
---|---|---  
| |   
  
If the character sequence `[`first`, `last`)` represents the name of a valid character class in the currently imbued locale (that is, the string between `[:` and `:]` in regular expressions), returns the implementation-defined value representing this character class. Otherwise, returns zero. 

If the parameter icase is true, the character class ignores character case, e.g. the regex `[:lower:]` with [std::regex_constants::icase](../syntax_option_type.html "cpp/regex/syntax option type") generates a call to [std::regex_traits](../regex_traits.html)<>::lookup_classname() with `[`first`, `last`)` indicating the string "lower" and icase == true. This call returns the same bitmask as the call generated by the regex `[:alpha:]` with icase == false. 

The following narrow and wide character class names are always recognized by [std::regex_traits](../regex_traits.html)<char> and [std::regex_traits](../regex_traits.html)<wchar_t> respectively, and the classifications returned (with icase == false) correspond to the matching classifications obtained by the [std::ctype](../../locale/ctype.html "cpp/locale/ctype") facet of the imbued locale, as follows: 

Character class name  |  [std::ctype](../../locale/ctype.html "cpp/locale/ctype") classification   
---|---  
Narrow  | Wide   
"alnum" | L"alnum" | [std::ctype_base::alnum](../../locale/ctype_base.html "cpp/locale/ctype base")  
"alpha" | L"alpha" | [std::ctype_base::alpha](../../locale/ctype_base.html "cpp/locale/ctype base")  
"blank" | L"blank" | [std::ctype_base::blank](../../locale/ctype_base.html "cpp/locale/ctype base")  
"cntrl" | L"cntrl" | [std::ctype_base::cntrl](../../locale/ctype_base.html "cpp/locale/ctype base")  
"digit" | L"digit" | [std::ctype_base::digit](../../locale/ctype_base.html "cpp/locale/ctype base")  
"graph" | L"graph" | [std::ctype_base::graph](../../locale/ctype_base.html "cpp/locale/ctype base")  
"lower" | L"lower" | [std::ctype_base::lower](../../locale/ctype_base.html "cpp/locale/ctype base")  
"print" | L"print" | [std::ctype_base::print](../../locale/ctype_base.html "cpp/locale/ctype base")  
"punct" | L"punct" | [std::ctype_base::punct](../../locale/ctype_base.html "cpp/locale/ctype base")  
"space" | L"space" | [std::ctype_base::space](../../locale/ctype_base.html "cpp/locale/ctype base")  
"upper" | L"upper" | [std::ctype_base::upper](../../locale/ctype_base.html "cpp/locale/ctype base")  
"xdigit" | L"xdigit" | [std::ctype_base::xdigit](../../locale/ctype_base.html "cpp/locale/ctype base")  
"d" | L"d" | [std::ctype_base::digit](../../locale/ctype_base.html "cpp/locale/ctype base")  
"s" | L"s" | [std::ctype_base::space](../../locale/ctype_base.html "cpp/locale/ctype base")  
"w" | L"w" | [std::ctype_base::alnum](../../locale/ctype_base.html "cpp/locale/ctype base")  
with '_' optionally added   
  
The classification returned for the string "w" may be exactly the same as "alnum", in which case [isctype()](isctype.html "cpp/regex/regex traits/isctype") adds '_' explicitly. 

Additional classifications such as "jdigit" or "jkanji" may be provided by system-supplied locales (in which case they are also accessible through [std::wctype](../../string/wide/wctype.html "cpp/string/wide/wctype")). 

## Contents

  * [1 Parameters](lookup_classname.html#Parameters)
  * [2 Return value](lookup_classname.html#Return_value)
  * [3 Example](lookup_classname.html#Example)
  * [4 See also](lookup_classname.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/regex/regex_traits/lookup_classname&action=edit&section=1 "Edit section: Parameters")] Parameters

first, last  |  \-  |  a pair of iterators which determines the sequence of characters that represents a name of a character class   
---|---|---  
icase  |  \-  |  if true, ignores the upper/lower case distinction in the character classification   
Type requirements   
-`ForwardIt` must meet the requirements of [LegacyForwardIterator](../../named_req/ForwardIterator.html "cpp/named req/ForwardIterator").   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/regex/regex_traits/lookup_classname&action=edit&section=2 "Edit section: Return value")] Return value

The bitmask representing the character classification determined by the given character class, or char_class_type() if the class is unknown. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/regex/regex_traits/lookup_classname&action=edit&section=3 "Edit section: Example")] Example

Demonstrates a custom regex traits implementation of `lookup_classname()` / [`isctype()`](isctype.html "cpp/regex/regex traits/isctype"):

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

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/regex/regex_traits/lookup_classname&action=edit&section=4 "Edit section: See also")] See also

[ isctype](isctype.html "cpp/regex/regex traits/isctype") |  indicates membership in a character class   
(public member function)  
---|---  
[ wctype](../../string/wide/wctype.html "cpp/string/wide/wctype") |  looks up a character classification category in the current C locale   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/wide/dsc_wctype&action=edit)
