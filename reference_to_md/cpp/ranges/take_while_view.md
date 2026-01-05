
  


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
**take_while_view views::take_while**  
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
  
  
  


**`std::ranges::take_while_view`**

[Member functions](take_while_view.html#Member_functions "cpp/ranges/take while view")  
---  
[take_while_view::take_while_view](take_while_view/take_while_view.html "cpp/ranges/take while view/take while view")  
[take_while_view::base](take_while_view/base.html "cpp/ranges/take while view/base")  
[take_while_view::pred](take_while_view/pred.html "cpp/ranges/take while view/pred")  
[take_while_view::begin](take_while_view/begin.html "cpp/ranges/take while view/begin")  
[take_while_view::end](take_while_view/end.html "cpp/ranges/take while view/end")  
[Deduction guides](take_while_view/deduction_guides.html "cpp/ranges/take while view/deduction guides")  
[Sentinel](take_while_view/sentinel.html "cpp/ranges/take while view/sentinel")  
[take_while_view::_sentinel_ ::_sentinel_](take_while_view/sentinel/sentinel.html "cpp/ranges/take while view/sentinel/sentinel")  
[take_while_view::_sentinel_ ::base](take_while_view/sentinel/base.html "cpp/ranges/take while view/sentinel/base")  
[operator==(take_while_view::_sentinel_)](take_while_view/sentinel/operator_cmp.html "cpp/ranges/take while view/sentinel/operator cmp")  
  


Defined in header `[<ranges>](../header/ranges.html "cpp/header/ranges")` |  |   
---|---|---  
template< [ranges::view](view.html) V, class Pred >  
requires [ranges::input_range](input_range.html)<V> &&  
[std::is_object_v](../types/is_object.html)<Pred> &&  
[std::indirect_unary_predicate](../iterator/indirect_unary_predicate.html)<const Pred, [ranges::iterator_t](iterator_t.html)<V>>  
class take_while_view  
: public [ranges::view_interface](view_interface.html)<take_while_view<V, Pred>> |  (1)  |  (since C++20)  
namespace views {  
inline constexpr /*unspecified*/ take_while = /*unspecified*/;  
} |  (2)  |  (since C++20)  
Call signature |  |   
template< [ranges::viewable_range](viewable_range.html) R, class Pred >  
requires /* see below */  
constexpr [ranges::view](view.html) auto take_while( R&& r, Pred&& pred ); |  |  (since C++20)  
template< class Pred >  
constexpr /*range adaptor closure*/ take_while( Pred&& pred ); |  |  (since C++20)  
| |   
  
1) A range adaptor that represents [`view`](view.html "cpp/ranges/view") of the elements from an underlying sequence, starting at the beginning and ending at the first element for which the predicate returns false.

2) [RangeAdaptorObject](../named_req/RangeAdaptorObject.html "cpp/named req/RangeAdaptorObject"). The expression views::take_while(e, f) is [expression-equivalent](../language/expressions.html#Expression-equivalence "cpp/language/expressions") to take_while_view(e, f) for any suitable subexpressions e and f.

`take_while_view` models the concepts [`contiguous_range`](contiguous_range.html "cpp/ranges/contiguous range"), [`random_access_range`](random_access_range.html "cpp/ranges/random access range"), [`bidirectional_range`](bidirectional_range.html "cpp/ranges/bidirectional range"), [`forward_range`](forward_range.html "cpp/ranges/forward range"), and [`input_range`](input_range.html "cpp/ranges/input range") when the underlying view `V` models respective concepts. 

## Contents

  * [1 Data members](take_while_view.html#Data_members)
  * [2 Member functions](take_while_view.html#Member_functions)
    * [2.1 Inherited from std::ranges::view_interface](take_while_view.html#Inherited_from_std::ranges::view_interface)
  * [3 Deduction guides](take_while_view.html#Deduction_guides)
  * [4 Nested classes](take_while_view.html#Nested_classes)
  * [5 Notes](take_while_view.html#Notes)
  * [6 Example](take_while_view.html#Example)
  * [7 See also](take_while_view.html#See_also)

  
---  
  
### Data members

Member  |  Description   
---|---  
`V` `_base__` (private) |  the underlying view  
(exposition-only member object*)  
[`_copyable-box_`](copyable_wrapper.html "cpp/ranges/copyable wrapper")`<Pred>`(until C++23)[`_movable-box_`](copyable_wrapper.html "cpp/ranges/copyable wrapper")`<Pred>`(since C++23) `_pred__` (private) |  the underlying function object  
(exposition-only member object*)  
  
### Member functions

[ (constructor)](take_while_view/take_while_view.html "cpp/ranges/take while view/take while view") |  constructs a `take_while_view`   
(public member function)   
---|---  
[ base](take_while_view/base.html "cpp/ranges/take while view/base") |  returns a copy of the underlying (adapted) view   
(public member function)   
[ pred](take_while_view/pred.html "cpp/ranges/take while view/pred") |  returns a reference to the stored predicate   
(public member function)   
[ begin](take_while_view/begin.html "cpp/ranges/take while view/begin") |  returns an iterator to the beginning   
(public member function)   
[ end](take_while_view/end.html "cpp/ranges/take while view/end") |  returns a sentinel representing the end   
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
[ data](view_interface/data.html "cpp/ranges/view interface/data") |  gets the address of derived view's data, provided only if its iterator type satisfies [`contiguous_iterator`](../iterator/contiguous_iterator.html "cpp/iterator/contiguous iterator")   
(public member function of `std::ranges::view_interface<D>`)   
[ front](view_interface/front.html "cpp/ranges/view interface/front") |  returns the first element in the derived view, provided if it satisfies [`forward_range`](forward_range.html "cpp/ranges/forward range")   
(public member function of `std::ranges::view_interface<D>`)   
[ operator[]](view_interface/operator_at.html "cpp/ranges/view interface/operator at") |  returns the `n`th element in the derived view, provided only if it satisfies [`random_access_range`](random_access_range.html "cpp/ranges/random access range")   
(public member function of `std::ranges::view_interface<D>`)   
  
### [Deduction guides](take_while_view/deduction_guides.html "cpp/ranges/take while view/deduction guides")

### Nested classes

[_sentinel_](take_while_view/sentinel.html "cpp/ranges/take while view/sentinel") |  the sentinel type  
(exposition-only member class template*)  
---|---  
  
### Notes

For [`forward_iterator`s](../iterator/forward_iterator.html "cpp/iterator/forward iterator"), views::take_while(v, pred) is similar to [ranges::subrange](subrange.html){[ranges::begin](begin.html)(v), [ranges::find_if_not](../algorithm/ranges/find.html)(v, pred)}, but the latter invokes pred only during construction (while the former invokes pred each time a valid `take_while` iterator is compared to a sentinel). 

### Example

Run this code
    
    
    #include <iostream>
    #include <ranges>
     
    int main()
    {
        for (int year : std::[views::iota](iota_view.html)(2020)
                      | std::views::take_while([](int y){ return y < 2026; }))
            [std::cout](../io/cout.html) << year << ' ';
        [std::cout](../io/cout.html) << '\n';
     
        const char note[]{"Today is yesterday's tomorrow!..."};
        auto not_dot = [](char c){ return c != '.'; };
        for (char x : std::ranges::take_while_view(note, not_dot))
            [std::cout](../io/cout.html) << x;
        [std::cout](../io/cout.html) << '\n';
    }

Output: 
    
    
    2020 2021 2022 2023 2024 2025
    Today is yesterday's tomorrow!

### See also

[ ranges::take_viewviews::take](take_view.html "cpp/ranges/take view")(C++20) |  a [`view`](view.html "cpp/ranges/view") consisting of the first N elements of another [`view`](view.html "cpp/ranges/view")  
(class template) (range adaptor object)  
---|---  
[ ranges::drop_while_viewviews::drop_while](drop_while_view.html "cpp/ranges/drop while view")(C++20) |  a [`view`](view.html "cpp/ranges/view") consisting of the elements of another [`view`](view.html "cpp/ranges/view"), skipping the initial subsequence of elements until the first element where the predicate returns false  
(class template) (range adaptor object)
