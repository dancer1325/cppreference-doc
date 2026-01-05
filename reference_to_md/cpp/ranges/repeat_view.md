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
  
| **repeat_view views::repeat**(C++23)(C++23)  
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
  
  
  


**`std::ranges::repeat_view`**

[Member functions](repeat_view.html#Member_functions "cpp/ranges/repeat view")  
---  
[repeat_view::repeat_view](repeat_view.html#ctor "cpp/ranges/repeat view")  
[repeat_view::begin](repeat_view.html#begin "cpp/ranges/repeat view")  
[repeat_view::end](repeat_view.html#end "cpp/ranges/repeat view")  
[repeat_view::size](repeat_view.html#size "cpp/ranges/repeat view")  
[Deduction guides](repeat_view.html#Deduction_guides "cpp/ranges/repeat view")  
[Iterator](repeat_view/iterator.html "cpp/ranges/repeat view/iterator")  
[Member functions](repeat_view/iterator.html#Member_functions "cpp/ranges/repeat view/iterator")  
[repeat_view::_iterator_ ::_iterator_](repeat_view/iterator.html#Member_functions "cpp/ranges/repeat view/iterator")  
[repeat_view::_iterator_ ::operator*](repeat_view/iterator.html#Member_functions "cpp/ranges/repeat view/iterator")  
[repeat_view::_iterator_ ::operator[]](repeat_view/iterator.html#Member_functions "cpp/ranges/repeat view/iterator")  
[repeat_view::_iterator_ ::operator++  
repeat_view::_iterator_ ::operator++(int)  
](repeat_view/iterator.html#Member_functions "cpp/ranges/repeat view/iterator")  
[repeat_view::_iterator_ ::operator--  
repeat_view::_iterator_ ::operator--(int)  
](repeat_view/iterator.html#Member_functions "cpp/ranges/repeat view/iterator")  
[repeat_view::_iterator_ ::operator+=](repeat_view/iterator.html#Member_functions "cpp/ranges/repeat view/iterator")  
[repeat_view::_iterator_ ::operator-=](repeat_view/iterator.html#Member_functions "cpp/ranges/repeat view/iterator")  
[Non-member functions](repeat_view/iterator.html#Non-member_functions "cpp/ranges/repeat view/iterator")  
[operator==(repeat_view::_iterator_)  
operator<=>(repeat_view::_iterator_)](repeat_view/iterator.html#Non-member_functions "cpp/ranges/repeat view/iterator")  
[operator+(repeat_view::_iterator_)](repeat_view/iterator.html#Non-member_functions "cpp/ranges/repeat view/iterator")  
[operator-(repeat_view::_iterator_)](repeat_view/iterator.html#Non-member_functions "cpp/ranges/repeat view/iterator")  
  


Defined in header `[<ranges>](../header/ranges.html "cpp/header/ranges")` |  |   
---|---|---  
template< [std::move_constructible](../concepts/move_constructible.html) W,  
[std::semiregular](../concepts/semiregular.html) Bound = [std::unreachable_sentinel_t](../iterator/unreachable_sentinel_t.html) >  
requires ([std::is_object_v](../types/is_object.html)<W> && [std::same_as](../concepts/same_as.html)<W, [std::remove_cv_t](../types/remove_cv.html)<W>> &&  
(/*integer-like-with-usable-difference-type*/<Bound> ||  
[std::same_as](../concepts/same_as.html)<Bound, [std::unreachable_sentinel_t](../iterator/unreachable_sentinel_t.html)>))  
class repeat_view : public [ranges::view_interface](view_interface.html)<repeat_view<W, Bound>> |  (1)  |  (since C++23)  
namespace views {  
inline constexpr /* unspecified */ repeat = /* unspecified */;  
} |  (2)  |  (since C++23)  
Call signature |  |   
template< class W >  
requires /* see below */  
constexpr /* see below */ repeat( W&& value ); |  |  (since C++23)  
template< class W, class Bound >  
requires /* see below */  
constexpr /* see below */ repeat( W&& value, Bound&& bound ); |  |  (since C++23)  
Helper concepts |  |   
concept /*integer-like-with-usable-difference-type*/ =  
/*is-signed-integer-like*/<T> ||  
(/*is-integer-like*/ <T> && [std::weakly_incrementable](../iterator/weakly_incrementable.html)<T>) |  (3) | (exposition only*)  
| |   
  
1) A range factory that generates a sequence of elements by repeatedly producing the same value. Can be either bounded or unbounded (infinite).

2) views::repeat(e) and views::repeat(e, f) are [expression-equivalent](../language/expressions.html#Expression-equivalence "cpp/language/expressions") to repeat_view<[std::decay_t](../types/decay.html)<decltype((E))>>(e) and repeat_view(e, f) respectively for any suitable subexpressions e and f.

3) Determines whether a type is [integer-like](../iterator/is-integer-like.html "cpp/iterator/is-integer-like") and has a usable [difference type](../iterator.html#Types_and_writability "cpp/iterator").

`repeat_view` models [`random_access_range`](random_access_range.html "cpp/ranges/random access range"). If `Bound` is not [std::unreachable_sentinel_t](../iterator/unreachable_sentinel_t.html "cpp/iterator/unreachable sentinel t"), `repeat_view` also models [`sized_range`](sized_range.html "cpp/ranges/sized range") and [`common_range`](common_range.html "cpp/ranges/common range"). 

## Contents

  * [1 Customization point objects](repeat_view.html#Customization_point_objects)
  * [2 Data members](repeat_view.html#Data_members)
  * [3 Member functions](repeat_view.html#Member_functions)
    * [3.1 Inherited from std::ranges::view_interface](repeat_view.html#Inherited_from_std::ranges::view_interface)
  * [4 std::ranges::repeat_view::repeat_view](repeat_view.html#std::ranges::repeat_view::repeat_view)
    * [4.1 Parameters](repeat_view.html#Parameters)
  * [5 std::ranges::repeat_view::begin](repeat_view.html#std::ranges::repeat_view::begin)
  * [6 std::ranges::repeat_view::end](repeat_view.html#std::ranges::repeat_view::end)
  * [7 std::ranges::repeat_view::size](repeat_view.html#std::ranges::repeat_view::size)
    * [7.1 Deduction guides](repeat_view.html#Deduction_guides)
    * [7.2 Nested classes](repeat_view.html#Nested_classes)
    * [7.3 Notes](repeat_view.html#Notes)
    * [7.4 Example](repeat_view.html#Example)
    * [7.5 Defect reports](repeat_view.html#Defect_reports)
    * [7.6 See also](repeat_view.html#See_also)

  
---  
  
###  Customization point objects

The name `views::repeat` denotes a _customization point object_ , which is a const [function object](../named_req/FunctionObject.html "cpp/named req/FunctionObject") of a [literal](../named_req/LiteralType.html "cpp/named req/LiteralType") [`semiregular`](../concepts/semiregular.html "cpp/concepts/semiregular") class type. See [CustomizationPointObject](../named_req/CustomizationPointObject.html "cpp/named req/CustomizationPointObject") for details. 

### Data members

Member  |  Definition   
---|---  
[`_movable-box_`](copyable_wrapper.html "cpp/ranges/copyable wrapper") ﻿<W> `_value__` |  the repeating element of the view  
(exposition-only member object*)  
`Bound` `_bound__` |  the sentinel value  
(exposition-only member object*)  
  
### Member functions

[ (constructor)](repeat_view.html#ctor "cpp/ranges/repeat view") |  creates a `repeat_view`   
(public member function)  
---|---  
[ begin](repeat_view.html#begin "cpp/ranges/repeat view") |  obtains the beginning iterator of a [`repeat_view`](repeat_view.html#top)   
(public member function)  
[ end](repeat_view.html#end "cpp/ranges/repeat view") |  obtains the sentinel denoting the end of a [`repeat_view`](repeat_view.html#top)   
(public member function)  
[ size](repeat_view.html#size "cpp/ranges/repeat view") |  obtains the size of a [`repeat_view`](repeat_view.html#top) if it is sized   
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
  
##  std::ranges::repeat_view::repeat_view

repeat_view() requires [std::default_initializable](../concepts/default_initializable.html)<W> = default; |  (1)  |  (since C++23)  
---|---|---  
constexpr explicit repeat_view( const W& value, Bound bound = Bound() ); |  (2)  |  (since C++23)  
constexpr explicit repeat_view( W&& value, Bound bound = Bound() ); |  (3)  |  (since C++23)  
template < class... WArgs, class... BoundArgs >  
requires [std::constructible_from](../concepts/constructible_from.html)<W, WArgs...>  
&& [std::constructible_from](../concepts/constructible_from.html)<Bound, BoundArgs...>  
constexpr explicit  
repeat( [std::piecewise_construct_t](../utility/piecewise_construct_t.html), [std::tuple](../utility/tuple.html)<WArgs...> value_args,  
[std::tuple](../utility/tuple.html)<BoundArgs...> bound_args = [std::tuple](../utility/tuple.html)<>{} ); |  (4)  |  (since C++23)  
| |   
  
1) Default-initializes `_[value_](repeat_view.html#value)_` and value-initializes `_[bound_](repeat_view.html#bound)_` ﻿.

2) Initializes `_[value_](repeat_view.html#value)_` with value and initializes `_[bound_](repeat_view.html#bound)_` with bound.

If `Bound` is not [std::unreachable_sentinel_t](../iterator/unreachable_sentinel_t.html "cpp/iterator/unreachable sentinel t") and bool(bound >= 0) is false, the behavior is undefined.

3) Initializes `_[value_](repeat_view.html#value)_` with std::move(value) and initializes `_[bound_](repeat_view.html#bound)_` with bound.

If `Bound` is not [std::unreachable_sentinel_t](../iterator/unreachable_sentinel_t.html "cpp/iterator/unreachable sentinel t") and bool(bound >= 0) is false, the behavior is undefined.

4) Initializes `_[value_](repeat_view.html#value)_` with [std::make_from_tuple](../utility/make_from_tuple.html)<T>(std::move(value_args)) and `_[bound_](repeat_view.html#bound)_` with [std::make_from_tuple](../utility/make_from_tuple.html)<Bound>(std::move(bound_args)).

If `Bound` is not [std::unreachable_sentinel_t](../iterator/unreachable_sentinel_t.html "cpp/iterator/unreachable sentinel t") and bool(bound >= 0) is false, the behavior is undefined.

###  Parameters

value  |  \-  |  the value to be repeatedly produced   
---|---|---  
bound  |  \-  |  the bound   
value_args  |  \-  |  the tuple containing the initializers of `_[value_](repeat_view.html#value)_`  
bound_args  |  \-  |  the tuple containing the initializers of `_[bound_](repeat_view.html#bound)_`  
  
##  std::ranges::repeat_view::begin

constexpr /*iterator*/ begin() const; |  |  (since C++23)  
---|---|---  
| |   
  
Returns [`_iterator_`](repeat_view/iterator.html "cpp/ranges/repeat view/iterator") ﻿([std::addressof](../memory/addressof.html)(*`_[value_](repeat_view.html#value)_` ﻿)). 

##  std::ranges::repeat_view::end

constexpr /*iterator*/ end() const  
requires (![std::same_as](../concepts/same_as.html)<Bound, [std::unreachable_sentinel_t](../iterator/unreachable_sentinel_t.html)>); |  (1)  |  (since C++23)  
---|---|---  
constexpr [std::unreachable_sentinel_t](../iterator/unreachable_sentinel_t.html) end() const; |  (2)  |  (since C++23)  
| |   
  
1) Returns [`_iterator_`](repeat_view/iterator.html "cpp/ranges/repeat view/iterator") ﻿([std::addressof](../memory/addressof.html)(*`_[value_](repeat_view.html#value)_` ﻿),` `` _[bound_](repeat_view.html#bound)_` ﻿).

2) Returns [std::unreachable_sentinel](../iterator/unreachable_sentinel_t.html). 

##  std::ranges::repeat_view::size

constexpr auto size() const  
requires (![std::same_as](../concepts/same_as.html)<Bound, [std::unreachable_sentinel_t](../iterator/unreachable_sentinel_t.html)>); |  |  (since C++23)  
---|---|---  
| |   
  
Returns `_[to-unsigned-like](../ranges.html#to-unsigned-like "cpp/ranges")_` ﻿(`_[bound_](repeat_view.html#bound)_` ﻿). 

### Deduction guides

template< class W, class Bound = [std::unreachable_sentinel_t](../iterator/unreachable_sentinel_t.html) >  
repeat_view( W, Bound = Bound() ) -> repeat_view<W, Bound>; |  |  (since C++23)  
---|---|---  
| |   
  
### Nested classes

[_iterator_](repeat_view/iterator.html "cpp/ranges/repeat view/iterator") |  the iterator type  
(exposition-only member class*)  
---|---  
  
### Notes

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_ranges_repeat`](../experimental/feature_test.html#cpp_lib_ranges_repeat "cpp/feature test") | [`202207L`](../compiler_support/23.html#cpp_lib_ranges_repeat_202207L "cpp/compiler support/23") | (C++23) | [`std::ranges::repeat_view`](repeat_view.html#top)  
  
### Example

Run this code
    
    
    #include <iostream>
    #include <ranges>
    #include <string_view>
    using namespace std::literals;
     
    int main()
    {
        // bounded overload
        for (auto s : std::views::repeat("C++"sv, 3))
            [std::cout](../io/cout.html) << s << ' ';
        [std::cout](../io/cout.html) << '\n';
     
        // unbounded overload
        for (auto s : std::views::repeat("I know that you know that"sv)
                    | std::[views::take](take_view.html)(3))
            [std::cout](../io/cout.html) << s << ' ';
        [std::cout](../io/cout.html) << "...\n";
    }

Output: 
    
    
    C++ C++ C++
    I know that you know that I know that you know that I know that you know that ...

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 4053](https://cplusplus.github.io/LWG/issue4053) | C++20  | unary calls to `views::repeat` did not decay the argument  | decay the argument   
[LWG 4054](https://cplusplus.github.io/LWG/issue4054) | C++20  | calling `views::repeat` with a `repeat_view`  
did not create a nested `repeat_view` | creates a nested  
`repeat_view`  
  
### See also

[ ranges::iota_viewviews::iota](iota_view.html "cpp/ranges/iota view")(C++20) |  a [`view`](view.html "cpp/ranges/view") consisting of a sequence generated by repeatedly incrementing an initial value  
(class template) (customization point object)  
---|---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
