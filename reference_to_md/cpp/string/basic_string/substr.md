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
**basic_string::substr**  
  
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
| [stoistolstoll](stol.html "cpp/string/basic string/stol")(C++11)(C++11)(C++11)  
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
  


| (1) |   
---|---|---  
basic_string substr( size_type pos = 0, size_type count = npos ) const; |  | (until C++23)   
(constexpr since C++20)  
constexpr basic_string  
substr( size_type pos = 0, size_type count = npos ) const&; |  |  (since C++23)  
constexpr basic_string substr( size_type pos = 0, size_type count = npos ) &&; |  (2)  |  (since C++23)  
| |   
  
Returns a substring `[`pos`, `pos + count`)`. If the requested substring extends past the end of the string, i.e. the count is greater than size() - pos (e.g. if count == npos), the returned substring is `[`pos`, `[`size()`](size.html "cpp/string/basic string/size")`)`. 

1) Equivalent to return basic_string(*this, pos, count);.

2) Equivalent to return basic_string(std::move(*this), pos, count);.

## Contents

  * [1 Parameters](substr.html#Parameters)
  * [2 Return value](substr.html#Return_value)
  * [3 Exceptions](substr.html#Exceptions)
  * [4 Complexity](substr.html#Complexity)
  * [5 Notes](substr.html#Notes)
  * [6 Example](substr.html#Example)
  * [7 Defect reports](substr.html#Defect_reports)
  * [8 See also](substr.html#See_also)

  
---  
  
### Parameters

pos  |  \-  |  position of the first character to include   
---|---|---  
count  |  \-  |  length of the substring   
  
### Return value

String containing the substring `[`pos`, `pos + count`)` or `[`pos`, `[`size()`](size.html "cpp/string/basic string/size")`)`. 

### Exceptions

[std::out_of_range](../../error/out_of_range.html "cpp/error/out of range") if pos > size(). 

If an exception is thrown for any reason, these functions have no effect ([strong exception safety guarantee](../../language/exceptions.html#Exception_safety "cpp/language/exceptions")). 

### Complexity

Linear in count. 

### Notes

The allocator of the returned string is default-constructed: the new allocator might _not_ be a copy of [`get_allocator()`](get_allocator.html "cpp/string/basic string/get allocator"). 

### Example

Run this code
    
    
    #include <iostream>
    #include <string>
     
    int main()
    {
        [std::string](../basic_string.html) a = "0123456789abcdefghij";
     
        // count is npos, returns [pos, size())
        [std::string](../basic_string.html) sub1 = a.substr(10);
        [std::cout](../../io/cout.html) << sub1 << '\n';
     
        // both pos and pos + count are within bounds, returns [pos, pos + count)
        [std::string](../basic_string.html) sub2 = a.substr(5, 3);
        [std::cout](../../io/cout.html) << sub2 << '\n';
     
        // pos is within bounds, pos + count is not, returns [pos, size())
        [std::string](../basic_string.html) sub4 = a.substr(a.size() - 3, 50);
        // this is effectively equivalent to
        // std::string sub4 = a.substr(17, 3);
        // since a.size() == 20, pos == a.size() - 3 == 17, and a.size() - pos == 3
     
        [std::cout](../../io/cout.html) << sub4 << '\n';
     
        try
        {
            // pos is out of bounds, throws
            [std::string](../basic_string.html) sub5 = a.substr(a.size() + 3, 50);
            [std::cout](../../io/cout.html) << sub5 << '\n';
        }
        catch (const [std::out_of_range](../../error/out_of_range.html)& ex)
        {
            [std::cout](../../io/cout.html) << ex.what() << '\n';
        }
    }

Possible output: 
    
    
    abcdefghij
    567
    hij
    basic_string::substr: __pos (which is 23) > this->size() (which is 20)

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 847](https://cplusplus.github.io/LWG/issue847) | C++98  | there was no exception safety guarantee  | added strong exception safety guarantee   
  
### See also

[ copy](copy.html "cpp/string/basic string/copy") |  copies characters   
(public member function)   
---|---  
[ sizelength](size.html "cpp/string/basic string/size") |  returns the number of characters   
(public member function)   
[ find](find.html "cpp/string/basic string/find") |  finds the first occurrence of the given substring   
(public member function)   
constexpr size_type `npos` [static] |  the special value size_type(-1), its exact meaning depends on the context  
[ substr](../basic_string_view/substr.html "cpp/string/basic string view/substr") |  returns a substring   
(public member function of `std::basic_string_view<CharT,Traits>`) 
