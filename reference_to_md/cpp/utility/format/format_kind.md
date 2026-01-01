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
**format_kind**(C++23)  
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
template< class R >  
constexpr /* unspecified */ format_kind = /* unspecified */; |  (1)  |  (since C++23)  
template< [ranges::input_range](../../ranges/input_range.html) R >  
requires [std::same_as](../../concepts/same_as.html)<R, [std::remove_cvref_t](../../types/remove_cvref.html)<R>>  
constexpr range_format format_kind<R> = /* see description */; |  (2)  |  (since C++23)  
| |   
  
The variable template `format_kind` selects an appropriate std::range_format for a range `R`. 

std::format_kind<R> is defined as follows: 

  * If [std::same_as](../../concepts/same_as.html)<[std::remove_cvref_t](../../types/remove_cvref.html)<[ranges::range_reference_t](../../ranges/range_reference_t.html)<R>>, R> is true, std::format_kind<R> is std::range_format::disabled. 
  * Otherwise, if `R::key_type` is valid and denotes a type: 
    * If `R::mapped_type` is valid and denotes a type, let `U` be [std::remove_cvref_t](../../types/remove_cvref.html)<[ranges::range_reference_t](../../ranges/range_reference_t.html)<R>>. 



    

     If either `U` is a specialization of [std::pair](../pair.html "cpp/utility/pair") or `U` is a specialization of [std::tuple](../tuple.html "cpp/utility/tuple") and [std::tuple_size_v](../tuple_size.html)<U> == 2, std::format_kind<R> is std::range_format::map. 

  * Otherwise, std::format_kind<R> is std::range_format::set. 



  * Otherwise, std::format_kind<R> is std::range_format::sequence. 



A program that instantiates the primary template of the `format_kind` variable template is ill-formed. 

Given a cv-unqualified [program-defined type](../../language/type-id.html#Program-defined_type "cpp/language/type") `T` that models [`input_range`](../../ranges/input_range.html "cpp/ranges/input range"), a program can specialize `format_kind` for `T`. Such specializations are usable in constant expressions, and have type const [std::range_format](range_format.html). 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/format/format_kind&action=edit&section=1 "Edit section: Possible implementation")] Possible implementation
    
    
    namespace detail
    {
        template< typename >
        constexpr bool is_pair_or_tuple_2 = false;
     
        template< typename T, typename U >
        constexpr bool is_pair_or_tuple_2<[std::pair](../pair.html)<T, U>> = true;
     
        template< typename T, typename U >
        constexpr bool is_pair_or_tuple_2<[std::tuple](../tuple.html)<T, U>> = true;
     
        template < typename T >
            requires [std::is_reference_v](../../types/is_reference.html)<T> || [std::is_const_v](../../types/is_const.html)<T>
        constexpr bool is_pair_or_tuple_2<T> =
            is_pair_or_tuple_2<[std::remove_cvref_t](../../types/remove_cvref.html)<T>>;
    }
     
    template< class R >
    constexpr range_format format_kind = []
    {
        static_assert(false, "instantiating a primary template is not allowed");
        return range_format::disabled;
    }();
     
    template< [ranges::input_range](../../ranges/input_range.html) R >
        requires [std::same_as](../../concepts/same_as.html)<R, [std::remove_cvref_t](../../types/remove_cvref.html)<R>>
    constexpr range_format format_kind<R> = []
    {
        if constexpr ([std::same_as](../../concepts/same_as.html)<[std::remove_cvref_t](../../types/remove_cvref.html)<std::[ranges::range_reference_t](../../ranges/range_reference_t.html)<R>>, R>)
            return range_format::disabled;
        else if constexpr (requires { typename R::key_type; })
        {
            if constexpr (requires { typename R::mapped_type; } &&
                          detail::is_pair_or_tuple_2<std::[ranges::range_reference_t](../../ranges/range_reference_t.html)<R>>)
                return range_format::map;
            else
                return range_format::set;
        }
        else
            return range_format::sequence;
    }();  
  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/format/format_kind&action=edit&section=2 "Edit section: Example")] Example

Run this code
    
    
    #include <filesystem>
    #include <format>
    #include <map>
    #include <set>
    #include <vector>
     
    struct A {};
     
    static_assert(std::format_kind<[std::vector](../../container/vector.html)<int>> == std::range_format::sequence);
    static_assert(std::format_kind<[std::map](../../container/map.html)<int, int>> == std::range_format::map);
    static_assert(std::format_kind<[std::set](../../container/set.html)<int>> == std::range_format::set);
    static_assert(std::format_kind<[std::filesystem::path](../../filesystem/path.html)> == std::range_format::disabled);
    // ill-formed:
    // static_assert(std::format_kind<A> == std::range_format::disabled);
     
    int main() {}

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/format/format_kind&action=edit&section=3 "Edit section: See also")] See also

[ range_format](range_format.html "cpp/utility/format/range format")(C++23) |  specifies how a range should be formatted   
(enum) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/utility/format/dsc_range_format&action=edit)  
---|---
