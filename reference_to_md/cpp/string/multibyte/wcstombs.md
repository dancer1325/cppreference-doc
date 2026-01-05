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
**wcstombs**  
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
[std::size_t](../../types/size_t.html) wcstombs( char* dst, const wchar_t* src, [std::size_t](../../types/size_t.html) len ); |  |   
| |   
  
Converts a sequence of wide characters from the array whose first element is pointed to by src to its narrow multibyte representation that begins in the initial shift state. Converted characters are stored in the successive elements of the char array pointed to by dst. No more than len bytes are written to the destination array. 

Each character is converted as if by a call to [std::wctomb](wctomb.html "cpp/string/multibyte/wctomb"), except that the wctomb's conversion state is unaffected. The conversion stops if: 

  * The null character was converted and stored. 
  * A wchar_t was found that does not correspond to a valid character in the current C locale. 
  * The next multibyte character to be stored would exceed len. 



## Contents

  * [1 Notes](wcstombs.html#Notes)
  * [2 Parameters](wcstombs.html#Parameters)
  * [3 Return value](wcstombs.html#Return_value)
  * [4 Example](wcstombs.html#Example)
  * [5 See also](wcstombs.html#See_also)

  
---  
  
### Notes

In most implementations, this function updates a global static object of type [std::mbstate_t](mbstate_t.html "cpp/string/multibyte/mbstate t") as it processes through the string, and cannot be called simultaneously by two threads, [std::wcsrtombs](wcsrtombs.html) should be used in such cases. 

POSIX specifies a common extension: if dst is a null pointer, this function returns the number of bytes that would be written to dst, if converted. Similar behavior is standard for [std::wcsrtombs](wcsrtombs.html). 

### Parameters

dst  |  \-  |  pointer to narrow character array where the multibyte character will be stored   
---|---|---  
src  |  \-  |  pointer to the first element of a null-terminated wide string to convert   
len  |  \-  |  number of byte available in the array pointed to by dst   
  
### Return value

On success, returns the number of bytes (including any shift sequences, but excluding the terminating '\0') written to the character array whose first element is pointed to by dst. 

On conversion error (if invalid wide character was encountered), returns static_cast<[std::size_t](../../types/size_t.html)>(-1). 

### Example

Run this code
    
    
    #include <clocale>
    #include <cstdlib>
    #include <iostream>
     
    int main()
    {
        [std::setlocale](../../locale/setlocale.html)([LC_ALL](../../locale/LC_categories.html), "en_US.utf8");
        // UTF-8 narrow multibyte encoding
        const wchar_t* wstr = L"z\u00df\u6c34\U0001d10b"; // or L"zß水𝄋"
        char mbstr[11];
        std::wcstombs(mbstr, wstr, 11);
        [std::cout](../../io/cout.html) << "multibyte string: " << mbstr << '\n';
    }

Output: 
    
    
    multibyte string: zß水𝄋

### See also

[ wcsrtombs](wcsrtombs.html "cpp/string/multibyte/wcsrtombs") |  converts a wide string to narrow multibyte character string, given state   
(function)   
---|---  
[ mbstowcs](mbstowcs.html "cpp/string/multibyte/mbstowcs") |  converts a narrow multibyte character string to wide string   
(function)   
[ do_out](../../locale/codecvt/out.html "cpp/locale/codecvt/out")[virtual] |  converts a string from `InternT` to `ExternT`, such as when writing to file   
(virtual protected member function of `std::codecvt<InternT,ExternT,StateT>`)   
[C documentation](../../../c/string/multibyte/wcstombs.html "c/string/multibyte/wcstombs") for wcstombs
