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
  


[Strings library](../string.html "cpp/string")

Classes  
---  
[basic_string](basic_string.html "cpp/string/basic string")  
**basic_string_view**(C++17)  
[char_traits](char_traits.html "cpp/string/char traits")  
  


**`std::basic_string_view`**

| [Member functions](basic_string_view.html#Member_functions "cpp/string/basic string view")  
---  
[basic_string_view::basic_string_view](basic_string_view/basic_string_view.html "cpp/string/basic string view/basic string view")` `  
[basic_string_view::operator=](basic_string_view/operator=.html "cpp/string/basic string view/operator=")  
[Iterators](basic_string_view.html#Iterators "cpp/string/basic string view")  
[basic_string_view::beginbasic_string_view::cbegin](basic_string_view/begin.html "cpp/string/basic string view/begin")  
[basic_string_view::endbasic_string_view::cend](basic_string_view/end.html "cpp/string/basic string view/end")  
[basic_string_view::rbeginbasic_string_view::crbegin](basic_string_view/rbegin.html "cpp/string/basic string view/rbegin")  
[basic_string_view::rendbasic_string_view::crend](basic_string_view/rend.html "cpp/string/basic string view/rend")  
[Capacity](basic_string_view.html#Capacity "cpp/string/basic string view")  
[basic_string_view::sizebasic_string_view::length](basic_string_view/size.html "cpp/string/basic string view/size")  
[basic_string_view::max_size](basic_string_view/max_size.html "cpp/string/basic string view/max size")  
[basic_string_view::empty](basic_string_view/empty.html "cpp/string/basic string view/empty")  
[Operations](basic_string_view.html#Operations "cpp/string/basic string view")  
[basic_string_view::copy](basic_string_view/copy.html "cpp/string/basic string view/copy")  
[basic_string_view::substr](basic_string_view/substr.html "cpp/string/basic string view/substr")  
[basic_string_view::compare](basic_string_view/compare.html "cpp/string/basic string view/compare")  
[basic_string_view::starts_with](basic_string_view/starts_with.html "cpp/string/basic string view/starts with")(C++20)  
[basic_string_view::ends_with](basic_string_view/ends_with.html "cpp/string/basic string view/ends with")(C++20)  
[basic_string_view::contains](basic_string_view/contains.html "cpp/string/basic string view/contains")(C++23)  
[basic_string_view::find](basic_string_view/find.html "cpp/string/basic string view/find")  
[basic_string_view::rfind](basic_string_view/rfind.html "cpp/string/basic string view/rfind")  
[basic_string_view::find_first_of](basic_string_view/find_first_of.html "cpp/string/basic string view/find first of")  
[basic_string_view::find_last_of](basic_string_view/find_last_of.html "cpp/string/basic string view/find last of")  
[basic_string_view::find_first_not_of](basic_string_view/find_first_not_of.html "cpp/string/basic string view/find first not of")  
[basic_string_view::find_last_not_of](basic_string_view/find_last_not_of.html "cpp/string/basic string view/find last not of")  
  
| [Element access](basic_string_view.html#Element_access "cpp/string/basic string view")  
---  
[basic_string_view::at](basic_string_view/at.html "cpp/string/basic string view/at")  
[basic_string_view::operator[]](basic_string_view/operator_at.html "cpp/string/basic string view/operator at")  
[basic_string_view::front](basic_string_view/front.html "cpp/string/basic string view/front")  
[basic_string_view::back](basic_string_view/back.html "cpp/string/basic string view/back")  
[basic_string_view::data](basic_string_view/data.html "cpp/string/basic string view/data")  
[Modifiers](basic_string_view.html#Modifiers "cpp/string/basic string view")  
[basic_string_view::remove_prefix](basic_string_view/remove_prefix.html "cpp/string/basic string view/remove prefix")  
[basic_string_view::remove_suffix](basic_string_view/remove_suffix.html "cpp/string/basic string view/remove suffix")  
[basic_string_view::swap](basic_string_view/swap.html "cpp/string/basic string view/swap")  
Constants  
[basic_string_view::npos](basic_string_view/npos.html "cpp/string/basic string view/npos")  
[Non-member functions](basic_string_view.html#Non-member_functions "cpp/string/basic string view")  
[operator==operator!=operator<operator>operator<=operator>=operator<=>](basic_string_view/operator_cmp.html "cpp/string/basic string view/operator cmp")(until C++20)(until C++20)(until C++20)(until C++20)(until C++20)(C++20)  
[operator<<](basic_string_view/operator_ltlt.html "cpp/string/basic string view/operator ltlt")  
[operator""sv](basic_string_view/operator""sv.html "cpp/string/basic string view/operator""sv")  
[Helper classes](basic_string_view.html#Helper_classes "cpp/string/basic string view")  
[hash<std::string_view>hash<std::wstring_view>hash<std::u8string_view>hash<std::u16string_view>hash<std::u32string_view>](basic_string_view/hash.html "cpp/string/basic string view/hash")(C++20)  
[Deduction guides](basic_string_view/deduction_guides.html "cpp/string/basic string view/deduction guides") (C++20)  
  


Defined in header `[<string_view>](../header/string_view.html "cpp/header/string view")` |  |   
---|---|---  
template<  
class CharT,  
class Traits = [std::char_traits](char_traits.html)<CharT>  
> class basic_string_view; |  |  (since C++17)  
| |   
  
The class template `basic_string_view` describes an object that can refer to a constant contiguous sequence of `CharT` with the first element of the sequence at position zero. 

For a `basic_string_view` str, pointers, iterators, and references to elements of str are invalidated when an operation invalidates a pointer in the range `[`str.data()`, `str.data() + str.size()`)`. 

Every specialization of `std::basic_string_view` is a [TriviallyCopyable](../named_req/TriviallyCopyable.html "cpp/named req/TriviallyCopyable") type.  | (since C++23)  
---|---  
  
Several typedefs for common character types are provided: 

Defined in header `[<string_view>](../header/string_view.html "cpp/header/string view")`  
---  
Type  |  Definition   
**std::string_view** (C++17) |  std::basic_string_view<char>  
**std::wstring_view** (C++17) |  std::basic_string_view<wchar_t>  
**std::u8string_view** (C++20) |  std::basic_string_view<char8_t>  
**std::u16string_view** (C++17) |  std::basic_string_view<char16_t>  
**std::u32string_view** (C++17) |  std::basic_string_view<char32_t>  
  
## Contents

  * [1 Template parameters](basic_string_view.html#Template_parameters)
  * [2 Nested types](basic_string_view.html#Nested_types)
  * [3 Data members](basic_string_view.html#Data_members)
  * [4 Member functions](basic_string_view.html#Member_functions)
    * [4.1 Constructors and assignment](basic_string_view.html#Constructors_and_assignment)
    * [4.2 Iterators](basic_string_view.html#Iterators)
    * [4.3 Element access](basic_string_view.html#Element_access)
    * [4.4 Capacity](basic_string_view.html#Capacity)
    * [4.5 Modifiers](basic_string_view.html#Modifiers)
    * [4.6 Operations](basic_string_view.html#Operations)
  * [5 Constants](basic_string_view.html#Constants)
  * [6 Non-member functions](basic_string_view.html#Non-member_functions)
    * [6.1 Input/output](basic_string_view.html#Input.2Foutput)
  * [7 Literals](basic_string_view.html#Literals)
  * [8 Helper classes](basic_string_view.html#Helper_classes)
  * [9 Helper templates](basic_string_view.html#Helper_templates)
  * [10 Deduction guides](basic_string_view.html#Deduction_guides)
  * [11 Notes](basic_string_view.html#Notes)
  * [12 Example](basic_string_view.html#Example)
  * [13 Defect reports](basic_string_view.html#Defect_reports)
  * [14 See also](basic_string_view.html#See_also)

  
---  
  
### Template parameters

CharT  |  \-  |  character type   
---|---|---  
Traits  |  \-  |  [CharTraits](../named_req/CharTraits.html "cpp/named req/CharTraits") class specifying the operations on the character type. Like for [std::basic_string](basic_string.html "cpp/string/basic string"), `Traits::char_type` must name the same type as `CharT` or the program is ill-formed.   
  
### Nested types

Type  |  Definition   
---|---  
`traits_type` |  `Traits`  
`value_type` |  `CharT`  
`pointer` |  CharT*  
`const_pointer` |  const CharT*  
`reference` |  CharT&  
`const_reference` |  const CharT&  
`const_iterator` |  implementation-defined constant [LegacyRandomAccessIterator](../named_req/RandomAccessIterator.html "cpp/named req/RandomAccessIterator"),  
| and [LegacyContiguousIterator](../named_req/ContiguousIterator.html "cpp/named req/ContiguousIterator") | (until C++20)  
---|---  
[ConstexprIterator](../named_req/ConstexprIterator.html "cpp/named req/ConstexprIterator"), and [`contiguous_iterator`](../iterator/contiguous_iterator.html "cpp/iterator/contiguous iterator") | (since C++20)  
  
whose `value_type` is `CharT`  
  
`iterator` |  `const_iterator`  
`const_reverse_iterator` |  [std::reverse_iterator](../iterator/reverse_iterator.html)<const_iterator>  
`reverse_iterator` |  `const_reverse_iterator`  
`size_type` |  [std::size_t](../types/size_t.html "cpp/types/size t")  
`difference_type` |  [std::ptrdiff_t](../types/ptrdiff_t.html "cpp/types/ptrdiff t")  
  
Note: `iterator` and `const_iterator` are the same type because string views are views into constant character sequences. 

All requirements on the iterator types of a [Container](../named_req/Container.html "cpp/named req/Container") applies to the `iterator` and `const_iterator` types of `basic_string_view` as well. 

### Data members

Member  |  Description   
---|---  
`const_pointer` `_data__` |  a pointer to the underlying sequence  
(exposition-only member object*)  
`size_type` `_size__` |  the number of characters  
(exposition-only member object*)  
  
### Member functions

#####  Constructors and assignment   
  
---  
[ (constructor)](basic_string_view/basic_string_view.html "cpp/string/basic string view/basic string view") |  constructs a `basic_string_view`   
(public member function)   
[ operator=](basic_string_view/operator=.html "cpp/string/basic string view/operator=") |  assigns a view   
(public member function)   
  
#####  Iterators   
  
[ begincbegin](basic_string_view/begin.html "cpp/string/basic string view/begin") |  returns an iterator to the beginning   
(public member function)   
[ endcend](basic_string_view/end.html "cpp/string/basic string view/end") |  returns an iterator to the end   
(public member function)   
[ rbegincrbegin](basic_string_view/rbegin.html "cpp/string/basic string view/rbegin") |  returns a reverse iterator to the beginning   
(public member function)   
[ rendcrend](basic_string_view/rend.html "cpp/string/basic string view/rend") |  returns a reverse iterator to the end   
(public member function)   
  
#####  Element access   
  
[ operator[]](basic_string_view/operator_at.html "cpp/string/basic string view/operator at") |  accesses the specified character   
(public member function)   
[ at](basic_string_view/at.html "cpp/string/basic string view/at") |  accesses the specified character with bounds checking   
(public member function)   
[ front](basic_string_view/front.html "cpp/string/basic string view/front") |  accesses the first character   
(public member function)   
[ back](basic_string_view/back.html "cpp/string/basic string view/back") |  accesses the last character   
(public member function)   
[ data](basic_string_view/data.html "cpp/string/basic string view/data") |  returns a pointer to the first character of a view   
(public member function)   
  
#####  Capacity   
  
[ sizelength](basic_string_view/size.html "cpp/string/basic string view/size") |  returns the number of characters   
(public member function)   
[ max_size](basic_string_view/max_size.html "cpp/string/basic string view/max size") |  returns the maximum number of characters   
(public member function)   
[ empty](basic_string_view/empty.html "cpp/string/basic string view/empty") |  checks whether the view is empty   
(public member function)   
  
#####  Modifiers   
  
[ remove_prefix](basic_string_view/remove_prefix.html "cpp/string/basic string view/remove prefix") |  shrinks the view by moving its start forward   
(public member function)   
[ remove_suffix](basic_string_view/remove_suffix.html "cpp/string/basic string view/remove suffix") |  shrinks the view by moving its end backward   
(public member function)   
[ swap](basic_string_view/swap.html "cpp/string/basic string view/swap") |  swaps the contents   
(public member function)   
  
#####  Operations   
  
[ copy](basic_string_view/copy.html "cpp/string/basic string view/copy") |  copies characters   
(public member function)   
[ substr](basic_string_view/substr.html "cpp/string/basic string view/substr") |  returns a substring   
(public member function)   
[ compare](basic_string_view/compare.html "cpp/string/basic string view/compare") |  compares two views   
(public member function)   
[ starts_with](basic_string_view/starts_with.html "cpp/string/basic string view/starts with")(C++20) |  checks if the string view starts with the given prefix   
(public member function)   
[ ends_with](basic_string_view/ends_with.html "cpp/string/basic string view/ends with")(C++20) |  checks if the string view ends with the given suffix   
(public member function)   
[ contains](basic_string_view/contains.html "cpp/string/basic string view/contains")(C++23) |  checks if the string view contains the given substring or character   
(public member function)   
[ find](basic_string_view/find.html "cpp/string/basic string view/find") |  find characters in the view   
(public member function)   
[ rfind](basic_string_view/rfind.html "cpp/string/basic string view/rfind") |  find the last occurrence of a substring   
(public member function)   
[ find_first_of](basic_string_view/find_first_of.html "cpp/string/basic string view/find first of") |  find first occurrence of characters   
(public member function)   
[ find_last_of](basic_string_view/find_last_of.html "cpp/string/basic string view/find last of") |  find last occurrence of characters   
(public member function)   
[ find_first_not_of](basic_string_view/find_first_not_of.html "cpp/string/basic string view/find first not of") |  find first absence of characters   
(public member function)   
[ find_last_not_of](basic_string_view/find_last_not_of.html "cpp/string/basic string view/find last not of") |  find last absence of characters   
(public member function)   
  
###  Constants  
  
[ npos](basic_string_view/npos.html "cpp/string/basic string view/npos")[static] |  special value. The exact meaning depends on the context   
(public static member constant)   
  
### Non-member functions

[ operator==operator!=operator<operator>operator<=operator>=operator<=>](basic_string_view/operator_cmp.html "cpp/string/basic string view/operator cmp")(C++17)(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(C++20) |  lexicographically compares two string views   
(function template)   
---|---  
  
#####  Input/output   
  
[ operator<<](basic_string_view/operator_ltlt.html "cpp/string/basic string view/operator ltlt")(C++17) |  performs stream output on string views   
(function template)   
  
### Literals

Defined in inline namespace `[std::literals::string_view_literals](../header/string_view.html#Synopsis "cpp/header/string view")`  
---  
[ operator""sv](basic_string_view/operator""sv.html "cpp/string/basic string view/operator""sv")(C++17) |  creates a string view of a character array literal   
(function)   
  
### Helper classes

[ std::hash<std::string_view>std::hash<std::wstring_view>std::hash<std::u8string_view>std::hash<std::u16string_view>std::hash<std::u32string_view>](basic_string_view/hash.html "cpp/string/basic string view/hash")(C++17)(C++17)(C++20)(C++17)(C++17) |  hash support for string views   
(class template specialization)   
---|---  
  
### Helper templates

template< class CharT, class Traits >  
inline constexpr bool  
[ranges::enable_borrowed_range](../ranges/borrowed_range.html)<std::basic_string_view<CharT, Traits>> = true; |  |  (since C++20)  
---|---|---  
| |   
  
This specialization of [`ranges::enable_borrowed_range`](../ranges/borrowed_range.html "cpp/ranges/borrowed range") makes `basic_string_view` satisfy [`borrowed_range`](../ranges/borrowed_range.html "cpp/ranges/borrowed range"). 

template< class CharT, class Traits >  
inline constexpr bool  
[ranges::enable_view](../ranges/view.html)<std::basic_string_view<CharT, Traits>> = true; |  |  (since C++20)  
---|---|---  
| |   
  
This specialization of [ranges::enable_view](../ranges/view.html "cpp/ranges/view") makes `basic_string_view` satisfy [`view`](../ranges/view.html "cpp/ranges/view"). 

###  [Deduction guides](basic_string_view/deduction_guides.html "cpp/string/basic string view/deduction guides")

| (since C++20)  
---|---  
  
### Notes

It is the programmer's responsibility to ensure that `std::string_view` does not outlive the pointed-to character array: 
    
    
    std::string_view good{"a string literal"};
        // "Good" case: `good` points to a static array.
        // String literals reside in persistent data storage.
     
    std::string_view bad{"a temporary string"s};
        // "Bad" case: `bad` holds a dangling pointer since the std::string temporary,
        // created by std::operator""s, will be destroyed at the end of the statement.

Specializations of `std::basic_string_view` are already trivially copyable types in all existing implementations, even before the formal requirement introduced in C++23. 

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_string_view`](../experimental/feature_test.html#cpp_lib_string_view "cpp/feature test") | [`201606L`](../compiler_support/17.html#cpp_lib_string_view_201606L "cpp/compiler support/17") | (C++17) | [`std::string_view`](basic_string_view.html#Top)  
[`201803L`](../compiler_support/20.html#cpp_lib_string_view_201803L "cpp/compiler support/20") | (C++20) | [ConstexprIterator](../named_req/ConstexprIterator.html "cpp/named req/ConstexprIterator")  
[`__cpp_lib_string_contains`](../experimental/feature_test.html#cpp_lib_string_contains "cpp/feature test") | [`202011L`](../compiler_support/23.html#cpp_lib_string_contains_202011L "cpp/compiler support/23") | (C++23) | [`contains`](basic_string_view/contains.html "cpp/string/basic string view/contains")  
  
### Example

Run this code
    
    
    #include <iostream>
    #include <string_view>
     
    int main()
    {
        #define A "▀"
        #define B "▄"
        #define C "─"
     
        constexpr std::string_view blocks[]{A B C, B A C, A C B, B C A};
     
        for (int y{}, p{}; y != 8; ++y, p = ((p + 1) % 4))
        {
            for (char x{}; x != 29; ++x)
                [std::cout](../io/cout.html) << blocks[p];
            [std::cout](../io/cout.html) << '\n';
        }
    }

Output: 
    
    
    ▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─
    ▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─
    ▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄
    ▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀
    ▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─
    ▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─
    ▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄▀─▄
    ▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀▄─▀

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3203](https://cplusplus.github.io/LWG/issue3203) | C++17  | only pointers, iterators, and references  
returned from the member functions of  
`basic_string_view` might be invalidated  | all pointers, iterators, and references  
to elements of `basic_string_view`  
may be invalidated   
  
### See also

[ basic_string](basic_string.html "cpp/string/basic string") |  stores and manipulates sequences of characters   
(class template)   
---|---  
[ operator+](https://en.cppreference.com/w/cpp/string/basic_string/operator%2B "cpp/string/basic string/operator+") |  concatenates two strings, a string and a char, or a string and **string_view**   
(function template)   
[ span](../container/span.html "cpp/container/span")(C++20) |  a non-owning view over a contiguous sequence of objects   
(class template)   
[ initializer_list](../utility/initializer_list.html "cpp/utility/initializer list")(C++11) |  references a temporary array created in [list-initialization](../language/list_initialization.html "cpp/language/list initialization")   
(class template) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
