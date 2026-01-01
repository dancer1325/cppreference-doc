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
**common_view views::common**  
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

**`std::ranges::common_view`**

[Member functions](common_view.html#Member_functions "cpp/ranges/common view")  
---  
[common_view::common_view](common_view/common_view.html "cpp/ranges/common view/common view")  
[common_view::base](common_view/base.html "cpp/ranges/common view/base")  
[common_view::begin](common_view/begin.html "cpp/ranges/common view/begin")  
[common_view::end](common_view/end.html "cpp/ranges/common view/end")  
[common_view::size](common_view/size.html "cpp/ranges/common view/size")  
[common_view::reserve_hint](common_view/reserve_hint.html "cpp/ranges/common view/reserve hint")(C++26)  
[Deduction guides](common_view/deduction_guides.html "cpp/ranges/common view/deduction guides")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/common_view/navbar_content&action=edit)

Defined in header `[<ranges>](../header/ranges.html "cpp/header/ranges")` |  |   
---|---|---  
template< [ranges::view](view.html) V >  
requires (not [ranges::common_range](common_range.html)<V> and  
[std::copyable](../concepts/copyable.html)<[ranges::iterator_t](iterator_t.html)<V>>)  
class common_view  
: public [ranges::view_interface](view_interface.html)<common_view<V>> |  (1)  |  (since C++20)  
namespace views {  
inline constexpr /* unspecified */ common = /* unspecified */;  
} |  (2)  |  (since C++20)  
Call signature |  |   
template< [ranges::viewable_range](viewable_range.html) R >  
requires /* see below */  
constexpr [ranges::view](view.html) auto common( R&& r ); |  |  (since C++20)  
| |   
  
1) Adapts a given [`view`](view.html "cpp/ranges/view") with different types for iterator/sentinel pair into a [`view`](view.html "cpp/ranges/view") that is also a [`common_range`](common_range.html "cpp/ranges/common range"). A `common_view` always has the same iterator/sentinel type.

2) [RangeAdaptorObject](../named_req/RangeAdaptorObject.html "cpp/named req/RangeAdaptorObject"). Let e be a subexpression. Then the expression views::common(e) is [expression-equivalent](../language/expressions.html#Expression-equivalence "cpp/language/expressions") to: 

  * [views::all](all_view.html)(e), if it is a well-formed expression and decltype((e)) models [`common_range`](common_range.html "cpp/ranges/common range"); 
  * common_view{e} otherwise.



## Contents

  * [1 Data members](common_view.html#Data_members)
  * [2 Member functions](common_view.html#Member_functions)
    * [2.1 Inherited from std::ranges::view_interface](common_view.html#Inherited_from_std::ranges::view_interface)
  * [3 Deduction guides](common_view.html#Deduction_guides)
  * [4 Helper templates](common_view.html#Helper_templates)
  * [5 Notes](common_view.html#Notes)
  * [6 Example](common_view.html#Example)
  * [7 Defect reports](common_view.html#Defect_reports)
  * [8 See also](common_view.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/common_view&action=edit&section=1 "Edit section: Data members")] Data members

Member  |  Description   
---|---  
`V` `_base__` (private) |  the underlying view  
(exposition-only member object*)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/common_view&action=edit&section=2 "Edit section: Member functions")] Member functions

[ (constructor)](common_view/common_view.html "cpp/ranges/common view/common view") |  constructs a `common_view`   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/adaptor/dsc_constructor&action=edit)  
---|---  
[ base](common_view/base.html "cpp/ranges/common view/base") |  returns a copy of the underlying (adapted) view   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/adaptor/dsc_base&action=edit)  
[ begin](common_view/begin.html "cpp/ranges/common view/begin") |  returns an iterator to the beginning   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/adaptor/dsc_begin&action=edit)  
[ end](common_view/end.html "cpp/ranges/common view/end") |  returns an iterator to the end   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/adaptor/dsc_end&action=edit)  
[ size](common_view/size.html "cpp/ranges/common view/size") |  returns the number of elements, provided only if the underlying (adapted) range satisfies [`sized_range`](sized_range.html "cpp/ranges/sized range")   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/adaptor/dsc_size&action=edit)  
[ reserve_hint](common_view/reserve_hint.html "cpp/ranges/common view/reserve hint")(C++26) |  returns the approximate size of the resulting [`approximately_sized_range`](approximately_sized_range.html "cpp/ranges/approximately sized range")   
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
[ data](view_interface/data.html "cpp/ranges/view interface/data") |  gets the address of derived view's data, provided only if its iterator type satisfies [`contiguous_iterator`](../iterator/contiguous_iterator.html "cpp/iterator/contiguous iterator")   
(public member function of `std::ranges::view_interface<D>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/view_interface/dsc_data&action=edit)  
[ front](view_interface/front.html "cpp/ranges/view interface/front") |  returns the first element in the derived view, provided if it satisfies [`forward_range`](forward_range.html "cpp/ranges/forward range")   
(public member function of `std::ranges::view_interface<D>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/view_interface/dsc_front&action=edit)  
[ back](view_interface/back.html "cpp/ranges/view interface/back") |  returns the last element in the derived view, provided only if it satisfies [`bidirectional_range`](bidirectional_range.html "cpp/ranges/bidirectional range") and [`common_range`](common_range.html "cpp/ranges/common range")   
(public member function of `std::ranges::view_interface<D>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/view_interface/dsc_back&action=edit)  
[ operator[]](view_interface/operator_at.html "cpp/ranges/view interface/operator at") |  returns the `n`th element in the derived view, provided only if it satisfies [`random_access_range`](random_access_range.html "cpp/ranges/random access range")   
(public member function of `std::ranges::view_interface<D>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/view_interface/dsc_operator_at&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/common_view&action=edit&section=3 "Edit section: Deduction guides")] [Deduction guides](common_view/deduction_guides.html "cpp/ranges/common view/deduction guides")

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/common_view&action=edit&section=4 "Edit section: Helper templates")] Helper templates

template< class T >  
constexpr bool enable_borrowed_range<std::ranges::common_view<T>> =  
[ranges::enable_borrowed_range](borrowed_range.html)<T>; |  |  (since C++20)  
---|---|---  
| |   
  
This specialization of [ranges::enable_borrowed_range](borrowed_range.html "cpp/ranges/borrowed range") makes `common_view` satisfy [`borrowed_range`](borrowed_range.html "cpp/ranges/borrowed range") when the underlying view satisfies it. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/common_view&action=edit&section=5 "Edit section: Notes")] Notes

`common_view` can be useful for working with legacy algorithms that expect the iterator and sentinel are of the same type. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/common_view&action=edit&section=6 "Edit section: Example")] Example

Run this code
    
    
    #include <initializer_list>
    #include <iostream>
    #include <iterator>
    #include <list>
    #include <numeric>
    #include <ranges>
     
    int main()
    {
        auto v1 = {1, 2, 3, 4, 5};
        auto i1 = [std::counted_iterator](../iterator/counted_iterator.html){v1.begin(), [std::ssize](../iterator/size.html)(v1)};
        auto r1 = std::[ranges::subrange](subrange.html){i1, [std::default_sentinel](../iterator/default_sentinel.html)};
    //  auto e1 = std::accumulate(r1.begin(), r1.end(), 0); // error: "common range" required
        auto c1 = std::ranges::common_view{r1};
        [std::cout](../io/cout.html) << "accumulate: " << [std::accumulate](../algorithm/accumulate.html)(c1.begin(), c1.end(), 0) << '\n';
     
        // inherited from ranges::view_interface:
        [std::cout](../io/cout.html) << "c1.front(): " << c1.front() << '\n';
        [std::cout](../io/cout.html) << "c1.back(): " << c1.back() << '\n';
        [std::cout](../io/cout.html) << "c1.data(): " << c1.data() << '\n';
        [std::cout](../io/cout.html) << "c1[0]: " << c1[0] << '\n';
     
        auto v2 = [std::list](../container/list.html){1, 2, 3, 4, 5};
        auto i2 = [std::counted_iterator](../iterator/counted_iterator.html){v2.begin(), [std::ssize](../iterator/size.html)(v2)};
        auto r2 = std::[ranges::subrange](subrange.html){i2, [std::default_sentinel](../iterator/default_sentinel.html)};
    //  auto e2 = std::accumulate(r2.begin(), r2.end(), 0); // error: "common range" required
        auto c2 = std::ranges::common_view{ r2 };
        [std::cout](../io/cout.html) << "accumulate: " << [std::accumulate](../algorithm/accumulate.html)(c2.begin(), c2.end(), 0) << '\n';
     
        // inherited from ranges::view_interface:
        [std::cout](../io/cout.html) << "c2.front(): " << c2.front() << '\n';
    //  auto e3 = c2.back(); // error: "bidirectional range" required
    //  auto e4 = c2.data(); // error: "contiguous range" required
    //  auto e5 = c2[0];     // error: "random access range" required
    }

Possible output: 
    
    
    accumulate: 15
    c1.front(): 1
    c1.back(): 5
    c1.data(): 0x7f19937f00d0
    c1[0]: 1
    accumulate: 15
    c2.front(): 1

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/common_view&action=edit&section=7 "Edit section: Defect reports")] Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3494](https://cplusplus.github.io/LWG/issue3494) | C++20  | `common_view` was never a `borrowed_range` | it is a `borrowed_range` if its underlying view is   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/common_view&action=edit&section=8 "Edit section: See also")] See also

[ ranges::common_range](common_range.html "cpp/ranges/common range")(C++20) |  specifies that a range has identical iterator and sentinel types   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_common_range&action=edit)  
---|---  
[ common_iterator](../iterator/common_iterator.html "cpp/iterator/common iterator")(C++20) |  adapts an iterator type and its sentinel into a common iterator type   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/iterator/dsc_common_iterator&action=edit)
