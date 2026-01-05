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
**wctomb**  
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
int wctomb( char* s, wchar_t wc ); |  |   
| |   
  
Converts a wide character wc to multibyte encoding and stores it (including any shift sequences) in the char array whose first element is pointed to by s. No more than MB_CUR_MAX characters are stored. The conversion is affected by the current locale's LC_CTYPE category. 

If wc is the null character, the null byte is written to s, preceded by any shift sequences necessary to restore the initial shift state. 

If s is a null pointer, resets the global conversion state and determines whether shift sequences are used. 

## Contents

  * [1 Parameters](wctomb.html#Parameters)
  * [2 Return value](wctomb.html#Return_value)
  * [3 Notes](wctomb.html#Notes)
  * [4 Example](wctomb.html#Example)
  * [5 See also](wctomb.html#See_also)

  
---  
  
### Parameters

s  |  \-  |  pointer to the character array for output   
---|---|---  
wc  |  \-  |  wide character to convert   
  
### Return value

If s is not a null pointer, returns the number of bytes that are contained in the multibyte representation of wc or -1 if wc is not a valid character. 

If s is a null pointer, resets its internal conversion state to represent the initial shift state and returns ​0​ if the current multibyte encoding is not state-dependent (does not use shift sequences) or a non-zero value if the current multibyte encoding is state-dependent (uses shift sequences). 

### Notes

Each call to `wctomb` updates the internal global conversion state (a static object of type [std::mbstate_t](mbstate_t.html "cpp/string/multibyte/mbstate t"), only known to this function). If the multibyte encoding uses shift states, this function is not reentrant. In any case, multiple threads should not call `wctomb` without synchronization: [std::wcrtomb](wcrtomb.html "cpp/string/multibyte/wcrtomb") may be used instead. 

### Example

Run this code
    
    
    #include <clocale>
    #include <cstdlib>
    #include <iomanip>
    #include <iostream>
    #include <string>
     
    void print_wide(const [std::wstring](../basic_string.html)& wstr)
    {
        bool shifts = std::wctomb(nullptr, 0); // reset the conversion state
        [std::cout](../../io/cout.html) << "shift sequences are " << (shifts ? "" : "not" )
                  << " used\n" << [std::uppercase](../../io/manip/uppercase.html) << [std::setfill](../../io/manip/setfill.html)('0');
        for (const wchar_t wc : wstr)
        {
            [std::string](../basic_string.html) mb(MB_CUR_MAX, '\0');
            const int ret = std::wctomb(&mb[0], wc);
            const char* s = ret > 1 ? "s" : "";
            [std::cout](../../io/cout.html) << "multibyte char '" << mb << "' is " << ret
                      << " byte" << s << ": [" << [std::hex](../../io/manip/hex.html);
            for (int i{0}; i != ret; ++i)
            {
                const int c = 0xFF & mb[i];
                [std::cout](../../io/cout.html) << (i ? " " : "") << [std::setw](../../io/manip/setw.html)(2) << c;
            }
            [std::cout](../../io/cout.html) << "]\n" << [std::dec](../../io/manip/hex.html);
        }
    }
     
    int main()
    {
        [std::setlocale](../../locale/setlocale.html)([LC_ALL](../../locale/LC_categories.html), "en_US.utf8");
        // UTF-8 narrow multibyte encoding
        [std::wstring](../basic_string.html) wstr = L"z\u00df\u6c34\U0001d10b"; // or L"zß水𝄋"
        print_wide(wstr);
    }

Output: 
    
    
    shift sequences are not used
    multibyte char 'z' is 1 byte: [7A]
    multibyte char 'ß' is 2 bytes: [C3 9F]
    multibyte char '水' is 3 bytes: [E6 B0 B4]
    multibyte char '𝄋' is 4 bytes: [F0 9D 84 8B]

### See also

[ mbtowc](mbtowc.html "cpp/string/multibyte/mbtowc") |  converts the next multibyte character to wide character   
(function)   
---|---  
[ wcrtomb](wcrtomb.html "cpp/string/multibyte/wcrtomb") |  converts a wide character to its multibyte representation, given state   
(function)   
[ do_out](../../locale/codecvt/out.html "cpp/locale/codecvt/out")[virtual] |  converts a string from `InternT` to `ExternT`, such as when writing to file   
(virtual protected member function of `std::codecvt<InternT,ExternT,StateT>`)   
[C documentation](../../../c/string/multibyte/wctomb.html "c/string/multibyte/wctomb") for wctomb
