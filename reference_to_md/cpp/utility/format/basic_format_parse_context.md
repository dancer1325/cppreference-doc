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
[formatter<_pair-or-tuple_ >](tuple_formatter.html "cpp/utility/format/tuple formatter")(C++23)  
[formatter<_range_ >](ranges_formatter.html "cpp/utility/format/ranges formatter")(C++23)  
[range_formatter](range_formatter.html "cpp/utility/format/range formatter")(C++23)  
[enable_nonlocking_formatter_optimization](enable_nonlocking_formatter_optimization.html "cpp/utility/format/enable nonlocking formatter optimization")(C++23)  
**basic_format_parse_context format_parse_contextwformat_parse_context**(C++20)(C++20)(C++20)  
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
template< class CharT >  
class basic_format_parse_context; |  |  (since C++20)  
| |   
  
Provides access to the format string parsing state consisting of the format string range being parsed and the argument counter for automatic indexing. 

A `std::basic_format_parse_context` instance is passed to [Formatter](../../named_req/Formatter.html "cpp/named req/Formatter") when parsing the format specification. 

A program that declares an explicit or partial specialization of `std::basic_format_parse_context` is ill-formed, no diagnostic required. 

Several typedefs for common character types are provided: 

Defined in header `[<format>](../../header/format.html "cpp/header/format")`  
---  
Type  |  Definition   
`std::format_parse_context` |  std::basic_format_parse_context<char>  
`std::wformat_parse_context` |  std::basic_format_parse_context<wchar_t>  
  
## Contents

  * [1 Member types](basic_format_parse_context.html#Member_types)
  * [2 Member functions](basic_format_parse_context.html#Member_functions)
  * [3 std::basic_format_parse_context::basic_format_parse_context](basic_format_parse_context.html#std::basic_format_parse_context::basic_format_parse_context)
  * [4 std::basic_format_parse_context::begin](basic_format_parse_context.html#std::basic_format_parse_context::begin)
  * [5 std::basic_format_parse_context::end](basic_format_parse_context.html#std::basic_format_parse_context::end)
  * [6 std::basic_format_parse_context::advance_to](basic_format_parse_context.html#std::basic_format_parse_context::advance_to)
  * [7 std::basic_format_parse_context::next_arg_id](basic_format_parse_context.html#std::basic_format_parse_context::next_arg_id)
  * [8 std::basic_format_parse_context::check_arg_id](basic_format_parse_context.html#std::basic_format_parse_context::check_arg_id)
  * [9 std::basic_format_parse_context::check_dynamic_spec](basic_format_parse_context.html#std::basic_format_parse_context::check_dynamic_spec)
  * [10 std::basic_format_parse_context::check_dynamic_spec_integral](basic_format_parse_context.html#std::basic_format_parse_context::check_dynamic_spec_integral)
  * [11 std::basic_format_parse_context::check_dynamic_spec_string](basic_format_parse_context.html#std::basic_format_parse_context::check_dynamic_spec_string)
    * [11.1 Example](basic_format_parse_context.html#Example)
    * [11.2 Defect reports](basic_format_parse_context.html#Defect_reports)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/format/basic_format_parse_context&action=edit&section=1 "Edit section: Member types")] Member types

Type  |  Definition   
---|---  
`char_type` |  `CharT`  
`iterator` |  [std::basic_string_view](../../string/basic_string_view.html)<CharT>::const_iterator  
`const_iterator` |  [std::basic_string_view](../../string/basic_string_view.html)<CharT>::const_iterator  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/format/basic_format_parse_context&action=edit&section=2 "Edit section: Member functions")] Member functions

(constructor) |  constructs a `std::basic_format_parse_context` instance from format string and argument count   
(public member function)  
---|---  
operator=[deleted] |  `std::basic_format_parse_context` is not copyable   
(public member function)  
begin |  returns an iterator to the beginning of the format string range   
(public member function)  
end |  returns an iterator to the end of the format string range   
(public member function)  
advance_to |  advances the begin iterator to the given position   
(public member function)  
next_arg_id |  enters automatic indexing mode, and returns the next argument index   
(public member function)  
check_arg_id |  enters manual indexing mode, checks if the given argument index is in range   
(public member function)  
check_dynamic_spec(C++26) |  checks if the type of the corresponding format argument with the given argument index is in the given type template arguments   
(public member function)  
check_dynamic_spec_integral(C++26) |  checks if the type of the corresponding format argument with the given argument index is an integral type   
(public member function)  
check_dynamic_spec_string(C++26) |  checks if the type of the corresponding format argument with the given argument index is a string type   
(public member function)  
  
##  std::basic_format_parse_context::basic_format_parse_context

| (1) |   
---|---|---  
constexpr explicit   
basic_format_parse_context( [std::basic_string_view](../../string/basic_string_view.html)<CharT> fmt,  
[std::size_t](../../types/size_t.html) num_args = 0 ) noexcept; |  | (until C++26)  
constexpr explicit   
basic_format_parse_context( [std::basic_string_view](../../string/basic_string_view.html)<CharT> fmt ) noexcept; |  |  (since C++26)  
basic_format_parse_context( const basic_format_parse_context& ) = delete; |  (2)  |   
| |   
  
1) Constructs a `std::basic_format_parse_context` instance. Initializes the format string range to `[`fmt.begin()`, `fmt.end()`)`, and the argument count to num_args(until C++26)​0​(since C++26).  Any call to `next_arg_id`, `check_arg_id`, or `check_dynamic_spec` on an instance of `std::basic_format_parse_context` initialized using this constructor is not a core constant expression.  | (since C++26)  
---|---  
  
2) The copy constructor is deleted. `std::basic_format_parse_context` is not copyable. 

##  std::basic_format_parse_context::begin

constexpr const_iterator begin() const noexcept; |  |   
---|---|---  
| |   
  
Returns an iterator to the beginning of the format string range. 

##  std::basic_format_parse_context::end

constexpr const_iterator end() const noexcept; |  |   
---|---|---  
| |   
  
Returns an iterator to the end of the format string range. 

##  std::basic_format_parse_context::advance_to

constexpr void advance_to( const_iterator it ); |  |   
---|---|---  
| |   
  
Sets the beginning of the format string range to it. After a call to `advance_to()`, subsequent calls to `begin()` will return a copy of it. 

The behavior is undefined if end() is not [reachable](../../iterator.html#Ranges "cpp/iterator") from it. 

##  std::basic_format_parse_context::next_arg_id

constexpr [std::size_t](../../types/size_t.html) next_arg_id(); |  |   
---|---|---  
| |   
  
Enters automatic argument indexing mode, and returns the next argument index, starting from 0. 

If *this has already entered manual argument indexing mode, throws [std::format_error](format_error.html "cpp/utility/format/format error"). 

If the next argument index is larger than or equal to the num_args provided in the constructor, the call is not a core constant expression. 

##  std::basic_format_parse_context::check_arg_id

constexpr void check_arg_id( [std::size_t](../../types/size_t.html) id ); |  |   
---|---|---  
| |   
  
Enters manual argument indexing mode. 

If *this has already entered automatic argument indexing mode, throws [std::format_error](format_error.html "cpp/utility/format/format error"). 

If id is larger than or equal to the num_args provided in the constructor, the call is not a core constant expression. 

##  std::basic_format_parse_context::check_dynamic_spec

template< class... Ts >  
constexpr void check_dynamic_spec( [std::size_t](../../types/size_t.html) id ) noexcept; |  |  (since C++26)  
---|---|---  
| |   
  
If id is larger than or equal to the num_args provided in the constructor or the type of the corresponding format argument (after conversion to [std::basic_format_arg](basic_format_arg.html "cpp/utility/format/basic format arg")) is not one of the types in Ts..., the call is not a core constant expression. A call to check_dynamic_spec has no effect at runtime. 

The program is ill-formed unless sizeof...(Ts) >= 1, the types in Ts... are unique, and each type is one of bool, char_type, int, unsigned int, long long int, unsigned long long int, float, double, long double, const char_type*, [std::basic_string_view](../../string/basic_string_view.html)<char_type>, or const void*. 

##  std::basic_format_parse_context::check_dynamic_spec_integral

constexpr void check_dynamic_spec_integral( [std::size_t](../../types/size_t.html) id ) noexcept; |  |  (since C++26)  
---|---|---  
| |   
  
Equivalent to call check_dynamic_spec<int, unsigned int, long long int, unsigned long long int>(id). A call to check_dynamic_spec_integral has no effect at runtime. 

##  std::basic_format_parse_context::check_dynamic_spec_string

constexpr void check_dynamic_spec_string( [std::size_t](../../types/size_t.html) id ) noexcept; |  |  (since C++26)  
---|---|---  
| |   
  
Equivalent to call check_dynamic_spec<const char_type*, [std::basic_string_view](../../string/basic_string_view.html)<char_type>>(id). A call to check_dynamic_spec_string has no effect at runtime. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/format/basic_format_parse_context&action=edit&section=3 "Edit section: Example")] Example

| This section is incomplete  
Reason: no example   
---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/format/basic_format_parse_context&action=edit&section=4 "Edit section: Defect reports")] Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3825](https://cplusplus.github.io/LWG/issue3825) | C++20  | `check_arg_id` has a compile-time argument  
id check, but `next_arg_id` did not have  | added   
[LWG 3975](https://cplusplus.github.io/LWG/issue3975) | C++20  | user specialization of `basic_format_parse_context` was allowed  | disallowed 
