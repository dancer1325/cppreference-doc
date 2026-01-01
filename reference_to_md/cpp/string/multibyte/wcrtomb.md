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
[wctob](wctob.html "cpp/string/multibyte/wctob")  
  
| **wcrtomb**  
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
[std::size_t](../../types/size_t.html) wcrtomb( char* s, wchar_t wc, [std::mbstate_t](mbstate_t.html)* ps ); |  |   
| |   
  
Converts a wide character to its narrow multibyte representation. 

If s is not a null pointer, the function determines the number of bytes necessary to store the multibyte character representation of wc (including any shift sequences, and taking into account the current multibyte conversion state *ps), and stores the multibyte character representation in the character array whose first element is pointed to by s, updating *ps as necessary. At most MB_CUR_MAX bytes can be written by this function. 

If s is a null pointer, the call is equivalent to std::wcrtomb(buf, L'\0', ps) for some internal buffer `buf`. 

If wc is the null wide character L'\0', a null byte is stored, preceded by any shift sequence necessary to restore the initial shift state and the conversion state parameter *ps is updated to represent the initial shift state. 

## Contents

  * [1 Parameters](wcrtomb.html#Parameters)
  * [2 Return value](wcrtomb.html#Return_value)
  * [3 Example](wcrtomb.html#Example)
  * [4 See also](wcrtomb.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string/multibyte/wcrtomb&action=edit&section=1 "Edit section: Parameters")] Parameters

s  |  \-  |  pointer to narrow character array where the multibyte character will be stored   
---|---|---  
wc  |  \-  |  the wide character to convert   
ps  |  \-  |  pointer to the conversion state object used when interpreting the multibyte string   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string/multibyte/wcrtomb&action=edit&section=2 "Edit section: Return value")] Return value

On success, returns the number of bytes (including any shift sequences) written to the character array whose first element is pointed to by s. 

On failure (if wc is not a valid wide character), returns static_cast<[std::size_t](../../types/size_t.html)>(-1), stores [EILSEQ](../../error/errno_macros.html "cpp/error/errno macros") in [errno](../../error/errno.html "cpp/error/errno"), and leaves *ps in unspecified state. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string/multibyte/wcrtomb&action=edit&section=3 "Edit section: Example")] Example

Run this code
    
    
    #include <clocale>
    #include <cwchar>
    #include <iostream>
    #include <string>
     
    void print_wide(const [std::wstring](../basic_string.html)& wstr)
    {
        [std::mbstate_t](mbstate_t.html) state{};
        for (wchar_t wc : wstr)
        {
            [std::string](../basic_string.html) mb(MB_CUR_MAX, '\0');
            [std::size_t](../../types/size_t.html) ret = std::wcrtomb(&mb[0], wc, &state);
            [std::cout](../../io/cout.html) << "multibyte char " << mb << " is " << ret << " bytes\n";
        }
    }
     
    int main()
    {
        [std::setlocale](../../locale/setlocale.html)([LC_ALL](../../locale/LC_categories.html), "en_US.utf8");
        [std::wstring](../basic_string.html) wstr = L"z\u00df\u6c34\U0001f34c"; // or L"zß水🍌"
        print_wide(wstr);
    }

Output: 
    
    
    multibyte char z is 1 bytes
    multibyte char ß is 2 bytes
    multibyte char 水 is 3 bytes
    multibyte char 🍌 is 4 bytes

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string/multibyte/wcrtomb&action=edit&section=4 "Edit section: See also")] See also

[ wctomb](wctomb.html "cpp/string/multibyte/wctomb") |  converts a wide character to its multibyte representation   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/multibyte/dsc_wctomb&action=edit)  
---|---  
[ mbrtowc](mbrtowc.html "cpp/string/multibyte/mbrtowc") |  converts the next multibyte character to wide character, given state   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/multibyte/dsc_mbrtowc&action=edit)  
[ do_out](../../locale/codecvt/out.html "cpp/locale/codecvt/out")[virtual] |  converts a string from `InternT` to `ExternT`, such as when writing to file   
(virtual protected member function of `std::codecvt<InternT,ExternT,StateT>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/locale/codecvt/dsc_do_out&action=edit)  
[C documentation](../../../c/string/multibyte/wcrtomb.html "c/string/multibyte/wcrtomb") for wcrtomb
