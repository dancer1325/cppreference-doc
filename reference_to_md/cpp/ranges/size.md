
  


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
  
| **size**  
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
inline constexpr auto size = /* unspecified */;  
} |  |  (since C++20)   
(customization point object)  
Call signature |  |   
template< class T >  
requires /* see below */  
constexpr auto size( T&& t ); |  |  (since C++20)  
| |   
  
Calculates the number of elements in t in constant time. 

Given the [subexpression](../language/expressions.html#Full-expressions "cpp/language/expressions") of which t denotes the (possibly [materialized](../language/implicit_cast.html#Temporary_materialization "cpp/language/implicit conversion")) result object as E, and the type of E as `T`: 

  * If `T` is an array of unknown bound, ranges::size(E) is ill-formed. 
  * Otherwise, if `T` is an array type, ranges::size(E) is [expression-equivalent](../language/expressions.html#Expression-equivalence "cpp/language/expressions") to [`_decay-copy_`](../standard_library/decay-copy.html "cpp/standard library/decay-copy") ﻿([std::extent_v](../types/extent.html)<T>)(until C++23)auto([std::extent_v](../types/extent.html)<T>)(since C++23). 
  * Otherwise, if all following conditions are satisfied, ranges::size(E) is expression-equivalent to [`_decay-copy_`](../standard_library/decay-copy.html "cpp/standard library/decay-copy") ﻿(t.size())(until C++23)auto(t.size())(since C++23): 
    * [ranges::disable_sized_range](sized_range.html)<[std::remove_cv_t](../types/remove_cv.html)<T>> is false. 
    * [`_decay-copy_`](../standard_library/decay-copy.html "cpp/standard library/decay-copy") ﻿(t.size())(until C++23)auto(t.size())(since C++23) is a valid expression of [integer-like type](../iterator/is-integer-like.html "cpp/iterator/is-integer-like"). 
  * Otherwise, if all following conditions are satisfied, ranges::size(E) is expression-equivalent to [`_decay-copy_`](../standard_library/decay-copy.html "cpp/standard library/decay-copy") ﻿(size(t))(until C++23)auto(size(t))(since C++23): 
    * `T` is a class or enumeration type. 
    * [ranges::disable_sized_range](sized_range.html)<[std::remove_cv_t](../types/remove_cv.html)<T>> is false. 
    * [`_decay-copy_`](../standard_library/decay-copy.html "cpp/standard library/decay-copy") ﻿(size(t))(until C++23)auto(size(t))(since C++23) is a valid expression of integer-like type, where the meaning of `size` is established as if by performing [argument-dependent lookup](../language/adl.html "cpp/language/adl") only. 
  * Otherwise, if all following conditions are satisfied, ranges::size(E) is expression-equivalent to `_[to-unsigned-like](../ranges.html#to-unsigned-like "cpp/ranges")_` ﻿([ranges::end](end.html)(t) - [ranges::begin](begin.html)(t)): 
    * `T` models [`forward_range`](forward_range.html "cpp/ranges/forward range"). 
    * Given the type of [ranges::begin](begin.html)(t) as `I` and the type of [ranges::end](end.html)(t) as `S`, both [`sized_sentinel_for`](../iterator/sized_sentinel_for.html "cpp/iterator/sized sentinel for")<S, I> and [`forward_iterator`](../iterator/forward_iterator.html "cpp/iterator/forward iterator")<I> are modeled. 
    * `_[to-unsigned-like](../ranges.html#to-unsigned-like "cpp/ranges")_` ﻿([ranges::end](end.html)(t) - [ranges::begin](begin.html)(t)) is a valid expression. 
  * Otherwise, ranges::size(E) is ill-formed. 



Diagnosable ill-formed cases above result in [substitution failure](../language/sfinae.html "cpp/language/sfinae") when ranges::size(E) appears in the immediate context of a template instantiation. 

## Contents

  * [1 Customization point objects](size.html#Customization_point_objects)
  * [2 Notes](size.html#Notes)
  * [3 Example](size.html#Example)
  * [4 Defect reports](size.html#Defect_reports)
  * [5 See also](size.html#See_also)

  
---  
  
###  Customization point objects

The name `ranges::size` denotes a _customization point object_ , which is a const [function object](../named_req/FunctionObject.html "cpp/named req/FunctionObject") of a [literal](../named_req/LiteralType.html "cpp/named req/LiteralType") [`semiregular`](../concepts/semiregular.html "cpp/concepts/semiregular") class type. See [CustomizationPointObject](../named_req/CustomizationPointObject.html "cpp/named req/CustomizationPointObject") for details. 

### Notes

Whenever ranges::size(e) is valid for an expression e, the return type is [integer-like](../iterator/is-integer-like.html "cpp/iterator/is-integer-like"). 

The C++20 standard requires that if the underlying `size` function call returns a prvalue, the return value is move-constructed from the materialized temporary object. All implementations directly return the prvalue instead. The requirement is corrected by the post-C++20 proposal [P0849R8](https://wg21.link/P0849R8) to match the implementations. 

The expression [ranges::distance](../iterator/ranges/distance.html)(e) can also be used to determine the size of a range e. Unlike ranges::size(e), [ranges::distance](../iterator/ranges/distance.html)(e) works even if e is an unsized range, at the cost of having linear complexity in that case. 

### Example

Run this code
    
    
    #include <iostream>
    #include <ranges>
    #include <type_traits>
    #include <vector>
     
    int main()
    {
        auto v = [std::vector](../container/vector.html)<int>{};
        [std::cout](../io/cout.html) << "ranges::size(v) == " << std::ranges::size(v) << '\n';
     
        auto il = {7};     // std::initializer_list
        [std::cout](../io/cout.html) << "ranges::size(il) == " << std::ranges::size(il) << '\n';
     
        int array[]{4, 5}; // array has a known bound
        [std::cout](../io/cout.html) << "ranges::size(array) == " << std::ranges::size(array) << '\n';
     
        static_assert([std::is_signed_v](../types/is_signed.html)<decltype(std::ranges::size(v))> == false);
    }

Output: 
    
    
    ranges::size(v) == 0
    ranges::size(il) == 1
    ranges::size(array) == 2

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[P2602R2](https://wg21.link/P2602R2) | C++20  | there's machinery to prohibit certain non-member `size` found by [ADL](../language/adl.html "cpp/language/adl") | removed such machinery   
  
### See also

[ ranges::ssize](ssize.html "cpp/ranges/ssize")(C++20) |  returns a signed integer equal to the size of a range  
(customization point object)  
---|---  
[ ranges::sized_range](sized_range.html "cpp/ranges/sized range")(C++20) |  specifies that a range knows its size in constant time   
(concept)   
[ ranges::distance](../iterator/ranges/distance.html "cpp/iterator/ranges/distance")(C++20) |  returns the distance between an iterator and a sentinel, or between the beginning and end of a range  
(algorithm function object)  
[ sizessize](../iterator/size.html "cpp/iterator/size")(C++17)(C++20) |  returns the size of a container or array   
(function template) 
