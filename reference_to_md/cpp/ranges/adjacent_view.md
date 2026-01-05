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
  
| **adjacent_view views::adjacent**(C++23)(C++23)  
---  
**views::pairwise**(C++23)  
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
  
  
  


**`std::ranges::adjacent_view`**

[Member functions](adjacent_view.html#Member_functions "cpp/ranges/adjacent view")  
---  
[adjacent_view::adjacent_view](adjacent_view/adjacent_view.html "cpp/ranges/adjacent view/adjacent view")  
[adjacent_view::begin](adjacent_view/begin.html "cpp/ranges/adjacent view/begin")  
[adjacent_view::end](adjacent_view/end.html "cpp/ranges/adjacent view/end")  
[adjacent_view::size](adjacent_view/size.html "cpp/ranges/adjacent view/size")  
[adjacent_view::reserve_hint](adjacent_view/reserve_hint.html "cpp/ranges/adjacent view/reserve hint")(C++26)  
[Iterator](adjacent_view/iterator.html "cpp/ranges/adjacent view/iterator")  
[Member functions](adjacent_view/iterator.html#Member_functions "cpp/ranges/adjacent view/iterator")  
[adjacent_view::_iterator_ ::_iterator_](adjacent_view/iterator/iterator.html "cpp/ranges/adjacent view/iterator/iterator")  
[adjacent_view::_iterator_ ::operator*](adjacent_view/iterator/operator*.html "cpp/ranges/adjacent view/iterator/operator*")  
[adjacent_view::_iterator_ ::operator[]](adjacent_view/iterator/operator_at.html "cpp/ranges/adjacent view/iterator/operator at")  
[adjacent_view::_iterator_ ::operator++  
adjacent_view::_iterator_ ::operator++(int)  
adjacent_view::_iterator_ ::operator--  
adjacent_view::_iterator_ ::operator--(int)  
adjacent_view::_iterator_ ::operator+=  
adjacent_view::_iterator_ ::operator-=](adjacent_view/iterator/operator_arith.html "cpp/ranges/adjacent view/iterator/operator arith")  
[Non-member functions](adjacent_view/iterator.html#Non-member_functions "cpp/ranges/adjacent view/iterator")  
[operator==(adjacent_view::_iterator_)  
operator<(adjacent_view::_iterator_)  
operator>(adjacent_view::_iterator_)  
operator<=(adjacent_view::_iterator_)  
operator>=(adjacent_view::_iterator_)  
operator<=>(adjacent_view::_iterator_)](adjacent_view/iterator/operator_cmp.html "cpp/ranges/adjacent view/iterator/operator cmp")  
[operator+(adjacent_view::_iterator_)  
operator-(adjacent_view::_iterator_)](adjacent_view/iterator/operator_arith2.html "cpp/ranges/adjacent view/iterator/operator arith2")  
[iter_move(adjacent_view::_iterator_)](adjacent_view/iterator/iter_move.html "cpp/ranges/adjacent view/iterator/iter move")  
[iter_swap(adjacent_view::_iterator_)](adjacent_view/iterator/iter_swap.html "cpp/ranges/adjacent view/iterator/iter swap")  
[Sentinel](adjacent_view/sentinel.html "cpp/ranges/adjacent view/sentinel")  
Member functions  
[adjacent_view::_sentinel_ ::_sentinel_](adjacent_view/sentinel/sentinel.html "cpp/ranges/adjacent view/sentinel/sentinel")  
Non-member functions  
[operator==(adjacent_view::_iterator_ ,adjacent_view::_sentinel_)](adjacent_view/sentinel/operator_cmp.html "cpp/ranges/adjacent view/sentinel/operator cmp")  
[operator-(adjacent_view::_iterator_ ,adjacent_view::_sentinel_)](adjacent_view/sentinel/operator-.html "cpp/ranges/adjacent view/sentinel/operator-")  
  


Defined in header `[<ranges>](../header/ranges.html "cpp/header/ranges")` |  |   
---|---|---  
template< [ranges::forward_range](forward_range.html) V, [std::size_t](../types/size_t.html) N >  
requires [ranges::view](view.html)<V> && (N > 0)  
class adjacent_view  
: public [ranges::view_interface](view_interface.html)<adjacent_view<V, N>> |  (1)  |  (since C++23)  
namespace views {  
template< [std::size_t](../types/size_t.html) N >  
constexpr /* unspecified */ adjacent = /* unspecified */ ;  
} |  (2)  |  (since C++23)  
namespace views {  
inline constexpr auto pairwise = adjacent<2>;  
} |  (3)  |  (since C++23)  
Call signature |  |   
template< [ranges::viewable_range](viewable_range.html) R >  
requires /* see below */  
constexpr [ranges::view](view.html) auto adjacent<N>( R&& r ); |  |  (since C++23)  
| |   
  
1) `adjacent_view` is a range adaptor that takes a [`view`](view.html "cpp/ranges/view"), and produces a [`view`](view.html "cpp/ranges/view") whose `_i_` _th_ element (a “window”) is a [std::tuple](../utility/tuple.html "cpp/utility/tuple") that holds `_N_` references to the elements `[``_i_``, `` _i + N - 1_``]` of the original view.

Let `_S_` be the size of the original view. Then the size of produced view is: 

  * S - N + 1, if `S >= N`, 
  * ​0​ otherwise, and the resulting view is empty.



2) The name views::adjacent<N> denotes a [RangeAdaptorObject](../named_req/RangeAdaptorObject.html "cpp/named req/RangeAdaptorObject"). Given a subexpression e and a constant expression N, the expression views::adjacent<N>(e) is [expression-equivalent](../language/expressions.html#Expression-equivalence "cpp/language/expressions") to 

  * ((void)e, auto([views::empty](empty_view.html)<tuple<>>)) if N is equal to ​0​ and decltype((e)) models [`forward_range`](forward_range.html "cpp/ranges/forward range"), 
  * adjacent_view<[views::all_t](all_view.html)<decltype((e))>, N>(e) otherwise.



3) The name views::pairwise denotes a [RangeAdaptorObject](../named_req/RangeAdaptorObject.html "cpp/named req/RangeAdaptorObject") that behaves exactly as views::adjacent<2>.

`adjacent_view` always models [`forward_range`](forward_range.html "cpp/ranges/forward range"), and models [`bidirectional_range`](bidirectional_range.html "cpp/ranges/bidirectional range"), [`random_access_range`](random_access_range.html "cpp/ranges/random access range"), or [`sized_range`](sized_range.html "cpp/ranges/sized range") if adapted [`view`](view.html "cpp/ranges/view") type models the corresponding concept. 

## Contents

  * [1 Data members](adjacent_view.html#Data_members)
  * [2 Member functions](adjacent_view.html#Member_functions)
    * [2.1 Inherited from std::ranges::view_interface](adjacent_view.html#Inherited_from_std::ranges::view_interface)
  * [3 Deduction guides](adjacent_view.html#Deduction_guides)
  * [4 Nested classes](adjacent_view.html#Nested_classes)
  * [5 Helper templates](adjacent_view.html#Helper_templates)
  * [6 Notes](adjacent_view.html#Notes)
  * [7 Example](adjacent_view.html#Example)
  * [8 Defect reports](adjacent_view.html#Defect_reports)
  * [9 References](adjacent_view.html#References)
  * [10 See also](adjacent_view.html#See_also)

  
---  
  
### Data members

Member  |  Description   
---|---  
`V` `_base__` |  the underlying [`view`](view.html "cpp/ranges/view")  
(exposition-only member object*)  
  
### Member functions

[ (constructor)](adjacent_view/adjacent_view.html "cpp/ranges/adjacent view/adjacent view") |  constructs a `adjacent_view`   
(public member function)   
---|---  
[ begin](adjacent_view/begin.html "cpp/ranges/adjacent view/begin") |  returns an iterator to the beginning   
(public member function)   
[ end](adjacent_view/end.html "cpp/ranges/adjacent view/end") |  returns an iterator or a sentinel to the end   
(public member function)   
[ size](adjacent_view/size.html "cpp/ranges/adjacent view/size") |  returns the number of elements, provided only if the underlying (adapted) range satisfies [`sized_range`](sized_range.html "cpp/ranges/sized range")   
(public member function)   
[ reserve_hint](adjacent_view/reserve_hint.html "cpp/ranges/adjacent view/reserve hint")(C++26) |  returns the approximate size of the resulting [`approximately_sized_range`](approximately_sized_range.html "cpp/ranges/approximately sized range")   
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
  
### Deduction guides

(none) 

### Nested classes

[_iterator_](adjacent_view/iterator.html "cpp/ranges/adjacent view/iterator") |  the iterator type  
(exposition-only member class template*)  
---|---  
[_sentinel_](adjacent_view/sentinel.html "cpp/ranges/adjacent view/sentinel") |  the sentinel type used when `adjacent_view` is not a [`common_range`](common_range.html "cpp/ranges/common range")  
(exposition-only member class template*)  
  
### Helper templates

template< class V, size_t N >  
constexpr bool [ranges::enable_borrowed_range](borrowed_range.html)<adjacent_view<V, N>> =  
[ranges::enable_borrowed_range](borrowed_range.html)<V>; |  |  (since C++23)  
---|---|---  
| |   
  
This specialization of [ranges::enable_borrowed_range](borrowed_range.html "cpp/ranges/borrowed range") makes `adjacent_view` satisfy [`borrowed_range`](borrowed_range.html "cpp/ranges/borrowed range") when the underlying view satisfies it. 

### Notes

views::adjacent only accepts forward ranges even when `N` is `0`. 

There are similarities between ranges::adjacent_view and ranges::slide_view: 

  * Both create “sliding window” of size `_N_`. 
  * Both have the same size `_S - N + 1_` , where `_S_` is the size of an adapted [`view`](view.html "cpp/ranges/view") such that `_S >= N > 0_`. 



The following table shows the differences between these adaptors: 

View adaptor | `value_type` | The window size `_N_`  
---|---|---  
ranges::adjacent_view | [std::tuple](../utility/tuple.html "cpp/utility/tuple") | A template parameter   
[ranges::slide_view](slide_view.html) | [ranges::range](range.html) | A runtime argument   
[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_ranges_zip`](../experimental/feature_test.html#cpp_lib_ranges_zip "cpp/feature test") | [`202110L`](../compiler_support/23.html#cpp_lib_ranges_zip_202110L "cpp/compiler support/23") | (C++23) | [ranges::zip_view](zip_view.html),  
[ranges::zip_transform_view](zip_transform_view.html),  
`ranges::adjacent_view`,  
[ranges::adjacent_transform_view](adjacent_transform_view.html)  
  
### Example

Run this code
    
    
    #include <array>
    #include <format>
    #include <iostream>
    #include <ranges>
    #include <tuple>
     
    int main()
    {
        constexpr [std::array](../container/array.html) v{1, 2, 3, 4, 5, 6};
        [std::cout](../io/cout.html) << "v = [1 2 3 4 5 6]\n";
     
        for (int i{}; [std::tuple](../utility/tuple.html) t : v | std::views::adjacent<3>)
        {
            auto [t0, t1, t2] = t;
            [std::cout](../io/cout.html) << [std::format](../utility/format/format.html)("e = {:<{}}[{} {} {}]\n", "", 2 * i++, t0, t1, t2);
        }
    }

Output: 
    
    
    v = [1 2 3 4 5 6]
    e = [1 2 3]
    e =   [2 3 4]
    e =     [3 4 5]
    e =       [4 5 6]

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 4098](https://cplusplus.github.io/LWG/issue4098) | C++23  | views::adjacent<0> used to accept input-only ranges  | made rejected   
  
### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 26.7.25 Adjacent view [range.adjacent] 



### See also

[ ranges::adjacent_transform_viewviews::adjacent_transform](adjacent_transform_view.html "cpp/ranges/adjacent transform view")(C++23) |  a [`view`](view.html "cpp/ranges/view") consisting of results of application of a transformation function to adjacent elements of the adapted view  
(class template) (range adaptor object)  
---|---  
[ ranges::slide_viewviews::slide](slide_view.html "cpp/ranges/slide view")(C++23) |  a [`view`](view.html "cpp/ranges/view") whose Mth element is a [`view`](view.html "cpp/ranges/view") over the Mth through (M + N - 1)th elements of another [`view`](view.html "cpp/ranges/view")  
(class template) (range adaptor object)  
[ ranges::chunk_viewviews::chunk](chunk_view.html "cpp/ranges/chunk view")(C++23) |  a range of [`view`s](view.html "cpp/ranges/view") that are `N`-sized non-overlapping successive chunks of the elements of another [`view`](view.html "cpp/ranges/view")  
(class template) (range adaptor object)  
[ ranges::stride_viewviews::stride](stride_view.html "cpp/ranges/stride view")(C++23) |  a [`view`](view.html "cpp/ranges/view") consisting of elements of another [`view`](view.html "cpp/ranges/view"), advancing over N elements at a time  
(class template) (range adaptor object)
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
