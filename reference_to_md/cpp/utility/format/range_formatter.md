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
  


[Formatting library](../format.html "cpp/utility/format")

[Standard format specification](spec.html "cpp/utility/format/spec")  
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
**range_formatter**(C++23)  
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
  


Defined in header `[<format>](../../header/format.html "cpp/header/format")` |  |   
---|---|---  
template< class T, class CharT = char >  
requires [std::same_as](../../concepts/same_as.html)<[std::remove_cvref_t](../../types/remove_cvref.html)<T>, T> && [std::formattable](formattable.html)<T, CharT>  
class range_formatter; |  |  (since C++23)  
| |   
  
`std::range_formatter` is a helper class template for implementing range [std::formatter](formatter.html "cpp/utility/format/formatter") specializations. 

## Contents

  * [1 Range format specification](range_formatter.html#Range_format_specification)
  * [2 Data members](range_formatter.html#Data_members)
  * [3 Member functions](range_formatter.html#Member_functions)
  * [4 std::range_formatter::set_separator](range_formatter.html#std::range_formatter::set_separator)
  * [5 std::range_formatter::set_brackets](range_formatter.html#std::range_formatter::set_brackets)
  * [6 std::range_formatter::underlying](range_formatter.html#std::range_formatter::underlying)
  * [7 std::range_formatter::parse](range_formatter.html#std::range_formatter::parse)
  * [8 std::range_formatter::format](range_formatter.html#std::range_formatter::format)
    * [8.1 Defect reports](range_formatter.html#Defect_reports)
    * [8.2 See also](range_formatter.html#See_also)

  
---  
  
### Range format specification

The syntax of range-format-spec is:   
  
---  
range-fill-and-align ﻿(optional) width ﻿(optional) `**n**`(optional) range-type ﻿(optional) range-underlying-spec ﻿(optional) |  |   
  
The range-fill-and-align is interpreted the same way as a fill-and-align except that the fill in range-fill-and-align is any character other than `**{**`, `**}**`, or `**:**`. 

The width is described in [standard format width specification](spec.html#Width_and_precision "cpp/utility/format/spec"). 

The `**n**` option causes the range to be formatted without the opening and closing brackets. 
    
    
    [assert](../../error/assert.html)([std::format](format.html)("{}", [views::iota](../../ranges/iota_view.html)(1, 5)) == "[1, 2, 3, 4]");
    [assert](../../error/assert.html)([std::format](format.html)("{:n}", [views::iota](../../ranges/iota_view.html)(1, 5)) == "1, 2, 3, 4");

The format-spec in a range-underlying-spec (its syntax is equivalent to `:` format-spec), if any, is interpreted by the range element formatter `std::formatter<T, CharT>`. 
    
    
    [std::array](../../container/array.html) ints{12, 10, 15, 14};
     
    [assert](../../error/assert.html)([std::format](format.html)("{}", ints) == "[12, 10, 15, 14]");
    [assert](../../error/assert.html)([std::format](format.html)("{::X}", ints) == "[C, A, F, E]");
    [assert](../../error/assert.html)([std::format](format.html)("{:n:_^4}", ints) == "_12_, _10_, _15_, _14_");

The range-type changes the way a range is formatted, with certain options only valid with certain argument types. 

The available range presentation types are: 

  * `**m**`: Indicates that the opening bracket should be "{", the closing bracket should be "}", the separator should be ", ", and each range element should be formatted as if `**m**` were specified for its tuple-type (in [tuple-format-spec](tuple_formatter.html#Format_specification "cpp/utility/format/tuple formatter")). 



    

  * If `**m**` is chosen as the range-type, the program is ill-formed unless `T` is either a specialization of: 



    

  * [std::pair](../pair.html "cpp/utility/pair"), or 
  * [std::tuple](../tuple.html "cpp/utility/tuple") such that [std::tuple_size_v](../tuple_size.html)<T> == 2 is true. 


    
    
    [std::array](../../container/array.html) char_pairs
    {
        [std::pair](../pair.html){'A', 5}, [std::pair](../pair.html){'B', 10}, [std::pair](../pair.html){'C', 12}
    };
     
    [assert](../../error/assert.html)([std::format](format.html)("{}", char_pairs) == "[('A', 5), ('B', 10), ('C', 12)]");
    [assert](../../error/assert.html)([std::format](format.html)("{:m}", char_pairs) == "{'A': 5, 'B': 10, 'C': 12}");

  * `**s**`: Indicates that the range should be formatted as a string. 
  * `**?s**`: Indicates that the range should be formatted as an [escaped string](spec.html#Formatting_escaped_characters_and_strings "cpp/utility/format/spec"). 



    

  * If `**s**` or `**?s**` is chosen as the range-type, both `**n**` option and range-underlying-spec should not be included in the format specifier, and 
  * the program is ill-formed unless `T` is `CharT`. 


    
    
    [std::array](../../container/array.html) star{'S', 'T', 'A', 'R'};
     
    [assert](../../error/assert.html)([std::format](format.html)("{}", star) == "['S', 'T', 'A', 'R']");
    [assert](../../error/assert.html)([std::format](format.html)("{:s}", star) == "STAR");
    [assert](../../error/assert.html)([std::format](format.html)("{:?s}", star) == "\"STAR\"");

### Data members

Member name  |  Definition   
---|---  
[std::formatter](formatter.html)<T, CharT> `_underlying__` (private) |  the underlying formatter for elements  
(exposition-only member object*)  
[std::basic_string_view](../../string/basic_string_view.html)<CharT> `_separator__` (private) |  a string representing the separator of the range formatted result. The default separator is ", ".  
(exposition-only member object*)  
[std::basic_string_view](../../string/basic_string_view.html)<CharT> `_opening-bracket__` (private) |  a string representing the opening bracket of the range formatted result. The default opening bracket is "[".  
(exposition-only member object*)  
[std::basic_string_view](../../string/basic_string_view.html)<CharT> `_closing-bracket__` (private) |  a string representing the closing bracket of the range formatted result. The default closing bracket is "]".  
(exposition-only member object*)  
  
### Member functions

set_separator |  sets a specified separator for the range formatted result   
(public member function)  
---|---  
set_brackets |  sets a specified opening and closing brackets for the range formatted result   
(public member function)  
underlying |  returns the underlying formatter   
(public member function)  
parse |  parses the format specifier as specified by range-format-spec   
(public member function)  
format |  writes the range formatted output as specified by range-format-spec   
(public member function)  
  
##  std::range_formatter::set_separator

constexpr void set_separator( [std::basic_string_view](../../string/basic_string_view.html)<CharT> sep ) noexcept; |  |   
---|---|---  
| |   
  
Assigns sep to `_separator__`. 

##  std::range_formatter::set_brackets

constexpr void set_brackets( [std::basic_string_view](../../string/basic_string_view.html)<CharT> opening,  
[std::basic_string_view](../../string/basic_string_view.html)<CharT> closing ) noexcept; |  |   
---|---|---  
| |   
  
Assigns opening and closing to `_opening-bracket__` and `_closing-bracket__`, respectively. 

##  std::range_formatter::underlying

constexpr [std::formatter](formatter.html)<T, CharT>& underlying(); |  (1)  |   
---|---|---  
constexpr const [std::formatter](formatter.html)<T, CharT>& underlying() const; |  (2)  |   
| |   
  
Returns `_underlying__` (the underlying formatter). 

##  std::range_formatter::parse

template< class ParseContext >  
constexpr auto parse( ParseContext& ctx ) -> ParseContext::iterator; |  |   
---|---|---  
| |   
  
Parses the format specifiers as a range-format-spec and stores the parsed specifiers in the current object. 

Calls `_underlying__`.parse(ctx) to parse format-spec in range-format-spec or, if the latter is not present, an empty format-spec. 

If range-type or the `**n**` option is present, the values of `_opening-bracket__`, `_closing-bracket__`, and `_separator__` are modified as required. 

It calls `_underlying__`.set_debug_format() if: 

  * the range-type is neither `**s**` nor `**?s**`, 
  * `_underlying__`.set_debug_format() is a valid expression, and 
  * there is no range-underlying-spec. 



Returns an iterator past the end of the range-format-spec. 

##  std::range_formatter::format

template< [ranges::input_range](../../ranges/input_range.html) R, class FormatContext >  
requires [std::formattable](formattable.html)<[ranges::range_reference_t](../../ranges/range_reference_t.html)<R>, CharT> &&  
[std::same_as](../../concepts/same_as.html)<[std::remove_cvref_t](../../types/remove_cvref.html)<[ranges::range_reference_t](../../ranges/range_reference_t.html)<R>>, T>  
auto format( R&& r, FormatContext& ctx ) const -> FormatContext::iterator; |  |   
---|---|---  
| |   
  
If the range-type was either `**s**` or `**?s**`, it writes the formatted [std::basic_string](../../string/basic_string.html)<CharT>([std::from_range](../../ranges/from_range.html), r) as a string or an escaped string, respectively, into ctx.out(). 

Otherwise, it writes the following into ctx.out() as specified by range-format-spec, in order: 

  * `_opening-bracket__` , 
  * for each formattable element e of the range r: 



    

  * the result of writing e via `_underlying__`, and 
  * `_separator__` , unless e is the last element of r, and 



  * `_closing-bracket__`. 



Returns an iterator past the end of the output range. 

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3892](https://cplusplus.github.io/LWG/issue3892) | C++23  | the formatting of nested ranges was incorrect  | corrected   
  
### See also

[ formatter](formatter.html "cpp/utility/format/formatter")(C++20) |  defines formatting rules for a given type   
(class template)   
---|---
