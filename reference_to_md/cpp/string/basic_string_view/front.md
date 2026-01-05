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
[basic_string_view::find_last_not_of](find_last_not_of.html "cpp/string/basic string view/find last not of")  
  
| [Element access](../basic_string_view.html#Element_access "cpp/string/basic string view")  
---  
[basic_string_view::at](at.html "cpp/string/basic string view/at")  
[basic_string_view::operator[]](operator_at.html "cpp/string/basic string view/operator at")  
**basic_string_view::front**  
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
  


constexpr const_reference front() const; |  |  (since C++17)  
---|---|---  
| |   
  
Returns reference to the first character in the view. 

If [empty()](empty.html "cpp/string/basic string view/empty") is true, the behavior is undefined.  | (until C++26)  
---|---  
If [empty()](empty.html "cpp/string/basic string view/empty") is true: 

  * If the implementation is [hardened](../../standard_library.html#Standard_library_hardening "cpp/standard library"), a [contract violation](../../language/contracts.html "cpp/language/contracts") occurs. Moreover, if the contract-violation handler returns under “observe” evaluation semantic, the behavior is undefined. 
  * If the implementation is not hardened, the behavior is undefined. 

| (since C++26)  
  
## Contents

  * [1 Return value](front.html#Return_value)
  * [2 Complexity](front.html#Complexity)
  * [3 Example](front.html#Example)
  * [4 See also](front.html#See_also)

  
---  
  
### Return value

`_[data_](../basic_string_view.html#data "cpp/string/basic string view")_`[0]

### Complexity

Constant. 

### Example

Run this code
    
    
    #include <iostream>
    #include <string_view>
     
    int main()
    {
        for ([std::string_view](../basic_string_view.html) str{"ABCDEF"}; !str.empty(); str.remove_prefix(1))
            [std::cout](../../io/cout.html) << str.front() << ' ' << str << '\n';
    }

Output: 
    
    
    A ABCDEF
    B BCDEF
    C CDEF
    D DEF
    E EF
    F F

### See also

[ back](back.html "cpp/string/basic string view/back") |  accesses the last character   
(public member function)   
---|---  
[ empty](empty.html "cpp/string/basic string view/empty") |  checks whether the view is empty   
(public member function)   
[ front](../basic_string/front.html "cpp/string/basic string/front")(DR*) |  accesses the first character   
(public member function of `std::basic_string<CharT,Traits,Allocator>`) 
