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
  
| [basic_istream_viewviews::istream](basic_istream_view.html "cpp/ranges/basic istream view")` `  
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
**chunk_view views::chunk**(C++23)(C++23)  
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
  
  
  


**`std::ranges::chunk_view`**

[Member functions](chunk_view.html#Member_functions "cpp/ranges/chunk view")  
---  
[chunk_view::chunk_view](chunk_view/chunk_view.html "cpp/ranges/chunk view/chunk view")  
[chunk_view::base](chunk_view/base.html "cpp/ranges/chunk view/base")  
[chunk_view::begin](chunk_view/begin.html "cpp/ranges/chunk view/begin")  
[chunk_view::end](chunk_view/end.html "cpp/ranges/chunk view/end")  
[chunk_view::size](chunk_view/size.html "cpp/ranges/chunk view/size")  
[chunk_view::reserve_hint](chunk_view/reserve_hint.html "cpp/ranges/chunk view/reserve hint")(C++26)  
| Classes for [`input_range`s](input_range.html "cpp/ranges/input range")  
---  
[Deduction guides](chunk_view/deduction_guides.html "cpp/ranges/chunk view/deduction guides")  
[_outer-iterator_](chunk_view/outer_iterator.html "cpp/ranges/chunk view/outer iterator")  
[chunk_view::_outer-iterator_ ::_outer-iterator_](chunk_view/outer_iterator/outer_iterator.html "cpp/ranges/chunk view/outer iterator/outer iterator")  
[chunk_view::_outer-iterator_ ::operator=](chunk_view/outer_iterator/operator=.html "cpp/ranges/chunk view/outer iterator/operator=")  
[chunk_view::_outer-iterator_ ::operator*](chunk_view/outer_iterator/operator*.html "cpp/ranges/chunk view/outer iterator/operator*")  
[chunk_view::_outer-iterator_ ::operator++  
chunk_view::_outer-iterator_ ::operator++(int)](chunk_view/outer_iterator/operator_inc.html "cpp/ranges/chunk view/outer iterator/operator inc")  
[operator==(chunk_view::_outer-iterator_)](chunk_view/outer_iterator/operator_cmp.html "cpp/ranges/chunk view/outer iterator/operator cmp")  
[operator-(chunk_view::_outer-iterator_)](chunk_view/outer_iterator/operator-.html "cpp/ranges/chunk view/outer iterator/operator-")  
[_outer-iterator_ ::value_type](chunk_view/outer_iterator/value_type.html "cpp/ranges/chunk view/outer iterator/value type")  
[chunk_view::_outer-iterator_ ::value_type::value_type` `](chunk_view/outer_iterator/value_type.html#ctor "cpp/ranges/chunk view/outer iterator/value type")  
[chunk_view::_outer-iterator_ ::value_type::begin](chunk_view/outer_iterator/value_type.html#begin "cpp/ranges/chunk view/outer iterator/value type")  
[chunk_view::_outer-iterator_ ::value_type::end](chunk_view/outer_iterator/value_type.html#end "cpp/ranges/chunk view/outer iterator/value type")  
[chunk_view::_outer-iterator_ ::value_type::size](chunk_view/outer_iterator/value_type.html#size "cpp/ranges/chunk view/outer iterator/value type")  
[_inner-iterator_](chunk_view/inner_iterator.html "cpp/ranges/chunk view/inner iterator")  
[chunk_view::_inner-iterator_ ::_inner-iterator_](chunk_view/inner_iterator/inner_iterator.html "cpp/ranges/chunk view/inner iterator/inner iterator")  
[chunk_view::_inner-iterator_ ::operator=](chunk_view/inner_iterator/operator=.html "cpp/ranges/chunk view/inner iterator/operator=")  
[chunk_view::_inner-iterator_ ::base](chunk_view/inner_iterator/base.html "cpp/ranges/chunk view/inner iterator/base")  
[chunk_view::_inner-iterator_ ::operator*](chunk_view/inner_iterator/operator*.html "cpp/ranges/chunk view/inner iterator/operator*")  
[chunk_view::_inner-iterator_ ::operator++  
chunk_view::_inner-iterator_ ::operator++(int)](chunk_view/inner_iterator/operator_inc.html "cpp/ranges/chunk view/inner iterator/operator inc")  
[operator==(chunk_view::_inner-iterator_)](chunk_view/inner_iterator/operator_cmp.html "cpp/ranges/chunk view/inner iterator/operator cmp")  
[operator-(chunk_view::_inner-iterator_)](chunk_view/inner_iterator/operator-.html "cpp/ranges/chunk view/inner iterator/operator-")  
[iter_move(chunk_view::_inner-iterator_)](chunk_view/inner_iterator/iter_move.html "cpp/ranges/chunk view/inner iterator/iter move")  
[iter_swap(chunk_view::_inner-iterator_)](chunk_view/inner_iterator/iter_swap.html "cpp/ranges/chunk view/inner iterator/iter swap")  
  
| Class template for  
[`forward_range`s](forward_range.html "cpp/ranges/forward range")  
---  
[_iterator_](chunk_view/iterator.html "cpp/ranges/chunk view/iterator")  
[chunk_view::_iterator_ ::_iterator_](chunk_view/iterator/iterator.html "cpp/ranges/chunk view/iterator/iterator")  
[chunk_view::_iterator_ ::base](chunk_view/iterator/base.html "cpp/ranges/chunk view/iterator/base")  
[chunk_view::_iterator_ ::operator*](chunk_view/iterator/operator*.html "cpp/ranges/chunk view/iterator/operator*")  
[chunk_view::_iterator_ ::operator[]](chunk_view/iterator/operator_at.html "cpp/ranges/chunk view/iterator/operator at")  
[chunk_view::_iterator_ ::operator++  
chunk_view::_iterator_ ::operator++(int)  
chunk_view::_iterator_ ::operator--  
chunk_view::_iterator_ ::operator--(int)  
chunk_view::_iterator_ ::operator+=  
chunk_view::_iterator_ ::operator-=](chunk_view/iterator/operator_arith.html "cpp/ranges/chunk view/iterator/operator arith")  
[operator==(chunk_view::_iterator_)  
operator<(chunk_view::_iterator_)  
operator>(chunk_view::_iterator_)  
operator<=(chunk_view::_iterator_)  
operator>=(chunk_view::_iterator_)  
operator<=>(chunk_view::_iterator_)](chunk_view/iterator/operator_cmp.html "cpp/ranges/chunk view/iterator/operator cmp")  
[operator+(chunk_view::_iterator_)  
operator-(chunk_view::_iterator_)](chunk_view/iterator/operator_arith2.html "cpp/ranges/chunk view/iterator/operator arith2")  
  
  
  
  
  
  
  
  
  
  
  
  
  


Defined in header `[<ranges>](../header/ranges.html "cpp/header/ranges")` |  |   
---|---|---  
template< [ranges::view](view.html) V >  
requires [ranges::input_range](input_range.html)<V>  
class chunk_view  
: public [ranges::view_interface](view_interface.html)<chunk_view<V>> |  (1) | (since C++23)  
template< [ranges::view](view.html) V >  
requires [ranges::forward_range](forward_range.html)<V>  
class chunk_view<V>  
: public [ranges::view_interface](view_interface.html)<chunk_view<V>> |  (2) | (since C++23)  
namespace views {  
inline constexpr /* unspecified */ chunk = /* unspecified */;  
} |  (3)  |  (since C++23)  
Call signature |  |   
template< [ranges::viewable_range](viewable_range.html) R >  
constexpr [ranges::view](view.html) auto chunk( R&& r, [ranges::range_difference_t](range_size_t.html)<R> n ); |  |  (since C++23)  
template< class DifferenceType >  
constexpr /*range adaptor closure*/ chunk( DifferenceType&& n ); |  |  (since C++23)  
Helper templates |  |   
template< class I >   
constexpr I /*div-ceil*/( I num, I denom ); |  (4) | (exposition only*)  
| |   
  
`chunk_view` takes a [`view`](view.html "cpp/ranges/view") and a number n and produces a range of views (the _chunks ﻿_) of the original view, such that each _chunk ﻿_ , except maybe the last one, has the size `n`. These _chunks_ are non-overlapping, successive sub-ranges of the elements of the original view, in order. 

Let `_s_` be the size of the original view. If `_s_` is not the multiple of n, the size of the _last_ produced view is exactly s % n (the remainder). Otherwise, the size of each _chunk ﻿_ , including the last one, is n. 

The size of produced view is /*div-ceil*/(s). 

If the n is not greater than ​0​ the behavior is undefined. 

1) An implementation that supports the underlying view `V` that models only [`input_range`](input_range.html "cpp/ranges/input range").

2) A partial specialization that supports the underlying view `V` that models [`forward_range`](forward_range.html "cpp/ranges/forward range") or stronger. Models [`common_range`](common_range.html "cpp/ranges/common range") if the underlying view `V` is [`forward_range`](forward_range.html "cpp/ranges/forward range"), [`common_range`](common_range.html "cpp/ranges/common range"), and either [`sized_range`](sized_range.html "cpp/ranges/sized range") or non [`bidirectional_range`](bidirectional_range.html "cpp/ranges/bidirectional range").

3) The name views::chunk denotes a [RangeAdaptorObject](../named_req/RangeAdaptorObject.html "cpp/named req/RangeAdaptorObject"). Given subexpressions e and n, the expression views::chunk(e, n) is [expression-equivalent](../language/expressions.html#Expression-equivalence "cpp/language/expressions") to chunk_view(e, n).

4) Computes the smallest integer value that is not less than the quotient of dividing num by denom. Equivalent to: 
    
    
    I r = num / denom;
    if (num % denom)
        ++r;
    return r;

## Contents

  * [1 Data members](chunk_view.html#Data_members)
    * [1.1 If V models exactly input_range (1)](chunk_view.html#If_V_models_exactly_input_range_.281.29)
  * [2 Member functions](chunk_view.html#Member_functions)
    * [2.1 Inherited from std::ranges::view_interface](chunk_view.html#Inherited_from_std::ranges::view_interface)
  * [3 Deduction guides](chunk_view.html#Deduction_guides)
  * [4 Nested classes](chunk_view.html#Nested_classes)
  * [5 Helper templates](chunk_view.html#Helper_templates)
  * [6 Notes](chunk_view.html#Notes)
  * [7 Example](chunk_view.html#Example)
  * [8 References](chunk_view.html#References)
  * [9 See also](chunk_view.html#See_also)

  
---  
  
### Data members

Member  |  Description   
---|---  
`V` `_base__` |  the underlying view  
(exposition-only member object*)  
[ranges::range_difference_t](range_size_t.html)<V> `_n__` |  the “chunk” size  
(exposition-only member object*)  
  
#####  If `V` models exactly [`input_range`](input_range.html "cpp/ranges/input range") ([1](chunk_view.html#Version_1))  
  
---  
[ranges::range_difference_t](range_size_t.html)<V> `_remainder__`   
(conditionally present) |  the number of elements left in the current “chunk”  
(exposition-only member object*)  
[`_non-propagating-cache_`](non-propagating-cache.html "cpp/ranges/non-propagating-cache") <[ranges::iterator_t](iterator_t.html)<V>> `_current__`   
(conditionally present) |  an object that caches current underlying iterator  
(exposition-only member object*)  
  
### Member functions

[ (constructor)](chunk_view/chunk_view.html "cpp/ranges/chunk view/chunk view") |  constructs a `chunk_view`   
(public member function)   
---|---  
[ base](chunk_view/base.html "cpp/ranges/chunk view/base") |  returns a copy of the underlying (adapted) view   
(public member function)   
[ begin](chunk_view/begin.html "cpp/ranges/chunk view/begin") |  returns an iterator to the beginning   
(public member function)   
[ end](chunk_view/end.html "cpp/ranges/chunk view/end") |  returns an iterator or a sentinel to the end   
(public member function)   
[ size](chunk_view/size.html "cpp/ranges/chunk view/size") |  returns the number of elements, provided only if the underlying (adapted) range satisfies [`sized_range`](sized_range.html "cpp/ranges/sized range")   
(public member function)   
[ reserve_hint](chunk_view/reserve_hint.html "cpp/ranges/chunk view/reserve hint")(C++26) |  returns the approximate size of the resulting [`approximately_sized_range`](approximately_sized_range.html "cpp/ranges/approximately sized range")   
(public member function)   
  
#####  Inherited from [std::ranges::view_interface](view_interface.html "cpp/ranges/view interface")  
  
[ empty](view_interface/empty.html "cpp/ranges/view interface/empty") |  returns whether the derived view is empty, provided only if it satisfies [`sized_range`](sized_range.html "cpp/ranges/sized range") or [`forward_range`](forward_range.html "cpp/ranges/forward range")   
(public member function of `std::ranges::view_interface<D>`)   
[ cbegin](view_interface/cbegin.html "cpp/ranges/view interface/cbegin")(C++23) |  returns a constant iterator to the beginning of the range   
(public member function of `std::ranges::view_interface<D>`)   
[ cend](view_interface/cend.html "cpp/ranges/view interface/cend")(C++23) |  returns a sentinel for the constant iterator of the range   
(public member function of `std::ranges::view_interface<D>`)   
[ operator bool](view_interface/operator_bool.html "cpp/ranges/view interface/operator bool") |  returns whether the derived view is not empty, provided only if [ranges::empty](empty.html "cpp/ranges/empty") is applicable to it   
(public member function of `std::ranges::view_interface<D>`)   
[ front](view_interface/front.html "cpp/ranges/view interface/front") |  returns the first element in the derived view, provided if it satisfies [`forward_range`](forward_range.html "cpp/ranges/forward range")   
(public member function of `std::ranges::view_interface<D>`)   
[ back](view_interface/back.html "cpp/ranges/view interface/back") |  returns the last element in the derived view, provided only if it satisfies [`bidirectional_range`](bidirectional_range.html "cpp/ranges/bidirectional range") and [`common_range`](common_range.html "cpp/ranges/common range")   
(public member function of `std::ranges::view_interface<D>`)   
[ operator[]](view_interface/operator_at.html "cpp/ranges/view interface/operator at") |  returns the `n`th element in the derived view, provided only if it satisfies [`random_access_range`](random_access_range.html "cpp/ranges/random access range")   
(public member function of `std::ranges::view_interface<D>`)   
  
### [Deduction guides](chunk_view/deduction_guides.html "cpp/ranges/chunk view/deduction guides")

### Nested classes

[_outer_iterator_](chunk_view/outer_iterator.html "cpp/ranges/chunk view/outer iterator")(C++23) |  the output (“chunk-wise”) iterator type when `V` models [`input_range`](input_range.html "cpp/ranges/input range") ([1](chunk_view.html#Version_1))  
(exposition-only member class*)  
---|---  
[_inner_iterator_](chunk_view/inner_iterator.html "cpp/ranges/chunk view/inner iterator")(C++23) |  the inner (“element-wise”) iterator type when `V` models [`input_range`](input_range.html "cpp/ranges/input range") ([1](chunk_view.html#Version_1))  
(exposition-only member class*)  
[_iterator_](chunk_view/iterator.html "cpp/ranges/chunk view/iterator")(C++23) |  the iterator type when `V` models [`forward_range`](forward_range.html "cpp/ranges/forward range") ([2](chunk_view.html#Version_2))  
(exposition-only member class template*)  
  
### Helper templates

template< class V >  
constexpr bool [ranges::enable_borrowed_range](borrowed_range.html)<chunk_view<V>> =  
[ranges::forward_range](forward_range.html)<V> && [ranges::enable_borrowed_range](borrowed_range.html)<V>; |  |  (since C++23)  
---|---|---  
| |   
  
This specialization of [ranges::enable_borrowed_range](borrowed_range.html "cpp/ranges/borrowed range") makes `chunk_view` satisfy [`borrowed_range`](borrowed_range.html "cpp/ranges/borrowed range") when the underlying view `V` satisfies both, the [`forward_range`](forward_range.html "cpp/ranges/forward range") and the [`borrowed_range`](borrowed_range.html "cpp/ranges/borrowed range"). 

### Notes

If `V` models [`input_range`](input_range.html "cpp/ranges/input range") ([1](chunk_view.html#Version_1)), `chunk_view`'s iterator has a dedicated type: [`_outer_iterator::value_type_`](chunk_view/outer_iterator/value_type.html "cpp/ranges/chunk view/outer iterator/value type") that is itself an input view. 

If `V` models [`forward_range`](forward_range.html "cpp/ranges/forward range") or stronger ([2](chunk_view.html#Version_2)), `chunk_view` defers to views::take for its `value_type`. 

If `V` models [`bidirectional_range`](bidirectional_range.html "cpp/ranges/bidirectional range") or stronger ranges ([2](chunk_view.html#Version_2)), the need to calculate size the last chunk correctly (from the end [iterator](chunk_view/iterator.html "cpp/ranges/chunk view/iterator")) requires the underlying range type `V` to be [`sized_range`](sized_range.html "cpp/ranges/sized range"). 

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_ranges_chunk`](../experimental/feature_test.html#cpp_lib_ranges_chunk "cpp/feature test") | [`202202L`](../compiler_support/23.html#cpp_lib_ranges_chunk_202202L "cpp/compiler support/23") | (C++23) | `std::ranges::chunk_view`  
  
### Example

Run this code
    
    
    #include <algorithm>
    #include <initializer_list>
    #include <iostream>
    #include <ranges>
     
    auto print_subrange = [](std::[ranges::viewable_range](viewable_range.html) auto&& r)
    {
        [std::cout](../io/cout.html) << '[';
        for (int pos{}; auto elem : r)
            [std::cout](../io/cout.html) << (pos++ ? " " : "") << elem;
        [std::cout](../io/cout.html) << "] ";
    };
     
    int main()
    {
        const auto v = {1, 2, 3, 4, 5, 6};
     
        for (const unsigned width : std::[views::iota](iota_view.html)(1U, 2U + v.size()))
        {
            auto const chunks = v | std::views::chunk(width);
            [std::cout](../io/cout.html) << "chunk(" << width << "): ";
            std::[ranges::for_each](../algorithm/ranges/for_each.html)(chunks, print_subrange);
            [std::cout](../io/cout.html) << '\n';
        }
    }

Output: 
    
    
    chunk(1): [1] [2] [3] [4] [5] [6]
    chunk(2): [1 2] [3 4] [5 6]
    chunk(3): [1 2 3] [4 5 6]
    chunk(4): [1 2 3 4] [5 6]
    chunk(5): [1 2 3 4 5] [6]
    chunk(6): [1 2 3 4 5 6]
    chunk(7): [1 2 3 4 5 6]

### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 26.7.28 Chunk view [range.chunk] 



### See also

[ ranges::chunk_by_viewviews::chunk_by](chunk_by_view.html "cpp/ranges/chunk by view")(C++23) |  splits the [`view`](view.html "cpp/ranges/view") into subranges between each pair of adjacent elements for which the given predicate returns false  
(class template) (range adaptor object)  
---|---  
[ ranges::adjacent_viewviews::adjacent](adjacent_view.html "cpp/ranges/adjacent view")(C++23) |  a [`view`](view.html "cpp/ranges/view") consisting of tuples of references to adjacent elements of the adapted view  
(class template) (range adaptor object)  
[ ranges::slide_viewviews::slide](slide_view.html "cpp/ranges/slide view")(C++23) |  a [`view`](view.html "cpp/ranges/view") whose Mth element is a [`view`](view.html "cpp/ranges/view") over the Mth through (M + N - 1)th elements of another [`view`](view.html "cpp/ranges/view")  
(class template) (range adaptor object)
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
