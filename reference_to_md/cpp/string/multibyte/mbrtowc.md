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
**mbrtowc**  
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
[std::size_t](../../types/size_t.html) mbrtowc( wchar_t* pwc,  
const char* s,  
[std::size_t](../../types/size_t.html) n,  
[std::mbstate_t](mbstate_t.html)* ps ); |  |   
| |   
  
Converts a narrow multibyte character to a wide character. 

If s is not a null pointer, inspects at most n bytes of the multibyte character string, beginning with the byte pointed to by s to determine the number of bytes necessary to complete the next multibyte character (including any shift sequences). If the function determines that the next multibyte character in s is complete and valid, converts it to the corresponding wide character and stores it in *pwc (if pwc is not null). 

If s is a null pointer, the values of n and pwc are ignored and call is equivalent to std::mbrtowc(nullptr, "", 1, ps). 

If the wide character produced is the null character, the conversion state stored in *ps is the initial shift state. 

## Contents

  * [1 Parameters](mbrtowc.html#Parameters)
  * [2 Return value](mbrtowc.html#Return_value)
  * [3 Example](mbrtowc.html#Example)
  * [4 See also](mbrtowc.html#See_also)

  
---  
  
### Parameters

pwc  |  \-  |  pointer to the location where the resulting wide character will be written   
---|---|---  
s  |  \-  |  pointer to the multibyte character string used as input   
n  |  \-  |  limit on the number of bytes in s that can be examined   
ps  |  \-  |  pointer to the conversion state used when interpreting the multibyte string   
  
### Return value

The first of the following that applies: 

  * ​0​ if the character converted from s (and stored in pwc if non-null) was the null character. 
  * the number of bytes [1...n] of the multibyte character successfully converted from s. 
  * static_cast<[std::size_t](../../types/size_t.html)>(-2) if the next n bytes constitute an incomplete, but so far valid, multibyte character. Nothing is written to *pwc. 
  * static_cast<[std::size_t](../../types/size_t.html)>(-1) if encoding error occurs. Nothing is written to *pwc, the value [EILSEQ](../../error/errno_macros.html "cpp/error/errno macros") is stored in [errno](../../error/errno.html "cpp/error/errno") and the value of *ps is left unspecified. 



### Example

Run this code
    
    
    #include <clocale>
    #include <cstring>
    #include <cwchar>
    #include <iostream>
     
    void print_mb(const char* ptr)
    {
        [std::mbstate_t](mbstate_t.html) state = [std::mbstate_t](mbstate_t.html)(); // initial state
        const char* end = ptr + [std::strlen](../byte/strlen.html)(ptr);
        int len;
        wchar_t wc;
        while ((len = std::mbrtowc(&wc, ptr, end-ptr, &state)) > 0)
        {
            [std::wcout](../../io/cout.html) << "Next " << len << " bytes are the character " << wc << '\n';
            ptr += len;
        }
    }
     
    int main()
    {
        [std::setlocale](../../locale/setlocale.html)([LC_ALL](../../locale/LC_categories.html), "en_US.utf8");
        // UTF-8 narrow multibyte encoding
        const char* str = "z\u00df\u6c34\U0001d10b"; // or u8"zß水𝄋"
                          // or "\x7a\xc3\x9f\xe6\xb0\xb4\xf0\x9d\x84\x8b";
        print_mb(str);
    }

Output: 
    
    
    Next 1 bytes are the character z
    Next 2 bytes are the character ß
    Next 3 bytes are the character 水
    Next 4 bytes are the character 𝄋

### See also

[ mbtowc](mbtowc.html "cpp/string/multibyte/mbtowc") |  converts the next multibyte character to wide character   
(function)   
---|---  
[ wcrtomb](wcrtomb.html "cpp/string/multibyte/wcrtomb") |  converts a wide character to its multibyte representation, given state   
(function)   
[ do_in](../../locale/codecvt/in.html "cpp/locale/codecvt/in")[virtual] |  converts a string from `ExternT` to `InternT`, such as when reading from file   
(virtual protected member function of `std::codecvt<InternT,ExternT,StateT>`)   
[C documentation](../../../c/string/multibyte/mbrtowc.html "c/string/multibyte/mbrtowc") for mbrtowc
