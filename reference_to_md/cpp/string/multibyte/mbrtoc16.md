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
**mbrtoc16**(C++11)  
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
[std::size_t](../../types/size_t.html) mbrtoc16( char16_t* pc16, const char* s,  
[std::size_t](../../types/size_t.html) n, [std::mbstate_t](mbstate_t.html)* ps ); |  |  (since C++11)  
| |   
  
Converts a narrow multibyte character to UTF-16 character representation. 

If s is not a null pointer, inspects at most n bytes of the multibyte character string, beginning with the byte pointed to by s to determine the number of bytes necessary to complete the next multibyte character (including any shift sequences). If the function determines that the next multibyte character in s is complete and valid, converts it to the corresponding 16-bit character and stores it in *pc16 (if pc16 is not null). 

If the multibyte character in *s corresponds to a multi-char16_t sequence (e.g., a surrogate pair in UTF-16), then after the first call to this function, *ps is updated in such a way that the next call to `mbrtoc16` will write out the additional char16_t, without considering *s. 

If s is a null pointer, the values of n and pc16 are ignored and the call is equivalent to std::mbrtoc16(nullptr, "", 1, ps). 

If the wide character produced is the null character, the conversion state *ps represents the initial shift state. 

The multibyte encoding used by this function is specified by the currently active C locale. 

## Contents

  * [1 Parameters](mbrtoc16.html#Parameters)
  * [2 Return value](mbrtoc16.html#Return_value)
  * [3 Example](mbrtoc16.html#Example)
  * [4 See also](mbrtoc16.html#See_also)

  
---  
  
### Parameters

pc16  |  \-  |  pointer to the location where the resulting 16-bit character will be written   
---|---|---  
s  |  \-  |  pointer to the multibyte character string used as input   
n  |  \-  |  limit on the number of bytes in s that can be examined   
ps  |  \-  |  pointer to the conversion state object used when interpreting the multibyte string   
  
### Return value

The first of the following that applies: 

  * ​0​ if the character converted from s (and stored in *pc16 if non-null) was the null character. 
  * the number of bytes `[`1`, `n`]` of the multibyte character successfully converted from s. 
  * -3 if the next char16_t from a multi-char16_t character (e.g., a surrogate pair) has now been written to *pc16. No bytes are processed from the input in this case. 
  * -2 if the next n bytes constitute an incomplete, but so far valid, multibyte character. Nothing is written to *pc16. 
  * -1 if encoding error occurs. Nothing is written to *pc16, the value [EILSEQ](../../error/errno_macros.html) is stored in [errno](../../error/errno.html "cpp/error/errno") and the value of *ps is unspecified. 



### Example

Run this code
    
    
    #include <clocale>
    #include <cstring>
    #include <cuchar>
    #include <cwchar>
    #include <iomanip>
    #include <iostream>
     
    int main()
    {
        [std::setlocale](../../locale/setlocale.html)([LC_ALL](../../locale/LC_categories.html), "en_US.utf8");
     
        [std::string](../basic_string.html) str{"z\u00df\u6c34\U0001F34C"}; // or u8"zß水🍌"
     
        [std::cout](../../io/cout.html) << "Processing " << str.size() << " bytes: [" << [std::uppercase](../../io/manip/uppercase.html)
                  << [std::setfill](../../io/manip/setfill.html)('0') << [std::hex](../../io/manip/hex.html);
        for (int n{}; unsigned char c : str)
            [std::cout](../../io/cout.html) << (n++ ? " " : "") << +c;
        [std::cout](../../io/cout.html) << "]\n";
     
        [std::mbstate_t](mbstate_t.html) state{}; // zero-initialized to initial state
        char16_t c16{};
        const char* ptr{&str[0]}, *end{&str[0] + str.size()};
     
        while ([std::size_t](../../types/size_t.html) rc{std::mbrtoc16(&c16, ptr, end - ptr + 1, &state)})
        {
            [std::cout](../../io/cout.html) << "Next UTF-16 char: " << [std::setw](../../io/manip/setw.html)(4)
                      << static_cast<unsigned short>(c16) << " obtained from ";
            if (rc == [std::size_t](../../types/size_t.html)(-3))
                [std::cout](../../io/cout.html) << "earlier surrogate pair\n";
            else if (rc == [std::size_t](../../types/size_t.html)(-2))
                continue;
            else if (rc == [std::size_t](../../types/size_t.html)(-1))
                break;
            else
            {
                [std::cout](../../io/cout.html) << [std::dec](../../io/manip/hex.html) << rc << " bytes [";
                for ([std::size_t](../../types/size_t.html) n{}; n != rc; ++n)
                    [std::cout](../../io/cout.html) << (n ? " " : "") << [std::hex](../../io/manip/hex.html)
                              << +static_cast<unsigned char>(ptr[n]);
                [std::cout](../../io/cout.html) << "]\n";
                ptr += rc;
            }
        }
    }

Output: 
    
    
    Processing 10 bytes: [7A C3 9F E6 B0 B4 F0 9F 8D 8C]
    Next UTF-16 char: 007A obtained from 1 bytes [7A]
    Next UTF-16 char: 00DF obtained from 2 bytes [C3 9F]
    Next UTF-16 char: 6C34 obtained from 3 bytes [E6 B0 B4]
    Next UTF-16 char: D83C obtained from 4 bytes [F0 9F 8D 8C]
    Next UTF-16 char: DF4C obtained from earlier surrogate pair

### See also

[ c16rtomb](c16rtomb.html "cpp/string/multibyte/c16rtomb")(C++11) |  converts a UTF-16 character to narrow multibyte encoding   
(function)   
---|---  
[ mbrtoc8](mbrtoc8.html "cpp/string/multibyte/mbrtoc8")(C++20) |  converts a narrow multibyte character to UTF-8 encoding   
(function)   
[ do_in](../../locale/codecvt/in.html "cpp/locale/codecvt/in")[virtual] |  converts a string from `ExternT` to `InternT`, such as when reading from file   
(virtual protected member function of `std::codecvt<InternT,ExternT,StateT>`)   
[C documentation](../../../c/string/multibyte/mbrtoc16.html "c/string/multibyte/mbrtoc16") for mbrtoc16
