
  


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
  
| **iota_view views::iota**` `  
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
  
  
  


**`std::ranges::iota_view`**

[Member functions](iota_view.html#Member_functions "cpp/ranges/iota view")  
---  
[iota_view::iota_view](iota_view/iota_view.html "cpp/ranges/iota view/iota view")  
[iota_view::begin](iota_view/begin.html "cpp/ranges/iota view/begin")  
[iota_view::end](iota_view/end.html "cpp/ranges/iota view/end")  
[iota_view::empty](iota_view/empty.html "cpp/ranges/iota view/empty")  
[iota_view::size](iota_view/size.html "cpp/ranges/iota view/size")  
[Deduction guides](iota_view/deduction_guides.html "cpp/ranges/iota view/deduction guides")  
[Nested classes](iota_view.html#Nested_classes "cpp/ranges/iota view")  
[_Iterator_](iota_view/iterator.html "cpp/ranges/iota view/iterator")  
[Helper concepts](iota_view/iterator.html "cpp/ranges/iota view/iterator")  
[_decrementable_](iota_view/iterator.html#Version_decrementable "cpp/ranges/iota view/iterator")  
[_advanceable_](iota_view/iterator.html#Version_advanceable "cpp/ranges/iota view/iterator")  
[Member types](iota_view/iterator.html#Member_types "cpp/ranges/iota view/iterator")  
[Member functions](iota_view/iterator.html#Member_functions "cpp/ranges/iota view/iterator")  
[iota_view::_iterator_ ::_iterator_](iota_view/iterator.html#Member_functions "cpp/ranges/iota view/iterator")  
[iota_view::_iterator_ ::operator*](iota_view/iterator.html#Member_functions "cpp/ranges/iota view/iterator")  
[iota_view::_iterator_ ::operator[]](iota_view/iterator.html#Member_functions "cpp/ranges/iota view/iterator")  
[iota_view::_iterator_ ::operator++  
iota_view::_iterator_ ::operator++(int)](iota_view/iterator.html#Member_functions "cpp/ranges/iota view/iterator")  
[iota_view::_iterator_ ::operator--  
iota_view::_iterator_ ::operator--(int)](iota_view/iterator.html#Member_functions "cpp/ranges/iota view/iterator")  
[iota_view::_iterator_ ::operator+=](iota_view/iterator.html#Member_functions "cpp/ranges/iota view/iterator")  
[iota_view::_iterator_ ::operator-=](iota_view/iterator.html#Member_functions "cpp/ranges/iota view/iterator")  
[Non-member functions](iota_view/iterator.html#Non-member_functions "cpp/ranges/iota view/iterator")  
[operator==(iota_view::_iterator_)  
operator<(iota_view::_iterator_)  
operator>(iota_view::_iterator_)  
operator<=(iota_view::_iterator_)  
operator>=(iota_view::_iterator_)  
operator<=>(iota_view::_iterator_)](iota_view/iterator.html#Non-member_functions "cpp/ranges/iota view/iterator")  
[operator+(iota_view::_iterator_)](iota_view/iterator.html#Non-member_functions "cpp/ranges/iota view/iterator")  
[operator-(iota_view::_iterator_)](iota_view/iterator.html#Non-member_functions "cpp/ranges/iota view/iterator")  
[_Sentinel_](iota_view/sentinel.html "cpp/ranges/iota view/sentinel")  
[Member functions](iota_view/sentinel.html#Member_functions "cpp/ranges/iota view/sentinel")  
[iota_view::_sentinel_ ::_sentinel_](iota_view/sentinel.html#Member_functions "cpp/ranges/iota view/sentinel")  
[Non-member functions](iota_view/sentinel.html#Non-member_functions "cpp/ranges/iota view/sentinel")  
[operator==(iota_view::_iterator_ ,iota_view::_sentinel_)](iota_view/sentinel.html#Non-member_functions "cpp/ranges/iota view/sentinel")  
[operator-(iota_view::_iterator_ ,iota_view::_sentinel_)](iota_view/sentinel.html#Non-member_functions "cpp/ranges/iota view/sentinel")  
  


Defined in header `[<ranges>](../header/ranges.html "cpp/header/ranges")` |  |   
---|---|---  
template< [std::weakly_incrementable](../iterator/weakly_incrementable.html) W,  
[std::semiregular](../concepts/semiregular.html) Bound = [std::unreachable_sentinel_t](../iterator/unreachable_sentinel_t.html) >  
requires /*weakly-equality-comparable-with*/<W, Bound> && [std::copyable](../concepts/copyable.html)<W>  
class iota_view  
: public [ranges::view_interface](view_interface.html)<iota_view<W, Bound>> |  (1)  |  (since C++20)  
namespace views {  
inline constexpr /* unspecified */ iota = /* unspecified */;  
} |  (2)  |  (since C++20)  
Call signature |  |   
template< class W >  
requires /* see below */  
constexpr /* see below */ iota( W&& value ); |  |  (since C++20)  
template< class W, class Bound >  
requires /* see below */  
constexpr /* see below */ iota( W&& value, Bound&& bound ); |  |  (since C++20)  
| |   
  
1) A range factory that generates a sequence of elements by repeatedly incrementing an initial value. Can be either bounded or unbounded (infinite).

2) views::iota(e) and views::iota(e, f) are [expression-equivalent](../language/expressions.html#Expression-equivalence "cpp/language/expressions") to iota_view<[std::decay_t](../types/decay.html)<decltype((e))>>(e) and iota_view(e, f) respectively for any suitable subexpressions e and f.

## Contents

  * [1 Customization point objects](iota_view.html#Customization_point_objects)
  * [2 Data members](iota_view.html#Data_members)
  * [3 Member functions](iota_view.html#Member_functions)
    * [3.1 Inherited from std::ranges::view_interface](iota_view.html#Inherited_from_std::ranges::view_interface)
  * [4 Deduction guides](iota_view.html#Deduction_guides)
  * [5 Nested classes](iota_view.html#Nested_classes)
  * [6 Helper templates](iota_view.html#Helper_templates)
  * [7 Example](iota_view.html#Example)
  * [8 Defect reports](iota_view.html#Defect_reports)
  * [9 See also](iota_view.html#See_also)

  
---  
  
###  Customization point objects

The name `views::iota` denotes a _customization point object_ , which is a const [function object](../named_req/FunctionObject.html "cpp/named req/FunctionObject") of a [literal](../named_req/LiteralType.html "cpp/named req/LiteralType") [`semiregular`](../concepts/semiregular.html "cpp/concepts/semiregular") class type. See [CustomizationPointObject](../named_req/CustomizationPointObject.html "cpp/named req/CustomizationPointObject") for details. 

### Data members

Member  |  Definition   
---|---  
`W` `_value__` |  the beginning value  
(exposition-only member object*)  
`Bound` `_bound__` |  the sentinel value, may be unreachable  
(exposition-only member object*)  
  
### Member functions

[ (constructor)](iota_view/iota_view.html "cpp/ranges/iota view/iota view") |  creates an `iota_view`   
(public member function)  
---|---  
[ begin](iota_view/begin.html "cpp/ranges/iota view/begin") |  obtains the beginning iterator of an `iota_view`   
(public member function)  
[ end](iota_view/end.html "cpp/ranges/iota view/end") |  obtains the sentinel denoting the end of an `iota_view`   
(public member function)  
[ empty](iota_view/empty.html "cpp/ranges/iota view/empty") |  tests whether the `iota_view` is empty (i.e. the iterator and the sentinel compare equal)   
(public member function)  
[ size](iota_view/size.html "cpp/ranges/iota view/size")(optional) |  obtains the size of an `iota_view` (only provided if it is bounded)   
(public member function)  
  
#####  Inherited from [std::ranges::view_interface](view_interface.html "cpp/ranges/view interface")  
  
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
  
### [Deduction guides](iota_view/deduction_guides.html "cpp/ranges/iota view/deduction guides")

### Nested classes

[_iterator_](iota_view/iterator.html "cpp/ranges/iota view/iterator") |  the iterator type  
(exposition-only member class*)  
---|---  
[_sentinel_](iota_view/sentinel.html "cpp/ranges/iota view/sentinel") |  the sentinel type used when the `iota_view` is bounded and `Bound` and `W` are not the same type  
(exposition-only member class*)  
  
### Helper templates

template< [std::weakly_incrementable](../iterator/weakly_incrementable.html) W, [std::semiregular](../concepts/semiregular.html) Bound >  
constexpr bool [ranges::enable_borrowed_range](borrowed_range.html)<ranges::iota_view<W, Bound>> = true; |  |  (since C++20)  
---|---|---  
| |   
  
This specialization of [ranges::enable_borrowed_range](borrowed_range.html) makes `iota_view` satisfy [`borrowed_range`](borrowed_range.html "cpp/ranges/borrowed range"). 

### Example

Run this code
    
    
    #include <algorithm>
    #include <iostream>
    #include <ranges>
     
    struct Bound
    {
        int bound;
        bool operator==(int x) const { return x == bound; }
    };
     
    int main()
    {
        for (int i : std::ranges::iota_view{1, 10})
            [std::cout](../io/cout.html) << i << ' ';
        [std::cout](../io/cout.html) << '\n';
     
        for (int i : std::views::iota(1, 10))
            [std::cout](../io/cout.html) << i << ' ';
        [std::cout](../io/cout.html) << '\n';
     
        for (int i : std::views::iota(1, Bound{10}))
            [std::cout](../io/cout.html) << i << ' ';
        [std::cout](../io/cout.html) << '\n';
     
        for (int i : std::views::iota(1) | std::[views::take](take_view.html)(9))
            [std::cout](../io/cout.html) << i << ' ';
        [std::cout](../io/cout.html) << '\n';
     
        std::[ranges::for_each](../algorithm/ranges/for_each.html)(std::views::iota(1, 10),
                              [](int i){ [std::cout](../io/cout.html) << i << ' '; });
        [std::cout](../io/cout.html) << '\n';
    }

Output: 
    
    
    1 2 3 4 5 6 7 8 9
    1 2 3 4 5 6 7 8 9
    1 2 3 4 5 6 7 8 9
    1 2 3 4 5 6 7 8 9
    1 2 3 4 5 6 7 8 9

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 4096](https://cplusplus.github.io/LWG/issue4096) | C++20  | `views::iota` could copy an `iota_view` as-is  | forbidden   
[P2325R3](https://wg21.link/P2325R3) | C++20  | `iota_view` required that `W` is [`semiregular`](../concepts/semiregular.html "cpp/concepts/semiregular")  
as [`view`](view.html "cpp/ranges/view") required [`default_initializable`](../concepts/default_initializable.html "cpp/concepts/default initializable") | only requires that `W` is [`copyable`](../concepts/copyable.html "cpp/concepts/copyable")  
  
### See also

[ iota](../algorithm/iota.html "cpp/algorithm/iota")(C++11) |  fills a range with successive increments of the starting value   
(function template)   
---|---  
[ ranges::iota](../algorithm/ranges/iota.html "cpp/algorithm/ranges/iota")(C++23) |  fills a range with successive increments of the starting value  
(algorithm function object)  
[ ranges::repeat_viewviews::repeat](repeat_view.html "cpp/ranges/repeat view")(C++23) |  a [`view`](view.html "cpp/ranges/view") consisting of a generated sequence by repeatedly producing the same value  
(class template) (customization point object)  
[ ranges::enumerate_viewviews::enumerate](enumerate_view.html "cpp/ranges/enumerate view")(C++23) |  a [`view`](view.html "cpp/ranges/view") that maps each element of adapted sequence to a tuple of both the element's position and its value  
(class template) (range adaptor object)
