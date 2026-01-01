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
**format_error**(C++20)  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/utility/format/navbar_content&action=edit)

Defined in header `[<format>](../../header/format.html "cpp/header/format")` |  |   
---|---|---  
class format_error : public runtime_error |  |  (since C++20)  
| |   
  
Defines the type of exception object thrown to report errors in the formatting library. 

All member functions of `std::format_error` are constexpr: it is possible to create and use `std::format_error` objects in the evaluation of a constant expression.However, `std::format_error` objects generally cannot be constexpr, because any dynamically allocated storage must be released in the same evaluation of constant expression. | (since C++26)  
---|---  
  
![std-format error-inheritance.svg](https://upload.cppreference.com/mwiki/images/3/3e/std-format_error-inheritance.svg)

Inheritance diagram

## Contents

  * [1 Member functions](format_error.html#Member_functions)
  * [2 std::format_error::format_error](format_error.html#std::format_error::format_error)
    * [2.1 Parameters](format_error.html#Parameters)
    * [2.2 Exceptions](format_error.html#Exceptions)
    * [2.3 Notes](format_error.html#Notes)
  * [3 std::format_error::operator=](format_error.html#std::format_error::operator.3D)
    * [3.1 Parameters](format_error.html#Parameters_2)
    * [3.2 Return value](format_error.html#Return_value)
    * [3.3 Notes](format_error.html#Notes_2)
  * [4 Inherited from std::runtime_error](format_error.html#Inherited_from_std::runtime_error)
  * [5 Inherited from std::exception](format_error.html#Inherited_from_std::exception)
    * [5.1 Member functions](format_error.html#Member_functions_2)
    * [5.2 Notes](format_error.html#Notes_3)
    * [5.3 Example](format_error.html#Example)
    * [5.4 See also](format_error.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/format/format_error&action=edit&section=1 "Edit section: Member functions")] Member functions

(constructor) |  constructs a new `format_error` object with the given message   
(public member function)  
---|---  
operator= |  replaces the `format_error` object   
(public member function)  
  
##  std::format_error::format_error

format_error( const [std::string](../../string/basic_string.html)& what_arg ); |  (1) | (constexpr since C++26)  
---|---|---  
format_error( const char* what_arg ); |  (2) | (constexpr since C++26)  
format_error( const format_error& other ) noexcept; |  (3) | (constexpr since C++26)  
| |   
  
1) Constructs the exception object with what_arg as explanatory string. After construction, [std::strcmp](../../string/byte/strcmp.html)(what(), what_arg.c_str()) == 0.

2) Constructs the exception object with what_arg as explanatory string. After construction, [std::strcmp](../../string/byte/strcmp.html)(what(), what_arg) == 0.

3) Copy constructor. If *this and other both have dynamic type `std::format_error` then [std::strcmp](../../string/byte/strcmp.html)(what(), other.what()) == 0. No exception can be thrown from the copy constructor.

###  Parameters

what_arg  |  \-  |  explanatory string   
---|---|---  
other  |  \-  |  another exception object to copy   
  
###  Exceptions

1,2) May throw [std::bad_alloc](../../memory/new/bad_alloc.html "cpp/memory/new/bad alloc").

###  Notes

Because copying `std::format_error` is not permitted to throw exceptions, this message is typically stored internally as a separately-allocated reference-counted string. This is also why there is no constructor taking `std::string&&`: it would have to copy the content anyway. 

A derived standard exception class must have a publicly accessible copy constructor. It can be implicitly defined as long as the explanatory strings obtained by `what()` are the same for the original object and the copied object. 

##  std::format_error::operator=

format_error& operator=( const format_error& other ) noexcept; |  | (constexpr since C++26)  
---|---|---  
| |   
  
Assigns the contents with those of other. If *this and other both have dynamic type `std::format_error` then [std::strcmp](../../string/byte/strcmp.html)(what(), other.what()) == 0 after assignment. No exception can be thrown from the copy assignment operator. 

###  Parameters

other  |  \-  |  another exception object to assign with   
---|---|---  
  
###  Return value

*this

###  Notes

A derived standard exception class must have a publicly accessible copy assignment operator. It can be implicitly defined as long as the explanatory strings obtained by `what()` are the same for the original object and the copied object. 

##  Inherited from [std::runtime_error](../../error/runtime_error.html "cpp/error/runtime error")

  


##  Inherited from [std::exception](../../error/exception.html "cpp/error/exception")

###  Member functions

[ (destructor)](../../error/exception/~exception.html "cpp/error/exception/~exception")[virtual] |  destroys the exception object   
(virtual public member function of `std::exception`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/error/exception/dsc_destructor&action=edit)  
---|---  
[ what](../../error/exception/what.html "cpp/error/exception/what")[virtual] |  returns an explanatory string   
(virtual public member function of `std::exception`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/error/exception/dsc_what&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/format/format_error&action=edit&section=2 "Edit section: Notes")] Notes

[Feature-test](../feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_constexpr_exceptions`](../../experimental/feature_test.html#cpp_lib_constexpr_exceptions "cpp/feature test") | [`202502L`](../../compiler_support/26.html#cpp_lib_constexpr_exceptions_202502L "cpp/compiler support/26") | (C++26) | constexpr exception types   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/format/format_error&action=edit&section=3 "Edit section: Example")] Example

Run this code
    
    
    #include <format>
    #include <print>
    #include <string_view>
    #include <utility>
     
    int main()
    {
        try
        {
            auto x13{37};
            auto args{[std::make_format_args](make_format_args.html)(x13)};
            [std::ignore](../tuple/ignore.html) = [std::vformat](vformat.html)("{:()}", args); // throws
        }
        catch(const std::format_error& ex)
        {
            [std::println](../../io/println.html)("{}", ex.what());
        }
    }

Possible output: 
    
    
    format error: failed to parse format-spec

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/format/format_error&action=edit&section=4 "Edit section: See also")] See also
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
