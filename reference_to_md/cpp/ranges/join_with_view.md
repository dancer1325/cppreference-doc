
  


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
**join_with_view views::join_with**(C++23)(C++23)` `  
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
  
  
  


**`std::ranges::join_with_view`**

[Member functions](join_with_view.html#Member_functions "cpp/ranges/join with view")  
---  
[join_with_view::join_with_view](join_with_view/join_with_view.html "cpp/ranges/join with view/join with view")  
[join_with_view::base](join_with_view/base.html "cpp/ranges/join with view/base")  
[join_with_view::begin](join_with_view/begin.html "cpp/ranges/join with view/begin")  
[join_with_view::end](join_with_view/end.html "cpp/ranges/join with view/end")  
[Deduction guides](join_with_view/deduction_guides.html "cpp/ranges/join with view/deduction guides")  
[Iterator](join_with_view/iterator.html "cpp/ranges/join with view/iterator")  
[Member functions](join_with_view/iterator.html#Member_functions "cpp/ranges/join with view/iterator")  
[join_with_view::_iterator_ ::_iterator_](join_with_view/iterator/iterator.html "cpp/ranges/join with view/iterator/iterator")  
[join_with_view::_iterator_ ::operator*](join_with_view/iterator/operator*.html "cpp/ranges/join with view/iterator/operator*")  
[join_with_view::_iterator_ ::operator++  
join_with_view::_iterator_ ::operator++(int)  
join_with_view::_iterator_ ::operator--  
join_with_view::_iterator_ ::operator--(int)](join_with_view/iterator/operator_arith.html "cpp/ranges/join with view/iterator/operator arith")  
[Non-member functions](join_with_view/iterator.html#Non-member_functions "cpp/ranges/join with view/iterator")  
[operator==(join_with_view::_iterator_)](join_with_view/iterator/operator_cmp.html "cpp/ranges/join with view/iterator/operator cmp")(C++23)  
[iter_move(join_with_view::_iterator_)](join_with_view/iterator/iter_move.html "cpp/ranges/join with view/iterator/iter move")(C++23)  
[iter_swap(join_with_view::_iterator_)](join_with_view/iterator/iter_swap.html "cpp/ranges/join with view/iterator/iter swap")(C++23)  
[Sentinel](join_with_view/sentinel.html "cpp/ranges/join with view/sentinel")  
[join_with_view::_sentinel_ ::_sentinel_](join_with_view/sentinel/sentinel.html "cpp/ranges/join with view/sentinel/sentinel")  
[operator==(join_with_view::_sentinel_)](join_with_view/sentinel/operator_cmp.html "cpp/ranges/join with view/sentinel/operator cmp")(C++23)  
  


Defined in header `[<ranges>](../header/ranges.html "cpp/header/ranges")` |  |   
---|---|---  
template< [ranges::input_range](input_range.html) V, [ranges::forward_range](forward_range.html) Pattern >  
requires [ranges::view](view.html)<V> &&  
[ranges::input_range](input_range.html)<[ranges::range_reference_t](range_reference_t.html)<V>> &&  
[ranges::view](view.html)<Pattern> &&  
/*concatable*/<[ranges::range_reference_t](range_reference_t.html)<V>, Pattern>  
class join_with_view :   
[ranges::view_interface](view_interface.html)<join_with_view<V, Pattern>> |  (1)  |  (since C++23)  
namespace views {  
inline constexpr /* unspecified */ join_with = /* unspecified */;  
} |  (2)  |  (since C++23)  
Call signature |  |   
template< [ranges::viewable_range](viewable_range.html) R, class Pattern >  
requires /* see below */  
constexpr [ranges::view](view.html) auto join_with( R&& r, Pattern&& pattern ); |  |  (since C++23)  
template< class Pattern >  
constexpr /* range adaptor closure */ join_with( Pattern&& pattern ); |  |  (since C++23)  
| |   
  
1) A range adaptor that represents [`view`](view.html "cpp/ranges/view") consisting of the sequence obtained from flattening a view of ranges, with every element of the delimiter inserted in between elements of the view. The delimiter can be a single element or a view of elements.

For the definition of /*concatable*/, see [`std::ranges::concat_view`](concat_view.html "cpp/ranges/concat view").

2) [RangeAdaptorObject](../named_req/RangeAdaptorObject.html "cpp/named req/RangeAdaptorObject"). The expression views::join_with(e, f) is [expression-equivalent](../language/expressions.html#Expression-equivalence "cpp/language/expressions") to join_with_view(e, f) for any suitable subexpressions e and f.

`join_with_view` models [`input_range`](input_range.html "cpp/ranges/input range"). 

`join_with_view` models [`forward_range`](forward_range.html "cpp/ranges/forward range") when: 

  * [ranges::range_reference_t](range_reference_t.html)<V> is a reference, and 
  * `V` and [ranges::range_reference_t](range_reference_t.html)<V> each model [`forward_range`](forward_range.html "cpp/ranges/forward range"). 



`join_with_view` models [`bidirectional_range`](bidirectional_range.html "cpp/ranges/bidirectional range") when: 

  * [ranges::range_reference_t](range_reference_t.html)<V> is a reference, 
  * `V`, [ranges::range_reference_t](range_reference_t.html)<V>, and `Pattern` each models [`bidirectional_range`](bidirectional_range.html "cpp/ranges/bidirectional range"), and 
  * [ranges::range_reference_t](range_reference_t.html)<V> and `Pattern` each model [`common_range`](common_range.html "cpp/ranges/common range"). 



`join_with_view` models [`common_range`](common_range.html "cpp/ranges/common range") when: 

  * [ranges::range_reference_t](range_reference_t.html)<V> is a reference, and 
  * `V` and [ranges::range_reference_t](range_reference_t.html)<V> each model [`forward_range`](forward_range.html "cpp/ranges/forward range") and [`common_range`](common_range.html "cpp/ranges/common range"). 



## Contents

  * [1 Nested types](join_with_view.html#Nested_types)
  * [2 Data members](join_with_view.html#Data_members)
  * [3 Member functions](join_with_view.html#Member_functions)
    * [3.1 Inherited from std::ranges::view_interface](join_with_view.html#Inherited_from_std::ranges::view_interface)
  * [4 Deduction guides](join_with_view.html#Deduction_guides)
  * [5 Nested classes](join_with_view.html#Nested_classes)
  * [6 Notes](join_with_view.html#Notes)
  * [7 Example](join_with_view.html#Example)
  * [8 Defect reports](join_with_view.html#Defect_reports)
  * [9 See also](join_with_view.html#See_also)

  
---  
  
### Nested types

Type  |  Definition   
---|---  
`_InnerRng_` |  [ranges::range_reference_t](range_reference_t.html)<V>  
(exposition-only member type*)  
  
### Data members

Member  |  Definition   
---|---  
`V` `_base__` |  the underlying (adapted) view  
(exposition-only member object*)  
`Pattern` `_pattern__` |  the pattern object  
(exposition-only member object*)  
[`_non-propagating-cache_`](non-propagating-cache.html "cpp/ranges/non-propagating-cache") ﻿<[ranges::iterator_t](iterator_t.html)<V>> `_outer_it__`   
(present only if `V` does not model [`forward_range`](forward_range.html "cpp/ranges/forward range")) |  the cache of the outer iterator  
(exposition-only member object*)  
[`_non-propagating-cache_`](non-propagating-cache.html "cpp/ranges/non-propagating-cache") ﻿<[std::remove_cv_t](../types/remove_cv.html)<`_InnerRng_` ﻿>> `_inner__`   
(present only if [std::is_reference_v](../types/is_reference.html)<`_InnerRng_` ﻿> is false) |  the cache of the inner range  
(exposition-only member object*)  
  
### Member functions

[ (constructor)](join_with_view/join_with_view.html "cpp/ranges/join with view/join with view") |  constructs a `join_with_view`   
(public member function)   
---|---  
[ base](join_with_view/base.html "cpp/ranges/join with view/base") |  returns a copy of the underlying (adapted) view   
(public member function)   
[ begin](join_with_view/begin.html "cpp/ranges/join with view/begin") |  returns an iterator to the beginning   
(public member function)   
[ end](join_with_view/end.html "cpp/ranges/join with view/end") |  returns an iterator or a sentinel to the end   
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
  
### [Deduction guides](join_with_view/deduction_guides.html "cpp/ranges/join with view/deduction guides")

### Nested classes

[_iterator_](join_with_view/iterator.html "cpp/ranges/join with view/iterator") |  the iterator type  
(exposition-only member class template*)  
---|---  
[_sentinel_](join_with_view/sentinel.html "cpp/ranges/join with view/sentinel") |  the sentinel type  
(exposition-only member class template*)  
  
### Notes

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_ranges_join_with`](../experimental/feature_test.html#cpp_lib_ranges_join_with "cpp/feature test") | [`202202L`](../compiler_support/23.html#cpp_lib_ranges_join_with_202202L "cpp/compiler support/23") | (C++23) | `std::ranges::join_with_view`  
  
### Example

Run this code
    
    
    #include <iostream>
    #include <ranges>
    #include <string_view>
    #include <vector>
     
    int main()
    {
        using namespace std::literals;
     
        [std::vector](../container/vector.html) v{"This"sv, "is"sv, "a"sv, "test."sv};
        auto joined = v | std::views::join_with(' ');
     
        for (auto c : joined)
            [std::cout](../io/cout.html) << c;
        [std::cout](../io/cout.html) << '\n';
    }

Output: 
    
    
    This is a test.

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 4074](https://cplusplus.github.io/LWG/issue4074) | C++23  | `join_with_view` was underconstrained  | updated the constraints   
  
### See also

[ ranges::join_viewviews::join](join_view.html "cpp/ranges/join view")(C++20) |  a [`view`](view.html "cpp/ranges/view") consisting of the sequence obtained from flattening a [`view`](view.html "cpp/ranges/view") of [`range`s](range.html "cpp/ranges/range")  
(class template) (range adaptor object)  
---|---  
[ ranges::concat_viewviews::concat](concat_view.html "cpp/ranges/concat view")(C++26) |  a [`view`](view.html "cpp/ranges/view") consisting of concatenation of the adapted views  
(class template) (customization point object)
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
