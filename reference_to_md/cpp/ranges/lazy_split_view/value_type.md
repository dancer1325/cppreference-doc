[C++](../../../cpp.html "cpp")

[Compiler support](../../compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](../../freestanding.html "cpp/freestanding")  
[Language](../../language.html "cpp/language")  
[Standard library](../../standard_library.html "cpp/standard library")  
[Standard library headers](../../headers.html "cpp/header")  
[Named requirements](../../iterator/concepts.html "cpp/named req")  
[Feature test macros](../../experimental/feature_test.html "cpp/feature test") (C++20)  
[Language support library](../../utility.html#Language_support "cpp/utility")  
[Concepts library](../../concepts.html "cpp/concepts") (C++20)  
[Diagnostics library](../../error.html "cpp/error")  
[Memory management library](../../memory.html "cpp/memory")  
[Metaprogramming library](../../meta.html "cpp/meta") (C++11)  
[General utilities library](../../utility.html "cpp/utility")  
[Containers library](../../container.html "cpp/container")  
[Iterators library](../../iterator.html "cpp/iterator")  
[Ranges library](../../ranges.html "cpp/ranges") (C++20)  
[Algorithms library](../../algorithm.html "cpp/algorithm")  
[Strings library](../../string.html "cpp/string")  
[Text processing library](../../text.html "cpp/text")  
[Numerics library](../../numeric.html "cpp/numeric")  
[Date and time library](../../chrono.html "cpp/chrono")  
[Input/output library](../../io.html "cpp/io")  
[Filesystem library](../../filesystem.html "cpp/filesystem") (C++17)  
[Concurrency support library](../../atomic.html "cpp/thread") (C++11)  
[Execution control library](../../experimental/execution.html "cpp/execution") (C++26)  
[Technical specifications](../../experimental.html "cpp/experimental")  
[Symbols index](../../symbol_index.html "cpp/symbol index")  
[External libraries](../../links/libs.html "cpp/links/libs")  
  


[Ranges library](../../ranges.html "cpp/ranges")

| [Range access](../../ranges.html#Range_access "cpp/ranges")  
---  
| [begin](../begin.html "cpp/ranges/begin")  
---  
[cbegin](../cbegin.html "cpp/ranges/cbegin")` `  
[end](../end.html "cpp/ranges/end")  
[cend](../cend.html "cpp/ranges/cend")  
  
| [rbegin](../rbegin.html "cpp/ranges/rbegin")  
---  
[crbegin](../crbegin.html "cpp/ranges/crbegin")` `  
[rend](../rend.html "cpp/ranges/rend")  
[crend](../crend.html "cpp/ranges/crend")  
  
| [size](../size.html "cpp/ranges/size")  
---  
[ssize](../ssize.html "cpp/ranges/ssize")` `  
[data](../data.html "cpp/ranges/data")  
[cdata](../cdata.html "cpp/ranges/cdata")  
  
| [reserve_hint](../reserve_hint.html "cpp/ranges/reserve hint")(C++26)` `  
---  
[empty](../empty.html "cpp/ranges/empty")  
  
  
  
  
  
| [Range conversions](../../ranges.html#Range_conversions "cpp/ranges")  
---  
[std::from_range_t  
std::from_range](../from_range.html "cpp/ranges/from range")(C++23)(C++23)` `  
[to](../to.html "cpp/ranges/to")(C++23)  
  
  
  
| [Dangling iterator handling](../../ranges.html#Dangling_iterator_handling "cpp/ranges")  
---  
[dangling](../dangling.html "cpp/ranges/dangling")  
[borrowed_iterator_t](../borrowed_iterator_t.html "cpp/ranges/borrowed iterator t")  
[borrowed_subrange_t](../borrowed_iterator_t.html "cpp/ranges/borrowed iterator t")  
  
  
  
[Range primitives](../../ranges.html#Range_primitives "cpp/ranges")  
---  
| [range_size_trange_difference_trange_value_t](../range_size_t.html "cpp/ranges/range size t")  
---  
[elements_of](../elements_of.html "cpp/ranges/elements of")(C++23)` `  
  
| [iterator_tconst_iterator_tsentinel_tconst_sentinel_t](../iterator_t.html "cpp/ranges/iterator t")(C++23)(C++23)` `  
---  
  
| [range_reference_trange_const_reference_trange_rvalue_reference_trange_common_reference_t](../range_reference_t.html "cpp/ranges/range reference t")(C++23)  
---  
  
[Range concepts](../../ranges.html#Range_concepts "cpp/ranges")  
---  
| [range](../range.html "cpp/ranges/range")  
---  
[borrowed_range](../borrowed_range.html "cpp/ranges/borrowed range")` `  
[common_range](../common_range.html "cpp/ranges/common range")  
  
| [sized_range](../sized_range.html "cpp/ranges/sized range")  
---  
[viewable_range](../viewable_range.html "cpp/ranges/viewable range")` `  
[view](../view.html "cpp/ranges/view")  
  
| [input_range](../input_range.html "cpp/ranges/input range")  
---  
[output_range](../output_range.html "cpp/ranges/output range")  
[forward_range](../forward_range.html "cpp/ranges/forward range")` `  
  
| [bidirectional_range](../bidirectional_range.html "cpp/ranges/bidirectional range")` `  
---  
[random_access_range](../random_access_range.html "cpp/ranges/random access range")  
[contiguous_range](../contiguous_range.html "cpp/ranges/contiguous range")  
  
| [approximately_sized_range](../approximately_sized_range.html "cpp/ranges/approximately sized range")(C++26)  
---  
[constant_range](../constant_range.html "cpp/ranges/constant range")(C++23)  
  
  
  
[Views](../../ranges.html#Views "cpp/ranges")  
---  
| [view_interface](../view_interface.html "cpp/ranges/view interface")` `  
---  
  
| [subrange](../subrange.html "cpp/ranges/subrange")  
---  
  
|  |   
  
---  
  
[Range factories](../../ranges.html#Range_factories "cpp/ranges")  
---  
| [empty_viewviews::empty](../empty_view.html "cpp/ranges/empty view")` `  
---  
  
| [single_viewviews::single](../single_view.html "cpp/ranges/single view")` `  
---  
  
| [basic_istream_viewviews::istream](../basic_istream_view.html "cpp/ranges/basic istream view")` `  
---  
  
| [iota_viewviews::iota](../iota_view.html "cpp/ranges/iota view")` `  
---  
  
| [repeat_viewviews::repeat](../repeat_view.html "cpp/ranges/repeat view")(C++23)(C++23)  
---  
  
[Range adaptors](../../ranges.html#Range_adaptors "cpp/ranges")  
---  
| [views::all_tviews::all](../all_view.html "cpp/ranges/all view")  
---  
[as_rvalue_viewviews::as_rvalue](../as_rvalue_view.html "cpp/ranges/as rvalue view")(C++23)(C++23)` `  
[filter_viewviews::filter](../filter_view.html "cpp/ranges/filter view")  
[transform_viewviews::transform](../transform_view.html "cpp/ranges/transform view")  
[take_viewviews::take](../take_view.html "cpp/ranges/take view")  
[take_while_viewviews::take_while](../take_while_view.html "cpp/ranges/take while view")  
[common_viewviews::common](../common_view.html "cpp/ranges/common view")  
[views::counted](../counted_view.html "cpp/ranges/view counted")  
[to_input_viewviews::to_input](../to_input_view.html "cpp/ranges/to input view")(C++26)(C++26)  
  
| [ref_view](../ref_view.html "cpp/ranges/ref view")  
---  
[drop_viewviews::drop](../drop_view.html "cpp/ranges/drop view")  
[drop_while_viewviews::drop_while](../drop_while_view.html "cpp/ranges/drop while view")  
[lazy_split_viewviews::lazy_split](../lazy_split_view.html "cpp/ranges/lazy split view")  
[split_viewviews::split](../split_view.html "cpp/ranges/split view")  
[join_viewviews::join](../join_view.html "cpp/ranges/join view")  
[join_with_viewviews::join_with](../join_with_view.html "cpp/ranges/join with view")(C++23)(C++23)` `  
[concat_viewviews::concat](../concat_view.html "cpp/ranges/concat view")(C++26)(C++26)  
[cache_latest_viewviews::cache_latest](../cache_latest_view.html "cpp/ranges/cache latest view")(C++26)(C++26)` `  
  
| [owning_view](../owning_view.html "cpp/ranges/owning view")  
---  
[reverse_viewviews::reverse](../reverse_view.html "cpp/ranges/reverse view")  
[as_const_viewviews::as_const](../as_const_view.html "cpp/ranges/as const view")(C++23)(C++23)  
[elements_viewviews::elements](../elements_view.html "cpp/ranges/elements view")  
[keys_viewviews::keys](../keys_view.html "cpp/ranges/keys view")  
[values_viewviews::values](../values_view.html "cpp/ranges/values view")  
[enumerate_viewviews::enumerate](../enumerate_view.html "cpp/ranges/enumerate view")(C++23)(C++23)  
[zip_viewviews::zip](../zip_view.html "cpp/ranges/zip view")(C++23)(C++23)  
[zip_transform_viewviews::zip_transform](../zip_transform_view.html "cpp/ranges/zip transform view")(C++23)(C++23)` `  
  
| [adjacent_viewviews::adjacent](../adjacent_view.html "cpp/ranges/adjacent view")(C++23)(C++23)  
---  
[views::pairwise](../adjacent_view.html "cpp/ranges/adjacent view")(C++23)  
[adjacent_transform_viewviews::adjacent_transform](../adjacent_transform_view.html "cpp/ranges/adjacent transform view")(C++23)(C++23)  
[views::pairwise_transform](../adjacent_transform_view.html "cpp/ranges/adjacent transform view")(C++23)  
[chunk_viewviews::chunk](../chunk_view.html "cpp/ranges/chunk view")(C++23)(C++23)  
[slide_viewviews::slide](../slide_view.html "cpp/ranges/slide view")(C++23)(C++23)  
[chunk_by_viewviews::chunk_by](../chunk_by_view.html "cpp/ranges/chunk by view")(C++23)(C++23)  
[stride_viewviews::stride](../stride_view.html "cpp/ranges/stride view")(C++23)(C++23)  
[cartesian_product_viewviews::cartesian_product](../cartesian_product_view.html "cpp/ranges/cartesian product view")(C++23)(C++23)  
  
  
  
| [Range generators](../../ranges.html#Range_generators "cpp/ranges")  
---  
[std::generator](../../coroutine/generator.html "cpp/coroutine/generator")(C++23)` `  
  
| [Range adaptor closure objects](../../ranges.html#Range_adaptor_closure_objects "cpp/ranges")  
---  
[range_adaptor_closure](../range_adaptor_closure.html "cpp/ranges/range adaptor closure")(C++23)` `  
  
| [Range adaptor objects](../../ranges.html#Range_adaptor_objects "cpp/ranges")  
---  
  
  
  
[Helper items](../../ranges.html#Helper_items "cpp/ranges")  
---  
| [_copyable-box_  
 _movable-box_](../copyable_wrapper.html "cpp/ranges/copyable wrapper")(until C++23)` `(C++23)  
---  
  
| [_simple-view_](../../ranges.html#Helper_concepts "cpp/ranges")  
---  
[_non-propagating-cache_](../non-propagating-cache.html "cpp/ranges/non-propagating-cache")  
  
|   
  
---  
  
  
  


[`std::ranges::lazy_split_view`](../lazy_split_view.html "cpp/ranges/lazy split view")

[Member functions](../lazy_split_view.html#Member_functions "cpp/ranges/lazy split view")  
---  
[lazy_split_view::lazy_split_view](lazy_split_view.html "cpp/ranges/lazy split view/lazy split view")  
[lazy_split_view::base](base.html "cpp/ranges/lazy split view/base")  
[lazy_split_view::begin](begin.html "cpp/ranges/lazy split view/begin")  
[lazy_split_view::end](end.html "cpp/ranges/lazy split view/end")  
[Nested classes](../lazy_split_view.html#Nested_classes "cpp/ranges/lazy split view")  
[lazy_split_view::_outer_iterator_](outer_iterator.html "cpp/ranges/lazy split view/outer iterator")  
**lazy_split_view::_outer_iterator_ ::value_type**  
[lazy_split_view::_inner_iterator_](inner_iterator.html "cpp/ranges/lazy split view/inner iterator")  
[Deduction guides](deduction_guides.html "cpp/ranges/lazy split view/deduction guides")  
  


struct value_type : [ranges::view_interface](../view_interface.html)<value_type> |  |  (since C++20)  
---|---|---  
| |   
  
The value type of the iterator [ranges::lazy_split_view](../lazy_split_view.html)<V, Pattern>::[`_outer_iterator_`](outer_iterator.html "cpp/ranges/lazy split view/outer iterator") <Const>. 

## Contents

  * [1 Data members](value_type.html#Data_members)
  * [2 Member functions](value_type.html#Member_functions)
    * [2.1 Inherited from std::ranges::view_interface](value_type.html#Inherited_from_std::ranges::view_interface)
  * [3 Member functions](value_type.html#Member_functions_2)
  * [4 std::ranges::lazy_split_view::_outer_iterator_ ::value_type::value_type](value_type.html#std::ranges::lazy_split_view::outer_iterator::value_type::value_type)
  * [5 std::ranges::lazy_split_view::_outer_iterator_ ::value_type::begin](value_type.html#std::ranges::lazy_split_view::outer_iterator::value_type::begin)
  * [6 std::ranges::lazy_split_view::_outer_iterator_ ::value_type::end](value_type.html#std::ranges::lazy_split_view::outer_iterator::value_type::end)
    * [6.1 Defect reports](value_type.html#Defect_reports)

  
---  
  
### Data members

Member  |  Description   
---|---  
[`_outer_iterator_`](outer_iterator.html "cpp/ranges/lazy split view/outer iterator") `_i__` (private) |  an iterator into underlying [`view`](../view.html "cpp/ranges/view") of the outer class  
(exposition-only member object*)  
  
### Member functions

(constructor) |  constructs a `value_type` object  
(exposition-only member function*)  
---|---  
begin |  returns an [`_inner_iterator_`](inner_iterator.html "cpp/ranges/lazy split view/inner iterator") to the beginning of the inner range   
(public member function)  
end |  returns a [std::default_sentinel](../../iterator/default_sentinel.html "cpp/iterator/default sentinel")   
(public member function)  
  
#####  Inherited from [std::ranges::view_interface](../view_interface.html "cpp/ranges/view interface")  
  
[ empty](../view_interface/empty.html "cpp/ranges/view interface/empty") |  returns whether the derived view is empty, provided only if it satisfies [`sized_range`](../sized_range.html "cpp/ranges/sized range") or [`forward_range`](../forward_range.html "cpp/ranges/forward range")   
(public member function of `std::ranges::view_interface<D>`)   
[ cbegin](../view_interface/cbegin.html "cpp/ranges/view interface/cbegin")(C++23) |  returns a constant iterator to the beginning of the range   
(public member function of `std::ranges::view_interface<D>`)   
[ cend](../view_interface/cend.html "cpp/ranges/view interface/cend")(C++23) |  returns a sentinel for the constant iterator of the range   
(public member function of `std::ranges::view_interface<D>`)   
[ operator bool](../view_interface/operator_bool.html "cpp/ranges/view interface/operator bool") |  returns whether the derived view is not empty, provided only if [ranges::empty](../empty.html "cpp/ranges/empty") is applicable to it   
(public member function of `std::ranges::view_interface<D>`)   
[ front](../view_interface/front.html "cpp/ranges/view interface/front") |  returns the first element in the derived view, provided if it satisfies [`forward_range`](../forward_range.html "cpp/ranges/forward range")   
(public member function of `std::ranges::view_interface<D>`)   
  
### Member functions

##  std::ranges::lazy_split_view::_outer_iterator_ ::value_type::value_type

constexpr explicit value_type(/*outer_iterator*/ i); // exposition only |  |  (since C++20)  
---|---|---  
| |   
  
Initializes `_[i_](value_type.html#i)_` with std::move(i). 

##  std::ranges::lazy_split_view::_outer_iterator_ ::value_type::begin

constexpr /*inner_iterator*/<Const> begin() const; |  |  (since C++20)  
---|---|---  
| |   
  
Equivalent to return /*inner_iterator*/<Const>{`_i__`};. 

##  std::ranges::lazy_split_view::_outer_iterator_ ::value_type::end

constexpr [std::default_sentinel_t](../../iterator/default_sentinel.html) end() const noexcept; |  |  (since C++20)  
---|---|---  
| |   
  
Returns [std::default_sentinel](../../iterator/default_sentinel.html "cpp/iterator/default sentinel"). 

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3593](https://cplusplus.github.io/LWG/issue3593) | C++20  | `end` was not be noexcept  | made noexcept   
[LWG 4013](https://cplusplus.github.io/LWG/issue4013) | C++20  | `value_type` was default-initializable  | not default-initializable 
