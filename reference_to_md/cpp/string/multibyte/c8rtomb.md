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
[Byte strings](../byte.html "cpp/string/byte")  
[Multibyte strings](../multibyte.html "cpp/string/multibyte")  
[Wide strings](../wide.html "cpp/string/wide")  
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
  


[Null-terminated multibyte strings](../multibyte.html "cpp/string/multibyte")

| [Functions](../multibyte.html#Functions "cpp/string/multibyte")  
---  
[Wide/multibyte examination](../multibyte.html#Multibyte.2Fwide_character_conversions "cpp/string/multibyte")  
| [mblen](mblen.html "cpp/string/multibyte/mblen")  
---  
[mbrlen](mbrlen.html "cpp/string/multibyte/mbrlen")  
  
| [mbsinit](mbsinit.html "cpp/string/multibyte/mbsinit")  
---  
  
  
  
[Multibyte/wide conversions](../multibyte.html#Multibyte.2Fwide_character_conversions "cpp/string/multibyte")  
| [mbtowc](mbtowc.html "cpp/string/multibyte/mbtowc")  
---  
[mbstowcs](mbstowcs.html "cpp/string/multibyte/mbstowcs")  
[btowc](btowc.html "cpp/string/multibyte/btowc")  
[mbrtowc](mbrtowc.html "cpp/string/multibyte/mbrtowc")  
[mbsrtowcs](mbsrtowcs.html "cpp/string/multibyte/mbsrtowcs")` `  
[wctomb](wctomb.html "cpp/string/multibyte/wctomb")  
[wcstombs](wcstombs.html "cpp/string/multibyte/wcstombs")  
[wctob](wctob.html "cpp/string/multibyte/wctob")  
  
| [wcrtomb](wcrtomb.html "cpp/string/multibyte/wcrtomb")  
---  
[wcsrtombs](wcsrtombs.html "cpp/string/multibyte/wcsrtombs")  
[mbrtoc8](mbrtoc8.html "cpp/string/multibyte/mbrtoc8")(C++20)  
[mbrtoc16](mbrtoc16.html "cpp/string/multibyte/mbrtoc16")(C++11)  
[mbrtoc32](mbrtoc32.html "cpp/string/multibyte/mbrtoc32")(C++11)  
**c8rtomb**(C++20)  
[c16rtomb](c16rtomb.html "cpp/string/multibyte/c16rtomb")(C++11)  
[c32rtomb](c32rtomb.html "cpp/string/multibyte/c32rtomb")(C++11)  
  
[Types](../multibyte.html#Types "cpp/string/multibyte")  
[mbstate_t](../../../c/string/multibyte/mbstate_t.html "c/string/multibyte/mbstate t")  
[Macros](../multibyte.html#Macros "cpp/string/multibyte")  
| [MB_LEN_MAX  
MB_CUR_MAX](../multibyte.html#Macros "cpp/string/multibyte")  
---  
[__STDC_UTF_16__  
__STDC_UTF_32__](../multibyte.html#Macros "cpp/string/multibyte")(C++11)(C++11)  
  


Defined in header `[<cuchar>](../../header/cuchar.html "cpp/header/cuchar")` |  |   
---|---|---  
[std::size_t](../../types/size_t.html) c8rtomb( char* s, char8_t c8, [std::mbstate_t](mbstate_t.html)* ps ); |  |  (since C++20)  
| |   
  
Converts a single code point from UTF-8 to a narrow multibyte character representation. 

If s is not a null pointer and c8 is the last code unit in a valid UTF-8 encoding of a code point, the function determines the number of bytes necessary to store the multibyte character representation of that code point (including any shift sequences, and taking into account the current multibyte conversion state *ps), and stores the multibyte character representation in the character array whose first element is pointed to by s, updating *ps as necessary. At most MB_CUR_MAX bytes can be written by this function. 

If c8 is not the final UTF-8 code unit in a representation of a code point, the function does not write to the array pointed to by s, only *ps is updated. 

If s is a null pointer, the call is equivalent to std::c8rtomb(buf, u8'\0', ps) for some internal buffer `buf`. 

If c8 is the null character u8'\0', a null byte is stored, preceded by any shift sequence necessary to restore the initial shift state and the conversion state parameter *ps is updated to represent the initial shift state. 

The multibyte encoding used by this function is specified by the currently active C locale. 

## Contents

  * [1 Parameters](c8rtomb.html#Parameters)
  * [2 Return value](c8rtomb.html#Return_value)
  * [3 Notes](c8rtomb.html#Notes)
  * [4 Example](c8rtomb.html#Example)
  * [5 See also](c8rtomb.html#See_also)

  
---  
  
### Parameters

s  |  \-  |  pointer to narrow character array where the multibyte character will be stored   
---|---|---  
c8  |  \-  |  the UTF-8 code unit to convert   
ps  |  \-  |  pointer to the conversion state object used when interpreting the multibyte string   
  
### Return value

The number of bytes stored in the array object (including any shift sequences). This may be zero when c8 is not the final code unit in the UTF-8 representation of a code point. 

If c8 is invalid (does not contribute to a sequence of char8_t corresponding to a valid multibyte character), the value of the macro [EILSEQ](../../error/errno_macros.html "cpp/error/errno macros") is stored in [errno](../../error/errno.html "cpp/error/errno"), static_cast<[std::size_t](../../types/size_t.html)>(-1) is returned, and the conversion state is unspecified. 

### Notes

Calls to `c8rtomb` with a null pointer argument for s may introduce a data race with other calls to `c8rtomb` with a null pointer argument for s. 

### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### See also

[ mbrtoc8](mbrtoc8.html "cpp/string/multibyte/mbrtoc8")(C++20) |  converts a narrow multibyte character to UTF-8 encoding   
(function)   
---|---  
[ c16rtomb](c16rtomb.html "cpp/string/multibyte/c16rtomb")(C++11) |  converts a UTF-16 character to narrow multibyte encoding   
(function)   
[C documentation](../../../c/string/multibyte/c8rtomb.html "c/string/multibyte/c8rtomb") for c8rtomb
