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
  
| **mbsinit**  
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
  


Defined in header `[<cwchar>](../../header/cwchar.html "cpp/header/cwchar")` |  |   
---|---|---  
int mbsinit( const [std::mbstate_t](mbstate_t.html)* ps); |  |   
| |   
  
If ps is not a null pointer, the `mbsinit` function determines whether the pointed-to [std::mbstate_t](mbstate_t.html "cpp/string/multibyte/mbstate t") object describes the initial conversion state. 

## Contents

  * [1 Notes](mbsinit.html#Notes)
  * [2 Parameters](mbsinit.html#Parameters)
  * [3 Return value](mbsinit.html#Return_value)
  * [4 Example](mbsinit.html#Example)
  * [5 See also](mbsinit.html#See_also)

  
---  
  
### Notes

Although a zero-initialized [std::mbstate_t](mbstate_t.html "cpp/string/multibyte/mbstate t") always represents the initial conversion state, there may be other values of [std::mbstate_t](mbstate_t.html "cpp/string/multibyte/mbstate t") that also represent the initial conversion state. 

### Parameters

ps  |  \-  |  pointer to the [std::mbstate_t](mbstate_t.html "cpp/string/multibyte/mbstate t") object to examine   
---|---|---  
  
### Return value

​0​ if ps is not a null pointer and does not represent the initial conversion state, nonzero value otherwise. 

### Example

Run this code
    
    
    #include <clocale>
    #include <cwchar>
    #include <iostream>
    #include <string>
     
    int main()
    {
        // allow mbrlen() to work with UTF-8 multibyte encoding
        [std::setlocale](../../locale/setlocale.html)([LC_ALL](../../locale/LC_categories.html), "en_US.utf8");
        // UTF-8 narrow multibyte encoding
        [std::string](../basic_string.html) str = "水"; // or u8"\u6c34" or "\xe6\xb0\xb4"
        [std::mbstate_t](mbstate_t.html) mb = [std::mbstate_t](mbstate_t.html)();
        (void)[std::mbrlen](mbrlen.html)(&str[0], 1, &mb);
        if (!std::mbsinit(&mb))
            [std::cout](../../io/cout.html) << "After processing the first 1 byte of " << str
                      << " the conversion state is not initial\n";
     
        (void)[std::mbrlen](mbrlen.html)(&str[1], str.size() - 1, &mb);
        if (std::mbsinit(&mb))
            [std::cout](../../io/cout.html) << "After processing the remaining 2 bytes of " << str
                      << ", the conversion state is initial conversion state\n";
    }

Output: 
    
    
    After processing the first 1 byte of 水 the conversion state is not initial
    After processing the remaining 2 bytes of 水, the conversion state is initial conversion state

### See also

[ mbstate_t](mbstate_t.html "cpp/string/multibyte/mbstate t") |  conversion state information necessary to iterate multibyte character strings   
(class)   
---|---  
[C documentation](../../../c/string/multibyte/mbsinit.html "c/string/multibyte/mbsinit") for mbsinit
