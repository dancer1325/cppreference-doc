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
**basic_string_view::rbegin basic_string_view::crbegin**  
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
[basic_string_view::find_last_not_of](find_last_not_of.html "cpp/string/basic string view/find last not of")  
  
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
  


constexpr const_reverse_iterator rbegin() const noexcept; |  |  (since C++17)  
---|---|---  
constexpr const_reverse_iterator crbegin() const noexcept; |  |  (since C++17)  
| |   
  
Returns a reverse iterator to the first character of the reversed view. It corresponds to the last character of the non-reversed view. 

![range-rbegin-rend.svg](https://upload.cppreference.com/mwiki/images/3/39/range-rbegin-rend.svg)

## Contents

  * [1 Parameters](rbegin.html#Parameters)
  * [2 Return value](rbegin.html#Return_value)
  * [3 Complexity](rbegin.html#Complexity)
  * [4 Example](rbegin.html#Example)
  * [5 See also](rbegin.html#See_also)

  
---  
  
### Parameters

(none) 

### Return value

`const_reverse_iterator` to the first character. 

### Complexity

Constant. 

### Example

Run this code
    
    
    #include <algorithm>
    #include <iostream>
    #include <iterator>
    #include <string_view>
     
    int main()
    {
        [std::ostream_iterator](../../iterator/ostream_iterator.html)<char> out_it([std::cout](../../io/cout.html));
        [std::string_view](../basic_string_view.html) str_view("abcdef");
     
        [std::copy](../../algorithm/copy.html)(str_view.rbegin(), [std::next](../../iterator/next.html)(str_view.rbegin(), 3), out_it);
        *out_it = '\n';
     
        [std::copy](../../algorithm/copy.html)(str_view.crbegin(), [std::next](../../iterator/next.html)(str_view.crbegin(), 3), out_it);
        *out_it = '\n';
    }

Output: 
    
    
    fed
    fed

### See also

[ rendcrend](rend.html "cpp/string/basic string view/rend") |  returns a reverse iterator to the end   
(public member function)   
---|---  
[ rbegincrbegin](../basic_string/rbegin.html "cpp/string/basic string/rbegin")(C++11) |  returns a reverse iterator to the beginning   
(public member function of `std::basic_string<CharT,Traits,Allocator>`) 
