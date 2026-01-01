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
[Byte strings](byte.html "cpp/string/byte")  
**Multibyte strings**  
[Wide strings](wide.html "cpp/string/wide")  
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

**Null-terminated multibyte strings**

| [Functions](multibyte.html#Functions "cpp/string/multibyte")  
---  
[Wide/multibyte examination](multibyte.html#Multibyte.2Fwide_character_conversions "cpp/string/multibyte")  
| [mblen](multibyte/mblen.html "cpp/string/multibyte/mblen")  
---  
[mbrlen](multibyte/mbrlen.html "cpp/string/multibyte/mbrlen")  
  
| [mbsinit](multibyte/mbsinit.html "cpp/string/multibyte/mbsinit")  
---  
  
  
  
[Multibyte/wide conversions](multibyte.html#Multibyte.2Fwide_character_conversions "cpp/string/multibyte")  
| [mbtowc](multibyte/mbtowc.html "cpp/string/multibyte/mbtowc")  
---  
[mbstowcs](multibyte/mbstowcs.html "cpp/string/multibyte/mbstowcs")  
[btowc](multibyte/btowc.html "cpp/string/multibyte/btowc")  
[mbrtowc](multibyte/mbrtowc.html "cpp/string/multibyte/mbrtowc")  
[mbsrtowcs](multibyte/mbsrtowcs.html "cpp/string/multibyte/mbsrtowcs")` `  
[wctomb](multibyte/wctomb.html "cpp/string/multibyte/wctomb")  
[wcstombs](multibyte/wcstombs.html "cpp/string/multibyte/wcstombs")  
[wctob](multibyte/wctob.html "cpp/string/multibyte/wctob")  
  
| [wcrtomb](multibyte/wcrtomb.html "cpp/string/multibyte/wcrtomb")  
---  
[wcsrtombs](multibyte/wcsrtombs.html "cpp/string/multibyte/wcsrtombs")  
[mbrtoc8](multibyte/mbrtoc8.html "cpp/string/multibyte/mbrtoc8")(C++20)  
[mbrtoc16](multibyte/mbrtoc16.html "cpp/string/multibyte/mbrtoc16")(C++11)  
[mbrtoc32](multibyte/mbrtoc32.html "cpp/string/multibyte/mbrtoc32")(C++11)  
[c8rtomb](multibyte/c8rtomb.html "cpp/string/multibyte/c8rtomb")(C++20)  
[c16rtomb](multibyte/c16rtomb.html "cpp/string/multibyte/c16rtomb")(C++11)  
[c32rtomb](multibyte/c32rtomb.html "cpp/string/multibyte/c32rtomb")(C++11)  
  
[Types](multibyte.html#Types "cpp/string/multibyte")  
[mbstate_t](../../c/string/multibyte/mbstate_t.html "c/string/multibyte/mbstate t")  
[Macros](multibyte.html#Macros "cpp/string/multibyte")  
| [MB_LEN_MAX  
MB_CUR_MAX](multibyte.html#Macros "cpp/string/multibyte")  
---  
[__STDC_UTF_16__  
__STDC_UTF_32__](multibyte.html#Macros "cpp/string/multibyte")(C++11)(C++11)  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/multibyte/navbar_content&action=edit)

A null-terminated multibyte string (NTMBS), or "multibyte string", is a sequence of nonzero bytes followed by a byte with value zero (the terminating null character). 

Each character stored in the string may occupy more than one byte. The encoding used to represent characters in a multibyte character string is locale-specific: it may be UTF-8, GB18030, EUC-JP, Shift-JIS, etc. For example, the char array {'\xe4','\xbd','\xa0','\xe5','\xa5','\xbd','\0'} is an NTMBS holding the string "你好" in UTF-8 multibyte encoding: the first three bytes encode the character 你, the next three bytes encode the character 好. The same string encoded in GB18030 is the char array {'\xc4', '\xe3', '\xba', '\xc3', '\0'}, where each of the two characters is encoded as a two-byte sequence. 

In some multibyte encodings, any given multibyte character sequence may represent different characters depending on the previous byte sequences, known as "shift sequences". Such encodings are known as state-dependent: knowledge of the current shift state is required to interpret each character. An NTMBS is only valid if it begins and ends in the initial shift state: if a shift sequence was used, the corresponding unshift sequence has to be present before the terminating null character. Examples of such encodings are the 7-bit JIS, BOCU-1 and [SCSU](https://www.unicode.org/reports/tr6). 

A multibyte character string is layout-compatible with null-terminated byte string (NTBS), that is, can be stored, copied, and examined using the same facilities, except for calculating the number of characters. If the correct locale is in effect, I/O functions also handle multibyte strings. Multibyte strings can be converted to and from wide strings using the [std::codecvt](../locale/codecvt.html "cpp/locale/codecvt") member functions, [std::wstring_convert](../locale/wstring_convert.html "cpp/locale/wstring convert"), or the following locale-dependent conversion functions: 

## Contents

  * [1 Functions](multibyte.html#Functions)
    * [1.1 Multibyte/wide character conversions](multibyte.html#Multibyte.2Fwide_character_conversions)
  * [2 Types](multibyte.html#Types)
  * [3 Macros](multibyte.html#Macros)
  * [4 See also](multibyte.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string/multibyte&action=edit&section=1 "Edit section: Functions")] Functions

#####  Multibyte/wide character conversions   
  
---  
Defined in header `[<cstdlib>](../header/cstdlib.html "cpp/header/cstdlib")`  
[ mblen](multibyte/mblen.html "cpp/string/multibyte/mblen") |  returns the number of bytes in the next multibyte character   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/multibyte/dsc_mblen&action=edit)  
[ mbtowc](multibyte/mbtowc.html "cpp/string/multibyte/mbtowc") |  converts the next multibyte character to wide character   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/multibyte/dsc_mbtowc&action=edit)  
[ wctomb](multibyte/wctomb.html "cpp/string/multibyte/wctomb") |  converts a wide character to its multibyte representation   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/multibyte/dsc_wctomb&action=edit)  
[ mbstowcs](multibyte/mbstowcs.html "cpp/string/multibyte/mbstowcs") |  converts a narrow multibyte character string to wide string   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/multibyte/dsc_mbstowcs&action=edit)  
[ wcstombs](multibyte/wcstombs.html "cpp/string/multibyte/wcstombs") |  converts a wide string to narrow multibyte character string   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/multibyte/dsc_wcstombs&action=edit)  
Defined in header `[<cwchar>](../header/cwchar.html "cpp/header/cwchar")`  
[ mbrlen](multibyte/mbrlen.html "cpp/string/multibyte/mbrlen") |  returns the number of bytes in the next multibyte character, given state   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/multibyte/dsc_mbrlen&action=edit)  
[ mbsinit](multibyte/mbsinit.html "cpp/string/multibyte/mbsinit") |  checks if the [std::mbstate_t](multibyte/mbstate_t.html "cpp/string/multibyte/mbstate t") object represents initial shift state   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/multibyte/dsc_mbsinit&action=edit)  
[ btowc](multibyte/btowc.html "cpp/string/multibyte/btowc") |  widens a single-byte narrow character to wide character, if possible   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/multibyte/dsc_btowc&action=edit)  
[ wctob](multibyte/wctob.html "cpp/string/multibyte/wctob") |  narrows a wide character to a single-byte narrow character, if possible   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/multibyte/dsc_wctob&action=edit)  
[ mbrtowc](multibyte/mbrtowc.html "cpp/string/multibyte/mbrtowc") |  converts the next multibyte character to wide character, given state   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/multibyte/dsc_mbrtowc&action=edit)  
[ wcrtomb](multibyte/wcrtomb.html "cpp/string/multibyte/wcrtomb") |  converts a wide character to its multibyte representation, given state   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/multibyte/dsc_wcrtomb&action=edit)  
[ mbsrtowcs](multibyte/mbsrtowcs.html "cpp/string/multibyte/mbsrtowcs") |  converts a narrow multibyte character string to wide string, given state   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/multibyte/dsc_mbsrtowcs&action=edit)  
[ wcsrtombs](multibyte/wcsrtombs.html "cpp/string/multibyte/wcsrtombs") |  converts a wide string to narrow multibyte character string, given state   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/multibyte/dsc_wcsrtombs&action=edit)  
Defined in header `[<cuchar>](../header/cuchar.html "cpp/header/cuchar")`  
[ mbrtoc8](multibyte/mbrtoc8.html "cpp/string/multibyte/mbrtoc8")(C++20) |  converts a narrow multibyte character to UTF-8 encoding   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/multibyte/dsc_mbrtoc8&action=edit)  
[ c8rtomb](multibyte/c8rtomb.html "cpp/string/multibyte/c8rtomb")(C++20) |  converts UTF-8 string to narrow multibyte encoding   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/multibyte/dsc_c8rtomb&action=edit)  
[ mbrtoc16](multibyte/mbrtoc16.html "cpp/string/multibyte/mbrtoc16")(C++11) |  converts a narrow multibyte character to UTF-16 encoding   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/multibyte/dsc_mbrtoc16&action=edit)  
[ c16rtomb](multibyte/c16rtomb.html "cpp/string/multibyte/c16rtomb")(C++11) |  converts a UTF-16 character to narrow multibyte encoding   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/multibyte/dsc_c16rtomb&action=edit)  
[ mbrtoc32](multibyte/mbrtoc32.html "cpp/string/multibyte/mbrtoc32")(C++11) |  converts a narrow multibyte character to UTF-32 encoding   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/multibyte/dsc_mbrtoc32&action=edit)  
[ c32rtomb](multibyte/c32rtomb.html "cpp/string/multibyte/c32rtomb")(C++11) |  converts a UTF-32 character to narrow multibyte encoding   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/multibyte/dsc_c32rtomb&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string/multibyte&action=edit&section=2 "Edit section: Types")] Types

Defined in header `[<cwchar>](../header/cwchar.html "cpp/header/cwchar")`  
---  
[ mbstate_t](multibyte/mbstate_t.html "cpp/string/multibyte/mbstate t") |  conversion state information necessary to iterate multibyte character strings   
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/multibyte/dsc_mbstate_t&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string/multibyte&action=edit&section=3 "Edit section: Macros")] Macros

Defined in header `[<climits>](../header/climits.html "cpp/header/climits")`  
---  
MB_LEN_MAX |  maximum number of bytes in a multibyte character   
(macro constant) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/multibyte/dsc_MB_LEN_MAX&action=edit)  
Defined in header `[<cstdlib>](../header/cstdlib.html "cpp/header/cstdlib")`  
MB_CUR_MAX |  maximum number of bytes in a multibyte character in the current C locale  
(macro variable)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/multibyte/dsc_MB_CUR_MAX&action=edit)  
Defined in header `[<cuchar>](../header/cuchar.html "cpp/header/cuchar")`  
__STDC_UTF_16__(C++11) |  indicates that UTF-16 encoding is used by mbrtoc16 and c16rtomb   
(macro constant)  
__STDC_UTF_32__(C++11) |  indicates that UTF-32 encoding is used by mbrtoc32 and c32rtomb   
(macro constant)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string/multibyte&action=edit&section=4 "Edit section: See also")] See also

[C documentation](../../c/string/multibyte.html "c/string/multibyte") for Null-terminated multibyte strings  
---
