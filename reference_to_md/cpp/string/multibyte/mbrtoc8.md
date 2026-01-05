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
**mbrtoc8**(C++20)  
[mbrtoc16](mbrtoc16.html "cpp/string/multibyte/mbrtoc16")(C++11)  
[mbrtoc32](mbrtoc32.html "cpp/string/multibyte/mbrtoc32")(C++11)  
[c8rtomb](c8rtomb.html "cpp/string/multibyte/c8rtomb")(C++20)  
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
[std::size_t](../../types/size_t.html) mbrtoc8( char8_t* pc8,  
const char* s,  
[std::size_t](../../types/size_t.html) n,  
[std::mbstate_t](mbstate_t.html)* ps ); |  |  (since C++20)  
| |   
  
Converts a narrow multibyte character to UTF-8 encoding. 

If s is not a null pointer, inspects at most n bytes of the multibyte character string, beginning with the byte pointed to by s to determine the number of bytes necessary to complete the next multibyte character (including any shift sequences). If the function determines that the next multibyte character in s is complete and valid, converts it to UTF-8 and stores the first UTF-8 code unit in *pc8 (if pc8 is not null). 

If UTF-8 encoding of the multibyte character in *s consists of more than one UTF-8 code unit, then after the first call to this function, *ps is updated in such a way that the next call to `mbrtoc8` will write out the additional UTF-8 code units, without considering *s. 

If s is a null pointer, the values of n and pc8 are ignored and the call is equivalent to std::mbrtoc8(nullptr, "", 1, ps). 

If UTF-8 code unit produced is u8'\0', the conversion state *ps represents the initial shift state. 

The multibyte encoding used by this function is specified by the currently active C locale. 

## Contents

  * [1 Parameters](mbrtoc8.html#Parameters)
  * [2 Return value](mbrtoc8.html#Return_value)
  * [3 Example](mbrtoc8.html#Example)
  * [4 See also](mbrtoc8.html#See_also)

  
---  
  
### Parameters

pc8  |  \-  |  pointer to the location where the resulting UTF-8 code units will be written   
---|---|---  
s  |  \-  |  pointer to the multibyte character string used as input   
n  |  \-  |  limit on the number of bytes in s that can be examined   
ps  |  \-  |  pointer to the conversion state object used when interpreting the multibyte string   
  
### Return value

The first of the following that applies: 

  * ​0​ if the character converted from s (and stored in *pc8 if non-null) was the null character. 
  * the number of bytes [1...n] of the multibyte character successfully converted from s. 
  * static_cast<[std::size_t](../../types/size_t.html)>(-3) if the next UTF-8 code unit from a character whose encoding consists of multiple code units has now been written to *pc8. No bytes are processed from the input in this case. 
  * static_cast<[std::size_t](../../types/size_t.html)>(-2) if the next n bytes constitute an incomplete, but so far valid, multibyte character. Nothing is written to *pc8. 
  * static_cast<[std::size_t](../../types/size_t.html)>(-1) if encoding error occurs. Nothing is written to *pc8, the value [EILSEQ](../../error/errno_macros.html "cpp/error/errno macros") is stored in [errno](../../error/errno.html "cpp/error/errno") and the value of *ps is unspecified. 



### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### See also

[ c8rtomb](c8rtomb.html "cpp/string/multibyte/c8rtomb")(C++20) |  converts UTF-8 string to narrow multibyte encoding   
(function)   
---|---  
[ mbrtoc16](mbrtoc16.html "cpp/string/multibyte/mbrtoc16")(C++11) |  converts a narrow multibyte character to UTF-16 encoding   
(function)   
[C documentation](../../../c/string/multibyte/mbrtoc8.html "c/string/multibyte/mbrtoc8") for mbrtoc8
