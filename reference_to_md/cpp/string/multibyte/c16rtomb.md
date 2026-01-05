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
[c8rtomb](c8rtomb.html "cpp/string/multibyte/c8rtomb")(C++20)  
**c16rtomb**(C++11)  
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
[std::size_t](../../types/size_t.html) c16rtomb( char* s, char16_t c16, [std::mbstate_t](mbstate_t.html)* ps ); |  |  (since C++11)  
| |   
  
Converts a single code point from variable-length 16-bit character representation (typically, UTF-16) to a narrow multibyte character representation. 

If s is not a null pointer and c16 is the last 16-bit code unit in a valid variable-length encoding of a code point, the function determines the number of bytes necessary to store the multibyte character representation of that code point (including any shift sequences, and taking into account the current multibyte conversion state *ps), and stores the multibyte character representation in the character array whose first element is pointed to by s, updating *ps as necessary. At most MB_CUR_MAX bytes can be written by this function. 

If s is a null pointer, the call is equivalent to std::c16rtomb(buf, u'\0', ps) for some internal buffer `buf`. 

If c16 is not the final code unit in a 16-bit representation of a wide character, it does not write to the array pointed to by s, only *ps is updated. 

If c16 is the null wide character u'\0', a null byte is stored, preceded by any shift sequence necessary to restore the initial shift state and the conversion state parameter *ps is updated to represent the initial shift state. 

The multibyte encoding used by this function is specified by the currently active C locale. 

## Contents

  * [1 Parameters](c16rtomb.html#Parameters)
  * [2 Return value](c16rtomb.html#Return_value)
  * [3 Notes](c16rtomb.html#Notes)
  * [4 Example](c16rtomb.html#Example)
  * [5 See also](c16rtomb.html#See_also)

  
---  
  
### Parameters

s  |  \-  |  pointer to narrow character array where the multibyte character will be stored   
---|---|---  
c16  |  \-  |  the 16-bit character to convert   
ps  |  \-  |  pointer to the conversion state object used when interpreting the multibyte string   
  
### Return value

On success, returns the number of bytes (including any shift sequences) written to the character array whose first element is pointed to by s. This value may be ​0​, e.g. when processing the first char16_t in a surrogate pair. 

On failure (if c16 is not a valid 16-bit character), returns -1, stores [EILSEQ](../../error/errno_macros.html "cpp/error/errno macros") in [errno](../../error/errno.html "cpp/error/errno"), and leaves *ps in unspecified state. 

### Notes

The C++ standard defers to the C standard for the semantics of this function. In C11 as published, unlike [std::mbrtoc16](mbrtoc16.html "cpp/string/multibyte/mbrtoc16"), which converts variable-width multibyte (such as UTF-8) to variable-width 16-bit (such as UTF-16) encoding, this function can only convert single-unit 16-bit encoding, meaning it cannot convert UTF-16 to UTF-8 despite that being the original intent of this function. This was corrected by the post-C11 defect report [DR488](https://open-std.org/JTC1/SC22/WG14/www/docs/n2059.htm#dr_488). 

### Example

The example assumes that the fix for the [defect report 488](https://open-std.org/JTC1/SC22/WG14/www/docs/n2059.htm#dr_488) is applied.

Run this code
    
    
    #include <climits>
    #include <clocale>
    #include <cuchar>
    #include <iomanip>
    #include <iostream>
    #include <string_view>
     
    int main()
    {
        [std::setlocale](../../locale/setlocale.html)([LC_ALL](../../locale/LC_categories.html), "en_US.utf8");
        [std::u16string_view](../basic_string_view.html) strv = u"zß水🍌"; // or z\u00df\u6c34\U0001F34C
        [std::cout](../../io/cout.html) << "Processing " << strv.size() << " UTF-16 code units: [ ";
        for (char16_t c : strv)
            [std::cout](../../io/cout.html) << [std::showbase](../../io/manip/showbase.html) << [std::hex](../../io/manip/hex.html) << static_cast<int>(c) << ' ';
        [std::cout](../../io/cout.html) << "]\n";
     
        [std::mbstate_t](mbstate_t.html) state{};
        char out[[MB_LEN_MAX](../../types/climits.html)]{};
        for (char16_t c : strv)
        {
            [std::size_t](../../types/size_t.html) rc = std::c16rtomb(out, c, &state);
            [std::cout](../../io/cout.html) << static_cast<int>(c) << " converted to [ ";
            if (rc != ([std::size_t](../../types/size_t.html)) - 1)
                for (unsigned char c8 : [std::string_view](../basic_string_view.html){out, rc})
                    [std::cout](../../io/cout.html) << +c8 << ' ';
            [std::cout](../../io/cout.html) << "]\n";
        }
    }

Output: 
    
    
    Processing 5 UTF-16 code units: [ 0x7a 0xdf 0x6c34 0xd83c 0xdf4c ]
    0x7a converted to [ 0x7a ]
    0xdf converted to [ 0xc3 0x9f ]
    0x6c34 converted to [ 0xe6 0xb0 0xb4 ]
    0xd83c converted to [ ]
    0xdf4c converted to [ 0xf0 0x9f 0x8d 0x8c ]

### See also

[ mbrtoc16](mbrtoc16.html "cpp/string/multibyte/mbrtoc16")(C++11) |  converts a narrow multibyte character to UTF-16 encoding   
(function)   
---|---  
[ c8rtomb](c8rtomb.html "cpp/string/multibyte/c8rtomb")(C++20) |  converts UTF-8 string to narrow multibyte encoding   
(function)   
[ do_out](../../locale/codecvt/out.html "cpp/locale/codecvt/out")[virtual] |  converts a string from `InternT` to `ExternT`, such as when writing to file   
(virtual protected member function of `std::codecvt<InternT,ExternT,StateT>`)   
[C documentation](../../../c/string/multibyte/c16rtomb.html "c/string/multibyte/c16rtomb") for c16rtomb
