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
**keys_view views::keys**  
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
using keys_view = [ranges::elements_view](elements_view.html)<R, 0>; |  (1)  |  (since C++20)  
namespace views {  
inline constexpr auto keys = ranges::elements<0>;  
} |  (2)  |  (since C++20)  
| |   
  
Takes a [`view`](view.html "cpp/ranges/view") of _tuple-like_ values (e.g. [std::tuple](../utility/tuple.html "cpp/utility/tuple") or [std::pair](../utility/pair.html "cpp/utility/pair")), and produces a view with a _value-type_ of the _first_ element of the adapted view's value-type. 

1) An alias for [ranges::elements_view](elements_view.html)<R, 0>.

2) [RangeAdaptorObject](../named_req/RangeAdaptorObject.html "cpp/named req/RangeAdaptorObject") (and also [RangeAdaptorClosureObject](../named_req/RangeAdaptorClosureObject.html "cpp/named req/RangeAdaptorClosureObject")). The expression views::keys(e) is [expression-equivalent](../language/expressions.html#Expression-equivalence "cpp/language/expressions") to keys_view<[views::all_t](all_view.html)<decltype((e))>>{e} for any suitable subexpression e.

## Contents

  * [1 Notes](keys_view.html#Notes)
  * [2 Example](keys_view.html#Example)
  * [3 Defect reports](keys_view.html#Defect_reports)
  * [4 See also](keys_view.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/keys_view&action=edit&section=1 "Edit section: Notes")] Notes

keys_view can be useful for extracting _keys_ from associative containers, e.g. 
    
    
    [std::map](../container/map.html)<[std::string](../string/basic_string.html), int> map{{"one", 1}, {"two", 2}};
     
    for (auto const& key : std::views::keys(map))
        [std::cout](../io/cout.html) << key << ' ';
    // prints: one two

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/keys_view&action=edit&section=2 "Edit section: Example")] Example

Displays values for each type of [quark](https://en.wikipedia.org/wiki/quark "enwiki:quark") in particle physics.

Run this code
    
    
    #include <iomanip>
    #include <iostream>
    #include <locale>
    #include <ranges>
    #include <string>
    #include <tuple>
    #include <vector>
     
    int main()
    {
        const [std::vector](../container/vector.html)<[std::tuple](../utility/tuple.html)<[std::string](../string/basic_string.html), double, bool>> quark_mass_charge
        {
            // name, MeV/c², has positive electric-charge:
            {"up", 2.3, true}, {"down", 4.8, false},
            {"charm", 1275, true}, {"strange", 95, false},
            {"top", 173'210, true}, {"bottom", 4'180, false},
        };
     
        [std::cout](../io/cout.html).imbue([std::locale](../locale/locale.html)("en_US.utf8"));
        [std::cout](../io/cout.html) << "Quark name:  │ ";
        for ([std::string](../string/basic_string.html) const& name : std::views::keys(quark_mass_charge))
            [std::cout](../io/cout.html) << [std::setw](../io/manip/setw.html)(9) << name << " │ ";
     
        [std::cout](../io/cout.html) << "\n" "Mass MeV/c²: │ ";
        for (const double mass : std::[views::values](values_view.html)(quark_mass_charge))
            [std::cout](../io/cout.html) << [std::setw](../io/manip/setw.html)(9) << mass << " │ ";
     
        [std::cout](../io/cout.html) << "\n" "E-charge:    │ ";
        for (const bool pos : std::[views::elements](elements_view.html)<2>(quark_mass_charge))
            [std::cout](../io/cout.html) << [std::setw](../io/manip/setw.html)(9) << (pos ? "+2/3" : "-1/3") << " │ ";
        [std::cout](../io/cout.html) << '\n';
    }

Output: 
    
    
    Quark name:  │        up │      down │     charm │   strange │       top │    bottom │
    Mass MeV/c²: │       2.3 │       4.8 │     1,275 │        95 │   173,210 │     4,180 │
    E-charge:    │      +2/3 │      -1/3 │      +2/3 │      -1/3 │      +2/3 │      -1/3 │

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/keys_view&action=edit&section=3 "Edit section: Defect reports")] Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3563](https://cplusplus.github.io/LWG/issue3563) | C++20  | `keys_view` is unable to participate in CTAD due to its use of views::all_t | views::all_t removed   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/keys_view&action=edit&section=4 "Edit section: See also")] See also

[ ranges::values_viewviews::values](values_view.html "cpp/ranges/values view")(C++20) |  takes a [`view`](view.html "cpp/ranges/view") consisting of pair-like values and produces a [`view`](view.html "cpp/ranges/view") of the second elements of each pair  
(class template) (range adaptor object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_values_view&action=edit)  
---|---  
[ ranges::elements_viewviews::elements](elements_view.html "cpp/ranges/elements view")(C++20) |  takes a [`view`](view.html "cpp/ranges/view") consisting of [`_tuple-like_`](../utility/tuple/tuple-like.html "cpp/utility/tuple/tuple-like") values and a number N and produces a [`view`](view.html "cpp/ranges/view") of Nth element of each tuple  
(class template) (range adaptor object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_elements_view&action=edit)  
[ slice](../numeric/valarray/slice.html "cpp/numeric/valarray/slice") |  BLAS-like slice of a valarray: starting index, length, stride   
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/valarray/dsc_slice&action=edit)
