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
**mbsrtowcs**` `  
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
[std::size_t](../../types/size_t.html) mbsrtowcs( wchar_t* dst,  
const char** src,  
[std::size_t](../../types/size_t.html) len,  
[std::mbstate_t](mbstate_t.html)* ps ); |  |   
| |   
  
Converts a null-terminated multibyte character sequence, which begins in the conversion state described by *ps, from the array whose first element is pointed to by *src to its wide character representation. If dst is not null, converted characters are stored in the successive elements of the wchar_t array pointed to by dst. No more than len wide characters are written to the destination array. 

Each multibyte character is converted as if by a call to [std::mbrtowc](mbrtowc.html "cpp/string/multibyte/mbrtowc"). The conversion stops if: 

  * The multibyte null character was converted and stored. src is set to a null pointer and `*ps` represents the initial shift state. 
  * An invalid multibyte character (according to the current C locale) was encountered. src is set to point at the beginning of the first unconverted multibyte character. 
  * The next wide character to be stored would exceed len. src is set to point at the beginning of the first unconverted multibyte character. This condition is not checked if dst is a null pointer. 



## Contents

  * [1 Parameters](mbsrtowcs.html#Parameters)
  * [2 Return value](mbsrtowcs.html#Return_value)
  * [3 Notes](mbsrtowcs.html#Notes)
  * [4 Example](mbsrtowcs.html#Example)
  * [5 See also](mbsrtowcs.html#See_also)

  
---  
  
### Parameters

dst  |  \-  |  pointer to wide character array where the results will be stored   
---|---|---  
src  |  \-  |  pointer to pointer to the first element of a null-terminated multibyte string   
len  |  \-  |  number of wide characters available in the array pointed to by dst   
ps  |  \-  |  pointer to the conversion state object   
  
### Return value

On success, returns the number of wide characters, excluding the terminating L'\0', written to the character array. If dst is a null pointer, returns the number of wide characters that would have been written given unlimited length. 

On conversion error (if invalid multibyte character was encountered), returns static_cast<[std::size_t](../../types/size_t.html)>(-1), stores [EILSEQ](../../error/errno_macros.html "cpp/error/errno macros") in [errno](../../error/errno.html "cpp/error/errno"), and leaves *ps in unspecified state. 

### Notes

This function moves the src pointer to the end of the converted multibyte string. This doesn't happen if dst is a null pointer. 

### Example

Run this code
    
    
    #include <clocale>
    #include <cwchar>
    #include <iostream>
    #include <vector>
     
    void print_as_wide(const char* mbstr)
    {
        [std::mbstate_t](mbstate_t.html) state = [std::mbstate_t](mbstate_t.html)();
        [std::size_t](../../types/size_t.html) len = 1 + std::mbsrtowcs(nullptr, &mbstr, 0, &state);
        [std::vector](../../container/vector.html)<wchar_t> wstr(len);
        std::mbsrtowcs(&wstr[0], &mbstr, wstr.size(), &state);
        [std::wcout](../../io/cout.html) << "Wide string: " << &wstr[0] << '\n'
                   << "The length, including '\\0': " << wstr.size() << '\n';
    }
     
    int main()
    {
        [std::setlocale](../../locale/setlocale.html)([LC_ALL](../../locale/LC_categories.html), "en_US.utf8");
        const char* mbstr = "z\u00df\u6c34\U0001f34c"; // or u8"zß水🍌"
        print_as_wide(mbstr);
    }

Output: 
    
    
    Wide string: zß水🍌
    The length, including '\0': 5

### See also

[ mbrtowc](mbrtowc.html "cpp/string/multibyte/mbrtowc") |  converts the next multibyte character to wide character, given state   
(function)   
---|---  
[ wcsrtombs](wcsrtombs.html "cpp/string/multibyte/wcsrtombs") |  converts a wide string to narrow multibyte character string, given state   
(function)   
[ do_in](../../locale/codecvt/in.html "cpp/locale/codecvt/in")[virtual] |  converts a string from `ExternT` to `InternT`, such as when reading from file   
(virtual protected member function of `std::codecvt<InternT,ExternT,StateT>`)   
[C documentation](../../../c/string/multibyte/mbsrtowcs.html "c/string/multibyte/mbsrtowcs") for mbsrtowcs
