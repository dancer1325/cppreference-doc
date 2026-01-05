
  


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
**rend**  
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
Defined in header `[<iterator>](../header/iterator.html "cpp/header/iterator")` |  |   
inline namespace /* unspecified */ {  
inline constexpr /* unspecified */ rend = /* unspecified */;  
} |  |  (since C++20)   
(customization point object)  
Call signature |  |   
template< class T >  
requires /* see below */  
constexpr [std::sentinel_for](../iterator/sentinel_for.html)<  
decltype([ranges::rbegin](rbegin.html)([std::declval](../utility/declval.html)<T>()))> auto rend( T&& t ); |  |  (since C++20)  
| |   
  
Returns a sentinel indicating the end of a reversed range. 

![range-rbegin-rend.svg](https://upload.cppreference.com/mwiki/images/3/39/range-rbegin-rend.svg)

If `T` is an array type and [std::remove_all_extents_t](../types/remove_all_extents.html)<[std::remove_reference_t](../types/remove_reference.html)<T>> is incomplete, then the call to `ranges::rend` is ill-formed, no diagnostic required. 

If the argument is an lvalue or [ranges::enable_borrowed_range](borrowed_range.html)<[std::remove_cv_t](../types/remove_cv.html)<T>> is true, then a call to `ranges::rend` is [expression-equivalent](../language/expressions.html#Expression-equivalence "cpp/language/expressions") to: 

  1. [`_decay-copy_`](../standard_library/decay-copy.html "cpp/standard library/decay-copy")(t.rend())(until C++23)auto(t.rend())(since C++23), if that expression is valid and its type models [std::sentinel_for](../iterator/sentinel_for.html)<decltype([ranges::rbegin](rbegin.html)([std::declval](../utility/declval.html)<T>()))>. 
  2. Otherwise, [`_decay-copy_`](../standard_library/decay-copy.html "cpp/standard library/decay-copy")(rend(t))(until C++23)auto(rend(t))(since C++23), if `T` is a class or enumeration type, that expression is valid and its type models [std::sentinel_for](../iterator/sentinel_for.html)<decltype([ranges::rbegin](rbegin.html)([std::declval](../utility/declval.html)<T>()))>, where the meaning of `rend` is established as if by performing [argument-dependent lookup](../language/adl.html "cpp/language/adl") only. 
  3. Otherwise, [std::make_reverse_iterator](../iterator/make_reverse_iterator.html)([ranges::begin](begin.html)(t)) if both [ranges::begin](begin.html)(t) and [ranges::end](end.html)(t) are valid expressions, have the same type, and that type models [std::bidirectional_iterator](../iterator/bidirectional_iterator.html "cpp/iterator/bidirectional iterator"). 



In all other cases, a call to `ranges::rend` is ill-formed, which can result in [substitution failure](../language/sfinae.html "cpp/language/sfinae") when ranges::rend(t) appears in the immediate context of a template instantiation. 

## Contents

  * [1 Customization point objects](rend.html#Customization_point_objects)
  * [2 Notes](rend.html#Notes)
  * [3 Example](rend.html#Example)
  * [4 Defect reports](rend.html#Defect_reports)
  * [5 See also](rend.html#See_also)

  
---  
  
###  Customization point objects

The name `ranges::rend` denotes a _customization point object_ , which is a const [function object](../named_req/FunctionObject.html "cpp/named req/FunctionObject") of a [literal](../named_req/LiteralType.html "cpp/named req/LiteralType") [`semiregular`](../concepts/semiregular.html "cpp/concepts/semiregular") class type. See [CustomizationPointObject](../named_req/CustomizationPointObject.html "cpp/named req/CustomizationPointObject") for details. 

### Notes

If the argument is an rvalue (i.e. `T` is an object type) and [ranges::enable_borrowed_range](borrowed_range.html)<[std::remove_cv_t](../types/remove_cv.html)<T>> is false, or if it is of an array type of unknown bound, the call to `ranges::rend` is ill-formed, which also results in substitution failure. 

If ranges::rend([std::forward](../utility/forward.html)<T>(t)) is valid, then decltype(ranges::rend([std::forward](../utility/forward.html)<T>(t))) and decltype([ranges::begin](begin.html)([std::forward](../utility/forward.html)<T>(t))) model [std::sentinel_for](../iterator/sentinel_for.html "cpp/iterator/sentinel for") in all cases, while `T` models [std::ranges::range](range.html "cpp/ranges/range"). 

The C++20 standard requires that if the underlying `rend` function call returns a prvalue, the return value is move-constructed from the materialized temporary object. All implementations directly return the prvalue instead. The requirement is corrected by the post-C++20 proposal [P0849R8](https://wg21.link/P0849R8) to match the implementations. 

### Example

Run this code
    
    
    #include <algorithm>
    #include <iostream>
    #include <ranges>
    #include <vector>
     
    int main()
    {
        [std::vector](../container/vector.html)<int> v = {3, 1, 4};
        namespace ranges = std::ranges;
        if ([ranges::find](../algorithm/ranges/find.html)([ranges::rbegin](rbegin.html)(v), ranges::rend(v), 5) != ranges::rend(v))
            [std::cout](../io/cout.html) << "found a 5 in vector v!\n";
     
        int a[] = {5, 10, 15};
        if ([ranges::find](../algorithm/ranges/find.html)([ranges::rbegin](rbegin.html)(a), ranges::rend(a), 5) != ranges::rend(a))
            [std::cout](../io/cout.html) << "found a 5 in array a!\n";
    }

Output: 
    
    
    found a 5 in array a!

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[P2602R2](https://wg21.link/P2602R2) | C++20  | there's machinery to prohibit certain non-member `rend` found by [ADL](../language/adl.html "cpp/language/adl") | removed such machinery   
  
### See also

[ ranges::crend](crend.html "cpp/ranges/crend")(C++20) |  returns a reverse end iterator to a read-only range  
(customization point object)  
---|---  
[ ranges::rbegin](rbegin.html "cpp/ranges/rbegin")(C++20) |  returns a reverse iterator to a range  
(customization point object)  
[ rendcrend](../iterator/rend.html "cpp/iterator/rend")(C++14) |  returns a reverse end iterator for a container or array   
(function template) 
