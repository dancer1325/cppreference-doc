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
| **mbtowc**  
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
  


Defined in header `[<cstdlib>](../../header/cstdlib.html "cpp/header/cstdlib")` |  |   
---|---|---  
int mbtowc( wchar_t* pwc, const char* s, [std::size_t](../../types/size_t.html) n ); |  |   
| |   
  
Converts a multibyte character whose first byte is pointed to by s to a wide character, written to *pwc if pwc is not null. 

If s is a null pointer, resets the global conversion state and determines whether shift sequences are used. 

## Contents

  * [1 Parameters](mbtowc.html#Parameters)
  * [2 Return value](mbtowc.html#Return_value)
  * [3 Notes](mbtowc.html#Notes)
  * [4 Example](mbtowc.html#Example)
  * [5 See also](mbtowc.html#See_also)

  
---  
  
### Parameters

s  |  \-  |  pointer to the multibyte character   
---|---|---  
n  |  \-  |  limit on the number of bytes in s that can be examined   
pwc  |  \-  |  pointer to the wide character for output   
  
### Return value

If s is not a null pointer, returns the number of bytes that are contained in the multibyte character or -1 if the first bytes pointed to by s do not form a valid multibyte character or ​0​ if s is pointing at the null character '\0'. 

If s is a null pointer, resets its internal conversion state to represent the initial shift state and returns ​0​ if the current multibyte encoding is not state-dependent (does not use shift sequences) or a non-zero value if the current multibyte encoding is state-dependent (uses shift sequences). 

### Notes

Each call to `mbtowc` updates the internal global conversion state (a static object of type [std::mbstate_t](mbstate_t.html "cpp/string/multibyte/mbstate t"), only known to this function). If the multibyte encoding uses shift states, care must be taken to avoid backtracking or multiple scans. In any case, multiple threads should not call `mbtowc` without synchronization: [std::mbrtowc](mbrtowc.html "cpp/string/multibyte/mbrtowc") may be used instead. 

### Example

Run this code
    
    
    #include <clocale>
    #include <cstdlib>
    #include <cstring>
    #include <iostream>
     
    int print_mb(const char* ptr)
    {
        std::mbtowc(nullptr, 0, 0); // reset the conversion state
        const char* end = ptr + [std::strlen](../byte/strlen.html)(ptr);
        int ret{};
        for (wchar_t wc; (ret = std::mbtowc(&wc, ptr, end - ptr)) > 0; ptr += ret)
            [std::wcout](../../io/cout.html) << wc;
        [std::wcout](../../io/cout.html) << '\n';
        return ret;
    }
     
    int main()
    {
        [std::setlocale](../../locale/setlocale.html)([LC_ALL](../../locale/LC_categories.html), "en_US.utf8");
        // UTF-8 narrow multibyte encoding
        const char* str = "z\u00df\u6c34\U0001d10b"; // or "zß水𝄋"
                          // or "\x7a\xc3\x9f\xe6\xb0\xb4\xf0\x9d\x84\x8b";
        print_mb(str);
    }

Output: 
    
    
    zß水𝄋

### See also

[ mbrtowc](mbrtowc.html "cpp/string/multibyte/mbrtowc") |  converts the next multibyte character to wide character, given state   
(function)   
---|---  
[ mblen](mblen.html "cpp/string/multibyte/mblen") |  returns the number of bytes in the next multibyte character   
(function)   
[ do_in](../../locale/codecvt/in.html "cpp/locale/codecvt/in")[virtual] |  converts a string from `ExternT` to `InternT`, such as when reading from file   
(virtual protected member function of `std::codecvt<InternT,ExternT,StateT>`)   
[C documentation](../../../c/string/multibyte/mbtowc.html "c/string/multibyte/mbtowc") for mbtowc
