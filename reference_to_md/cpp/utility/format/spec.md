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
[Formatting library](../format.html "cpp/utility/format") (C++20)  
[Null-terminated sequence utilities](../../text.html#Null-terminated_sequence_utilities "cpp/text")  
[Byte strings](../../string/byte.html "cpp/string/byte")  
[Multibyte strings](../../string/multibyte.html "cpp/string/multibyte")  
[Wide strings](../../string/wide.html "cpp/string/wide")  
[Primitive numeric conversions](../../text.html#Primitive_numeric_conversions "cpp/text")  
| [to_chars](../to_chars.html "cpp/utility/to chars")(C++17)  
---  
[to_chars_result](../to_chars_result.html "cpp/utility/to chars result")(C++17)  
[from_chars](../from_chars.html "cpp/utility/from chars")(C++17)  
[from_chars_result](../from_chars_result.html "cpp/utility/from chars result")(C++17)  
[chars_format](../chars_format.html "cpp/utility/chars format")(C++17)  
  
[Text encoding identifications](../../text.html#Text_encoding_identifications "cpp/text")  
| [text_encoding](../../locale/text_encoding.html "cpp/text/text encoding")(C++26)  
---  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/text/navbar_content&action=edit)

[Formatting library](../format.html "cpp/utility/format")

**Standard format specification**  
---  
[Formatting functions](format.html#Formatting_functions "cpp/utility/format/format")  
[format](format.html "cpp/utility/format/format")(C++20)  
[format_to](format_to.html "cpp/utility/format/format to")(C++20)  
[format_to_n](format_to_n.html "cpp/utility/format/format to n")(C++20)  
[formatted_size](formatted_size.html "cpp/utility/format/formatted size")(C++20)  
[vformat](vformat.html "cpp/utility/format/vformat")(C++20)  
[vformat_to](vformat_to.html "cpp/utility/format/vformat to")(C++20)  
[Format strings](format.html#Format_strings "cpp/utility/format/format")  
[basic_format_stringformat_stringwformat_string](basic_format_string.html "cpp/utility/format/basic format string")(C++20)(C++20)(C++20)  
[runtime_format](runtime_format.html "cpp/utility/format/runtime format")(C++26)  
[Formatting concepts](format.html#Formatting_concepts "cpp/utility/format/format")  
[formattable](formattable.html "cpp/utility/format/formattable")(C++23)  
Formatter  
[formatter](formatter.html "cpp/utility/format/formatter")(C++20)  
[formatter<_pair-or-tuple_ >](tuple_formatter.html "cpp/utility/format/tuple formatter")(C++23)  
[formatter<_range_ >](ranges_formatter.html "cpp/utility/format/ranges formatter")(C++23)  
[range_formatter](range_formatter.html "cpp/utility/format/range formatter")(C++23)  
[enable_nonlocking_formatter_optimization](enable_nonlocking_formatter_optimization.html "cpp/utility/format/enable nonlocking formatter optimization")(C++23)  
[basic_format_parse_contextformat_parse_contextwformat_parse_context](basic_format_parse_context.html "cpp/utility/format/basic format parse context")(C++20)(C++20)(C++20)  
[basic_format_contextformat_contextwformat_context](basic_format_context.html "cpp/utility/format/basic format context")(C++20)(C++20)(C++20)  
[range_format](range_format.html "cpp/utility/format/range format")(C++23)  
[format_kind](format_kind.html "cpp/utility/format/format kind")(C++23)  
Formatting arguments  
[basic_format_arg](basic_format_arg.html "cpp/utility/format/basic format arg")(C++20)  
[basic_format_arg::handle](basic_format_arg/handle.html "cpp/utility/format/basic format arg/handle")(C++20)  
[basic_format_argsformat_argswformat_args](basic_format_args.html "cpp/utility/format/basic format args")(C++20)(C++20)(C++20)  
[visit_format_arg](visit_format_arg.html "cpp/utility/format/visit format arg")(C++20) (deprecated in C++26)  
[make_format_argsmake_wformat_args](make_format_args.html "cpp/utility/format/make format args")(C++20)(C++20)  
[Format error](format.html#Format_error "cpp/utility/format/format")  
[format_error](format_error.html "cpp/utility/format/format error")(C++20)  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/utility/format/navbar_content&action=edit)

For basic types and string types, the format specification is based on the [format specification in Python](https://docs.python.org/3/library/string.html#formatspec). 

The syntax of format specifications is:   
  
---  
fill-and-align ﻿(optional) sign ﻿(optional) `**#**`(optional) `**0**`(optional) width ﻿(optional) precision ﻿(optional) `**L**`(optional) type ﻿(optional) |  |   
  
The sign, `**#**` and `**0**` options are only valid when an integer or floating-point presentation type is used. 

## Contents

  * [1 Fill and align](spec.html#Fill_and_align)
  * [2 Sign, #, and 0](spec.html#Sign.2C_.23.2C_and_0)
  * [3 Width and precision](spec.html#Width_and_precision)
  * [4 L (locale-specific formatting)](spec.html#L_.28locale-specific_formatting.29)
  * [5 Type](spec.html#Type)
  * [6 Formatting escaped characters and strings](spec.html#Formatting_escaped_characters_and_strings)
  * [7 Notes](spec.html#Notes)
  * [8 Defect reports](spec.html#Defect_reports)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/format/spec&action=edit&section=1 "Edit section: Fill and align")] Fill and align

fill-and-align is an optional _fill_ character (which can be any character other than `**{**` or `**}**`), followed by one of the _align_ options `**<**`, `**>**`, `**^**`. 

If no fill character is specified, it defaults to the space character. For a format specification in a Unicode encoding, the fill character must correspond to a single Unicode scalar value. 

The meaning of _align_ options is as follows: 

  * `**<**`: Forces the formatted argument to be aligned to the start of the available space by inserting n fill characters after the formatted argument. This is the default when a non-integer non-floating-point presentation type is used. 
  * `**>**`: Forces the formatted argument to be aligned to the end of the available space by inserting n fill characters before the formatted argument. This is the default when an integer or floating-point presentation type is used. 
  * `**^**`: Forces the formatted argument to be centered within the available space by inserting ⌊n  
---  
2  
⌋ characters before and ⌈n  
---  
2  
⌉ characters after the formatted argument. 



In each case, n is the difference of the minimum field width (specified by width) and the [estimated width](spec.html#Width_estimation) of the formatted argument, or 0 if the difference is less than 0. 

Run this code
    
    
    #include <cassert>
    #include <format>
     
    int main()
    {
        char c = 120;
        [assert](../../error/assert.html)([std::format](format.html)("{:6}", 42)    == "    42");
        [assert](../../error/assert.html)([std::format](format.html)("{:6}", 'x')   == "x     ");
        [assert](../../error/assert.html)([std::format](format.html)("{:*<6}", 'x') == "x*****");
        [assert](../../error/assert.html)([std::format](format.html)("{:*>6}", 'x') == "*****x");
        [assert](../../error/assert.html)([std::format](format.html)("{:*^6}", 'x') == "**x***");
        [assert](../../error/assert.html)([std::format](format.html)("{:6d}", c)    == "   120");
        [assert](../../error/assert.html)([std::format](format.html)("{:6}", true)  == "true  ");
    }

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/format/spec&action=edit&section=2 "Edit section: Sign, #, and 0")] Sign, #, and 0

The sign option can be one of following: 

  * `**+**`: Indicates that a sign should be used for both non-negative and negative numbers. The `+` sign is inserted before the output value for non-negative numbers. 
  * `**-**`: Indicates that a sign should be used for negative numbers only (this is the default behavior). 
  * space: Indicates that a leading space should be used for non-negative numbers, and a minus sign for negative numbers. 



Negative zero is treated as a negative number. 

The sign option applies to floating-point infinity and NaN. 

Run this code
    
    
    #include <cassert>
    #include <format>
    #include <limits>
     
    int main()
    {
        double inf = [std::numeric_limits](../../types/numeric_limits.html)<double>::infinity();
        double nan = [std::numeric_limits](../../types/numeric_limits.html)<double>::quiet_NaN();
        [assert](../../error/assert.html)([std::format](format.html)("{0:},{0:+},{0:-},{0: }", 1)   == "1,+1,1, 1");
        [assert](../../error/assert.html)([std::format](format.html)("{0:},{0:+},{0:-},{0: }", -1)  == "-1,-1,-1,-1");
        [assert](../../error/assert.html)([std::format](format.html)("{0:},{0:+},{0:-},{0: }", inf) == "inf,+inf,inf, inf");
        [assert](../../error/assert.html)([std::format](format.html)("{0:},{0:+},{0:-},{0: }", nan) == "nan,+nan,nan, nan");
    }

The `**#**` option causes the _alternate form_ to be used for the conversion. 

  * For integral types, when binary, octal, or hexadecimal presentation type is used, the alternate form inserts the prefix (`0b`, `0`, or `0x`) into the output value after the sign character (possibly space) if there is one, or add it before the output value otherwise. 
  * For floating-point types, the alternate form causes the result of the conversion of finite values to always contain a decimal-point character, even if no digits follow it. Normally, a decimal-point character appears in the result of these conversions only if a digit follows it. In addition, for `**g**` and `**G**` conversions, trailing zeros are not removed from the result. 



The `**0**` option pads the field with leading zeros (following any indication of sign or base) to the field width, except when applied to an infinity or NaN. If the `0` character and an _align_ option both appear, the `0` character is ignored. 

Run this code
    
    
    #include <cassert>
    #include <format>
     
    int main()
    {
        char c = 120;
        [assert](../../error/assert.html)([std::format](format.html)("{:+06d}", c)   == "+00120");
        [assert](../../error/assert.html)([std::format](format.html)("{:#06x}", 0xa) == "0x000a");
        [assert](../../error/assert.html)([std::format](format.html)("{:<06}", -42)  == "-42   "); // 0 is ignored because of '<'
    }

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/format/spec&action=edit&section=3 "Edit section: Width and precision")] Width and precision

width is either a positive decimal number, or a nested replacement field (`**{}**` or `**{**`_n_`**}**`). If present, it specifies the minimum field width. 

precision is a dot (`**.**`) followed by either a non-negative decimal number or a nested replacement field. This field indicates the precision or maximum field size. It can only be used with floating-point and string types. 

  * For floating-point types, this field specifies the formatting precision. 
  * For string types, it provides an upper bound for the estimated width (see [below](spec.html#Width_estimation)) of the prefix of the string to be copied to the output. For a string in a Unicode encoding, the text to be copied to the output is the longest prefix of whole extended grapheme clusters whose estimated width is no greater than the precision. 



If a nested replacement field is used for width or precision, and the corresponding argument is not of [integral type](../../language/type-id.html "cpp/language/type")(until C++23)[standard signed or unsigned integer type](../../language/type-id.html "cpp/language/type")(since C++23), or is negative, an exception of type [std::format_error](format_error.html "cpp/utility/format/format error") is thrown. 
    
    
    float pi = 3.14f;
    [assert](../../error/assert.html)([std::format](format.html)("{:10f}", pi)           == "  3.140000"); // width = 10
    [assert](../../error/assert.html)([std::format](format.html)("{:{}f}", pi, 10)       == "  3.140000"); // width = 10
    [assert](../../error/assert.html)([std::format](format.html)("{:.5f}", pi)           == "3.14000");    // precision = 5
    [assert](../../error/assert.html)([std::format](format.html)("{:.{}f}", pi, 5)       == "3.14000");    // precision = 5
    [assert](../../error/assert.html)([std::format](format.html)("{:10.5f}", pi)         == "   3.14000"); // width = 10, precision = 5
    [assert](../../error/assert.html)([std::format](format.html)("{:{}.{}f}", pi, 10, 5) == "   3.14000"); // width = 10, precision = 5
     
    auto b1 = [std::format](format.html)("{:{}f}", pi, 10.0); // throws: width is not of integral type
    auto b2 = [std::format](format.html)("{:{}f}", pi, -10);  // throws: width is negative
    auto b3 = [std::format](format.html)("{:.{}f}", pi, 5.0); // throws: precision is not of integral type

The width of a string is defined as the estimated number of column positions appropriate for displaying it in a terminal. 

For the purpose of width computation, a string is assumed to be in an implementation-defined encoding. The method of width computation is unspecified, but for a string in a Unicode encoding, implementation should estimate the width of the string as the sum of estimated widths of the first code points in its [extended grapheme clusters](https://www.unicode.org/reports/tr29/). The estimated width is 2 for the following code points, and is 1 otherwise: 

  * Any code point whose Unicode property [`East_Asian_Width`](https://www.unicode.org/reports/tr44/#East_Asian_Width) has value Fullwidth (`F`) or Wide (`W`) 
  * U+4DC0 - U+4DFF (Yijing Hexagram Symbols) 
  * U+1F300 – U+1F5FF (Miscellaneous Symbols and Pictographs) 
  * U+1F900 – U+1F9FF (Supplemental Symbols and Pictographs) 



Run this code
    
    
    #include <cassert>
    #include <format>
     
    int main()
    {
        [assert](../../error/assert.html)([std::format](format.html)("{:.^5s}",   "🐱")    == ".🐱..");
        [assert](../../error/assert.html)([std::format](format.html)("{:.5s}",    "🐱🐱🐱") == "🐱🐱");
        [assert](../../error/assert.html)([std::format](format.html)("{:.<5.5s}", "🐱🐱🐱") == "🐱🐱.");
    }

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/format/spec&action=edit&section=4 "Edit section: L \(locale-specific formatting\)")] L (locale-specific formatting)

The `**L**` option causes the locale-specific form to be used. This option is only valid for arithmetic types. 

  * For integral types, the locale-specific form inserts the appropriate digit group separator characters according to the context's locale. 
  * For floating-point types, the locale-specific form inserts the appropriate digit group and radix separator characters according to the context's locale. 
  * For the textual representation of `bool`, the locale-specific form uses the appropriate string as if obtained with [std::numpunct::truename](../../locale/numpunct/truefalsename.html "cpp/locale/numpunct/truefalsename") or [std::numpunct::falsename](../../locale/numpunct/truefalsename.html "cpp/locale/numpunct/truefalsename"). 



### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/format/spec&action=edit&section=5 "Edit section: Type")] Type

The type option determines how the data should be presented. 

The available string presentation types are: 

  * none, `**s**`: Copies the string to the output. 



  * `**?**`: Copies the escaped string (see [below](spec.html#Formatting_escaped_characters_and_strings)) to the output. 

| (since C++23)  
---|---  
  
The available integer presentation types for integral types other than char, wchar_t, and bool are: 

  * `**b**`: Binary format. Produces the output as if by calling [std::to_chars](../to_chars.html)(first, last, value, 2). The base prefix is `0b`. 
  * `**B**`: same as `**b**`, except that the base prefix is `0B`. 
  * `**c**`: Copies the character static_cast<CharT>(value) to the output, where `CharT` is the character type of the format string. Throws [std::format_error](format_error.html "cpp/utility/format/format error") if value is not in the range of representable values for `CharT`. 
  * `**d**`: Decimal format. Produces the output as if by calling [std::to_chars](../to_chars.html)(first, last, value). 
  * `**o**`: Octal format. Produces the output as if by calling [std::to_chars](../to_chars.html)(first, last, value, 8). The base prefix is `0` if the corresponding argument value is non-zero and is empty otherwise. 
  * `**x**`: Hex format. Produces the output as if by calling [std::to_chars](../to_chars.html)(first, last, value, 16). The base prefix is `0x`. 
  * `**X**`: same as `**x**`, except that it uses uppercase letters for digits above 9 and the base prefix is `0X`. 
  * none: same as `**d**`. 



The available char and wchar_t presentation types are: 

  * none, `**c**`: Copies the character to the output. 
  * `**b**`, `**B**`, `**d**`, `**o**`, `**x**`, `**X**`: Uses integer presentation types with the value static_cast<unsigned char>(value) or static_cast<[std::make_unsigned_t](../../types/make_unsigned.html)<wchar_t>>(value) respectively. 



  * `**?**`: Copies the escaped character (see [below](spec.html#Formatting_escaped_characters_and_strings)) to the output. 

| (since C++23)  
---|---  
  
The available bool presentation types are: 

  * none, `**s**`: Copies textual representation (`**true**` or `**false**`, or the locale-specific form) to the output. 
  * `**b**`, `**B**`, `**d**`, `**o**`, `**x**`, `**X**`: Uses integer presentation types with the value static_cast<unsigned char>(value). 



The available floating-point presentation types are: 

  * `**a**`: If _precision_ is specified, produces the output as if by calling [std::to_chars](../to_chars.html)(first, last, value, std::chars_format::hex, precision) where precision is the specified precision; otherwise, the output is produced as if by calling [std::to_chars](../to_chars.html)(first, last, value, std::chars_format::hex). 
  * `**A**`: same as `**a**`, except that it uses uppercase letters for digits above 9 and uses `P` to indicate the exponent. 
  * `**e**`: Produces the output as if by calling [std::to_chars](../to_chars.html)(first, last, value, std::chars_format::scientific, precision) where precision is the specified precision, or 6 if precision is not specified. 
  * `**E**`: same as `**e**`, except that it uses `E` to indicate the exponent. 
  * `**f**`, `**F**`: Produces the output as if by calling [std::to_chars](../to_chars.html)(first, last, value, std::chars_format::fixed, precision) where precision is the specified precision, or 6 if precision is not specified. 
  * `**g**`: Produces the output as if by calling [std::to_chars](../to_chars.html)(first, last, value, std::chars_format::general, precision) where precision is the specified precision, or 6 if precision is not specified. 
  * `**G**`: same as `**g**`, except that it uses `E` to indicate the exponent. 
  * none: If _precision_ is specified, produces the output as if by calling [std::to_chars](../to_chars.html)(first, last, value, std::chars_format::general, precision) where precision is the specified precision; otherwise, the output is produced as if by calling [std::to_chars](../to_chars.html)(first, last, value). 



For lower-case presentation types, infinity and NaN are formatted as `inf` and `nan`, respectively. For upper-case presentation types, infinity and NaN are formatted as `INF` and `NAN`, respectively. 

[std::format](format.html "cpp/utility/format/format") specifier  |  std::chars_format |  corresponding [std::printf](../../io/c/printf.html "cpp/io/c/fprintf") specifier   
---|---|---  
`a`, `A` |  std::chars_format::hex |  `a`, `A` (but `std::format` does not output leading `0x` or `0X`)   
`e`, `E` |  std::chars_format::scientific |  `e`, `E`  
`f`, `F` |  std::chars_format::fixed |  `f`, `F`  
`g`, `G` |  std::chars_format::general |  `g`, `G`  
none  |  std::chars_format::general if precision is specified, otherwise the shortest round-trip format  |  `g` if precision is specified. Otherwise there's no corresponding specifier.   
  
The available pointer presentation types (also used for [std::nullptr_t](../../types/nullptr_t.html "cpp/types/nullptr t")) are: 

  * none, `**p**`: If [std::uintptr_t](../../types/integer.html "cpp/types/integer") is defined, produces the output as if by calling [std::to_chars](../to_chars.html)(first, last, reinterpret_cast<[std::uintptr_t](../../types/integer.html)>(value), 16) with the prefix `0x` added to the output; otherwise, the output is implementation-defined. 



  * `**P**`: same as `**p**`, except that it uses uppercase letters for digits above 9 and the base prefix is `0X`. 

| (since C++26)  
---|---  
  
  


###  Formatting escaped characters and strings

A character or string can be formatted as _escaped_ to make it more suitable for debugging or for logging. Escaping is done as follows: 

  * For each well-formed code unit sequence that encodes a character _C_ : 



    

  * If _C_ is one of the characters in the following table, the corresponding escape sequence is used. 


|  Character  |  Escape sequence  |  Notes   
---|---|---  
horizontal tab (byte 0x09 in ASCII encoding)  |  `**\t**` |   
line feed - new line (byte 0x0a in ASCII encoding)  |  `**\n**` |   
carriage return (byte 0x0d in ASCII encoding)  |  `**\r**` |   
double quote (byte 0x22 in ASCII encoding)  |  `**\"**` |  Used only if the output is a double-quoted string   
single quote (byte 0x27 in ASCII encoding)  |  `**\'**` |  Used only if the output is a single-quoted string   
backslash (byte 0x5c in ASCII encoding)  |  `**\\**` |   
  
    

  * Otherwise, if _C_ is not the space character (byte 0x20 in ASCII encoding), and either 



    

  * the associated character encoding is a Unicode encoding and 



    

  * _C_ corresponds to a Unicode scalar value whose Unicode property [`General_Category`](https://www.unicode.org/reports/tr44/#General_Category_Values) has a value in the groups `Separator` (`Z`) or `Other` (`C`), or 
  * _C_ is not immediately preceded by a non-escaped character, and _C_ corresponds to a Unicode scalar value which has the Unicode property `Grapheme_Extend=Yes`, or 



  * the associated character encoding is not a Unicode encoding and _C_ is one of an implementation-defined set of separator or non-printable characters 


     the escape sequence is `**\u{**_hex-digit-sequence_**}**`, where `_hex-digit-sequence_` is the shortest hexadecimal representation of _C_ using lower-case hexadecimal digits. 

  * Otherwise, _C_ is copied as is. 



  * A code unit sequence that is a shift sequence has unspecified effect on the output and further decoding of the string. 
  * Other code units (i.e. those in ill-formed code unit sequences) are each replaced with `**\x{**_hex-digit-sequence_**}**`, where `_hex-digit-sequence_` is the shortest hexadecimal representation of the code unit using lower-case hexadecimal digits. 



The escaped string representation of a string is constructed by escaping the code unit sequences in the string, as described above, and quoting the result with double quotes. 

The escaped representation of a character is constructed by escaping it as described above, and quoting the result with single quotes. 

[Compiler Explorer demo](https://godbolt.org/z/WxhTs6b69):

Run this code
    
    
    #include <print>
     
    int main()
    {
        [std::println](../../io/println.html)("[{:?}]", "h\tllo");             // prints: ["h\tllo"]
        [std::println](../../io/println.html)("[{:?}]", "Спасибо, Виктор ♥!"); // prints: ["Спасибо, Виктор ♥!"]
        [std::println](../../io/println.html)("[{:?}] [{:?}]", '\'', '"');     // prints: ['\'', '"']
     
        // The following examples assume use of the UTF-8 encoding
        [std::println](../../io/println.html)("[{:?}]", [std::string](../../string/basic_string.html)("\0 \n \t \x02 \x1b", 9));
                                                 // prints: ["\u{0} \n \t \u{2} \u{1b}"]
        [std::println](../../io/println.html)("[{:?}]", "\xc3\x28");      // invalid UTF-8
                                                 // prints: ["\x{c3}("]
        [std::println](../../io/println.html)("[{:?}]", "\u0301");        // prints: ["\u{301}"]
        [std::println](../../io/println.html)("[{:?}]", "\\\u0301");      // prints: ["\\\u{301}"]
        [std::println](../../io/println.html)("[{:?}]", "e\u0301\u0323"); // prints: ["ẹ́"]
    }

(since C++23)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/format/spec&action=edit&section=7 "Edit section: Notes")] Notes

In most of the cases the syntax is similar to the old `**%**`-formatting, with the addition of the `**{}**` and with `**:**` used instead of `**%**`. For example, "%03.2f" can be translated to "{:03.2f}". 

[Feature-test](../feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_format_uchar`](../../experimental/feature_test.html#cpp_lib_format_uchar "cpp/feature test") | [`202311L`](../../compiler_support/20.html#cpp_lib_format_uchar_202311L "cpp/compiler support/20") | (C++20)  
(DR) | Formatting of code units as unsigned integers   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/format/spec&action=edit&section=8 "Edit section: Defect reports")] Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3721](https://cplusplus.github.io/LWG/issue3721) | C++20  | zero is not allowed for the width field  
in standard format specification  | zero is permitted if specified  
via a replacement field   
[P2909R4](https://wg21.link/P2909R4) | C++20  | char or wchar_t might be formatted as  
out-of-range unsigned integer values  | code units are converted to the corresponding  
unsigned type before such formatting 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
