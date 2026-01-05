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
[enable_nonlocking_formatter_optimization](enable_nonlocking_formatter_optimization.html "cpp/utility/format/enable nonlocking formatter optimization")(C++23)  
[basic_format_parse_contextformat_parse_contextwformat_parse_context](basic_format_parse_context.html "cpp/utility/format/basic format parse context")(C++20)(C++20)(C++20)  
[basic_format_contextformat_contextwformat_context](basic_format_context.html "cpp/utility/format/basic format context")(C++20)(C++20)(C++20)  
[range_format](range_format.html "cpp/utility/format/range format")(C++23)  
[format_kind](format_kind.html "cpp/utility/format/format kind")(C++23)  
Formatting arguments  
[basic_format_arg](basic_format_arg.html "cpp/utility/format/basic format arg")(C++20)  
[basic_format_arg::handle](basic_format_arg/handle.html "cpp/utility/format/basic format arg/handle")(C++20)  
**basic_format_args format_argswformat_args**(C++20)(C++20)(C++20)  
[visit_format_arg](visit_format_arg.html "cpp/utility/format/visit format arg")(C++20) (deprecated in C++26)  
[make_format_argsmake_wformat_args](make_format_args.html "cpp/utility/format/make format args")(C++20)(C++20)  
[Format error](format.html#Format_error "cpp/utility/format/format")  
[format_error](format_error.html "cpp/utility/format/format error")(C++20)  
  


Defined in header `[<format>](../../header/format.html "cpp/header/format")` |  |   
---|---|---  
template< class Context >  
class basic_format_args; |  (1)  |  (since C++20)  
using format_args = basic_format_args<[std::format_context](basic_format_context.html)>; |  (2)  |  (since C++20)  
using wformat_args = basic_format_args<[std::wformat_context](basic_format_context.html)>; |  (3)  |  (since C++20)  
| |   
  
Provides access to formatting arguments. 

## Contents

  * [1 Member functions](basic_format_args.html#Member_functions)
  * [2 std::basic_format_args::basic_format_args](basic_format_args.html#std::basic_format_args::basic_format_args)
  * [3 std::basic_format_args::get](basic_format_args.html#std::basic_format_args::get)
    * [3.1 Deduction guides](basic_format_args.html#Deduction_guides)
    * [3.2 Notes](basic_format_args.html#Notes)
    * [3.3 Example](basic_format_args.html#Example)
    * [3.4 Defect reports](basic_format_args.html#Defect_reports)
    * [3.5 See also](basic_format_args.html#See_also)

  
---  
  
### Member functions

(constructor) |  constructs a `basic_format_args` object   
(public member function)  
---|---  
get |  returns formatting argument at the given index   
(public member function)  
  
##  std::basic_format_args::basic_format_args

template< class... Args >  
basic_format_args( const /*format-arg-store*/<Context, Args...>& store ) noexcept; |  |   
---|---|---  
| |   
  
Constructs a `basic_format_args` object from the result of a call to [std::make_format_args](make_format_args.html "cpp/utility/format/make format args") or [std::make_wformat_args](make_format_args.html "cpp/utility/format/make format args"). 

##  std::basic_format_args::get

[std::basic_format_arg](basic_format_arg.html)<Context> get( [std::size_t](../../types/size_t.html) i ) const noexcept; |  |   
---|---|---  
| |   
  
Returns a [std::basic_format_arg](basic_format_arg.html "cpp/utility/format/basic format arg") holding the i-th argument in `args`, where `args` is the parameter pack passed to [std::make_format_args](make_format_args.html "cpp/utility/format/make format args") or [std::make_wformat_args](make_format_args.html "cpp/utility/format/make format args"). 

If there's no such formatting argument (i.e. *this was default-constructed or i is not less than the number of formatting arguments), returns a default-constructed [std::basic_format_arg](basic_format_arg.html "cpp/utility/format/basic format arg") (holding a [std::monostate](../variant/monostate.html "cpp/utility/variant/monostate") object). 

### Deduction guides

template< class Context, class... Args >  
basic_format_args( /*format-arg-store*/<Context, Args...> ) -> basic_format_args<Context>; |  |  (since C++20)  
---|---|---  
| |   
  
### Notes

`std::basic_format_args` has reference semantics. It is the programmer's responsibility to ensure that *this does not outlive store (which, in turn, should not outlive the arguments to [std::make_format_args](make_format_args.html "cpp/utility/format/make format args") or [std::make_wformat_args](make_format_args.html "cpp/utility/format/make format args")). 

### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[P2216R3](https://wg21.link/P2216R3) | C++20  | `format_args_t` was provided due to overparameterization of `vformat_to` | removed   
[LWG 3810](https://cplusplus.github.io/LWG/issue3810) | C++20  | `basic_format_args` has no deduction guide  | added   
[LWG 4106](https://cplusplus.github.io/LWG/issue4106) | C++20  | `basic_format_args` was default-constructible  | default constructor removed   
  
### See also

[ basic_format_arg](basic_format_arg.html "cpp/utility/format/basic format arg")(C++20) |  class template that provides access to a formatting argument for user-defined formatters   
(class template)   
---|---
