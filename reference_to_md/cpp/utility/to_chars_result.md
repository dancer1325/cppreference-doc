
  


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
**to_chars_result**(C++17)  
[from_chars](from_chars.html "cpp/utility/from chars")(C++17)  
[from_chars_result](from_chars_result.html "cpp/utility/from chars result")(C++17)  
[chars_format](chars_format.html "cpp/utility/chars format")(C++17)  
  
[Text encoding identifications](../text.html#Text_encoding_identifications "cpp/text")  
| [text_encoding](../locale/text_encoding.html "cpp/text/text encoding")(C++26)  
---  
  


Defined in header `[<charconv>](../header/charconv.html "cpp/header/charconv")` |  |   
---|---|---  
struct to_chars_result; |  |  (since C++17)  
| |   
  
`std::to_chars_result` is the return type of [`std::to_chars`](to_chars.html "cpp/utility/to chars"). It has no base classes, and only has the following members. 

## Contents

  * [1 Data members](to_chars_result.html#Data_members)
  * [2 Member and friend functions](to_chars_result.html#Member_and_friend_functions)
  * [3 operator==(std::to_chars_result)](to_chars_result.html#operator.3D.3D.28std::to_chars_result.29)
  * [4 operator bool](to_chars_result.html#operator_bool)
    * [4.1 Notes](to_chars_result.html#Notes)
    * [4.2 Example](to_chars_result.html#Example)
    * [4.3 See also](to_chars_result.html#See_also)

  
---  
  
### Data members

Member name  |  Definition   
---|---  
ptr |  a pointer of type char*   
(public member object)  
ec |  an error code of type [std::errc](../error/errc.html "cpp/error/errc")   
(public member object)  
  
### Member and friend functions

##  operator==(std::to_chars_result)

friend bool operator==( const to_chars_result&,  
const to_chars_result& ) = default; |  |  (since C++20)  
---|---|---  
| |   
  
Compares the two arguments using [default comparisons](../language/default_comparisons.html "cpp/language/default comparisons") (which uses operator== to compare `ptr` and `ec` respectively). 

This function is not visible to ordinary [unqualified](../language/unqualified_lookup.html "cpp/language/unqualified lookup") or [qualified lookup](../language/qualified_lookup.html "cpp/language/qualified lookup"), and can only be found by [argument-dependent lookup](../language/adl.html "cpp/language/adl") when std::to_chars_result is an associated class of the arguments. 

The `!=` operator is [synthesized](../language/default_comparisons.html#Other_defaulted_comparison_operators "cpp/language/default comparisons") from `operator==`. 

##  operator bool

constexpr explicit operator bool() const noexcept; |  |  (since C++26)  
---|---|---  
| |   
  
Checks whether the conversion is successful. Returns ec == [std::errc](../error/errc.html){}. 

### Notes

[Feature-test](feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_to_chars`](../experimental/feature_test.html#cpp_lib_to_chars "cpp/feature test") | [`201611L`](../compiler_support/17.html#cpp_lib_to_chars_201611L "cpp/compiler support/17") | (C++17) | Elementary string conversions ([`std::to_chars`](to_chars.html "cpp/utility/to chars"), [`std::from_chars`](from_chars.html "cpp/utility/from chars"))   
[`202306L`](../compiler_support/26.html#cpp_lib_to_chars_202306L "cpp/compiler support/26") | (C++26) | Testing for success or failure of [`<charconv>`](../header/charconv.html "cpp/header/charconv") functions   
  
### Example

Run this code
    
    
    #include <array>
    #include <charconv>
    #include <iostream>
    #include <string_view>
    #include <system_error>
     
    void show_to_chars(auto... format_args)
    {
        [std::array](../container/array.html)<char, 10> str;
     
    #if __cpp_lib_to_chars >= 202306L and __cpp_structured_bindings >= 202406L
        // use C++26 structured bindings declaration as condition (P0963)
        // and C++26 to_chars_result::operator bool() for error checking (P2497)
        if (auto [ptr, ec] =
                [std::to_chars](to_chars.html)(str.data(), str.data() + str.size(), format_args...))
            [std::cout](../io/cout.html) << [std::string_view](../string/basic_string_view.html)(str.data(), ptr) << '\n';
        else
            [std::cout](../io/cout.html) << [std::make_error_code](../error/errc/make_error_code.html)(ec).message() << '\n';
    #elif __cpp_lib_to_chars >= 202306L
        // use C++26 to_chars_result::operator bool() for error checking (P2497)
        if (auto result =
                [std::to_chars](to_chars.html)(str.data(), str.data() + str.size(), format_args...))
            [std::cout](../io/cout.html) << [std::string_view](../string/basic_string_view.html)(str.data(), result.ptr) << '\n';
        else
            [std::cout](../io/cout.html) << [std::make_error_code](../error/errc/make_error_code.html)(result.ec).message() << '\n';
    #else
        // fallback to C++17 if-with-initializer and structured bindings
        if (auto [ptr, ec] =
                [std::to_chars](to_chars.html)(str.data(), str.data() + str.size(), format_args...);
            ec == [std::errc](../error/errc.html)())
            [std::cout](../io/cout.html) << [std::string_view](../string/basic_string_view.html)(str.data(), ptr - str.data()) << '\n';
        else
            [std::cout](../io/cout.html) << [std::make_error_code](../error/errc/make_error_code.html)(ec).message() << '\n';
    #endif
    }
     
    int main()
    {
        show_to_chars(42);
        show_to_chars(+3.14159F);
        show_to_chars(-3.14159, std::chars_format::fixed);
        show_to_chars(-3.14159, std::chars_format::scientific, 3);
        show_to_chars(3.1415926535, std::chars_format::fixed, 10);
    }

Possible output: 
    
    
    42
    3.14159
    -3.14159
    -3.142e+00
    Value too large for defined data type

### See also

[ to_chars](to_chars.html "cpp/utility/to chars")(C++17) |  converts an integer or floating-point value to a character sequence   
(function)   
---|---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
