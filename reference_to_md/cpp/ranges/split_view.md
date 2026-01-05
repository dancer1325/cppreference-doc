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
**split_view views::split**  
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
  
  
  


**`std::ranges::split_view`**

[Member functions](split_view.html#Member_functions "cpp/ranges/split view")  
---  
[split_view::split_view](split_view/split_view.html "cpp/ranges/split view/split view")  
[split_view::base](split_view/base.html "cpp/ranges/split view/base")  
[split_view::begin](split_view/begin.html "cpp/ranges/split view/begin")  
[split_view::end](split_view/end.html "cpp/ranges/split view/end")  
[split_view::_find_next_](split_view/find_next.html "cpp/ranges/split view/find next")  
[Nested classes](split_view.html#Nested_classes "cpp/ranges/split view")  
[split_view::_iterator_](split_view/iterator.html "cpp/ranges/split view/iterator")  
[split_view::_sentinel_](split_view/sentinel.html "cpp/ranges/split view/sentinel")  
[Deduction guides](split_view/deduction_guides.html "cpp/ranges/split view/deduction guides")  
  


Defined in header `[<ranges>](../header/ranges.html "cpp/header/ranges")` |  |   
---|---|---  
template< [ranges::forward_range](forward_range.html) V, [ranges::forward_range](forward_range.html) Pattern >  
requires [ranges::view](view.html)<V> &&  
[ranges::view](view.html)<Pattern> &&  
[std::indirectly_comparable](../iterator/indirectly_comparable.html)<[ranges::iterator_t](iterator_t.html)<V>,  
[ranges::iterator_t](iterator_t.html)<Pattern>,  
[ranges::equal_to](http://en.cppreference.com/w/cpp/ranges-functional-placeholder/equal_to)>  
class split_view  
: public [ranges::view_interface](view_interface.html)<split_view<V, Pattern>> |  (1)  |  (since C++20)  
namespace views {  
inline constexpr /* unspecified */ split = /* unspecified */;  
} |  (2)  |  (since C++20)  
Call signature |  |   
template< [ranges::viewable_range](viewable_range.html) R, class Pattern >  
requires /* see below */  
constexpr [ranges::view](view.html) auto split( R&& r, Pattern&& pattern ); |  |  (since C++20)  
template< class Pattern >  
constexpr /* range adaptor closure */ split( Pattern&& pattern ); |  |  (since C++20)  
| |   
  
1) `split_view` takes a [`view`](view.html "cpp/ranges/view") and a delimiter, and splits the [`view`](view.html "cpp/ranges/view") into subranges on the delimiter.

2) [RangeAdaptorObject](../named_req/RangeAdaptorObject.html "cpp/named req/RangeAdaptorObject"). The expression views::split(e, p) is [expression-equivalent](../language/expressions.html#Expression-equivalence "cpp/language/expressions") to split_view(e, p) for any suitable subexpressions e and p.

`split_view` models the concepts [`forward_range`](forward_range.html "cpp/ranges/forward range"), and [`common_range`](common_range.html "cpp/ranges/common range") when the underlying [`view`](view.html "cpp/ranges/view") `V` models respective concepts. 

The inner range ([ranges::range_reference_t](range_reference_t.html)<split_view>) is a [ranges::subrange](subrange.html)<[ranges::iterator_t](iterator_t.html)<V>>, which models [`common_range`](common_range.html "cpp/ranges/common range"), models [`sized_range`](sized_range.html "cpp/ranges/sized range") when [ranges::iterator_t](iterator_t.html)<V> models [std::sized_sentinel_for](../iterator/sized_sentinel_for.html)<[ranges::iterator_t](iterator_t.html)<V>>, and models [`contiguous_range`](contiguous_range.html "cpp/ranges/contiguous range"), [`random_access_range`](random_access_range.html "cpp/ranges/random access range"), [`bidirectional_range`](bidirectional_range.html "cpp/ranges/bidirectional range"), and [`forward_range`](forward_range.html "cpp/ranges/forward range") when `V` models respective concepts. 

Unlike [`lazy_split_view`](lazy_split_view.html "cpp/ranges/lazy split view"), `split_view` maintains the continuity of the subrange, making it suitable for string splitting. 

## Contents

  * [1 Data members](split_view.html#Data_members)
  * [2 Member functions](split_view.html#Member_functions)
    * [2.1 Inherited from std::ranges::view_interface](split_view.html#Inherited_from_std::ranges::view_interface)
  * [3 Nested classes](split_view.html#Nested_classes)
  * [4 Deduction guides](split_view.html#Deduction_guides)
  * [5 Notes](split_view.html#Notes)
  * [6 Example](split_view.html#Example)
  * [7 Defect reports](split_view.html#Defect_reports)
  * [8 See also](split_view.html#See_also)

  
---  
  
### Data members

Member  |  Description   
---|---  
`V` `_base__` (private) |  the underlying (adapted) [`view`](view.html "cpp/ranges/view")  
(exposition-only member object*)  
`Pattern` `_pattern__` (private) |  the pattern object that is used as a delimiter to split the underlying [`view`](view.html "cpp/ranges/view")  
(exposition-only member object*)  
[`_non-propagating-cache_`](non-propagating-cache.html "cpp/ranges/non-propagating-cache") <[ranges::subrange](subrange.html)  
` `<[ranges::iterator_t](iterator_t.html)<V>>> `_cached_begin__` (private) |  an object that caches the result of the first call to [`begin()`](split_view/begin.html "cpp/ranges/split view/begin")  
(exposition-only member object*)  
  
### Member functions

[ (constructor)](split_view/split_view.html "cpp/ranges/split view/split view") |  constructs a `split_view`   
(public member function)   
---|---  
[ base](split_view/base.html "cpp/ranges/split view/base") |  returns a copy of the underlying (adapted) view   
(public member function)   
[ begin](split_view/begin.html "cpp/ranges/split view/begin") |  returns an iterator to the beginning   
(public member function)   
[ end](split_view/end.html "cpp/ranges/split view/end") |  returns an iterator or a sentinel to the end   
(public member function)   
[_find_next_](split_view/find_next.html "cpp/ranges/split view/find next") |  searches for the next occurrence of the pattern  
(exposition-only member function*)  
  
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
  
### Nested classes

[_iterator_](split_view/iterator.html "cpp/ranges/split view/iterator") |  the iterator type  
(exposition-only member class*)  
---|---  
[_sentinel_](split_view/sentinel.html "cpp/ranges/split view/sentinel") |  the sentinel type  
(exposition-only member class*)  
  
### [Deduction guides](split_view/deduction_guides.html "cpp/ranges/split view/deduction guides")

### Notes

Before [P2210R2](https://wg21.link/P2210R2), `split_view` used a _lazy_ mechanism for splitting, and thus could not keep the bidirectional, random access, or contiguous properties of the underlying view, or make the iterator type of the inner range same as that of the underlying view. Consequently, it is redesigned by [P2210R2](https://wg21.link/P2210R2), and the lazy mechanism is moved to [`lazy_split_view`](lazy_split_view.html "cpp/ranges/lazy split view"). 

The delimiter `pattern` generally should not be an ordinary string literal, as it will consider the null terminator to be necessary part of the delimiter; therefore, it is advisable to use a [std::string_view](../string/basic_string_view.html "cpp/string/basic string view") literal instead. 

### Example

Run this code
    
    
    #include <iomanip>
    #include <iostream>
    #include <ranges>
    #include <string_view>
     
    int main()
    {
        using std::operator""sv;
        constexpr auto words{"Hello^_^C++^_^20^_^!"sv};
        constexpr auto delim{"^_^"sv};
     
        for (const auto word : std::views::split(words, delim))
            // with string_view's C++23 range constructor:
            [std::cout](../io/cout.html) << [std::quoted](../io/manip/quoted.html)([std::string_view](../string/basic_string_view.html)(word)) << ' ';
        [std::cout](../io/cout.html) << '\n';
    }

Output: 
    
    
    "Hello" "C++" "20" "!"

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[P2210R2](https://wg21.link/P2210R2) | C++20  | the old `split_view` was too lazy to be easily used  | it is redesigned   
  
### See also

[ ranges::lazy_split_viewviews::lazy_split](lazy_split_view.html "cpp/ranges/lazy split view")(C++20) |  a [`view`](view.html "cpp/ranges/view") over the subranges obtained from splitting another [`view`](view.html "cpp/ranges/view") using a delimiter  
(class template) (range adaptor object)  
---|---  
[ ranges::join_viewviews::join](join_view.html "cpp/ranges/join view")(C++20) |  a [`view`](view.html "cpp/ranges/view") consisting of the sequence obtained from flattening a [`view`](view.html "cpp/ranges/view") of [`range`s](range.html "cpp/ranges/range")  
(class template) (range adaptor object)
