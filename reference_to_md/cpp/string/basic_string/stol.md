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
  


[Strings library](../../string.html "cpp/string")

Classes  
---  
[basic_string](../basic_string.html "cpp/string/basic string")  
[basic_string_view](../basic_string_view.html "cpp/string/basic string view")(C++17)  
[char_traits](../char_traits.html "cpp/string/char traits")  
  


[`std::basic_string`](../basic_string.html "cpp/string/basic string")

| [Member functions](../basic_string.html#Member_functions "cpp/string/basic string")  
---  
[basic_string::basic_string](basic_string.html "cpp/string/basic string/basic string")  
[basic_string::~basic_string](~basic_string.html "cpp/string/basic string/~basic string")  
[basic_string::operator=](operator=.html "cpp/string/basic string/operator=")  
[basic_string::assign](assign.html "cpp/string/basic string/assign")  
[basic_string::assign_range](assign_range.html "cpp/string/basic string/assign range")(C++23)` `  
[basic_string::get_allocator](get_allocator.html "cpp/string/basic string/get allocator")  
[Element access](../basic_string.html#Element_access "cpp/string/basic string")  
[basic_string::at](at.html "cpp/string/basic string/at")  
[basic_string::operator[]](operator_at.html "cpp/string/basic string/operator at")  
[basic_string::front](front.html "cpp/string/basic string/front")(DR*)  
[basic_string::back](back.html "cpp/string/basic string/back")(DR*)  
[basic_string::data](data.html "cpp/string/basic string/data")  
[basic_string::c_str](c_str.html "cpp/string/basic string/c str")  
[basic_string::operator  
basic_string_view](operator_basic_string_view.html "cpp/string/basic string/operator basic string view")(C++17)  
[Iterators](../basic_string.html#Iterators "cpp/string/basic string")  
[basic_string::beginbasic_string::cbegin](begin.html "cpp/string/basic string/begin")(C++11)  
[basic_string::endbasic_string::cend](end.html "cpp/string/basic string/end")(C++11)  
[basic_string::rbeginbasic_string::crbegin](rbegin.html "cpp/string/basic string/rbegin")(C++11)  
[basic_string::rendbasic_string::crend](rend.html "cpp/string/basic string/rend")(C++11)  
[Search](../basic_string.html#Search "cpp/string/basic string")  
[basic_string::find](find.html "cpp/string/basic string/find")  
[basic_string::rfind](rfind.html "cpp/string/basic string/rfind")  
[basic_string::find_first_of](find_first_of.html "cpp/string/basic string/find first of")  
[basic_string::find_first_not_of](find_first_not_of.html "cpp/string/basic string/find first not of")  
[basic_string::find_last_of](find_last_of.html "cpp/string/basic string/find last of")  
[basic_string::find_last_not_of](find_last_not_of.html "cpp/string/basic string/find last not of")  
  
| [Modifiers](../basic_string.html#Modifiers "cpp/string/basic string")  
---  
[basic_string::clear](clear.html "cpp/string/basic string/clear")  
[basic_string::insert](insert.html "cpp/string/basic string/insert")  
[basic_string::insert_range](insert_range.html "cpp/string/basic string/insert range")(C++23)  
[basic_string::erase](erase.html "cpp/string/basic string/erase")  
[basic_string::push_back](push_back.html "cpp/string/basic string/push back")  
[basic_string::pop_back](pop_back.html "cpp/string/basic string/pop back")(DR*)  
[basic_string::append](append.html "cpp/string/basic string/append")  
[basic_string::append_range](append_range.html "cpp/string/basic string/append range")(C++23)  
[basic_string::operator+=](operator+=.html "cpp/string/basic string/operator+=")  
[basic_string::replace](replace.html "cpp/string/basic string/replace")  
[basic_string::replace_with_range](replace_with_range.html "cpp/string/basic string/replace with range")(C++23)  
[basic_string::copy](copy.html "cpp/string/basic string/copy")  
[basic_string::resize](resize.html "cpp/string/basic string/resize")  
[basic_string::resize_and_overwrite](resize_and_overwrite.html "cpp/string/basic string/resize and overwrite")(C++23)` `  
[basic_string::swap](swap.html "cpp/string/basic string/swap")  
[Capacity](../basic_string.html#Capacity "cpp/string/basic string")  
[basic_string::empty](empty.html "cpp/string/basic string/empty")  
[basic_string::sizebasic_string::length](size.html "cpp/string/basic string/size")  
[basic_string::max_size](max_size.html "cpp/string/basic string/max size")  
[basic_string::reserve](reserve.html "cpp/string/basic string/reserve")  
[basic_string::capacity](capacity.html "cpp/string/basic string/capacity")  
[basic_string::shrink_to_fit](shrink_to_fit.html "cpp/string/basic string/shrink to fit")(DR*)  
[Operations](../basic_string.html#Operations "cpp/string/basic string")  
[basic_string::compare](compare.html "cpp/string/basic string/compare")  
[basic_string::starts_with](starts_with.html "cpp/string/basic string/starts with")(C++20)  
[basic_string::ends_with](ends_with.html "cpp/string/basic string/ends with")(C++20)  
[basic_string::contains](contains.html "cpp/string/basic string/contains")(C++23)  
[basic_string::substr](substr.html "cpp/string/basic string/substr")  
  
| [Constants](../basic_string.html#Constants "cpp/string/basic string")  
---  
[basic_string::npos](npos.html "cpp/string/basic string/npos")  
[Non-member functions](../basic_string.html#Non-member_functions "cpp/string/basic string")  
[operator+](https://en.cppreference.com/w/cpp/string/basic_string/operator%2B "cpp/string/basic string/operator+")  
[swap(std::basic_string)](swap2.html "cpp/string/basic string/swap2")  
[erase(std::basic_string)erase_if(std::basic_string)](erase2.html "cpp/string/basic string/erase2")(C++20)(C++20)  
[I/O](../basic_string.html#Input.2Foutput "cpp/string/basic string")  
[operator<<operator>>](operator_ltltgtgt.html "cpp/string/basic string/operator ltltgtgt")  
[getline](getline.html "cpp/string/basic string/getline")  
[Comparison](../basic_string.html#Non-member_functions "cpp/string/basic string")  
[operator==operator!=operator<operator>operator<=operator>=operator<=>](operator_cmp.html "cpp/string/basic string/operator cmp")(until C++20)(until C++20)(until C++20)(until C++20)(until C++20)(C++20)  
[Numeric conversions](../basic_string.html#Numeric_conversions "cpp/string/basic string")  
| **stoi stolstoll**(C++11)(C++11)(C++11)  
---  
[stoulstoull](stoul.html "cpp/string/basic string/stoul")(C++11)(C++11)` `  
  
| [stofstodstold](stof.html "cpp/string/basic string/stof")(C++11)(C++11)(C++11)  
---  
[to_string](to_string.html "cpp/string/basic string/to string")(C++11)  
[to_wstring](to_wstring.html "cpp/string/basic string/to wstring")(C++11)  
  
[Literals](../basic_string.html#Literals "cpp/string/basic string")  
[operator""s](operator""s.html "cpp/string/basic string/operator""s")(C++14)  
[Helper classes](../basic_string.html#Helper_classes "cpp/string/basic string")  
[hash<std::basic_string>](hash.html "cpp/string/basic string/hash")(C++11)  
[Deduction guides](deduction_guides.html "cpp/string/basic string/deduction guides") (C++17)  
  


Defined in header `[<string>](../../header/string.html "cpp/header/string")` |  |   
---|---|---  
int stoi ( const [std::string](../basic_string.html)& str,  
[std::size_t](../../types/size_t.html)* pos = nullptr, int base = 10 ); |  (1)  |  (since C++11)  
int stoi ( const [std::wstring](../basic_string.html)& str,  
[std::size_t](../../types/size_t.html)* pos = nullptr, int base = 10 ); |  (2)  |  (since C++11)  
long stol ( const [std::string](../basic_string.html)& str,  
[std::size_t](../../types/size_t.html)* pos = nullptr, int base = 10 ); |  (3)  |  (since C++11)  
long stol ( const [std::wstring](../basic_string.html)& str,  
[std::size_t](../../types/size_t.html)* pos = nullptr, int base = 10 ); |  (4)  |  (since C++11)  
long long stoll( const [std::string](../basic_string.html)& str,  
[std::size_t](../../types/size_t.html)* pos = nullptr, int base = 10 ); |  (5)  |  (since C++11)  
long long stoll( const [std::wstring](../basic_string.html)& str,  
[std::size_t](../../types/size_t.html)* pos = nullptr, int base = 10 ); |  (6)  |  (since C++11)  
| |   
  
Interprets a signed integer value in the string str. 

Let ptr be an internal (to the conversion functions) pointer of type char* (1,3,5) or wchar_t* (2,4,6), accordingly. 

1) Calls [std::strtol](../byte/strtol.html)(str.c_str(), &ptr, base).

2) Calls [std::wcstol](../wide/wcstol.html)(str.c_str(), &ptr, base).

3) Calls [std::strtol](../byte/strtol.html)(str.c_str(), &ptr, base).

4) Calls [std::wcstol](../wide/wcstol.html)(str.c_str(), &ptr, base).

5) Calls [std::strtoll](../byte/strtol.html)(str.c_str(), &ptr, base).

6) Calls [std::wcstoll](../wide/wcstol.html)(str.c_str(), &ptr, base).

Discards any whitespace characters (as identified by calling [`std::isspace`](../byte/isspace.html "cpp/string/byte/isspace")) until the first non-whitespace character is found, then takes as many characters as possible to form a valid _base-n_ (where n=`base`) integer number representation and converts them to an integer value. The valid integer value consists of the following parts: 

  * (optional) plus or minus sign 
  * (optional) prefix (`**0**`) indicating octal base (applies only when the base is 8 or ​0​) 
  * (optional) prefix (`**0x**` or `**0X**`) indicating hexadecimal base (applies only when the base is 16 or ​0​) 
  * a sequence of digits 



The set of valid values for base is `{0, 2, 3, ..., 36}`. The set of valid digits for base-`2` integers is `{0, 1}`, for base-`3` integers is `{0, 1, 2}`, and so on. For bases larger than `10`, valid digits include alphabetic characters, starting from `Aa` for base-`11` integer, to `Zz` for base-`36` integer. The case of the characters is ignored. 

Additional numeric formats may be accepted by the currently installed C [locale](../../locale/setlocale.html "cpp/locale/setlocale"). 

If the value of `base` is ​0​, the numeric base is auto-detected: if the prefix is `**0**`, the base is octal, if the prefix is `**0x**` or `**0X**`, the base is hexadecimal, otherwise the base is decimal. 

If the minus sign was part of the input sequence, the numeric value calculated from the sequence of digits is negated as if by [unary minus](../../language/operator_arithmetic.html#Unary_arithmetic_operators "cpp/language/operator arithmetic") in the result type. 

If pos is not a null pointer, then ptr will receive an address of the first unconverted character in str.c_str(), and the index of that character will be calculated and stored in *pos, giving the number of characters that were processed by the conversion. 

## Contents

  * [1 Parameters](stol.html#Parameters)
  * [2 Return value](stol.html#Return_value)
  * [3 Exceptions](stol.html#Exceptions)
  * [4 Example](stol.html#Example)
  * [5 Defect reports](stol.html#Defect_reports)
  * [6 See also](stol.html#See_also)

  
---  
  
### Parameters

str  |  \-  |  the string to convert   
---|---|---  
pos  |  \-  |  address of an integer to store the number of characters processed   
base  |  \-  |  the number base   
  
### Return value

Integer value corresponding to the content of str. 

### Exceptions

  * [std::invalid_argument](../../error/invalid_argument.html "cpp/error/invalid argument") if no conversion could be performed. 
  * [std::out_of_range](../../error/out_of_range.html "cpp/error/out of range") if the converted value would fall out of the range of the result type or if the underlying function ([std::strtol](../byte/strtol.html "cpp/string/byte/strtol") or [std::strtoll](../byte/strtol.html "cpp/string/byte/strtol")) sets [errno](../../error/errno.html "cpp/error/errno") to [ERANGE](../../error/errno_macros.html "cpp/error/errno macros"). 



### Example

Run this code
    
    
    #include <iomanip>
    #include <iostream>
    #include <stdexcept>
    #include <string>
    #include <utility>
     
    int main()
    {
        const auto data =
        {
            "45",
            "+45",
            " -45",
            "3.14159",
            "31337 with words",
            "words and 2",
            "12345678901",
        };
     
        for (const [std::string](../basic_string.html) s : data)
        {
            [std::size_t](../../types/size_t.html) pos{};
            try
            {
                [std::cout](../../io/cout.html) << "std::stoi(" << [std::quoted](../../io/manip/quoted.html)(s) << "): ";
                const int i{std::stoi(s, &pos)};
                [std::cout](../../io/cout.html) << i << "; pos: " << pos << '\n';
            }
            catch ([std::invalid_argument](../../error/invalid_argument.html) const& ex)
            {
                [std::cout](../../io/cout.html) << "std::invalid_argument::what(): " << ex.what() << '\n';
            }
            catch ([std::out_of_range](../../error/out_of_range.html) const& ex)
            {
                [std::cout](../../io/cout.html) << "std::out_of_range::what(): " << ex.what() << '\n';
                const long long ll{std::stoll(s, &pos)};
                [std::cout](../../io/cout.html) << "std::stoll(" << [std::quoted](../../io/manip/quoted.html)(s) << "): " << ll
                          << "; pos: " << pos << '\n';
            }
        }
     
        [std::cout](../../io/cout.html) << "\nCalling with different radixes:\n";
        for (const auto& [s, base] : {[std::pair](../../utility/pair.html)<const char*, int>
            {"11",  2}, {"22",  3}, {"33",  4}, {"77",  8},
            {"99", 10}, {"FF", 16}, {"jJ", 20}, {"Zz", 36}})
        {
            const int i{std::stoi(s, nullptr, base)};
            [std::cout](../../io/cout.html) << "std::stoi(" << [std::quoted](../../io/manip/quoted.html)(s)
                      << ", nullptr, " << base << "): " << i << '\n';
        }
    }

Possible output: 
    
    
    std::stoi("45"): 45; pos: 2
    std::stoi("+45"): 45; pos: 3
    std::stoi(" -45"): -45; pos: 4
    std::stoi("3.14159"): 3; pos: 1
    std::stoi("31337 with words"): 31337; pos: 5
    std::stoi("words and 2"): std::invalid_argument::what(): stoi
    std::stoi("12345678901"): std::out_of_range::what(): stoi
    std::stoll("12345678901"): 12345678901; pos: 11
     
    Calling with different radixes:
    std::stoi("11", nullptr, 2): 3
    std::stoi("22", nullptr, 3): 8
    std::stoi("33", nullptr, 4): 15
    std::stoi("77", nullptr, 8): 63
    std::stoi("99", nullptr, 10): 99
    std::stoi("FF", nullptr, 16): 255
    std::stoi("jJ", nullptr, 20): 399
    std::stoi("Zz", nullptr, 36): 1295

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2009](https://cplusplus.github.io/LWG/issue2009) | C++11  | [std::out_of_range](../../error/out_of_range.html "cpp/error/out of range") would not be thrown if  
[std::strtol](../byte/strtol.html "cpp/string/byte/strtol") or [std::strtoll](../byte/strtol.html "cpp/string/byte/strtol") sets [errno](../../error/errno.html "cpp/error/errno") to [ERANGE](../../error/errno_macros.html "cpp/error/errno macros") | will throw   
  
### See also

[ stoulstoull](stoul.html "cpp/string/basic string/stoul")(C++11)(C++11) |  converts a string to an unsigned integer   
(function)   
---|---  
[ stofstodstold](stof.html "cpp/string/basic string/stof")(C++11)(C++11)(C++11) |  converts a string to a floating point value   
(function)   
[ strtolstrtoll](../byte/strtol.html "cpp/string/byte/strtol")(C++11) |  converts a byte string to an integer value   
(function)   
[ strtoulstrtoull](../byte/strtoul.html "cpp/string/byte/strtoul")(C++11) |  converts a byte string to an unsigned integer value   
(function)   
[ strtoimaxstrtoumax](../byte/strtoimax.html "cpp/string/byte/strtoimax")(C++11)(C++11) |  converts a byte string to [std::intmax_t](../../types/integer.html "cpp/types/integer") or [std::uintmax_t](../../types/integer.html "cpp/types/integer")   
(function)   
[ from_chars](../../utility/from_chars.html "cpp/utility/from chars")(C++17) |  converts a character sequence to an integer or floating-point value   
(function)   
[ atoiatolatoll](../byte/atoi.html "cpp/string/byte/atoi")(C++11) |  converts a byte string to an integer value   
(function)   
[ to_string](to_string.html "cpp/string/basic string/to string")(C++11) |  converts an integral or floating-point value to `string`   
(function)   
[ to_wstring](to_wstring.html "cpp/string/basic string/to wstring")(C++11) |  converts an integral or floating-point value to `wstring`   
(function) 
