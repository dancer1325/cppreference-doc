
  


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
**views::counted**  
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
  
  
  


Defined in header `[<ranges>](../header/ranges.html "cpp/header/ranges")` |  |   
---|---|---  
inline constexpr /*unspecified*/ counted = /*unspecified*/; |  |  (since C++20)  
Call signature |  |   
template< class Iterator, class DifferenceType >  
requires /* see below */  
constexpr /*span-or-subrange*/ counted( Iterator&& it, DifferenceType&& count ); |  |  (since C++20)  
| |   
  
A counted view presents a [`view`](view.html "cpp/ranges/view") of the elements of the _counted range_ `[`i`, `n`)` for some iterator `i` and non-negative integer `n`. 

A counted range `[`i`, `n`)` is the `n` elements starting with the element pointed to by `i` and up to but not including the element, if any, pointed to by the result of `n` applications of ++i. 

If n == 0, the counted range is valid and empty. Otherwise, the counted range is only valid if `n` is positive, `i` is dereferenceable, and `[`++i`, `\--n`)` is a valid counted range. 

Formally, if it and count are expressions, `T` is [std::decay_t](../types/decay.html)<decltype((it))>, and `D` is [std::iter_difference_t](../iterator/iter_t.html)<T>, then 

     if `T` models [`input_or_output_iterator`](../iterator/input_or_output_iterator.html "cpp/iterator/input or output iterator") and decltype((count)) models [std::convertible_to](../concepts/convertible_to.html)<D>, 

  * if `T` models [`contiguous_iterator`](../iterator/contiguous_iterator.html "cpp/iterator/contiguous iterator"), then [views::counted](counted_view.html)(it, count) is [expression-equivalent](../language/expressions.html#Expression-equivalence "cpp/language/expressions") to [std::span](../container/span.html)([std::to_address](../memory/to_address.html)(it), static_cast<[std::size_t](../types/size_t.html)>(static_cast<D>(count))), 
  * otherwise, if `T` models [`random_access_iterator`](../iterator/random_access_iterator.html "cpp/iterator/random access iterator"), then [views::counted](counted_view.html)(it, count) is [expression-equivalent](../language/expressions.html#Expression-equivalence "cpp/language/expressions") to [ranges::subrange](subrange.html)(it, it + static_cast<D>(count)), 
  * otherwise, [views::counted](counted_view.html)(it, count) is [expression-equivalent](../language/expressions.html#Expression-equivalence "cpp/language/expressions") to [ranges::subrange](subrange.html)([std::counted_iterator](../iterator/counted_iterator.html)(it, count), [std::default_sentinel](../iterator/default_sentinel.html)). 


     Otherwise, [views::counted](counted_view.html)(it, count) is ill-formed. 

## Contents

  * [1 Customization point objects](counted_view.html#Customization_point_objects)
  * [2 Notes](counted_view.html#Notes)
  * [3 Example](counted_view.html#Example)
  * [4 Defect reports](counted_view.html#Defect_reports)
  * [5 See also](counted_view.html#See_also)

  
---  
  
###  Customization point objects

The name `views::counted` denotes a _customization point object_ , which is a const [function object](../named_req/FunctionObject.html "cpp/named req/FunctionObject") of a [literal](../named_req/LiteralType.html "cpp/named req/LiteralType") [`semiregular`](../concepts/semiregular.html "cpp/concepts/semiregular") class type. See [CustomizationPointObject](../named_req/CustomizationPointObject.html "cpp/named req/CustomizationPointObject") for details. 

### Notes

[`views::counted`](counted_view.html#top) does not check if the range is long enough to provide all count elements: use [views::take](take_view.html) if that check is necessary. 

### Example

Run this code
    
    
    #include <iostream>
    #include <ranges>
     
    int main()
    {
        const int a[]{1, 2, 3, 4, 5, 6, 7};
        for (int i : std::[views::counted](counted_view.html)(a, 3))
            [std::cout](../io/cout.html) << i << ' ';
        [std::cout](../io/cout.html) << '\n';
     
        const auto il = {1, 2, 3, 4, 5};
        for (int i : std::[views::counted](counted_view.html)(il.begin() + 1, 3))
            [std::cout](../io/cout.html) << i << ' ';
        [std::cout](../io/cout.html) << '\n';
    }

Output: 
    
    
    1 2 3
    2 3 4

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[P2393R1](https://wg21.link/P2393R1) | C++20  | implicit conversion from an integer-class type to [std::size_t](../types/size_t.html) might be invalid  | made explicit   
  
### See also

[ ranges::take_viewviews::take](take_view.html "cpp/ranges/take view")(C++20) |  a [`view`](view.html "cpp/ranges/view") consisting of the first N elements of another [`view`](view.html "cpp/ranges/view")  
(class template) (range adaptor object)  
---|---  
[ ranges::subrange](subrange.html "cpp/ranges/subrange")(C++20) |  combines an iterator-sentinel pair into a [`view`](view.html "cpp/ranges/view")   
(class template)   
[ counted_iterator](../iterator/counted_iterator.html "cpp/iterator/counted iterator")(C++20) |  iterator adaptor that tracks the distance to the end of the range   
(class template)   
[ ranges::countranges::count_if](../algorithm/ranges/count.html "cpp/algorithm/ranges/count")(C++20)(C++20) |  returns the number of elements satisfying specific criteria  
(algorithm function object)
