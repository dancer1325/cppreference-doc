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
**filter_view views::filter**  
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

**`std::ranges::filter_view`**

[Member functions](filter_view.html#Member_functions "cpp/ranges/filter view")  
---  
[filter_view::filter_view](filter_view.html#ctor "cpp/ranges/filter view")  
[filter_view::base](filter_view.html#base "cpp/ranges/filter view")  
[filter_view::pred](filter_view.html#pred "cpp/ranges/filter view")  
[filter_view::begin](filter_view.html#begin "cpp/ranges/filter view")  
[filter_view::end](filter_view.html#end "cpp/ranges/filter view")  
[Deduction guides](filter_view.html#Deduction_guides "cpp/ranges/filter view")  
[Iterator](filter_view/iterator.html "cpp/ranges/filter view/iterator")  
[filter_view::_iterator_ ::_iterator_](filter_view/iterator.html#ctor "cpp/ranges/filter view/iterator")  
[filter_view::_iterator_ ::base](filter_view/iterator.html#base "cpp/ranges/filter view/iterator")  
[filter_view::_iterator_ ::operator*filter_view::_iterator_ ::operator->](filter_view/iterator.html#dereference "cpp/ranges/filter view/iterator")  
[filter_view::_iterator_ ::operator++  
filter_view::_iterator_ ::operator++(int)](filter_view/iterator.html#increment "cpp/ranges/filter view/iterator")  
[filter_view::_iterator_ ::operator--  
filter_view::_iterator_ ::operator--(int)](filter_view/iterator.html#decrement "cpp/ranges/filter view/iterator")  
[operator==(filter_view::_iterator_)](filter_view/iterator.html#compare "cpp/ranges/filter view/iterator")  
[iter_move(filter_view::_iterator_)](filter_view/iterator.html#move "cpp/ranges/filter view/iterator")  
[iter_swap(filter_view::_iterator_)](filter_view/iterator.html#swap "cpp/ranges/filter view/iterator")  
[Sentinel](filter_view/sentinel.html "cpp/ranges/filter view/sentinel")  
[filter_view::_sentinel_ ::_sentinel_](filter_view/sentinel.html#ctor "cpp/ranges/filter view/sentinel")  
[filter_view::_sentinel_ ::base](filter_view/sentinel.html#base "cpp/ranges/filter view/sentinel")  
[operator==(filter_view::_iterator_ , filter_view::_sentinel_)](filter_view/sentinel.html#compare "cpp/ranges/filter view/sentinel")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/filter_view/navbar_content&action=edit)

Defined in header `[<ranges>](../header/ranges.html "cpp/header/ranges")` |  |   
---|---|---  
template< [ranges::input_range](input_range.html) V,  
[std::indirect_unary_predicate](../iterator/indirect_unary_predicate.html)<[ranges::iterator_t](iterator_t.html)<V>> Pred >  
requires [ranges::view](view.html)<V> && [std::is_object_v](../types/is_object.html)<Pred>  
class filter_view  
: public [ranges::view_interface](view_interface.html)<filter_view<V, Pred>> |  (1)  |  (since C++20)  
namespace views {  
inline constexpr /* unspecified */ filter = /* unspecified */;  
} |  (2)  |  (since C++20)  
Call signature |  |   
template< [ranges::viewable_range](viewable_range.html) R, class Pred >  
requires /* see below */  
constexpr [ranges::view](view.html) auto filter( R&& r, Pred&& pred ); |  |  (since C++20)  
template< class Pred >  
constexpr /* range adaptor closure */ filter( Pred&& pred ); |  |  (since C++20)  
| |   
  
1) A range adaptor that represents [`view`](view.html "cpp/ranges/view") of an underlying sequence with only the elements that satisfy the predicate.

2) [RangeAdaptorObject](../named_req/RangeAdaptorObject.html "cpp/named req/RangeAdaptorObject"). The expression views::filter(e, p) is [expression-equivalent](../language/expressions.html#Expression-equivalence "cpp/language/expressions") to filter_view(e, p) for any suitable subexpressions e and p.

`filter_view` models the concepts [`bidirectional_range`](bidirectional_range.html "cpp/ranges/bidirectional range"), [`forward_range`](forward_range.html "cpp/ranges/forward range"), [`input_range`](input_range.html "cpp/ranges/input range"), and [`common_range`](common_range.html "cpp/ranges/common range") when the underlying [`view`](view.html "cpp/ranges/view") `V` models respective concepts. 

## Contents

  * [1 Data members](filter_view.html#Data_members)
  * [2 Member functions](filter_view.html#Member_functions)
    * [2.1 Inherited from std::ranges::view_interface](filter_view.html#Inherited_from_std::ranges::view_interface)
  * [3 std::ranges::filter_view::filter_view](filter_view.html#std::ranges::filter_view::filter_view)
    * [3.1 Parameters](filter_view.html#Parameters)
  * [4 std::ranges::filter_view::base](filter_view.html#std::ranges::filter_view::base)
  * [5 std::ranges::filter_view::pred](filter_view.html#std::ranges::filter_view::pred)
  * [6 std::ranges::filter_view::begin](filter_view.html#std::ranges::filter_view::begin)
  * [7 std::ranges::filter_view::end](filter_view.html#std::ranges::filter_view::end)
    * [7.1 Deduction guides](filter_view.html#Deduction_guides)
    * [7.2 Nested classes](filter_view.html#Nested_classes)
    * [7.3 Example](filter_view.html#Example)
    * [7.4 Defect reports](filter_view.html#Defect_reports)
    * [7.5 See also](filter_view.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/filter_view&action=edit&section=1 "Edit section: Data members")] Data members

Member  |  Description   
---|---  
`V` `_base__` |  the underlying view  
(exposition-only member object*)  
[`_copyable-box_`](copyable_wrapper.html "cpp/ranges/copyable wrapper")`<Pred>`(until C++23)[`_movable-box_`](copyable_wrapper.html "cpp/ranges/copyable wrapper")`<Pred>`(since C++23) `_pred__` |  wraps the predicate used to filter out elements of `_base__`  
(exposition-only member object*)  
[`_non-propagating-cache_`](non-propagating-cache.html "cpp/ranges/non-propagating-cache") <[ranges::iterator_t](iterator_t.html)<V>> `_begin__`   
(present only if `V` satisfies [`forward_range`](forward_range.html "cpp/ranges/forward range")) |  an object that caches an iterator to the first element of `_base__` that satisfies the `_pred__`  
(exposition-only member object*)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/filter_view&action=edit&section=2 "Edit section: Member functions")] Member functions

[ (constructor)](filter_view.html#ctor "cpp/ranges/filter view") |  constructs a `filter_view`   
(public member function)  
---|---  
[ base](filter_view.html#base "cpp/ranges/filter view") |  returns the underlying view `V`   
(public member function)  
[ pred](filter_view.html#pred "cpp/ranges/filter view") |  returns a reference to the predicate stored within `filter_view`   
(public member function)  
[ begin](filter_view.html#begin "cpp/ranges/filter view") |  returns the beginning iterator of the `filter_view`   
(public member function)  
[ end](filter_view.html#end "cpp/ranges/filter view") |  returns the sentinel of the `filter_view`   
(public member function)  
  
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
  
##  std::ranges::filter_view::filter_view

filter_view() requires [std::default_initializable](../concepts/default_initializable.html)<V> &&  
[std::default_initializable](../concepts/default_initializable.html)<Pred> = default; |  (1)  |  (since C++20)  
---|---|---  
constexpr explicit filter_view( V base, Pred pred ); |  (2)  |  (since C++20)  
| |   
  
1) Value-initializes `_base__` via its default member initializer (= V()) and default-initializes `_pred__` (which value-initializes the contained `Pred`).

2) Initializes `_base__` with std::move(base) and initializes `_pred__` with std::move(pred).

###  Parameters

base  |  \-  |  range to filter   
---|---|---  
pred  |  \-  |  predicate to filter out elements   
  
##  std::ranges::filter_view::base

constexpr V base() const& requires [std::copy_constructible](../concepts/copy_constructible.html)<V>; |  (1)  |  (since C++20)  
---|---|---  
constexpr V base() &&; |  (2)  |  (since C++20)  
| |   
  
1) Equivalent to return base_;.

2) Equivalent to return std::move(base_);. 

##  std::ranges::filter_view::pred

constexpr const Pred& pred() const; |  |  (since C++20)  
---|---|---  
| |   
  
Returns a reference to the contained `Pred` object. The behavior is undefined if `_pred__` does not contain a value. 

##  std::ranges::filter_view::begin

constexpr /*iterator*/ begin(); |  |  (exposition only*)  
---|---|---  
| |   
  
In order to provide the amortized constant time complexity required by the [`range`](range.html "cpp/ranges/range") concept, this function caches the result within the `filter_view` object for use on subsequent calls. Equivalent to 
    
    
    if constexpr (![ranges::forward_range](forward_range.html)<V>)
        return /*iterator*/{*this, [ranges::find_if](../algorithm/ranges/find.html)(base_, [std::ref](../utility/functional/ref.html)(*pred_))};
    else
    {
        if (!begin_.has_value())
            begin_ = [ranges::find_if](../algorithm/ranges/find.html)(base_, [std::ref](../utility/functional/ref.html)(*pred_)); // caching
        return /*iterator*/{*this, begin_.value())};
    }

The behavior is undefined if `_pred__` does not contain a value. 

##  std::ranges::filter_view::end

constexpr auto end(); |  |  (since C++20)  
---|---|---  
| |   
  
Returns an iterator to the end. Equivalent to 
    
    
    if constexpr ([ranges::common_range](common_range.html)<V>)
        return /*iterator*/{*this, [ranges::end](end.html)(base_)};
    else
        return /*sentinel*/{*this};

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/filter_view&action=edit&section=4 "Edit section: Deduction guides")] Deduction guides

template< class R, class Pred >  
filter_view( R&&, Pred ) -> filter_view<[views::all_t](all_view.html)<R>, Pred>; |  |  (since C++20)  
---|---|---  
| |   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/filter_view&action=edit&section=5 "Edit section: Nested classes")] Nested classes

[_iterator_](filter_view/iterator.html "cpp/ranges/filter view/iterator") |  the iterator type of `filter_view`  
(exposition-only member class*)  
---|---  
[_sentinel_](filter_view/sentinel.html "cpp/ranges/filter view/sentinel") |  the sentinel type of `filter_view` when the underlying view is not a [`common_range`](common_range.html "cpp/ranges/common range")  
(exposition-only member class*)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/filter_view&action=edit&section=6 "Edit section: Example")] Example

Run this code
    
    
    #include <iostream>
    #include <ranges>
     
    int main()
    {
        auto even = [](int i) { return 0 == i % 2; };
        auto square = [](int i) { return i * i; };
     
        for (int i : std::[views::iota](iota_view.html)(0, 6)
                   | std::views::filter(even)
                   | std::[views::transform](transform_view.html)(square))
            [std::cout](../io/cout.html) << i << ' ';
        [std::cout](../io/cout.html) << '\n';
    }

Output: 
    
    
    0 4 16

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/filter_view&action=edit&section=7 "Edit section: Defect reports")] Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3714](https://cplusplus.github.io/LWG/issue3714)  
([P2711R1](https://wg21.link/P2711R1))  | C++20  | the multi-parameter constructor was not explicit  | made explicit   
[P2325R3](https://wg21.link/P2325R3) | C++20  | if `Pred` is not [`default_initializable`](../concepts/default_initializable.html "cpp/concepts/default initializable"), the default constructor  
constructs a `filter_view` which does not contain a `Pred` | the `filter_view` is also  
not [`default_initializable`](../concepts/default_initializable.html "cpp/concepts/default initializable")  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/filter_view&action=edit&section=8 "Edit section: See also")] See also

[ ranges::take_while_viewviews::take_while](take_while_view.html "cpp/ranges/take while view")(C++20) |  a [`view`](view.html "cpp/ranges/view") consisting of the initial elements of another [`view`](view.html "cpp/ranges/view"), until the first element on which a predicate returns false  
(class template) (range adaptor object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_take_while_view&action=edit)  
---|---
