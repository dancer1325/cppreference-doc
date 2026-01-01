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
**formatter <_pair-or-tuple_ >**(C++23)  
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

Defined in header `[<format>](../../header/format.html "cpp/header/format")` |  |   
---|---|---  
template< class CharT, [std::formattable](formattable.html)<CharT>... Ts >  
struct formatter</*pair-or-tuple*/<Ts...>, CharT>; |  |  (since C++23)  
| |   
  
The template specialization of [std::formatter](formatter.html "cpp/utility/format/formatter") for the [std::pair](../pair.html "cpp/utility/pair") and [std::tuple](../tuple.html "cpp/utility/tuple") allows users to convert a pair or a tuple to its textual representation as a collection of elements using [formatting functions](../format.html "cpp/utility/format"). 

The exposition-only name /*pair-or-tuple*/ denotes either class template [std::pair](../pair.html "cpp/utility/pair") or [std::tuple](../tuple.html "cpp/utility/tuple"). 

This specialization meets the [Formatter](../../named_req/Formatter.html "cpp/named req/Formatter") requirements if ([std::formattable](formattable.html)<const Ts, CharT> && ...) is true. It always meets the [BasicFormatter](../../named_req/BasicFormatter.html "cpp/named req/BasicFormatter") requirements. 

## Contents

  * [1 Format specification](tuple_formatter.html#Format_specification)
  * [2 Member objects](tuple_formatter.html#Member_objects)
  * [3 Member functions](tuple_formatter.html#Member_functions)
  * [4 std::formatter<_pair-or-tuple_ >::set_separator](tuple_formatter.html#std::formatter.3Cpair-or-tuple.3E::set_separator)
  * [5 std::formatter<_pair-or-tuple_ >::set_brackets](tuple_formatter.html#std::formatter.3Cpair-or-tuple.3E::set_brackets)
  * [6 std::formatter<_pair-or-tuple_ >::parse](tuple_formatter.html#std::formatter.3Cpair-or-tuple.3E::parse)
  * [7 std::formatter<_pair-or-tuple_ >::format](tuple_formatter.html#std::formatter.3Cpair-or-tuple.3E::format)
    * [7.1 Defect reports](tuple_formatter.html#Defect_reports)
    * [7.2 See also](tuple_formatter.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/format/tuple_formatter&action=edit&section=1 "Edit section: Format specification")] Format specification

The syntax of tuple-format-spec is:   
  
---  
tuple-fill-and-align ﻿(optional) width ﻿(optional) tuple-type ﻿(optional) |  |   
  
The tuple-fill-and-align is interpreted the same way as a fill-and-align except that the fill in tuple-fill-and-align is any character other than `**{**`, `**}**`, or `**:**`. 

The width is described in [standard format width specification](spec.html#Width_and_precision "cpp/utility/format/spec"). 

The tuple-type changes the way a tuple is formatted, with certain options only valid with certain argument types. 

The available tuple presentation types are: 

  * `**m**`: Indicates that both opening and closing brackets should be "" while the separator should be ": ". 



    

  * If `**m**` is chosen as the tuple-type, the program is ill-formed unless sizeof...(Ts) == 2 is true. 



  * `**n**`: Indicates that separator, opening and closing brackets should be "". 



### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/format/tuple_formatter&action=edit&section=2 "Edit section: Member objects")] Member objects

Member name  |  Definition   
---|---  
`_underlying__` (private) |  tuple of underlying formatters of type [std::tuple](../tuple.html)<[std::formatter](formatter.html)<[std::remove_cvref_t](../../types/remove_cvref.html)<Ts>, CharT>...>  
(exposition-only member object*)  
`_separator__` (private) |  a string representing the separator of the tuple formatted result (defaults to ", ")  
(exposition-only member object*)  
`_opening-bracket__` (private) |  a string representing the opening bracket of the tuple formatted result (defaults to "(")  
(exposition-only member object*)  
`_closing-bracket__` (private) |  a string representing the closing bracket of the tuple formatted result (defaults to ")")  
(exposition-only member object*)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/format/tuple_formatter&action=edit&section=3 "Edit section: Member functions")] Member functions

set_separator |  sets a specified separator for the tuple formatted result   
(public member function)  
---|---  
set_brackets |  sets a specified opening and closing brackets for the tuple formatted result   
(public member function)  
parse |  parses the format specifier as specified by tuple-format-spec   
(public member function)  
format |  writes the tuple formatted output as specified by tuple-format-spec   
(public member function)  
  
##  std::formatter<_pair-or-tuple_ >::set_separator

constexpr void set_separator( [std::basic_string_view](../../string/basic_string_view.html)<CharT> sep ) noexcept; |  |   
---|---|---  
| |   
  
Assigns sep to `_separator__`. 

##  std::formatter<_pair-or-tuple_ >::set_brackets

constexpr void set_brackets( [std::basic_string_view](../../string/basic_string_view.html)<CharT> opening,  
[std::basic_string_view](../../string/basic_string_view.html)<CharT> closing ) noexcept; |  |   
---|---|---  
| |   
  
Assigns opening and closing to `_opening-bracket__` and `_closing-bracket__`, respectively. 

##  std::formatter<_pair-or-tuple_ >::parse

template< class ParseContext >  
constexpr auto parse( ParseContext& ctx ) -> ParseContext::iterator; |  |   
---|---|---  
| |   
  
Parses the format specifiers as a tuple-format-spec and stores the parsed specifiers in the current object. 

If tuple-type or the `**n**` option is present, the values of `_opening-bracket_`, `_closing-bracket_`, and `_separator_` are modified as required. 

For each element e in `_underlying__` , calls e.parse(ctx) to parse an empty format-spec and, if e.set_debug_format() is a valid expression, calls e.set_debug_format(). 

Returns an iterator past the end of the tuple-format-spec. 

##  std::formatter<_pair-or-tuple_ >::format

template< class FormatContext >  
FormatContext::iterator  
format( /*maybe-const-pair-or-tuple*/<Ts...>& elems, FormatContext& ctx ) const; |  |   
---|---|---  
| |   
  
/*maybe-const-pair-or-tuple*/ denotes: 

  * const /*pair-or-tuple*/, if ([std::formattable](formattable.html)<const Ts, CharT> && ...) is true, 
  * /*pair-or-tuple*/ otherwise. 



Writes the following into ctx.out() as specified by tuple-format-spec, in order: 

  * `_opening-bracket__` , 
  * for each index I in `[`​0​`, `sizeof...(Ts)`)`: 



    

  * if I != 0, `_separator__` , 
  * the result of writing std::get<I>(elems) via std::get<I>(`_underlying__`), and 



  * `_closing-bracket__`. 



Returns an iterator past the end of the output range. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/format/tuple_formatter&action=edit&section=4 "Edit section: Defect reports")] Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3892](https://cplusplus.github.io/LWG/issue3892) | C++23  | the formatting of nested tuples was incorrect  | corrected   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/format/tuple_formatter&action=edit&section=5 "Edit section: See also")] See also

[ formatter](formatter.html "cpp/utility/format/formatter")(C++20) |  defines formatting rules for a given type   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/utility/format/dsc_formatter&action=edit)  
---|---
