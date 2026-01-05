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
**formatter**(C++20)  
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
template< class T, class CharT = char >  
struct formatter; |  |  (since C++20)  
| |   
  
The enabled specializations of `std::formatter` define formatting rules for a given type. Enabled specializations meet the [BasicFormatter](../../named_req/BasicFormatter.html "cpp/named req/BasicFormatter") requirements, and, unless otherwise specified, also meet the [Formatter](../../named_req/Formatter.html "cpp/named req/Formatter") requirements. 

For all types `T` and `CharT` for which no specialization `std::formatter<T, CharT>` is enabled, that specialization is a complete type and is disabled. 

Disabled specializations do not meet the [Formatter](../../named_req/Formatter.html "cpp/named req/Formatter") requirements, and the following are all false: 

  * [std::is_default_constructible_v](../../types/is_default_constructible.html "cpp/types/is default constructible")
  * [std::is_copy_constructible_v](../../types/is_copy_constructible.html "cpp/types/is copy constructible")
  * [std::is_move_constructible_v](../../types/is_move_constructible.html "cpp/types/is move constructible")
  * [std::is_copy_assignable_v](../../types/is_copy_assignable.html "cpp/types/is copy assignable")
  * [std::is_move_assignable_v](../../types/is_move_assignable.html "cpp/types/is move assignable"). 



## Contents

  * [1 Basic standard specializations](formatter.html#Basic_standard_specializations)
  * [2 Standard format specification](formatter.html#Standard_format_specification)
  * [3 Standard specializations for library types](formatter.html#Standard_specializations_for_library_types)
  * [4 Example](formatter.html#Example)
  * [5 Defect reports](formatter.html#Defect_reports)
  * [6 See also](formatter.html#See_also)

  
---  
  
### Basic standard specializations

In the following list, `CharT` is either char or wchar_t, `ArithmeticT` is any cv-unqualified arithmetic type other than char, wchar_t, char8_t, char16_t, or char32_t: 

Character formatters |  |   
---|---|---  
template<>  
struct formatter<char, char>; |  (1)  |   
template<>  
struct formatter<char, wchar_t>; |  (2)  |   
template<>  
struct formatter<wchar_t, wchar_t>; |  (3)  |   
String formatters |  |   
template<>  
struct formatter<CharT*, CharT>; |  (4)  |   
template<>  
struct formatter<const CharT*, CharT>; |  (5)  |   
template< [std::size_t](../../types/size_t.html) N >  
struct formatter<CharT[N], CharT>; |  (6)  |   
template< class Traits, class Alloc >  
struct formatter<[std::basic_string](../../string/basic_string.html)<CharT, Traits, Alloc>, CharT>; |  (7)  |   
template< class Traits >  
struct formatter<[std::basic_string_view](../../string/basic_string_view.html)<CharT, Traits>, CharT>; |  (8)  |   
Arithmetic formatters |  |   
template<>  
struct formatter<ArithmeticT, CharT>; |  (9)  |   
Pointer formatters |  |   
template<>  
struct formatter<[std::nullptr_t](../../types/nullptr_t.html), CharT>; |  (10)  |   
template<>  
struct formatter<void*, CharT>; |  (11)  |   
template<>  
struct formatter<const void*, CharT>; |  (12)  |   
| |   
  
Formatters for other pointers and pointers to members are disabled. 

Specializations such as std::formatter<wchar_t, char> and std::formatter<const char*, wchar_t> that would require encoding conversions are disabled. 

The following specialization are still disabled in C++23 to avoid formatting some char sequences as ranges of wchar_t:  |  Disabled formatters for wchar_t |  |   
---|---|---  
template<>  
struct formatter<char*, wchar_t>; |  (1)  |   
template<>  
struct formatter<const char*, wchar_t>; |  (2)  |   
template< [std::size_t](../../types/size_t.html) N >  
struct formatter<char[N], wchar_t>; |  (3)  |   
template< class Traits, class Allocator >  
struct formatter<[std::basic_string](../../string/basic_string.html)<char, Traits, Allocator>, wchar_t>; |  (4)  |   
template< class Traits >  
struct formatter<[std::basic_string_view](../../string/basic_string_view.html)<char, Traits>, wchar_t>; |  (5)  |   
| |   
  
A _debug-enabled_ formatter specialization additionally provides a public non-static member function constexpr void set_debug_format(); which modifies the state of the formatter object so that it will format the values as [escaped and quoted](spec.html#Formatting_escaped_characters_and_strings "cpp/utility/format/spec"), as if the type of the format specifier parsed by the last call to `parse` were `**?**`. 

Each formatter specialization for string or character type is _debug-enabled_. 

(since C++23)  
  
### Standard format specification

| This section is incomplete  
Reason: The standard format specification is moved to a separate [page](spec.html "cpp/utility/format/spec"). The section title is temporarily preserved for links to this section. This section will be removed after all those links are settled.   
---|---  
  
### Standard specializations for library types

[ std::formatter<std::chrono::duration>](../../chrono/duration/formatter.html "cpp/chrono/duration/formatter")(C++20) |  formatting support for `duration`   
(class template specialization)   
---|---  
[ std::formatter<std::chrono::sys_time>](../../chrono/system_clock/formatter.html "cpp/chrono/system clock/formatter")(C++20) |  formatting support for `sys_time`   
(class template specialization)   
[ std::formatter<std::chrono::utc_time>](../../chrono/utc_clock/formatter.html "cpp/chrono/utc clock/formatter")(C++20) |  formatting support for `utc_time`   
(class template specialization)   
[ std::formatter<std::chrono::tai_time>](../../chrono/tai_clock/formatter.html "cpp/chrono/tai clock/formatter")(C++20) |  formatting support for `tai_time`   
(class template specialization)   
[ std::formatter<std::chrono::gps_time>](../../chrono/gps_clock/formatter.html "cpp/chrono/gps clock/formatter")(C++20) |  formatting support for `gps_time`   
(class template specialization)   
[ std::formatter<std::chrono::file_time>](../../chrono/file_clock/formatter.html "cpp/chrono/file clock/formatter")(C++20) |  formatting support for `file_time`   
(class template specialization)   
[ std::formatter<std::chrono::local_time>](../../chrono/local_t/formatter.html "cpp/chrono/local t/formatter")(C++20) |  formatting support for `local_time`   
(class template specialization)   
[ std::formatter<std::chrono::day>](../../chrono/day/formatter.html "cpp/chrono/day/formatter")(C++20) |  formatting support for `day`   
(class template specialization)   
[ std::formatter<std::chrono::month>](../../chrono/month/formatter.html "cpp/chrono/month/formatter")(C++20) |  formatting support for `month`   
(class template specialization)   
[ std::formatter<std::chrono::year>](../../chrono/year/formatter.html "cpp/chrono/year/formatter")(C++20) |  formatting support for `year`   
(class template specialization)   
[ std::formatter<std::chrono::weekday>](../../chrono/weekday/formatter.html "cpp/chrono/weekday/formatter")(C++20) |  formatting support for `weekday`   
(class template specialization)   
[ std::formatter<std::chrono::weekday_indexed>](../../chrono/weekday_indexed/formatter.html "cpp/chrono/weekday indexed/formatter")(C++20) |  formatting support for `weekday_indexed`   
(class template specialization)   
[ std::formatter<std::chrono::weekday_last>](../../chrono/weekday_last/formatter.html "cpp/chrono/weekday last/formatter")(C++20) |  formatting support for `weekday_last`   
(class template specialization)   
[ std::formatter<std::chrono::month_day>](../../chrono/month_day/formatter.html "cpp/chrono/month day/formatter")(C++20) |  formatting support for `month_day`   
(class template specialization)   
[ std::formatter<std::chrono::month_day_last>](../../chrono/month_day_last/formatter.html "cpp/chrono/month day last/formatter")(C++20) |  formatting support for `month_day_last`   
(class template specialization)   
[ std::formatter<std::chrono::month_weekday>](../../chrono/month_weekday/formatter.html "cpp/chrono/month weekday/formatter")(C++20) |  formatting support for `month_weekday`   
(class template specialization)   
[ std::formatter<std::chrono::month_weekday_last>](../../chrono/month_weekday_last/formatter.html "cpp/chrono/month weekday last/formatter")(C++20) |  formatting support for `month_weekday_last`   
(class template specialization)   
[ std::formatter<std::chrono::year_month>](../../chrono/year_month/formatter.html "cpp/chrono/year month/formatter")(C++20) |  formatting support for `year_month`   
(class template specialization)   
[ std::formatter<std::chrono::year_month_day>](../../chrono/year_month_day/formatter.html "cpp/chrono/year month day/formatter")(C++20) |  formatting support for `year_month_day`   
(class template specialization)   
[ std::formatter<std::chrono::year_month_day_last>](../../chrono/year_month_day_last/formatter.html "cpp/chrono/year month day last/formatter")(C++20) |  formatting support for `year_month_day_last`   
(class template specialization)   
[ std::formatter<std::chrono::year_month_weekday>](../../chrono/year_month_weekday/formatter.html "cpp/chrono/year month weekday/formatter")(C++20) |  formatting support for `year_month_weekday`   
(class template specialization)   
[ std::formatter<std::chrono::year_month_weekday_last>](../../chrono/year_month_weekday_last/formatter.html "cpp/chrono/year month weekday last/formatter")(C++20) |  formatting support for `year_month_weekday_last`   
(class template specialization)   
[ std::formatter<std::chrono::hh_mm_ss>](../../chrono/hh_mm_ss/formatter.html "cpp/chrono/hh mm ss/formatter")(C++20) |  formatting support for `hh_mm_ss`   
(class template specialization)   
[ std::formatter<std::chrono::sys_info>](../../chrono/sys_info/formatter.html "cpp/chrono/sys info/formatter")(C++20) |  formatting support for `sys_info`   
(class template specialization)   
[ std::formatter<std::chrono::local_info>](../../chrono/local_info/formatter.html "cpp/chrono/local info/formatter")(C++20) |  formatting support for `local_info`   
(class template specialization)   
[ std::formatter<std::chrono::zoned_time>](../../chrono/zoned_time/formatter.html "cpp/chrono/zoned time/formatter")(C++20) |  formatting support for `zoned_time`   
(class template specialization)   
[ std::formatter<std::basic_stacktrace>](../basic_stacktrace/formatter.html "cpp/utility/basic stacktrace/formatter")(C++23) |  formatting support for `basic_stacktrace`   
(class template specialization)   
[ std::formatter<std::stacktrace_entry>](../stacktrace_entry/formatter.html "cpp/utility/stacktrace entry/formatter")(C++23) |  formatting support for `stacktrace_entry`   
(class template specialization)   
[ std::formatter<std::thread::id>](../../thread/thread/id/formatter.html "cpp/thread/thread/id/formatter")(C++23) |  formatting support for `thread::id`   
(class template specialization)   
[ std::formatter<std::vector<bool>::reference>](../../container/vector_bool/reference.html#Helper_classes "cpp/container/vector bool/reference")(C++23) |  formatting support for `vector<bool>::reference`   
(class template specialization)   
[ std::formatter<_pair-or-tuple_ >](tuple_formatter.html "cpp/utility/format/tuple formatter")(C++23) |  formatting support for `pair` and `tuple`   
(class template specialization)   
[ std::formatter<_range_ >](ranges_formatter.html "cpp/utility/format/ranges formatter")(C++23) |  formatting support for ranges   
(class template specialization)   
[ std::formatter<std::stack>](../../container/stack/formatter.html "cpp/container/stack/formatter")(C++23) |  formatting support for `std::stack`   
(class template specialization)   
[ std::formatter<std::queue>](../../container/queue/formatter.html "cpp/container/queue/formatter")(C++23) |  formatting support for `std::queue`   
(class template specialization)   
[ std::formatter<std::priority_queue>](../../container/priority_queue/formatter.html "cpp/container/priority queue/formatter")(C++23) |  formatting support for `std::priority_queue`   
(class template specialization)   
[ std::formatter<std::filesystem::path>](../../filesystem/path/formatter.html "cpp/filesystem/path/formatter")(C++26) |  formatting support for `filesystem::path`   
(class template specialization)   
  
### Example

Run this code
    
    
    #include <algorithm>
    #include <format>
    #include <iomanip>
    #include <iostream>
    #include <sstream>
    #include <string_view>
     
    struct QuotableString : [std::string_view](../../string/basic_string_view.html)
    {};
     
    template<>
    struct std::formatter<QuotableString, char>
    {
        bool quoted = false;
     
        template<class ParseContext>
        constexpr ParseContext::iterator parse(ParseContext& ctx)
        {
            auto it = ctx.begin();
            if (it == ctx.end())
                return it;
     
            if (*it == '#')
            {
                quoted = true;
                ++it;
            }
            if (it != ctx.end() && *it != '}')
                throw [std::format_error](format_error.html)("Invalid format args for QuotableString.");
     
            return it;
        }
     
        template<class FmtContext>
        FmtContext::iterator format(QuotableString s, FmtContext& ctx) const
        {
            [std::ostringstream](../../io/basic_ostringstream.html) out;
            if (quoted)
                out << [std::quoted](../../io/manip/quoted.html)(s);
            else
                out << s;
     
            return std::[ranges::copy](http://en.cppreference.com/w/cpp/ranges-algorithm-placeholder/copy)(std::move(out).str(), ctx.out()).out;
        }
    };
     
    int main()
    {
        QuotableString a("be"), a2(R"( " be " )");
        QuotableString b("a question");
        [std::cout](../../io/cout.html) << [std::format](format.html)("To {0} or not to {0}, that is {1}.\n", a, b);
        [std::cout](../../io/cout.html) << [std::format](format.html)("To {0:} or not to {0:}, that is {1:}.\n", a, b);
        [std::cout](../../io/cout.html) << [std::format](format.html)("To {0:#} or not to {0:#}, that is {1:#}.\n", a2, b);
    }

Output: 
    
    
    To be or not to be, that is a question.
    To be or not to be, that is a question.
    To " \" be \" " or not to " \" be \" ", that is "a question".

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3944](https://cplusplus.github.io/LWG/issue3944) | C++23  | some char sequences were formattable as ranges of wchar_t | disable specializations added   
  
### See also

[ basic_format_contextformat_contextwformat_context](basic_format_context.html "cpp/utility/format/basic format context")(C++20)(C++20)(C++20) |  formatting state, including all formatting arguments and the output iterator   
(class template)   
---|---  
[ formattable](formattable.html "cpp/utility/format/formattable")(C++23) |  specifies that a type is formattable, that is, it specializes **std::formatter** and provides member functions `parse` and `format`   
(concept)   
[ range_formatter](range_formatter.html "cpp/utility/format/range formatter")(C++23) |  class template that helps implementing **std::formatter** specializations for range types   
(class template) 
