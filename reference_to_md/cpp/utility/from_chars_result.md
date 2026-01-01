[C++](../../cpp.html "cpp")

[Compiler support](../compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](../freestanding.html "cpp/freestanding")  
[Language](../language.html "cpp/language")  
[Standard library](../standard_library.html "cpp/standard library")  
[Standard library headers](../headers.html "cpp/header")  
[Named requirements](../iterator/concepts.html "cpp/named req")  
[Feature test macros](../experimental/feature_test.html "cpp/feature test") (C++20)  
[Language support library](../utility.html#Language_support "cpp/utility")  
[Concepts library](../concepts.html "cpp/concepts") (C++20)  
[Diagnostics library](../error.html "cpp/error")  
[Memory management library](../memory.html "cpp/memory")  
[Metaprogramming library](../meta.html "cpp/meta") (C++11)  
[General utilities library](../utility.html "cpp/utility")  
[Containers library](../container.html "cpp/container")  
[Iterators library](../iterator.html "cpp/iterator")  
[Ranges library](../ranges.html "cpp/ranges") (C++20)  
[Algorithms library](../algorithm.html "cpp/algorithm")  
[Strings library](../string.html "cpp/string")  
[Text processing library](../text.html "cpp/text")  
[Numerics library](../numeric.html "cpp/numeric")  
[Date and time library](../chrono.html "cpp/chrono")  
[Input/output library](../io.html "cpp/io")  
[Filesystem library](../filesystem.html "cpp/filesystem") (C++17)  
[Concurrency support library](../atomic.html "cpp/thread") (C++11)  
[Execution control library](../experimental/execution.html "cpp/execution") (C++26)  
[Technical specifications](../experimental.html "cpp/experimental")  
[Symbols index](../symbol_index.html "cpp/symbol index")  
[External libraries](../links/libs.html "cpp/links/libs")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/navbar_content&action=edit)

[Text processing library](../text.html "cpp/text")

[Localization library](../locale.html "cpp/locale")  
---  
[Regular expressions library](../regex.html "cpp/regex") (C++11)  
[Formatting library](format.html "cpp/utility/format") (C++20)  
[Null-terminated sequence utilities](../text.html#Null-terminated_sequence_utilities "cpp/text")  
[Byte strings](../string/byte.html "cpp/string/byte")  
[Multibyte strings](../string/multibyte.html "cpp/string/multibyte")  
[Wide strings](../string/wide.html "cpp/string/wide")  
[Primitive numeric conversions](../text.html#Primitive_numeric_conversions "cpp/text")  
| [to_chars](to_chars.html "cpp/utility/to chars")(C++17)  
---  
[to_chars_result](to_chars_result.html "cpp/utility/to chars result")(C++17)  
[from_chars](from_chars.html "cpp/utility/from chars")(C++17)  
**from_chars_result**(C++17)  
[chars_format](chars_format.html "cpp/utility/chars format")(C++17)  
  
[Text encoding identifications](../text.html#Text_encoding_identifications "cpp/text")  
| [text_encoding](../locale/text_encoding.html "cpp/text/text encoding")(C++26)  
---  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/text/navbar_content&action=edit)

Defined in header `[<charconv>](../header/charconv.html "cpp/header/charconv")` |  |   
---|---|---  
struct from_chars_result; |  |  (since C++17)  
| |   
  
`std::from_chars_result` is the return type of [`std::from_chars`](from_chars.html "cpp/utility/from chars"). It has no base classes, and only has the following members. 

## Contents

  * [1 Data members](from_chars_result.html#Data_members)
  * [2 Member and friend functions](from_chars_result.html#Member_and_friend_functions)
  * [3 operator==(std::from_chars_result)](from_chars_result.html#operator.3D.3D.28std::from_chars_result.29)
  * [4 operator bool](from_chars_result.html#operator_bool)
    * [4.1 Notes](from_chars_result.html#Notes)
    * [4.2 Example](from_chars_result.html#Example)
    * [4.3 See also](from_chars_result.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/from_chars_result&action=edit&section=1 "Edit section: Data members")] Data members

Member name  |  Definition   
---|---  
ptr |  a pointer of type const char*   
(public member object)  
ec |  an error code of type [std::errc](../error/errc.html "cpp/error/errc")   
(public member object)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/from_chars_result&action=edit&section=2 "Edit section: Member and friend functions")] Member and friend functions

##  operator==(std::from_chars_result)

friend bool operator==( const from_chars_result&,  
const from_chars_result& ) = default; |  |  (since C++20)  
---|---|---  
| |   
  
Compares the two arguments using [default comparisons](../language/default_comparisons.html "cpp/language/default comparisons") (which uses operator== to compare `ptr` and `ec` respectively). 

This function is not visible to ordinary [unqualified](../language/unqualified_lookup.html "cpp/language/unqualified lookup") or [qualified lookup](../language/qualified_lookup.html "cpp/language/qualified lookup"), and can only be found by [argument-dependent lookup](../language/adl.html "cpp/language/adl") when std::from_chars_result is an associated class of the arguments. 

The `!=` operator is [synthesized](../language/default_comparisons.html#Other_defaulted_comparison_operators "cpp/language/default comparisons") from `operator==`. 

##  operator bool

constexpr explicit operator bool() const noexcept; |  |  (since C++26)  
---|---|---  
| |   
  
Checks whether the conversion is successful. Returns ec == [std::errc](../error/errc.html){}. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/from_chars_result&action=edit&section=3 "Edit section: Notes")] Notes

[Feature-test](feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_to_chars`](../experimental/feature_test.html#cpp_lib_to_chars "cpp/feature test") | [`201611L`](../compiler_support/17.html#cpp_lib_to_chars_201611L "cpp/compiler support/17") | (C++17) | Elementary string conversions ([`std::to_chars`](to_chars.html "cpp/utility/to chars"), [`std::from_chars`](from_chars.html "cpp/utility/from chars"))   
[`202306L`](../compiler_support/26.html#cpp_lib_to_chars_202306L "cpp/compiler support/26") | (C++26) | Testing for success or failure of [`<charconv>`](../header/charconv.html "cpp/header/charconv") functions   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/from_chars_result&action=edit&section=4 "Edit section: Example")] Example

Run this code
    
    
    #include <cassert>
    #include <charconv>
    #include <iomanip>
    #include <iostream>
    #include <optional>
    #include <string_view>
    #include <system_error>
     
    int main()
    {
        for ([std::string_view](../string/basic_string_view.html) const str : {"1234", "15 foo", "bar", " 42", "5000000000"})
        {
            [std::cout](../io/cout.html) << "String: " << [std::quoted](../io/manip/quoted.html)(str) << ". ";
            int result{};
            auto [ptr, ec] = [std::from_chars](from_chars.html)(str.data(), str.data() + str.size(), result);
     
            if (ec == [std::errc](../error/errc.html)())
                [std::cout](../io/cout.html) << "Result: " << result << ", ptr -> " << [std::quoted](../io/manip/quoted.html)(ptr) << '\n';
            else if (ec == [std::errc::invalid_argument](../error/errc.html))
                [std::cout](../io/cout.html) << "This is not a number.\n";
            else if (ec == [std::errc::result_out_of_range](../error/errc.html))
                [std::cout](../io/cout.html) << "This number is larger than an int.\n";
        }
     
        // C++23's constexpr from_char demo / C++26's operator bool() demo:
        auto to_int = []([std::string_view](../string/basic_string_view.html) s) -> [std::optional](optional.html)<int>
        {
            int value{};
    #if __cpp_lib_to_chars >= 202306L
            if ([std::from_chars](from_chars.html)(s.data(), s.data() + s.size(), value))
    #else
            if ([std::from_chars](from_chars.html)(s.data(), s.data() + s.size(), value).ec == [std::errc](../error/errc.html){})
    #endif
                return value;
            else
                return [std::nullopt](optional/nullopt.html);
        };
     
        [assert](../error/assert.html)(to_int("42") == 42);
        [assert](../error/assert.html)(to_int("foo") == [std::nullopt](optional/nullopt.html));
    #if __cpp_lib_constexpr_charconv and __cpp_lib_optional >= 202106
        static_assert(to_int("42") == 42);
        static_assert(to_int("foo") == [std::nullopt](optional/nullopt.html));
    #endif
    }

Output: 
    
    
    String: "1234". Result: 1234, ptr -> ""
    String: "15 foo". Result: 15, ptr -> " foo"
    String: "bar". This is not a number.
    String: " 42". This is not a number.
    String: "5000000000". This number is larger than an int.

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/from_chars_result&action=edit&section=5 "Edit section: See also")] See also

[ from_chars](from_chars.html "cpp/utility/from chars")(C++17) |  converts a character sequence to an integer or floating-point value   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/utility/dsc_from_chars&action=edit)  
---|---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
