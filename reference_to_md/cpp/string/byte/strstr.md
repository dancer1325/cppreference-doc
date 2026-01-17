 
  


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
  


[Null-terminated byte strings](../byte.html "cpp/string/byte")

[Functions](../byte.html#Functions "cpp/string/byte")  
---  
[Character classification](../byte.html#Character_classification "cpp/string/byte")  
| [isalnum](isalnum.html "cpp/string/byte/isalnum")  
---  
[isalpha](isalpha.html "cpp/string/byte/isalpha")  
[islower](islower.html "cpp/string/byte/islower")  
[isupper](isupper.html "cpp/string/byte/isupper")  
[isdigit](isdigit.html "cpp/string/byte/isdigit")  
[isxdigit](isxdigit.html "cpp/string/byte/isxdigit")  
  
| [isblank](isblank.html "cpp/string/byte/isblank")(C++11)  
---  
[iscntrl](iscntrl.html "cpp/string/byte/iscntrl")  
[isgraph](isgraph.html "cpp/string/byte/isgraph")  
[isspace](isspace.html "cpp/string/byte/isspace")  
[isprint](isprint.html "cpp/string/byte/isprint")  
[ispunct](ispunct.html "cpp/string/byte/ispunct")  
  
[Character manipulation](../byte.html#Character_manipulation "cpp/string/byte")  
| [tolower](tolower.html "cpp/string/byte/tolower")  
---  
  
| [toupper](toupper.html "cpp/string/byte/toupper")  
---  
  
[Conversions to numeric formats](../byte.html#Conversions_to_numeric_formats "cpp/string/byte")  
| [atof](atof.html "cpp/string/byte/atof")  
---  
[atoiatolatoll](atoi.html "cpp/string/byte/atoi")(C++11)  
[strtolstrtoll](strtol.html "cpp/string/byte/strtol")(C++11)` `  
  
  
  
| [strtoulstrtoull](strtoul.html "cpp/string/byte/strtoul")(C++11)  
---  
[strtofstrtodstrtold](strtof.html "cpp/string/byte/strtof")(C++11)(C++11)  
[strtoimaxstrtouimax](strtoimax.html "cpp/string/byte/strtoimax")(C++11)(C++11)  
  
[String manipulation](../byte.html#String_manipulation "cpp/string/byte")  
| [strcpy](strcpy.html "cpp/string/byte/strcpy")  
---  
[strncpy](strncpy.html "cpp/string/byte/strncpy")  
[strxfrm](strxfrm.html "cpp/string/byte/strxfrm")  
  
| [strcat](strcat.html "cpp/string/byte/strcat")  
---  
[strncat](strncat.html "cpp/string/byte/strncat")  
  
  
  
[String examination](../byte.html#String_examination "cpp/string/byte")  
| [strlen](strlen.html "cpp/string/byte/strlen")  
---  
[strcmp](strcmp.html "cpp/string/byte/strcmp")  
[strncmp](strncmp.html "cpp/string/byte/strncmp")  
[strcoll](strcoll.html "cpp/string/byte/strcoll")  
[strchr](strchr.html "cpp/string/byte/strchr")  
[strrchr](strrchr.html "cpp/string/byte/strrchr")  
  
| [strspn](strspn.html "cpp/string/byte/strspn")  
---  
[strcspn](strcspn.html "cpp/string/byte/strcspn")  
[strpbrk](strpbrk.html "cpp/string/byte/strpbrk")  
**strstr**  
[strtok](strtok.html "cpp/string/byte/strtok")  
  
  
  
[Character array functions](../byte.html#Character_array_functions "cpp/string/byte")  
| [memchr](memchr.html "cpp/string/byte/memchr")  
---  
[memcmp](memcmp.html "cpp/string/byte/memcmp")  
[memset](memset.html "cpp/string/byte/memset")  
  
| [memcpy](memcpy.html "cpp/string/byte/memcpy")  
---  
[memmove](memmove.html "cpp/string/byte/memmove")  
  
  
  
[Miscellaneous](../byte.html#Miscellaneous "cpp/string/byte")  
| [strerror](strerror.html "cpp/string/byte/strerror")  
---  
  


Defined in header `[<cstring>](../../header/cstring.html "cpp/header/cstring")` |  |   
---|---|---  
const char* strstr( const char* haystack, const char* needle ); |  |   
char* strstr( char* haystack, const char* needle ); |  |   
| |   
  
Finds the first occurrence of the byte string needle in the byte string pointed to by haystack. The terminating null characters are not compared. 

## Contents

  * [1 Parameters](strstr.html#Parameters)
  * [2 Return value](strstr.html#Return_value)
  * [3 Example](strstr.html#Example)
  * [4 See also](strstr.html#See_also)

  
---  
  
### Parameters

haystack  |  \-  |  pointer to the null-terminated byte string to examine   
---|---|---  
needle  |  \-  |  pointer to the null-terminated byte string to search for   
  
### Return value

Pointer to the first character of the found substring in haystack, or a null pointer if no such character is found. If needle points to an empty string, haystack is returned. 

### Example

Run this code
    
    
    #include <cstring>
    #include <iomanip>
    #include <iostream>
     
    int main()
    {
        const char* str = "Try not. Do, or do not. There is no try.";
        const char* target = "not";
     
        for (const char* result = str; (result = std::strstr(result, target)); ++result)
            [std::cout](../../io/cout.html) << "Found " << [std::quoted](../../io/manip/quoted.html)(target)
                      << " starting at (" << result - str << "): "
                      << [std::quoted](../../io/manip/quoted.html)(result) << '\n';
    }

Output: 
    
    
    Found "not" starting at (4): "not. Do, or do not. There is no try."
    Found "not" starting at (19): "not. There is no try."

### See also

[ find](../basic_string/find.html "cpp/string/basic string/find") |  finds the first occurrence of the given substring   
(public member function of `std::basic_string<CharT,Traits,Allocator>`)   
---|---  
[ wcsstr](../wide/wcsstr.html "cpp/string/wide/wcsstr") |  finds the first occurrence of a wide string within another wide string   
(function)   
[ strchr](strchr.html "cpp/string/byte/strchr") |  finds the first occurrence of a character   
(function)   
[ strrchr](strrchr.html "cpp/string/byte/strrchr") |  finds the last occurrence of a character   
(function)   
[C documentation](../../../c/string/byte/strstr.html "c/string/byte/strstr") for strstr
