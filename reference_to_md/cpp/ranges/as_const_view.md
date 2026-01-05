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
**as_const_view views::as_const**(C++23)(C++23)  
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
requires [ranges::input_range](input_range.html)<V>  
class as_const_view  
: public [ranges::view_interface](view_interface.html)<as_const_view<V>> |  (1)  |  (since C++23)  
namespace views {  
inline constexpr /* unspecified */ as_const = /* unspecified */;  
} |  (2)  |  (since C++23)  
Call signature |  |   
template< [ranges::viewable_range](viewable_range.html) R >  
requires /* see below */  
constexpr [ranges::view](view.html) auto as_const( R&& r ); |  |  (since C++23)  
| |   
  
1) A range adaptor that represents a view of underlying [`view`](view.html "cpp/ranges/view") that is also a [`constant_range`](constant_range.html "cpp/ranges/constant range"). An `as_const_view` always has read-only elements (if not empty).

2) [RangeAdaptorObject](../named_req/RangeAdaptorObject.html "cpp/named req/RangeAdaptorObject"). Let e be a subexpression, let `T` be decltype((e)), and let `U` be [std::remove_cvref_t](../types/remove_cvref.html)<T>. Then the expression views::as_const(e) is [expression-equivalent](../language/expressions.html#Expression-equivalence "cpp/language/expressions") to: 

  * [views::all](all_view.html)(e), if it is a well-formed expression and [views::all_t](all_view.html)<T> models [`constant_range`](constant_range.html "cpp/ranges/constant range"); 
  * otherwise, [std::span](../container/span.html)<const X, Extent>(e) for some type `X` and some extent `Extent` if `U` denotes [std::span](../container/span.html)<X, Extent>; 
  * otherwise, [ranges::ref_view](ref_view.html)(static_cast<const X&>(e.base())) if `U` denotes [ranges::ref_view](ref_view.html)<X> for some type `X` and const X models [`constant_range`](constant_range.html "cpp/ranges/constant range"); 
  * otherwise, [ranges::ref_view](ref_view.html)(static_cast<const U&>(e)) if `e` is an lvalue, const U models [`constant_range`](constant_range.html "cpp/ranges/constant range"), and `U` does not model [`view`](view.html "cpp/ranges/view"). 
  * otherwise, as_const_view{e}.



`as_const_view` always models [`constant_range`](constant_range.html "cpp/ranges/constant range"), and it models the [`contiguous_range`](contiguous_range.html "cpp/ranges/contiguous range"), [`random_access_range`](random_access_range.html "cpp/ranges/random access range"), [`bidirectional_range`](bidirectional_range.html "cpp/ranges/bidirectional range"), [`forward_range`](forward_range.html "cpp/ranges/forward range"), [`borrowed_range`](borrowed_range.html "cpp/ranges/borrowed range"), [`common_range`](common_range.html "cpp/ranges/common range"), and [`sized_range`](sized_range.html "cpp/ranges/sized range") when the underlying view `V` models respective concepts. 

## Contents

  * [1 Data members](as_const_view.html#Data_members)
  * [2 Member functions](as_const_view.html#Member_functions)
    * [2.1 Inherited from std::ranges::view_interface](as_const_view.html#Inherited_from_std::ranges::view_interface)
  * [3 std::ranges::as_const_view::as_const_view](as_const_view.html#std::ranges::as_const_view::as_const_view)
    * [3.1 Parameters](as_const_view.html#Parameters)
  * [4 std::ranges::as_const_view::base](as_const_view.html#std::ranges::as_const_view::base)
  * [5 std::ranges::as_const_view::begin](as_const_view.html#std::ranges::as_const_view::begin)
  * [6 std::ranges::as_const_view::end](as_const_view.html#std::ranges::as_const_view::end)
  * [7 std::ranges::as_const_view::size](as_const_view.html#std::ranges::as_const_view::size)
  * [8 std::ranges::as_rvalue_view::reserve_hint](as_const_view.html#std::ranges::as_rvalue_view::reserve_hint)
    * [8.1 Deduction guides](as_const_view.html#Deduction_guides)
    * [8.2 Helper templates](as_const_view.html#Helper_templates)
    * [8.3 Notes](as_const_view.html#Notes)
    * [8.4 Example](as_const_view.html#Example)
    * [8.5 See also](as_const_view.html#See_also)

  
---  
  
### Data members

Member  |  Description   
---|---  
`V` `_base__` (private) |  the underlying view  
(exposition-only member object*)  
  
### Member functions

[ (constructor)](as_const_view.html#ctor "cpp/ranges/as const view") |  constructs an `as_const_view`   
(public member function)  
---|---  
[ base](as_const_view.html#base "cpp/ranges/as const view") |  returns the underlying view `V`   
(public member function)  
[ begin](as_const_view.html#begin "cpp/ranges/as const view") |  returns the beginning iterator of the `as_const_view`   
(public member function)  
[ end](as_const_view.html#end "cpp/ranges/as const view") |  returns the end iterator of the `as_const_view`   
(public member function)  
[ size](as_const_view.html#size "cpp/ranges/as const view") |  returns the size of the view if it is bounded   
(public member function)  
[ reserve_hint](as_const_view.html#reserve_hint "cpp/ranges/as const view")(C++26) |  returns the approximate size of the underlying [`approximately_sized_range`](approximately_sized_range.html "cpp/ranges/approximately sized range")   
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
  
##  std::ranges::as_const_view::as_const_view

as_const_view() requires [std::default_initializable](../concepts/default_initializable.html)<V> = default; |  (1)  |  (since C++23)  
---|---|---  
constexpr explicit as_const_view( V base ); |  (2)  |  (since C++23)  
| |   
  
1) Value-initializes `_[base_](as_const_view.html#base)_` ﻿ via its default member initializer (= V()).

2) Initializes `_[base_](as_const_view.html#base)_` ﻿ with std::move(base).

###  Parameters

base  |  \-  |  a view   
---|---|---  
  
##  std::ranges::as_const_view::base

constexpr V base() const& requires [std::copy_constructible](../concepts/copy_constructible.html)<V>; |  (1)  |  (since C++23)  
---|---|---  
constexpr V base() &&; |  (2)  |  (since C++23)  
| |   
  
Returns the underlying view. 

1) Copy-constructs the result from the underlying view. Equivalent to return` `` _[base_](as_const_view.html#base)_` ﻿;.

2) Move-constructs the result from the underlying view. Equivalent to return std::move(`_[base_](as_const_view.html#base)_` ﻿);.

##  std::ranges::as_const_view::begin

constexpr auto begin() requires (!/*simple_view*/<V>); |  (1)  |  (since C++23)  
---|---|---  
constexpr auto begin() const requires [ranges::range](range.html)<const V>; |  (2)  |  (since C++23)  
| |   
  
Returns the constant iterator of the view. Equivalent to return [ranges::cbegin](cbegin.html)(`_[base_](as_const_view.html#base)_` ﻿);. 

##  std::ranges::as_const_view::end

constexpr auto end() requires (!/*simple_view*/<V>); |  (1)  |  (since C++23)  
---|---|---  
constexpr auto end() const requires [ranges::range](range.html)<const V>; |  (2)  |  (since C++23)  
| |   
  
Returns the constant sentinel of the view. Equivalent to return [ranges::cend](cend.html)(`_[base_](as_const_view.html#base)_` ﻿);. 

##  std::ranges::as_const_view::size

constexpr auto size() requires [ranges::sized_range](sized_range.html)<V>; |  (1)  |  (since C++23)  
---|---|---  
constexpr auto size() const requires [ranges::sized_range](sized_range.html)<const V>; |  (2)  |  (since C++23)  
| |   
  
Returns the size of the view if the view is bounded. Equivalent to return [ranges::size](size.html)(`_[base_](as_const_view.html#base)_` ﻿);. 

##  std::ranges::as_rvalue_view::reserve_hint

constexpr auto reserve_hint()  
requires ranges::approximately_sized_range<V>; |  (1)  |  (since C++26)  
---|---|---  
constexpr auto reserve_hint() const  
requires ranges::approximately_sized_range<const V>; |  (2)  |  (since C++26)  
| |   
  
Returns ranges::reserve_hint(`_[base_](as_const_view.html#base)_` ﻿). 

### Deduction guides

template< class R >  
as_const_view( R&& ) -> as_const_view<[views::all_t](all_view.html)<R>>; |  |  (since C++23)  
---|---|---  
| |   
  
### Helper templates

template< class T >  
constexpr bool enable_borrowed_range<std::ranges::as_const_view<T>> =  
[ranges::enable_borrowed_range](borrowed_range.html)<T>; |  |  (since C++23)  
---|---|---  
| |   
  
This specialization of [ranges::enable_borrowed_range](borrowed_range.html "cpp/ranges/borrowed range") makes `as_const_view` satisfy [`borrowed_range`](borrowed_range.html "cpp/ranges/borrowed range") when the underlying view satisfies it. 

### Notes

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_ranges_as_const`](../experimental/feature_test.html#cpp_lib_ranges_as_const "cpp/feature test") | [`202207L`](../compiler_support/23.html#cpp_lib_ranges_as_const_202207L "cpp/compiler support/23") | (C++23) | `ranges::as_const_view`, [std::const_iterator](../iterator/const_iterator.html)  
[`__cpp_lib_ranges_reserve_hint`](../experimental/feature_test.html#cpp_lib_ranges_reserve_hint "cpp/feature test") | [`202502L`](../compiler_support/26.html#cpp_lib_ranges_reserve_hint_202502L "cpp/compiler support/26") | (C++26) | ranges::approximately_sized_range and `[reserve_hint](as_const_view.html#reserve_hint)`  
  
### Example

Run this code
    
    
    #include <cassert>
    #include <ranges>
     
    int main()
    {
        int x[]{1, 2, 3, 4, 5};
     
        auto v1 = x | std::[views::drop](drop_view.html)(2);
        [assert](../error/assert.html)(v1.back() == 5);
        v1[0]++; // OK, can modify non-const element
     
        auto v2 = x | std::[views::drop](drop_view.html)(2) | std::views::as_const;
        [assert](../error/assert.html)(v2.back() == 5);
        // v2[0]++; // Compile-time error, cannot modify read-only element
    }

### See also

[ ranges::as_rvalue_viewviews::as_rvalue](as_rvalue_view.html "cpp/ranges/as rvalue view")(C++23) |  a [`view`](view.html "cpp/ranges/view") of a sequence that casts each element to an rvalue  
(class template) (range adaptor object)  
---|---  
[ ranges::cbegin](cbegin.html "cpp/ranges/cbegin")(C++20) |  returns an iterator to the beginning of a read-only range  
(customization point object)  
[ ranges::cend](cend.html "cpp/ranges/cend")(C++20) |  returns a sentinel indicating the end of a read-only range  
(customization point object)  
[ as_const](../utility/as_const.html "cpp/utility/as const")(C++17) |  obtains a reference to const to its argument   
(function template)   
[ basic_const_iterator](../iterator/basic_const_iterator.html "cpp/iterator/basic const iterator")(C++23) |  iterator adaptor that converts an iterator into a constant iterator   
(class template) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
