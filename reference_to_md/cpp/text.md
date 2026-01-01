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
**Text processing library**  
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

**Text processing library**

[Localization library](locale.html "cpp/locale")  
---  
[Regular expressions library](regex.html "cpp/regex") (C++11)  
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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/text/navbar_content&action=edit)

The text processing library includes components for dealing with text. 

## Contents

  * [1 Localization library](text.html#Localization_library)
  * [2 Regular expressions library (since C++11)](text.html#Regular_expressions_library_.28since_C.2B.2B11.29)
  * [3 Formatting library (since C++20)](text.html#Formatting_library_.28since_C.2B.2B20.29)
  * [4 Null-terminated sequence utilities](text.html#Null-terminated_sequence_utilities)
  * [5 Primitive numeric conversions (since C++17)](text.html#Primitive_numeric_conversions_.28since_C.2B.2B17.29)
  * [6 Text encoding identifications (since C++26)](text.html#Text_encoding_identifications_.28since_C.2B.2B26.29)
  * [7 See also](text.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/text&action=edit&section=1 "Edit section: Localization library")] [Localization library](locale.html "cpp/locale")

The headers [`<locale>`](header/locale.html "cpp/header/locale") and [`<clocale>`](header/clocale.html "cpp/header/clocale") provide internationalization support for character classification and string collation, numeric, monetary, and date/time formatting and parsing, and message retrieval. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/text&action=edit&section=2 "Edit section: Regular expressions library \(since C++11\)")] [Regular expressions library](regex.html "cpp/regex") (since C++11)

The header [`<regex>`](header/regex.html "cpp/header/regex") provides a class that represents [regular expressions](https://en.wikipedia.org/wiki/Regular_expression "enwiki:Regular expression"), which are a kind of mini-language used to perform pattern matching within strings. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/text&action=edit&section=3 "Edit section: Formatting library \(since C++20\)")] [Formatting library](utility/format.html "cpp/utility/format") (since C++20)

The header [`<format>`](header/format.html "cpp/header/format") provides facilities for type-safe and extensible string formatting that is an alternative to the `printf` family of functions, and intended to complement the existing C++ I/O streams library. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/text&action=edit&section=4 "Edit section: Null-terminated sequence utilities")] Null-terminated sequence utilities

_Null-terminated character sequences_ (NTCTS) are sequences of characters that are terminated by a null character (the value after [value-initialization](language/value_initialization.html "cpp/language/value initialization")). 

The strings library provides functions to create, inspect, and modify such sequences: 

  * [null-terminated byte strings](string/byte.html "cpp/string/byte") (NTBS) helper functions (including support of [wide character types](string/wide.html "cpp/string/wide")), 
  * [null-terminated multibyte strings](string/multibyte.html "cpp/string/multibyte") (NTMBS) helper functions. 



### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/text&action=edit&section=5 "Edit section: Primitive numeric conversions \(since C++17\)")] Primitive numeric conversions (since C++17)

In addition to sophisticated locale-dependent parsers and formatters provided by the [C++ I/O](io.html "cpp/io") library, the [C I/O](io/c.html "cpp/io/c") library, [C++ string converters](string/basic_string.html#Numeric_conversions "cpp/string/basic string"), and [C string converters](string/byte.html#Conversions_to_numeric_formats "cpp/string/byte"), the header [`<charconv>`](header/charconv.html "cpp/header/charconv") provides light-weight, locale-independent, non-allocating, non-throwing parsers and formatters for arithmetic types. 

Defined in header `[<charconv>](header/charconv.html "cpp/header/charconv")`  
---  
[ to_chars](utility/to_chars.html "cpp/utility/to chars")(C++17) |  converts an integer or floating-point value to a character sequence   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/utility/dsc_to_chars&action=edit)  
[ to_chars_result](utility/to_chars_result.html "cpp/utility/to chars result")(C++17) |  the return type of [`std::to_chars`](utility/to_chars.html "cpp/utility/to chars")   
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/utility/dsc_to_chars_result&action=edit)  
[ from_chars](utility/from_chars.html "cpp/utility/from chars")(C++17) |  converts a character sequence to an integer or floating-point value   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/utility/dsc_from_chars&action=edit)  
[ from_chars_result](utility/from_chars_result.html "cpp/utility/from chars result")(C++17) |  the return type of [`std::from_chars`](utility/from_chars.html "cpp/utility/from chars")   
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/utility/dsc_from_chars_result&action=edit)  
[ chars_format](utility/chars_format.html "cpp/utility/chars format")(C++17) |  specifies formatting for std::to_chars and std::from_chars   
(enum) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/utility/dsc_chars_format&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/text&action=edit&section=6 "Edit section: Text encoding identifications \(since C++26\)")] Text encoding identifications (since C++26)

Defined in header `[<text_encoding>](header/text_encoding.html "cpp/header/text encoding")`  
---  
[ text_encoding](locale/text_encoding.html "cpp/text/text encoding")(C++26) |  describes an interface for accessing the [IANA Character Sets registry](https://www.iana.org/assignments/character-sets/character-sets.xhtml)   
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/text/dsc_text_encoding&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/text&action=edit&section=7 "Edit section: See also")] See also

[C++ documentation](string.html "cpp/string") for Strings library  
---
