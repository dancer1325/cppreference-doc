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
  


[`std::basic_string_view`](../basic_string_view.html "cpp/string/basic string view")

| [Member functions](../basic_string_view.html#Member_functions "cpp/string/basic string view")  
---  
[basic_string_view::basic_string_view](basic_string_view.html "cpp/string/basic string view/basic string view")` `  
[basic_string_view::operator=](operator=.html "cpp/string/basic string view/operator=")  
[Iterators](../basic_string_view.html#Iterators "cpp/string/basic string view")  
[basic_string_view::beginbasic_string_view::cbegin](begin.html "cpp/string/basic string view/begin")  
[basic_string_view::endbasic_string_view::cend](end.html "cpp/string/basic string view/end")  
[basic_string_view::rbeginbasic_string_view::crbegin](rbegin.html "cpp/string/basic string view/rbegin")  
[basic_string_view::rendbasic_string_view::crend](rend.html "cpp/string/basic string view/rend")  
[Capacity](../basic_string_view.html#Capacity "cpp/string/basic string view")  
[basic_string_view::sizebasic_string_view::length](size.html "cpp/string/basic string view/size")  
[basic_string_view::max_size](max_size.html "cpp/string/basic string view/max size")  
[basic_string_view::empty](empty.html "cpp/string/basic string view/empty")  
[Operations](../basic_string_view.html#Operations "cpp/string/basic string view")  
[basic_string_view::copy](copy.html "cpp/string/basic string view/copy")  
[basic_string_view::substr](substr.html "cpp/string/basic string view/substr")  
[basic_string_view::compare](compare.html "cpp/string/basic string view/compare")  
[basic_string_view::starts_with](starts_with.html "cpp/string/basic string view/starts with")(C++20)  
[basic_string_view::ends_with](ends_with.html "cpp/string/basic string view/ends with")(C++20)  
[basic_string_view::contains](contains.html "cpp/string/basic string view/contains")(C++23)  
[basic_string_view::find](find.html "cpp/string/basic string view/find")  
[basic_string_view::rfind](rfind.html "cpp/string/basic string view/rfind")  
[basic_string_view::find_first_of](find_first_of.html "cpp/string/basic string view/find first of")  
[basic_string_view::find_last_of](find_last_of.html "cpp/string/basic string view/find last of")  
[basic_string_view::find_first_not_of](find_first_not_of.html "cpp/string/basic string view/find first not of")  
**basic_string_view::find_last_not_of**  
  
| [Element access](../basic_string_view.html#Element_access "cpp/string/basic string view")  
---  
[basic_string_view::at](at.html "cpp/string/basic string view/at")  
[basic_string_view::operator[]](operator_at.html "cpp/string/basic string view/operator at")  
[basic_string_view::front](front.html "cpp/string/basic string view/front")  
[basic_string_view::back](back.html "cpp/string/basic string view/back")  
[basic_string_view::data](data.html "cpp/string/basic string view/data")  
[Modifiers](../basic_string_view.html#Modifiers "cpp/string/basic string view")  
[basic_string_view::remove_prefix](remove_prefix.html "cpp/string/basic string view/remove prefix")  
[basic_string_view::remove_suffix](remove_suffix.html "cpp/string/basic string view/remove suffix")  
[basic_string_view::swap](swap.html "cpp/string/basic string view/swap")  
Constants  
[basic_string_view::npos](npos.html "cpp/string/basic string view/npos")  
[Non-member functions](../basic_string_view.html#Non-member_functions "cpp/string/basic string view")  
[operator==operator!=operator<operator>operator<=operator>=operator<=>](operator_cmp.html "cpp/string/basic string view/operator cmp")(until C++20)(until C++20)(until C++20)(until C++20)(until C++20)(C++20)  
[operator<<](operator_ltlt.html "cpp/string/basic string view/operator ltlt")  
[operator""sv](operator""sv.html "cpp/string/basic string view/operator""sv")  
[Helper classes](../basic_string_view.html#Helper_classes "cpp/string/basic string view")  
[hash<std::string_view>hash<std::wstring_view>hash<std::u8string_view>hash<std::u16string_view>hash<std::u32string_view>](hash.html "cpp/string/basic string view/hash")(C++20)  
[Deduction guides](deduction_guides.html "cpp/string/basic string view/deduction guides") (C++20)  
  


constexpr size_type  
find_last_not_of( basic_string_view v, size_type pos = npos ) const noexcept; |  (1)  |  (since C++17)  
---|---|---  
constexpr size_type  
find_last_not_of( CharT ch, size_type pos = npos ) const noexcept; |  (2)  |  (since C++17)  
constexpr size_type  
find_last_not_of( const CharT* s, size_type pos, size_type count ) const; |  (3)  |  (since C++17)  
constexpr size_type  
find_last_not_of( const CharT* s, size_type pos = npos ) const; |  (4)  |  (since C++17)  
| |   
  
Finds the last character not equal to any of the characters in the given character sequence. The search considers only the interval `[`​0​`, `pos`]`. 

1) Finds the last character not equal to any of the characters of v in this view, starting at position pos.

2) Equivalent to find_last_not_of(basic_string_view([std::addressof](../../memory/addressof.html)(ch), 1), pos).

3) Equivalent to find_last_not_of(basic_string_view(s, count), pos).

4) Equivalent to find_last_not_of(basic_string_view(s), pos).

## Contents

  * [1 Parameters](find_last_not_of.html#Parameters)
  * [2 Return value](find_last_not_of.html#Return_value)
  * [3 Complexity](find_last_not_of.html#Complexity)
  * [4 Example](find_last_not_of.html#Example)
  * [5 See also](find_last_not_of.html#See_also)

  
---  
  
### Parameters

v  |  \-  |  view to search for   
---|---|---  
pos  |  \-  |  position at which to start the search   
count  |  \-  |  length of the string of characters to compare   
s  |  \-  |  pointer to a string of characters to compare   
ch  |  \-  |  character to compare   
  
### Return value

Position of the last character not equal to any of the characters in the given string, or [npos](npos.html "cpp/string/basic string view/npos") if no such character is found. 

### Complexity

O([size()](size.html "cpp/string/basic string view/size")` * v.`[size()](size.html "cpp/string/basic string view/size")) at worst. 

### Example

Run this code
    
    
    #include <string_view>
    using std::operator""sv;
     
    int main()
    {
        static_assert(1 == "BCDEF"sv.find_last_not_of("DEF"));
                        //   ^
        static_assert(2 == "BCDEFG"sv.find_last_not_of("EFG", 3));
                        //    ^
        static_assert(2 == "ABBA"sv.find_last_not_of('A'));
                        //    ^
        static_assert(1 == "ABBA"sv.find_last_not_of('A', 1));
                        //   ^
    }

### See also

[ find](find.html "cpp/string/basic string view/find") |  find characters in the view   
(public member function)   
---|---  
[ rfind](rfind.html "cpp/string/basic string view/rfind") |  find the last occurrence of a substring   
(public member function)   
[ find_first_of](find_first_of.html "cpp/string/basic string view/find first of") |  find first occurrence of characters   
(public member function)   
[ find_last_of](find_last_of.html "cpp/string/basic string view/find last of") |  find last occurrence of characters   
(public member function)   
[ find_first_not_of](find_first_not_of.html "cpp/string/basic string view/find first not of") |  find first absence of characters   
(public member function)   
[ find_last_not_of](../basic_string/find_last_not_of.html "cpp/string/basic string/find last not of") |  find last absence of characters   
(public member function of `std::basic_string<CharT,Traits,Allocator>`) 
