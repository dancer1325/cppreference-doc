[C++](../cpp.html "cpp")

[Compiler support](compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](freestanding.html "cpp/freestanding")  
[Language](language.html "cpp/language")  
[Standard library](standard_library.html "cpp/standard library")  
[Standard library headers](headers.html "cpp/header")  
[Named requirements](iterator/concepts.html "cpp/named req")  
[Feature test macros](experimental/feature_test.html "cpp/feature test") (C++20)  
[Language support library](utility.html#Language_support "cpp/utility")  
[Concepts library](concepts.html "cpp/concepts") (C++20)  
[Diagnostics library](error.html "cpp/error")  
[Memory management library](memory.html "cpp/memory")  
[Metaprogramming library](meta.html "cpp/meta") (C++11)  
[General utilities library](utility.html "cpp/utility")  
[Containers library](container.html "cpp/container")  
[Iterators library](iterator.html "cpp/iterator")  
**Ranges library** (C++20)  
[Algorithms library](algorithm.html "cpp/algorithm")  
[Strings library](string.html "cpp/string")  
[Text processing library](text.html "cpp/text")  
[Numerics library](numeric.html "cpp/numeric")  
[Date and time library](chrono.html "cpp/chrono")  
[Input/output library](io.html "cpp/io")  
[Filesystem library](filesystem.html "cpp/filesystem") (C++17)  
[Concurrency support library](atomic.html "cpp/thread") (C++11)  
[Execution control library](experimental/execution.html "cpp/execution") (C++26)  
[Technical specifications](experimental.html "cpp/experimental")  
[Symbols index](symbol_index.html "cpp/symbol index")  
[External libraries](links/libs.html "cpp/links/libs")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/navbar_content&action=edit)

**Ranges library**

| [Range access](ranges.html#Range_access "cpp/ranges")  
---  
| [begin](ranges/begin.html "cpp/ranges/begin")  
---  
[cbegin](ranges/cbegin.html "cpp/ranges/cbegin")` `  
[end](ranges/end.html "cpp/ranges/end")  
[cend](ranges/cend.html "cpp/ranges/cend")  
  
| [rbegin](ranges/rbegin.html "cpp/ranges/rbegin")  
---  
[crbegin](ranges/crbegin.html "cpp/ranges/crbegin")` `  
[rend](ranges/rend.html "cpp/ranges/rend")  
[crend](ranges/crend.html "cpp/ranges/crend")  
  
| [size](ranges/size.html "cpp/ranges/size")  
---  
[ssize](ranges/ssize.html "cpp/ranges/ssize")` `  
[data](ranges/data.html "cpp/ranges/data")  
[cdata](ranges/cdata.html "cpp/ranges/cdata")  
  
| [reserve_hint](ranges/reserve_hint.html "cpp/ranges/reserve hint")(C++26)` `  
---  
[empty](ranges/empty.html "cpp/ranges/empty")  
  
  
  
  
  
| [Range conversions](ranges.html#Range_conversions "cpp/ranges")  
---  
[std::from_range_t  
std::from_range](ranges/from_range.html "cpp/ranges/from range")(C++23)(C++23)` `  
[to](ranges/to.html "cpp/ranges/to")(C++23)  
  
  
  
| [Dangling iterator handling](ranges.html#Dangling_iterator_handling "cpp/ranges")  
---  
[dangling](ranges/dangling.html "cpp/ranges/dangling")  
[borrowed_iterator_t](ranges/borrowed_iterator_t.html "cpp/ranges/borrowed iterator t")  
[borrowed_subrange_t](ranges/borrowed_iterator_t.html "cpp/ranges/borrowed iterator t")  
  
  
  
[Range primitives](ranges.html#Range_primitives "cpp/ranges")  
---  
| [range_size_trange_difference_trange_value_t](ranges/range_size_t.html "cpp/ranges/range size t")  
---  
[elements_of](ranges/elements_of.html "cpp/ranges/elements of")(C++23)` `  
  
| [iterator_tconst_iterator_tsentinel_tconst_sentinel_t](ranges/iterator_t.html "cpp/ranges/iterator t")(C++23)(C++23)` `  
---  
  
| [range_reference_trange_const_reference_trange_rvalue_reference_trange_common_reference_t](ranges/range_reference_t.html "cpp/ranges/range reference t")(C++23)  
---  
  
[Range concepts](ranges.html#Range_concepts "cpp/ranges")  
---  
| [range](ranges/range.html "cpp/ranges/range")  
---  
[borrowed_range](ranges/borrowed_range.html "cpp/ranges/borrowed range")` `  
[common_range](ranges/common_range.html "cpp/ranges/common range")  
  
| [sized_range](ranges/sized_range.html "cpp/ranges/sized range")  
---  
[viewable_range](ranges/viewable_range.html "cpp/ranges/viewable range")` `  
[view](ranges/view.html "cpp/ranges/view")  
  
| [input_range](ranges/input_range.html "cpp/ranges/input range")  
---  
[output_range](ranges/output_range.html "cpp/ranges/output range")  
[forward_range](ranges/forward_range.html "cpp/ranges/forward range")` `  
  
| [bidirectional_range](ranges/bidirectional_range.html "cpp/ranges/bidirectional range")` `  
---  
[random_access_range](ranges/random_access_range.html "cpp/ranges/random access range")  
[contiguous_range](ranges/contiguous_range.html "cpp/ranges/contiguous range")  
  
| [approximately_sized_range](ranges/approximately_sized_range.html "cpp/ranges/approximately sized range")(C++26)  
---  
[constant_range](ranges/constant_range.html "cpp/ranges/constant range")(C++23)  
  
  
  
[Views](ranges.html#Views "cpp/ranges")  
---  
| [view_interface](ranges/view_interface.html "cpp/ranges/view interface")` `  
---  
  
| [subrange](ranges/subrange.html "cpp/ranges/subrange")  
---  
  
|  |   
  
---  
  
[Range factories](ranges.html#Range_factories "cpp/ranges")  
---  
| [empty_viewviews::empty](ranges/empty_view.html "cpp/ranges/empty view")` `  
---  
  
| [single_viewviews::single](ranges/single_view.html "cpp/ranges/single view")` `  
---  
  
| [basic_istream_viewviews::istream](ranges/basic_istream_view.html "cpp/ranges/basic istream view")` `  
---  
  
| [iota_viewviews::iota](ranges/iota_view.html "cpp/ranges/iota view")` `  
---  
  
| [repeat_viewviews::repeat](ranges/repeat_view.html "cpp/ranges/repeat view")(C++23)(C++23)  
---  
  
[Range adaptors](ranges.html#Range_adaptors "cpp/ranges")  
---  
| [views::all_tviews::all](ranges/all_view.html "cpp/ranges/all view")  
---  
[as_rvalue_viewviews::as_rvalue](ranges/as_rvalue_view.html "cpp/ranges/as rvalue view")(C++23)(C++23)` `  
[filter_viewviews::filter](ranges/filter_view.html "cpp/ranges/filter view")  
[transform_viewviews::transform](ranges/transform_view.html "cpp/ranges/transform view")  
[take_viewviews::take](ranges/take_view.html "cpp/ranges/take view")  
[take_while_viewviews::take_while](ranges/take_while_view.html "cpp/ranges/take while view")  
[common_viewviews::common](ranges/common_view.html "cpp/ranges/common view")  
[views::counted](ranges/counted_view.html "cpp/ranges/view counted")  
[to_input_viewviews::to_input](ranges/to_input_view.html "cpp/ranges/to input view")(C++26)(C++26)  
  
| [ref_view](ranges/ref_view.html "cpp/ranges/ref view")  
---  
[drop_viewviews::drop](ranges/drop_view.html "cpp/ranges/drop view")  
[drop_while_viewviews::drop_while](ranges/drop_while_view.html "cpp/ranges/drop while view")  
[lazy_split_viewviews::lazy_split](ranges/lazy_split_view.html "cpp/ranges/lazy split view")  
[split_viewviews::split](ranges/split_view.html "cpp/ranges/split view")  
[join_viewviews::join](ranges/join_view.html "cpp/ranges/join view")  
[join_with_viewviews::join_with](ranges/join_with_view.html "cpp/ranges/join with view")(C++23)(C++23)` `  
[concat_viewviews::concat](ranges/concat_view.html "cpp/ranges/concat view")(C++26)(C++26)  
[cache_latest_viewviews::cache_latest](ranges/cache_latest_view.html "cpp/ranges/cache latest view")(C++26)(C++26)` `  
  
| [owning_view](ranges/owning_view.html "cpp/ranges/owning view")  
---  
[reverse_viewviews::reverse](ranges/reverse_view.html "cpp/ranges/reverse view")  
[as_const_viewviews::as_const](ranges/as_const_view.html "cpp/ranges/as const view")(C++23)(C++23)  
[elements_viewviews::elements](ranges/elements_view.html "cpp/ranges/elements view")  
[keys_viewviews::keys](ranges/keys_view.html "cpp/ranges/keys view")  
[values_viewviews::values](ranges/values_view.html "cpp/ranges/values view")  
[enumerate_viewviews::enumerate](ranges/enumerate_view.html "cpp/ranges/enumerate view")(C++23)(C++23)  
[zip_viewviews::zip](ranges/zip_view.html "cpp/ranges/zip view")(C++23)(C++23)  
[zip_transform_viewviews::zip_transform](ranges/zip_transform_view.html "cpp/ranges/zip transform view")(C++23)(C++23)` `  
  
| [adjacent_viewviews::adjacent](ranges/adjacent_view.html "cpp/ranges/adjacent view")(C++23)(C++23)  
---  
[views::pairwise](ranges/adjacent_view.html "cpp/ranges/adjacent view")(C++23)  
[adjacent_transform_viewviews::adjacent_transform](ranges/adjacent_transform_view.html "cpp/ranges/adjacent transform view")(C++23)(C++23)  
[views::pairwise_transform](ranges/adjacent_transform_view.html "cpp/ranges/adjacent transform view")(C++23)  
[chunk_viewviews::chunk](ranges/chunk_view.html "cpp/ranges/chunk view")(C++23)(C++23)  
[slide_viewviews::slide](ranges/slide_view.html "cpp/ranges/slide view")(C++23)(C++23)  
[chunk_by_viewviews::chunk_by](ranges/chunk_by_view.html "cpp/ranges/chunk by view")(C++23)(C++23)  
[stride_viewviews::stride](ranges/stride_view.html "cpp/ranges/stride view")(C++23)(C++23)  
[cartesian_product_viewviews::cartesian_product](ranges/cartesian_product_view.html "cpp/ranges/cartesian product view")(C++23)(C++23)  
  
  
  
| [Range generators](ranges.html#Range_generators "cpp/ranges")  
---  
[std::generator](coroutine/generator.html "cpp/coroutine/generator")(C++23)` `  
  
| [Range adaptor closure objects](ranges.html#Range_adaptor_closure_objects "cpp/ranges")  
---  
[range_adaptor_closure](ranges/range_adaptor_closure.html "cpp/ranges/range adaptor closure")(C++23)` `  
  
| [Range adaptor objects](ranges.html#Range_adaptor_objects "cpp/ranges")  
---  
  
  
  
[Helper items](ranges.html#Helper_items "cpp/ranges")  
---  
| [_copyable-box_  
 _movable-box_](ranges/copyable_wrapper.html "cpp/ranges/copyable wrapper")(until C++23)` `(C++23)  
---  
  
| [_simple-view_](ranges.html#Helper_concepts "cpp/ranges")  
---  
[_non-propagating-cache_](ranges/non-propagating-cache.html "cpp/ranges/non-propagating-cache")  
  
|   
  
---  
  
  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/navbar_content&action=edit)

The ranges library is an extension and generalization of the algorithms and iterator libraries that makes them more powerful by making them composable and less error-prone. 

The library creates and manipulates range _views_ , lightweight objects that indirectly represent iterable sequences (_ranges_). Ranges are an abstraction on top of 

  * `[`begin`, `end`)` – iterator pairs, e.g. ranges made by implicit conversion from containers. All algorithms that take iterator pairs now have overloads that accept ranges (e.g. [`ranges::sort`](algorithm/ranges/sort.html "cpp/algorithm/ranges/sort")) 
  * begin` + ``[`​0​`, `size`)` – counted sequences, e.g. range returned by [`views::counted`](ranges/counted_view.html "cpp/ranges/view counted")
  * `[`begin`, ` _predicate_`)` – conditionally-terminated sequences, e.g. range returned by [`views::take_while`](ranges/take_while_view.html "cpp/ranges/take while view")
  * `[`begin`, `..`)` – unbounded sequences, e.g. range returned by [`views::iota`](ranges/iota_view.html "cpp/ranges/iota view")



The ranges library includes [range algorithms](algorithm/ranges.html "cpp/algorithm/ranges"), which are applied to ranges eagerly, and [range adaptors](ranges.html#Range_adaptors), which are applied to views lazily. Adaptors can be composed into pipelines, so that their actions take place as the view is iterated. 

Defined in header `[<ranges>](header/ranges.html "cpp/header/ranges")` |  |   
---|---|---  
namespace std {  
namespace views = ranges::views;  
} |  |  (since C++20)  
| |   
  
The namespace alias `std::views` is provided as a shorthand for `std::ranges::views`. 

Defined in namespace `std::ranges`  
---  
| 

## Contents

  * [1 Range access](ranges.html#Range_access)
  * [2 Range primitives](ranges.html#Range_primitives)
  * [3 Dangling iterator handling](ranges.html#Dangling_iterator_handling)
  * [4 Other utilities](ranges.html#Other_utilities)
  * [5 Range concepts](ranges.html#Range_concepts)
  * [6 Range conversions](ranges.html#Range_conversions)
  * [7 Views](ranges.html#Views)
  * [8 Range factories](ranges.html#Range_factories)
  * [9 Range adaptors](ranges.html#Range_adaptors)
  * [10 Range generators (since C++23)](ranges.html#Range_generators_.28since_C.2B.2B23.29)
  * [11 Helper items](ranges.html#Helper_items)
    * [11.1 Range adaptor objects](ranges.html#Range_adaptor_objects)
    * [11.2 Range adaptor closure objects](ranges.html#Range_adaptor_closure_objects)
    * [11.3 Customization point objects](ranges.html#Customization_point_objects)
    * [11.4 Assignable wrapper](ranges.html#Assignable_wrapper)
    * [11.5 Non-propagating cache](ranges.html#Non-propagating_cache)
    * [11.6 Conditionally-const type](ranges.html#Conditionally-const_type)
    * [11.7 Integer-like type helper templates](ranges.html#Integer-like_type_helper_templates)
    * [11.8 Customization point object helpers](ranges.html#Customization_point_object_helpers)
    * [11.9 Range adaptor helpers](ranges.html#Range_adaptor_helpers)
    * [11.10 Helper concepts](ranges.html#Helper_concepts)
  * [12 Notes](ranges.html#Notes)
  * [13 Example](ranges.html#Example)
  * [14 Defect reports](ranges.html#Defect_reports)
  * [15 See also](ranges.html#See_also)

  
---  
  
#####  Range access   
  
Defined in header `[<ranges>](header/ranges.html "cpp/header/ranges")`  
Defined in header `[<iterator>](header/iterator.html "cpp/header/iterator")`  
[ ranges::begin](ranges/begin.html "cpp/ranges/begin")(C++20) |  returns an iterator to the beginning of a range  
(customization point object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_begin&action=edit)  
[ ranges::end](ranges/end.html "cpp/ranges/end")(C++20) |  returns a sentinel indicating the end of a range  
(customization point object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_end&action=edit)  
[ ranges::cbegin](ranges/cbegin.html "cpp/ranges/cbegin")(C++20) |  returns an iterator to the beginning of a read-only range  
(customization point object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_cbegin&action=edit)  
[ ranges::cend](ranges/cend.html "cpp/ranges/cend")(C++20) |  returns a sentinel indicating the end of a read-only range  
(customization point object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_cend&action=edit)  
[ ranges::rbegin](ranges/rbegin.html "cpp/ranges/rbegin")(C++20) |  returns a reverse iterator to a range  
(customization point object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_rbegin&action=edit)  
[ ranges::rend](ranges/rend.html "cpp/ranges/rend")(C++20) |  returns a reverse end iterator to a range  
(customization point object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_rend&action=edit)  
[ ranges::crbegin](ranges/crbegin.html "cpp/ranges/crbegin")(C++20) |  returns a reverse iterator to a read-only range  
(customization point object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_crbegin&action=edit)  
[ ranges::crend](ranges/crend.html "cpp/ranges/crend")(C++20) |  returns a reverse end iterator to a read-only range  
(customization point object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_crend&action=edit)  
[ ranges::reserve_hint](ranges/reserve_hint.html "cpp/ranges/reserve hint")(C++26) |  returns an integer equal to the reserve hint given by a range  
(customization point object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_reserve_hint&action=edit)  
[ ranges::size](ranges/size.html "cpp/ranges/size")(C++20) |  returns an integer equal to the size of a range  
(customization point object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_size&action=edit)  
[ ranges::ssize](ranges/ssize.html "cpp/ranges/ssize")(C++20) |  returns a signed integer equal to the size of a range  
(customization point object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_ssize&action=edit)  
[ ranges::empty](ranges/empty.html "cpp/ranges/empty")(C++20) |  checks whether a range is empty  
(customization point object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_empty&action=edit)  
[ ranges::data](ranges/data.html "cpp/ranges/data")(C++20) |  obtains a pointer to the beginning of a contiguous range  
(customization point object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_data&action=edit)  
[ ranges::cdata](ranges/cdata.html "cpp/ranges/cdata")(C++20) |  obtains a pointer to the beginning of a read-only contiguous range  
(customization point object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_cdata&action=edit)  
  
#####  Range primitives   
  
Defined in header `[<ranges>](header/ranges.html "cpp/header/ranges")`  
[ ranges::iterator_tranges::const_iterator_tranges::sentinel_tranges::const_sentinel_t](ranges/iterator_t.html "cpp/ranges/iterator t")(C++20)(C++23)(C++20)(C++23) |  obtains iterator and sentinel types of a range  
(alias template)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_iterator_t&action=edit)  
[ ranges::range_difference_tranges::range_size_tranges::range_value_t](ranges/range_size_t.html "cpp/ranges/range size t")(C++20)(C++20)(C++20) |  obtains size, difference, and value types of a range  
(alias template)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_range_size_t&action=edit)  
[ ranges::range_reference_tranges::range_const_reference_tranges::range_rvalue_reference_tranges::range_common_reference_t](ranges/range_reference_t.html "cpp/ranges/range reference t")(C++20)(C++23)(C++20)(C++20) |  obtains reference types of a range  
(alias template)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_range_reference_t&action=edit)  
  
#####  Dangling iterator handling   
  
Defined in header `[<ranges>](header/ranges.html "cpp/header/ranges")`  
[ ranges::dangling](ranges/dangling.html "cpp/ranges/dangling")(C++20) |  a placeholder type indicating that an iterator or a `subrange` should not be returned since it would be dangling   
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_dangling&action=edit)  
[ ranges::borrowed_iterator_tranges::borrowed_subrange_t](ranges/borrowed_iterator_t.html "cpp/ranges/borrowed iterator t")(C++20) |  obtains iterator type or `subrange` type of a [`borrowed_range`](ranges/borrowed_range.html "cpp/ranges/borrowed range")  
(alias template)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_borrowed_iterator_t&action=edit)  
  
#####  Other utilities   
  
Defined in header `[<ranges>](header/ranges.html "cpp/header/ranges")`  
[ ranges::elements_of](ranges/elements_of.html "cpp/ranges/elements of")(C++23) |  tags a range to be treated as a sequence rather than a single value   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_elements_of&action=edit)  
  
#####  Range concepts   
  
Defined in header `[<ranges>](header/ranges.html "cpp/header/ranges")`  
[ ranges::range](ranges/range.html "cpp/ranges/range")(C++20) |  specifies that a type is a range, that is, it provides a `begin` iterator and an `end` sentinel   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_range&action=edit)  
[ ranges::borrowed_range](ranges/borrowed_range.html "cpp/ranges/borrowed range")(C++20) |  specifies that a type is a [`range`](ranges/range.html "cpp/ranges/range") and iterators obtained from an expression of it can be safely returned without danger of dangling   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_borrowed_range&action=edit)  
[ ranges::approximately_sized_range](ranges/approximately_sized_range.html "cpp/ranges/approximately sized range")(C++26) |  specifies that a range can estimate its size in constant time   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_approximately_sized_range&action=edit)  
[ ranges::sized_range](ranges/sized_range.html "cpp/ranges/sized range")(C++20) |  specifies that a range knows its size in constant time   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_sized_range&action=edit)  
[ ranges::view](ranges/view.html "cpp/ranges/view")(C++20) |  specifies that a range is a view, that is, it has constant time copy/move/assignment   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_view&action=edit)  
[ ranges::input_range](ranges/input_range.html "cpp/ranges/input range")(C++20) |  specifies a range whose iterator type satisfies [`input_iterator`](iterator/input_iterator.html "cpp/iterator/input iterator")   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_input_range&action=edit)  
[ ranges::output_range](ranges/output_range.html "cpp/ranges/output range")(C++20) |  specifies a range whose iterator type satisfies [`output_iterator`](iterator/output_iterator.html "cpp/iterator/output iterator")   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_output_range&action=edit)  
[ ranges::forward_range](ranges/forward_range.html "cpp/ranges/forward range")(C++20) |  specifies a range whose iterator type satisfies [`forward_iterator`](iterator/forward_iterator.html "cpp/iterator/forward iterator")   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_forward_range&action=edit)  
[ ranges::bidirectional_range](ranges/bidirectional_range.html "cpp/ranges/bidirectional range")(C++20) |  specifies a range whose iterator type satisfies [`bidirectional_iterator`](iterator/bidirectional_iterator.html "cpp/iterator/bidirectional iterator")   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_bidirectional_range&action=edit)  
[ ranges::random_access_range](ranges/random_access_range.html "cpp/ranges/random access range")(C++20) |  specifies a range whose iterator type satisfies [`random_access_iterator`](iterator/random_access_iterator.html "cpp/iterator/random access iterator")   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_random_access_range&action=edit)  
[ ranges::contiguous_range](ranges/contiguous_range.html "cpp/ranges/contiguous range")(C++20) |  specifies a range whose iterator type satisfies [`contiguous_iterator`](iterator/contiguous_iterator.html "cpp/iterator/contiguous iterator")   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_contiguous_range&action=edit)  
[ ranges::common_range](ranges/common_range.html "cpp/ranges/common range")(C++20) |  specifies that a range has identical iterator and sentinel types   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_common_range&action=edit)  
[ ranges::viewable_range](ranges/viewable_range.html "cpp/ranges/viewable range")(C++20) |  specifies the requirements for a [`range`](ranges/range.html "cpp/ranges/range") to be safely convertible to a [`view`](ranges/view.html "cpp/ranges/view")   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_viewable_range&action=edit)  
[ ranges::constant_range](ranges/constant_range.html "cpp/ranges/constant range")(C++23) |  specifies that a range has read-only elements   
(concept) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_constant_range&action=edit)  
  
#####  Range conversions   
  
Defined in header `[<ranges>](header/ranges.html "cpp/header/ranges")`  
[ ranges::to](ranges/to.html "cpp/ranges/to")(C++23) |  constructs a new non-view object from an input range   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_to&action=edit)  
  
#####  Views   
  
Defined in header `[<ranges>](header/ranges.html "cpp/header/ranges")`  
[ ranges::view_interface](ranges/view_interface.html "cpp/ranges/view interface")(C++20) |  helper class template for defining a [`view`](ranges/view.html "cpp/ranges/view"), using the [curiously recurring template pattern](language/crtp.html "cpp/language/crtp")   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_view_interface&action=edit)  
[ ranges::subrange](ranges/subrange.html "cpp/ranges/subrange")(C++20) |  combines an iterator-sentinel pair into a [`view`](ranges/view.html "cpp/ranges/view")   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_subrange&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges&action=edit&section=1 "Edit section: Range factories")] Range factories

Defined in header `[<ranges>](header/ranges.html "cpp/header/ranges")`  
---  
Defined in namespace `std::ranges`  
[ ranges::empty_viewviews::empty](ranges/empty_view.html "cpp/ranges/empty view")(C++20) |  an empty [`view`](ranges/view.html "cpp/ranges/view") with no elements  
(class template) (variable template)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_empty_view&action=edit)  
[ ranges::single_viewviews::single](ranges/single_view.html "cpp/ranges/single view")(C++20) |  a [`view`](ranges/view.html "cpp/ranges/view") that contains a single element of a specified value  
(class template) (customization point object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_single_view&action=edit)  
[ ranges::iota_viewviews::iota](ranges/iota_view.html "cpp/ranges/iota view")(C++20) |  a [`view`](ranges/view.html "cpp/ranges/view") consisting of a sequence generated by repeatedly incrementing an initial value  
(class template) (customization point object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_iota_view&action=edit)  
[ ranges::repeat_viewviews::repeat](ranges/repeat_view.html "cpp/ranges/repeat view")(C++23) |  a [`view`](ranges/view.html "cpp/ranges/view") consisting of a generated sequence by repeatedly producing the same value  
(class template) (customization point object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_repeat_view&action=edit)  
[ ranges::basic_istream_viewviews::istream](ranges/basic_istream_view.html "cpp/ranges/basic istream view")(C++20) |  a [`view`](ranges/view.html "cpp/ranges/view") consisting of the elements obtained by successive application of `operator>>` on the associated input stream  
(class template) (customization point object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_basic_istream_view&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges&action=edit&section=2 "Edit section: Range adaptors")] Range adaptors

Defined in header `[<ranges>](header/ranges.html "cpp/header/ranges")`  
---  
Defined in namespace `std::ranges`  
[ ranges::range_adaptor_closure](ranges/range_adaptor_closure.html "cpp/ranges/range adaptor closure")(C++23) |  helper base class template for defining a range adaptor closure object   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_range_adaptor_closure&action=edit)  
[ views::all_tviews::all](ranges/all_view.html "cpp/ranges/all view")(C++20) |  a [`view`](ranges/view.html "cpp/ranges/view") that includes all elements of a [`range`](ranges/range.html "cpp/ranges/range")  
(alias template) (range adaptor object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_all_view&action=edit)  
[ ranges::ref_view](ranges/ref_view.html "cpp/ranges/ref view")(C++20) |  a [`view`](ranges/view.html "cpp/ranges/view") of the elements of some other [`range`](ranges/range.html "cpp/ranges/range")   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_ref_view&action=edit)  
[ ranges::owning_view](ranges/owning_view.html "cpp/ranges/owning view")(C++20) |  a [`view`](ranges/view.html "cpp/ranges/view") with unique ownership of some [`range`](ranges/range.html "cpp/ranges/range")   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_owning_view&action=edit)  
[ ranges::as_rvalue_viewviews::as_rvalue](ranges/as_rvalue_view.html "cpp/ranges/as rvalue view")(C++23) |  a [`view`](ranges/view.html "cpp/ranges/view") of a sequence that casts each element to an rvalue  
(class template) (range adaptor object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_as_rvalue_view&action=edit)  
[ ranges::filter_viewviews::filter](ranges/filter_view.html "cpp/ranges/filter view")(C++20) |  a [`view`](ranges/view.html "cpp/ranges/view") that consists of the elements of a [`range`](ranges/range.html "cpp/ranges/range") that satisfies a predicate  
(class template) (range adaptor object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_filter_view&action=edit)  
[ ranges::transform_viewviews::transform](ranges/transform_view.html "cpp/ranges/transform view")(C++20) |  a [`view`](ranges/view.html "cpp/ranges/view") of a sequence that applies a transformation function to each element  
(class template) (range adaptor object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_transform_view&action=edit)  
[ ranges::take_viewviews::take](ranges/take_view.html "cpp/ranges/take view")(C++20) |  a [`view`](ranges/view.html "cpp/ranges/view") consisting of the first N elements of another [`view`](ranges/view.html "cpp/ranges/view")  
(class template) (range adaptor object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_take_view&action=edit)  
[ ranges::take_while_viewviews::take_while](ranges/take_while_view.html "cpp/ranges/take while view")(C++20) |  a [`view`](ranges/view.html "cpp/ranges/view") consisting of the initial elements of another [`view`](ranges/view.html "cpp/ranges/view"), until the first element on which a predicate returns false  
(class template) (range adaptor object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_take_while_view&action=edit)  
[ ranges::drop_viewviews::drop](ranges/drop_view.html "cpp/ranges/drop view")(C++20) |  a [`view`](ranges/view.html "cpp/ranges/view") consisting of elements of another [`view`](ranges/view.html "cpp/ranges/view"), skipping the first N elements  
(class template) (range adaptor object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_drop_view&action=edit)  
[ ranges::drop_while_viewviews::drop_while](ranges/drop_while_view.html "cpp/ranges/drop while view")(C++20) |  a [`view`](ranges/view.html "cpp/ranges/view") consisting of the elements of another [`view`](ranges/view.html "cpp/ranges/view"), skipping the initial subsequence of elements until the first element where the predicate returns false  
(class template) (range adaptor object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_drop_while_view&action=edit)  
[ ranges::join_viewviews::join](ranges/join_view.html "cpp/ranges/join view")(C++20) |  a [`view`](ranges/view.html "cpp/ranges/view") consisting of the sequence obtained from flattening a [`view`](ranges/view.html "cpp/ranges/view") of [`range`s](ranges/range.html "cpp/ranges/range")  
(class template) (range adaptor object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_join_view&action=edit)  
[ ranges::join_with_viewviews::join_with](ranges/join_with_view.html "cpp/ranges/join with view")(C++23) |  a [`view`](ranges/view.html "cpp/ranges/view") consisting of the sequence obtained from flattening a view of ranges, with the delimiter in between elements  
(class template) (range adaptor object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_join_with_view&action=edit)  
[ ranges::lazy_split_viewviews::lazy_split](ranges/lazy_split_view.html "cpp/ranges/lazy split view")(C++20) |  a [`view`](ranges/view.html "cpp/ranges/view") over the subranges obtained from splitting another [`view`](ranges/view.html "cpp/ranges/view") using a delimiter  
(class template) (range adaptor object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_lazy_split_view&action=edit)  
[ ranges::split_viewviews::split](ranges/split_view.html "cpp/ranges/split view")(C++20) |  a [`view`](ranges/view.html "cpp/ranges/view") over the subranges obtained from splitting another [`view`](ranges/view.html "cpp/ranges/view") using a delimiter  
(class template) (range adaptor object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_split_view&action=edit)  
[ ranges::concat_viewviews::concat](ranges/concat_view.html "cpp/ranges/concat view")(C++26) |  a [`view`](ranges/view.html "cpp/ranges/view") consisting of concatenation of the adapted views  
(class template) (customization point object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_concat_view&action=edit)  
[ views::counted](ranges/counted_view.html "cpp/ranges/view counted")(C++20) |  creates a subrange from an iterator and a count  
(customization point object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_view_counted&action=edit)  
[ ranges::common_viewviews::common](ranges/common_view.html "cpp/ranges/common view")(C++20) |  converts a [`view`](ranges/view.html "cpp/ranges/view") into a [`common_range`](ranges/common_range.html "cpp/ranges/common range")  
(class template) (range adaptor object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_common_view&action=edit)  
[ ranges::reverse_viewviews::reverse](ranges/reverse_view.html "cpp/ranges/reverse view")(C++20) |  a [`view`](ranges/view.html "cpp/ranges/view") that iterates over the elements of another bidirectional view in reverse order  
(class template) (range adaptor object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_reverse_view&action=edit)  
[ ranges::as_const_viewviews::as_const](ranges/as_const_view.html "cpp/ranges/as const view")(C++23) |  converts a [`view`](ranges/view.html "cpp/ranges/view") into a [`constant_range`](ranges/constant_range.html "cpp/ranges/constant range")  
(class template) (range adaptor object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_as_const_view&action=edit)  
[ ranges::elements_viewviews::elements](ranges/elements_view.html "cpp/ranges/elements view")(C++20) |  takes a [`view`](ranges/view.html "cpp/ranges/view") consisting of [`_tuple-like_`](utility/tuple/tuple-like.html "cpp/utility/tuple/tuple-like") values and a number N and produces a [`view`](ranges/view.html "cpp/ranges/view") of Nth element of each tuple  
(class template) (range adaptor object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_elements_view&action=edit)  
[ ranges::keys_viewviews::keys](ranges/keys_view.html "cpp/ranges/keys view")(C++20) |  takes a [`view`](ranges/view.html "cpp/ranges/view") consisting of pair-like values and produces a [`view`](ranges/view.html "cpp/ranges/view") of the first elements of each pair  
(class template) (range adaptor object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_keys_view&action=edit)  
[ ranges::values_viewviews::values](ranges/values_view.html "cpp/ranges/values view")(C++20) |  takes a [`view`](ranges/view.html "cpp/ranges/view") consisting of pair-like values and produces a [`view`](ranges/view.html "cpp/ranges/view") of the second elements of each pair  
(class template) (range adaptor object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_values_view&action=edit)  
[ ranges::enumerate_viewviews::enumerate](ranges/enumerate_view.html "cpp/ranges/enumerate view")(C++23) |  a [`view`](ranges/view.html "cpp/ranges/view") that maps each element of adapted sequence to a tuple of both the element's position and its value  
(class template) (range adaptor object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_enumerate_view&action=edit)  
[ ranges::zip_viewviews::zip](ranges/zip_view.html "cpp/ranges/zip view")(C++23) |  a [`view`](ranges/view.html "cpp/ranges/view") consisting of tuples of references to corresponding elements of the adapted views  
(class template) (customization point object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_zip_view&action=edit)  
[ ranges::zip_transform_viewviews::zip_transform](ranges/zip_transform_view.html "cpp/ranges/zip transform view")(C++23) |  a [`view`](ranges/view.html "cpp/ranges/view") consisting of results of application of a transformation function to corresponding elements of the adapted views  
(class template) (customization point object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_zip_transform_view&action=edit)  
[ ranges::adjacent_viewviews::adjacent](ranges/adjacent_view.html "cpp/ranges/adjacent view")(C++23) |  a [`view`](ranges/view.html "cpp/ranges/view") consisting of tuples of references to adjacent elements of the adapted view  
(class template) (range adaptor object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_adjacent_view&action=edit)  
[ ranges::adjacent_transform_viewviews::adjacent_transform](ranges/adjacent_transform_view.html "cpp/ranges/adjacent transform view")(C++23) |  a [`view`](ranges/view.html "cpp/ranges/view") consisting of results of application of a transformation function to adjacent elements of the adapted view  
(class template) (range adaptor object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_adjacent_transform_view&action=edit)  
[ ranges::chunk_viewviews::chunk](ranges/chunk_view.html "cpp/ranges/chunk view")(C++23) |  a range of [`view`s](ranges/view.html "cpp/ranges/view") that are `N`-sized non-overlapping successive chunks of the elements of another [`view`](ranges/view.html "cpp/ranges/view")  
(class template) (range adaptor object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_chunk_view&action=edit)  
[ ranges::slide_viewviews::slide](ranges/slide_view.html "cpp/ranges/slide view")(C++23) |  a [`view`](ranges/view.html "cpp/ranges/view") whose Mth element is a [`view`](ranges/view.html "cpp/ranges/view") over the Mth through (M + N - 1)th elements of another [`view`](ranges/view.html "cpp/ranges/view")  
(class template) (range adaptor object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_slide_view&action=edit)  
[ ranges::chunk_by_viewviews::chunk_by](ranges/chunk_by_view.html "cpp/ranges/chunk by view")(C++23) |  splits the [`view`](ranges/view.html "cpp/ranges/view") into subranges between each pair of adjacent elements for which the given predicate returns false  
(class template) (range adaptor object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_chunk_by_view&action=edit)  
[ ranges::stride_viewviews::stride](ranges/stride_view.html "cpp/ranges/stride view")(C++23) |  a [`view`](ranges/view.html "cpp/ranges/view") consisting of elements of another [`view`](ranges/view.html "cpp/ranges/view"), advancing over N elements at a time  
(class template) (range adaptor object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_stride_view&action=edit)  
[ ranges::cartesian_product_viewviews::cartesian_product](ranges/cartesian_product_view.html "cpp/ranges/cartesian product view")(C++23) |  a [`view`](ranges/view.html "cpp/ranges/view") consisting of tuples of results calculated by the n-ary cartesian product of the adapted views  
(class template) (customization point object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_cartesian_product_view&action=edit)  
[ ranges::cache_latest_viewviews::cache_latest](ranges/cache_latest_view.html "cpp/ranges/cache latest view")(C++26) |  a [`view`](ranges/view.html "cpp/ranges/view") that caches the last-accessed element of its underlying sequence  
(class template) (range adaptor object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_cache_latest_view&action=edit)  
[ ranges::to_input_viewviews::to_input](ranges/to_input_view.html "cpp/ranges/to input view")(C++26) |  converts a [`view`](ranges/view.html "cpp/ranges/view") into a range that is [`input_range`](ranges/input_range.html "cpp/ranges/input range")-only and non-[`common_range`](ranges/common_range.html "cpp/ranges/common range")  
(class template) (range adaptor object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_to_input_view&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges&action=edit&section=3 "Edit section: Range generators \(since C++23\)")] Range generators (since C++23)

Defined in header `[<generator>](header/generator.html "cpp/header/generator")`  
---  
Defined in namespace `std`  
[ generator](coroutine/generator.html "cpp/coroutine/generator")(C++23) |  A [`view`](ranges/view.html "cpp/ranges/view") that represents synchronous [coroutine](language/coroutines.html "cpp/language/coroutines") generator   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_generator&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges&action=edit&section=4 "Edit section: Helper items")] Helper items

#### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges&action=edit&section=5 "Edit section: Range adaptor objects")] Range adaptor objects

See [RangeAdaptorObject](named_req/RangeAdaptorObject.html "cpp/named req/RangeAdaptorObject") (RAO). 

#### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges&action=edit&section=6 "Edit section: Range adaptor closure objects")] Range adaptor closure objects

See [RangeAdaptorClosureObject](named_req/RangeAdaptorClosureObject.html "cpp/named req/RangeAdaptorClosureObject") (RACO). 

#### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges&action=edit&section=7 "Edit section: Customization point objects")] Customization point objects

See [Customization point object](ranges/cpo.html "cpp/ranges/cpo") (CPO). 

#### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges&action=edit&section=8 "Edit section: Assignable wrapper")] Assignable wrapper

Some range adaptors wrap their elements or function objects with the [`_copyable-box_`](ranges/copyable_wrapper.html "cpp/ranges/copyable wrapper")(until C++23)[`_movable-box_`](ranges/copyable_wrapper.html "cpp/ranges/copyable wrapper")(since C++23). The wrapper augments the wrapped object with assignability when needed. 

#### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges&action=edit&section=9 "Edit section: Non-propagating cache")] Non-propagating cache

Some range adaptors are specified in terms of an exposition-only class template [`_non-propagating-cache_`](ranges/non-propagating-cache.html "cpp/ranges/non-propagating-cache"), which behaves almost like [std::optional](utility/optional.html)<T> (see description for differences). 

#### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges&action=edit&section=10 "Edit section: Conditionally-const type")] Conditionally-`const` type

template< bool Const, class T >  
using /*maybe-const*/ = [std::conditional_t](types/conditional.html)<Const, const T, T>; |  | (exposition only*)  
---|---|---  
| |   
  
The alias template /*maybe-const*/ is a shorthand used to conditionally apply a const qualifier to the type `T`. 

#### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges&action=edit&section=11 "Edit section: Integer-like type helper templates")] Integer-like type helper templates

template< /*is-integer-like*/ T >  
using /*make-signed-like-t*/<T> = /* see description */; |  (1) | (exposition only*)  
---|---|---  
template< /*is-integer-like*/ T >  
using /*make-unsigned-like-t*/<T> = /* see description */; |  (2) | (exposition only*)  
template< /*is-integer-like*/ T >  
/*make-unsigned-like-t*/<T> /*to-unsigned-like*/( T t )  
{  
return static_cast</*make-unsigned-like-t*/<T>>(t);  
} |  (3) | (exposition only*)  
| |   
  
1) For an [integer-like type](iterator/is-integer-like.html "cpp/iterator/is-integer-like") `T`: 

  * If `T` is an integer type, /*make-signed-like-t*/<T> is [std::make_signed_t](types/make_signed.html)<T>. 
  * Otherwise, /*make-signed-like-t*/<T> is a corresponding unspecified signed-integer-like type of the same width as `T`.



2) For an integer-like type `T`: 

  * If `T` is an integer type, /*make-unsigned-like-t*/<T> is [std::make_unsigned_t](types/make_unsigned.html)<T>. 
  * Otherwise, /*make-signed-like-t*/<T> is a corresponding unspecified unsigned-integer-like type of the same width as `T`.



3) Explicitly converts t to /*make-unsigned-like-t*/<T>.

#### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges&action=edit&section=12 "Edit section: Customization point object helpers")] Customization point object helpers

template< [ranges::input_range](ranges/input_range.html) R >  
constexpr auto& /*possibly-const-range*/(R& r) noexcept  
{  
if constexpr ([ranges::input_range](ranges/input_range.html)<const R>)  
return const_cast<const R&>(r);  
else  
return r;  
} |  (1) | (exposition only*)  
---|---|---  
template< class T >  
constexpr auto /*as-const-pointer*/( const T* p ) noexcept  
{  
return p;  
} |  (2) | (exposition only*)  
| |   
  
Some range access customization point objects are specified in terms of these exposition-only function templates. 

1) /*possibly-const-range*/ returns the const-qualified version of r if const R models [`input_range`](ranges/input_range.html "cpp/ranges/input range"); otherwise, returns r without any casting.

2) /*as-const-pointer*/ returns a pointer to object of constant type.

#### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges&action=edit&section=13 "Edit section: Range adaptor helpers")] Range adaptor helpers

template< class F, class Tuple >  
constexpr auto /*tuple-transform*/( F&& f, Tuple&& tuple )  
{  
return [std::apply](utility/apply.html)([&]<class... Ts>(Ts&&... args)  
{  
return [std::tuple](utility/tuple.html)<[std::invoke_result_t](types/result_of.html)<F&, Ts>...>  
([std::invoke](utility/functional/invoke.html)(f, [std::forward](utility/forward.html)<Ts>(args))...);  
}, [std::forward](utility/forward.html)<Tuple>(tuple));  
} |  (1) | (exposition only*)  
---|---|---  
template< class F, class Tuple >  
constexpr void /*tuple-for-each*/( F&& f, Tuple&& tuple )  
{  
[std::apply](utility/apply.html)([&]<class... Ts>(Ts&&... args)  
{  
(static_cast<void>([std::invoke](utility/functional/invoke.html)(f, [std::forward](utility/forward.html)<Ts>(args))), ...);  
}, [std::forward](utility/forward.html)<Tuple>(tuple));  
} |  (2) | (exposition only*)  
template< class T >  
constexpr T& /*as-lvalue*/( T&& t )  
{  
return static_cast<T&>(t);  
} |  (3) | (exposition only*)  
| |   
  
Some range adaptors are specified in terms of these exposition-only function templates. 

1) /*tuple-transform*/ returns a new tuple constructed by applying f to each element of tuple.

2) /*tuple-for-each*/ applies f to each element of tuple and returns nothing.

3) /*as-lvalue*/ forwards rvalue t as lvalue.

#### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges&action=edit&section=14 "Edit section: Helper concepts")] Helper concepts

Following exposition-only concepts are used for several types, but they are not parts of the interface of standard library. 

template< class R >  
concept /*simple-view*/ =  
[ranges::view](ranges/view.html)<R> && [ranges::range](ranges/range.html)<const R> &&  
[std::same_as](concepts/same_as.html)<[ranges::iterator_t](ranges/iterator_t.html)<R>, [ranges::iterator_t](ranges/iterator_t.html)<const R>> &&  
[std::same_as](concepts/same_as.html)<[ranges::sentinel_t](ranges/iterator_t.html)<R>, [ranges::sentinel_t](ranges/iterator_t.html)<const R>>; |  (1) | (exposition only*)  
---|---|---  
template< class I >  
concept /*has-arrow*/ =  
ranges::input_iterator<I> &&  
([std::is_pointer_v](types/is_pointer.html)<I> || requires(const I i) { i.operator->(); }); |  (2) | (exposition only*)  
template< class T, class U >  
concept /*different-from*/ =  
![std::same_as](concepts/same_as.html)<[std::remove_cvref_t](types/remove_cvref.html)<T>, [std::remove_cvref_t](types/remove_cvref.html)<U>>; |  (3) | (exposition only*)  
template< class R >  
concept /*range-with-movable-references*/ =  
[ranges::input_range](ranges/input_range.html)<R> &&  
[std::move_constructible](concepts/move_constructible.html)<[ranges::range_reference_t](ranges/range_reference_t.html)<R>> &&  
[std::move_constructible](concepts/move_constructible.html)<[ranges::range_rvalue_reference_t](ranges/range_reference_t.html)<R>>; |  (4) | (exposition only*)  
template< bool C, class... Views >  
concept /*all-random-access*/ =  
([ranges::random_access_range](ranges/random_access_range.html)  
<[std::conditional_t](types/conditional.html)<C, const Views, Views>> && ...); |  (5) | (exposition only*)  
template< bool C, class... Views >  
concept /*all-bidirectional*/ =  
([ranges::bidirectional_range](ranges/bidirectional_range.html)  
<[std::conditional_t](types/conditional.html)<C, const Views, Views>> && ...); |  (6) | (exposition only*)  
template< bool C, class... Views >  
concept /*all-forward*/ =  
([ranges::forward_range](ranges/forward_range.html)  
<[std::conditional_t](types/conditional.html)<C, const Views, Views>> && ...); |  (7) | (exposition only*)  
| |   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges&action=edit&section=15 "Edit section: Notes")] Notes

[Feature-test](utility/feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_generator`](experimental/feature_test.html#cpp_lib_generator "cpp/feature test") | [`202207L`](compiler_support/23.html#cpp_lib_generator_202207L "cpp/compiler support/23") | (C++23) | [std::generator](coroutine/generator.html) – synchronous coroutine generator for ranges   
[`__cpp_lib_ranges`](experimental/feature_test.html#cpp_lib_ranges "cpp/feature test") | [`201911L`](compiler_support/20.html#cpp_lib_ranges_201911L "cpp/compiler support/20") | (C++20) | Ranges library and [constrained algorithms](algorithm/ranges.html "cpp/algorithm/ranges")  
[`202106L`](compiler_support/23.html#cpp_lib_ranges_202106L "cpp/compiler support/23") | (C++23)  
(DR20) | Non-[default-initializable](concepts/default_initializable.html "cpp/concepts/default initializable") [views](ranges/view.html "cpp/ranges/view")  
[`202110L`](compiler_support/23.html#cpp_lib_ranges_202110L "cpp/compiler support/23") | (C++23)  
(DR20) | [Views](ranges/view.html "cpp/ranges/view") with [ownership](ranges/owning_view.html "cpp/ranges/owning view")  
[`202202L`](compiler_support/23.html#cpp_lib_ranges_202202L "cpp/compiler support/23") | (C++23) | [ranges::range_adaptor_closure](ranges/range_adaptor_closure.html)  
[`202207L`](compiler_support/23.html#cpp_lib_ranges_202207L "cpp/compiler support/23") | (C++23) | Relaxing [range adaptors](ranges.html#Range_adaptors) to allow for move-only types   
[`202211L`](compiler_support/23.html#cpp_lib_ranges_202211L "cpp/compiler support/23") | (C++23) | Removing "poison pills" [(P2602)](https://wg21.link/p2602) overloads in [ranges::begin](ranges/begin.html) etc   
[`202302L`](compiler_support/23.html#cpp_lib_ranges_202302L "cpp/compiler support/23") | (C++23) | Relaxing ranges to allow certain projections   
[`202406L`](compiler_support/26.html#cpp_lib_ranges_202406L "cpp/compiler support/26") | (C++26)  
(DR20) | Removing the common reference requirement from the indirectly invocable concepts   
[`__cpp_lib_ranges_as_const`](experimental/feature_test.html#cpp_lib_ranges_as_const "cpp/feature test") | [`202207L`](compiler_support/23.html#cpp_lib_ranges_as_const_202207L "cpp/compiler support/23") | (C++23) | [std::const_iterator](iterator/const_iterator.html), [ranges::as_const_view](ranges/as_const_view.html)  
[`__cpp_lib_ranges_as_rvalue`](experimental/feature_test.html#cpp_lib_ranges_as_rvalue "cpp/feature test") | [`202207L`](compiler_support/23.html#cpp_lib_ranges_as_rvalue_202207L "cpp/compiler support/23") | (C++23) | [ranges::as_rvalue_view](ranges/as_rvalue_view.html)  
[`__cpp_lib_ranges_cache_latest`](experimental/feature_test.html#cpp_lib_ranges_cache_latest "cpp/feature test") | [`202411L`](compiler_support/26.html#cpp_lib_ranges_cache_latest_202411L "cpp/compiler support/26") | (C++26) | ranges::cache_latest_view  
[`__cpp_lib_ranges_cartesian_product`](experimental/feature_test.html#cpp_lib_ranges_cartesian_product "cpp/feature test") | [`202207L`](compiler_support/23.html#cpp_lib_ranges_cartesian_product_202207L "cpp/compiler support/23") | (C++23) | [ranges::cartesian_product_view](ranges/cartesian_product_view.html)  
[`__cpp_lib_ranges_chunk`](experimental/feature_test.html#cpp_lib_ranges_chunk "cpp/feature test") | [`202202L`](compiler_support/23.html#cpp_lib_ranges_chunk_202202L "cpp/compiler support/23") | (C++23) | [ranges::chunk_view](ranges/chunk_view.html)  
[`__cpp_lib_ranges_chunk_by`](experimental/feature_test.html#cpp_lib_ranges_chunk_by "cpp/feature test") | [`202202L`](compiler_support/23.html#cpp_lib_ranges_chunk_by_202202L "cpp/compiler support/23") | (C++23) | [ranges::chunk_by_view](ranges/chunk_by_view.html)  
[`__cpp_lib_ranges_concat`](experimental/feature_test.html#cpp_lib_ranges_concat "cpp/feature test") | [`202403L`](compiler_support/26.html#cpp_lib_ranges_concat_202403L "cpp/compiler support/26") | (C++26) | [ranges::concat_view](ranges/concat_view.html)  
[`__cpp_lib_ranges_enumerate`](experimental/feature_test.html#cpp_lib_ranges_enumerate "cpp/feature test") | [`202302L`](compiler_support/23.html#cpp_lib_ranges_enumerate_202302L "cpp/compiler support/23") | (C++23) | ranges::enumerate_view  
[`__cpp_lib_ranges_join_with`](experimental/feature_test.html#cpp_lib_ranges_join_with "cpp/feature test") | [`202202L`](compiler_support/23.html#cpp_lib_ranges_join_with_202202L "cpp/compiler support/23") | (C++23) | [ranges::join_with_view](ranges/join_with_view.html)  
[`__cpp_lib_ranges_repeat`](experimental/feature_test.html#cpp_lib_ranges_repeat "cpp/feature test") | [`202207L`](compiler_support/23.html#cpp_lib_ranges_repeat_202207L "cpp/compiler support/23") | (C++23) | [ranges::repeat_view](ranges/repeat_view.html)  
[`__cpp_lib_ranges_reserve_hint`](experimental/feature_test.html#cpp_lib_ranges_reserve_hint "cpp/feature test") | [`202502L`](compiler_support/26.html#cpp_lib_ranges_reserve_hint_202502L "cpp/compiler support/26") | (C++26) | ranges::reserve_hint and ranges::approximately_sized_range  
[`__cpp_lib_ranges_slide`](experimental/feature_test.html#cpp_lib_ranges_slide "cpp/feature test") | [`202202L`](compiler_support/23.html#cpp_lib_ranges_slide_202202L "cpp/compiler support/23") | (C++23) | [ranges::slide_view](ranges/slide_view.html)  
[`__cpp_lib_ranges_stride`](experimental/feature_test.html#cpp_lib_ranges_stride "cpp/feature test") | [`202207L`](compiler_support/23.html#cpp_lib_ranges_stride_202207L "cpp/compiler support/23") | (C++23) | [ranges::stride_view](ranges/stride_view.html)  
[`__cpp_lib_ranges_to_container`](experimental/feature_test.html#cpp_lib_ranges_to_container "cpp/feature test") | [`202202L`](compiler_support/23.html#cpp_lib_ranges_to_container_202202L "cpp/compiler support/23") | (C++23) | [ranges::to](ranges/to.html)  
[`__cpp_lib_ranges_to_input`](experimental/feature_test.html#cpp_lib_ranges_to_input "cpp/feature test") | [`202502L`](compiler_support/26.html#cpp_lib_ranges_to_input_202502L "cpp/compiler support/26") | (C++26) | ranges::to_input_view  
[`__cpp_lib_ranges_zip`](experimental/feature_test.html#cpp_lib_ranges_zip "cpp/feature test") | [`202110L`](compiler_support/23.html#cpp_lib_ranges_zip_202110L "cpp/compiler support/23") | (C++23) | [ranges::zip_view](ranges/zip_view.html),  
[ranges::zip_transform_view](ranges/zip_transform_view.html),  
[ranges::adjacent_view](ranges/adjacent_view.html),  
[ranges::adjacent_transform_view](ranges/adjacent_transform_view.html)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges&action=edit&section=16 "Edit section: Example")] Example

Run this code
    
    
    #include <iostream>
    #include <ranges>
     
    int main()
    {
        auto const ints = {0, 1, 2, 3, 4, 5};
        auto even = [](int i) { return 0 == i % 2; };
        auto square = [](int i) { return i * i; };
     
        // the "pipe" syntax of composing the views:
        for (int i : ints | std::[views::filter](ranges/filter_view.html)(even) | std::[views::transform](ranges/transform_view.html)(square))
            [std::cout](io/cout.html) << i << ' ';
     
        [std::cout](io/cout.html) << '\n';
     
        // a traditional "functional" composing syntax:
        for (int i : std::[views::transform](ranges/transform_view.html)(std::[views::filter](ranges/filter_view.html)(ints, even), square))
            [std::cout](io/cout.html) << i << ' ';
    }

Output: 
    
    
    0 4 16
    0 4 16

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges&action=edit&section=17 "Edit section: Defect reports")] Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3509](https://cplusplus.github.io/LWG/issue3509)  
([P2281R1](https://wg21.link/P2281R1))  | C++20  | it was unclear how range adaptor objects bound trailing arguments  | they are bound  
by value   
[LWG 3948](https://cplusplus.github.io/LWG/issue3948) | C++23  | `_possibly-const-range_` and `_as-const-pointer_`  
were not declared noexcept | declared noexcept  
[LWG 4027](https://cplusplus.github.io/LWG/issue4027) | C++23  | `_possibly-const-range_` would not add const-qualification  
for ranges that has already modeled [`constant_range`](ranges/constant_range.html "cpp/ranges/constant range") | adds const-qualification  
for such ranges   
[LWG 4112](https://cplusplus.github.io/LWG/issue4112) | C++20  | `_has-arrow_` did not require i to be const-qualified  | requires   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges&action=edit&section=18 "Edit section: See also")] See also

  * [Iterator library](iterator.html "cpp/iterator")
  * [Constrained algorithms](algorithm/ranges.html "cpp/algorithm/ranges")


  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
