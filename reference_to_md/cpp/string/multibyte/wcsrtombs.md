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
  
| [wcrtomb](wcrtomb.html "cpp/string/multibyte/wcrtomb")  
---  
**wcsrtombs**  
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
[std::size_t](../../types/size_t.html) wcsrtombs( char* dst,  
const wchar_t** src,  
[std::size_t](../../types/size_t.html) len,  
[std::mbstate_t](mbstate_t.html)* ps ); |  |   
| |   
  
Converts a sequence of wide characters from the array whose first element is pointed to by *src to its narrow multibyte representation that begins in the conversion state described by *ps. If dst is not null, converted characters are stored in the successive elements of the char array pointed to by dst. No more than len bytes are written to the destination array. 

Each character is converted as if by a call to [std::wcrtomb](wcrtomb.html "cpp/string/multibyte/wcrtomb"). The conversion stops if: 

  * The null character was converted and stored. src is set to a null pointer and *ps represents the initial shift state. 
  * A wchar_t was found that does not correspond to a valid character in the current C locale. src is set to point at the first unconverted wide character. 
  * The next multibyte character to be stored would exceed len. src is set to point at the first unconverted wide character. This condition is not checked if dst is a null pointer. 



## Contents

  * [1 Parameters](wcsrtombs.html#Parameters)
  * [2 Return value](wcsrtombs.html#Return_value)
  * [3 Example](wcsrtombs.html#Example)
  * [4 See also](wcsrtombs.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string/multibyte/wcsrtombs&action=edit&section=1 "Edit section: Parameters")] Parameters

dst  |  \-  |  pointer to narrow character array where the multibyte characters will be stored   
---|---|---  
src  |  \-  |  pointer to pointer to the first element of a null-terminated wide string   
len  |  \-  |  number of bytes available in the array pointed to by dst   
ps  |  \-  |  pointer to the conversion state object   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string/multibyte/wcsrtombs&action=edit&section=2 "Edit section: Return value")] Return value

On success, returns the number of bytes (including any shift sequences, but excluding the terminating '\0') written to the character array whose first element is pointed to by dst. If dst is a null pointer, returns the number of bytes that would have been written (again, excluding the terminating null character '\0'). 

On conversion error (if invalid wide character was encountered), returns static_cast<[std::size_t](../../types/size_t.html)>(-1), stores [EILSEQ](../../error/errno_macros.html "cpp/error/errno macros") in [errno](../../error/errno.html "cpp/error/errno"), and leaves *ps in unspecified state. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string/multibyte/wcsrtombs&action=edit&section=3 "Edit section: Example")] Example

Run this code
    
    
    #include <clocale>
    #include <cwchar>
    #include <iostream>
    #include <string>
    #include <vector>
     
    void print_wide(const wchar_t* wstr)
    {
        [std::mbstate_t](mbstate_t.html) state = [std::mbstate_t](mbstate_t.html)();
        [std::size_t](../../types/size_t.html) len = 1 + std::wcsrtombs(nullptr, &wstr, 0, &state);
        [std::vector](../../container/vector.html)<char> mbstr(len);
        std::wcsrtombs(&mbstr[0], &wstr, mbstr.size(), &state);
        [std::cout](../../io/cout.html) << "multibyte string: " << &mbstr[0] << '\n'
                  << "Length, including '\\0': " << mbstr.size() << '\n';
    }
     
    int main()
    {
        [std::setlocale](../../locale/setlocale.html)([LC_ALL](../../locale/LC_categories.html), "en_US.utf8");
        // UTF-8 narrow multibyte encoding
        const wchar_t* wstr = L"z\u00df\u6c34\U0001d10b"; // or L"zß水𝄋"
        print_wide(wstr);
    }

Output: 
    
    
    multibyte string: zß水𝄋
    Length, including '\0': 11

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string/multibyte/wcsrtombs&action=edit&section=4 "Edit section: See also")] See also

[ wcrtomb](wcrtomb.html "cpp/string/multibyte/wcrtomb") |  converts a wide character to its multibyte representation, given state   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/multibyte/dsc_wcrtomb&action=edit)  
---|---  
[ mbsrtowcs](mbsrtowcs.html "cpp/string/multibyte/mbsrtowcs") |  converts a narrow multibyte character string to wide string, given state   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/multibyte/dsc_mbsrtowcs&action=edit)  
[ do_out](../../locale/codecvt/out.html "cpp/locale/codecvt/out")[virtual] |  converts a string from `InternT` to `ExternT`, such as when writing to file   
(virtual protected member function of `std::codecvt<InternT,ExternT,StateT>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/locale/codecvt/dsc_do_out&action=edit)  
[C documentation](../../../c/string/multibyte/wcsrtombs.html "c/string/multibyte/wcsrtombs") for wcsrtombs
