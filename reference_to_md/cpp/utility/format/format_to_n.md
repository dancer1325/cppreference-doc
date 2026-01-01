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
**format_to_n**(C++20)  
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

Defined in header `[<format>](../../header/format.html "cpp/header/format")` |  |   
---|---|---  
template< class OutputIt, class... Args >  
std::format_to_n_result<OutputIt>  
format_to_n( OutputIt out, [std::iter_difference_t](../../iterator/iter_t.html)<OutputIt> n,  
[std::format_string](basic_format_string.html)<Args...> fmt, Args&&... args ); |  (1)  |  (since C++20)  
template< class OutputIt, class... Args >  
std::format_to_n_result<OutputIt>  
format_to_n( OutputIt out, [std::iter_difference_t](../../iterator/iter_t.html)<OutputIt> n,  
[std::wformat_string](basic_format_string.html)<Args...> fmt, Args&&... args ); |  (2)  |  (since C++20)  
template< class OutputIt, class... Args >  
std::format_to_n_result<OutputIt>  
format_to_n( OutputIt out, [std::iter_difference_t](../../iterator/iter_t.html)<OutputIt> n,  
const [std::locale](../../locale/locale.html)& loc,  
[std::format_string](basic_format_string.html)<Args...> fmt, Args&&... args ); |  (3)  |  (since C++20)  
template< class OutputIt, class... Args >  
std::format_to_n_result<OutputIt>  
format_to_n( OutputIt out, [std::iter_difference_t](../../iterator/iter_t.html)<OutputIt> n,  
const [std::locale](../../locale/locale.html)& loc,  
[std::wformat_string](basic_format_string.html)<Args...> fmt, Args&&... args ); |  (4)  |  (since C++20)  
Helper types |  |   
template< class OutputIt >  
struct format_to_n_result {  
OutputIt out;  
[std::iter_difference_t](../../iterator/iter_t.html)<OutputIt> size;  
}; |  (5)  |  (since C++20)  
| |   
  
Format args according to the format string fmt, and write the result to the output iterator out. At most n characters are written. If present, loc is used for locale-specific formatting. 

Let `CharT` be char for overloads (1,3), wchar_t for overloads (2,4). 

These overloads participate in overload resolution only if `OutputIt` satisfies the concept [std::output_iterator](../../iterator/output_iterator.html)<const CharT&>. 

The behavior is undefined if `OutputIt` does not model (meet the semantic requirements of) the concept [std::output_iterator](../../iterator/output_iterator.html)<const CharT&>, or if [std::formatter](formatter.html)<[std::remove_cvref_t](../../types/remove_cvref.html)<Ti>, CharT> does not meet the [BasicFormatter](../../named_req/BasicFormatter.html "cpp/named req/BasicFormatter") requirements for any `Ti` in `Args`. 

5) `std::format_to_n_result` has no base classes, or members other than out, `size` and implicitly declared special member functions.

## Contents

  * [1 Parameters](format_to_n.html#Parameters)
  * [2 Return value](format_to_n.html#Return_value)
  * [3 Exceptions](format_to_n.html#Exceptions)
  * [4 Notes](format_to_n.html#Notes)
  * [5 Example](format_to_n.html#Example)
  * [6 Defect reports](format_to_n.html#Defect_reports)
  * [7 See also](format_to_n.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/format/format_to_n&action=edit&section=1 "Edit section: Parameters")] Parameters

out  |  \-  |  iterator to the output buffer   
---|---|---  
n  |  \-  |  maximum number of characters to be written to the buffer   
fmt  |  \-  |  [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/utility/format/format_string&action=edit)an object that represents the format string. The format string consists of 

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
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/format/format_to_n&action=edit&section=2 "Edit section: Return value")] Return value

A `format_to_n_result` such that the out member is an iterator past the end of the output range, and the `size` member is the total (not truncated) output size. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/format/format_to_n&action=edit&section=3 "Edit section: Exceptions")] Exceptions

Propagates any exception thrown by formatter or iterator operations. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/format/format_to_n&action=edit&section=4 "Edit section: Notes")] Notes

The libstdc++ implementation prior to GCC-13.3 had a [bug](https://gcc.gnu.org/bugzilla/show_bug.cgi?id=110990) in reporting the correct format_to_n_result::out value. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/format/format_to_n&action=edit&section=5 "Edit section: Example")] Example

At Godbolt's Compiler Explorer: [clang (trunk) + libc++](https://godbolt.org/z/s7a5d76ET), [GCC (trunk) + libstdc++](https://godbolt.org/z/bdvxnPb1T).

Run this code
    
    
    #include <format>
    #include <initializer_list>
    #include <iomanip>
    #include <iostream>
    #include <string_view>
     
    int main()
    {
        char buffer[64];
     
        for ([std::size_t](../../types/size_t.html) max_chars_to_write : {[std::size](../../iterator/size.html)(buffer) - 1, 23uz, 21uz})
        {
            const std::format_to_n_result result =
                std::format_to_n(
                    buffer, max_chars_to_write,
                    "Hubble's H{2} {3} {0}{4}{1} km/sec/Mpc.", // 24 bytes w/o formatters
                    71,       // {0}, occupies 2 bytes
                    8,        // {1}, occupies 1 byte
                    "\u2080", // {2}, occupies 3 bytes, '₀' (SUBSCRIPT ZERO)
                    "\u2245", // {3}, occupies 3 bytes, '≅' (APPROXIMATELY EQUAL TO)
                    "\u00B1"  // {4}, occupies 2 bytes, '±' (PLUS-MINUS SIGN)
                    ); // 24 + 2 + 1 + 3 + 3 + 2 == 35, no trailing '\0'
     
            *result.out = '\0'; // adds terminator to buffer
     
            const [std::string_view](../../string/basic_string_view.html) str(buffer, result.out);
     
            [std::cout](../../io/cout.html) << "Buffer until '\\0': " << [std::quoted](../../io/manip/quoted.html)(str) << '\n'
                      << "Max chars to write: " << max_chars_to_write << '\n'
                      << "result.out offset: " << result.out - buffer << '\n'
                      << "Untruncated output size: " << result.size << "\n\n";
        }
    }

Output: 
    
    
    Buffer until '\0': "Hubble's H₀ ≅ 71±8 km/sec/Mpc."
    Max chars to write: 63
    result.out offset: 35
    Untruncated output size: 35
     
    Buffer until '\0': "Hubble's H₀ ≅ 71±8"
    Max chars to write: 23
    result.out offset: 23
    Untruncated output size: 35
     
    Buffer until '\0': "Hubble's H₀ ≅ 71�"
    Max chars to write: 21
    result.out offset: 21
    Untruncated output size: 35

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/format/format_to_n&action=edit&section=6 "Edit section: Defect reports")] Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[P2216R3](https://wg21.link/P2216R3) | C++20  | throws [std::format_error](format_error.html "cpp/utility/format/format error") for invalid format string  | invalid format string results in compile-time error   
[P2418R2](https://wg21.link/P2418R2) | C++20  | objects that are neither const-usable nor copyable  
(such as generator-like objects) are not formattable  | allow formatting these objects   
[P2508R1](https://wg21.link/P2508R1) | C++20  | there's no user-visible name for this facility  | the name `basic_format_string` is exposed   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/format/format_to_n&action=edit&section=7 "Edit section: See also")] See also

[ format](format.html "cpp/utility/format/format")(C++20) |  stores formatted representation of the arguments in a new string   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/utility/format/dsc_format&action=edit)  
---|---  
[ format_to](format_to.html "cpp/utility/format/format to")(C++20) |  writes out formatted representation of its arguments through an output iterator   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/utility/format/dsc_format_to&action=edit)  
[ formatted_size](formatted_size.html "cpp/utility/format/formatted size")(C++20) |  determines the number of characters necessary to store the formatted representation of its arguments   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/utility/format/dsc_formatted_size&action=edit)
