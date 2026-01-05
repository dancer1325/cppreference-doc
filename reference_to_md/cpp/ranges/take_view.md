
  


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
**take_view views::take**  
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
  
  
  


**`std::ranges::take_view`**

[Member functions](take_view.html#Member_functions "cpp/ranges/take view")  
---  
[take_view::take_view](take_view/take_view.html "cpp/ranges/take view/take view")  
[take_view::base](take_view/base.html "cpp/ranges/take view/base")  
[take_view::begin](take_view/begin.html "cpp/ranges/take view/begin")  
[take_view::end](take_view/end.html "cpp/ranges/take view/end")  
[take_view::size](take_view/size.html "cpp/ranges/take view/size")  
[take_view::reserve_hint](take_view/reserve_hint.html "cpp/ranges/take view/reserve hint")(C++26)  
[Deduction guides](take_view/deduction_guides.html "cpp/ranges/take view/deduction guides")  
[Sentinel](take_view/sentinel.html "cpp/ranges/take view/sentinel")  
Member functions  
[take_view::_sentinel_ ::_sentinel_](take_view/sentinel/sentinel.html "cpp/ranges/take view/sentinel/sentinel")  
Non-member functions  
[take_view::_sentinel_ ::base](take_view/sentinel/base.html "cpp/ranges/take view/sentinel/base")  
[operator==(std::counted_iterator,take_view::_sentinel_)](take_view/sentinel/operator_cmp.html "cpp/ranges/take view/sentinel/operator cmp")  
  


Defined in header `[<ranges>](../header/ranges.html "cpp/header/ranges")` |  |   
---|---|---  
template< [ranges::view](view.html) V >  
class take_view  
: public [ranges::view_interface](view_interface.html)<take_view<V>> |  (1)  |  (since C++20)  
namespace views {  
inline constexpr /* unspecified */ take = /* unspecified */;  
} |  (2)  |  (since C++20)  
Call signature |  |   
template< [ranges::viewable_range](viewable_range.html) R >  
requires /* see below */  
constexpr [ranges::view](view.html) auto  
take( R&& r, [ranges::range_difference_t](range_size_t.html)<R> count ); |  |  (since C++20)  
template< class DifferenceType >  
constexpr /* range adaptor closure */ take( DifferenceType&& count ); |  |  (since C++20)  
| |   
  
1) A range adaptor that represents [`view`](view.html "cpp/ranges/view") of the elements from an underlying sequence, starting at the beginning and ending at a given bound.

2) `views::take` is a [RangeAdaptorObject](../named_req/RangeAdaptorObject.html "cpp/named req/RangeAdaptorObject"). The expression views::take(e, f) results in a view that represents the first f elements from e. The result is not necessarily a `take_view`. 

views::take(e, f) is [expression-equivalent](../language/expressions.html#Expression-equivalence "cpp/language/expressions") to (where `T` is [std::remove_cvref_t](../types/remove_cvref.html)<decltype((e))> and `D` is [ranges::range_difference_t](range_size_t.html)<decltype((e))>): 

  * ((void)f,` `[` _decay-copy_`](../standard_library/decay-copy.html "cpp/standard library/decay-copy")(e)), if `T` is a [ranges::empty_view](empty_view.html), except that the evaluations of e and f are indeterminately sequenced; 
  * U([ranges::begin](begin.html)(e), [ranges::begin](begin.html)(e) + [std::min](../algorithm/min.html)<D>([ranges::distance](../iterator/ranges/distance.html)(e), f)), if `T` is a specialization of [std::span](../container/span.html), [std::basic_string_view](../string/basic_string_view.html "cpp/string/basic string view"), or [ranges::subrange](subrange.html) that models both [`random_access_range`](random_access_range.html "cpp/ranges/random access range") and [`sized_range`](sized_range.html "cpp/ranges/sized range"), where `U` is 



    

  * [std::span](../container/span.html)<typename T::element_type>, if `T` is a specialization of [std::span](../container/span.html); 
  * `T`, if `T` is a specialization of [std::basic_string_view](../string/basic_string_view.html "cpp/string/basic string view"); 
  * [ranges::subrange](subrange.html)<[ranges::iterator_t](iterator_t.html)<T>>, if `T` is a specialization of [ranges::subrange](subrange.html); 



  * [ranges::iota_view](iota_view.html)(*[ranges::begin](begin.html)(e),  
*([ranges::begin](begin.html)(e) + [std::min](../algorithm/min.html)<D>([ranges::distance](../iterator/ranges/distance.html)(e), f))), if `T` is a specialization of [ranges::iota_view](iota_view.html) that models both [`random_access_range`](random_access_range.html "cpp/ranges/random access range") and [`sized_range`](sized_range.html "cpp/ranges/sized range"); 



  * otherwise, if `T` is a specialization of [`ranges::repeat_view`](repeat_view.html "cpp/ranges/repeat view"): 



    

  * [views::repeat](repeat_view.html)(*e.value_, [std::min](../algorithm/min.html)<D>([ranges::distance](../iterator/ranges/distance.html)(e), f)), if `T` models [`sized_range`](sized_range.html "cpp/ranges/sized range"); is such case e is evaluated only once; 
  * [views::repeat](repeat_view.html)(*e.value_, static_cast<D>(e)) otherwise; 


| (since C++23)  
---|---  
  
  * otherwise, take_view(e, f). 

In all cases, decltype((f)) must model [std::convertible_to](../concepts/convertible_to.html)<D>.

`take_view` models the concepts [`contiguous_range`](contiguous_range.html "cpp/ranges/contiguous range"), [`random_access_range`](random_access_range.html "cpp/ranges/random access range"), [`bidirectional_range`](bidirectional_range.html "cpp/ranges/bidirectional range"), [`forward_range`](forward_range.html "cpp/ranges/forward range"), [`input_range`](input_range.html "cpp/ranges/input range"), and [`sized_range`](sized_range.html "cpp/ranges/sized range") when the underlying view `V` models respective concepts. It models [`common_range`](common_range.html "cpp/ranges/common range") when the underlying view `V` models both [`random_access_range`](random_access_range.html "cpp/ranges/random access range") and [`sized_range`](sized_range.html "cpp/ranges/sized range"). 

## Contents

  * [1 Data members](take_view.html#Data_members)
  * [2 Member functions](take_view.html#Member_functions)
    * [2.1 Inherited from std::ranges::view_interface](take_view.html#Inherited_from_std::ranges::view_interface)
  * [3 Deduction guides](take_view.html#Deduction_guides)
  * [4 Nested classes](take_view.html#Nested_classes)
  * [5 Helper templates](take_view.html#Helper_templates)
  * [6 Example](take_view.html#Example)
  * [7 Defect reports](take_view.html#Defect_reports)
  * [8 See also](take_view.html#See_also)

  
---  
  
### Data members

Member  |  Description   
---|---  
`V` `_base__` |  the underlying view  
(exposition-only member object*)  
[ranges::range_difference_t](range_size_t.html)<V> `_count__` |  the number of elements to take  
(exposition-only member object*)  
  
### Member functions

[ (constructor)](take_view/take_view.html "cpp/ranges/take view/take view") |  constructs a `take_view`   
(public member function)   
---|---  
[ base](take_view/base.html "cpp/ranges/take view/base") |  returns a copy of the underlying (adapted) view   
(public member function)   
[ begin](take_view/begin.html "cpp/ranges/take view/begin") |  returns an iterator to the beginning   
(public member function)   
[ end](take_view/end.html "cpp/ranges/take view/end") |  returns an iterator or a sentinel to the end   
(public member function)   
[ size](take_view/size.html "cpp/ranges/take view/size") |  returns the number of elements, provided only if the underlying (adapted) range satisfies [`sized_range`](sized_range.html "cpp/ranges/sized range")   
(public member function)   
[ reserve_hint](take_view/reserve_hint.html "cpp/ranges/take view/reserve hint")(C++26) |  returns the approximate size of the resulting [`approximately_sized_range`](approximately_sized_range.html "cpp/ranges/approximately sized range")   
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
[ back](view_interface/back.html "cpp/ranges/view interface/back") |  returns the last element in the derived view, provided only if it satisfies [`bidirectional_range`](bidirectional_range.html "cpp/ranges/bidirectional range") and [`common_range`](common_range.html "cpp/ranges/common range")   
(public member function of `std::ranges::view_interface<D>`)   
[ operator[]](view_interface/operator_at.html "cpp/ranges/view interface/operator at") |  returns the `n`th element in the derived view, provided only if it satisfies [`random_access_range`](random_access_range.html "cpp/ranges/random access range")   
(public member function of `std::ranges::view_interface<D>`)   
  
### [Deduction guides](take_view/deduction_guides.html "cpp/ranges/take view/deduction guides")

### Nested classes

[_sentinel_](take_view/sentinel.html "cpp/ranges/take view/sentinel")(C++20) |  the sentinel type  
(exposition-only member class template*)  
---|---  
  
### Helper templates

template< class T >  
constexpr bool enable_borrowed_range<std::ranges::take_view<T>> =  
[ranges::enable_borrowed_range](borrowed_range.html)<T>; |  |  (since C++20)  
---|---|---  
| |   
  
This specialization of [ranges::enable_borrowed_range](borrowed_range.html "cpp/ranges/borrowed range") makes `take_view` satisfy [`borrowed_range`](borrowed_range.html "cpp/ranges/borrowed range") when the underlying view satisfies it. 

### Example

Run this code
    
    
    #include <algorithm>
    #include <iostream>
    #include <ranges>
     
    int main()
    {
        namespace views = std::views;
        auto print = [](char x){ [std::cout](../io/cout.html) << x; };
     
        for (const char nums[]{'1', '2', '3'};
             int n : [views::iota](iota_view.html)(0, 5))
        {
            [std::cout](../io/cout.html) << "take(" << n << "): ";
            // safely takes only upto min(n, nums.size()) elements:
            std::[ranges::for_each](../algorithm/ranges/for_each.html)(nums | views::take(n), print);
            [std::cout](../io/cout.html) << '\n';
        }
    }

Output: 
    
    
    take(0): 
    take(1): 1
    take(2): 12
    take(3): 123
    take(4): 123

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3407](https://cplusplus.github.io/LWG/issue3407) | C++20  | `views::take` sometimes failed to  
construct a sized random access range  | the result type is adjusted so  
that construction is always valid   
[LWG 3494](https://cplusplus.github.io/LWG/issue3494) | C++20  | `take_view` was never a `borrowed_range` | it is a `borrowed_range` if its underlying view is   
  
### See also

[ views::counted](counted_view.html "cpp/ranges/view counted")(C++20) |  creates a subrange from an iterator and a count  
(customization point object)  
---|---  
[ ranges::take_while_viewviews::take_while](take_while_view.html "cpp/ranges/take while view")(C++20) |  a [`view`](view.html "cpp/ranges/view") consisting of the initial elements of another [`view`](view.html "cpp/ranges/view"), until the first element on which a predicate returns false  
(class template) (range adaptor object)  
[ ranges::copy_n](../algorithm/ranges/copy_n.html "cpp/algorithm/ranges/copy n")(C++20) |  copies a number of elements to a new location  
(algorithm function object)
