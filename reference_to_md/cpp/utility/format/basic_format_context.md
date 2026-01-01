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
[basic_format_parse_contextformat_parse_contextwformat_parse_context](basic_format_parse_context.html "cpp/utility/format/basic format parse context")(C++20)(C++20)(C++20)  
**basic_format_context format_contextwformat_context**(C++20)(C++20)(C++20)  
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
template< class OutputIt, class CharT >  
class basic_format_context; |  (1)  |  (since C++20)  
using format_context = basic_format_context</* unspecified */, char>; |  (2)  |  (since C++20)  
using wformat_context = basic_format_context</* unspecified */, wchar_t>; |  (3)  |  (since C++20)  
| |   
  
Provides access to formatting state consisting of the formatting arguments and the output iterator. 

2) The unspecified template argument is an output iterator that appends to [std::string](../../string/basic_string.html "cpp/string/basic string"), such as [std::back_insert_iterator](../../iterator/back_insert_iterator.html)<[std::string](../../string/basic_string.html)>. Implementations typically use an iterator to type-erased buffer type that supports appending to any contiguous and resizable container.

3) The unspecified template argument is an output iterator that appends to [std::wstring](../../string/basic_string.html "cpp/string/basic string").

The behavior is undefined if `OutputIt` does not model [std::output_iterator](../../iterator/output_iterator.html)<const CharT&>. 

A program that declares an explicit or partial specialization of `std::basic_format_context` is ill-formed, no diagnostic required. 

`std::basic_format_context` objects can only be created by the implementation. User codes are only allowed to modify the format context via the `format` function of [std::formatter](formatter.html "cpp/utility/format/formatter") specializations. 

## Contents

  * [1 Member types](basic_format_context.html#Member_types)
  * [2 Member alias templates](basic_format_context.html#Member_alias_templates)
  * [3 Member functions](basic_format_context.html#Member_functions)
  * [4 std::basic_format_context::arg](basic_format_context.html#std::basic_format_context::arg)
  * [5 std::basic_format_context::locale](basic_format_context.html#std::basic_format_context::locale)
  * [6 std::basic_format_context::out](basic_format_context.html#std::basic_format_context::out)
  * [7 std::basic_format_context::advance_to](basic_format_context.html#std::basic_format_context::advance_to)
    * [7.1 Example](basic_format_context.html#Example)
    * [7.2 Defect reports](basic_format_context.html#Defect_reports)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/format/basic_format_context&action=edit&section=1 "Edit section: Member types")] Member types

Type  |  Definition   
---|---  
`iterator` |  `OutputIt`  
`char_type` |  `CharT`  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/format/basic_format_context&action=edit&section=2 "Edit section: Member alias templates")] Member alias templates

Type  |  Definition   
---|---  
formatter_type<T> |  [std::formatter](formatter.html)<T, CharT>  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/format/basic_format_context&action=edit&section=3 "Edit section: Member functions")] Member functions

(constructor)[deleted] |  `basic_format_context` cannot be constructed by user code   
(public member function)  
---|---  
operator=[deleted] |  `basic_format_context` is not assignable   
(public member function)  
arg |  returns the argument at the given index   
(public member function)  
locale |  returns the locale used for locale-specific formatting   
(public member function)  
out |  returns the iterator to output buffer   
(public member function)  
advance_to |  advances the output iterator to the given position   
(public member function)  
  
##  std::basic_format_context::arg

[std::basic_format_arg](basic_format_arg.html)<basic_format_context> arg( [std::size_t](../../types/size_t.html) id ) const; |  |   
---|---|---  
| |   
  
Returns a `std::basic_format_arg` holding the `id`-th argument in `args`, where `args` is the parameter pack or `std::basic_format_args` object passed to the formatting function. 

If `id` is not less than the number of formatting arguments, returns a default-constructed `std::basic_format_arg` (holding a [std::monostate](../variant/monostate.html "cpp/utility/variant/monostate") object). 

##  std::basic_format_context::locale

[std::locale](../../locale/locale.html) locale(); |  |   
---|---|---  
| |   
  
Returns the locale passed to the formatting function, or a default-constructed [std::locale](../../locale/locale.html "cpp/locale/locale") if the formatting function does not take a locale. 

##  std::basic_format_context::out

iterator out(); |  |   
---|---|---  
| |   
  
Returns the iterator to the output buffer. The result is move-constructed from the stored iterator. 

##  std::basic_format_context::advance_to

void advance_to( iterator it ); |  |   
---|---|---  
| |   
  
Move assigns `it` to the stored output iterator. After a call to `advance_to`, the next call to `out()` will return an iterator with the value that `it` had before the assignment. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/format/basic_format_context&action=edit&section=4 "Edit section: Example")] Example

| This section is incomplete  
Reason: no example   
---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/format/basic_format_context&action=edit&section=5 "Edit section: Defect reports")] Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3567](https://cplusplus.github.io/LWG/issue3567) | C++20  | `basic_format_context` does not work move-only iterator types  | made to move iterators   
[LWG 3975](https://cplusplus.github.io/LWG/issue3975) | C++20  | user specialization of `basic_format_context` was allowed  | disallowed   
[LWG 4061](https://cplusplus.github.io/LWG/issue4061) | C++20  | `basic_format_context` was constructible and assignable by user code  | made neither constructible nor assignable 
