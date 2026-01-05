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
[range_formatter](range_formatter.html "cpp/utility/format/range formatter")(C++23)  
**enable_nonlocking_formatter_optimization**(C++23)  
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
template< class T >  
constexpr bool enable_nonlocking_formatter_optimization = false; |  |  (since C++23)  
| |   
  
This template can be used by implementations to enable efficient implementations of [`std::print`](../../io/print.html "cpp/io/print") and [`std::println`](../../io/println.html "cpp/io/println"). 

If `std::enable_nonlocking_formatter_optimization<T>` is true, printing an argument of type `T` can be performed in a more efficient way (see [`std::print`](../../io/print.html "cpp/io/print") for details). `std::enable_nonlocking_formatter_optimization` specializations can be true in the following cases: 

  * `T` is one of the types where [`std::formatter`](formatter.html "cpp/utility/format/formatter")<T, CharT> is a [basic standard specialization](formatter.html#Basic_standard_specializations "cpp/utility/format/formatter") or [standard specialization for a library type](formatter.html#Standard_specializations_for_library_types "cpp/utility/format/formatter") (see below). 
  * A program may specialize this template for any cv-unqualified [program-defined type](../../language/type-id.html#Program-defined_type "cpp/language/type") `T`. Such specializations must be [usable in constant expressions](../../language/constant_expression.html#Usable_in_constant_expressions "cpp/language/constant expression") and have type const bool. 



## Contents

  * [1 Basic standard specializations](enable_nonlocking_formatter_optimization.html#Basic_standard_specializations)
  * [2 Standard specializations for library types](enable_nonlocking_formatter_optimization.html#Standard_specializations_for_library_types)
  * [3 Notes](enable_nonlocking_formatter_optimization.html#Notes)
  * [4 See also](enable_nonlocking_formatter_optimization.html#See_also)

  
---  
  
### Basic standard specializations

In the following list, `CharT` is either char or wchar_t, `ArithmeticT` is any cv-unqualified arithmetic type other than char, wchar_t, char8_t, char16_t, or char32_t: 

Nonlocking flag for character formatters |  |   
---|---|---  
template<>  
constexpr bool enable_nonlocking_formatter_optimization<CharT> = true; |  (1)  |   
Nonlocking flag for string formatters |  |   
template<>  
constexpr bool enable_nonlocking_formatter_optimization<CharT*> = true; |  (2)  |   
template<>  
constexpr bool enable_nonlocking_formatter_optimization<const CharT*> = true; |  (3)  |   
template< [std::size_t](../../types/size_t.html) N >  
constexpr bool enable_nonlocking_formatter_optimization<CharT[N]> = true; |  (4)  |   
template< class Traits, class Alloc >  
constexpr bool enable_nonlocking_formatter_optimization  
<[std::basic_string](../../string/basic_string.html)<CharT, Traits, Alloc>> = true; |  (5)  |   
template< class Traits >  
constexpr bool enable_nonlocking_formatter_optimization  
<[std::basic_string_view](../../string/basic_string_view.html)<CharT, Traits>> = true; |  (6)  |   
Nonlocking flag for arithmetic formatters |  |   
template<>  
constexpr bool enable_nonlocking_formatter_optimization<ArithmeticT> = true; |  (7)  |   
Nonlocking flag for pointer formatters |  |   
template<>  
constexpr bool enable_nonlocking_formatter_optimization<[std::nullptr_t](../../types/nullptr_t.html)> = true; |  (8)  |   
template<>  
constexpr bool enable_nonlocking_formatter_optimization<void*> = true; |  (9)  |   
template<>  
constexpr bool enable_nonlocking_formatter_optimization<const void*> = true; |  (10)  |   
| |   
  
### Standard specializations for library types

Specializations of `enable_nonlocking_formatter_optimization` for all specializations of the following standard templates are defined as true: 

  * [`std::chrono::zoned_time`](../../chrono/zoned_time.html "cpp/chrono/zoned time") when its template parameter type `TimeZonePtr` is const [std::chrono::time_zone](../../chrono/time_zone.html)*



Specializations of `enable_nonlocking_formatter_optimization` for all specializations of the following standard templates are defined as conditionally true: 

  * [`std::pair`](../pair.html "cpp/utility/pair")
  * [`std::tuple`](../tuple.html "cpp/utility/tuple")
  * [`std::chrono::duration`](../../chrono/duration.html "cpp/chrono/duration")



Specialization of `enable_nonlocking_formatter_optimization` for all [formattable range types](ranges_formatter.html "cpp/utility/format/ranges formatter") are always defined as false for which the range format kind is not std::range_format::disabled. 

### Notes

[Feature-test](../feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_print`](../../experimental/feature_test.html#cpp_lib_print "cpp/feature test") | [`202403L`](../../compiler_support/26.html#cpp_lib_print_202403L "cpp/compiler support/26") | (C++26)  
(DR23) | Formatted output with stream locking   
[`202406L`](../../compiler_support/26.html#cpp_lib_print_202406L "cpp/compiler support/26") | (C++26)  
(DR23) | Enabling nonlocking formatter optimization for more formattable types   
  
### See also

[ formatter](formatter.html "cpp/utility/format/formatter")(C++20) |  defines formatting rules for a given type   
(class template)   
---|---  
[ print](../../io/print.html "cpp/io/print")(C++23) |  prints to [stdout](../../io/c/std_streams.html "cpp/io/c/std streams") or a file stream using [formatted](../format.html "cpp/utility/format") representation of the arguments   
(function template)   
[ println](../../io/println.html "cpp/io/println")(C++23) |  same as std::print except that each print is terminated by additional new line   
(function template) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
