
  


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
[chunk_viewviews::chunk](chunk_view.html "cpp/ranges/chunk view")(C++23)(C++23)  
[slide_viewviews::slide](slide_view.html "cpp/ranges/slide view")(C++23)(C++23)  
**chunk_by_view views::chunk_by**(C++23)(C++23)  
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
  
  
  


**`std::ranges::chunk_by_view`**

[Member functions](chunk_by_view.html#Member_functions "cpp/ranges/chunk by view")  
---  
[chunk_by_view::chunk_by_view](chunk_by_view/chunk_by_view.html "cpp/ranges/chunk by view/chunk by view")  
[chunk_by_view::base](chunk_by_view/base.html "cpp/ranges/chunk by view/base")  
[chunk_by_view::pred](chunk_by_view/pred.html "cpp/ranges/chunk by view/pred")  
[chunk_by_view::begin](chunk_by_view/begin.html "cpp/ranges/chunk by view/begin")  
[chunk_by_view::end](chunk_by_view/end.html "cpp/ranges/chunk by view/end")  
[chunk_by_view::_find_next_](chunk_by_view/helpers.html#find_next "cpp/ranges/chunk by view/helpers")  
[chunk_by_view::_find_prev_](chunk_by_view/helpers.html#find_prev "cpp/ranges/chunk by view/helpers")  
[Deduction guides](chunk_by_view/deduction_guides.html "cpp/ranges/chunk by view/deduction guides")  
[Iterator](chunk_by_view/iterator.html "cpp/ranges/chunk by view/iterator")  
[chunk_by_view::_iterator_ ::_iterator_](chunk_by_view/iterator/iterator.html "cpp/ranges/chunk by view/iterator/iterator")  
[chunk_by_view::_iterator_ ::operator*](chunk_by_view/iterator/operator*.html "cpp/ranges/chunk by view/iterator/operator*")  
[chunk_by_view::_iterator_ ::operator++  
chunk_by_view::_iterator_ ::operator++(int)  
chunk_by_view::_iterator_ ::operator--  
chunk_by_view::_iterator_ ::operator--(int)](chunk_by_view/iterator/operator_arith.html "cpp/ranges/chunk by view/iterator/operator arith")  
[operator==(chunk_by_view::_iterator_)](chunk_by_view/iterator/operator_cmp.html "cpp/ranges/chunk by view/iterator/operator cmp")  
  


Defined in header `[<ranges>](../header/ranges.html "cpp/header/ranges")` |  |   
---|---|---  
template< [ranges::forward_range](forward_range.html) V, [std::indirect_binary_predicate](../iterator/indirect_binary_predicate.html)<iterator_t<V>,  
[ranges::iterator_t](iterator_t.html)<V>> Pred >  
requires [ranges::view](view.html)<V> && [std::is_object_v](../types/is_object.html)<Pred>  
class chunk_by_view  
: public [ranges::view_interface](view_interface.html)<chunk_by_view<V, Pred>> |  (1)  |  (since C++23)  
namespace views {  
inline constexpr /* unspecified */ chunk_by = /* unspecified */ ;  
} |  (2)  |  (since C++23)  
Call signature |  |   
template< [ranges::viewable_range](viewable_range.html) R, class Pred >  
requires /* see below */  
constexpr [ranges::view](view.html) auto chunk_by( R&& r, Pred&& pred ); |  |  (since C++23)  
template< class Pred >  
constexpr /*range adaptor closure*/ chunk_by( Pred&& pred ); |  |  (since C++23)  
| |   
  
1) `chunk_by_view` is a range adaptor that takes a [`view`](view.html "cpp/ranges/view") and an invocable object pred (the binary predicate), and produces a [`view`](view.html "cpp/ranges/view") of subranges (chunks), by splitting the underlying view between each pair of adjacent elements for which pred returns false. The first element of each such pair belongs to the previous chunk, and the second element belongs to the next chunk.

2) The name views::chunk_by denotes a [RangeAdaptorObject](../named_req/RangeAdaptorObject.html "cpp/named req/RangeAdaptorObject"). Given a subexpression e and f, the expression views::chunk_by(e, f) is [expression-equivalent](../language/expressions.html#Expression-equivalence "cpp/language/expressions") to chunk_by_view(e, f).

`chunk_by_view` always models [`forward_range`](forward_range.html "cpp/ranges/forward range"), and models [`bidirectional_range`](bidirectional_range.html "cpp/ranges/bidirectional range") and/or [`common_range`](common_range.html "cpp/ranges/common range"), if adapted [`view`](view.html "cpp/ranges/view") type models the corresponding concepts. `chunk_by_view` never models [`borrowed_range`](borrowed_range.html "cpp/ranges/borrowed range") or [`sized_range`](sized_range.html "cpp/ranges/sized range"). 

## Contents

  * [1 Data members](chunk_by_view.html#Data_members)
  * [2 Member functions](chunk_by_view.html#Member_functions)
    * [2.1 Inherited from std::ranges::view_interface](chunk_by_view.html#Inherited_from_std::ranges::view_interface)
  * [3 Deduction guides](chunk_by_view.html#Deduction_guides)
  * [4 Nested classes](chunk_by_view.html#Nested_classes)
  * [5 Notes](chunk_by_view.html#Notes)
  * [6 Example](chunk_by_view.html#Example)
  * [7 References](chunk_by_view.html#References)
  * [8 See also](chunk_by_view.html#See_also)

  
---  
  
### Data members

Member  |  Definition   
---|---  
`V` `_base__` |  the underlying [`view`](view.html "cpp/ranges/view")  
(exposition-only member object*)  
[`_movable-box_`](copyable_wrapper.html "cpp/ranges/copyable wrapper")` _< Pred>_` `_pred__` |  an object that wraps the predicate used to split the elements of `_base__`  
(exposition-only member object*)  
[`_non-propagating-cache_`](non-propagating-cache.html "cpp/ranges/non-propagating-cache")` _< iterator>_` `_begin__` |  an object that caches the iterator to the first element  
(exposition-only member object*)  
  
### Member functions

[ (constructor)](chunk_by_view/chunk_by_view.html "cpp/ranges/chunk by view/chunk by view") |  constructs a `chunk_by_view`   
(public member function)   
---|---  
[ base](chunk_by_view/base.html "cpp/ranges/chunk by view/base") |  returns a copy of the underlying (adapted) view   
(public member function)   
[ pred](chunk_by_view/pred.html "cpp/ranges/chunk by view/pred") |  returns a reference to the stored predicate   
(public member function)   
[ begin](chunk_by_view/begin.html "cpp/ranges/chunk by view/begin") |  returns an iterator to the beginning   
(public member function)   
[ end](chunk_by_view/end.html "cpp/ranges/chunk by view/end") |  returns an iterator or a sentinel to the end   
(public member function)   
[__find_next__](chunk_by_view/helpers.html#find_next "cpp/ranges/chunk by view/helpers") |  returns an iterator to the begin of the next subrange  
(exposition-only member function*)  
[__find_prev__](chunk_by_view/helpers.html#find_prev "cpp/ranges/chunk by view/helpers") |  returns an iterator to the begin of the previous subrange  
(exposition-only member function*)  
  
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
  
### [Deduction guides](chunk_by_view/deduction_guides.html "cpp/ranges/chunk by view/deduction guides")

### Nested classes

[_iterator_](chunk_by_view/iterator.html "cpp/ranges/chunk by view/iterator") |  the iterator type  
(exposition-only member class template*)  
---|---  
  
### Notes

In order to provide the amortized constant time complexity required by the [`range`](range.html "cpp/ranges/range") concept, the result of [`begin()`](chunk_by_view/begin.html "cpp/ranges/chunk by view/begin") is cached within the `chunk_by_view` object. If the underlying range is modified after the first call to [`begin()`](chunk_by_view/begin.html "cpp/ranges/chunk by view/begin"), subsequent uses of the `chunk_by_view` object might have unintuitive behavior. 

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_ranges_chunk_by`](../experimental/feature_test.html#cpp_lib_ranges_chunk_by "cpp/feature test") | [`202202L`](../compiler_support/23.html#cpp_lib_ranges_chunk_by_202202L "cpp/compiler support/23") | (C++23) | `std::ranges::chunk_by_view`  
  
### Example

Run this code
    
    
    #include <functional>
    #include <iostream>
    #include <ranges>
    #include <string_view>
     
    void print_chunks(auto view, [std::string_view](../string/basic_string_view.html) separator = ", ")
    {
        for (auto const subrange : view)
        {
            [std::cout](../io/cout.html) << '[';
            for ([std::string_view](../string/basic_string_view.html) prefix; auto const& elem : subrange)
                [std::cout](../io/cout.html) << prefix << elem, prefix = separator;
            [std::cout](../io/cout.html) << "] ";
        }
        [std::cout](../io/cout.html) << '\n';
    }
     
    int main()
    {
        [std::initializer_list](../utility/initializer_list.html) v1 = {1, 2, 3, 1, 2, 3, 3, 3, 1, 2, 3};
        auto fn1 = std::[ranges::less](http://en.cppreference.com/w/cpp/ranges-functional-placeholder/less){};
        auto view1 = v1 | std::views::chunk_by(fn1);
        print_chunks(view1);
     
        [std::initializer_list](../utility/initializer_list.html) v2 = {1, 2, 3, 4, 4, 0, 2, 3, 3, 3, 2, 1};
        auto fn2 = std::[ranges::not_equal_to](http://en.cppreference.com/w/cpp/ranges-functional-placeholder/not_equal_to){};
        auto view2 = v2 | std::views::chunk_by(fn2);
        print_chunks(view2);
     
        [std::string_view](../string/basic_string_view.html) v3 = "__cpp_lib_ranges_chunk_by";
        auto fn3 = [](auto x, auto y) { return not(x == '_' or y == '_'); };
        auto view3 = v3 | std::views::chunk_by(fn3);
        print_chunks(view3, "");
     
        [std::string_view](../string/basic_string_view.html) v4 = "\u007a\u00df\u6c34\u{1f34c}"; // "zß水🍌"
        auto fn4 = [](auto, auto ß) { return 128 == ((128 + 64) & ß); };
        auto view4 = v4 | std::views::chunk_by(fn4);
        print_chunks(view4, "");
    }

Output: 
    
    
    [1, 2, 3] [1, 2, 3] [3] [3] [1, 2, 3] 
    [1, 2, 3, 4] [4, 0, 2, 3] [3] [3, 2, 1] 
    [_] [_] [cpp] [_] [lib] [_] [ranges] [_] [chunk] [_] [by]
    [z] [ß] [水] [🍌]

### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 26.7.30 Chunk by view [range.chunk.by] 



### See also

[ ranges::chunk_viewviews::chunk](chunk_view.html "cpp/ranges/chunk view")(C++23) |  a range of [`view`s](view.html "cpp/ranges/view") that are `N`-sized non-overlapping successive chunks of the elements of another [`view`](view.html "cpp/ranges/view")  
(class template) (range adaptor object)  
---|---  
[ ranges::slide_viewviews::slide](slide_view.html "cpp/ranges/slide view")(C++23) |  a [`view`](view.html "cpp/ranges/view") whose Mth element is a [`view`](view.html "cpp/ranges/view") over the Mth through (M + N - 1)th elements of another [`view`](view.html "cpp/ranges/view")  
(class template) (range adaptor object)  
[ ranges::stride_viewviews::stride](stride_view.html "cpp/ranges/stride view")(C++23) |  a [`view`](view.html "cpp/ranges/view") consisting of elements of another [`view`](view.html "cpp/ranges/view"), advancing over N elements at a time  
(class template) (range adaptor object)
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
