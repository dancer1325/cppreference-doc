[C++](../../cpp.html "cpp")

[Compiler support](../compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](../freestanding.html "cpp/freestanding")  
[Language](../language.html "cpp/language")  
[Standard library](../standard_library.html "cpp/standard library")  
[Standard library headers](../headers.html "cpp/header")  
[Named requirements](../iterator/concepts.html "cpp/named req")  
[Feature test macros](../experimental/feature_test.html "cpp/feature test") (C++20)  
[Language support library](../utility.html#Language_support "cpp/utility")  
[Concepts library](../concepts.html "cpp/concepts") (C++20)  
[Diagnostics library](../error.html "cpp/error")  
[Memory management library](../memory.html "cpp/memory")  
[Metaprogramming library](../meta.html "cpp/meta") (C++11)  
[General utilities library](../utility.html "cpp/utility")  
[Containers library](../container.html "cpp/container")  
[Iterators library](../iterator.html "cpp/iterator")  
[Ranges library](../ranges.html "cpp/ranges") (C++20)  
[Algorithms library](../algorithm.html "cpp/algorithm")  
[Strings library](../string.html "cpp/string")  
[Text processing library](../text.html "cpp/text")  
[Numerics library](../numeric.html "cpp/numeric")  
[Date and time library](../chrono.html "cpp/chrono")  
[Input/output library](../io.html "cpp/io")  
[Filesystem library](../filesystem.html "cpp/filesystem") (C++17)  
[Concurrency support library](../atomic.html "cpp/thread") (C++11)  
[Execution control library](../experimental/execution.html "cpp/execution") (C++26)  
[Technical specifications](../experimental.html "cpp/experimental")  
[Symbols index](../symbol_index.html "cpp/symbol index")  
[External libraries](../links/libs.html "cpp/links/libs")  
  


[Text processing library](../text.html "cpp/text")

[Localization library](../locale.html "cpp/locale")  
---  
[Regular expressions library](../regex.html "cpp/regex") (C++11)  
[Formatting library](format.html "cpp/utility/format") (C++20)  
[Null-terminated sequence utilities](../text.html#Null-terminated_sequence_utilities "cpp/text")  
[Byte strings](../string/byte.html "cpp/string/byte")  
[Multibyte strings](../string/multibyte.html "cpp/string/multibyte")  
[Wide strings](../string/wide.html "cpp/string/wide")  
[Primitive numeric conversions](../text.html#Primitive_numeric_conversions "cpp/text")  
| **to_chars**(C++17)  
---  
[to_chars_result](to_chars_result.html "cpp/utility/to chars result")(C++17)  
[from_chars](from_chars.html "cpp/utility/from chars")(C++17)  
[from_chars_result](from_chars_result.html "cpp/utility/from chars result")(C++17)  
[chars_format](chars_format.html "cpp/utility/chars format")(C++17)  
  
[Text encoding identifications](../text.html#Text_encoding_identifications "cpp/text")  
| [text_encoding](../locale/text_encoding.html "cpp/text/text encoding")(C++26)  
---  
  


Defined in header `[<charconv>](../header/charconv.html "cpp/header/charconv")` |  |   
---|---|---  
std::to_chars_result  
to_chars( char* first, char* last,  
/* integer-type */ value, int base = 10 ); |  (1) | (since C++17)   
(constexpr since C++23)  
std::to_chars_result  
to_chars( char*, char*, bool, int = 10 ) = delete; |  (2)  |  (since C++17)  
std::to_chars_result  
to_chars( char* first, char* last, /* floating-point-type */ value ); |  (3)  |  (since C++17)  
std::to_chars_result  
to_chars( char* first, char* last, /* floating-point-type */ value,  
[std::chars_format](chars_format.html) fmt ); |  (4)  |  (since C++17)  
std::to_chars_result  
to_chars( char* first, char* last, /* floating-point-type */ value,  
[std::chars_format](chars_format.html) fmt, int precision ); |  (5)  |  (since C++17)  
| |   
  
Converts value into a character string by successively filling the range `[`first`, `last`)`, where `[`first`, `last`)` is required to be a [valid range](../iterator.html#Ranges "cpp/iterator"). 

1) Integer formatters: value is converted to a string of digits in the given base (with no redundant leading zeroes). Digits in the range `10..35` (inclusive) are represented as lowercase characters `a..z`. If value is less than zero, the representation starts with a minus sign. The library provides overloads for all cv-unqualified signed and unsigned integer types and for the type char as the type of the parameter value.

2) Overload for bool is deleted. `std::to_chars` rejects argument of type bool because the result would be "0"/"1" but not "false"/"true" if it is permitted.

3) value is converted to a string in the style of [std::printf](../io/c/printf.html "cpp/io/c/fprintf") in the default ("C") locale. The conversion specifier is f or e (resolving in favor of f in case of a tie), chosen according to the requirement for a shortest representation: the string representation consists of the smallest number of characters such that there is at least one digit before the radix point (if present) and parsing the representation using the corresponding [`std::from_chars`](from_chars.html "cpp/utility/from chars") function recovers value exactly. If there are several such representations, one with the smallest difference to value is chosen, resolving any remaining ties using rounding according to [std::round_to_nearest](../types/numeric_limits/float_round_style.html "cpp/types/numeric limits/float round style"). The library provides overloads for all cv-unqualified standard(until C++23) floating-point types as the type of the parameter value.

4) Same as (3), but the conversion specified for the as-if printf is f if fmt is [`std::chars_format::fixed`](chars_format.html "cpp/utility/chars format"), e if fmt is [`std::chars_format::scientific`](chars_format.html "cpp/utility/chars format"), a (but without leading "0x" in the result) if fmt is [`std::chars_format::hex`](chars_format.html "cpp/utility/chars format"), and g if fmt is [`chars_format::general`](chars_format.html "cpp/utility/chars format"). The library provides overloads for all cv-unqualified standard(until C++23) floating-point types as the type of the parameter value.

5) Same as (4), except the precision is specified by the parameter precision rather than by the shortest representation requirement. The library provides overloads for all cv-unqualified standard(until C++23) floating-point types as the type of the parameter value.

## Contents

  * [1 Parameters](to_chars.html#Parameters)
  * [2 Return value](to_chars.html#Return_value)
  * [3 Exceptions](to_chars.html#Exceptions)
  * [4 Notes](to_chars.html#Notes)
  * [5 Example](to_chars.html#Example)
  * [6 Defect reports](to_chars.html#Defect_reports)
  * [7 See also](to_chars.html#See_also)

  
---  
  
### Parameters

first, last  |  \-  |  character range to write to   
---|---|---  
value  |  \-  |  the value to convert to its string representation   
base  |  \-  |  integer base to use: a value between 2 and 36 (inclusive).   
fmt  |  \-  |  floating-point formatting to use, a bitmask of type [`std::chars_format`](chars_format.html "cpp/utility/chars format")  
precision  |  \-  |  floating-point precision to use   
  
### Return value

On success, returns a value of type [`std::to_chars_result`](to_chars_result.html "cpp/utility/to chars result") such that `ec` equals value-initialized [std::errc](../error/errc.html "cpp/error/errc") and `ptr` is the one-past-the-end pointer of the characters written. Note that the string is _not_ NUL-terminated. 

On error, returns a value of type [`std::to_chars_result`](to_chars_result.html "cpp/utility/to chars result") holding [std::errc::value_too_large](../error/errc.html "cpp/error/errc") in `ec`, a copy of the value last in `ptr`, and leaves the contents of the range `[`first`, `last`)` in unspecified state. 

### Exceptions

Throws nothing. 

### Notes

Unlike other formatting functions in C++ and C libraries, `std::to_chars` is locale-independent, non-allocating, and non-throwing. Only a small subset of formatting policies used by other libraries (such as [std::sprintf](../io/c/printf.html "cpp/io/c/fprintf")) is provided. This is intended to allow the fastest possible implementation that is useful in common high-throughput contexts such as text-based interchange ([JSON](https://en.wikipedia.org/wiki/JSON "enwiki:JSON") or [XML](https://en.wikipedia.org/wiki/XML "enwiki:XML")). 

The guarantee that [`std::from_chars`](from_chars.html "cpp/utility/from chars") can recover every floating-point value formatted by `std::to_chars` exactly is only provided if both functions are from the same implementation. 

To format a bool value as "0"/"1" using `std::to_chars`, the value must be cast to another integer type. 

[Feature-test](feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_to_chars`](../experimental/feature_test.html#cpp_lib_to_chars "cpp/feature test") | [`201611L`](../compiler_support/17.html#cpp_lib_to_chars_201611L "cpp/compiler support/17") | (C++17) | Elementary string conversions (`std::to_chars`, [`std::from_chars`](from_chars.html "cpp/utility/from chars"))   
[`202306L`](../compiler_support/26.html#cpp_lib_to_chars_202306L "cpp/compiler support/26") | (C++26) | Testing for success or failure of [`<charconv>`](../header/charconv.html "cpp/header/charconv") functions   
[`__cpp_lib_constexpr_charconv`](../experimental/feature_test.html#cpp_lib_constexpr_charconv "cpp/feature test") | [`202207L`](../compiler_support/23.html#cpp_lib_constexpr_charconv_202207L "cpp/compiler support/23") | (C++23) | Add constexpr modifiers to `std::to_chars` and [`std::from_chars`](from_chars.html "cpp/utility/from chars") overloads ([1](to_chars.html#Version_1)) for integral types   
  
### Example

Run this code
    
    
    #include <charconv>
    #include <iomanip>
    #include <iostream>
    #include <string_view>
    #include <system_error>
     
    void show_to_chars(auto... format_args)
    {
        const size_t buf_size = 10;
        char buf[buf_size]{};
        std::to_chars_result result = std::to_chars(buf, buf + buf_size, format_args...);
     
        if (result.ec != [std::errc](../error/errc.html)())
            [std::cout](../io/cout.html) << [std::make_error_code](../error/errc/make_error_code.html)(result.ec).message() << '\n';
        else
        {
            [std::string_view](../string/basic_string_view.html) str(buf, result.ptr - buf);
            [std::cout](../io/cout.html) << [std::quoted](../io/manip/quoted.html)(str) << '\n';
        }
    }
     
    int main()
    {
        show_to_chars(42);
        show_to_chars(+3.14159F);
        show_to_chars(-3.14159, std::chars_format::fixed);
        show_to_chars(-3.14159, std::chars_format::scientific, 3);
        show_to_chars(3.1415926535, std::chars_format::fixed, 10);
    }

Possible output: 
    
    
    "42"
    "3.14159"
    "-3.14159"
    "-3.142e+00"
    Value too large for defined data type

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2955](https://cplusplus.github.io/LWG/issue2955) | C++17  | this function was in [`<utility>`](../header/utility.html "cpp/header/utility") and used [std::error_code](../error/error_code.html "cpp/error/error code") | moved to [`<charconv>`](../header/charconv.html "cpp/header/charconv") and uses [std::errc](../error/errc.html "cpp/error/errc")  
[LWG 3266](https://cplusplus.github.io/LWG/issue3266) | C++17  | bool argument was accepted and promoted to int | rejected by a deleted overload   
[LWG 3373](https://cplusplus.github.io/LWG/issue3373) | C++17  | `std::to_chars_result` might have additional members  | additional members are disallowed   
  
### See also

[ to_chars_result](to_chars_result.html "cpp/utility/to chars result")(C++17) |  the return type of **`std::to_chars`**   
(class)   
---|---  
[ from_chars](from_chars.html "cpp/utility/from chars")(C++17) |  converts a character sequence to an integer or floating-point value   
(function)   
[ to_string](../string/basic_string/to_string.html "cpp/string/basic string/to string")(C++11) |  converts an integral or floating-point value to `string`   
(function)   
[ printffprintfsprintfsnprintf](../io/c/printf.html "cpp/io/c/fprintf")(C++11) |  prints formatted output to [stdout](../io/c/std_streams.html "cpp/io/c/std streams"), a file stream or a buffer   
(function)   
[ operator<<](../io/basic_ostream/operator_ltlt.html "cpp/io/basic ostream/operator ltlt") |  inserts formatted data   
(public member function of `std::basic_ostream<CharT,Traits>`) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
