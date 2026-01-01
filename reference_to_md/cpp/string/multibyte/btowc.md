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
**btowc**  
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
[std::wint_t](../wide.html) btowc( int c ); |  |   
| |   
  
Widens a single-byte character c to its wide character equivalent. 

Most multibyte character encodings use single-byte codes to represent the characters from the ASCII character set. This function may be used to convert such characters to wchar_t. 

## Contents

  * [1 Parameters](btowc.html#Parameters)
  * [2 Return value](btowc.html#Return_value)
  * [3 Example](btowc.html#Example)
  * [4 See also](btowc.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string/multibyte/btowc&action=edit&section=1 "Edit section: Parameters")] Parameters

c  |  \-  |  single-byte character to widen   
---|---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string/multibyte/btowc&action=edit&section=2 "Edit section: Return value")] Return value

WEOF if c is [EOF](../../io/c.html "cpp/io/c"). 

Wide character representation of c if (unsigned char)c is a valid single-byte character in the initial shift state, WEOF otherwise. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string/multibyte/btowc&action=edit&section=3 "Edit section: Example")] Example

Run this code
    
    
    #include <clocale>
    #include <cwchar>
    #include <iostream>
     
    void try_widen(char c)
    {
        [std::wint_t](../wide.html) w = std::btowc(c);
        if (w != WEOF)
            [std::cout](../../io/cout.html) << "The single-byte character " << +(unsigned char)c
                      << " widens to " << +w << '\n';
        else
            [std::cout](../../io/cout.html) << "The single-byte character " << +(unsigned char)c
                      << " failed to widen\n";
    }
     
    int main()
    {
        [std::setlocale](../../locale/setlocale.html)([LC_ALL](../../locale/LC_categories.html), "lt_LT.iso88594");
        [std::cout](../../io/cout.html) << [std::hex](../../io/manip/hex.html) << [std::showbase](../../io/manip/showbase.html) << "In Lithuanian ISO-8859-4 locale:\n";
        try_widen('A');
        try_widen('\xdf'); // German letter ß (U+00df) in ISO-8859-4
        try_widen('\xf9'); // Lithuanian letter ų (U+0173) in ISO-8859-4
     
        [std::setlocale](../../locale/setlocale.html)([LC_ALL](../../locale/LC_categories.html), "lt_LT.utf8");
        [std::cout](../../io/cout.html) << "In Lithuanian UTF-8 locale:\n";
        try_widen('A');
        try_widen('\xdf');
        try_widen('\xf9');
    }

Possible output: 
    
    
    In Lithuanian ISO-8859-4 locale:
    The single-byte character 0x41 widens to 0x41
    The single-byte character 0xdf widens to 0xdf
    The single-byte character 0xf9 widens to 0x173
    In Lithuanian UTF-8 locale:
    The single-byte character 0x41 widens to 0x41
    The single-byte character 0xdf failed to widen
    The single-byte character 0xf9 failed to widen

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string/multibyte/btowc&action=edit&section=4 "Edit section: See also")] See also

[ wctob](wctob.html "cpp/string/multibyte/wctob") |  narrows a wide character to a single-byte narrow character, if possible   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/multibyte/dsc_wctob&action=edit)  
---|---  
[ do_widen](../../locale/ctype/widen.html "cpp/locale/ctype/widen")[virtual] |  converts a character or characters from char to `CharT`   
(virtual protected member function of `std::ctype<CharT>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/locale/ctype/dsc_do_widen&action=edit)  
[C documentation](../../../c/string/multibyte/btowc.html "c/string/multibyte/btowc") for btowc
