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
**runtime_format**(C++26)  
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
/*runtime-format-string*/<char> runtime_format( [std::string_view](../../string/basic_string_view.html) fmt ) noexcept; |  (1)  |  (since C++26)  
/*runtime-format-string*/<wchar_t> runtime_format( [std::wstring_view](../../string/basic_string_view.html) fmt ) noexcept; |  (2)  |  (since C++26)  
| |   
  
Returns an object that stores a runtime format string directly usable in user-oriented formatting functions and can be implicitly converted to [`std::basic_format_string`](basic_format_string.html "cpp/utility/format/basic format string"). 

## Contents

  * [1 Parameters](runtime_format.html#Parameters)
  * [2 Return value](runtime_format.html#Return_value)
  * [3 **Class template** _runtime-format-string_ <CharT>](runtime_format.html#Class_template_runtime-format-string_.3CCharT.3E)
    * [3.1 Member objects](runtime_format.html#Member_objects)
    * [3.2 Constructors and assignments](runtime_format.html#Constructors_and_assignments)
    * [3.3 Notes](runtime_format.html#Notes)
    * [3.4 Example](runtime_format.html#Example)
    * [3.5 See also](runtime_format.html#See_also)

  
---  
  
### Parameters

fmt  |  \-  |  a string view   
---|---|---  
  
### Return value

An object holding the runtime format string of the exposition-only type: 

##  **Class template** `_runtime-format-string_` `<CharT>`

template< class CharT >  
struct /*runtime-format-string*/; |  |  (exposition only*)  
---|---|---  
| |   
  
####  Member objects

The returned object contains an exposition-only non-static data member `_str_` of type std::basic_string_view<CharT>. 

####  Constructors and assignments

/*runtime-format-string*/( [std::basic_string_view](../../string/basic_string_view.html)<CharT> s ) noexcept; |  (1)  |   
---|---|---  
/*runtime-format-string*/( const /*runtime-format-string*/& ) = delete; |  (2)  |   
/*runtime-format-string*/& operator=( const /*runtime-format-string*/& ) = delete; |  (3)  |   
| |   
  
1) Initializes `_str_` with `s`.

2) Copy constructor is explicitly deleted. The type is neither copyable nor movable.

3) The assignment is explicitly deleted. 

### Notes

Since the return type of `runtime_format` is neither copyable nor movable, an attempt of passing runtime_fmt as glvalue inhibits the construction of std::basic_format_string which results in program ill-formed. To construct `std::basic_format_string` with `runtime_format`, the returned value of `runtime_format` is passed directly on `std::basic_format_string` as prvalue where copy elision is guaranteed. 
    
    
    auto runtime_fmt = std::runtime_format("{}");
     
    auto s0 = [std::format](format.html)(runtime_fmt, 1); // error
    auto s1 = [std::format](format.html)(std::move(runtime_fmt), 1); // still error
    auto s2 = [std::format](format.html)(std::runtime_format("{}"), 1); // ok

[Feature-test](../feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_format`](../../experimental/feature_test.html#cpp_lib_format "cpp/feature test") | [`202311L`](../../compiler_support/26.html#cpp_lib_format_202311L "cpp/compiler support/26") | (C++26) | Runtime format strings   
  
### Example

Run this code
    
    
    #include <format>
    #include <print>
    #include <string>
    #include <string_view>
     
    int main()
    {
        [std::print](../../io/print.html)("Hello {}!\n", "world");
     
        [std::string](../../string/basic_string.html) fmt;
        for (int i{}; i != 3; ++i)
        {
            fmt += "{} "; // constructs the formatting string
            [std::print](../../io/print.html)("{} : ", fmt);
            [std::println](../../io/println.html)(std::runtime_format(fmt), "alpha", 'Z', 3.14, "unused");
        }
    }

Output: 
    
    
    Hello world!
    {}  : alpha
    {} {}  : alpha Z
    {} {} {}  : alpha Z 3.14

### See also

[ format](format.html "cpp/utility/format/format")(C++20) |  stores formatted representation of the arguments in a new string   
(function template)   
---|---  
[ vformat](vformat.html "cpp/utility/format/vformat")(C++20) |  non-template variant of [std::format](format.html "cpp/utility/format/format") using type-erased argument representation   
(function)   
[ basic_format_stringformat_stringwformat_string](basic_format_string.html "cpp/utility/format/basic format string")(C++20)(C++20)(C++20) |  class template that performs compile-time format string checks at construction time   
(class template) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
