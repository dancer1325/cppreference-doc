
  


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
**reverse_view views::reverse**  
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
template< [ranges::view](view.html) V >  
requires [ranges::bidirectional_range](bidirectional_range.html)<V>  
class reverse_view  
: public [ranges::view_interface](view_interface.html)<reverse_view<V>> |  (1)  |  (since C++20)  
namespace views {  
inline constexpr /* unspecified */ reverse = /* unspecified */;  
} |  (2)  |  (since C++20)  
Call signature |  |   
template< [ranges::viewable_range](viewable_range.html) R >  
requires /* see below */  
constexpr [ranges::view](view.html) auto reverse( R&& r ); |  |  (since C++20)  
| |   
  
1) A range adaptor that represents a view of underlying [`view`](view.html "cpp/ranges/view") with reversed order.

2) [RangeAdaptorObject](../named_req/RangeAdaptorObject.html "cpp/named req/RangeAdaptorObject"). The expression views::reverse(e) is [expression-equivalent](../language/expressions.html#Expression-equivalence "cpp/language/expressions") to one of the following expressions, except that e is evaluated only once: 

  * e.base(), if the type of `e` is a (possibly cv-qualified) specialization of `reverse_view`; 
  * otherwise, if the type of e is (possibly cv-qualified) [ranges::subrange](subrange.html)<[std::reverse_iterator](../iterator/reverse_iterator.html)<I>, [std::reverse_iterator](../iterator/reverse_iterator.html)<I>, K> for some iterator type `I` and value `K` of type `ranges::subrange_kind`: 



    

  * [ranges::subrange](subrange.html)<I, I, K>(e.end().base(), e.begin().base(), e.size()), if `K` is `ranges::subrange_kind::sized`; 
  * otherwise [ranges::subrange](subrange.html)<I, I, K>(e.end().base(), e.begin().base()); 



  * otherwise ranges::reverse_view{e}. 

In other words, `views::reverse` unwraps reversed views if possible.

A `reverse_view` always models [`bidirectional_range`](bidirectional_range.html "cpp/ranges/bidirectional range") and [`common_range`](common_range.html "cpp/ranges/common range"), and it models [`borrowed_range`](borrowed_range.html "cpp/ranges/borrowed range"), [`sized_range`](sized_range.html "cpp/ranges/sized range"), or [`random_access_range`](random_access_range.html "cpp/ranges/random access range") if the underlying view type `V` models the corresponding concept. 

## Contents

  * [1 Data members](reverse_view.html#Data_members)
  * [2 Member functions](reverse_view.html#Member_functions)
    * [2.1 Inherited from std::ranges::view_interface](reverse_view.html#Inherited_from_std::ranges::view_interface)
  * [3 std::ranges::reverse_view::reverse_view](reverse_view.html#std::ranges::reverse_view::reverse_view)
    * [3.1 Parameters](reverse_view.html#Parameters)
  * [4 std::ranges::reverse_view::base](reverse_view.html#std::ranges::reverse_view::base)
  * [5 std::ranges::reverse_view::begin](reverse_view.html#std::ranges::reverse_view::begin)
  * [6 std::ranges::reverse_view::end](reverse_view.html#std::ranges::reverse_view::end)
  * [7 std::ranges::reverse_view::size](reverse_view.html#std::ranges::reverse_view::size)
  * [8 std::ranges::as_rvalue_view::reserve_hint](reverse_view.html#std::ranges::as_rvalue_view::reserve_hint)
    * [8.1 Deduction guides](reverse_view.html#Deduction_guides)
    * [8.2 Helper templates](reverse_view.html#Helper_templates)
    * [8.3 Notes](reverse_view.html#Notes)
    * [8.4 Example](reverse_view.html#Example)
    * [8.5 Defect reports](reverse_view.html#Defect_reports)
    * [8.6 See also](reverse_view.html#See_also)

  
---  
  
### Data members

Member  |  Description   
---|---  
`V` `_base__` (private) |  the underlying view  
(exposition-only member object*)  
[`_non-propagating-cache_`](non-propagating-cache.html "cpp/ranges/non-propagating-cache") <[ranges::iterator_t](iterator_t.html)<V>> `_cached_end__` (private)   
(present only if `V` does not satisfy [`common_range`](common_range.html "cpp/ranges/common range")) |  an object that caches the result of calls to [`begin()`](../ranges.html#begin "cpp/ranges")  
(exposition-only member object*)  
  
### Member functions

[ (constructor)](reverse_view.html#constructor "cpp/ranges/reverse view") |  constructs a `reverse_view`   
(public member function)  
---|---  
[ base](reverse_view.html#base "cpp/ranges/reverse view") |  returns the underlying view `V`   
(public member function)  
[ begin](reverse_view.html#begin "cpp/ranges/reverse view") |  returns the beginning iterator of the `reverse_view`   
(public member function)  
[ end](reverse_view.html#end "cpp/ranges/reverse view") |  returns the end iterator of the `reverse_view`   
(public member function)  
[ size](reverse_view.html#size "cpp/ranges/reverse view") |  returns the size of the view if it is bounded   
(public member function)  
[ reserve_hint](reverse_view.html#reserve_hint "cpp/ranges/reverse view")(C++26) |  returns the approximate size of the underlying [`approximately_sized_range`](approximately_sized_range.html "cpp/ranges/approximately sized range")   
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
  
##  std::ranges::reverse_view::reverse_view

reverse_view() requires [std::default_initializable](../concepts/default_initializable.html)<V> = default; |  (1)  |  (since C++20)  
---|---|---  
constexpr reverse_view( V r ); |  (2)  |  (since C++20)  
| |   
  
1) Value-initializes `_[base_](reverse_view.html#base)_` ﻿ via its default member initializer (= V()).

2) Initializes `_[base_](reverse_view.html#base)_` ﻿ with std::move(r).

###  Parameters

r  |  \-  |  range to reverse   
---|---|---  
  
##  std::ranges::reverse_view::base

constexpr V base() const& requires [std::copy_constructible](../concepts/copy_constructible.html)<V>; |  (1)  |  (since C++20)  
---|---|---  
constexpr V base() &&; |  (2)  |  (since C++20)  
| |   
  
Returns the underlying view. 

1) Copy-constructs the result from the underlying view. Equivalent to return` `` _[base_](reverse_view.html#base)_` ﻿;.

2) Move-constructs the result from the underlying view. Equivalent to return std::move(`_[base_](reverse_view.html#base)_` ﻿);.

##  std::ranges::reverse_view::begin

constexpr [std::reverse_iterator](../iterator/reverse_iterator.html)<[ranges::iterator_t](iterator_t.html)<V>> begin(); |  (1)  |  (since C++20)  
---|---|---  
constexpr [std::reverse_iterator](../iterator/reverse_iterator.html)<[ranges::iterator_t](iterator_t.html)<V>> begin()  
requires [ranges::common_range](common_range.html)<V>; |  (2)  |  (since C++20)  
constexpr auto begin() const requires [ranges::common_range](common_range.html)<const V>; |  (3)  |  (since C++20)  
| |   
  
1) Returns [std::make_reverse_iterator](../iterator/make_reverse_iterator.html)([ranges::next](../iterator/ranges/next.html)([ranges::begin](begin.html)(`_[base_](reverse_view.html#base)_` ﻿),  
` `[ranges::end](end.html)(`_[base_](reverse_view.html#base)_` ﻿))).

In order to provide the amortized constant time complexity required by the [`range`](range.html "cpp/ranges/range") concept, this function caches the result within the cache object for use on subsequent calls.

2,3) Equivalent to return [std::make_reverse_iterator](../iterator/make_reverse_iterator.html)([ranges::end](end.html)(`_[base_](reverse_view.html#base)_` ﻿));.

##  std::ranges::reverse_view::end

constexpr [std::reverse_iterator](../iterator/reverse_iterator.html)<[ranges::iterator_t](iterator_t.html)<V>> end(); |  (1)  |  (since C++20)  
---|---|---  
constexpr auto end() const requires [ranges::common_range](common_range.html)<const V>; |  (2)  |  (since C++20)  
| |   
  
Equivalent to return [std::make_reverse_iterator](../iterator/make_reverse_iterator.html)([ranges::begin](begin.html)(`_[base_](reverse_view.html#base)_` ﻿));. 

##  std::ranges::reverse_view::size

constexpr auto size() requires [ranges::sized_range](sized_range.html)<V>; |  (1)  |  (since C++20)  
---|---|---  
constexpr auto size() const requires [ranges::sized_range](sized_range.html)<const V>; |  (2)  |  (since C++20)  
| |   
  
Returns the size of the view if the view is bounded. Equivalent to return [ranges::size](size.html)(`_[base_](reverse_view.html#base)_` ﻿);. 

##  std::ranges::as_rvalue_view::reserve_hint

constexpr auto reserve_hint()  
requires ranges::approximately_sized_range<V>; |  (1)  |  (since C++26)  
---|---|---  
constexpr auto reserve_hint() const  
requires ranges::approximately_sized_range<const V>; |  (2)  |  (since C++26)  
| |   
  
Returns ranges::reserve_hint(`_[base_](reverse_view.html#base)_` ﻿). 

### Deduction guides

template< class R >  
reverse_view( R&& ) -> reverse_view<[views::all_t](all_view.html)<R>>; |  |  (since C++20)  
---|---|---  
| |   
  
### Helper templates

template< class T >  
constexpr bool enable_borrowed_range<std::ranges::reverse_view<T>> =  
[ranges::enable_borrowed_range](borrowed_range.html)<T>; |  |  (since C++20)  
---|---|---  
| |   
  
This specialization of [`std::ranges::enable_borrowed_range`](borrowed_range.html "cpp/ranges/borrowed range") makes `reverse_view` satisfy [`borrowed_range`](borrowed_range.html "cpp/ranges/borrowed range") when the underlying view satisfies it. 

### Notes

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_ranges_reserve_hint`](../experimental/feature_test.html#cpp_lib_ranges_reserve_hint "cpp/feature test") | [`202502L`](../compiler_support/26.html#cpp_lib_ranges_reserve_hint_202502L "cpp/compiler support/26") | (C++26) | ranges::approximately_sized_range and `[reserve_hint](reverse_view.html#reserve_hint)`  
  
### Example

Run this code
    
    
    #include <iostream>
    #include <ranges>
     
    int main()
    {
        static constexpr auto il = {3, 1, 4, 1, 5, 9};
     
        std::ranges::reverse_view rv{il};
        for (int i : rv)
            [std::cout](../io/cout.html) << i << ' ';
        [std::cout](../io/cout.html) << '\n';
     
        for (int i : il | std::views::reverse)
            [std::cout](../io/cout.html) << i << ' ';
        [std::cout](../io/cout.html) << '\n';
     
        // operator[] is inherited from std::view_interface
        for (auto i{0U}; i != rv.size(); ++i)
            [std::cout](../io/cout.html) << rv[i] << ' ';
        [std::cout](../io/cout.html) << '\n';
    }

Output: 
    
    
    9 5 1 4 1 3
    9 5 1 4 1 3
    9 5 1 4 1 3

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3494](https://cplusplus.github.io/LWG/issue3494) | C++20  | `reverse_view` was never a `borrowed_range` | it is a `borrowed_range` if its underlying view is   
  
### See also

[ reverse_iterator](../iterator/reverse_iterator.html "cpp/iterator/reverse iterator") |  iterator adaptor for reverse-order traversal   
(class template)   
---|---  
[ ranges::reverse](../algorithm/ranges/reverse.html "cpp/algorithm/ranges/reverse")(C++20) |  reverses the order of elements in a range  
(algorithm function object)  
[ ranges::reverse_copy](../algorithm/ranges/reverse_copy.html "cpp/algorithm/ranges/reverse copy")(C++20) |  creates a copy of a range that is reversed  
(algorithm function object)
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
