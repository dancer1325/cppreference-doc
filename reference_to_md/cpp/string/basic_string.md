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

[Strings library](../string.html "cpp/string")

Classes  
---  
**basic_string**  
[basic_string_view](basic_string_view.html "cpp/string/basic string view")(C++17)  
[char_traits](char_traits.html "cpp/string/char traits")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/navbar_content&action=edit)

**`std::basic_string`**

| [Member functions](basic_string.html#Member_functions "cpp/string/basic string")  
---  
[basic_string::basic_string](basic_string/basic_string.html "cpp/string/basic string/basic string")  
[basic_string::~basic_string](basic_string/~basic_string.html "cpp/string/basic string/~basic string")  
[basic_string::operator=](basic_string/operator=.html "cpp/string/basic string/operator=")  
[basic_string::assign](basic_string/assign.html "cpp/string/basic string/assign")  
[basic_string::assign_range](basic_string/assign_range.html "cpp/string/basic string/assign range")(C++23)` `  
[basic_string::get_allocator](basic_string/get_allocator.html "cpp/string/basic string/get allocator")  
[Element access](basic_string.html#Element_access "cpp/string/basic string")  
[basic_string::at](basic_string/at.html "cpp/string/basic string/at")  
[basic_string::operator[]](basic_string/operator_at.html "cpp/string/basic string/operator at")  
[basic_string::front](basic_string/front.html "cpp/string/basic string/front")(DR*)  
[basic_string::back](basic_string/back.html "cpp/string/basic string/back")(DR*)  
[basic_string::data](basic_string/data.html "cpp/string/basic string/data")  
[basic_string::c_str](basic_string/c_str.html "cpp/string/basic string/c str")  
[basic_string::operator  
basic_string_view](basic_string/operator_basic_string_view.html "cpp/string/basic string/operator basic string view")(C++17)  
[Iterators](basic_string.html#Iterators "cpp/string/basic string")  
[basic_string::beginbasic_string::cbegin](basic_string/begin.html "cpp/string/basic string/begin")(C++11)  
[basic_string::endbasic_string::cend](basic_string/end.html "cpp/string/basic string/end")(C++11)  
[basic_string::rbeginbasic_string::crbegin](basic_string/rbegin.html "cpp/string/basic string/rbegin")(C++11)  
[basic_string::rendbasic_string::crend](basic_string/rend.html "cpp/string/basic string/rend")(C++11)  
[Search](basic_string.html#Search "cpp/string/basic string")  
[basic_string::find](basic_string/find.html "cpp/string/basic string/find")  
[basic_string::rfind](basic_string/rfind.html "cpp/string/basic string/rfind")  
[basic_string::find_first_of](basic_string/find_first_of.html "cpp/string/basic string/find first of")  
[basic_string::find_first_not_of](basic_string/find_first_not_of.html "cpp/string/basic string/find first not of")  
[basic_string::find_last_of](basic_string/find_last_of.html "cpp/string/basic string/find last of")  
[basic_string::find_last_not_of](basic_string/find_last_not_of.html "cpp/string/basic string/find last not of")  
  
| [Modifiers](basic_string.html#Modifiers "cpp/string/basic string")  
---  
[basic_string::clear](basic_string/clear.html "cpp/string/basic string/clear")  
[basic_string::insert](basic_string/insert.html "cpp/string/basic string/insert")  
[basic_string::insert_range](basic_string/insert_range.html "cpp/string/basic string/insert range")(C++23)  
[basic_string::erase](basic_string/erase.html "cpp/string/basic string/erase")  
[basic_string::push_back](basic_string/push_back.html "cpp/string/basic string/push back")  
[basic_string::pop_back](basic_string/pop_back.html "cpp/string/basic string/pop back")(DR*)  
[basic_string::append](basic_string/append.html "cpp/string/basic string/append")  
[basic_string::append_range](basic_string/append_range.html "cpp/string/basic string/append range")(C++23)  
[basic_string::operator+=](basic_string/operator+=.html "cpp/string/basic string/operator+=")  
[basic_string::replace](basic_string/replace.html "cpp/string/basic string/replace")  
[basic_string::replace_with_range](basic_string/replace_with_range.html "cpp/string/basic string/replace with range")(C++23)  
[basic_string::copy](basic_string/copy.html "cpp/string/basic string/copy")  
[basic_string::resize](basic_string/resize.html "cpp/string/basic string/resize")  
[basic_string::resize_and_overwrite](basic_string/resize_and_overwrite.html "cpp/string/basic string/resize and overwrite")(C++23)` `  
[basic_string::swap](basic_string/swap.html "cpp/string/basic string/swap")  
[Capacity](basic_string.html#Capacity "cpp/string/basic string")  
[basic_string::empty](basic_string/empty.html "cpp/string/basic string/empty")  
[basic_string::sizebasic_string::length](basic_string/size.html "cpp/string/basic string/size")  
[basic_string::max_size](basic_string/max_size.html "cpp/string/basic string/max size")  
[basic_string::reserve](basic_string/reserve.html "cpp/string/basic string/reserve")  
[basic_string::capacity](basic_string/capacity.html "cpp/string/basic string/capacity")  
[basic_string::shrink_to_fit](basic_string/shrink_to_fit.html "cpp/string/basic string/shrink to fit")(DR*)  
[Operations](basic_string.html#Operations "cpp/string/basic string")  
[basic_string::compare](basic_string/compare.html "cpp/string/basic string/compare")  
[basic_string::starts_with](basic_string/starts_with.html "cpp/string/basic string/starts with")(C++20)  
[basic_string::ends_with](basic_string/ends_with.html "cpp/string/basic string/ends with")(C++20)  
[basic_string::contains](basic_string/contains.html "cpp/string/basic string/contains")(C++23)  
[basic_string::substr](basic_string/substr.html "cpp/string/basic string/substr")  
  
| [Constants](basic_string.html#Constants "cpp/string/basic string")  
---  
[basic_string::npos](basic_string/npos.html "cpp/string/basic string/npos")  
[Non-member functions](basic_string.html#Non-member_functions "cpp/string/basic string")  
[operator+](https://en.cppreference.com/w/cpp/string/basic_string/operator%2B "cpp/string/basic string/operator+")  
[swap(std::basic_string)](basic_string/swap2.html "cpp/string/basic string/swap2")  
[erase(std::basic_string)erase_if(std::basic_string)](basic_string/erase2.html "cpp/string/basic string/erase2")(C++20)(C++20)  
[I/O](basic_string.html#Input.2Foutput "cpp/string/basic string")  
[operator<<operator>>](basic_string/operator_ltltgtgt.html "cpp/string/basic string/operator ltltgtgt")  
[getline](basic_string/getline.html "cpp/string/basic string/getline")  
[Comparison](basic_string.html#Non-member_functions "cpp/string/basic string")  
[operator==operator!=operator<operator>operator<=operator>=operator<=>](basic_string/operator_cmp.html "cpp/string/basic string/operator cmp")(until C++20)(until C++20)(until C++20)(until C++20)(until C++20)(C++20)  
[Numeric conversions](basic_string.html#Numeric_conversions "cpp/string/basic string")  
| [stoistolstoll](basic_string/stol.html "cpp/string/basic string/stol")(C++11)(C++11)(C++11)  
---  
[stoulstoull](basic_string/stoul.html "cpp/string/basic string/stoul")(C++11)(C++11)` `  
  
| [stofstodstold](basic_string/stof.html "cpp/string/basic string/stof")(C++11)(C++11)(C++11)  
---  
[to_string](basic_string/to_string.html "cpp/string/basic string/to string")(C++11)  
[to_wstring](basic_string/to_wstring.html "cpp/string/basic string/to wstring")(C++11)  
  
[Literals](basic_string.html#Literals "cpp/string/basic string")  
[operator""s](basic_string/operator""s.html "cpp/string/basic string/operator""s")(C++14)  
[Helper classes](basic_string.html#Helper_classes "cpp/string/basic string")  
[hash<std::basic_string>](basic_string/hash.html "cpp/string/basic string/hash")(C++11)  
[Deduction guides](basic_string/deduction_guides.html "cpp/string/basic string/deduction guides") (C++17)  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/navbar_content&action=edit)

Defined in header `[<string>](../header/string.html "cpp/header/string")` |  |   
---|---|---  
template<  
class CharT,  
class Traits = [std::char_traits](char_traits.html)<CharT>,  
class Allocator = [std::allocator](../memory/allocator.html)<CharT>  
> class basic_string; |  (1)  |   
namespace pmr {  
template<  
class CharT,  
class Traits = [std::char_traits](char_traits.html)<CharT>  
> using basic_string =  
std::basic_string<CharT, Traits, [std::pmr::polymorphic_allocator](../memory/polymorphic_allocator.html)<CharT>>;  
} |  (2)  |  (since C++17)  
| |   
  
The class template `basic_string` stores and manipulates sequences of [character](../language/types.html#Character_types "cpp/language/types")-like objects, which are non-array objects of [TrivialType](../named_req/TrivialType.html "cpp/named req/TrivialType") and [StandardLayoutType](../named_req/StandardLayoutType.html "cpp/named req/StandardLayoutType"). The class is dependent neither on the character type nor on the nature of operations on that type. The definitions of the operations are supplied via the `Traits` template parameter - a specialization of [std::char_traits](char_traits.html "cpp/string/char traits") or a compatible traits class. 

The elements of a `basic_string` are stored contiguously, that is, for a `basic_string` s, &*(s.begin() + n) == &*s.begin() + n for any n in `[`​0​`, `s.size()`)`, and *(s.begin() + s.size()) has value CharT() (a null terminator)(since C++11); or, equivalently, a pointer to s[0] can be passed to functions that expect a pointer to the first element of an array(until C++11)a null-terminated array(since C++11) of `CharT`. 

`std::basic_string` satisfies the requirements of [AllocatorAwareContainer](../named_req/AllocatorAwareContainer.html "cpp/named req/AllocatorAwareContainer") (except that customized `construct`/`destroy` are not used for construction/destruction of elements), [SequenceContainer](../named_req/SequenceContainer.html "cpp/named req/SequenceContainer") and [ContiguousContainer](../named_req/ContiguousContainer.html "cpp/named req/ContiguousContainer")(since C++17). 

If any of `Traits::char_type` and `Allocator::value_type` is different from `CharT`, the program is ill-formed. 

All member functions of `std::basic_string` are constexpr: it is possible to create and use `std::basic_string` objects in the evaluation of a constant expression.However, `std::basic_string` objects generally cannot be constexpr, because any dynamically allocated storage must be released in the same evaluation of constant expression. | (since C++20)  
---|---  
  
Several typedefs for common character types are provided: 

Defined in header `[<string>](../header/string.html "cpp/header/string")`  
---  
Type  |  Definition   
`std::string` |  std::basic_string<char>  
`std::wstring` |  std::basic_string<wchar_t>  
`std::u8string` (C++20) |  std::basic_string<char8_t>  
`std::u16string` (C++11) |  std::basic_string<char16_t>  
`std::u32string` (C++11) |  std::basic_string<char32_t>  
`std::pmr::string` (C++17) |  std::pmr::basic_string<char>  
`std::pmr::wstring` (C++17) |  std::pmr::basic_string<wchar_t>  
`std::pmr::u8string` (C++20) |  std::pmr::basic_string<char8_t>  
`std::pmr::u16string` (C++17) |  std::pmr::basic_string<char16_t>  
`std::pmr::u32string` (C++17) |  std::pmr::basic_string<char32_t>  
  
## Contents

  * [1 Template parameters](basic_string.html#Template_parameters)
  * [2 Nested types](basic_string.html#Nested_types)
  * [3 Data members](basic_string.html#Data_members)
  * [4 Member functions](basic_string.html#Member_functions)
    * [4.1 Element access](basic_string.html#Element_access)
    * [4.2 Iterators](basic_string.html#Iterators)
    * [4.3 Capacity](basic_string.html#Capacity)
    * [4.4 Modifiers](basic_string.html#Modifiers)
    * [4.5 Search](basic_string.html#Search)
    * [4.6 Operations](basic_string.html#Operations)
  * [5 Non-member functions](basic_string.html#Non-member_functions)
    * [5.1 Input/output](basic_string.html#Input.2Foutput)
    * [5.2 Numeric conversions](basic_string.html#Numeric_conversions)
  * [6 Literals](basic_string.html#Literals)
  * [7 Helper classes](basic_string.html#Helper_classes)
  * [8 Deduction guides (since C++17)](basic_string.html#Deduction_guides_.28since_C.2B.2B17.29)
  * [9 Iterator invalidation](basic_string.html#Iterator_invalidation)
  * [10 Notes](basic_string.html#Notes)
  * [11 Example](basic_string.html#Example)
  * [12 Defect reports](basic_string.html#Defect_reports)
  * [13 See also](basic_string.html#See_also)
  * [14 External links](basic_string.html#External_links)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string/basic_string&action=edit&section=1 "Edit section: Template parameters")] Template parameters

CharT  |  \-  |  character type   
---|---|---  
Traits  |  \-  |  traits class specifying the operations on the character type   
Allocator  |  \-  |  [Allocator](../named_req/Allocator.html "cpp/named req/Allocator") type used to allocate internal storage   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string/basic_string&action=edit&section=2 "Edit section: Nested types")] Nested types

Type  |  Definition   
---|---  
`traits_type` |  `Traits`  
`value_type` |  `CharT`  
`allocator_type` |  `Allocator`[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_allocator_type&action=edit)  
`size_type` |  | `Allocator::size_type` | (until C++11)  
---|---  
[std::allocator_traits](../memory/allocator_traits.html)<Allocator>::size_type | (since C++11)  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_size_type&action=edit)  
`difference_type` |  | Allocator::difference_type | (until C++11)  
---|---  
[std::allocator_traits](../memory/allocator_traits.html)<Allocator>::difference_type | (since C++11)  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_difference_type&action=edit)  
`reference` |  value_type&[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_reference&action=edit)  
`const_reference` |  const value_type&[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_const_reference&action=edit)  
`pointer` |  |  `Allocator::pointer` | (until C++11)  
---|---  
[std::allocator_traits](../memory/allocator_traits.html)<Allocator>::pointer | (since C++11)  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_pointer&action=edit)  
`const_pointer` |  |  `Allocator::const_pointer` | (until C++11)  
---|---  
[std::allocator_traits](../memory/allocator_traits.html)<Allocator>::const_pointer | (since C++11)  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_const_pointer&action=edit)  
`iterator` |  |  [LegacyRandomAccessIterator](../named_req/RandomAccessIterator.html "cpp/named req/RandomAccessIterator") and [LegacyContiguousIterator](../named_req/ContiguousIterator.html "cpp/named req/ContiguousIterator") to `value_type` | (until C++20)  
---|---  
[LegacyRandomAccessIterator](../named_req/RandomAccessIterator.html "cpp/named req/RandomAccessIterator"), [`contiguous_iterator`](../iterator/contiguous_iterator.html "cpp/iterator/contiguous iterator"), and [ConstexprIterator](../named_req/ConstexprIterator.html "cpp/named req/ConstexprIterator") to `value_type` | (since C++20)  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_iterator&action=edit)  
`const_iterator` |  |  [LegacyRandomAccessIterator](../named_req/RandomAccessIterator.html "cpp/named req/RandomAccessIterator") and [LegacyContiguousIterator](../named_req/ContiguousIterator.html "cpp/named req/ContiguousIterator") to const value_type | (until C++20)  
---|---  
[LegacyRandomAccessIterator](../named_req/RandomAccessIterator.html "cpp/named req/RandomAccessIterator"), [`contiguous_iterator`](../iterator/contiguous_iterator.html "cpp/iterator/contiguous iterator"), and [ConstexprIterator](../named_req/ConstexprIterator.html "cpp/named req/ConstexprIterator") to const value_type | (since C++20)  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_const_iterator&action=edit)  
`reverse_iterator` |  [std::reverse_iterator](../iterator/reverse_iterator.html)<iterator>[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_reverse_iterator&action=edit)  
`const_reverse_iterator` |  [std::reverse_iterator](../iterator/reverse_iterator.html)<const_iterator>[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_const_reverse_iterator&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string/basic_string&action=edit&section=3 "Edit section: Data members")] Data members

constexpr size_type `npos` [static] |  the special value size_type(-1), its exact meaning depends on the context   
---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string/basic_string&action=edit&section=4 "Edit section: Member functions")] Member functions

[ (constructor)](basic_string/basic_string.html "cpp/string/basic string/basic string") |  constructs a `basic_string`   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_constructor&action=edit)  
---|---  
[ (destructor)](basic_string/~basic_string.html "cpp/string/basic string/~basic string") |  destroys the string, deallocating internal storage if used   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_destructor&action=edit)  
[ operator=](basic_string/operator=.html "cpp/string/basic string/operator=") |  assigns values to the string   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_operator%3D&action=edit)  
[ assign](basic_string/assign.html "cpp/string/basic string/assign") |  assign characters to a string   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_assign&action=edit)  
[ assign_range](basic_string/assign_range.html "cpp/string/basic string/assign range")(C++23) |  assign a range of characters to a string   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_assign_range&action=edit)  
[ get_allocator](basic_string/get_allocator.html "cpp/string/basic string/get allocator") |  returns the associated allocator   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_get_allocator&action=edit)  
  
#####  Element access   
  
[ at](basic_string/at.html "cpp/string/basic string/at") |  accesses the specified character with bounds checking   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_at&action=edit)  
[ operator[]](basic_string/operator_at.html "cpp/string/basic string/operator at") |  accesses the specified character   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_operator_at&action=edit)  
[ front](basic_string/front.html "cpp/string/basic string/front")(DR*) |  accesses the first character   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_front&action=edit)  
[ back](basic_string/back.html "cpp/string/basic string/back")(DR*) |  accesses the last character   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_back&action=edit)  
[ data](basic_string/data.html "cpp/string/basic string/data") |  returns a pointer to the first character of a string   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_data&action=edit)  
[ c_str](basic_string/c_str.html "cpp/string/basic string/c str") |  returns a non-modifiable standard C character array version of the string   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_c_str&action=edit)  
[ operator basic_string_view](basic_string/operator_basic_string_view.html "cpp/string/basic string/operator basic string view")(C++17) |  returns a non-modifiable `basic_string_view` into the entire string   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_operator_string_view&action=edit)  
  
#####  Iterators   
  
[ begincbegin](basic_string/begin.html "cpp/string/basic string/begin")(C++11) |  returns an iterator to the beginning   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_begin&action=edit)  
[ endcend](basic_string/end.html "cpp/string/basic string/end")(C++11) |  returns an iterator to the end   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_end&action=edit)  
[ rbegincrbegin](basic_string/rbegin.html "cpp/string/basic string/rbegin")(C++11) |  returns a reverse iterator to the beginning   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_rbegin&action=edit)  
[ rendcrend](basic_string/rend.html "cpp/string/basic string/rend")(C++11) |  returns a reverse iterator to the end   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_rend&action=edit)  
  
#####  Capacity   
  
[ empty](basic_string/empty.html "cpp/string/basic string/empty") |  checks whether the string is empty   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_empty&action=edit)  
[ sizelength](basic_string/size.html "cpp/string/basic string/size") |  returns the number of characters   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_size&action=edit)  
[ max_size](basic_string/max_size.html "cpp/string/basic string/max size") |  returns the maximum number of characters   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_max_size&action=edit)  
[ reserve](basic_string/reserve.html "cpp/string/basic string/reserve") |  reserves storage   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_reserve&action=edit)  
[ capacity](basic_string/capacity.html "cpp/string/basic string/capacity") |  returns the number of characters that can be held in currently allocated storage   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_capacity&action=edit)  
[ shrink_to_fit](basic_string/shrink_to_fit.html "cpp/string/basic string/shrink to fit")(DR*) |  reduces memory usage by freeing unused memory   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_shrink_to_fit&action=edit)  
  
#####  Modifiers   
  
[ clear](basic_string/clear.html "cpp/string/basic string/clear") |  clears the contents   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_clear&action=edit)  
[ insert](basic_string/insert.html "cpp/string/basic string/insert") |  inserts characters   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_insert&action=edit)  
[ insert_range](basic_string/insert_range.html "cpp/string/basic string/insert range")(C++23) |  inserts a range of characters   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_insert_range&action=edit)  
[ erase](basic_string/erase.html "cpp/string/basic string/erase") |  removes characters   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_erase&action=edit)  
[ push_back](basic_string/push_back.html "cpp/string/basic string/push back") |  appends a character to the end   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_push_back&action=edit)  
[ pop_back](basic_string/pop_back.html "cpp/string/basic string/pop back")(DR*) |  removes the last character   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_pop_back&action=edit)  
[ append](basic_string/append.html "cpp/string/basic string/append") |  appends characters to the end   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_append&action=edit)  
[ append_range](basic_string/append_range.html "cpp/string/basic string/append range")(C++23) |  appends a range of characters to the end   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_append_range&action=edit)  
[ operator+=](basic_string/operator+=.html "cpp/string/basic string/operator+=") |  appends characters to the end   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_operator%2B%3D&action=edit)  
[ replace](basic_string/replace.html "cpp/string/basic string/replace") |  replaces specified portion of a string   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_replace&action=edit)  
[ replace_with_range](basic_string/replace_with_range.html "cpp/string/basic string/replace with range")(C++23) |  replaces specified portion of a string with a range of characters   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_replace_with_range&action=edit)  
[ copy](basic_string/copy.html "cpp/string/basic string/copy") |  copies characters   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_copy&action=edit)  
[ resize](basic_string/resize.html "cpp/string/basic string/resize") |  changes the number of characters stored   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_resize&action=edit)  
[ resize_and_overwrite](basic_string/resize_and_overwrite.html "cpp/string/basic string/resize and overwrite")(C++23) |  changes the number of characters stored and possibly overwrites indeterminate contents via user-provided operation   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_resize_and_overwrite&action=edit)  
[ swap](basic_string/swap.html "cpp/string/basic string/swap") |  swaps the contents   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_swap&action=edit)  
  
#####  Search   
  
[ find](basic_string/find.html "cpp/string/basic string/find") |  finds the first occurrence of the given substring   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_find&action=edit)  
[ rfind](basic_string/rfind.html "cpp/string/basic string/rfind") |  find the last occurrence of a substring   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_rfind&action=edit)  
[ find_first_of](basic_string/find_first_of.html "cpp/string/basic string/find first of") |  find first occurrence of characters   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_find_first_of&action=edit)  
[ find_first_not_of](basic_string/find_first_not_of.html "cpp/string/basic string/find first not of") |  find first absence of characters   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_find_first_not_of&action=edit)  
[ find_last_of](basic_string/find_last_of.html "cpp/string/basic string/find last of") |  find last occurrence of characters   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_find_last_of&action=edit)  
[ find_last_not_of](basic_string/find_last_not_of.html "cpp/string/basic string/find last not of") |  find last absence of characters   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_find_last_not_of&action=edit)  
  
#####  Operations   
  
[ compare](basic_string/compare.html "cpp/string/basic string/compare") |  compares two strings   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_compare&action=edit)  
[ starts_with](basic_string/starts_with.html "cpp/string/basic string/starts with")(C++20) |  checks if the string starts with the given prefix   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_starts_with&action=edit)  
[ ends_with](basic_string/ends_with.html "cpp/string/basic string/ends with")(C++20) |  checks if the string ends with the given suffix   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_ends_with&action=edit)  
[ contains](basic_string/contains.html "cpp/string/basic string/contains")(C++23) |  checks if the string contains the given substring or character   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_contains&action=edit)  
[ substr](basic_string/substr.html "cpp/string/basic string/substr") |  returns a substring   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_substr&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string/basic_string&action=edit&section=5 "Edit section: Non-member functions")] Non-member functions

[ operator+](https://en.cppreference.com/w/cpp/string/basic_string/operator%2B "cpp/string/basic string/operator+") |  concatenates two strings, a string and a char, or a string and [string_view](basic_string_view.html "cpp/string/basic string view")   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_operator%2B&action=edit)  
---|---  
[ operator==operator!=operator<operator>operator<=operator>=operator<=>](basic_string/operator_cmp.html "cpp/string/basic string/operator cmp")(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(C++20) |  lexicographically compares two strings   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_operator_cmp&action=edit)  
[ std::swap(std::basic_string)](basic_string/swap2.html "cpp/string/basic string/swap2") |  specializes the [std::swap](../utility/swap.html "cpp/algorithm/swap") algorithm   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_swap2&action=edit)  
[ erase(std::basic_string)erase_if(std::basic_string)](basic_string/erase2.html "cpp/string/basic string/erase2")(C++20) |  erases all elements satisfying specific criteria   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_erase_seq&action=edit)  
  
#####  Input/output   
  
[ operator<<operator>>](basic_string/operator_ltltgtgt.html "cpp/string/basic string/operator ltltgtgt") |  performs stream input and output on strings   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_operator_ltltgtgt&action=edit)  
[ getline](basic_string/getline.html "cpp/string/basic string/getline") |  read data from an I/O stream into a string   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_getline&action=edit)  
  
#####  Numeric conversions   
  
[ stoistolstoll](basic_string/stol.html "cpp/string/basic string/stol")(C++11)(C++11)(C++11) |  converts a string to a signed integer   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_stol&action=edit)  
[ stoulstoull](basic_string/stoul.html "cpp/string/basic string/stoul")(C++11)(C++11) |  converts a string to an unsigned integer   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_stoul&action=edit)  
[ stofstodstold](basic_string/stof.html "cpp/string/basic string/stof")(C++11)(C++11)(C++11) |  converts a string to a floating point value   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_stof&action=edit)  
[ to_string](basic_string/to_string.html "cpp/string/basic string/to string")(C++11) |  converts an integral or floating-point value to `string`   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_to_string&action=edit)  
[ to_wstring](basic_string/to_wstring.html "cpp/string/basic string/to wstring")(C++11) |  converts an integral or floating-point value to `wstring`   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_to_wstring&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string/basic_string&action=edit&section=6 "Edit section: Literals")] Literals

Defined in inline namespace `std::literals::string_literals`  
---  
[ operator""s](basic_string/operator""s.html "cpp/string/basic string/operator""s")(C++14) |  converts a character array literal to `basic_string`   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_operator%22%22s&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string/basic_string&action=edit&section=7 "Edit section: Helper classes")] Helper classes

[ std::hash<std::basic_string>](basic_string/hash.html "cpp/string/basic string/hash")(C++11) |  hash support for strings   
(class template specialization) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_hash&action=edit)  
---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string/basic_string&action=edit&section=8 "Edit section: Deduction guides \(since C++17\)")] [Deduction guides](basic_string/deduction_guides.html "cpp/string/basic string/deduction guides") (since C++17)

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string/basic_string&action=edit&section=9 "Edit section: Iterator invalidation")] Iterator invalidation

References, pointers, and iterators referring to the elements of a `basic_string` may be invalidated by any standard library function taking a reference to non-const `basic_string` as an argument, such as [std::getline](basic_string/getline.html "cpp/string/basic string/getline"), [std::swap](../utility/swap.html "cpp/algorithm/swap"), or [`operator>>`](basic_string/operator_ltltgtgt.html "cpp/string/basic string/operator ltltgtgt"), and by calling non-const member functions, except [`operator[]`](basic_string/operator_at.html "cpp/string/basic string/operator at"), [`at`](basic_string/at.html "cpp/string/basic string/at"), [`data`](basic_string/data.html "cpp/string/basic string/data"), [`front`](basic_string/front.html "cpp/string/basic string/front"), [`back`](basic_string/back.html "cpp/string/basic string/back"), [`begin`](basic_string/begin.html "cpp/string/basic string/begin"), [`rbegin`](basic_string/rbegin.html "cpp/string/basic string/rbegin"), [`end`](basic_string/end.html "cpp/string/basic string/end"), and [`rend`](basic_string/rend.html "cpp/string/basic string/rend"). 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string/basic_string&action=edit&section=10 "Edit section: Notes")] Notes

Although it is required that customized `construct` or `destroy` is used when constructing or destroying elements of `std::basic_string` until C++23, all implementations only used the default mechanism. The requirement is corrected by [P1072R10](https://wg21.link/P1072R10) to match existing practice. 

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_string_udls`](../experimental/feature_test.html#cpp_lib_string_udls "cpp/feature test") | [`201304L`](../compiler_support/14.html#cpp_lib_string_udls_201304L "cpp/compiler support/14") | (C++14) | [User-defined literals for string types](basic_string.html#Literals)  
[`__cpp_lib_starts_ends_with`](../experimental/feature_test.html#cpp_lib_starts_ends_with "cpp/feature test") | [`201711L`](../compiler_support/20.html#cpp_lib_starts_ends_with_201711L "cpp/compiler support/20") | (C++20) | [`starts_with`](basic_string/starts_with.html "cpp/string/basic string/starts with"), [`ends_with`](basic_string/ends_with.html "cpp/string/basic string/ends with")  
[`__cpp_lib_constexpr_string`](../experimental/feature_test.html#cpp_lib_constexpr_string "cpp/feature test") | [`201907L`](../compiler_support/20.html#cpp_lib_constexpr_string_201907L "cpp/compiler support/20") | (C++20) | Constexpr for `std::basic_string`  
[`__cpp_lib_char8_t`](../experimental/feature_test.html#cpp_lib_char8_t "cpp/feature test") | [`201907L`](../compiler_support/20.html#cpp_lib_char8_t_201907L "cpp/compiler support/20") | (C++20) | `std::u8string`  
[`__cpp_lib_erase_if`](../experimental/feature_test.html#cpp_lib_erase_if "cpp/feature test") | [`202002L`](../compiler_support/20.html#cpp_lib_erase_if_202002L "cpp/compiler support/20") | (C++20) | [`erase`](basic_string/erase2.html "cpp/string/basic string/erase2"), [`erase_if`](basic_string/erase2.html "cpp/string/basic string/erase2")  
[`__cpp_lib_string_contains`](../experimental/feature_test.html#cpp_lib_string_contains "cpp/feature test") | [`202011L`](../compiler_support/23.html#cpp_lib_string_contains_202011L "cpp/compiler support/23") | (C++23) | [`contains`](basic_string/contains.html "cpp/string/basic string/contains")  
[`__cpp_lib_string_resize_and_overwrite`](../experimental/feature_test.html#cpp_lib_string_resize_and_overwrite "cpp/feature test") | [`202110L`](../compiler_support/23.html#cpp_lib_string_resize_and_overwrite_202110L "cpp/compiler support/23") | (C++23) | [`resize_and_overwrite`](basic_string/resize_and_overwrite.html "cpp/string/basic string/resize and overwrite")  
[`__cpp_lib_containers_ranges`](../experimental/feature_test.html#cpp_lib_containers_ranges "cpp/feature test") | [`202202L`](../compiler_support/23.html#cpp_lib_containers_ranges_202202L "cpp/compiler support/23") | (C++23) | Member functions for construction, insertion, and replacement that accept [container compatible range](../ranges/to.html#container_compatible_range "cpp/ranges/to")  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string/basic_string&action=edit&section=11 "Edit section: Example")] Example

Run this code
    
    
    #include <iostream>
    #include <string>
     
    int main()
    {
        using namespace std::literals;
     
        // Creating a string from const char*
        std::string str1 = "hello";
     
        // Creating a string using string literal
        auto str2 = "world"s;
     
        // Concatenating strings
        std::string str3 = str1 + " " + str2;
     
        // Print out the result
        [std::cout](../io/cout.html) << str3 << '\n';
     
        std::string::size_type pos = str3.find(" ");
        str1 = str3.substr(pos + 1); // the part after the space
        str2 = str3.substr(0, pos);  // the part till the space
     
        [std::cout](../io/cout.html) << str1 << ' ' << str2 << '\n';
     
        // Accessing an element using subscript operator[]
        [std::cout](../io/cout.html) << str1[0] << '\n';
        str1[0] = 'W';
        [std::cout](../io/cout.html) << str1 << '\n';
    }

Output: 
    
    
    hello world
    world hello
    w
    World

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string/basic_string&action=edit&section=12 "Edit section: Defect reports")] Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 530](https://cplusplus.github.io/LWG/issue530) | C++98  | contiguity of the storage for elements of `basic_string`  
was accidently made not required by [LWG259](https://cplusplus.github.io/LWG/issue259) | required again   
[LWG 2861](https://cplusplus.github.io/LWG/issue2861) | C++98  | `value_type` was `Traits::char_type` | changed to `CharT`  
[LWG 2994](https://cplusplus.github.io/LWG/issue2994)  
([P1148R0](https://wg21.link/P1148R0))  | C++98  | the behavior is undefined if any of `Traits::char_type`[[1]](basic_string.html#cite_note-1)  
and `Allocator::char_type` is different from `CharT` | the program is  
ill-formed in this case   
  
  1. [↑](basic_string.html#cite_ref-1) The `Traits::char_type` case is fixed in [P1148R0](https://wg21.link/P1148R0).



### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string/basic_string&action=edit&section=13 "Edit section: See also")] See also

[ basic_string_view](basic_string_view.html "cpp/string/basic string view")(C++17) |  read-only string view   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/dsc_basic_string_view&action=edit)  
---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/string/basic_string&action=edit&section=14 "Edit section: External links")] External links

[C++ string handling](https://en.wikipedia.org/wiki/C%2B%2B_string_handling "enwiki:C++ string handling")  
---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
