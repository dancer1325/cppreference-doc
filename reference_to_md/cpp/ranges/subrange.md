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
  
| **subrange**  
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
  
  
  


**`std::ranges::subrange`**

[Member functions](subrange.html#Member_functions "cpp/ranges/subrange")  
---  
[subrange::subrange](subrange/subrange.html "cpp/ranges/subrange/subrange")  
[subrange::operator PairLike](subrange/operator_PairLike.html "cpp/ranges/subrange/operator PairLike")  
[Observers](subrange.html#Observers "cpp/ranges/subrange")  
[subrange::begin](subrange/begin.html "cpp/ranges/subrange/begin")  
[subrange::end](subrange/end.html "cpp/ranges/subrange/end")  
[subrange::empty](subrange/empty.html "cpp/ranges/subrange/empty")  
[subrange::size](subrange/size.html "cpp/ranges/subrange/size")  
[Iterator operations](subrange.html#Iterator_operations "cpp/ranges/subrange")  
[subrange::advance](subrange/advance.html "cpp/ranges/subrange/advance")  
[subrange::next](subrange/next.html "cpp/ranges/subrange/next")  
[subrange::prev](subrange/prev.html "cpp/ranges/subrange/prev")  
[Deduction guides](subrange/deduction_guides.html "cpp/ranges/subrange/deduction guides")  
[Non-member functions](subrange.html#Non-member_functions "cpp/ranges/subrange")  
[get(std::ranges::subrange)](subrange/get.html "cpp/ranges/subrange/get")  
[Helper types](subrange.html#Helper_types "cpp/ranges/subrange")  
[subrange_kind](subrange_kind.html "cpp/ranges/subrange kind")  
[tuple_size<std::ranges::subrange>](subrange/tuple_size.html "cpp/ranges/subrange/tuple size")  
[tuple_element<std::ranges::subrange>](subrange/tuple_element.html "cpp/ranges/subrange/tuple element")  
  


Defined in header `[<ranges>](../header/ranges.html "cpp/header/ranges")` |  |   
---|---|---  
template<  
[std::input_or_output_iterator](../iterator/input_or_output_iterator.html) I,  
[std::sentinel_for](../iterator/sentinel_for.html)<I> S = I,  
[ranges::subrange_kind](subrange_kind.html) K = [std::sized_sentinel_for](../iterator/sized_sentinel_for.html)<S, I> ?  
ranges::subrange_kind::sized :  
ranges::subrange_kind::unsized >  
requires (K == ranges::subrange_kind::sized || ![std::sized_sentinel_for](../iterator/sized_sentinel_for.html)<S, I>)  
class subrange  
: public [ranges::view_interface](view_interface.html)<subrange<I, S, K>> |  (1)  |  (since C++20)  
Helper concepts |  |   
template<class From, class To>  
concept /*uses-nonqualification-pointer-conversion*/ =  
/* see description */; |  (2) | (exposition only*)  
template<class From, class To>  
concept /*convertible-to-non-slicing*/ = /* see description */; |  (3) | (exposition only*)  
| |   
  
1) The `subrange` class template combines together an iterator and a sentinel into a single [`view`](view.html "cpp/ranges/view"). It models [`sized_range`](sized_range.html "cpp/ranges/sized range") whenever the final template parameter is subrange_kind​::​sized (which happens when [std::sized_sentinel_for](../iterator/sized_sentinel_for.html)<S, I> is satisfied or when size is passed explicitly as a constructor argument).

2) Determines whether `From` is convertible to `To` without [qualification conversions](../language/implicit_cast.html#Qualification_conversions "cpp/language/implicit conversion"). Equivalent to: 
    
    
    template<class From, class To>
    concept /*uses-nonqualification-pointer-conversion*/ =
        [std::is_pointer_v](../types/is_pointer.html)<From> && [std::is_pointer_v](../types/is_pointer.html)<To> &&
            ![std::convertible_to](../concepts/convertible_to.html)<[std::remove_pointer_t](../types/remove_pointer.html)<From>(*)[],
                                 [std::remove_pointer_t](../types/remove_pointer.html)<To>(*)[]>;

3) Determines whether `From` is convertible to `To` without derived-to-base conversion: 
    
    
    template<class From, class To>
    concept /*convertible-to-non-slicing*/ =
        [std::convertible_to](../concepts/convertible_to.html)<From, To> &&
            !/*uses-nonqualification-pointer-conversion*/
                <[std::decay_t](../types/decay.html)<From>, [std::decay_t](../types/decay.html)<To>>;

## Contents

  * [1 Data members](subrange.html#Data_members)
  * [2 Member functions](subrange.html#Member_functions)
    * [2.1 Observers](subrange.html#Observers)
    * [2.2 Iterator operations](subrange.html#Iterator_operations)
    * [2.3 Inherited from std::ranges::view_interface](subrange.html#Inherited_from_std::ranges::view_interface)
  * [3 Deduction guides](subrange.html#Deduction_guides)
  * [4 Non-member functions](subrange.html#Non-member_functions)
  * [5 Helper types](subrange.html#Helper_types)
  * [6 Helper templates](subrange.html#Helper_templates)
  * [7 Example](subrange.html#Example)
  * [8 Defect reports](subrange.html#Defect_reports)
  * [9 See also](subrange.html#See_also)
  * [10 External links](subrange.html#External_links)

  
---  
  
### Data members

Member  |  Definition   
---|---  
constexpr bool `_StoreSize_` [static] |  K == ranges::subrange_kind::sized &&  
` `![std::sized_sentinel_for](../iterator/sized_sentinel_for.html)<S, I>  
(exposition-only static member constant*)  
`I` `_begin__` |  an iterator to the beginning of the subrange  
(exposition-only member object*)  
`S` `_end__` |  a sentinel denoting the end of the subrange  
(exposition-only member object*)  
`_[make-unsigned-like-t](../ranges.html#make-unsigned-like-t "cpp/ranges")_` ﻿<[std::iter_difference_t](../iterator/iter_t.html)<I>> `_size__`   
(present only if `_StoreSize_` is true) |  the size of the subrange  
(exposition-only member object*)  
  
### Member functions

[ (constructor)](subrange/subrange.html "cpp/ranges/subrange/subrange") |  creates a new `subrange`   
(public member function)  
---|---  
[ operator PairLike](subrange/operator_PairLike.html "cpp/ranges/subrange/operator PairLike") |  converts the `subrange` to a [`_pair-like_`](../utility/tuple/tuple-like.html "cpp/utility/tuple/tuple-like") type   
(public member function)   
  
#####  Observers   
  
[ begin](subrange/begin.html "cpp/ranges/subrange/begin") |  obtains the iterator   
(public member function)   
[ end](subrange/end.html "cpp/ranges/subrange/end") |  obtains the sentinel   
(public member function)   
[ empty](subrange/empty.html "cpp/ranges/subrange/empty") |  checks whether the `subrange` is empty   
(public member function)   
[ size](subrange/size.html "cpp/ranges/subrange/size") |  obtains the size of the `subrange`   
(public member function)   
  
#####  Iterator operations   
  
[ advance](subrange/advance.html "cpp/ranges/subrange/advance") |  advances the iterator by given distance   
(public member function)   
[ prev](subrange/prev.html "cpp/ranges/subrange/prev") |  obtains a copy of the `subrange` with its iterator decremented by a given distance   
(public member function)   
[ next](subrange/next.html "cpp/ranges/subrange/next") |  obtains a copy of the `subrange` with its iterator advanced by a given distance   
(public member function)   
  
#####  Inherited from [std::ranges::view_interface](view_interface.html "cpp/ranges/view interface")  
  
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
  
### [Deduction guides](subrange/deduction_guides.html "cpp/ranges/subrange/deduction guides")

### Non-member functions

[ get(std::ranges::subrange)](subrange/get.html "cpp/ranges/subrange/get")(C++20) |  obtains iterator or sentinel from a **std::ranges::subrange**   
(function template)   
---|---  
  
### Helper types

[ ranges::subrange_kind](subrange_kind.html "cpp/ranges/subrange kind")(C++20) |  specifies whether a **std::ranges::subrange** models [std::ranges::sized_range](sized_range.html "cpp/ranges/sized range")   
(enum)   
---|---  
[ std::tuple_size<std::ranges::subrange>](subrange/tuple_size.html "cpp/ranges/subrange/tuple size")(C++20) |  obtains the size of a **std::ranges::subrange**   
(class template specialization)   
[ std::tuple_element<std::ranges::subrange>](subrange/tuple_element.html "cpp/ranges/subrange/tuple element")(C++20) |  obtains the type of the iterator or the sentinel of a **std::ranges::subrange**   
(class template specialization)   
  
### Helper templates

template< class I, class S, [ranges::subrange_kind](subrange_kind.html) K >  
constexpr bool [ranges::enable_borrowed_range](borrowed_range.html)<ranges::subrange<I, S, K>> = true; |  |  (since C++20)  
---|---|---  
| |   
  
This specialization of [ranges::enable_borrowed_range](borrowed_range.html) makes `subrange` satisfy [`borrowed_range`](borrowed_range.html "cpp/ranges/borrowed range"). 

### Example

Run this code
    
    
    #include <map>
    #include <print>
    #include <ranges>
     
    void make_uppercase(char& v)
    {
        v += 'A' - 'a';
    }
     
    void uppercase_transform([std::multimap](../container/multimap.html)<int, char>& m, int k)
    {
        auto [first, last] = m.equal_range(k);
        for (auto& [_, v] : std::ranges::subrange(first, last))
            make_uppercase(v);
    }
     
    int main()
    {
        [std::multimap](../container/multimap.html)<int, char> mm{{4, 'a'}, {3, '-'}, {4, 'b'}, {5, '-'}, {4, 'c'}};
        [std::println](../io/println.html)("Before: {}", mm);
        uppercase_transform(mm, 4);
        [std::println](../io/println.html)("After:  {}", mm);
    }

Output: 
    
    
    Before: {3: '-', 4: 'a', 4: 'b', 4: 'c', 5: '-'}
    After:  {3: '-', 4: 'A', 4: 'B', 4: 'C', 5: '-'}

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3470](https://cplusplus.github.io/LWG/issue3470) | C++20  | `_convertible-to-non-slicing_` might reject qualification conversions  | always accepts them   
  
### See also

[ ranges::view_interface](view_interface.html "cpp/ranges/view interface")(C++20) |  helper class template for defining a [`view`](view.html "cpp/ranges/view"), using the [curiously recurring template pattern](../language/crtp.html "cpp/language/crtp")   
(class template)   
---|---  
  
### External links

[Read/write all values of a `std::multimap` with a given key in C++20](https://stackoverflow.com/a/59659686) — SO   
---
