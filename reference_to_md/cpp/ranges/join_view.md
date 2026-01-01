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
**join_view views::join**  
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

**`std::ranges::join_view`**

[Member functions](join_view.html#Member_functions "cpp/ranges/join view")  
---  
[join_view::join_view](join_view/join_view.html "cpp/ranges/join view/join view")  
[join_view::base](join_view/base.html "cpp/ranges/join view/base")  
[join_view::begin](join_view/begin.html "cpp/ranges/join view/begin")  
[join_view::end](join_view/end.html "cpp/ranges/join view/end")  
[Deduction guides](join_view/deduction_guides.html "cpp/ranges/join view/deduction guides")  
[Iterator](join_view/iterator.html "cpp/ranges/join view/iterator")  
[join_view::_iterator_ ::_iterator_](join_view/iterator/iterator.html "cpp/ranges/join view/iterator/iterator")  
[join_view::_iterator_ ::operator*  
join_view::_iterator_ ::operator->](join_view/iterator/operator*.html "cpp/ranges/join view/iterator/operator*")  
[join_view::_iterator_ ::operator++  
join_view::_iterator_ ::operator++(int)  
join_view::_iterator_ ::operator--  
join_view::_iterator_ ::operator--(int)](join_view/iterator/operator_arith.html "cpp/ranges/join view/iterator/operator arith")  
[join_view::_iterator_ ::_satisfy_](join_view/iterator/satisfy.html "cpp/ranges/join view/iterator/satisfy")  
[operator==(join_view::_iterator_)](join_view/iterator/operator_cmp.html "cpp/ranges/join view/iterator/operator cmp")  
[iter_move(join_view::_iterator_)](join_view/iterator/iter_move.html "cpp/ranges/join view/iterator/iter move")  
[iter_swap(join_view::_iterator_)](join_view/iterator/iter_swap.html "cpp/ranges/join view/iterator/iter swap")  
[Sentinel](join_view/sentinel.html "cpp/ranges/join view/sentinel")  
[join_view::_sentinel_ ::_sentinel_](join_view/sentinel/sentinel.html "cpp/ranges/join view/sentinel/sentinel")  
[operator==(join_view::_iterator_ ,join_view::_sentinel_)](join_view/sentinel/operator_cmp.html "cpp/ranges/join view/sentinel/operator cmp")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/join_view/navbar_content&action=edit)

Defined in header `[<ranges>](../header/ranges.html "cpp/header/ranges")` |  |   
---|---|---  
template< [ranges::input_range](input_range.html) V >  
requires [ranges::view](view.html)<V> and  
[ranges::input_range](input_range.html)<[ranges::range_reference_t](range_reference_t.html)<V>>  
class join_view  
: public [ranges::view_interface](view_interface.html)<join_view<V>> |  (1)  |  (since C++20)  
namespace views {  
inline constexpr /* unspecified */ join = /* unspecified */;  
} |  (2)  |  (since C++20)  
Call signature |  |   
template< [ranges::viewable_range](viewable_range.html) R >  
requires /* see below */  
constexpr [ranges::view](view.html) auto join( R&& r ); |  |  (since C++20)  
| |   
  
1) A range adaptor that represents [`view`](view.html "cpp/ranges/view") consisting of the sequence obtained from flattening a view of ranges.

2) [RangeAdaptorObject](../named_req/RangeAdaptorObject.html "cpp/named req/RangeAdaptorObject") (and also [RangeAdaptorClosureObject](../named_req/RangeAdaptorClosureObject.html "cpp/named req/RangeAdaptorClosureObject")). The expression views::join(e) is [expression-equivalent](../language/expressions.html#Expression-equivalence "cpp/language/expressions") to join_view<[views::all_t](all_view.html)<decltype((e))>>{e} for any suitable subexpressions e.

`join_view` models [`input_range`](input_range.html "cpp/ranges/input range"). 

`join_view` models [`forward_range`](forward_range.html "cpp/ranges/forward range") when: 

  * [ranges::range_reference_t](range_reference_t.html)<V> is a reference type, and 
  * V and [ranges::range_reference_t](range_reference_t.html)<V> each model [`forward_range`](forward_range.html "cpp/ranges/forward range"). 



`join_view` models [`bidirectional_range`](bidirectional_range.html "cpp/ranges/bidirectional range") when: 

  * [ranges::range_reference_t](range_reference_t.html)<V> is a reference type, 
  * V models [`bidirectional_range`](bidirectional_range.html "cpp/ranges/bidirectional range"), and 
  * [ranges::range_reference_t](range_reference_t.html)<V> models both [`bidirectional_range`](bidirectional_range.html "cpp/ranges/bidirectional range") and [`common_range`](common_range.html "cpp/ranges/common range"). 



`join_view` models [`common_range`](common_range.html "cpp/ranges/common range") when: 

  * [ranges::range_reference_t](range_reference_t.html)<V> is a reference type, and 
  * V and [ranges::range_reference_t](range_reference_t.html)<V> each model [`forward_range`](forward_range.html "cpp/ranges/forward range") and [`common_range`](common_range.html "cpp/ranges/common range"). 



## Contents

  * [1 Member functions](join_view.html#Member_functions)
    * [1.1 Inherited from std::ranges::view_interface](join_view.html#Inherited_from_std::ranges::view_interface)
  * [2 Deduction guides](join_view.html#Deduction_guides)
  * [3 Nested classes](join_view.html#Nested_classes)
  * [4 Notes](join_view.html#Notes)
  * [5 Example](join_view.html#Example)
  * [6 Defect reports](join_view.html#Defect_reports)
  * [7 See also](join_view.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/join_view&action=edit&section=1 "Edit section: Member functions")] Member functions

[ (constructor)](join_view/join_view.html "cpp/ranges/join view/join view") |  constructs a `join_view`   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/adaptor/dsc_constructor&action=edit)  
---|---  
[ base](join_view/base.html "cpp/ranges/join view/base") |  returns a copy of the underlying (adapted) view   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/adaptor/dsc_base&action=edit)  
[ begin](join_view/begin.html "cpp/ranges/join view/begin") |  returns an iterator to the beginning   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/adaptor/dsc_begin&action=edit)  
[ end](join_view/end.html "cpp/ranges/join view/end") |  returns an iterator or a sentinel to the end   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/adaptor/dsc_end&action=edit)  
  
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
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/join_view&action=edit&section=2 "Edit section: Deduction guides")] [Deduction guides](join_view/deduction_guides.html "cpp/ranges/join view/deduction guides")

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/join_view&action=edit&section=3 "Edit section: Nested classes")] Nested classes

[_iterator_](join_view/iterator.html "cpp/ranges/join view/iterator") |  the iterator type  
(exposition-only member class template*)  
---|---  
[_sentinel_](join_view/sentinel.html "cpp/ranges/join view/sentinel") |  the sentinel type  
(exposition-only member class template*)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/join_view&action=edit&section=4 "Edit section: Notes")] Notes

Before [P2328R1](https://wg21.link/P2328R1) was adopted, the inner range type ([ranges::range_reference_t](range_reference_t.html)<V>) cannot be a container type (but can be reference to container). For example, it was not allowed to join a [`transform_view`](transform_view.html "cpp/ranges/transform view") of [std::string](../string/basic_string.html "cpp/string/basic string") prvalue. 
    
    
    struct Person { int age; [std::string](../string/basic_string.html) name; };
     
    auto f([std::vector](../container/vector.html)<Person>& v) {
    //  return v | std::views::transform([](auto& p){ return p.name; })
    //           | std::views::join; // error before P2328R1
        return v | std::[views::transform](transform_view.html)([](auto& p) -> [std::string](../string/basic_string.html)& { return p.name; })
                 | std::views::join; // OK
    }

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/join_view&action=edit&section=5 "Edit section: Example")] Example

Run this code
    
    
    #include <iostream>
    #include <ranges>
    #include <string_view>
    #include <vector>
     
    int main()
    {
        using namespace std::literals;
     
        const auto bits = {"https:"sv, "//"sv, "cppreference"sv, "."sv, "com"sv};
        for (char const c : bits | std::views::join)
            [std::cout](../io/cout.html) << c;
        [std::cout](../io/cout.html) << '\n';
     
        const [std::vector](../container/vector.html)<[std::vector](../container/vector.html)<int>> v{{1, 2}, {3, 4, 5}, {6}, {7, 8, 9}};
        auto jv = std::ranges::join_view(v);
        for (int const e : jv)
            [std::cout](../io/cout.html) << e << ' ';
        [std::cout](../io/cout.html) << '\n';
    }

Output: 
    
    
    https://cppreference.com
    1 2 3 4 5 6 7 8 9

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/join_view&action=edit&section=6 "Edit section: Defect reports")] Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3474](https://cplusplus.github.io/LWG/issue3474) | C++20  | views::join(e) returned a copy of e when e is a `join_view` | returns a nested `join_view`  
[P2328R1](https://wg21.link/P2328R1) | C++20  | non-view [`range`](range.html "cpp/ranges/range") prvalues could not be joined by `join_view` | made joinable   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/join_view&action=edit&section=7 "Edit section: See also")] See also

[ ranges::join_with_viewviews::join_with](join_with_view.html "cpp/ranges/join with view")(C++23) |  a [`view`](view.html "cpp/ranges/view") consisting of the sequence obtained from flattening a view of ranges, with the delimiter in between elements  
(class template) (range adaptor object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_join_with_view&action=edit)  
---|---  
[ ranges::concat_viewviews::concat](concat_view.html "cpp/ranges/concat view")(C++26) |  a [`view`](view.html "cpp/ranges/view") consisting of concatenation of the adapted views  
(class template) (customization point object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_concat_view&action=edit)
