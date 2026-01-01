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
**wctob**  
  
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
int wctob( [std::wint_t](../wide.html) c ); |  |   
| |   
  
Narrows a wide character c if its multibyte character equivalent in the initial shift state is a single byte. 

This is typically possible for the characters from the ASCII character set, since most multibyte encodings (such as UTF-8) use single bytes to encode those characters. 

## Contents

  * [1 Parameters](wctob.html#Parameters)
  * [2 Return value](wctob.html#Return_value)
  * [3 Example](wctob.html#Example)
  * [4 See also](wctob.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string/multibyte/wctob&action=edit&section=1 "Edit section: Parameters")] Parameters

c  |  \-  |  wide character to narrow   
---|---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string/multibyte/wctob&action=edit&section=2 "Edit section: Return value")] Return value

[EOF](../../io/c.html "cpp/io/c") if c does not represent a multibyte character with length 1 in initial shift state. 

Otherwise, the single-byte representation of c as unsigned char converted to int. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string/multibyte/wctob&action=edit&section=3 "Edit section: Example")] Example

Run this code
    
    
    #include <clocale>
    #include <cwchar>
    #include <iostream>
     
    void try_narrowing(wchar_t c)
    {
        int cn = std::wctob(c);
        if (cn != [EOF](../../io/c.html))
            [std::cout](../../io/cout.html) << '\'' << int(c) << "' narrowed to " << +cn << '\n';
        else
            [std::cout](../../io/cout.html) << '\'' << int(c) << "' could not be narrowed\n";
    }
     
    int main()
    {
        [std::setlocale](../../locale/setlocale.html)([LC_ALL](../../locale/LC_categories.html), "th_TH.utf8");
        [std::cout](../../io/cout.html) << [std::hex](../../io/manip/hex.html) << [std::showbase](../../io/manip/showbase.html) << "In Thai UTF-8 locale:\n";
        try_narrowing(L'a');
        try_narrowing(L'๛');
     
        [std::setlocale](../../locale/setlocale.html)([LC_ALL](../../locale/LC_categories.html), "th_TH.tis620");
        [std::cout](../../io/cout.html) << "In Thai TIS-620 locale:\n";
        try_narrowing(L'a');
        try_narrowing(L'๛');
    }

Output: 
    
    
    In Thai UTF-8 locale:
    '0x61' narrowed to 0x61
    '0xe5b' could not be narrowed
    In Thai TIS-620 locale:
    '0x61' narrowed to 0x61
    '0xe5b' narrowed to 0xfb

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string/multibyte/wctob&action=edit&section=4 "Edit section: See also")] See also

[ btowc](btowc.html "cpp/string/multibyte/btowc") |  widens a single-byte narrow character to wide character, if possible   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/multibyte/dsc_btowc&action=edit)  
---|---  
[ narrow](../../io/basic_ios/narrow.html "cpp/io/basic ios/narrow") |  narrows characters   
(public member function of `std::basic_ios<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_ios/dsc_narrow&action=edit)  
[ narrow](../../locale/ctype/narrow.html "cpp/locale/ctype/narrow") |  invokes `do_narrow`   
(public member function of `std::ctype<CharT>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/locale/ctype/dsc_narrow&action=edit)  
[C documentation](../../../c/string/multibyte/wctob.html "c/string/multibyte/wctob") for wctob
