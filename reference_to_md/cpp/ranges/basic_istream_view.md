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

[Ranges library](../ranges.html "cpp/ranges")

| [Range access](../ranges.html#Range_access "cpp/ranges")  
---  
| [begin](begin.html "cpp/ranges/begin")  
---  
[cbegin](cbegin.html "cpp/ranges/cbegin")` `  
[end](end.html "cpp/ranges/end")  
[cend](cend.html "cpp/ranges/cend")  
  
| [rbegin](rbegin.html "cpp/ranges/rbegin")  
---  
[crbegin](crbegin.html "cpp/ranges/crbegin")` `  
[rend](rend.html "cpp/ranges/rend")  
[crend](crend.html "cpp/ranges/crend")  
  
| [size](size.html "cpp/ranges/size")  
---  
[ssize](ssize.html "cpp/ranges/ssize")` `  
[data](data.html "cpp/ranges/data")  
[cdata](cdata.html "cpp/ranges/cdata")  
  
| [reserve_hint](reserve_hint.html "cpp/ranges/reserve hint")(C++26)` `  
---  
[empty](empty.html "cpp/ranges/empty")  
  
  
  
  
  
| [Range conversions](../ranges.html#Range_conversions "cpp/ranges")  
---  
[std::from_range_t  
std::from_range](from_range.html "cpp/ranges/from range")(C++23)(C++23)` `  
[to](to.html "cpp/ranges/to")(C++23)  
  
  
  
| [Dangling iterator handling](../ranges.html#Dangling_iterator_handling "cpp/ranges")  
---  
[dangling](dangling.html "cpp/ranges/dangling")  
[borrowed_iterator_t](borrowed_iterator_t.html "cpp/ranges/borrowed iterator t")  
[borrowed_subrange_t](borrowed_iterator_t.html "cpp/ranges/borrowed iterator t")  
  
  
  
[Range primitives](../ranges.html#Range_primitives "cpp/ranges")  
---  
| [range_size_trange_difference_trange_value_t](range_size_t.html "cpp/ranges/range size t")  
---  
[elements_of](elements_of.html "cpp/ranges/elements of")(C++23)` `  
  
| [iterator_tconst_iterator_tsentinel_tconst_sentinel_t](iterator_t.html "cpp/ranges/iterator t")(C++23)(C++23)` `  
---  
  
| [range_reference_trange_const_reference_trange_rvalue_reference_trange_common_reference_t](range_reference_t.html "cpp/ranges/range reference t")(C++23)  
---  
  
[Range concepts](../ranges.html#Range_concepts "cpp/ranges")  
---  
| [range](range.html "cpp/ranges/range")  
---  
[borrowed_range](borrowed_range.html "cpp/ranges/borrowed range")` `  
[common_range](common_range.html "cpp/ranges/common range")  
  
| [sized_range](sized_range.html "cpp/ranges/sized range")  
---  
[viewable_range](viewable_range.html "cpp/ranges/viewable range")` `  
[view](view.html "cpp/ranges/view")  
  
| [input_range](input_range.html "cpp/ranges/input range")  
---  
[output_range](output_range.html "cpp/ranges/output range")  
[forward_range](forward_range.html "cpp/ranges/forward range")` `  
  
| [bidirectional_range](bidirectional_range.html "cpp/ranges/bidirectional range")` `  
---  
[random_access_range](random_access_range.html "cpp/ranges/random access range")  
[contiguous_range](contiguous_range.html "cpp/ranges/contiguous range")  
  
| [approximately_sized_range](approximately_sized_range.html "cpp/ranges/approximately sized range")(C++26)  
---  
[constant_range](constant_range.html "cpp/ranges/constant range")(C++23)  
  
  
  
[Views](../ranges.html#Views "cpp/ranges")  
---  
| [view_interface](view_interface.html "cpp/ranges/view interface")` `  
---  
  
| [subrange](subrange.html "cpp/ranges/subrange")  
---  
  
|  |   
  
---  
  
[Range factories](../ranges.html#Range_factories "cpp/ranges")  
---  
| [empty_viewviews::empty](empty_view.html "cpp/ranges/empty view")` `  
---  
  
| [single_viewviews::single](single_view.html "cpp/ranges/single view")` `  
---  
  
| **basic_istream_view views::istream**` `  
---  
  
| [iota_viewviews::iota](iota_view.html "cpp/ranges/iota view")` `  
---  
  
| [repeat_viewviews::repeat](repeat_view.html "cpp/ranges/repeat view")(C++23)(C++23)  
---  
  
[Range adaptors](../ranges.html#Range_adaptors "cpp/ranges")  
---  
| [views::all_tviews::all](all_view.html "cpp/ranges/all view")  
---  
[as_rvalue_viewviews::as_rvalue](as_rvalue_view.html "cpp/ranges/as rvalue view")(C++23)(C++23)` `  
[filter_viewviews::filter](filter_view.html "cpp/ranges/filter view")  
[transform_viewviews::transform](transform_view.html "cpp/ranges/transform view")  
[take_viewviews::take](take_view.html "cpp/ranges/take view")  
[take_while_viewviews::take_while](take_while_view.html "cpp/ranges/take while view")  
[common_viewviews::common](common_view.html "cpp/ranges/common view")  
[views::counted](counted_view.html "cpp/ranges/view counted")  
[to_input_viewviews::to_input](to_input_view.html "cpp/ranges/to input view")(C++26)(C++26)  
  
| [ref_view](ref_view.html "cpp/ranges/ref view")  
---  
[drop_viewviews::drop](drop_view.html "cpp/ranges/drop view")  
[drop_while_viewviews::drop_while](drop_while_view.html "cpp/ranges/drop while view")  
[lazy_split_viewviews::lazy_split](lazy_split_view.html "cpp/ranges/lazy split view")  
[split_viewviews::split](split_view.html "cpp/ranges/split view")  
[join_viewviews::join](join_view.html "cpp/ranges/join view")  
[join_with_viewviews::join_with](join_with_view.html "cpp/ranges/join with view")(C++23)(C++23)` `  
[concat_viewviews::concat](concat_view.html "cpp/ranges/concat view")(C++26)(C++26)  
[cache_latest_viewviews::cache_latest](cache_latest_view.html "cpp/ranges/cache latest view")(C++26)(C++26)` `  
  
| [owning_view](owning_view.html "cpp/ranges/owning view")  
---  
[reverse_viewviews::reverse](reverse_view.html "cpp/ranges/reverse view")  
[as_const_viewviews::as_const](as_const_view.html "cpp/ranges/as const view")(C++23)(C++23)  
[elements_viewviews::elements](elements_view.html "cpp/ranges/elements view")  
[keys_viewviews::keys](keys_view.html "cpp/ranges/keys view")  
[values_viewviews::values](values_view.html "cpp/ranges/values view")  
[enumerate_viewviews::enumerate](enumerate_view.html "cpp/ranges/enumerate view")(C++23)(C++23)  
[zip_viewviews::zip](zip_view.html "cpp/ranges/zip view")(C++23)(C++23)  
[zip_transform_viewviews::zip_transform](zip_transform_view.html "cpp/ranges/zip transform view")(C++23)(C++23)` `  
  
| [adjacent_viewviews::adjacent](adjacent_view.html "cpp/ranges/adjacent view")(C++23)(C++23)  
---  
[views::pairwise](adjacent_view.html "cpp/ranges/adjacent view")(C++23)  
[adjacent_transform_viewviews::adjacent_transform](adjacent_transform_view.html "cpp/ranges/adjacent transform view")(C++23)(C++23)  
[views::pairwise_transform](adjacent_transform_view.html "cpp/ranges/adjacent transform view")(C++23)  
[chunk_viewviews::chunk](chunk_view.html "cpp/ranges/chunk view")(C++23)(C++23)  
[slide_viewviews::slide](slide_view.html "cpp/ranges/slide view")(C++23)(C++23)  
[chunk_by_viewviews::chunk_by](chunk_by_view.html "cpp/ranges/chunk by view")(C++23)(C++23)  
[stride_viewviews::stride](stride_view.html "cpp/ranges/stride view")(C++23)(C++23)  
[cartesian_product_viewviews::cartesian_product](cartesian_product_view.html "cpp/ranges/cartesian product view")(C++23)(C++23)  
  
  
  
| [Range generators](../ranges.html#Range_generators "cpp/ranges")  
---  
[std::generator](../coroutine/generator.html "cpp/coroutine/generator")(C++23)` `  
  
| [Range adaptor closure objects](../ranges.html#Range_adaptor_closure_objects "cpp/ranges")  
---  
[range_adaptor_closure](range_adaptor_closure.html "cpp/ranges/range adaptor closure")(C++23)` `  
  
| [Range adaptor objects](../ranges.html#Range_adaptor_objects "cpp/ranges")  
---  
  
  
  
[Helper items](../ranges.html#Helper_items "cpp/ranges")  
---  
| [_copyable-box_  
 _movable-box_](copyable_wrapper.html "cpp/ranges/copyable wrapper")(until C++23)` `(C++23)  
---  
  
| [_simple-view_](../ranges.html#Helper_concepts "cpp/ranges")  
---  
[_non-propagating-cache_](non-propagating-cache.html "cpp/ranges/non-propagating-cache")  
  
|   
  
---  
  
  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/navbar_content&action=edit)

**`std::ranges::basic_istream_view`**

[Member functions](basic_istream_view.html#Member_functions "cpp/ranges/basic istream view")  
---  
[basic_istream_view::basic_istream_view](basic_istream_view.html#ctor "cpp/ranges/basic istream view")  
[basic_istream_view::begin](basic_istream_view.html#begin "cpp/ranges/basic istream view")  
[basic_istream_view::end](basic_istream_view.html#end "cpp/ranges/basic istream view")  
[Iterator](basic_istream_view/iterator.html "cpp/ranges/basic istream view/iterator")  
[basic_istream_view::_iterator_ ::_iterator_](basic_istream_view/iterator.html#ctor "cpp/ranges/basic istream view/iterator")  
[basic_istream_view::_iterator_ ::operator=](basic_istream_view/iterator.html#assign "cpp/ranges/basic istream view/iterator")  
[basic_istream_view::_iterator_ ::operator++](basic_istream_view/iterator.html#increment "cpp/ranges/basic istream view/iterator")  
[basic_istream_view::_iterator_ ::operator*](basic_istream_view/iterator.html#dereference "cpp/ranges/basic istream view/iterator")  
[operator==(basic_istream_view::_iterator_)](basic_istream_view/iterator.html#Non-member_functions "cpp/ranges/basic istream view/iterator")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/basic_istream_view/navbar_content&action=edit)

Defined in header `[<ranges>](../header/ranges.html "cpp/header/ranges")` |  |   
---|---|---  
template< [std::movable](../concepts/movable.html) Val, class CharT,  
class Traits = [std::char_traits](../string/char_traits.html)<CharT> >  
requires [std::default_initializable](../concepts/default_initializable.html)<Val> &&  
/*stream-extractable*/<Val, CharT, Traits>  
class basic_istream_view  
: public [ranges::view_interface](view_interface.html)<basic_istream_view<Val, CharT, Traits>> |  (1)  |  (since C++20)  
Helper templates |  |   
template< class Val >  
using istream_view = ranges::basic_istream_view<Val, char>; |  (2)  |  (since C++20)  
template< class Val >  
using wistream_view = ranges::basic_istream_view<Val, wchar_t>; |  (3)  |  (since C++20)  
Customization point objects |  |   
namespace views {  
template< class T >  
constexpr /* unspecified */ istream = /* unspecified */;  
} |  (4)  |  (since C++20)  
Helper concepts |  |   
template< class Val, class CharT, class Traits >  
concept /*stream-extractable*/ =  
requires([std::basic_istream](../io/basic_istream.html)<CharT, Traits>& is, Val& t) {  
is >> t;  
}; |  (5) | (exposition only*)  
| |   
  
1) A range factory that generates a sequence of elements by repeatedly calling operator>>.

2,3) Convenience alias templates for character types char and wchar_t.

4) views::istream<T>(e) is [expression-equivalent](../language/expressions.html#Expression-equivalence "cpp/language/expressions") to ranges::basic_istream_view<T, typename U::char_type, typename U::traits_type>(e) for any suitable subexpressions e, where `U` is [std::remove_reference_t](../types/remove_reference.html)<decltype(e)>.

The program is ill-formed if `U` is not both publicly and unambiguously derived from [std::basic_istream](../io/basic_istream.html)<typename U::char_type, typename U::traits_type>, which may result in a [substitution failure](../language/sfinae.html "cpp/language/sfinae").

5) The exposition-only concept /*stream-extractable*/<Val, CharT, Traits> is satisfied when lvalue of type `Val` can be extracted from lvalue of type [std::basic_istream](../io/basic_istream.html)<CharT, Traits>.

The iterator type of `basic_istream_view` is move-only: it does not meet the [LegacyIterator](../named_req/Iterator.html "cpp/named req/Iterator") requirements, and thus does not work with pre-C++20 [algorithms](../algorithm.html "cpp/algorithm"). 

## Contents

  * [1 Customization point objects](basic_istream_view.html#Customization_point_objects)
  * [2 Data members](basic_istream_view.html#Data_members)
  * [3 Member functions](basic_istream_view.html#Member_functions)
    * [3.1 Inherited from std::ranges::view_interface](basic_istream_view.html#Inherited_from_std::ranges::view_interface)
  * [4 std::ranges::basic_istream_view::basic_istream_view](basic_istream_view.html#std::ranges::basic_istream_view::basic_istream_view)
  * [5 std::ranges::basic_istream_view::begin](basic_istream_view.html#std::ranges::basic_istream_view::begin)
  * [6 std::ranges::basic_istream_view::end](basic_istream_view.html#std::ranges::basic_istream_view::end)
    * [6.1 Nested classes](basic_istream_view.html#Nested_classes)
    * [6.2 Example](basic_istream_view.html#Example)
    * [6.3 Defect reports](basic_istream_view.html#Defect_reports)
    * [6.4 See also](basic_istream_view.html#See_also)

  
---  
  
###  Customization point objects

The name `views::istream<T>` denotes a _customization point object_ , which is a const [function object](../named_req/FunctionObject.html "cpp/named req/FunctionObject") of a [literal](../named_req/LiteralType.html "cpp/named req/LiteralType") [`semiregular`](../concepts/semiregular.html "cpp/concepts/semiregular") class type. See [CustomizationPointObject](../named_req/CustomizationPointObject.html "cpp/named req/CustomizationPointObject") for details. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/basic_istream_view&action=edit&section=1 "Edit section: Data members")] Data members

Member  |  Definition   
---|---  
[std::basic_istream](../io/basic_istream.html)<CharT, Traits>* `_stream__` |  a pointer to the input stream  
(exposition-only member object*)  
`Val` `_value__` |  the stored value  
(exposition-only member object*)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/basic_istream_view&action=edit&section=2 "Edit section: Member functions")] Member functions

[ (constructor)](basic_istream_view.html#ctor "cpp/ranges/basic istream view") |  constructs a `basic_istream_view`   
(public member function)  
---|---  
[ begin](basic_istream_view.html#begin "cpp/ranges/basic istream view") |  returns an iterator   
(public member function)  
[ end](basic_istream_view.html#end "cpp/ranges/basic istream view") |  returns [std::default_sentinel](../iterator/default_sentinel.html "cpp/iterator/default sentinel")   
(public member function)  
  
#####  Inherited from [std::ranges::view_interface](view_interface.html "cpp/ranges/view interface")  
  
[ cbegin](view_interface/cbegin.html "cpp/ranges/view interface/cbegin")(C++23) |  returns a constant iterator to the beginning of the range   
(public member function of `std::ranges::view_interface<D>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/view_interface/dsc_cbegin&action=edit)  
[ cend](view_interface/cend.html "cpp/ranges/view interface/cend")(C++23) |  returns a sentinel for the constant iterator of the range   
(public member function of `std::ranges::view_interface<D>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/view_interface/dsc_cend&action=edit)  
Although [`basic_istream_view`](basic_istream_view.html#top) is derived from [std::ranges::view_interface](view_interface.html "cpp/ranges/view interface"), it cannot use any of inherited member functions.  | (until C++23)  
---|---  
  
##  std::ranges::basic_istream_view::basic_istream_view

constexpr explicit  
basic_istream_view( [std::basic_istream](../io/basic_istream.html)<CharT, Traits>& stream ); |  |  (since C++20)  
---|---|---  
| |   
  
Initializes `_[stream_](basic_istream_view.html#stream)_` with [std::addressof](../memory/addressof.html)(stream), and value-initializes `_[value_](basic_istream_view.html#value)_` ﻿. 

##  std::ranges::basic_istream_view::begin

constexpr auto begin(); |  |  (since C++20)  
---|---|---  
| |   
  
Equivalent to *`_[stream_](basic_istream_view.html#stream)_`` `>>` `` _[value_](basic_istream_view.html#value)_` ﻿; return` `[` _iterator_`](basic_istream_view/iterator.html "cpp/ranges/basic istream view/iterator") ﻿{*this};. 

##  std::ranges::basic_istream_view::end

constexpr [std::default_sentinel_t](../iterator/default_sentinel.html) end() const noexcept; |  |  (since C++20)  
---|---|---  
| |   
  
Returns [std::default_sentinel](../iterator/default_sentinel.html). 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/basic_istream_view&action=edit&section=3 "Edit section: Nested classes")] Nested classes

[_iterator_](basic_istream_view/iterator.html "cpp/ranges/basic istream view/iterator") |  the iterator type of `basic_istream_view`  
(exposition-only member class*)  
---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/basic_istream_view&action=edit&section=4 "Edit section: Example")] Example

Run this code
    
    
    #include <algorithm>
    #include <iomanip>
    #include <iostream>
    #include <iterator>
    #include <ranges>
    #include <sstream>
    #include <string>
     
    int main()
    {
        auto words = [std::istringstream](../io/basic_istringstream.html){"today is yesterday’s tomorrow"};
        for (const auto& s : std::views::istream<[std::string](../string/basic_string.html)>(words))
            [std::cout](../io/cout.html) << [std::quoted](../io/manip/quoted.html)(s, '/') << ' ';
        [std::cout](../io/cout.html) << '\n';
     
        auto floats = [std::istringstream](../io/basic_istringstream.html){"1.1  2.2\t3.3\v4.4\f55\n66\r7.7  8.8"};
        std::[ranges::copy](http://en.cppreference.com/w/cpp/ranges-algorithm-placeholder/copy)
        (
            std::views::istream<float>(floats),
            [std::ostream_iterator](../iterator/ostream_iterator.html)<float>{[std::cout](../io/cout.html), ", "}
        );
        [std::cout](../io/cout.html) << '\n';
    }

Output: 
    
    
    /today/ /is/ /yesterday’s/ /tomorrow/
    1.1, 2.2, 3.3, 4.4, 55, 66, 7.7, 8.8,

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/basic_istream_view&action=edit&section=5 "Edit section: Defect reports")] Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3568](https://cplusplus.github.io/LWG/issue3568) | C++20  | P2325R3 accidentally made the stored value default-initialized  | restored to value-initialization   
[P2325R3](https://wg21.link/P2325R3) | C++20  | default constructor was provided as  
[`view`](view.html "cpp/ranges/view") must be [`default_initializable`](../concepts/default_initializable.html "cpp/concepts/default initializable") | removed along with  
the requirement   
[P2432R1](https://wg21.link/P2432R1) | C++20  | `ranges::istream_view` was a function template  
and did not follow the naming convention  | made an alias template;  
customization point objects added   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/basic_istream_view&action=edit&section=6 "Edit section: See also")] See also

[ istream_iterator](../iterator/istream_iterator.html "cpp/iterator/istream iterator") |  input iterator that reads from [std::basic_istream](../io/basic_istream.html "cpp/io/basic istream")   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/iterator/dsc_istream_iterator&action=edit)  
---|---
