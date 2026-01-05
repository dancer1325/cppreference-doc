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
**format**(C++20)  
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
  


Defined in header `[<format>](../../header/format.html "cpp/header/format")` |  |   
---|---|---  
template< class... Args >  
[std::string](../../string/basic_string.html) format( [std::format_string](basic_format_string.html)<Args...> fmt, Args&&... args ); |  (1)  |  (since C++20)  
template< class... Args >  
[std::wstring](../../string/basic_string.html) format( [std::wformat_string](basic_format_string.html)<Args...> fmt, Args&&... args ); |  (2)  |  (since C++20)  
template< class... Args >  
[std::string](../../string/basic_string.html) format( const [std::locale](../../locale/locale.html)& loc,  
[std::format_string](basic_format_string.html)<Args...> fmt, Args&&... args ); |  (3)  |  (since C++20)  
template< class... Args >  
[std::wstring](../../string/basic_string.html) format( const [std::locale](../../locale/locale.html)& loc,  
[std::wformat_string](basic_format_string.html)<Args...> fmt, Args&&... args ); |  (4)  |  (since C++20)  
| |   
  
Format args according to the format string fmt, and return the result as a string. If present, loc is used for locale-specific formatting. 

1) Equivalent to return [std::vformat](vformat.html)(fmt.get(), [std::make_format_args](make_format_args.html)(args...));.

2) Equivalent to return [std::vformat](vformat.html)(fmt.get(), [std::make_wformat_args](make_format_args.html)(args...));.

3) Equivalent to return [std::vformat](vformat.html)(loc, fmt.get(), [std::make_format_args](make_format_args.html)(args...));.

4) Equivalent to return [std::vformat](vformat.html)(loc, fmt.get(), [std::make_wformat_args](make_format_args.html)(args...));.

The format string fmt is checked at compile time unless it is initialized from the result of [`std::runtime_format`](runtime_format.html "cpp/utility/format/runtime format")(since C++26). If, at compile time, the format string is found to be invalid for the types of the arguments to be formatted, a compilation error will be emitted. 

The following requirements apply to each type `T` in `Args`, where `CharT` is char for overloads (1,3), wchar_t for overloads (2,4): 

  * [std::formatter](formatter.html)<T, CharT> must satisfy [BasicFormatter](../../named_req/BasicFormatter.html "cpp/named req/BasicFormatter")
  * [std::formatter](formatter.html)<T, CharT>::parse() must be constexpr for the purpose of compile-time format string check. 



## Contents

  * [1 Parameters](format.html#Parameters)
  * [2 Return value](format.html#Return_value)
  * [3 Exceptions](format.html#Exceptions)
  * [4 Notes](format.html#Notes)
  * [5 Example](format.html#Example)
  * [6 Defect reports](format.html#Defect_reports)
  * [7 See also](format.html#See_also)

  
---  
  
### Parameters

fmt  |  \-  |  an object that represents the format string. The format string consists of 

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

  
args...  |  \-  |  arguments to be formatted   
loc  |  \-  |  [std::locale](../../locale/locale.html "cpp/locale/locale") used for locale-specific formatting   
  
### Return value

A string object holding the formatted result. 

### Exceptions

Throws [std::bad_alloc](../../memory/new/bad_alloc.html "cpp/memory/new/bad alloc") on allocation failure. Also propagates exception thrown by any formatter. 

### Notes

It is not an error to provide more arguments than the format string requires: 
    
    
    std::format("{} {}!", "Hello", "world", "something"); // OK, produces "Hello world!"

It is an error if the format string is not a constant expression unless it is initialized from the result of [`std::runtime_format`](runtime_format.html "cpp/utility/format/runtime format")(since C++26). [std::vformat](vformat.html "cpp/utility/format/vformat") does not have this requirement. 
    
    
    [std::string](../../string/basic_string.html) f1([std::string_view](../../string/basic_string_view.html) runtime_format_string)
    {
        // return std::format(runtime_format_string, "x", 42); // error
        char v1[] = "x";
        int v2 = 42;
        return [std::vformat](vformat.html)(runtime_format_string, [std::make_format_args](make_format_args.html)(v1, v2)); // OK
    }
     
    [std::string](../../string/basic_string.html) f2([std::string_view](../../string/basic_string_view.html) runtime_format_string)
    {
        return std::format([std::runtime_format](runtime_format.html)(runtime_format_string), "x", 42); // OK (C++26)
    }

### Example

Run this code
    
    
    #include <format>
    #include <iostream>
    #include <set>
    #include <string>
    #include <string_view>
     
    template<typename... Args>
    [std::string](../../string/basic_string.html) dyna_print([std::string_view](../../string/basic_string_view.html) rt_fmt_str, Args&&... args)
    {
        return [std::vformat](vformat.html)(rt_fmt_str, [std::make_format_args](make_format_args.html)(args...));
    }
     
    int main()
    {
    #ifdef __cpp_lib_format_ranges
            const [std::set](../../container/set.html)<[std::string_view](../../string/basic_string_view.html)> continents 
            {
                "Africa",   "America",      "Antarctica",   
                "Asia",     "Australia",    "Europe"
            };
            [std::cout](../../io/cout.html) << std::format("Hello {}!\n", continents);
    #else
            [std::cout](../../io/cout.html) << std::format("Hello {}!\n", "continents");
    #endif
     
        [std::string](../../string/basic_string.html) fmt;
        for (int i{}; i != 3; ++i)
        {
            fmt += "{} "; // constructs the formatting string
            [std::cout](../../io/cout.html) << fmt << " : ";
            [std::cout](../../io/cout.html) << dyna_print(fmt, "alpha", 'Z', 3.14, "unused");
            [std::cout](../../io/cout.html) << '\n';
        }
    }

Possible output: 
    
    
    Hello {"Africa", "America", "Antarctica", "Asia", "Australia", "Europe"}!
    {}  : alpha
    {} {}  : alpha Z
    {} {} {}  : alpha Z 3.14

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[P2216R3](https://wg21.link/P2216R3) | C++20  | throws [std::format_error](format_error.html "cpp/utility/format/format error") for invalid format string  | invalid format string results in compile-time error   
[P2418R2](https://wg21.link/P2418R2) | C++20  | objects that are neither const-usable nor copyable  
(such as generator-like objects) are not formattable  | allow formatting these objects   
[P2508R1](https://wg21.link/P2508R1) | C++20  | there's no user-visible name for this facility  | the name `basic_format_string` is exposed   
  
### See also

[ format_to](format_to.html "cpp/utility/format/format to")(C++20) |  writes out formatted representation of its arguments through an output iterator   
(function template)   
---|---  
[ format_to_n](format_to_n.html "cpp/utility/format/format to n")(C++20) |  writes out formatted representation of its arguments through an output iterator, not exceeding specified size   
(function template) 
