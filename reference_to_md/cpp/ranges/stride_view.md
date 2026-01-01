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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/navbar_content&action=edit)

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
**stride_view views::stride**(C++23)(C++23)  
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
  
  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/navbar_content&action=edit)

**`std::ranges::stride_view`**

[Member functions](stride_view.html#Member_functions "cpp/ranges/stride view")  
---  
[stride_view::stride_view](stride_view/stride_view.html "cpp/ranges/stride view/stride view")  
[stride_view::base](stride_view/base.html "cpp/ranges/stride view/base")  
[stride_view::stride](stride_view/stride.html "cpp/ranges/stride view/stride")  
[stride_view::begin](stride_view/begin.html "cpp/ranges/stride view/begin")  
[stride_view::end](stride_view/end.html "cpp/ranges/stride view/end")  
[stride_view::size](stride_view/size.html "cpp/ranges/stride view/size")  
[stride_view::reserve_hint](stride_view/reserve_hint.html "cpp/ranges/stride view/reserve hint")(C++26)  
[Deduction guides](stride_view/deduction_guides.html "cpp/ranges/stride view/deduction guides")  
[Iterator](stride_view/iterator.html "cpp/ranges/stride view/iterator")  
[Member functions](stride_view/iterator.html#Member_functions "cpp/ranges/stride view/iterator")  
[stride_view::_iterator_ ::_iterator_](stride_view/iterator/iterator.html "cpp/ranges/stride view/iterator/iterator")  
[stride_view::_iterator_ ::base](stride_view/iterator/base.html "cpp/ranges/stride view/iterator/base")  
[stride_view::_iterator_ ::operator*](stride_view/iterator/operator*.html "cpp/ranges/stride view/iterator/operator*")  
[stride_view::_iterator_ ::operator[]](stride_view/iterator/operator_at.html "cpp/ranges/stride view/iterator/operator at")  
[stride_view::_iterator_ ::operator++  
stride_view::_iterator_ ::operator++(int)  
stride_view::_iterator_ ::operator--  
stride_view::_iterator_ ::operator--(int)  
stride_view::_iterator_ ::operator+=  
stride_view::_iterator_ ::operator-=](stride_view/iterator/operator_arith.html "cpp/ranges/stride view/iterator/operator arith")  
[Non-member functions](stride_view/iterator.html#Non-member_functions "cpp/ranges/stride view/iterator")  
[operator==(std::default_sentinel_t)  
operator==(stride_view::_iterator_)  
operator<(stride_view::_iterator_)  
operator>(stride_view::_iterator_)  
operator<=(stride_view::_iterator_)  
operator>=(stride_view::_iterator_)  
operator<=>(stride_view::_iterator_)](stride_view/iterator/operator_cmp.html "cpp/ranges/stride view/iterator/operator cmp")  
[operator+(stride_view::_iterator_)  
operator-(stride_view::_iterator_)](stride_view/iterator/operator_arith2.html "cpp/ranges/stride view/iterator/operator arith2")  
[iter_move(stride_view::_iterator_)](stride_view/iterator/iter_move.html "cpp/ranges/stride view/iterator/iter move")  
[iter_swap(stride_view::_iterator_)](stride_view/iterator/iter_swap.html "cpp/ranges/stride view/iterator/iter swap")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/stride_view/navbar_content&action=edit)

Defined in header `[<ranges>](../header/ranges.html "cpp/header/ranges")` |  |   
---|---|---  
template< [ranges::input_range](input_range.html) V >  
requires [ranges::view](view.html)<V>  
class stride_view  
: public [ranges::view_interface](view_interface.html)<stride_view<V>> |  (1)  |  (since C++23)  
namespace views {  
inline constexpr /* unspecified */ stride = /* unspecified */;  
} |  (2)  |  (since C++23)  
Call signature |  |   
template< [ranges::viewable_range](viewable_range.html) R >  
constexpr [ranges::view](view.html) auto stride( R&& r, [ranges::range_difference_t](range_size_t.html)<R> n ); |  |  (since C++23)  
template< class DifferenceType >  
constexpr /*range adaptor closure*/ stride( DifferenceType&& n ); |  |  (since C++23)  
Helper templates |  |   
| |   
  
1) `stride_view` is a range adaptor that takes a [`view`](view.html "cpp/ranges/view") and a number `_n_` and produces a view, that consists of elements of the original view by advancing over _n_ elements at a time. This means that each `_m_` _th_ element of the produced view is `_(n * i)_` th element of the original view, for some non-negative index `_i_`. The elements of the original view, whose “index” is not a multiple of `_n_`, are not present in the produced view.

Let `_S_` be the size of the original view. Then the size of produced view is: 

  * (S / n) + (S % n ? 1 : 0), if S >= n; otherwise, 
  * 1, if S > 0; otherwise, 
  * ​0​, and the resulting view is empty.



2) The name views::stride denotes a [RangeAdaptorObject](../named_req/RangeAdaptorObject.html "cpp/named req/RangeAdaptorObject"). Given subexpressions e and n, the expression views::stride(e, n) is [expression-equivalent](../language/expressions.html#Expression-equivalence "cpp/language/expressions") to stride_view(e, n).

The `n` must be greater than ​0​, otherwise the behavior is undefined.

`stride_view` always models [`input_range`](input_range.html "cpp/ranges/input range"), and models [`forward_range`](forward_range.html "cpp/ranges/forward range"), [`bidirectional_range`](bidirectional_range.html "cpp/ranges/bidirectional range"), [`random_access_range`](random_access_range.html "cpp/ranges/random access range"), and/or [`sized_range`](sized_range.html "cpp/ranges/sized range"), if adapted [`view`](view.html "cpp/ranges/view") type V models the corresponding concept. stride_view<V> models [`common_range`](common_range.html "cpp/ranges/common range") whenever the underlying view V does. 

## Contents

  * [1 Data members](stride_view.html#Data_members)
  * [2 Member functions](stride_view.html#Member_functions)
    * [2.1 Inherited from std::ranges::view_interface](stride_view.html#Inherited_from_std::ranges::view_interface)
  * [3 Deduction guides](stride_view.html#Deduction_guides)
  * [4 Nested classes](stride_view.html#Nested_classes)
  * [5 Helper templates](stride_view.html#Helper_templates)
  * [6 Notes](stride_view.html#Notes)
  * [7 Example](stride_view.html#Example)
  * [8 References](stride_view.html#References)
  * [9 See also](stride_view.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/stride_view&action=edit&section=1 "Edit section: Data members")] Data members

Member  |  Description   
---|---  
`V` `_base__` |  the underlying view  
(exposition-only member object*)  
[ranges::range_difference_t](range_size_t.html)<V> `_stride__` |  the size object (the “stride”)  
(exposition-only member object*)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/stride_view&action=edit&section=2 "Edit section: Member functions")] Member functions

[ (constructor)](stride_view/stride_view.html "cpp/ranges/stride view/stride view") |  constructs a `stride_view`   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/adaptor/dsc_constructor&action=edit)  
---|---  
[ stride](stride_view/stride.html "cpp/ranges/stride view/stride")(C++23) |  returns the stored stride value   
(public member function)  
[ base](stride_view/base.html "cpp/ranges/stride view/base") |  returns a copy of the underlying (adapted) view   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/adaptor/dsc_base&action=edit)  
[ begin](stride_view/begin.html "cpp/ranges/stride view/begin") |  returns an iterator to the beginning   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/adaptor/dsc_begin&action=edit)  
[ end](stride_view/end.html "cpp/ranges/stride view/end") |  returns an iterator or a sentinel to the end   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/adaptor/dsc_end&action=edit)  
[ size](stride_view/size.html "cpp/ranges/stride view/size") |  returns the number of elements, provided only if the underlying (adapted) range satisfies [`sized_range`](sized_range.html "cpp/ranges/sized range")   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/adaptor/dsc_size&action=edit)  
[ reserve_hint](stride_view/reserve_hint.html "cpp/ranges/stride view/reserve hint")(C++26) |  returns the approximate size of the resulting [`approximately_sized_range`](approximately_sized_range.html "cpp/ranges/approximately sized range")   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/adaptor/dsc_reserve_hint&action=edit)  
  
#####  Inherited from [std::ranges::view_interface](view_interface.html "cpp/ranges/view interface")  
  
[ empty](view_interface/empty.html "cpp/ranges/view interface/empty") |  returns whether the derived view is empty, provided only if it satisfies [`sized_range`](sized_range.html "cpp/ranges/sized range") or [`forward_range`](forward_range.html "cpp/ranges/forward range")   
(public member function of `std::ranges::view_interface<D>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/view_interface/dsc_empty&action=edit)  
[ cbegin](view_interface/cbegin.html "cpp/ranges/view interface/cbegin")(C++23) |  returns a constant iterator to the beginning of the range   
(public member function of `std::ranges::view_interface<D>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/view_interface/dsc_cbegin&action=edit)  
[ cend](view_interface/cend.html "cpp/ranges/view interface/cend")(C++23) |  returns a sentinel for the constant iterator of the range   
(public member function of `std::ranges::view_interface<D>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/view_interface/dsc_cend&action=edit)  
[ operator bool](view_interface/operator_bool.html "cpp/ranges/view interface/operator bool") |  returns whether the derived view is not empty, provided only if [ranges::empty](empty.html "cpp/ranges/empty") is applicable to it   
(public member function of `std::ranges::view_interface<D>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/view_interface/dsc_operator_bool&action=edit)  
[ front](view_interface/front.html "cpp/ranges/view interface/front") |  returns the first element in the derived view, provided if it satisfies [`forward_range`](forward_range.html "cpp/ranges/forward range")   
(public member function of `std::ranges::view_interface<D>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/view_interface/dsc_front&action=edit)  
[ back](view_interface/back.html "cpp/ranges/view interface/back") |  returns the last element in the derived view, provided only if it satisfies [`bidirectional_range`](bidirectional_range.html "cpp/ranges/bidirectional range") and [`common_range`](common_range.html "cpp/ranges/common range")   
(public member function of `std::ranges::view_interface<D>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/view_interface/dsc_back&action=edit)  
[ operator[]](view_interface/operator_at.html "cpp/ranges/view interface/operator at") |  returns the `n`th element in the derived view, provided only if it satisfies [`random_access_range`](random_access_range.html "cpp/ranges/random access range")   
(public member function of `std::ranges::view_interface<D>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/view_interface/dsc_operator_at&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/stride_view&action=edit&section=3 "Edit section: Deduction guides")] [Deduction guides](stride_view/deduction_guides.html "cpp/ranges/stride view/deduction guides")

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/stride_view&action=edit&section=4 "Edit section: Nested classes")] Nested classes

[_iterator_](stride_view/iterator.html "cpp/ranges/stride view/iterator")(C++23) |  the iterator type  
(exposition-only member class template*)  
---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/stride_view&action=edit&section=5 "Edit section: Helper templates")] Helper templates

template< class V >  
constexpr bool [ranges::enable_borrowed_range](borrowed_range.html)<stride_view<V>> =  
[ranges::enable_borrowed_range](borrowed_range.html)<V>; |  |  (since C++23)  
---|---|---  
| |   
  
This specialization of [ranges::enable_borrowed_range](borrowed_range.html "cpp/ranges/borrowed range") makes `stride_view` satisfy [`borrowed_range`](borrowed_range.html "cpp/ranges/borrowed range") when the underlying view satisfies it. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/stride_view&action=edit&section=6 "Edit section: Notes")] Notes

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_ranges_stride`](../experimental/feature_test.html#cpp_lib_ranges_stride "cpp/feature test") | [`202207L`](../compiler_support/23.html#cpp_lib_ranges_stride_202207L "cpp/compiler support/23") | (C++23) | `std::ranges::stride_view`  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/stride_view&action=edit&section=7 "Edit section: Example")] Example

Run this code
    
    
    #include <algorithm>
    #include <iostream>
    #include <ranges>
    #include <string_view>
    using namespace std::literals;
     
    void print(std::[ranges::viewable_range](viewable_range.html) auto&& v, [std::string_view](../string/basic_string_view.html) separator = " ")
    {
        for (auto const& x : v)
            [std::cout](../io/cout.html) << x << separator;
        [std::cout](../io/cout.html) << '\n';
    }
     
    int main()
    {
        print(std::[views::iota](iota_view.html)(1, 13) | std::views::stride(3));
        print(std::[views::iota](iota_view.html)(1, 13) | std::views::stride(3) | std::[views::reverse](reverse_view.html));
        print(std::[views::iota](iota_view.html)(1, 13) | std::[views::reverse](reverse_view.html) | std::views::stride(3));
     
        print("0x0!133713337*x//42/A$@"sv | std::views::stride(0B11) |
              std::[views::transform](transform_view.html)([](char O) -> char { return 0100 | O; }),
              "");
    }

Output: 
    
    
    1 4 7 10
    10 7 4 1
    12 9 6 3
    password

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/stride_view&action=edit&section=8 "Edit section: References")] References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 26.7.31 Stride view [range.stride] 



### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/stride_view&action=edit&section=9 "Edit section: See also")] See also

[ ranges::slide_viewviews::slide](slide_view.html "cpp/ranges/slide view")(C++23) |  a [`view`](view.html "cpp/ranges/view") whose Mth element is a [`view`](view.html "cpp/ranges/view") over the Mth through (M + N - 1)th elements of another [`view`](view.html "cpp/ranges/view")  
(class template) (range adaptor object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_slide_view&action=edit)  
---|---  
[ ranges::chunk_viewviews::chunk](chunk_view.html "cpp/ranges/chunk view")(C++23) |  a range of [`view`s](view.html "cpp/ranges/view") that are `N`-sized non-overlapping successive chunks of the elements of another [`view`](view.html "cpp/ranges/view")  
(class template) (range adaptor object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_chunk_view&action=edit)  
[ ranges::adjacent_viewviews::adjacent](adjacent_view.html "cpp/ranges/adjacent view")(C++23) |  a [`view`](view.html "cpp/ranges/view") consisting of tuples of references to adjacent elements of the adapted view  
(class template) (range adaptor object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_adjacent_view&action=edit)  
[ ranges::filter_viewviews::filter](filter_view.html "cpp/ranges/filter view")(C++20) |  a [`view`](view.html "cpp/ranges/view") that consists of the elements of a [`range`](range.html "cpp/ranges/range") that satisfies a predicate  
(class template) (range adaptor object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_filter_view&action=edit)
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
