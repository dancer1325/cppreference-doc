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
**make_format_args make_wformat_args**(C++20)(C++20)  
[Format error](format.html#Format_error "cpp/utility/format/format")  
[format_error](format_error.html "cpp/utility/format/format error")(C++20)  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/utility/format/navbar_content&action=edit)

Defined in header `[<format>](../../header/format.html "cpp/header/format")` |  |   
---|---|---  
template< class Context = [std::format_context](basic_format_context.html), class... Args >  
/*format-arg-store*/<Context, Args...>  
make_format_args( Args&... args ); |  (1)  |  (since C++20)  
template< class... Args >  
/*format-arg-store*/<[std::wformat_context](basic_format_context.html), Args...>  
make_wformat_args( Args&... args ); |  (2)  |  (since C++20)  
| |   
  
Returns an object that stores an array of formatting arguments and can be implicitly converted to [std::basic_format_args<Context>](basic_format_args.html "cpp/utility/format/basic format args"). 

The behavior is undefined if typename Context::template formatter_type<[std::remove_const_t](../../types/remove_cv.html)<Ti>> does not meet the [BasicFormatter](../../named_req/BasicFormatter.html "cpp/named req/BasicFormatter") requirements for any `Ti` in `Args`. 

The program is ill-formed if for any type `Ti` in `Args`, `Ti` does not satisfy [`___formattable_with_`](formattable.html "cpp/utility/format/formattable") <Context>. 

2) Equivalent to return std::make_format_args<[std::wformat_context](basic_format_context.html)>(args...);.

## Contents

  * [1 Parameters](make_format_args.html#Parameters)
  * [2 Returns](make_format_args.html#Returns)
  * [3 Notes](make_format_args.html#Notes)
  * [4 Example](make_format_args.html#Example)
  * [5 Defect reports](make_format_args.html#Defect_reports)
  * [6 See also](make_format_args.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/format/make_format_args&action=edit&section=1 "Edit section: Parameters")] Parameters

args...  |  \-  |  values to be used as formatting arguments   
---|---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/format/make_format_args&action=edit&section=2 "Edit section: Returns")] Returns

An object that holds the formatting arguments. 

For each argument `t` of type `T`, let `TD` be [std::remove_const_t](../../types/remove_cv.html)<[std::remove_reference_t](../../types/remove_reference.html)<T>>. The corresponding [std::basic_format_arg](basic_format_arg.html "cpp/utility/format/basic format arg") in the result is determined as below: 

  * if `TD` is bool or `Context::char_type`, the [std::basic_format_arg](basic_format_arg.html "cpp/utility/format/basic format arg") stores t; 
  * otherwise, if `TD` is char and `Context::char_type` is wchar_t, the [std::basic_format_arg](basic_format_arg.html "cpp/utility/format/basic format arg") stores static_cast<wchar_t>(static_cast<unsigned char>(t)); 
  * otherwise, if `TD` is a signed integer type whose size is not greater than int, the [std::basic_format_arg](basic_format_arg.html "cpp/utility/format/basic format arg") stores static_cast<int>(t); 
  * otherwise, if `TD` is a unsigned integer type whose size is not greater than unsigned int, the [std::basic_format_arg](basic_format_arg.html "cpp/utility/format/basic format arg") stores static_cast<unsigned int>(t); 
  * otherwise, if `TD` is a signed integer type whose size is not greater than long long, the [std::basic_format_arg](basic_format_arg.html "cpp/utility/format/basic format arg") stores static_cast<long long>(t); 
  * otherwise, if `TD` is a unsigned integer type whose size is not greater than unsigned long long, the [std::basic_format_arg](basic_format_arg.html "cpp/utility/format/basic format arg") stores static_cast<unsigned long long>(t); 
  * otherwise, if `TD` is float, double, or long double, the [std::basic_format_arg](basic_format_arg.html "cpp/utility/format/basic format arg") stores t; 
  * otherwise, if `TD` is a [std::basic_string_view](../../string/basic_string_view.html "cpp/string/basic string view") or [std::basic_string](../../string/basic_string.html "cpp/string/basic string") specialization and `TD::char_type` is `Context::char_type`, the [std::basic_format_arg](basic_format_arg.html "cpp/utility/format/basic format arg") stores [std::basic_string_view](../../string/basic_string_view.html)<Context::char_type>(t.data(), t.size()); 
  * otherwise, if [std::decay_t](../../types/decay.html)<TD> is Context::char_type* or const Context::char_type*, the [std::basic_format_arg](basic_format_arg.html "cpp/utility/format/basic format arg") stores static_cast<const Context::char_type*>(t); 
  * otherwise, if [std::is_void_v](../../types/is_void.html)<[std::remove_pointer_t](../../types/remove_pointer.html)<TD>> is true or [std::is_null_pointer_v](../../types/is_null_pointer.html)<TD> is true, the [std::basic_format_arg](basic_format_arg.html "cpp/utility/format/basic format arg") stores static_cast<const void*>(t); 
  * otherwise, the [std::basic_format_arg](basic_format_arg.html "cpp/utility/format/basic format arg") stores a [std::basic_format_arg](basic_format_arg.html)<Context>::handle to `t`, along with extra data needed for [`handle::format()`](basic_format_arg/handle.html "cpp/utility/format/basic format arg/handle"). 



### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/format/make_format_args&action=edit&section=3 "Edit section: Notes")] Notes

A formatting argument has reference semantics for user-defined types and does not extend the lifetime of args. It is the programmer's responsibility to ensure that args outlive the return value. Usually, the result is only used as argument to formatting function. 

[Feature-test](../feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_format_uchar`](../../experimental/feature_test.html#cpp_lib_format_uchar "cpp/feature test") | [`202311L`](../../compiler_support/20.html#cpp_lib_format_uchar_202311L "cpp/compiler support/20") | (C++20)  
(DR) | Formatting of code units as unsigned integers   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/format/make_format_args&action=edit&section=4 "Edit section: Example")] Example

Run this code
    
    
    #include <array>
    #include <format>
    #include <iostream>
    #include <string_view>
     
    void raw_write_to_log([std::string_view](../../string/basic_string_view.html) users_fmt, [std::format_args](basic_format_args.html)&& args)
    {
        static int n{};
        [std::clog](../../io/clog.html) << [std::format](format.html)("{:04} : ", n++) << [std::vformat](vformat.html)(users_fmt, args) << '\n';
    }
     
    template<typename... Args>
    constexpr void log(Args&&... args)
    {
        // Generate formatting string "{} "...
        [std::array](../../container/array.html)<char, sizeof...(Args) * 3 + 1> braces{};
        constexpr const char c[4] = "{} ";
        for (auto i{0uz}; i != braces.size() - 1; ++i)
            braces[i] = c[i % 3];
        braces.back() = '\0';
     
        raw_write_to_log([std::string_view](../../string/basic_string_view.html){braces.data()}, std::make_format_args(args...));
    }
     
    template<typename T>
    const T& unmove(T&& x)
    {
        return x;
    }
     
    int main()
    {
        log("Number", "of", "arguments", "is", "arbitrary.");
        log("Any type that meets the BasicFormatter requirements", "can be printed.");
        log("For example:", 1, 2.0, '3', "*42*");
     
        raw_write_to_log("{:02} │ {} │ {} │ {}",
                         std::make_format_args(unmove(1), unmove(2.0), unmove('3'), "4"));
    }

Output: 
    
    
    0000 : Number of arguments is arbitrary.
    0001 : Any type that meets the BasicFormatter requirements can be printed.
    0002 : For example: 1 2.0 3 *42*
    0003 : 01 │ 2.0 │ 3 │ 4

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/format/make_format_args&action=edit&section=5 "Edit section: Defect reports")] Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[P2418R2](https://wg21.link/P2418R2) | C++20  | objects that are neither const-usable nor copyable  
(such as generator-like objects) are not formattable  | allow formatting these objects   
[P2905R2](https://wg21.link/P2905R2) | C++20  | `make_format_args` accepted rvalue arguments by forwarding references  | only takes lvalue references   
[P2909R4](https://wg21.link/P2909R4) | C++20  | char or wchar_t might be formatted as  
out-of-range unsigned integer values  | code units are converted to the corresponding  
unsigned type before such formatting   
[LWG 3631](https://cplusplus.github.io/LWG/issue3631) | C++20  | cv-qualified arguments were incorrectly handled after P2418R2  | handling corrected   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/format/make_format_args&action=edit&section=6 "Edit section: See also")] See also

[ basic_format_argsformat_argswformat_args](basic_format_args.html "cpp/utility/format/basic format args")(C++20)(C++20)(C++20) |  class that provides access to all formatting arguments   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/utility/format/dsc_basic_format_args&action=edit)  
---|---  
[ vformat](vformat.html "cpp/utility/format/vformat")(C++20) |  non-template variant of [std::format](format.html "cpp/utility/format/format") using type-erased argument representation   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/utility/format/dsc_vformat&action=edit)  
[ vformat_to](vformat_to.html "cpp/utility/format/vformat to")(C++20) |  non-template variant of [std::format_to](format_to.html "cpp/utility/format/format to") using type-erased argument representation   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/utility/format/dsc_vformat_to&action=edit)
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
