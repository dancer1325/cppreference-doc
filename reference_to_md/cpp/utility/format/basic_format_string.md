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
**basic_format_string format_stringwformat_string**(C++20)(C++20)(C++20)  
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
  


Defined in header `[<format>](../../header/format.html "cpp/header/format")` |  |   
---|---|---  
template< class CharT, class... Args >  
struct basic_format_string; |  (1)  |  (since C++20)  
template< class... Args >  
using format_string =  
basic_format_string<char, [std::type_identity_t](../../types/type_identity.html)<Args>...>; |  (2)  |  (since C++20)  
template< class... Args >  
using wformat_string =  
basic_format_string<wchar_t, [std::type_identity_t](../../types/type_identity.html)<Args>...>; |  (3)  |  (since C++20)  
| |   
  
Class template `std::basic_format_string` wraps a [std::basic_string_view](../../string/basic_string_view.html "cpp/string/basic string view") that will be used by formatting functions. 

The constructor of `std::basic_format_string` performs compile-time format string checks unless the constructor argument is returned by [`std::runtime_format`](runtime_format.html "cpp/utility/format/runtime format")(since C++26). 

## Contents

  * [1 Member functions](basic_format_string.html#Member_functions)
  * [2 std::basic_format_string::basic_format_string](basic_format_string.html#std::basic_format_string::basic_format_string)
    * [2.1 Parameters](basic_format_string.html#Parameters)
  * [3 std::basic_format_string::get](basic_format_string.html#std::basic_format_string::get)
    * [3.1 Notes](basic_format_string.html#Notes)
    * [3.2 Example](basic_format_string.html#Example)
    * [3.3 Defect reports](basic_format_string.html#Defect_reports)

  
---  
  
### Member functions

(constructor) |  constructs a `basic_format_string`, raising compile error if the argument is not a format string   
(public member function)  
---|---  
get |  returns the wrapped string   
(public member function)  
  
##  std::basic_format_string::basic_format_string

template< class T >  
consteval basic_format_string( const T& s ); |  (1)  |   
---|---|---  
basic_format_string( /* runtime-format-string */<CharT> s ) noexcept; |  (2)  |  (since C++26)  
| |   
  
1) Constructs a `basic_format_string` object that stores a view of string s. If the argument is not a compile-time constant, or if it cannot be parsed as a format string for the formatting argument types `Args`, the construction is ill-formed.

This overload participates in overload resolution only if const T& models [std::convertible_to](../../concepts/convertible_to.html)<[std::basic_string_view](../../string/basic_string_view.html)<CharT>>.

2) Constructs a `basic_format_string` object that stores a view of string s as returned by std::runtime_format. It does not perform format string checks upon construction.

###  Parameters

s  |  \-  |  an object that represents the format string. The format string consists of 

  * ordinary characters (except { and }), which are copied unchanged to the output, 
  * escape sequences {{ and }}, which are replaced with { and } respectively in the output, and 
  * replacement fields. 

Each replacement field has the following format:  |   
---  
`**{**` arg-id (optional) `**}**` |  (1)  |   
`**{**` arg-id (optional) `**:**` format-spec `**}**` |  (2)  |   
  
1) replacement field without a format specification

2) replacement field with a format specification

arg-id |  \-  |  specifies the index of the argument in `args` whose value is to be used for formatting; if it is omitted, the arguments are used in order. The arg-id ﻿s in a format string must all be present or all be omitted. Mixing manual and automatic indexing is an error.   
---|---|---  
format-spec |  \-  |  the format specification defined by the [std::formatter](formatter.html "cpp/utility/format/formatter") specialization for the corresponding argument. Cannot start with }.   
  
  * For basic types and standard string types, the format specification is interpreted as [standard format specification](spec.html "cpp/utility/format/spec"). 
  * For chrono types, the format specification is interpreted as [chrono format specification](../../chrono/system_clock/formatter.html#Format_specification "cpp/chrono/system clock/formatter"). 



  * For range types, the format specification is interpreted as [range format specification](range_formatter.html#Range_format_specification "cpp/utility/format/range formatter"). 
  * For [std::pair](../pair.html "cpp/utility/pair") and [std::tuple](../tuple.html "cpp/utility/tuple"), the format specification is interpreted as [tuple format specification](tuple_formatter.html#Format_specification "cpp/utility/format/tuple formatter"). 
  * For [std::thread::id](../../thread/thread/id.html "cpp/thread/thread/id") and [`std::stacktrace_entry`](../stacktrace_entry.html "cpp/utility/stacktrace entry"), see [thread id format specification](../../thread/thread/id/formatter.html#Format_specification "cpp/thread/thread/id/formatter") and [stacktrace entry format specification](../stacktrace_entry/formatter.html#Format_specification "cpp/utility/stacktrace entry/formatter"). 
  * For [`std::basic_stacktrace`](../basic_stacktrace.html "cpp/utility/basic stacktrace"), no format specifier is allowed. 

| (since C++23)  
---|---  
  
  * For [`std::filesystem::path`](../../filesystem/path.html "cpp/filesystem/path"), see [path format specification](../../filesystem/path/formatter.html#Format_specification "cpp/filesystem/path/formatter"). 

| (since C++26)  
---|---  
  
  * For other formattable types, the format specification is determined by user-defined `formatter` specializations. 

  
  
##  std::basic_format_string::get

constexpr [std::basic_string_view](../../string/basic_string_view.html)<CharT> get() const noexcept; |  |   
---|---|---  
| |   
  
Returns the stored string view. 

### Notes

The alias templates `format_string` and `wformat_string` use std::type_identity_t to inhibit template argument deduction. Typically, when they appear as a function parameter, their template arguments are deduced from other function arguments. 
    
    
    template<class... Args>
    [std::string](../../string/basic_string.html) format(std::format_string<Args...> fmt, Args&&... args);
     
    auto s = format("{} {}", 1.0, 2);
    // Calls format<double, int>. Args are deduced from 1.0, 2
    // Due to the use of type_identity_t in format_string, template argument deduction
    // does not consider the type of the format string.

### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[P2508R1](https://wg21.link/P2508R1) | C++20  | there's no user-visible name for this facility  | the name `basic_format_string` is exposed 
