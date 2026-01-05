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
  
  
  


[`std::ranges::chunk_view`](../chunk_view.html "cpp/ranges/chunk view")

[Member functions](../chunk_view.html#Member_functions "cpp/ranges/chunk view")  
---  
[chunk_view::chunk_view](chunk_view.html "cpp/ranges/chunk view/chunk view")  
[chunk_view::base](base.html "cpp/ranges/chunk view/base")  
[chunk_view::begin](begin.html "cpp/ranges/chunk view/begin")  
[chunk_view::end](end.html "cpp/ranges/chunk view/end")  
[chunk_view::size](size.html "cpp/ranges/chunk view/size")  
[chunk_view::reserve_hint](reserve_hint.html "cpp/ranges/chunk view/reserve hint")(C++26)  
| Classes for [`input_range`s](../input_range.html "cpp/ranges/input range")  
---  
[Deduction guides](deduction_guides.html "cpp/ranges/chunk view/deduction guides")  
[_outer-iterator_](outer_iterator.html "cpp/ranges/chunk view/outer iterator")  
[chunk_view::_outer-iterator_ ::_outer-iterator_](outer_iterator/outer_iterator.html "cpp/ranges/chunk view/outer iterator/outer iterator")  
[chunk_view::_outer-iterator_ ::operator=](outer_iterator/operator=.html "cpp/ranges/chunk view/outer iterator/operator=")  
[chunk_view::_outer-iterator_ ::operator*](outer_iterator/operator*.html "cpp/ranges/chunk view/outer iterator/operator*")  
[chunk_view::_outer-iterator_ ::operator++  
chunk_view::_outer-iterator_ ::operator++(int)](outer_iterator/operator_inc.html "cpp/ranges/chunk view/outer iterator/operator inc")  
[operator==(chunk_view::_outer-iterator_)](outer_iterator/operator_cmp.html "cpp/ranges/chunk view/outer iterator/operator cmp")  
[operator-(chunk_view::_outer-iterator_)](outer_iterator/operator-.html "cpp/ranges/chunk view/outer iterator/operator-")  
[_outer-iterator_ ::value_type](outer_iterator/value_type.html "cpp/ranges/chunk view/outer iterator/value type")  
[chunk_view::_outer-iterator_ ::value_type::value_type` `](outer_iterator/value_type.html#ctor "cpp/ranges/chunk view/outer iterator/value type")  
[chunk_view::_outer-iterator_ ::value_type::begin](outer_iterator/value_type.html#begin "cpp/ranges/chunk view/outer iterator/value type")  
[chunk_view::_outer-iterator_ ::value_type::end](outer_iterator/value_type.html#end "cpp/ranges/chunk view/outer iterator/value type")  
[chunk_view::_outer-iterator_ ::value_type::size](outer_iterator/value_type.html#size "cpp/ranges/chunk view/outer iterator/value type")  
[_inner-iterator_](inner_iterator.html "cpp/ranges/chunk view/inner iterator")  
[chunk_view::_inner-iterator_ ::_inner-iterator_](inner_iterator/inner_iterator.html "cpp/ranges/chunk view/inner iterator/inner iterator")  
[chunk_view::_inner-iterator_ ::operator=](inner_iterator/operator=.html "cpp/ranges/chunk view/inner iterator/operator=")  
[chunk_view::_inner-iterator_ ::base](inner_iterator/base.html "cpp/ranges/chunk view/inner iterator/base")  
[chunk_view::_inner-iterator_ ::operator*](inner_iterator/operator*.html "cpp/ranges/chunk view/inner iterator/operator*")  
[chunk_view::_inner-iterator_ ::operator++  
chunk_view::_inner-iterator_ ::operator++(int)](inner_iterator/operator_inc.html "cpp/ranges/chunk view/inner iterator/operator inc")  
[operator==(chunk_view::_inner-iterator_)](inner_iterator/operator_cmp.html "cpp/ranges/chunk view/inner iterator/operator cmp")  
[operator-(chunk_view::_inner-iterator_)](inner_iterator/operator-.html "cpp/ranges/chunk view/inner iterator/operator-")  
[iter_move(chunk_view::_inner-iterator_)](inner_iterator/iter_move.html "cpp/ranges/chunk view/inner iterator/iter move")  
[iter_swap(chunk_view::_inner-iterator_)](inner_iterator/iter_swap.html "cpp/ranges/chunk view/inner iterator/iter swap")  
  
| Class template for  
[`forward_range`s](../forward_range.html "cpp/ranges/forward range")  
---  
**_iterator_**  
[chunk_view::_iterator_ ::_iterator_](iterator/iterator.html "cpp/ranges/chunk view/iterator/iterator")  
[chunk_view::_iterator_ ::base](iterator/base.html "cpp/ranges/chunk view/iterator/base")  
[chunk_view::_iterator_ ::operator*](iterator/operator*.html "cpp/ranges/chunk view/iterator/operator*")  
[chunk_view::_iterator_ ::operator[]](iterator/operator_at.html "cpp/ranges/chunk view/iterator/operator at")  
[chunk_view::_iterator_ ::operator++  
chunk_view::_iterator_ ::operator++(int)  
chunk_view::_iterator_ ::operator--  
chunk_view::_iterator_ ::operator--(int)  
chunk_view::_iterator_ ::operator+=  
chunk_view::_iterator_ ::operator-=](iterator/operator_arith.html "cpp/ranges/chunk view/iterator/operator arith")  
[operator==(chunk_view::_iterator_)  
operator<(chunk_view::_iterator_)  
operator>(chunk_view::_iterator_)  
operator<=(chunk_view::_iterator_)  
operator>=(chunk_view::_iterator_)  
operator<=>(chunk_view::_iterator_)](iterator/operator_cmp.html "cpp/ranges/chunk view/iterator/operator cmp")  
[operator+(chunk_view::_iterator_)  
operator-(chunk_view::_iterator_)](iterator/operator_arith2.html "cpp/ranges/chunk view/iterator/operator arith2")  
  
  
  
  
  
  
  
  
  
  
  
  
  


template< bool Const >  
class /*iterator*/ |  |  (since C++23)   
(exposition only*)  
---|---|---  
| |   
  
The return type of [`chunk_view::begin`](begin.html "cpp/ranges/chunk view/begin"), and of [`chunk_view::end`](end.html "cpp/ranges/chunk view/end") when the underlying view `V` is a [`common_range`](../common_range.html "cpp/ranges/common range"). 

Present only if `V` models [`forward_range`](../forward_range.html "cpp/ranges/forward range"). 

The type /*iterator*/<true> is returned by the const-qualified overloads. The type /*iterator*/<false> is returned by the non-const-qualified overloads. 

## Contents

  * [1 Member types](iterator.html#Member_types)
  * [2 Data members](iterator.html#Data_members)
  * [3 Member functions](iterator.html#Member_functions)
  * [4 Non-member functions](iterator.html#Non-member_functions)
  * [5 Example](iterator.html#Example)
  * [6 References](iterator.html#References)
  * [7 See also](iterator.html#See_also)

  
---  
  
### Member types

Member type  |  Definition   
---|---  
`_Parent_` (private) |  const chunk_view if `Const` is true, otherwise chunk_view.  
(exposition-only member type*)  
`_Base_` (private) |  const V if `Const` is true, otherwise V.  
(exposition-only member type*)  
`iterator_category` |  [std::input_iterator_tag](../../iterator/iterator_tags.html)  
`iterator_concept` | 

  * [std::random_access_iterator_tag](../../iterator/iterator_tags.html), if `_Base_` models [`random_access_range`](../random_access_range.html "cpp/ranges/random access range"). Otherwise, 
  * [std::bidirectional_iterator_tag](../../iterator/iterator_tags.html), if `_Base_` models [`bidirectional_range`](../bidirectional_range.html "cpp/ranges/bidirectional range"). Otherwise, 
  * [std::forward_iterator_tag](../../iterator/iterator_tags.html). 

  
`value_type` |  decltype([views::take](../take_view.html)([ranges::subrange](../subrange.html)(current_, end_), n_));.   
`difference_type` |  [ranges::range_difference_t](../range_size_t.html)<Base>  
  
### Data members

Member name  |  Definition   
---|---  
`_current__` (private) |  [ranges::iterator_t](../iterator_t.html)<Base>, holds an iterator to the first element of current chunk in the underlying sequence (i.e. the begin of a chunk).  
(exposition-only member object*)  
`_end__` (private) |  [ranges::sentinel_t](../iterator_t.html)<Base>, holds a sentinel to the end of the underlying sequence.  
(exposition-only member object*)  
`_n__` (private) |  [ranges::range_difference_t](../range_size_t.html)<Base>, holds initial number of elements in the chunk (the last chunk can be smaller).  
(exposition-only member object*)  
`_missing__` (private) |  [ranges::range_difference_t](../range_size_t.html)<Base>, usually equals to [ranges::advance](../../iterator/ranges/advance.html)(current_, n_, end_);.  
(exposition-only member object*)  
  
### Member functions

[ (constructor)](iterator/iterator.html "cpp/ranges/chunk view/iterator/iterator") |  constructs an iterator   
(public member function)  
---|---  
[ base](iterator/base.html "cpp/ranges/chunk view/iterator/base") |  returns an iterator to current element   
(public member function)  
[ operator*](iterator/operator*.html "cpp/ranges/chunk view/iterator/operator*") |  accesses the element   
(public member function)  
[ operator[]](iterator/operator_at.html "cpp/ranges/chunk view/iterator/operator at") |  accesses an element by index   
(public member function)  
[ operator++operator++(int)operator--operator--(int)operator+=operator-=](iterator/operator_arith.html "cpp/ranges/chunk view/iterator/operator arith") |  advances or decrements the underlying iterator   
(public member function)   
  
### Non-member functions

[ operator==operator<operator>operator<=operator>=operator<=>](iterator/operator_cmp.html "cpp/ranges/chunk view/iterator/operator cmp")(C++23) |  compares the underlying iterators   
(function)  
---|---  
[ operator+operator-](iterator/operator_arith2.html "cpp/ranges/chunk view/iterator/operator arith2")(C++23) |  performs iterator arithmetic   
(function)  
  
### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 26.7.28.7 Class template `chunk_view::iterator` for forward ranges [range.chunk.fwd.iter] 



### See also  
  
---
