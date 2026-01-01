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
**borrowed_range**` `  
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
  
  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/navbar_content&action=edit)

Defined in header `[<ranges>](../header/ranges.html "cpp/header/ranges")` |  |   
---|---|---  
template< class R >  
concept borrowed_range =  
[ranges::range](range.html)<R> &&  
([std::is_lvalue_reference_v](../types/is_lvalue_reference.html)<R> ||  
ranges::enable_borrowed_range<[std::remove_cvref_t](../types/remove_cvref.html)<R>>); |  (1)  |  (since C++20)  
template< class R >  
constexpr bool enable_borrowed_range = false; |  (2)  |  (since C++20)  
| |   
  
1) The concept `borrowed_range` defines the requirements of a range such that a function can take it by value and return iterators obtained from it without danger of dangling.

2) The `enable_borrowed_range` variable template is used to indicate whether a [`range`](range.html "cpp/ranges/range") is a `borrowed_range`. The primary template is defined as false.

## Contents

  * [1 Semantic requirements](borrowed_range.html#Semantic_requirements)
  * [2 Specializations](borrowed_range.html#Specializations)
    * [2.1 Unconditionally borrowed ranges in the standard library](borrowed_range.html#Unconditionally_borrowed_ranges_in_the_standard_library)
    * [2.2 Conditionally borrowed ranges in the standard library](borrowed_range.html#Conditionally_borrowed_ranges_in_the_standard_library)
  * [3 Example](borrowed_range.html#Example)
  * [4 See also](borrowed_range.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/borrowed_range&action=edit&section=1 "Edit section: Semantic requirements")] Semantic requirements

Let `U` be [std::remove_reference_t](../types/remove_reference.html)<T> if `T` is an rvalue reference type, and `T` otherwise. Given a variable u of type `U`, `T` models `borrowed_range` only if the validity of iterators obtained from u is not tied to the lifetime of that variable. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/borrowed_range&action=edit&section=2 "Edit section: Specializations")] Specializations

A program may specialize `enable_borrowed_range` to true for cv-unqualified [program-defined types](../language/type-id.html#Program-defined_type "cpp/language/type") which model `borrowed_range`, and false for types which do not. Such specializations shall be usable in [constant expression](../language/constant_expression.html "cpp/language/constant expression") and have type const bool. 

#### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/borrowed_range&action=edit&section=3 "Edit section: Unconditionally borrowed ranges in the standard library")] Unconditionally borrowed ranges in the standard library

Specializations of `enable_borrowed_range` for all specializations of the following standard templates are defined as true: 

  * [`std::basic_string_view`](../string/basic_string_view.html#Helper_templates "cpp/string/basic string view")
  * [`std::span`](../container/span.html#Helper_templates "cpp/container/span")
  * [`std::ranges::subrange`](subrange.html#Helper_templates "cpp/ranges/subrange")
  * [`std::ranges::ref_view`](ref_view.html#Helper_templates "cpp/ranges/ref view")
  * [`std::ranges::empty_view`](empty_view.html#Helper_templates "cpp/ranges/empty view")
  * [`std::ranges::iota_view`](iota_view.html#Helper_templates "cpp/ranges/iota view")



#### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/borrowed_range&action=edit&section=4 "Edit section: Conditionally borrowed ranges in the standard library")] Conditionally borrowed ranges in the standard library

Specialization of `enable_borrowed_range` for the following standard range adaptors are defined as true if and only if std::ranges::enable_borrowed_range<V> is true, where `V` is the underlying view type: 

  * [`std::ranges::adjacent_view`](adjacent_view.html#Helper_templates "cpp/ranges/adjacent view")
  * [`std::ranges::as_const_view`](as_const_view.html#Helper_templates "cpp/ranges/as const view")
  * [`std::ranges::as_rvalue_view`](as_rvalue_view.html#Helper_templates "cpp/ranges/as rvalue view")
  * [`std::ranges::chunk_view`](chunk_view.html#Helper_templates "cpp/ranges/chunk view") [[1]](borrowed_range.html#cite_note-1)

| (since C++23)  
---|---  
  
  * [`std::ranges::common_view`](common_view.html#Helper_templates "cpp/ranges/common view")
  * [`std::ranges::drop_view`](drop_view.html#Helper_templates "cpp/ranges/drop view")
  * [`std::ranges::drop_while_view`](drop_while_view.html#Helper_templates "cpp/ranges/drop while view")
  * [`std::ranges::elements_view`](elements_view.html#Helper_templates "cpp/ranges/elements view")



  * [`std::ranges::enumerate_view`](enumerate_view.html#Helper_templates "cpp/ranges/enumerate view")

| (since C++23)  
---|---  
  
  * [`std::ranges::owning_view`](owning_view.html#Helper_templates "cpp/ranges/owning view")
  * [`std::ranges::reverse_view`](reverse_view.html#Helper_templates "cpp/ranges/reverse view")



  * [`std::ranges::slide_view`](slide_view.html#Helper_templates "cpp/ranges/slide view")
  * [`std::ranges::stride_view`](stride_view.html#Helper_templates "cpp/ranges/stride view")

| (since C++23)  
---|---  
  
  * [`std::ranges::take_view`](take_view.html#Helper_templates "cpp/ranges/take view")



  * [`std::ranges::to_input_view`](to_input_view.html#Helper_templates "cpp/ranges/to input view")

| (since C++26)  
---|---  
  
  1. [↑](borrowed_range.html#cite_ref-1) The underlying view `V` must also satisfy [`forward_range`](forward_range.html "cpp/ranges/forward range").

Specialization of `enable_borrowed_range` for the following standard range adaptors are defined as true if and only if (std::ranges::enable_borrowed_range<Vs> && ...) is true, where `Vs...` are all view types it adapts: 

  * [`std::ranges::zip_view`](zip_view.html#Helper_templates "cpp/ranges/zip view")

| (since C++23)  
---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/borrowed_range&action=edit&section=5 "Edit section: Example")] Example

Demonstrates the specializations of `enable_borrowed_range` for program defined types. Such specializations protect against potentially dangling results.

Run this code
    
    
    #include <algorithm>
    #include <array>
    #include <cstddef>
    #include <iostream>
    #include <ranges>
    #include <span>
    #include <type_traits>
     
    template<typename T, [std::size_t](../types/size_t.html) N>
    struct MyRange : [std::array](../container/array.html)<T, N> {};
     
    template<typename T, [std::size_t](../types/size_t.html) N>
    constexpr bool std::ranges::enable_borrowed_range<MyRange<T, N>> = false;
     
    template<typename T, [std::size_t](../types/size_t.html) N>
    struct MyBorrowedRange : [std::span](../container/span.html)<T, N> {};
     
    template<typename T, [std::size_t](../types/size_t.html) N>
    constexpr bool std::ranges::enable_borrowed_range<MyBorrowedRange<T, N>> = true;
     
    int main()
    {
        static_assert(std::[ranges::range](range.html)<MyRange<int, 8>>);
        static_assert(std::ranges::borrowed_range<MyRange<int, 8>> == false);
        static_assert(std::[ranges::range](range.html)<MyBorrowedRange<int, 8>>);
        static_assert(std::ranges::borrowed_range<MyBorrowedRange<int, 8>> == true);
     
        auto getMyRangeByValue = []{ return MyRange<int, 4>{{1, 2, 42, 3}}; };
        auto dangling_iter = std::[ranges::max_element](../algorithm/ranges/max_element.html)(getMyRangeByValue());
        static_assert([std::is_same_v](../types/is_same.html)<std::[ranges::dangling](http://en.cppreference.com/w/cpp/ranges-dangling-placeholder/dangling), decltype(dangling_iter)>);
        // *dangling_iter; // compilation error (i.e. dangling protection works.)
     
        auto my = MyRange<int, 4>{{1, 2, 42, 3}};
        auto valid_iter = std::[ranges::max_element](../algorithm/ranges/max_element.html)(my);
        [std::cout](../io/cout.html) << *valid_iter << ' '; // OK: 42
     
        auto getMyBorrowedRangeByValue = []
        {
            static int sa[4]{1, 2, 42, 3};
            return MyBorrowedRange<int, [std::size](../iterator/size.html)(sa)>{sa};
        };
        auto valid_iter2 = std::[ranges::max_element](../algorithm/ranges/max_element.html)(getMyBorrowedRangeByValue());
        [std::cout](../io/cout.html) << *valid_iter2 << '\n'; // OK: 42
    }

Output: 
    
    
    42 42

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/borrowed_range&action=edit&section=6 "Edit section: See also")] See also

[ ranges::dangling](dangling.html "cpp/ranges/dangling")(C++20) |  a placeholder type indicating that an iterator or a `subrange` should not be returned since it would be dangling   
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_dangling&action=edit)  
---|---
