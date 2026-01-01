[C++](../../cpp.html "cpp")

[Compiler support](../compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](../freestanding.html "cpp/freestanding")  
[Language](../language.html "cpp/language")  
[Standard library](../standard_library.html "cpp/standard library")  
[Standard library headers](../headers.html "cpp/header")  
[Named requirements](../iterator/concepts.html "cpp/named req")  
[Feature test macros](../experimental/feature_test.html "cpp/feature test") (C++20)  
[Language support library](../utility.html#Language_support "cpp/utility")  
[Concepts library](../concepts.html "cpp/concepts") (C++20)  
[Diagnostics library](../error.html "cpp/error")  
[Memory management library](../memory.html "cpp/memory")  
[Metaprogramming library](../meta.html "cpp/meta") (C++11)  
[General utilities library](../utility.html "cpp/utility")  
[Containers library](../container.html "cpp/container")  
[Iterators library](../iterator.html "cpp/iterator")  
[Ranges library](../ranges.html "cpp/ranges") (C++20)  
[Algorithms library](../algorithm.html "cpp/algorithm")  
[Strings library](../string.html "cpp/string")  
[Text processing library](../text.html "cpp/text")  
[Numerics library](../numeric.html "cpp/numeric")  
[Date and time library](../chrono.html "cpp/chrono")  
[Input/output library](../io.html "cpp/io")  
[Filesystem library](../filesystem.html "cpp/filesystem") (C++17)  
[Concurrency support library](../atomic.html "cpp/thread") (C++11)  
[Execution control library](../experimental/execution.html "cpp/execution") (C++26)  
[Technical specifications](../experimental.html "cpp/experimental")  
[Symbols index](../symbol_index.html "cpp/symbol index")  
[External libraries](../links/libs.html "cpp/links/libs")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/navbar_content&action=edit)

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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/text/navbar_content&action=edit)

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
**regex_traits**(C++11)  
Constants  
[syntax_option_type](syntax_option_type.html "cpp/regex/syntax option type")(C++11)  
[match_flag_type](match_flag_type.html "cpp/regex/match flag type")(C++11)  
[error_type](error_type.html "cpp/regex/error type")(C++11)  
Regex Grammar  
[Modified ECMAScript-262](ecmascript.html "cpp/regex/ecmascript")(C++11)  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/regex/navbar_content&action=edit)

**`std::regex_traits`**

Member functions  
---  
[regex_traits::regex_traits](regex_traits/regex_traits.html "cpp/regex/regex traits/regex traits")  
[regex_traits::length](regex_traits/length.html "cpp/regex/regex traits/length")  
[regex_traits::translate](regex_traits/translate.html "cpp/regex/regex traits/translate")  
[regex_traits::translate_nocase](regex_traits/translate_nocase.html "cpp/regex/regex traits/translate nocase")  
[regex_traits::transform](regex_traits/transform.html "cpp/regex/regex traits/transform")  
[regex_traits::transform_primary](regex_traits/transform_primary.html "cpp/regex/regex traits/transform primary")  
[regex_traits::lookup_collatename](regex_traits/lookup_collatename.html "cpp/regex/regex traits/lookup collatename")  
[regex_traits::lookup_classname](regex_traits/lookup_classname.html "cpp/regex/regex traits/lookup classname")  
[regex_traits::isctype](regex_traits/isctype.html "cpp/regex/regex traits/isctype")  
[regex_traits::value](regex_traits/value.html "cpp/regex/regex traits/value")  
[regex_traits::imbue](regex_traits/imbue.html "cpp/regex/regex traits/imbue")  
[regex_traits::getloc](regex_traits/getloc.html "cpp/regex/regex traits/getloc")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/regex/regex_traits/navbar_content&action=edit)

Defined in header `[<regex>](../header/regex.html "cpp/header/regex")` |  |   
---|---|---  
template< class CharT >  
class regex_traits; |  |  (since C++11)  
| |   
  
The type trait template `regex_traits` supplies [std::basic_regex](basic_regex.html "cpp/regex/basic regex") with the set of types and functions necessary to operate on the type `CharT`. 

Since many of regex operations are locale-sensitive (when [std::regex_constants::collate](syntax_option_type.html "cpp/regex/syntax option type") flag is set), the regex_traits class typically holds an instance of a [std::locale](../locale/locale.html "cpp/locale/locale") as a private member. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/regex/regex_traits&action=edit&section=1 "Edit section: Standard specializations")] Standard specializations

Two specializations of `std::regex_traits` are defined by the standard library: 

`std::regex_traits<char>`  
---  
`std::regex_traits<wchar_t>`  
  
These specializations make it possible to use [std::basic_regex](basic_regex.html)<char> (aka [std::regex](basic_regex.html "cpp/regex/basic regex")) and [std::basic_regex](basic_regex.html)<wchar_t> (aka [std::wregex](basic_regex.html "cpp/regex/basic regex")). To use [std::basic_regex](basic_regex.html "cpp/regex/basic regex") with other character types (for example, char32_t), a user-provided trait class must be used. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/regex/regex_traits&action=edit&section=2 "Edit section: Member types")] Member types

Type  |  Definition   
---|---  
`char_type` |  `CharT`  
`string_type` |  [std::basic_string](../string/basic_string.html)<CharT>  
`locale_type` |  The locale used for localized behavior in the regular expression. Must be [CopyConstructible](../named_req/CopyConstructible.html "cpp/named req/CopyConstructible")  
`char_class_type` |  Represents a character classification and is capable of holding an implementation specific set returned by `lookup_classname`. Must be a [BitmaskType](../named_req/BitmaskType.html "cpp/named req/BitmaskType").   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/regex/regex_traits&action=edit&section=3 "Edit section: Member functions")] Member functions

[ (constructor)](regex_traits/regex_traits.html "cpp/regex/regex traits/regex traits") |  constructs the regex_traits object   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/regex/regex_traits/dsc_constructor&action=edit)  
---|---  
[ length](regex_traits/length.html "cpp/regex/regex traits/length")[static] |  calculates the length of a null-terminated character string   
(public static member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/regex/regex_traits/dsc_length&action=edit)  
[ translate](regex_traits/translate.html "cpp/regex/regex traits/translate") |  determines the equivalence key for a character   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/regex/regex_traits/dsc_translate&action=edit)  
[ translate_nocase](regex_traits/translate_nocase.html "cpp/regex/regex traits/translate nocase") |  determines the case-insensitive equivalence key for a character   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/regex/regex_traits/dsc_translate_nocase&action=edit)  
[ transform](regex_traits/transform.html "cpp/regex/regex traits/transform") |  determines the sort key for the given string, used to provide collation order   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/regex/regex_traits/dsc_transform&action=edit)  
[ transform_primary](regex_traits/transform_primary.html "cpp/regex/regex traits/transform primary") |  determines the primary sort key for the character sequence, used to determine equivalence class   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/regex/regex_traits/dsc_transform_primary&action=edit)  
[ lookup_collatename](regex_traits/lookup_collatename.html "cpp/regex/regex traits/lookup collatename") |  gets a collation element by name   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/regex/regex_traits/dsc_lookup_collatename&action=edit)  
[ lookup_classname](regex_traits/lookup_classname.html "cpp/regex/regex traits/lookup classname") |  gets a character class by name   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/regex/regex_traits/dsc_lookup_classname&action=edit)  
[ isctype](regex_traits/isctype.html "cpp/regex/regex traits/isctype") |  indicates membership in a localized character class   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/regex/regex_traits/dsc_isctype&action=edit)  
[ value](regex_traits/value.html "cpp/regex/regex traits/value") |  translates the character representing a numeric digit into an integral value   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/regex/regex_traits/dsc_value&action=edit)  
[ imbue](regex_traits/imbue.html "cpp/regex/regex traits/imbue") |  sets the locale   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/regex/regex_traits/dsc_imbue&action=edit)  
[ getloc](regex_traits/getloc.html "cpp/regex/regex traits/getloc") |  gets the locale   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/regex/regex_traits/dsc_getloc&action=edit)
