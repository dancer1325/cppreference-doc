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
[as_const_viewviews::as_const](as_const_view.html "cpp/ranges/as const view")(C++23)(C++23)  
[elements_viewviews::elements](elements_view.html "cpp/ranges/elements view")  
[keys_viewviews::keys](keys_view.html "cpp/ranges/keys view")  
[values_viewviews::values](values_view.html "cpp/ranges/values view")  
**enumerate_view views::enumerate**(C++23)(C++23)  
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
  
  
  


**`std::ranges::enumerate_view`**

[Member functions](enumerate_view.html#Member_functions "cpp/ranges/enumerate view")  
---  
[enumerate_view::enumerate_view](enumerate_view/enumerate_view.html "cpp/ranges/enumerate view/enumerate view")  
[enumerate_view::base](enumerate_view/base.html "cpp/ranges/enumerate view/base")  
[enumerate_view::begin](enumerate_view/begin.html "cpp/ranges/enumerate view/begin")  
[enumerate_view::end](enumerate_view/end.html "cpp/ranges/enumerate view/end")  
[enumerate_view::size](enumerate_view/size.html "cpp/ranges/enumerate view/size")  
[enumerate_view::reserve_hint](enumerate_view/reserve_hint.html "cpp/ranges/enumerate view/reserve hint")(C++26)  
[Deduction guides](enumerate_view/deduction_guides.html "cpp/ranges/enumerate view/deduction guides")  
[Nested classes](enumerate_view.html#Nested_classes "cpp/ranges/enumerate view")  
[Iterator](enumerate_view/iterator.html "cpp/ranges/enumerate view/iterator")  
[enumerate_view::_iterator_ ::_iterator_](enumerate_view/iterator/iterator.html "cpp/ranges/enumerate view/iterator/iterator")  
[enumerate_view::_iterator_ ::base](enumerate_view/iterator/base.html "cpp/ranges/enumerate view/iterator/base")  
[enumerate_view::_iterator_ ::index](enumerate_view/iterator/index.html "cpp/ranges/enumerate view/iterator/index")  
[enumerate_view::_iterator_ ::operator*](enumerate_view/iterator/operator*.html "cpp/ranges/enumerate view/iterator/operator*")  
[enumerate_view::_iterator_ ::operator[]](enumerate_view/iterator/operator_at.html "cpp/ranges/enumerate view/iterator/operator at")  
[enumerate_view::_iterator_ ::operator++  
enumerate_view::_iterator_ ::operator++(int)  
enumerate_view::_iterator_ ::operator--  
enumerate_view::_iterator_ ::operator--(int)  
enumerate_view::_iterator_ ::operator+=  
enumerate_view::_iterator_ ::operator-=](enumerate_view/iterator/operator_arith.html "cpp/ranges/enumerate view/iterator/operator arith")  
[operator==(enumerate_view::_iterator_)  
operator<=>(enumerate_view::_iterator_)](enumerate_view/iterator/operator_cmp.html "cpp/ranges/enumerate view/iterator/operator cmp")  
[operator+(enumerate_view::_iterator_)  
operator-(enumerate_view::_iterator_)](enumerate_view/iterator/operator_arith2.html "cpp/ranges/enumerate view/iterator/operator arith2")  
[iter_move(enumerate_view::_iterator_)](enumerate_view/iterator/iter_move.html "cpp/ranges/enumerate view/iterator/iter move")  
[Sentinel](enumerate_view/sentinel.html "cpp/ranges/enumerate view/sentinel")  
[enumerate_view::_sentinel_ ::_sentinel_](enumerate_view/sentinel/sentinel.html "cpp/ranges/enumerate view/sentinel/sentinel")  
[enumerate_view::_sentinel_ ::base](enumerate_view/sentinel/base.html "cpp/ranges/enumerate view/sentinel/base")  
[operator==(enumerate_view::_iterator_ ,enumerate_view::_sentinel_)](enumerate_view/sentinel/operator_cmp.html "cpp/ranges/enumerate view/sentinel/operator cmp")  
[operator-(enumerate_view::_iterator_ ,enumerate_view::_sentinel_)](enumerate_view/sentinel/operator-.html "cpp/ranges/enumerate view/sentinel/operator-")  
  


Defined in header `[<ranges>](../header/ranges.html "cpp/header/ranges")` |  |   
---|---|---  
template< [ranges::view](view.html) V >  
requires /*range-with-movable-references*/<V>  
class enumerate_view  
: public [ranges::view_interface](view_interface.html)<enumerate_view<V>> |  (1)  |  (since C++23)  
namespace views {  
inline constexpr /* unspecified */ enumerate = /* unspecified */;  
} |  (2)  |  (since C++23)  
Call signature |  |   
template< [ranges::viewable_range](viewable_range.html) R >  
requires /* see below */  
constexpr /* see below */ enumerate( R&& r ); |  |  (since C++23)  
Helper concepts |  |   
template< class R >  
concept /*range-with-movable-references*/ =  
[ranges::input_range](input_range.html)<R> &&  
[std::move_constructible](../concepts/move_constructible.html)<[ranges::range_reference_t](range_reference_t.html)<R>> &&  
[std::move_constructible](../concepts/move_constructible.html)<[ranges::range_rvalue_reference_t](range_reference_t.html)<R>>; |  (3)  |  (exposition only*)  
| |   
  
1) `enumerate_view` is a range adaptor that takes a [`view`](view.html "cpp/ranges/view") and produces a view of [tuple](../utility/tuple.html "cpp/utility/tuple")s. `i`th element (the tuple) of the resulting sequence holds: 

  * the value equal to `i`, which is a zero-based index of the element of underlying sequence, and 
  * the reference to the underlying element.



2) The name `views::enumerate` denotes a [RangeAdaptorObject](../named_req/RangeAdaptorObject.html "cpp/named req/RangeAdaptorObject"). Given a subexpression e, the expression views::enumerate(e) is [expression-equivalent](../language/expressions.html#Expression-equivalence "cpp/language/expressions") to enumerate_view<[views::all_t](all_view.html)<decltype((e))>>(e) for any suitable subexpression e.

3) Ensures that the reference type of the underlying type can be moved.

`enumerate_view` models the concepts [`random_access_range`](random_access_range.html "cpp/ranges/random access range"), [`bidirectional_range`](bidirectional_range.html "cpp/ranges/bidirectional range"), [`forward_range`](forward_range.html "cpp/ranges/forward range"), [`input_range`](input_range.html "cpp/ranges/input range"), [`common_range`](common_range.html "cpp/ranges/common range"), and [`sized_range`](sized_range.html "cpp/ranges/sized range") when the underlying view `V` models respective concepts. 

## Contents

  * [1 Data members](enumerate_view.html#Data_members)
  * [2 Member functions](enumerate_view.html#Member_functions)
    * [2.1 Inherited from std::ranges::view_interface](enumerate_view.html#Inherited_from_std::ranges::view_interface)
  * [3 Deduction guides](enumerate_view.html#Deduction_guides)
  * [4 Nested classes](enumerate_view.html#Nested_classes)
  * [5 Helper templates](enumerate_view.html#Helper_templates)
  * [6 Notes](enumerate_view.html#Notes)
  * [7 Example](enumerate_view.html#Example)
  * [8 References](enumerate_view.html#References)
  * [9 See also](enumerate_view.html#See_also)

  
---  
  
### Data members

Member  |  Description   
---|---  
`V` `_base__` |  an iterator to the underlying [`view`](view.html "cpp/ranges/view")  
(exposition-only member object*)  
  
### Member functions

[ (constructor)](enumerate_view/enumerate_view.html "cpp/ranges/enumerate view/enumerate view") |  constructs a `enumerate_view`   
(public member function)   
---|---  
[ base](enumerate_view/base.html "cpp/ranges/enumerate view/base") |  returns a copy of the underlying (adapted) view   
(public member function)   
[ begin](enumerate_view/begin.html "cpp/ranges/enumerate view/begin") |  returns an iterator to the beginning   
(public member function)   
[ end](enumerate_view/end.html "cpp/ranges/enumerate view/end") |  returns an iterator or a sentinel to the end   
(public member function)   
[ size](enumerate_view/size.html "cpp/ranges/enumerate view/size") |  returns the number of elements, provided only if the underlying (adapted) range satisfies [`sized_range`](sized_range.html "cpp/ranges/sized range")   
(public member function)   
[ reserve_hint](enumerate_view/reserve_hint.html "cpp/ranges/enumerate view/reserve hint")(C++26) |  returns the approximate size of the resulting [`approximately_sized_range`](approximately_sized_range.html "cpp/ranges/approximately sized range")   
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
  
### [Deduction guides](enumerate_view/deduction_guides.html "cpp/ranges/enumerate view/deduction guides")

### Nested classes

[_iterator_](enumerate_view/iterator.html "cpp/ranges/enumerate view/iterator")(C++23) |  the iterator type  
(exposition-only member class template*)  
---|---  
[_sentinel_](enumerate_view/sentinel.html "cpp/ranges/enumerate view/sentinel")(C++23) |  the sentinel type  
(exposition-only member class template*)  
  
### Helper templates

template< class View >  
constexpr bool enable_borrowed_range<ranges::enumerate_view<View>> =  
[ranges::enable_borrowed_range](borrowed_range.html)<View>; |  |  (since C++23)  
---|---|---  
| |   
  
This specialization of [ranges::enable_borrowed_range](borrowed_range.html "cpp/ranges/borrowed range") makes `enumerate_view` satisfy [`borrowed_range`](borrowed_range.html "cpp/ranges/borrowed range") when the underlying view satisfies it. 

### Notes

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_ranges_enumerate`](../experimental/feature_test.html#cpp_lib_ranges_enumerate "cpp/feature test") | [`202302L`](../compiler_support/23.html#cpp_lib_ranges_enumerate_202302L "cpp/compiler support/23") | (C++23) | `std::ranges::enumerate_view`  
  
### Example

Run this code
    
    
    #include <initializer_list>
    #include <iostream>
    #include <map>
    #include <ranges>
    #include <vector>
     
    int main()
    {
        constexpr static auto v = {'A', 'B', 'C', 'D'};
     
        for (auto const [index, letter] : std::views::enumerate(v))
            [std::cout](../io/cout.html) << '(' << index << ':' << letter << ") ";
        [std::cout](../io/cout.html) << '\n';
     
    #if __cpp_lib_ranges_to_container
        // create a map using the position of each element as key
        auto m = v | std::views::enumerate | std::[ranges::to](to.html)<[std::map](../container/map.html)>();
     
        for (auto const [key, value] : m)
            [std::cout](../io/cout.html) << '[' << key << "]:" << value << ' ';
        [std::cout](../io/cout.html) << '\n';
    #endif
     
        [std::vector](../container/vector.html)<int> numbers{1, 3, 5, 7};
     
        // num is mutable even with const, which does not propagate to reference to
        // make it const, use `std::views::enumerate(numbers) | std::views::as_const`
        // or `std::views::enumerate(std::as_const(numbers))`
        for (auto const [index, num] : std::views::enumerate(numbers))
        {
            ++num; // the type is int&
            [std::cout](../io/cout.html) << numbers[index] << ' ';
        }
        [std::cout](../io/cout.html) << '\n';
    }

Possible output: 
    
    
    (0:A) (1:B) (2:C) (3:D)
    [0]:A [1]:B [2]:C [3]:D
    2 4 6 8

### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 26.7.23 Enumerate view [range.enumerate] 



### See also

[ ranges::iota_viewviews::iota](iota_view.html "cpp/ranges/iota view")(C++20) |  a [`view`](view.html "cpp/ranges/view") consisting of a sequence generated by repeatedly incrementing an initial value  
(class template) (customization point object)  
---|---  
[ ranges::zip_viewviews::zip](zip_view.html "cpp/ranges/zip view")(C++23) |  a [`view`](view.html "cpp/ranges/view") consisting of tuples of references to corresponding elements of the adapted views  
(class template) (customization point object)  
[ ranges::elements_viewviews::elements](elements_view.html "cpp/ranges/elements view")(C++20) |  takes a [`view`](view.html "cpp/ranges/view") consisting of [`_tuple-like_`](../utility/tuple/tuple-like.html "cpp/utility/tuple/tuple-like") values and a number N and produces a [`view`](view.html "cpp/ranges/view") of Nth element of each tuple  
(class template) (range adaptor object)
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
