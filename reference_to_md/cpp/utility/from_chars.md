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
| [to_chars](to_chars.html "cpp/utility/to chars")(C++17)  
---  
[to_chars_result](to_chars_result.html "cpp/utility/to chars result")(C++17)  
**from_chars**(C++17)  
[from_chars_result](from_chars_result.html "cpp/utility/from chars result")(C++17)  
[chars_format](chars_format.html "cpp/utility/chars format")(C++17)  
  
[Text encoding identifications](../text.html#Text_encoding_identifications "cpp/text")  
| [text_encoding](../locale/text_encoding.html "cpp/text/text encoding")(C++26)  
---  
  


Defined in header `[<charconv>](../header/charconv.html "cpp/header/charconv")` |  |   
---|---|---  
std::from_chars_result  
from_chars( const char* first, const char* last,  
/* integer-type */& value, int base = 10 ); |  (1)  |  (since C++17)   
(constexpr since C++23)  
std::from_chars_result  
from_chars( const char* first, const char* last,  
/* floating-point-type */& value,  
[std::chars_format](chars_format.html) fmt = std::chars_format::general ); |  (2)  |  (since C++17)  
| |   
  
Analyzes the character sequence `[`first`, `last`)` for a pattern described below. If no characters match the pattern or if the value obtained by parsing the matched characters is not representable in the type of value, value is unmodified, otherwise the characters matching the pattern are interpreted as a text representation of an arithmetic value, which is stored in value. 

1) Integer parsers: Expects the pattern identical to the one used by [std::strtol](../string/byte/strtol.html "cpp/string/byte/strtol") in the default ("C") locale and the given non-zero numeric base, except that 

  * "0x" or "0X" prefixes are not recognized if base is 16 
  * only the minus sign is recognized (not the plus sign), and only for signed integer types of value
  * leading whitespace is not ignored. 

The library provides overloads for all cv-unqualified(since C++23) signed and unsigned integer types and char as the referenced type of the parameter value.

2) Floating-point parsers: Expects the pattern identical to the one used by [std::strtod](../string/byte/strtof.html "cpp/string/byte/strtof") in the default ("C") locale, except that 

  * the plus sign is not recognized outside of the exponent (only the minus sign is permitted at the beginning) 
  * if `fmt` has [`std::chars_format::scientific`](chars_format.html "cpp/utility/chars format") set but not [`std::chars_format::fixed`](chars_format.html "cpp/utility/chars format"), the exponent part is required (otherwise it is optional) 
  * if `fmt` has [`std::chars_format::fixed`](chars_format.html "cpp/utility/chars format") set but not [`std::chars_format::scientific`](chars_format.html "cpp/utility/chars format"), the optional exponent is not permitted 
  * if `fmt` is [`std::chars_format::hex`](chars_format.html "cpp/utility/chars format"), the prefix "0x" or "0X" is not permitted (the string "0x123" parses as the value "0" with unparsed remainder "x123") 
  * leading whitespace is not ignored.



In any case, the resulting value is one of at most two floating-point values closest to the value of the string matching the pattern, after rounding according to [std::round_to_nearest](../types/numeric_limits/float_round_style.html "cpp/types/numeric limits/float round style").

The library provides overloads for all cv-unqualified standard(until C++23) floating-point types as the referenced type of the parameter value.

## Contents

  * [1 Parameters](from_chars.html#Parameters)
  * [2 Return value](from_chars.html#Return_value)
  * [3 Exceptions](from_chars.html#Exceptions)
  * [4 Notes](from_chars.html#Notes)
  * [5 Example](from_chars.html#Example)
  * [6 Defect reports](from_chars.html#Defect_reports)
  * [7 See also](from_chars.html#See_also)

  
---  
  
### Parameters

first, last  |  \-  |  valid character range to parse   
---|---|---  
value  |  \-  |  the out-parameter where the parsed value is stored if successful   
base  |  \-  |  integer base to use: a value between 2 and 36 (inclusive).   
fmt  |  \-  |  floating-point formatting to use, a bitmask of type [`std::chars_format`](chars_format.html "cpp/utility/chars format")  
  
### Return value

On success, returns a value of type [`std::from_chars_result`](from_chars_result.html "cpp/utility/from chars result") such that `ptr` points at the first character not matching the pattern, or has the value equal to last if all characters match and `ec` is value-initialized. 

If there is no pattern match, returns a value of type [`std::from_chars_result`](from_chars_result.html "cpp/utility/from chars result") such that `ptr` equals first and `ec` equals [std::errc::invalid_argument](../error/errc.html "cpp/error/errc"). value is unmodified. 

If the pattern was matched, but the parsed value is not in the range representable by the type of value, returns value of type [`std::from_chars_result`](from_chars_result.html "cpp/utility/from chars result") such that `ec` equals [std::errc::result_out_of_range](../error/errc.html "cpp/error/errc") and `ptr` points at the first character not matching the pattern. value is unmodified. 

### Exceptions

Throws nothing. 

### Notes

Unlike other parsing functions in C++ and C libraries, `std::from_chars` is locale-independent, non-allocating, and non-throwing. Only a small subset of parsing policies used by other libraries (such as [std::sscanf](../io/c/scanf.html "cpp/io/c/fscanf")) is provided. This is intended to allow the fastest possible implementation that is useful in common high-throughput contexts such as text-based interchange ([JSON](https://en.wikipedia.org/wiki/JSON "enwiki:JSON") or [XML](https://en.wikipedia.org/wiki/XML "enwiki:XML")). 

The guarantee that `std::from_chars` can recover every floating-point value formatted by [`std::to_chars`](to_chars.html "cpp/utility/to chars") exactly is only provided if both functions are from the same implementation. 

A pattern consisting of a sign with no digits following it is treated as pattern that did not match anything. 

[Feature-test](feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_to_chars`](../experimental/feature_test.html#cpp_lib_to_chars "cpp/feature test") | [`201611L`](../compiler_support/17.html#cpp_lib_to_chars_201611L "cpp/compiler support/17") | (C++17) | Elementary string conversions (`std::from_chars`, [`std::to_chars`](to_chars.html "cpp/utility/to chars"))   
[`202306L`](../compiler_support/26.html#cpp_lib_to_chars_202306L "cpp/compiler support/26") | (C++26) | Testing for success or failure of [`<charconv>`](../header/charconv.html "cpp/header/charconv") functions   
[`__cpp_lib_constexpr_charconv`](../experimental/feature_test.html#cpp_lib_constexpr_charconv "cpp/feature test") | [`202207L`](../compiler_support/23.html#cpp_lib_constexpr_charconv_202207L "cpp/compiler support/23") | (C++23) | Add constexpr modifiers to `std::from_chars` and [`std::to_chars`](to_chars.html "cpp/utility/to chars") overloads for integral types   
  
### Example

Run this code
    
    
    #include <cassert>
    #include <charconv>
    #include <iomanip>
    #include <iostream>
    #include <optional>
    #include <string_view>
    #include <system_error>
     
    int main()
    {
        for ([std::string_view](../string/basic_string_view.html) const str : {"1234", "15 foo", "bar", " 42", "5000000000"})
        {
            [std::cout](../io/cout.html) << "String: " << [std::quoted](../io/manip/quoted.html)(str) << ". ";
            int result{};
            auto [ptr, ec] = std::from_chars(str.data(), str.data() + str.size(), result);
     
            if (ec == [std::errc](../error/errc.html)())
                [std::cout](../io/cout.html) << "Result: " << result << ", ptr -> " << [std::quoted](../io/manip/quoted.html)(ptr) << '\n';
            else if (ec == [std::errc::invalid_argument](../error/errc.html))
                [std::cout](../io/cout.html) << "This is not a number.\n";
            else if (ec == [std::errc::result_out_of_range](../error/errc.html))
                [std::cout](../io/cout.html) << "This number is larger than an int.\n";
        }
     
        // C++23's constexpr from_char demo / C++26's operator bool() demo:
        auto to_int = []([std::string_view](../string/basic_string_view.html) s) -> [std::optional](optional.html)<int>
        {
            int value{};
    #if __cpp_lib_to_chars >= 202306L
            if (std::from_chars(s.data(), s.data() + s.size(), value))
    #else
            if (std::from_chars(s.data(), s.data() + s.size(), value).ec == [std::errc](../error/errc.html){})
    #endif
                return value;
            else
                return [std::nullopt](optional/nullopt.html);
        };
     
        [assert](../error/assert.html)(to_int("42") == 42);
        [assert](../error/assert.html)(to_int("foo") == [std::nullopt](optional/nullopt.html));
    #if __cpp_lib_constexpr_charconv and __cpp_lib_optional >= 202106
        static_assert(to_int("42") == 42);
        static_assert(to_int("foo") == [std::nullopt](optional/nullopt.html));
    #endif
    }

Output: 
    
    
    String: "1234". Result: 1234, ptr -> ""
    String: "15 foo". Result: 15, ptr -> " foo"
    String: "bar". This is not a number.
    String: " 42". This is not a number.
    String: "5000000000". This number is larger than an int.

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2955](https://cplusplus.github.io/LWG/issue2955) | C++17  | this function was in [`<utility>`](../header/utility.html "cpp/header/utility") and used [std::error_code](../error/error_code.html "cpp/error/error code") | moved to [`<charconv>`](../header/charconv.html "cpp/header/charconv") and uses [std::errc](../error/errc.html "cpp/error/errc")  
[LWG 3373](https://cplusplus.github.io/LWG/issue3373) | C++17  | `std::from_chars_result` might have additional members  | additional members are prohibited   
  
### See also

[ from_chars_result](from_chars_result.html "cpp/utility/from chars result")(C++17) |  the return type of **`std::from_chars`**   
(class)   
---|---  
[ to_chars](to_chars.html "cpp/utility/to chars")(C++17) |  converts an integer or floating-point value to a character sequence   
(function)   
[ stoistolstoll](../string/basic_string/stol.html "cpp/string/basic string/stol")(C++11)(C++11)(C++11) |  converts a string to a signed integer   
(function)   
[ stofstodstold](../string/basic_string/stof.html "cpp/string/basic string/stof")(C++11)(C++11)(C++11) |  converts a string to a floating point value   
(function)   
[ strtolstrtoll](../string/byte/strtol.html "cpp/string/byte/strtol")(C++11) |  converts a byte string to an integer value   
(function)   
[ strtofstrtodstrtold](../string/byte/strtof.html "cpp/string/byte/strtof") |  converts a byte string to a floating-point value   
(function)   
[ scanffscanfsscanf](../io/c/scanf.html "cpp/io/c/fscanf") |  reads formatted input from [stdin](../io/c/std_streams.html "cpp/io/c/std streams"), a file stream or a buffer   
(function)   
[ operator>>](../io/basic_istream/operator_gtgt.html "cpp/io/basic istream/operator gtgt") |  extracts formatted data   
(public member function of `std::basic_istream<CharT,Traits>`) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
