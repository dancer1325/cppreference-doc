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
**Strings library**  
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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/navbar_content&action=edit)

**Strings library**

Classes  
---  
[basic_string](string/basic_string.html "cpp/string/basic string")  
[basic_string_view](string/basic_string_view.html "cpp/string/basic string view")(C++17)  
[char_traits](string/char_traits.html "cpp/string/char traits")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/navbar_content&action=edit)

## Contents

  * [1 Characters](string.html#Characters)
  * [2 Library components](string.html#Library_components)
    * [2.1 Character traits](string.html#Character_traits)
    * [2.2 String classes (std::string etc.)](string.html#String_classes_.28std::string_etc..29)
    * [2.3 String view classes (std::string_view etc.) (since C++17)](string.html#String_view_classes_.28std::string_view_etc..29_.28since_C.2B.2B17.29)
  * [3 Relevant libraries](string.html#Relevant_libraries)
  * [4 Defect reports](string.html#Defect_reports)
  * [5 See also](string.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string&action=edit&section=1 "Edit section: Characters")] Characters

In the C++ standard library, a _character_ is an object which, when treated sequentially, can represent text. 

The term means not only objects of [character types](language/type-id.html "cpp/language/type"), but also any value that can be represented by a type that provides the definitions specified in the strings library and following libraries: 

  * [localization library](locale.html "cpp/locale")
  * [input/output library](io.html "cpp/io")



  * [regular expressions library](regex.html "cpp/regex")

| (since C++11)  
---|---  
  
In the strings library and regular expressions library(since C++11), a character can be of only _char-like types_ , i.e. those non-array types that satisfy the requirements of [PODType](named_req/PODType.html "cpp/named req/PODType")(until C++20)[TrivialType](named_req/TrivialType.html "cpp/named req/TrivialType") and [StandardLayoutType](named_req/StandardLayoutType.html "cpp/named req/StandardLayoutType")(since C++20)(until C++26)[TriviallyCopyable](named_req/TriviallyCopyable.html "cpp/named req/TriviallyCopyable") and [StandardLayoutType](named_req/StandardLayoutType.html "cpp/named req/StandardLayoutType")(since C++26). 

For any char-like type `T`, [std::is_trivially_default_constructible_v](types/is_default_constructible.html)<T> is true.  | (since C++26)  
---|---  
  
Therefore, characters are also referred as _char-like objects_ in the strings library and regular expressions library(since C++11). 

Some standard library components accept _character container types_. They, too, are types used to represent individual characters. Such types are used for one of the template arguments of [std::char_traits](string/char_traits.html "cpp/string/char traits") and the class templates which use [std::char_traits](string/char_traits.html "cpp/string/char traits"). 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string&action=edit&section=2 "Edit section: Library components")] Library components

The C++ strings library includes the following components: 

#### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string&action=edit&section=3 "Edit section: Character traits")] Character traits

Many character-related class templates (such as [std::basic_string](string/basic_string.html "cpp/string/basic string")) need a set of related types and functions to complete the definition of their semantics. These types and functions are provided as a set of member typedef names and functions in the template parameter `Traits` used by each such template. The classes which are able to complete those semantics are [CharTraits](named_req/CharTraits.html "cpp/named req/CharTraits"). 

The string library provides the class template [std::char_traits](string/char_traits.html "cpp/string/char traits") that defines types and functions for [std::basic_string](string/basic_string.html "cpp/string/basic string") and [std::basic_string_view](string/basic_string_view.html "cpp/string/basic string view")(since C++17). 

The following specializations are defined, all of them satisfy the [CharTraits](named_req/CharTraits.html "cpp/named req/CharTraits") requirements: 

Defined in header `[<string>](header/string.html "cpp/header/string")` |  |   
---|---|---  
template<> class char_traits<char>; |  |   
template<> class char_traits<wchar_t>; |  |   
template<> class char_traits<char8_t>; |  |  (since C++20)  
template<> class char_traits<char16_t>; |  |  (since C++11)  
template<> class char_traits<char32_t>; |  |  (since C++11)  
| |   
  
When a user-defined character container type for [std::basic_string](string/basic_string.html "cpp/string/basic string") and [std::basic_string_view](string/basic_string_view.html "cpp/string/basic string view")(since C++17) is used, it is also necessary to provide a corresponding character trait class (which can be a specialization of [std::char_traits](string/char_traits.html "cpp/string/char traits")). 

#### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string&action=edit&section=4 "Edit section: String classes \(std::string etc.\)")] String classes ([std::string](string/basic_string.html "cpp/string/basic string") etc.)

The class template [std::basic_string](string/basic_string.html "cpp/string/basic string") generalizes how sequences of characters are manipulated and stored. String creation, manipulation, and destruction are all handled by a convenient set of class methods and related functions. 

Several specializations of [std::basic_string](string/basic_string.html "cpp/string/basic string") are provided for commonly-used types: 

Defined in header `[<string>](header/string.html "cpp/header/string")`  
---  
Type  |  Definition   
`**std::string**` |  [std::basic_string](string/basic_string.html)<char>  
`**std::wstring**` |  [std::basic_string](string/basic_string.html)<wchar_t>  
`**std::u8string**` (since C++20) |  [std::basic_string](string/basic_string.html)<char8_t>  
`**std::u16string**` (since C++11) |  [std::basic_string](string/basic_string.html)<char16_t>  
`**std::u32string**` (since C++11) |  [std::basic_string](string/basic_string.html)<char32_t>  
  
#### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string&action=edit&section=5 "Edit section: String view classes \(std::string view etc.\) \(since C++17\)")] String view classes ([std::string_view](string/basic_string_view.html "cpp/string/basic string view") etc.) (since C++17)

The class template [std::basic_string_view](string/basic_string_view.html "cpp/string/basic string view") provides a lightweight object that offers read-only access to a string or a part of a string using an interface similar to the interface of [std::basic_string](string/basic_string.html "cpp/string/basic string"). 

Several specializations of [std::basic_string_view](string/basic_string_view.html "cpp/string/basic string view") are provided for commonly-used types: 

Defined in header `[<string_view>](header/string_view.html "cpp/header/string view")`  
---  
Type  |  Definition   
`**std::string_view**` |  [std::basic_string_view](string/basic_string_view.html)<char>  
`**std::wstring_view**` |  [std::basic_string_view](string/basic_string_view.html)<wchar_t>  
`**std::u8string_view**` (since C++20) |  [std::basic_string_view](string/basic_string_view.html)<char8_t>  
`**std::u16string_view**` |  [std::basic_string_view](string/basic_string_view.html)<char16_t>  
`**std::u32string_view**` |  [std::basic_string_view](string/basic_string_view.html)<char32_t>  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string&action=edit&section=6 "Edit section: Relevant libraries")] Relevant libraries

The [text processing library](text.html "cpp/text") provides support for localizations, string conversions (e.g. [`std::toupper`](locale/toupper.html "cpp/locale/toupper")), character classification functions (e.g. [`std::isspace`](locale/isspace.html "cpp/locale/isspace")), and text encoding recognition ([`std::text_encoding`](locale/text_encoding.html "cpp/text/text encoding")). 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string&action=edit&section=7 "Edit section: Defect reports")] Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 1170](https://cplusplus.github.io/LWG/issue1170) | C++98  | char-like types could be array types  | prohibited   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string&action=edit&section=8 "Edit section: See also")] See also

[C documentation](../c/string.html "c/string") for Strings library  
---
