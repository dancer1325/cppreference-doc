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
[Formatting library](format.html "cpp/utility/format") (C++20)  
[Null-terminated sequence utilities](../text.html#Null-terminated_sequence_utilities "cpp/text")  
[Byte strings](../string/byte.html "cpp/string/byte")  
[Multibyte strings](../string/multibyte.html "cpp/string/multibyte")  
[Wide strings](../string/wide.html "cpp/string/wide")  
[Primitive numeric conversions](../text.html#Primitive_numeric_conversions "cpp/text")  
| [to_chars](to_chars.html "cpp/utility/to chars")(C++17)  
---  
[to_chars_result](to_chars_result.html "cpp/utility/to chars result")(C++17)  
[from_chars](from_chars.html "cpp/utility/from chars")(C++17)  
[from_chars_result](from_chars_result.html "cpp/utility/from chars result")(C++17)  
**chars_format**(C++17)  
  
[Text encoding identifications](../text.html#Text_encoding_identifications "cpp/text")  
| [text_encoding](../locale/text_encoding.html "cpp/text/text encoding")(C++26)  
---  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/text/navbar_content&action=edit)

Defined in header `[<charconv>](../header/charconv.html "cpp/header/charconv")` |  |   
---|---|---  
enum class chars_format {  
scientific = /*unspecified*/,  
fixed = /*unspecified*/,  
hex = /*unspecified*/,  
general = fixed | scientific  
}; |  |  (since C++17)  
| |   
  
A [BitmaskType](../named_req/BitmaskType.html "cpp/named req/BitmaskType") used to specify floating-point formatting for [`std::to_chars`](to_chars.html "cpp/utility/to chars") and [`std::from_chars`](from_chars.html "cpp/utility/from chars"). 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/chars_format&action=edit&section=1 "Edit section: Notes")] Notes

[Feature-test](feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_to_chars`](../experimental/feature_test.html#cpp_lib_to_chars "cpp/feature test") | [`201611L`](../compiler_support/17.html#cpp_lib_to_chars_201611L "cpp/compiler support/17") | (C++17) | Elementary string conversions (std::to_chars, std::from_chars)   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/chars_format&action=edit&section=2 "Edit section: Example")] Example

| This section is incomplete  
Reason: no example   
---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/chars_format&action=edit&section=3 "Edit section: See also")] See also

[ to_chars](to_chars.html "cpp/utility/to chars")(C++17) |  converts an integer or floating-point value to a character sequence   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/utility/dsc_to_chars&action=edit)  
---|---  
[ from_chars](from_chars.html "cpp/utility/from chars")(C++17) |  converts a character sequence to an integer or floating-point value   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/utility/dsc_from_chars&action=edit)
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
