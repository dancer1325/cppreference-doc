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
  


[Ranges library](../../ranges.html "cpp/ranges")

| [Range access](../../ranges.html#Range_access "cpp/ranges")  
---  
| [begin](../begin.html "cpp/ranges/begin")  
---  
[cbegin](../cbegin.html "cpp/ranges/cbegin")` `  
[end](../end.html "cpp/ranges/end")  
[cend](../cend.html "cpp/ranges/cend")  
  
| [rbegin](../rbegin.html "cpp/ranges/rbegin")  
---  
[crbegin](../crbegin.html "cpp/ranges/crbegin")` `  
[rend](../rend.html "cpp/ranges/rend")  
[crend](../crend.html "cpp/ranges/crend")  
  
| [size](../size.html "cpp/ranges/size")  
---  
[ssize](../ssize.html "cpp/ranges/ssize")` `  
[data](../data.html "cpp/ranges/data")  
[cdata](../cdata.html "cpp/ranges/cdata")  
  
| [reserve_hint](../reserve_hint.html "cpp/ranges/reserve hint")(C++26)` `  
---  
[empty](../empty.html "cpp/ranges/empty")  
  
  
  
  
  
| [Range conversions](../../ranges.html#Range_conversions "cpp/ranges")  
---  
[std::from_range_t  
std::from_range](../from_range.html "cpp/ranges/from range")(C++23)(C++23)` `  
[to](../to.html "cpp/ranges/to")(C++23)  
  
  
  
| [Dangling iterator handling](../../ranges.html#Dangling_iterator_handling "cpp/ranges")  
---  
[dangling](../dangling.html "cpp/ranges/dangling")  
[borrowed_iterator_t](../borrowed_iterator_t.html "cpp/ranges/borrowed iterator t")  
[borrowed_subrange_t](../borrowed_iterator_t.html "cpp/ranges/borrowed iterator t")  
  
  
  
[Range primitives](../../ranges.html#Range_primitives "cpp/ranges")  
---  
| [range_size_trange_difference_trange_value_t](../range_size_t.html "cpp/ranges/range size t")  
---  
[elements_of](../elements_of.html "cpp/ranges/elements of")(C++23)` `  
  
| [iterator_tconst_iterator_tsentinel_tconst_sentinel_t](../iterator_t.html "cpp/ranges/iterator t")(C++23)(C++23)` `  
---  
  
| [range_reference_trange_const_reference_trange_rvalue_reference_trange_common_reference_t](../range_reference_t.html "cpp/ranges/range reference t")(C++23)  
---  
  
[Range concepts](../../ranges.html#Range_concepts "cpp/ranges")  
---  
| [range](../range.html "cpp/ranges/range")  
---  
[borrowed_range](../borrowed_range.html "cpp/ranges/borrowed range")` `  
[common_range](../common_range.html "cpp/ranges/common range")  
  
| [sized_range](../sized_range.html "cpp/ranges/sized range")  
---  
[viewable_range](../viewable_range.html "cpp/ranges/viewable range")` `  
[view](../view.html "cpp/ranges/view")  
  
| [input_range](../input_range.html "cpp/ranges/input range")  
---  
[output_range](../output_range.html "cpp/ranges/output range")  
[forward_range](../forward_range.html "cpp/ranges/forward range")` `  
  
| [bidirectional_range](../bidirectional_range.html "cpp/ranges/bidirectional range")` `  
---  
[random_access_range](../random_access_range.html "cpp/ranges/random access range")  
[contiguous_range](../contiguous_range.html "cpp/ranges/contiguous range")  
  
| [approximately_sized_range](../approximately_sized_range.html "cpp/ranges/approximately sized range")(C++26)  
---  
[constant_range](../constant_range.html "cpp/ranges/constant range")(C++23)  
  
  
  
[Views](../../ranges.html#Views "cpp/ranges")  
---  
| [view_interface](../view_interface.html "cpp/ranges/view interface")` `  
---  
  
| [subrange](../subrange.html "cpp/ranges/subrange")  
---  
  
|  |   
  
---  
  
[Range factories](../../ranges.html#Range_factories "cpp/ranges")  
---  
| [empty_viewviews::empty](../empty_view.html "cpp/ranges/empty view")` `  
---  
  
| [single_viewviews::single](../single_view.html "cpp/ranges/single view")` `  
---  
  
| [basic_istream_viewviews::istream](../basic_istream_view.html "cpp/ranges/basic istream view")` `  
---  
  
| [iota_viewviews::iota](../iota_view.html "cpp/ranges/iota view")` `  
---  
  
| [repeat_viewviews::repeat](../repeat_view.html "cpp/ranges/repeat view")(C++23)(C++23)  
---  
  
[Range adaptors](../../ranges.html#Range_adaptors "cpp/ranges")  
---  
| [views::all_tviews::all](../all_view.html "cpp/ranges/all view")  
---  
[as_rvalue_viewviews::as_rvalue](../as_rvalue_view.html "cpp/ranges/as rvalue view")(C++23)(C++23)` `  
[filter_viewviews::filter](../filter_view.html "cpp/ranges/filter view")  
[transform_viewviews::transform](../transform_view.html "cpp/ranges/transform view")  
[take_viewviews::take](../take_view.html "cpp/ranges/take view")  
[take_while_viewviews::take_while](../take_while_view.html "cpp/ranges/take while view")  
[common_viewviews::common](../common_view.html "cpp/ranges/common view")  
[views::counted](../counted_view.html "cpp/ranges/view counted")  
[to_input_viewviews::to_input](../to_input_view.html "cpp/ranges/to input view")(C++26)(C++26)  
  
| [ref_view](../ref_view.html "cpp/ranges/ref view")  
---  
[drop_viewviews::drop](../drop_view.html "cpp/ranges/drop view")  
[drop_while_viewviews::drop_while](../drop_while_view.html "cpp/ranges/drop while view")  
[lazy_split_viewviews::lazy_split](../lazy_split_view.html "cpp/ranges/lazy split view")  
[split_viewviews::split](../split_view.html "cpp/ranges/split view")  
[join_viewviews::join](../join_view.html "cpp/ranges/join view")  
[join_with_viewviews::join_with](../join_with_view.html "cpp/ranges/join with view")(C++23)(C++23)` `  
[concat_viewviews::concat](../concat_view.html "cpp/ranges/concat view")(C++26)(C++26)  
[cache_latest_viewviews::cache_latest](../cache_latest_view.html "cpp/ranges/cache latest view")(C++26)(C++26)` `  
  
| [owning_view](../owning_view.html "cpp/ranges/owning view")  
---  
[reverse_viewviews::reverse](../reverse_view.html "cpp/ranges/reverse view")  
[as_const_viewviews::as_const](../as_const_view.html "cpp/ranges/as const view")(C++23)(C++23)  
[elements_viewviews::elements](../elements_view.html "cpp/ranges/elements view")  
[keys_viewviews::keys](../keys_view.html "cpp/ranges/keys view")  
[values_viewviews::values](../values_view.html "cpp/ranges/values view")  
[enumerate_viewviews::enumerate](../enumerate_view.html "cpp/ranges/enumerate view")(C++23)(C++23)  
[zip_viewviews::zip](../zip_view.html "cpp/ranges/zip view")(C++23)(C++23)  
[zip_transform_viewviews::zip_transform](../zip_transform_view.html "cpp/ranges/zip transform view")(C++23)(C++23)` `  
  
| [adjacent_viewviews::adjacent](../adjacent_view.html "cpp/ranges/adjacent view")(C++23)(C++23)  
---  
[views::pairwise](../adjacent_view.html "cpp/ranges/adjacent view")(C++23)  
[adjacent_transform_viewviews::adjacent_transform](../adjacent_transform_view.html "cpp/ranges/adjacent transform view")(C++23)(C++23)  
[views::pairwise_transform](../adjacent_transform_view.html "cpp/ranges/adjacent transform view")(C++23)  
[chunk_viewviews::chunk](../chunk_view.html "cpp/ranges/chunk view")(C++23)(C++23)  
[slide_viewviews::slide](../slide_view.html "cpp/ranges/slide view")(C++23)(C++23)  
[chunk_by_viewviews::chunk_by](../chunk_by_view.html "cpp/ranges/chunk by view")(C++23)(C++23)  
[stride_viewviews::stride](../stride_view.html "cpp/ranges/stride view")(C++23)(C++23)  
[cartesian_product_viewviews::cartesian_product](../cartesian_product_view.html "cpp/ranges/cartesian product view")(C++23)(C++23)  
  
  
  
| [Range generators](../../ranges.html#Range_generators "cpp/ranges")  
---  
[std::generator](../../coroutine/generator.html "cpp/coroutine/generator")(C++23)` `  
  
| [Range adaptor closure objects](../../ranges.html#Range_adaptor_closure_objects "cpp/ranges")  
---  
[range_adaptor_closure](../range_adaptor_closure.html "cpp/ranges/range adaptor closure")(C++23)` `  
  
| [Range adaptor objects](../../ranges.html#Range_adaptor_objects "cpp/ranges")  
---  
  
  
  
[Helper items](../../ranges.html#Helper_items "cpp/ranges")  
---  
| [_copyable-box_  
 _movable-box_](../copyable_wrapper.html "cpp/ranges/copyable wrapper")(until C++23)` `(C++23)  
---  
  
| [_simple-view_](../../ranges.html#Helper_concepts "cpp/ranges")  
---  
[_non-propagating-cache_](../non-propagating-cache.html "cpp/ranges/non-propagating-cache")  
  
|   
  
---  
  
  
  


[`std::ranges::iota_view`](../iota_view.html "cpp/ranges/iota view")

[Member functions](../iota_view.html#Member_functions "cpp/ranges/iota view")  
---  
[iota_view::iota_view](iota_view.html "cpp/ranges/iota view/iota view")  
[iota_view::begin](begin.html "cpp/ranges/iota view/begin")  
[iota_view::end](end.html "cpp/ranges/iota view/end")  
[iota_view::empty](empty.html "cpp/ranges/iota view/empty")  
[iota_view::size](size.html "cpp/ranges/iota view/size")  
[Deduction guides](deduction_guides.html "cpp/ranges/iota view/deduction guides")  
[Nested classes](../iota_view.html#Nested_classes "cpp/ranges/iota view")  
**_Iterator_**  
**Helper concepts**  
[_decrementable_](iterator.html#Version_decrementable "cpp/ranges/iota view/iterator")  
[_advanceable_](iterator.html#Version_advanceable "cpp/ranges/iota view/iterator")  
[Member types](iterator.html#Member_types "cpp/ranges/iota view/iterator")  
[Member functions](iterator.html#Member_functions "cpp/ranges/iota view/iterator")  
[iota_view::_iterator_ ::_iterator_](iterator.html#Member_functions "cpp/ranges/iota view/iterator")  
[iota_view::_iterator_ ::operator*](iterator.html#Member_functions "cpp/ranges/iota view/iterator")  
[iota_view::_iterator_ ::operator[]](iterator.html#Member_functions "cpp/ranges/iota view/iterator")  
[iota_view::_iterator_ ::operator++  
iota_view::_iterator_ ::operator++(int)](iterator.html#Member_functions "cpp/ranges/iota view/iterator")  
[iota_view::_iterator_ ::operator--  
iota_view::_iterator_ ::operator--(int)](iterator.html#Member_functions "cpp/ranges/iota view/iterator")  
[iota_view::_iterator_ ::operator+=](iterator.html#Member_functions "cpp/ranges/iota view/iterator")  
[iota_view::_iterator_ ::operator-=](iterator.html#Member_functions "cpp/ranges/iota view/iterator")  
[Non-member functions](iterator.html#Non-member_functions "cpp/ranges/iota view/iterator")  
[operator==(iota_view::_iterator_)  
operator<(iota_view::_iterator_)  
operator>(iota_view::_iterator_)  
operator<=(iota_view::_iterator_)  
operator>=(iota_view::_iterator_)  
operator<=>(iota_view::_iterator_)](iterator.html#Non-member_functions "cpp/ranges/iota view/iterator")  
[operator+(iota_view::_iterator_)](iterator.html#Non-member_functions "cpp/ranges/iota view/iterator")  
[operator-(iota_view::_iterator_)](iterator.html#Non-member_functions "cpp/ranges/iota view/iterator")  
[_Sentinel_](sentinel.html "cpp/ranges/iota view/sentinel")  
[Member functions](sentinel.html#Member_functions "cpp/ranges/iota view/sentinel")  
[iota_view::_sentinel_ ::_sentinel_](sentinel.html#Member_functions "cpp/ranges/iota view/sentinel")  
[Non-member functions](sentinel.html#Non-member_functions "cpp/ranges/iota view/sentinel")  
[operator==(iota_view::_iterator_ ,iota_view::_sentinel_)](sentinel.html#Non-member_functions "cpp/ranges/iota view/sentinel")  
[operator-(iota_view::_iterator_ ,iota_view::_sentinel_)](sentinel.html#Non-member_functions "cpp/ranges/iota view/sentinel")  
  


struct /*iterator*/; |  (1) | (exposition only*)  
---|---|---  
Helper alias templates |  |   
template< class I >  
using /*iota-diff-t*/ = /* see below */; |  (2) | (exposition only*)  
Helper concepts |  |   
template< class I >  
concept /*decrementable*/ =  
[std::incrementable](../../iterator/incrementable.html)<I> && requires(I i) {  
{ \--i } -> [std::same_as](../../concepts/same_as.html)<I&>;  
{ i\-- } -> [std::same_as](../../concepts/same_as.html)<I>;  
}; |  (3) | (exposition only*)  
template< class I >  
concept /*advanceable*/ =  
/*decrementable*/<I> && [std::totally_ordered](../../concepts/totally_ordered.html)<I> &&  
requires(I i, const I j, const /*iota-diff-t*/<I> n) {  
{ i += n } -> [std::same_as](../../concepts/same_as.html)<I&>;  
{ i -= n } -> [std::same_as](../../concepts/same_as.html)<I&>;  
I(j + n);  
I(n + j);  
I(j - n);  
{ j - j } -> [std::convertible_to](../../concepts/convertible_to.html)</*iota-diff-t*/<I>>;  
}; |  (4) | (exposition only*)  
| |   
  
1) [ranges::iota_view](../iota_view.html)<W, Bound>::`_iterator_` is the type of the iterators returned by [`begin()`](begin.html "cpp/ranges/iota view/begin") and [`end()`](end.html "cpp/ranges/iota view/end") of [ranges::iota_view](../iota_view.html)<W, Bound>.

2) Calculates the difference type for both iterator types and [integer-like types](../../iterator/is-integer-like.html "cpp/iterator/is-integer-like"). 

  * If `I` is not an integral type, or if it is an integral type and sizeof([std::iter_difference_t](../../iterator/iter_t.html)<I>) is greater than sizeof(I), then /*iota-diff-t*/<I> is [std::iter_difference_t](../../iterator/iter_t.html)<I>. 
  * Otherwise, /*iota-diff-t*/<I> is a signed integer type of width greater than the width of `I` if such a type exists. 
  * Otherwise, `I` is one of the widest integral types, and /*iota-diff-t*/<I> is an unspecified [signed-integer-like type](../../iterator/is-integer-like.html "cpp/iterator/is-integer-like") of width not less than the width of `I`. It is unspecified whether /*iota-diff-t*/<I> models [`weakly_incrementable`](../../iterator/weakly_incrementable.html "cpp/iterator/weakly incrementable") in this case.



3) Specifies that a type is [`incrementable`](../../iterator/incrementable.html "cpp/iterator/incrementable"), and pre- and post- operator\-- for the type have common meaning.

4) Specifies that a type is both `_[decrementable](iterator.html#decrementable)_` and [`totally_ordered`](../../concepts/totally_ordered.html "cpp/concepts/totally ordered"), and operator+=, operator-=, operator+, and operator- among the type and its different type have common meaning.

/*iterator*/ models 

  * [`random_access_iterator`](../../iterator/random_access_iterator.html "cpp/iterator/random access iterator") if W models `_[advanceable](iterator.html#advanceable)_` (4), 
  * [`bidirectional_iterator`](../../iterator/bidirectional_iterator.html "cpp/iterator/bidirectional iterator") if W models `_[decrementable](iterator.html#decrementable)_` (3), 
  * [`forward_iterator`](../../iterator/forward_iterator.html "cpp/iterator/forward iterator") if W models [`incrementable`](../../iterator/incrementable.html "cpp/iterator/incrementable"), and 
  * [`input_iterator`](../../iterator/input_iterator.html "cpp/iterator/input iterator") otherwise. 



However, it only satisfies [LegacyInputIterator](../../named_req/InputIterator.html "cpp/named req/InputIterator") if `W` models [`incrementable`](../../iterator/incrementable.html "cpp/iterator/incrementable"), and does not satisfy [LegacyInputIterator](../../named_req/InputIterator.html "cpp/named req/InputIterator") otherwise. 

## Contents

  * [1 Semantic requirements](iterator.html#Semantic_requirements)
  * [2 Nested types](iterator.html#Nested_types)
    * [2.1 Determining the iterator concept](iterator.html#Determining_the_iterator_concept)
  * [3 Data members](iterator.html#Data_members)
  * [4 Member functions](iterator.html#Member_functions)
  * [5 std::ranges::iota_view::_iterator_ ::_iterator_](iterator.html#std::ranges::iota_view::iterator::iterator)
  * [6 std::ranges::iota_view::_iterator_ ::operator*](iterator.html#std::ranges::iota_view::iterator::operator.2A)
    * [6.1 Example](iterator.html#Example)
  * [7 std::ranges::iota_view::_iterator_ ::operator++](iterator.html#std::ranges::iota_view::iterator::operator.2B.2B)
    * [7.1 Example](iterator.html#Example_2)
  * [8 std::ranges::iota_view::_iterator_ ::operator--](iterator.html#std::ranges::iota_view::iterator::operator--)
    * [8.1 Example](iterator.html#Example_3)
  * [9 std::ranges::iota_view::_iterator_ ::operator+=](iterator.html#std::ranges::iota_view::iterator::operator.2B.3D)
    * [9.1 Example](iterator.html#Example_4)
  * [10 std::ranges::iota_view::_iterator_ ::operator-=](iterator.html#std::ranges::iota_view::iterator::operator-.3D)
    * [10.1 Example](iterator.html#Example_5)
  * [11 std::ranges::iota_view::_iterator_ ::operator[]](iterator.html#std::ranges::iota_view::iterator::operator.5B.5D)
    * [11.1 Example](iterator.html#Example_6)
    * [11.2 Non-member functions](iterator.html#Non-member_functions)
  * [12 operator==, <, >, <=, >=, <=>(std::ranges::iota_view::_iterator_)](iterator.html#operator.3D.3D.2C_.3C.2C_.3E.2C_.3C.3D.2C_.3E.3D.2C_.3C.3D.3E.28std::ranges::iota_view::iterator.29)
  * [13 operator+(std::ranges::iota_view::_iterator_)](iterator.html#operator.2B.28std::ranges::iota_view::iterator.29)
  * [14 operator-(std::ranges::iota_view::_iterator_)](iterator.html#operator-.28std::ranges::iota_view::iterator.29)
    * [14.1 Defect reports](iterator.html#Defect_reports)

  
---  
  
### Semantic requirements

3) Type `I` models `_decrementable_` only if `I` satisfies `_decrementable_` and all concepts it subsumes are modeled, and given equal objects a and b of type `I`: 

  * If a and b are in the domain of both pre- and post- operator\-- (i.e. they are decrementable), then the following are all true: 
    * [std::addressof](../../memory/addressof.html)(\--a) == [std::addressof](../../memory/addressof.html)(a), 
    * bool(a\-- == b), 
    * bool(((void)a\--, a) == \--b), 
    * bool(++(\--a) == b). 
  * If a and b are in the domain of both pre- and post- operator++ (i.e. they are incrementable), then bool(\--(++a) == b) is true.



4) Let `D` denote /*iota-diff-t*/<I>. Type `I` models `_[advanceable](iterator.html#advanceable)_` only if `I` satisfies `_[advanceable](iterator.html#advanceable)_` and all concepts it subsumes are modeled, and given 

  * objects a and b of type `I` and 
  * value n of type `D`, 



such that b is reachable from a after n applications of ++a, all following conditions are satisfied: 

  * (a += n) is equal to b. 
  * [std::addressof](../../memory/addressof.html)(a += n) is equal to [std::addressof](../../memory/addressof.html)(a). 
  * I(a + n) is equal to (a += n). 
  * For any two positive values x and y of type `D`, if I(a + D(x + y)) is well-defined, then I(a + D(x + y)) is equal to I(I(a + x) + y). 
  * I(a + D(0)) is equal to a. 
  * If I(a + D(n - 1)) is well-defined, then I(a + n) is equal to [](I c) { return ++c; }(I(a + D(n - 1))). 
  * (b += -n) is equal to a. 
  * (b -= n) is equal to a. 
  * [std::addressof](../../memory/addressof.html)(b -= n) is equal to [std::addressof](../../memory/addressof.html)(b). 
  * I(b - n) is equal to (b -= n). 
  * D(b - a) is equal to n. 
  * D(a - b) is equal to D(-n). 
  * bool(a <= b) is true.



### Nested types

Type  |  Definition   
---|---  
`iterator_concept` |  an [iterator tag](../../iterator/iterator_tags.html "cpp/iterator/iterator tags"), see below   
`iterator_category`  
(only present if `W` models [`incrementable`](../../iterator/incrementable.html "cpp/iterator/incrementable") and  
/*iota-diff-t*/<W> is an integral type) |  [std::input_iterator_tag](../../iterator/iterator_tags.html "cpp/iterator/iterator tags")  
`value_type` |  `W`  
`difference_type` |  /*iota-diff-t*/<W>  
  
#### Determining the iterator concept

`iterator_concept` is defined as follows: 

  * If `W` models `_[advanceable](iterator.html#advanceable)_`, `iterator_concept` denotes [std::random_access_iterator_tag](../../iterator/iterator_tags.html "cpp/iterator/iterator tags"). 
  * Otherwise, if `W` models `_[decrementable](iterator.html#decrementable)_`, `iterator_concept` denotes [std::bidirectional_iterator_tag](../../iterator/iterator_tags.html "cpp/iterator/iterator tags"). 
  * Otherwise, if `W` models [`incrementable`](../../iterator/incrementable.html "cpp/iterator/incrementable"), `iterator_concept` denotes [std::forward_iterator_tag](../../iterator/iterator_tags.html "cpp/iterator/iterator tags"). 
  * Otherwise, `iterator_concept` denotes [std::input_iterator_tag](../../iterator/iterator_tags.html "cpp/iterator/iterator tags"). 



### Data members

Member  |  Definition   
---|---  
`W` `_value__` |  the current value  
(exposition-only member object*)  
  
### Member functions

##  std::ranges::iota_view::_iterator_ ::_iterator_

/*iterator*/() requires [std::default_initializable](../../concepts/default_initializable.html)<W> = default; |  (1)  |  (since C++20)  
---|---|---  
constexpr explicit /*iterator*/( W value ); |  (2)  |  (since C++20)  
| |   
  
1) Value initializes `_[value_](iterator.html#value)_`.

2) Initializes `_[value_](iterator.html#value)_` with value. 

##  std::ranges::iota_view::_iterator_ ::operator*

constexpr W operator*() const  
noexcept([std::is_nothrow_copy_constructible_v](../../types/is_copy_constructible.html)<W>); |  |  (since C++20)  
---|---|---  
| |   
  
Returns `_[value_](iterator.html#value)_`. 

###  Example

Run this code
    
    
    #include <cassert>
    #include <ranges>
     
    int main()
    {
        auto it{std::[views::iota](../iota_view.html)(6, 9).begin()};
        const int& r = *it; // binds with temporary
        [assert](../../error/assert.html)(*it == 6 and r == 6);
        ++it;
        [assert](../../error/assert.html)(*it == 7 and r == 6);
    }

##  std::ranges::iota_view::_iterator_ ::operator++

constexpr /*iterator*/& operator++(); |  (1)  |  (since C++20)  
---|---|---  
constexpr void operator++(int); |  (2)  |  (since C++20)  
constexpr /*iterator*/ operator++(int) requires [std::incrementable](../../iterator/incrementable.html)<W>; |  (3)  |  (since C++20)  
| |   
  
1) Equivalent to ++`_[value_](iterator.html#value)_` ﻿; return *this;.

2) Equivalent to ++`_[value_](iterator.html#value)_` ﻿;.

3) Equivalent to auto tmp = *this; ++`_[value_](iterator.html#value)_` ﻿; return tmp;.

###  Example

Run this code
    
    
    #include <cassert>
    #include <ranges>
     
    int main()
    {
        auto it{std::[views::iota](../iota_view.html)(8).begin()};
        [assert](../../error/assert.html)(*it == 8);
        [assert](../../error/assert.html)(*++it == 9);
        [assert](../../error/assert.html)(*it++ == 9);
        [assert](../../error/assert.html)(*it == 10);
    }

##  std::ranges::iota_view::_iterator_ ::operator--

constexpr /*iterator*/& operator\--() requires /*decrementable*/<W>; |  (1)  |  (since C++20)  
---|---|---  
constexpr /*iterator*/operator\--(int) requires /*decrementable*/<W>; |  (2)  |  (since C++20)  
| |   
  
1) Equivalent to \--`_[value_](iterator.html#value)_` ﻿; return *this;.

2) Equivalent to auto tmp = *this; \--`_[value_](iterator.html#value)_` ﻿; return tmp;.

###  Example

Run this code
    
    
    #include <cassert>
    #include <ranges>
     
    int main()
    {
        auto it{std::[views::iota](../iota_view.html)(8).begin()};
        [assert](../../error/assert.html)(*it == 8);
        [assert](../../error/assert.html)(*--it == 7);
        [assert](../../error/assert.html)(*it-- == 7);
        [assert](../../error/assert.html)(*it == 6);
    }

##  std::ranges::iota_view::_iterator_ ::operator+=

constexpr /*iterator*/& operator+=( difference_type n )  
requires /*advanceable*/<W>; |  |  (since C++20)  
---|---|---  
| |   
  
Updates `_[value_](iterator.html#value)_` and returns *this: 

  * If `W` is an [unsigned-integer-like type](../../iterator/is-integer-like.html "cpp/iterator/is-integer-like"): 
    * If n is non-negative, performs `_[value_](iterator.html#value)_`` `+= static_cast<W>(n). 
    * Otherwise, performs `_[value_](iterator.html#value)_`` `-= static_cast<W>(-n). 
  * Otherwise, performs `_[value_](iterator.html#value)_`` `+= n. 



###  Example

Run this code
    
    
    #include <cassert>
    #include <ranges>
     
    int main()
    {
        auto it{std::[views::iota](../iota_view.html)(5).begin()};
        [assert](../../error/assert.html)(*it == 5);
        [assert](../../error/assert.html)(*(it += 3) == 8);
    }

##  std::ranges::iota_view::_iterator_ ::operator-=

constexpr /*iterator*/& operator-=( difference_type n )  
requires /*advanceable*/<W>; |  |  (since C++20)  
---|---|---  
| |   
  
Updates `_[value_](iterator.html#value)_` and returns *this: 

  * If `W` is an [unsigned-integer-like type](../../iterator/is-integer-like.html "cpp/iterator/is-integer-like"): 
    * If n is non-negative, performs `_[value_](iterator.html#value)_`` `-= static_cast<W>(n). 
    * Otherwise, performs `_[value_](iterator.html#value)_`` `+= static_cast<W>(-n). 
  * Otherwise, performs `_[value_](iterator.html#value)_`` `-= n. 



###  Example

Run this code
    
    
    #include <cassert>
    #include <ranges>
     
    int main()
    {
        auto it{std::[views::iota](../iota_view.html)(6).begin()};
        [assert](../../error/assert.html)(*it == 6);
        [assert](../../error/assert.html)(*(it -= -3) == 9);
    }

##  std::ranges::iota_view::_iterator_ ::operator[]

constexpr W operator[]( difference_type n ) const  
requires /*advanceable*/<W>; |  |  (since C++20)  
---|---|---  
| |   
  
Returns W(`_[value_](iterator.html#value)_`` `+ n). 

###  Example

Run this code
    
    
    #include <cassert>
    #include <ranges>
     
    int main()
    {
        auto it{std::[views::iota](../iota_view.html)(6).begin()};
        [assert](../../error/assert.html)(*it == 6);
        [assert](../../error/assert.html)(*(it + 3) == 9);
    }

### Non-member functions

##  operator==, <, >, <=, >=, <=>(std::ranges::iota_view::_iterator_)

friend constexpr bool operator==  
( const /*iterator*/& x, const /*iterator*/& y )  
requires [std::equality_comparable](../../concepts/equality_comparable.html)<W>; |  (1)  |  (since C++20)  
---|---|---  
friend constexpr bool operator<  
( const /*iterator*/& x, const /*iterator*/& y )  
requires [std::totally_ordered](../../concepts/totally_ordered.html)<W>; |  (2)  |  (since C++20)  
friend constexpr bool operator>  
( const /*iterator*/& x, const /*iterator*/& y )  
requires [std::totally_ordered](../../concepts/totally_ordered.html)<W>; |  (3)  |  (since C++20)  
friend constexpr bool operator<=  
( const /*iterator*/& x, const /*iterator*/& y )  
requires [std::totally_ordered](../../concepts/totally_ordered.html)<W>; |  (4)  |  (since C++20)  
friend constexpr bool operator>=  
( const /*iterator*/& x, const /*iterator*/& y )  
requires [std::totally_ordered](../../concepts/totally_ordered.html)<W>; |  (5)  |  (since C++20)  
friend constexpr bool operator<=>  
( const /*iterator*/& x, const /*iterator*/& y )  
requires [std::totally_ordered](../../concepts/totally_ordered.html)<W> && [std::three_way_comparable](../../utility/compare/three_way_comparable.html)<W>; |  (6)  |  (since C++20)  
| |   
  
1) Returns x.`_[value_](iterator.html#value)_`` `== y.`_[value_](iterator.html#value)_`.

2) Returns x.`_[value_](iterator.html#value)_`` `< y.`_[value_](iterator.html#value)_`.

3) Returns y < x.

4) Returns !(y < x).

5) Returns !(x < y).

6) Returns x.`_[value_](iterator.html#value)_`` `<=> y.`_[value_](iterator.html#value)_`.

The `!=` operator is [synthesized](../../language/default_comparisons.html#Other_defaulted_comparison_operators "cpp/language/default comparisons") from `operator==`. 

These functions are not visible to ordinary [unqualified](../../language/unqualified_lookup.html "cpp/language/unqualified lookup") or [qualified lookup](../../language/qualified_lookup.html "cpp/language/qualified lookup"), and can only be found by [argument-dependent lookup](../../language/adl.html "cpp/language/adl") when _iterator_ is an associated class of the arguments. 

##  operator+(std::ranges::iota_view::_iterator_)

friend constexpr /*iterator*/ operator+  
( /*iterator*/ i, difference_type n )  
requires /*advanceable*/<W>; |  (1)  |  (since C++20)  
---|---|---  
friend constexpr /*iterator*/ operator+  
( difference_type n, /*iterator*/ i )  
requires /*advanceable*/<W>; |  (2)  |  (since C++20)  
| |   
  
Equivalent to i += n; return i;. 

These functions are not visible to ordinary [unqualified](../../language/unqualified_lookup.html "cpp/language/unqualified lookup") or [qualified lookup](../../language/qualified_lookup.html "cpp/language/qualified lookup"), and can only be found by [argument-dependent lookup](../../language/adl.html "cpp/language/adl") when _iterator_ is an associated class of the arguments. 

##  operator-(std::ranges::iota_view::_iterator_)

friend constexpr /*iterator*/ operator-  
( /*iterator*/ i, difference_type n )  
requires /*advanceable*/<W>; |  (1)  |  (since C++20)  
---|---|---  
friend constexpr difference_type operator-  
( const /*iterator*/& x, const /*iterator*/& y )  
requires /*advanceable*/<W>; |  (2)  |  (since C++20)  
| |   
  
1) Equivalent to i -= n; return i;.

2) Let `D` be `difference_type`: 

  * If `W` is an [integer-like type](../../iterator/is-integer-like.html "cpp/iterator/is-integer-like"): 
    * If `W` is signed-integer-like, returns D(D(x.`_[value_](iterator.html#value)_` ﻿) - D(y.`_[value_](iterator.html#value)_` ﻿)). 
    * Otherwise, returns y.`_[value_](iterator.html#value)_`` `> x.`_[value_](iterator.html#value)_`` `? D(-D(y.`_[value_](iterator.html#value)_`` `- x.`_[value_](iterator.html#value)_` ﻿)) : D(x.`_[value_](iterator.html#value)_`` `- y.`_[value_](iterator.html#value)_` ﻿). 
  * Otherwise, returns x.`_[value_](iterator.html#value)_`` `- y.`_[value_](iterator.html#value)_`.



These functions are not visible to ordinary [unqualified](../../language/unqualified_lookup.html "cpp/language/unqualified lookup") or [qualified lookup](../../language/qualified_lookup.html "cpp/language/qualified lookup"), and can only be found by [argument-dependent lookup](../../language/adl.html "cpp/language/adl") when _iterator_ is an associated class of the arguments. 

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[P2259R1](https://wg21.link/P2259R1) | C++20  | member `[iterator_category](iterator.html#iterator_category)` is always defined  | defined only if `W` satisfies [`incrementable`](../../iterator/incrementable.html "cpp/iterator/incrementable")  
[LWG 3580](https://cplusplus.github.io/LWG/issue3580) | C++20  | bodies of operator+ and operator- rule out [implicit move](../../language/return.html#Automatic_move_from_local_variables_and_parameters "cpp/language/return") | made suitable for implicit move 
