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
**basic_format_arg**(C++20)  
[basic_format_arg::handle](basic_format_arg/handle.html "cpp/utility/format/basic format arg/handle")(C++20)  
[basic_format_argsformat_argswformat_args](basic_format_args.html "cpp/utility/format/basic format args")(C++20)(C++20)(C++20)  
[visit_format_arg](visit_format_arg.html "cpp/utility/format/visit format arg")(C++20) (deprecated in C++26)  
[make_format_argsmake_wformat_args](make_format_args.html "cpp/utility/format/make format args")(C++20)(C++20)  
[Format error](format.html#Format_error "cpp/utility/format/format")  
[format_error](format_error.html "cpp/utility/format/format error")(C++20)  
  


Defined in header `[<format>](../../header/format.html "cpp/header/format")` |  |   
---|---|---  
template< class Context >  
class basic_format_arg; |  |  (since C++20)  
| |   
  
Provides access to a formatting argument. 

`basic_format_arg` objects are typically created by [std::make_format_args](make_format_args.html "cpp/utility/format/make format args") and accessed through [std::visit_format_arg](visit_format_arg.html "cpp/utility/format/visit format arg") or the `visit` member functions(since C++26). 

A `basic_format_arg` object behaves as if it contains a [std::variant](../variant.html "cpp/utility/variant") of the following types: 

  * [std::monostate](../variant/monostate.html) (only if the object was default-constructed) 
  * bool
  * Context::char_type
  * int
  * unsigned int
  * long long int
  * unsigned long long int
  * float
  * double
  * long double
  * const Context::char_type*
  * [std::basic_string_view](../../string/basic_string_view.html)<Context::char_type>
  * const void*
  * basic_format_arg::handle



## Contents

  * [1 Member classes](basic_format_arg.html#Member_classes)
  * [2 Member functions](basic_format_arg.html#Member_functions)
  * [3 Non-member functions](basic_format_arg.html#Non-member_functions)
  * [4 std::basic_format_arg::basic_format_arg](basic_format_arg.html#std::basic_format_arg::basic_format_arg)
  * [5 std::basic_format_arg::operator bool](basic_format_arg.html#std::basic_format_arg::operator_bool)
  * [6 std::basic_format_arg::visit](basic_format_arg.html#std::basic_format_arg::visit)
    * [6.1 Notes](basic_format_arg.html#Notes)
    * [6.2 Example](basic_format_arg.html#Example)
    * [6.3 See also](basic_format_arg.html#See_also)

  
---  
  
### Member classes

[ handle](basic_format_arg/handle.html "cpp/utility/format/basic format arg/handle")(C++20) |  type-erased wrapper that allows formatting an object of user-defined type   
(public member class)  
---|---  
  
### Member functions

(constructor)(C++20) |  constructs a `std::basic_format_arg`   
(public member function)  
---|---  
operator bool(C++20) |  checks if the current object holds a formatting argument   
(public member function)  
visit(C++26) |  visit the contained formatting argument   
(public member function)  
  
### Non-member functions

[ visit_format_arg](visit_format_arg.html "cpp/utility/format/visit format arg")(C++20) (deprecated in C++26) |  argument visitation interface for user-defined formatters   
(function template)   
---|---  
  
##  std::basic_format_arg::basic_format_arg

basic_format_arg() noexcept; |  |  (since C++20)  
---|---|---  
| |   
  
Default constructor. Constructs a `basic_format_arg` that does not hold a formatting argument. The contained object has type [std::monostate](../variant/monostate.html "cpp/utility/variant/monostate"). 

To create a `basic_format_arg` that holds a formatting argument, [std::make_format_args](make_format_args.html "cpp/utility/format/make format args") has to be used. 

##  std::basic_format_arg::operator bool

explicit operator bool() const noexcept; |  |  (since C++20)  
---|---|---  
| |   
  
Checks whether *this holds a formatting argument. 

Returns true if *this holds a formatting argument (i.e. the contained object does not have type [std::monostate](../variant/monostate.html "cpp/utility/variant/monostate")), false otherwise. 

##  std::basic_format_arg::visit

template< class Visitor >  
decltype(auto) visit( this basic_format_arg arg, Visitor&& vis ); |  (1)  |  (since C++26)  
---|---|---  
template< class R, class Visitor >  
R visit( this basic_format_arg arg, Visitor&& vis ); |  (2)  |  (since C++26)  
| |   
  
Applies the visitor vis to the object contained in arg. 

The `visit` functions do not modify the `basic_format_arg` object on which it is called because a copy of the object is used when calling vis. 

1) Equivalent to return [std::visit](../variant/visit.html)([std::forward](../forward.html)<Visitor>(vis), v);, where `v` is the [std::variant](../variant.html "cpp/utility/variant") contained in arg.

2) Equivalent to return [std::visit](../variant/visit.html)<R>([std::forward](../forward.html)<Visitor>(vis), v);, where `v` is the [std::variant](../variant.html "cpp/utility/variant") contained in arg. 

### Notes

[Feature-test](../feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_format`](../../experimental/feature_test.html#cpp_lib_format "cpp/feature test") | [`202306L`](../../compiler_support/26.html#cpp_lib_format_202306L "cpp/compiler support/26") | (C++26) | Member [`visit`](basic_format_arg.html#visit)  
  
### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### See also

[ basic_format_argsformat_argswformat_args](basic_format_args.html "cpp/utility/format/basic format args")(C++20)(C++20)(C++20) |  class that provides access to all formatting arguments   
(class template)   
---|---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
