
  


[Text processing library](../text.html "cpp/text")

[Localization library](../locale.html "cpp/locale")  
---  
[Regular expressions library](../regex.html "cpp/regex") (C++11)  
**Formatting library** (C++20)  
[Null-terminated sequence utilities](../text.html#Null-terminated_sequence_utilities "cpp/text")  
[Byte strings](../string/byte.html "cpp/string/byte")  
[Multibyte strings](../string/multibyte.html "cpp/string/multibyte")  
[Wide strings](../string/wide.html "cpp/string/wide")  
[Primitive numeric conversions](../text.html#Primitive_numeric_conversions "cpp/text")  
| [to_chars](to_chars.html "cpp/utility/to chars")(C++17)  
---  
[to_chars_result](to_chars_result.html "cpp/utility/to chars result")(C++17)  
[from_chars](from_chars.html "cpp/utility/from chars")(C++17)  
[from_chars_result](from_chars_result.html "cpp/utility/from chars result")(C++17)  
[chars_format](chars_format.html "cpp/utility/chars format")(C++17)  
  
[Text encoding identifications](../text.html#Text_encoding_identifications "cpp/text")  
| [text_encoding](../locale/text_encoding.html "cpp/text/text encoding")(C++26)  
---  
  


**Formatting library**

[Standard format specification](format/spec.html "cpp/utility/format/spec")  
---  
[Formatting functions](format/format.html#Formatting_functions "cpp/utility/format/format")  
[format](format/format.html "cpp/utility/format/format")(C++20)  
[format_to](format/format_to.html "cpp/utility/format/format to")(C++20)  
[format_to_n](format/format_to_n.html "cpp/utility/format/format to n")(C++20)  
[formatted_size](format/formatted_size.html "cpp/utility/format/formatted size")(C++20)  
[vformat](format/vformat.html "cpp/utility/format/vformat")(C++20)  
[vformat_to](format/vformat_to.html "cpp/utility/format/vformat to")(C++20)  
[Format strings](format/format.html#Format_strings "cpp/utility/format/format")  
[basic_format_stringformat_stringwformat_string](format/basic_format_string.html "cpp/utility/format/basic format string")(C++20)(C++20)(C++20)  
[runtime_format](format/runtime_format.html "cpp/utility/format/runtime format")(C++26)  
[Formatting concepts](format/format.html#Formatting_concepts "cpp/utility/format/format")  
[formattable](format/formattable.html "cpp/utility/format/formattable")(C++23)  
Formatter  
[formatter](format/formatter.html "cpp/utility/format/formatter")(C++20)  
[formatter<_pair-or-tuple_ >](format/tuple_formatter.html "cpp/utility/format/tuple formatter")(C++23)  
[formatter<_range_ >](format/ranges_formatter.html "cpp/utility/format/ranges formatter")(C++23)  
[range_formatter](format/range_formatter.html "cpp/utility/format/range formatter")(C++23)  
[enable_nonlocking_formatter_optimization](format/enable_nonlocking_formatter_optimization.html "cpp/utility/format/enable nonlocking formatter optimization")(C++23)  
[basic_format_parse_contextformat_parse_contextwformat_parse_context](format/basic_format_parse_context.html "cpp/utility/format/basic format parse context")(C++20)(C++20)(C++20)  
[basic_format_contextformat_contextwformat_context](format/basic_format_context.html "cpp/utility/format/basic format context")(C++20)(C++20)(C++20)  
[range_format](format/range_format.html "cpp/utility/format/range format")(C++23)  
[format_kind](format/format_kind.html "cpp/utility/format/format kind")(C++23)  
Formatting arguments  
[basic_format_arg](format/basic_format_arg.html "cpp/utility/format/basic format arg")(C++20)  
[basic_format_arg::handle](format/basic_format_arg/handle.html "cpp/utility/format/basic format arg/handle")(C++20)  
[basic_format_argsformat_argswformat_args](format/basic_format_args.html "cpp/utility/format/basic format args")(C++20)(C++20)(C++20)  
[visit_format_arg](format/visit_format_arg.html "cpp/utility/format/visit format arg")(C++20) (deprecated in C++26)  
[make_format_argsmake_wformat_args](format/make_format_args.html "cpp/utility/format/make format args")(C++20)(C++20)  
[Format error](format/format.html#Format_error "cpp/utility/format/format")  
[format_error](format/format_error.html "cpp/utility/format/format error")(C++20)  
  


The text formatting library offers a safe and extensible alternative to the printf family of functions. It is intended to complement the existing C++ I/O streams library. 

## Contents

  * [1 Format specifications](format.html#Format_specifications)
  * [2 Formatting functions](format.html#Formatting_functions)
  * [3 Format strings](format.html#Format_strings)
  * [4 Formatting concepts](format.html#Formatting_concepts)
  * [5 Extensibility support and implementation detail](format.html#Extensibility_support_and_implementation_detail)
  * [6 Helper items (since C++23)](format.html#Helper_items_.28since_C.2B.2B23.29)
  * [7 Notes](format.html#Notes)
  * [8 Example](format.html#Example)
  * [9 Defect reports](format.html#Defect_reports)
  * [10 See also](format.html#See_also)

  
---  
  
### Format specifications

Format specification specifies how objects are formatted with different kinds of options. 

The formatting of objects of basic types and standard string types uses the [basic format specification](format/spec.html "cpp/utility/format/spec"). Other library components may also provide their own format specifications, see [here](format/basic_format_string.html "cpp/utility/format/basic format string") for details. 

### Formatting functions

Defined in header `[<format>](../header/format.html "cpp/header/format")`  
---  
[ format](format/format.html "cpp/utility/format/format")(C++20) |  stores formatted representation of the arguments in a new string   
(function template)   
[ format_to](format/format_to.html "cpp/utility/format/format to")(C++20) |  writes out formatted representation of its arguments through an output iterator   
(function template)   
[ format_to_n](format/format_to_n.html "cpp/utility/format/format to n")(C++20) |  writes out formatted representation of its arguments through an output iterator, not exceeding specified size   
(function template)   
[ formatted_size](format/formatted_size.html "cpp/utility/format/formatted size")(C++20) |  determines the number of characters necessary to store the formatted representation of its arguments   
(function template)   
  
### Format strings

Defined in header `[<format>](../header/format.html "cpp/header/format")`  
---  
[ basic_format_stringformat_stringwformat_string](format/basic_format_string.html "cpp/utility/format/basic format string")(C++20)(C++20)(C++20) |  class template that performs compile-time format string checks at construction time   
(class template)   
[ runtime_format](format/runtime_format.html "cpp/utility/format/runtime format")(C++26) |  creates runtime format strings directly usable in user-oriented formatting functions   
(function)   
  
### Formatting concepts

Defined in header `[<format>](../header/format.html "cpp/header/format")`  
---  
[ formattable](format/formattable.html "cpp/utility/format/formattable")(C++23) |  specifies that a type is formattable, that is, it specializes [std::formatter](format/formatter.html "cpp/utility/format/formatter") and provides member functions `parse` and `format`   
(concept)   
  
### Extensibility support and implementation detail

Defined in header `[<format>](../header/format.html "cpp/header/format")`  
---  
[ vformat](format/vformat.html "cpp/utility/format/vformat")(C++20) |  non-template variant of [std::format](format/format.html "cpp/utility/format/format") using type-erased argument representation   
(function)   
[ vformat_to](format/vformat_to.html "cpp/utility/format/vformat to")(C++20) |  non-template variant of [std::format_to](format/format_to.html "cpp/utility/format/format to") using type-erased argument representation   
(function template)   
[ make_format_argsmake_wformat_args](format/make_format_args.html "cpp/utility/format/make format args")(C++20)(C++20) |  creates a type-erased object referencing all formatting arguments, convertible to `format_args`   
(function template)   
[ visit_format_arg](format/visit_format_arg.html "cpp/utility/format/visit format arg")(C++20) (deprecated in C++26) |  argument visitation interface for user-defined formatters   
(function template)   
[ formatter](format/formatter.html "cpp/utility/format/formatter")(C++20) |  defines formatting rules for a given type   
(class template)   
[ range_formatter](format/range_formatter.html "cpp/utility/format/range formatter")(C++23) |  class template that helps implementing [std::formatter](format/formatter.html "cpp/utility/format/formatter") specializations for range types   
(class template)   
[ enable_nonlocking_formatter_optimization](format/enable_nonlocking_formatter_optimization.html "cpp/utility/format/enable nonlocking formatter optimization")(C++23) |  indicates the argument type can be efficiently printed  
(variable template)  
[ range_format](format/range_format.html "cpp/utility/format/range format")(C++23) |  specifies how a range should be formatted   
(enum)   
[ format_kind](format/format_kind.html "cpp/utility/format/format kind")(C++23) |  selects a suited std::range_format for a range  
(variable template)  
[ basic_format_arg](format/basic_format_arg.html "cpp/utility/format/basic format arg")(C++20) |  class template that provides access to a formatting argument for user-defined formatters   
(class template)   
[ basic_format_argsformat_argswformat_args](format/basic_format_args.html "cpp/utility/format/basic format args")(C++20)(C++20)(C++20) |  class that provides access to all formatting arguments   
(class template)   
[ basic_format_contextformat_contextwformat_context](format/basic_format_context.html "cpp/utility/format/basic format context")(C++20)(C++20)(C++20) |  formatting state, including all formatting arguments and the output iterator   
(class template)   
[ basic_format_parse_contextformat_parse_contextwformat_parse_context](format/basic_format_parse_context.html "cpp/utility/format/basic format parse context")(C++20)(C++20)(C++20) |  formatting string parser state   
(class template)   
[ format_error](format/format_error.html "cpp/utility/format/format error")(C++20) |  exception type thrown on formatting errors   
(class)   
  
### Helper items (since C++23)

template< class R, class CharT >  
concept /*const-formattable-range*/ =   
[ranges::input_range](../ranges/input_range.html)<const R> &&  
[std::formattable](format/formattable.html)<[ranges::range_reference_t](../ranges/range_reference_t.html)<const R>, CharT>; |  (1) | (exposition only*)  
---|---|---  
template< class R, class CharT >  
using /*fmt-maybe-const*/ =   
[std::conditional_t](../types/conditional.html)</*const-formattable-range*/<R, CharT>, const R, R>; |  (2) | (exposition only*)  
| |   
  
### Notes

[Feature-test](feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_format`](../experimental/feature_test.html#cpp_lib_format "cpp/feature test") | [`201907L`](../compiler_support/20.html#cpp_lib_format_201907L "cpp/compiler support/20") | (C++20) | Text formatting   
[`202106L`](../compiler_support/23.html#cpp_lib_format_202106L "cpp/compiler support/23") | (C++23)  
(DR20) | Compile-time format string checks;  
Reducing parameterization of [std::vformat_to](format/vformat_to.html "cpp/utility/format/vformat to")  
[`202110L`](../compiler_support/23.html#cpp_lib_format_202110L "cpp/compiler support/23") | (C++23)  
(DR20) | Fixing locale handling in chrono formatters;  
Supporting non-const-formattable types   
[`202207L`](../compiler_support/23.html#cpp_lib_format_202207L "cpp/compiler support/23") | (C++23)  
(DR20) | Exposing std::basic_format_string;  
Clarify handling of encodings in localized formatting of chrono types   
[`202304L`](../compiler_support/26.html#cpp_lib_format_202304L "cpp/compiler support/26") | (C++26) | Formatting pointers   
[`202305L`](../compiler_support/26.html#cpp_lib_format_202305L "cpp/compiler support/26") | (C++26) | Type-checking format args   
[`202306L`](../compiler_support/26.html#cpp_lib_format_202306L "cpp/compiler support/26") | (C++26) | Member [`std::basic_format_arg::visit`](format/basic_format_arg.html#visit "cpp/utility/format/basic format arg")  
[`202311L`](../compiler_support/26.html#cpp_lib_format_202311L "cpp/compiler support/26") | (C++26) | Runtime format string   
[`202403L`](../compiler_support/26.html#cpp_lib_format_202403L "cpp/compiler support/26") | (C++26) | Printing Blank Lines with std::println  
[`202403L`](../compiler_support/26.html#cpp_lib_format_202403L "cpp/compiler support/26") | (C++26)  
(DR23) | Permit an efficient implementation of std::print | | This section is incomplete  
Reason: the value should be >= 202406L, i.e. be different from the previous one   
---|---  
[`__cpp_lib_format_ranges`](../experimental/feature_test.html#cpp_lib_format_ranges "cpp/feature test") | [`202207L`](../compiler_support/23.html#cpp_lib_format_ranges_202207L "cpp/compiler support/23") | (C++23) | Formatting ranges   
[`__cpp_lib_format_path`](../experimental/feature_test.html#cpp_lib_format_path "cpp/feature test") | [`202403L`](../compiler_support/26.html#cpp_lib_format_path_202403L "cpp/compiler support/26") | (C++26) | Formatting of [std::filesystem::path](../filesystem/path.html "cpp/filesystem/path")  
[`__cpp_lib_format_uchar`](../experimental/feature_test.html#cpp_lib_format_uchar "cpp/feature test") | [`202311L`](../compiler_support/26.html#cpp_lib_format_uchar_202311L "cpp/compiler support/26") | (C++26) | Fix formatting of code units as integers   
[`__cpp_lib_formatters`](../experimental/feature_test.html#cpp_lib_formatters "cpp/feature test") | [`202302L`](../compiler_support/23.html#cpp_lib_formatters_202302L "cpp/compiler support/23") | (C++23) | Formatting [std::thread::id](../thread/thread/id.html "cpp/thread/thread/id") and std::stacktrace  
  
We intentionally treat the addition of `std::basic_format_string` ([P2508](https://wg21.link/P2508)) as a defect report because all known implementations make these components available in C++20 mode, although it is not so categorized officially. 

### Example

Run this code
    
    
    #include <cassert>
    #include <format>
     
    int main()
    {
        [std::string](../string/basic_string.html) message = [std::format](format/format.html)("The answer is {}.", 42);
        [assert](../error/assert.html)(message == "The answer is 42.");
    }

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[P2418R2](https://wg21.link/P2418R2) | C++20  | objects that are neither const-formattable nor copyable  
(such as generator-like objects) are not formattable  | allow formatting these objects  
(relaxed formatter requirements)   
[P2508R1](https://wg21.link/P2508R1) | C++20  | there's no user-visible name for this facility  | the name `basic_format_string` is exposed   
  
### See also

[ print](../io/print.html "cpp/io/print")(C++23) |  prints to [stdout](../io/c/std_streams.html "cpp/io/c/std streams") or a file stream using **formatted** representation of the arguments   
(function template)   
---|---  
[ println](../io/println.html "cpp/io/println")(C++23) |  same as std::print except that each print is terminated by additional new line   
(function template)   
[ print(std::ostream)](../io/basic_ostream/print.html "cpp/io/basic ostream/print")(C++23) |  outputs **formatted** representation of the arguments   
(function template) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
