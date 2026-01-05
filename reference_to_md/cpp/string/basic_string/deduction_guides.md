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
**Deduction guides** (C++17)  
  


Defined in header `[<string>](../../header/string.html "cpp/header/string")` |  |   
---|---|---  
template< class InputIt,  
class Alloc = [std::allocator](../../memory/allocator.html)<typename [std::iterator_traits](../../iterator/iterator_traits.html)  
<InputIt>::value_type> >  
basic_string( InputIt, InputIt, Alloc = Alloc() )  
-> basic_string<typename [std::iterator_traits](../../iterator/iterator_traits.html)<InputIt>::value_type,  
[std::char_traits](../char_traits.html)  
<typename [std::iterator_traits](../../iterator/iterator_traits.html)<InputIt>::value_type>,  
Alloc>; |  (1)  |  (since C++17)  
template< class CharT,  
class Traits,  
class Alloc = [std::allocator](../../memory/allocator.html)<CharT> >  
explicit basic_string( [std::basic_string_view](../basic_string_view.html)<CharT, Traits>,  
const Alloc& = Alloc() )  
-> basic_string<CharT, Traits, Alloc>; |  (2) | (since C++17)  
template< class CharT,  
class Traits,  
class Alloc = [std::allocator](../../memory/allocator.html)<CharT> >  
basic_string( [std::basic_string_view](../basic_string_view.html)<CharT, Traits>,  
typename /* see below */::size_type,  
typename /* see below */::size_type,  
const Alloc& = Alloc() )  
-> basic_string<CharT, Traits, Alloc>; |  (3)  |  (since C++17)  
template< [ranges::input_range](../../ranges/input_range.html) R,  
class Alloc = [std::allocator](../../memory/allocator.html)<[ranges::range_value_t](../../ranges/range_size_t.html)<R>> >  
basic_string( [std::from_range_t](../../ranges/from_range.html), R&&, Alloc = Alloc() )  
-> basic_string<[ranges::range_value_t](../../ranges/range_size_t.html)<R>,  
[std::char_traits](../char_traits.html)<[ranges::range_value_t](../../ranges/range_size_t.html)<R>>, Alloc>; |  (4) | (since C++23)  
| |   
  
1) This [deduction guide](../../language/ctad.html "cpp/language/class template argument deduction") is provided for [std::basic_string](../basic_string.html "cpp/string/basic string") to allow deduction from an iterator range. This overload participates in overload resolution only if `InputIt` satisfies [LegacyInputIterator](../../named_req/InputIterator.html "cpp/named req/InputIterator") and `Alloc` satisfies [Allocator](../../named_req/Allocator.html "cpp/named req/Allocator").

2,3) These deduction guides are provided for [std::basic_string](../basic_string.html "cpp/string/basic string") to allow deduction from a [std::basic_string_view](../basic_string_view.html "cpp/string/basic string view"). These overloads participate in overload resolution only if `Alloc` satisfies [Allocator](../../named_req/Allocator.html "cpp/named req/Allocator").

3) The `size_type` parameter type refers to the nested type `size_type` of the type deduced by the deduction guide.

4) This deduction guide is provided for [std::basic_string](../basic_string.html "cpp/string/basic string") to allow deduction from a [`std::from_range_t`](../../ranges/from_range.html "cpp/ranges/from range") tag and an [`input_range`](../../ranges/input_range.html "cpp/ranges/input range").

Note: the extent to which the library determines that a type does not satisfy [LegacyInputIterator](../../named_req/InputIterator.html "cpp/named req/InputIterator") is unspecified, except that as a minimum integral types do not qualify as input iterators. Likewise, the extent to which it determines that a type does not satisfy [Allocator](../../named_req/Allocator.html "cpp/named req/Allocator") is unspecified, except that as a minimum the member type `Alloc::value_type` must exist and the expression [std::declval](../../utility/declval.html)<Alloc&>().allocate([std::size_t](../../types/size_t.html){}) must be well-formed when treated as an unevaluated operand. 

## Contents

  * [1 Notes](deduction_guides.html#Notes)
  * [2 Notes](deduction_guides.html#Notes_2)
  * [3 Example](deduction_guides.html#Example)
  * [4 Defect reports](deduction_guides.html#Defect_reports)

  
---  
  
### Notes

Guides ([2,3](deduction_guides.html#Version_2)) are needed because the [std::basic_string](../basic_string.html "cpp/string/basic string") constructors for [std::basic_string_view](../basic_string_view.html "cpp/string/basic string view")s are made templates to avoid causing ambiguities in existing code, and those templates do not support class template argument deduction. 

### Notes

[Feature-test](../../utility/feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_containers_ranges`](../../experimental/feature_test.html#cpp_lib_containers_ranges "cpp/feature test") | [`202202L`](../../compiler_support/23.html#cpp_lib_containers_ranges_202202L "cpp/compiler support/23") | (C++23) | [Ranges-aware](../../ranges/to.html#container_compatible_range "cpp/ranges/to") construction and insertion; overload ([4](deduction_guides.html#Version_4))  
  
### Example

Run this code
    
    
    #include <cassert>
    #include <string>
    #include <vector>
     
    int main()
    {
        [std::vector](../../container/vector.html)<char> v = {'a', 'b', 'c'};
        [std::basic_string](../basic_string.html) s1(v.begin(), v.end()); // uses deduction guide (1)
        [assert](../../error/assert.html)(s1 == "abc");
     
    #if __cpp_lib_containers_ranges >= 202202L
        [std::vector](../../container/vector.html)<wchar_t> v4{0x43, 43, 053, 0x32, 0x33};
        [std::basic_string](../basic_string.html) s4([std::from_range](../../ranges/from_range.html), v4); // uses deduction guide (4)
        [assert](../../error/assert.html)(s4 == L"C++23");
    #endif
    }

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3075](https://cplusplus.github.io/LWG/issue3075) | C++17  | deduction from `basic_string_view` was unsupported  
(exacerbated by [LWG issue 2946](https://cplusplus.github.io/LWG/issue2946))  | deduction guides added 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
