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

[`std::text_encoding`](../../locale/text_encoding.html "cpp/text/text encoding")

[Member functions](../../locale/text_encoding.html#Member_functions "cpp/text/text encoding")  
---  
[Creation](../../locale/text_encoding.html#Creation "cpp/text/text encoding")  
[text_encoding::text_encoding](text_encoding.html "cpp/text/text encoding/text encoding")  
[text_encoding::literal](literal.html "cpp/text/text encoding/literal")  
**text_encoding::environment**  
[Observers](../../locale/text_encoding.html#Observers "cpp/text/text encoding")  
[text_encoding::mib](mib.html "cpp/text/text encoding/mib")  
[text_encoding::name](name.html "cpp/text/text encoding/name")  
[text_encoding::aliases](aliases.html "cpp/text/text encoding/aliases")  
[text_encoding::environment_is](environment_is.html "cpp/text/text encoding/environment is")  
[Helpers](../../locale/text_encoding.html#Helpers "cpp/text/text encoding")  
[text_encoding::_comp-name_](comp-name.html "cpp/text/text encoding/comp-name")  
[Non-member functions](../../locale/text_encoding.html#Non-member_functions "cpp/text/text encoding")  
[operator==(std::text_encoding)](operator_eq.html "cpp/text/text encoding/operator eq")  
[Member types](../../locale/text_encoding.html#Member_types "cpp/text/text encoding")  
[text_encoding::id](id.html "cpp/text/text encoding/id")  
[text_encoding::aliases_view](aliases_view.html "cpp/text/text encoding/aliases view")  
[Helper classes](../../locale/text_encoding.html#Helper_classes "cpp/text/text encoding")  
[hash<std::text_encoding>](hash.html "cpp/text/text encoding/hash")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/text/text_encoding/navbar_content&action=edit)

static text_encoding environment(); |  |  (since C++26)  
---|---|---  
| |   
  
Constructs a new `text_encoding` object representing the environment encoding that refers to the implementation-defined character encoding scheme of the execution environment. The execution environment at runtime is the [environment](../../language/main_function.html "cpp/language/main function") in which the program is run. 

The environment encoding in the execution environment is distinct from the encoding of [execution character set](../../language/charset.html#Execution_character_set "cpp/language/charset") which is locale-specific. In other words, the environment encoding remains locale-independent, that is, the value returned by environment() is not affected by calls to the functions (e.g. [std::setlocale](../../locale/setlocale.html "cpp/locale/setlocale") and POSIX function [`setenv()`](https://pubs.opengroup.org/onlinepubs/9699919799/functions/setenv.html)) which can modify the environment. 

This function is deleted unless the [CHAR_BIT](../../types/climits.html) is 8. 

## Contents

  * [1 Parameters](environment.html#Parameters)
  * [2 Return value](environment.html#Return_value)
  * [3 Notes](environment.html#Notes)
  * [4 Example](environment.html#Example)
  * [5 See also](environment.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/text/text_encoding/environment&action=edit&section=1 "Edit section: Parameters")] Parameters

(none) 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/text/text_encoding/environment&action=edit&section=2 "Edit section: Return value")] Return value

The object holding the representation of the environment character encoding. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/text/text_encoding/environment&action=edit&section=3 "Edit section: Notes")] Notes

The environment encoding may differ from the global locale-associated encoding that is accessible via [std::locale](../../locale/locale.html)().encoding(). 

On Windows platforms, the environment encoding can be determined by [`GetACP()`](https://learn.microsoft.com/en-us/windows/win32/api/winnls/nf-winnls-getacp) and then mapped to MIBenum values. 

On POSIX platforms, the environment encoding is associated with the POSIX locale "" which can be implemented to correspond to a value of [`nl_langinfo_l()`](https://pubs.opengroup.org/onlinepubs/9699919799/functions/nl_langinfo.html) when the environment locale "" is set before the [global C++ locale](../../locale/locale/global.html "cpp/locale/locale/global") is set to "C" at program startup. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/text/text_encoding/environment&action=edit&section=4 "Edit section: Example")] Example

| This section is incomplete  
Reason: no example   
---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/text/text_encoding/environment&action=edit&section=5 "Edit section: See also")] See also

[ encoding](../../locale/locale/encoding.html "cpp/locale/locale/encoding")(C++26) |  returns the character encoding scheme associated with the locale   
(public member function of `std::locale`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/locale/locale/dsc_encoding&action=edit)  
---|---
