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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/text/navbar_content&action=edit)

[Null-terminated multibyte strings](../multibyte.html "cpp/string/multibyte")

| [Functions](../multibyte.html#Functions "cpp/string/multibyte")  
---  
[Wide/multibyte examination](../multibyte.html#Multibyte.2Fwide_character_conversions "cpp/string/multibyte")  
| [mblen](mblen.html "cpp/string/multibyte/mblen")  
---  
**mbrlen**  
  
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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/multibyte/navbar_content&action=edit)

Defined in header `[<cwchar>](../../header/cwchar.html "cpp/header/cwchar")` |  |   
---|---|---  
[std::size_t](../../types/size_t.html) mbrlen( const char* s, [std::size_t](../../types/size_t.html) n, [std::mbstate_t](mbstate_t.html)* ps); |  |   
| |   
  
Determines the size, in bytes, of the remainder of the multibyte character whose first byte is pointed to by s, given the current conversion state ps. 

This function is equivalent to the call [std::mbrtowc](mbrtowc.html)(nullptr, s, n, ps ? ps : &internal) for some hidden object internal of type [std::mbstate_t](mbstate_t.html "cpp/string/multibyte/mbstate t"), except that the expression ps is evaluated only once. 

## Contents

  * [1 Parameters](mbrlen.html#Parameters)
  * [2 Return value](mbrlen.html#Return_value)
  * [3 Example](mbrlen.html#Example)
  * [4 See also](mbrlen.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string/multibyte/mbrlen&action=edit&section=1 "Edit section: Parameters")] Parameters

s  |  \-  |  pointer to an element of a multibyte character string   
---|---|---  
n  |  \-  |  limit on the number of bytes in s that can be examined   
ps  |  \-  |  pointer to the variable holding the conversion state   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string/multibyte/mbrlen&action=edit&section=2 "Edit section: Return value")] Return value

  * ​0​ if the next n or fewer bytes complete the null character. 
  * The number of bytes (between 1 and n) that complete a valid multibyte character. 
  * [std::size_t](../../types/size_t.html)(-1) if encoding error occurs. 
  * [std::size_t](../../types/size_t.html)(-2) if the next n bytes are part of a possibly valid multibyte character, which is still incomplete after examining all n bytes. 



### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string/multibyte/mbrlen&action=edit&section=3 "Edit section: Example")] Example

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
     
        // simple use: length of a complete multibyte character
        const [std::size_t](../../types/size_t.html) len = std::mbrlen(&str[0], str.size(), &mb);
        [std::cout](../../io/cout.html) << "The length of " << str << " is " << len << " bytes\n";
     
        // advanced use: restarting in the middle of a multibyte character
        const [std::size_t](../../types/size_t.html) len1 = std::mbrlen(&str[0], 1, &mb);
        if (len1 == [std::size_t](../../types/size_t.html)(-2))
            [std::cout](../../io/cout.html) << "The first 1 byte of " << str
                      << " is an incomplete multibyte char (mbrlen returns -2)\n";
     
        const [std::size_t](../../types/size_t.html) len2 = std::mbrlen(&str[1], str.size() - 1, &mb);
        [std::cout](../../io/cout.html) << "The remaining " << str.size() - 1 << " bytes of " << str
                  << " hold " << len2 << " bytes of the multibyte character\n";
     
        // error case:
        [std::cout](../../io/cout.html) << "Attempting to call mbrlen() in the middle of " << str
                  << " while in initial shift state returns "
                  << (int)mbrlen(&str[1], str.size(), &mb) << '\n';
    }

Output: 
    
    
    The length of 水 is 3 bytes.
    The first 1 byte of 水 is an incomplete multibyte char (mbrlen returns -2)
    The remaining 2 bytes of 水 hold 2 bytes of the multibyte character
    Attempting to call mbrlen() in the middle of 水 while in initial shift state returns -1

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string/multibyte/mbrlen&action=edit&section=4 "Edit section: See also")] See also

[ mbrtowc](mbrtowc.html "cpp/string/multibyte/mbrtowc") |  converts the next multibyte character to wide character, given state   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/multibyte/dsc_mbrtowc&action=edit)  
---|---  
[ mblen](mblen.html "cpp/string/multibyte/mblen") |  returns the number of bytes in the next multibyte character   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/multibyte/dsc_mblen&action=edit)  
[ do_length](../../locale/codecvt/length.html "cpp/locale/codecvt/length")[virtual] |  calculates the length of the `ExternT` string that would be consumed by conversion into given `InternT` buffer   
(virtual protected member function of `std::codecvt<InternT,ExternT,StateT>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/locale/codecvt/dsc_do_length&action=edit)  
[C documentation](../../../c/string/multibyte/mbrlen.html "c/string/multibyte/mbrlen") for mbrlen
