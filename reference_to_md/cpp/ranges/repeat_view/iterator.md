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
  
  
  


[`std::ranges::repeat_view`](../repeat_view.html "cpp/ranges/repeat view")

[Member functions](../repeat_view.html#Member_functions "cpp/ranges/repeat view")  
---  
[repeat_view::repeat_view](../repeat_view.html#ctor "cpp/ranges/repeat view")  
[repeat_view::begin](../repeat_view.html#begin "cpp/ranges/repeat view")  
[repeat_view::end](../repeat_view.html#end "cpp/ranges/repeat view")  
[repeat_view::size](../repeat_view.html#size "cpp/ranges/repeat view")  
[Deduction guides](../repeat_view.html#Deduction_guides "cpp/ranges/repeat view")  
**Iterator**  
[Member functions](iterator.html#Member_functions "cpp/ranges/repeat view/iterator")  
[repeat_view::_iterator_ ::_iterator_](iterator.html#Member_functions "cpp/ranges/repeat view/iterator")  
[repeat_view::_iterator_ ::operator*](iterator.html#Member_functions "cpp/ranges/repeat view/iterator")  
[repeat_view::_iterator_ ::operator[]](iterator.html#Member_functions "cpp/ranges/repeat view/iterator")  
[repeat_view::_iterator_ ::operator++  
repeat_view::_iterator_ ::operator++(int)  
](iterator.html#Member_functions "cpp/ranges/repeat view/iterator")  
[repeat_view::_iterator_ ::operator--  
repeat_view::_iterator_ ::operator--(int)  
](iterator.html#Member_functions "cpp/ranges/repeat view/iterator")  
[repeat_view::_iterator_ ::operator+=](iterator.html#Member_functions "cpp/ranges/repeat view/iterator")  
[repeat_view::_iterator_ ::operator-=](iterator.html#Member_functions "cpp/ranges/repeat view/iterator")  
[Non-member functions](iterator.html#Non-member_functions "cpp/ranges/repeat view/iterator")  
[operator==(repeat_view::_iterator_)  
operator<=>(repeat_view::_iterator_)](iterator.html#Non-member_functions "cpp/ranges/repeat view/iterator")  
[operator+(repeat_view::_iterator_)](iterator.html#Non-member_functions "cpp/ranges/repeat view/iterator")  
[operator-(repeat_view::_iterator_)](iterator.html#Non-member_functions "cpp/ranges/repeat view/iterator")  
  


struct /*iterator*/; |  | (exposition only*)  
---|---|---  
| |   
  
[ranges::repeat_view](../repeat_view.html)<W, Bound>::`_iterator_` is the type of the iterators returned by [`begin()`](../repeat_view.html#begin "cpp/ranges/repeat view") and [`end()`](../repeat_view.html#end "cpp/ranges/repeat view") of [ranges::repeat_view](../repeat_view.html)<W, Bound>. 

## Contents

  * [1 Nested types](iterator.html#Nested_types)
    * [1.1 Exposition-only types](iterator.html#Exposition-only_types)
    * [1.2 Iterator property types](iterator.html#Iterator_property_types)
  * [2 Data members](iterator.html#Data_members)
  * [3 Member functions](iterator.html#Member_functions)
  * [4 std::ranges::repeat_view::_iterator_ ::_iterator_](iterator.html#std::ranges::repeat_view::iterator::iterator)
  * [5 std::ranges::repeat_view::_iterator_ ::operator*](iterator.html#std::ranges::repeat_view::iterator::operator.2A)
  * [6 std::ranges::repeat_view::_iterator_ ::operator[]](iterator.html#std::ranges::repeat_view::iterator::operator.5B.5D)
  * [7 std::ranges::repeat_view::_iterator_ ::operator++](iterator.html#std::ranges::repeat_view::iterator::operator.2B.2B)
  * [8 std::ranges::repeat_view::_iterator_ ::operator--](iterator.html#std::ranges::repeat_view::iterator::operator--)
  * [9 std::ranges::repeat_view::_iterator_ ::operator+=](iterator.html#std::ranges::repeat_view::iterator::operator.2B.3D)
  * [10 std::ranges::repeat_view::_iterator_ ::operator-=](iterator.html#std::ranges::repeat_view::iterator::operator-.3D)
    * [10.1 Non-member functions](iterator.html#Non-member_functions)
  * [11 operator==, <=>(std::ranges::repeat_view::_iterator_)](iterator.html#operator.3D.3D.2C_.3C.3D.3E.28std::ranges::repeat_view::iterator.29)
  * [12 operator+(std::ranges::repeat_view::_iterator_)](iterator.html#operator.2B.28std::ranges::repeat_view::iterator.29)
  * [13 operator-(std::ranges::repeat_view::_iterator_)](iterator.html#operator-.28std::ranges::repeat_view::iterator.29)
    * [13.1 Notes](iterator.html#Notes)

  
---  
  
### Nested types

#####  Exposition-only types   
  
---  
Type  |  Definition   
`_index-type_` |  [std::conditional_t](../../types/conditional.html)<[std::same_as](../../concepts/same_as.html)<Bound, [std::unreachable_sentinel_t](../../iterator/unreachable_sentinel_t.html)>,  
` `[std::ptrdiff_t](../../types/ptrdiff_t.html), Bound>  
(exposition-only member type*)  
  
#####  Iterator property types   
  
Type  |  Definition   
`iterator_concept` |  [std::random_access_iterator_tag](../../iterator/iterator_tags.html "cpp/iterator/iterator tags")  
`iterator_category` |  [std::random_access_iterator_tag](../../iterator/iterator_tags.html "cpp/iterator/iterator tags")  
`value_type` |  `W`  
`difference_type` |  [std::conditional_t](../../types/conditional.html)<[`_is-signed-integer-like_`](../../iterator/is-integer-like.html "cpp/iterator/is-integer-like") ﻿<`_index-type_` ﻿>,  
` `` _index-type_` ﻿,` `[` _iota-diff-t_`](../iota_view/iterator.html "cpp/ranges/iota view/iterator") ﻿<`_index-type_` ﻿>>  
  
### Data members

Member  |  Definition   
---|---  
const W* `_value__` |  a pointer to the value to repeat  
(exposition-only member object*)  
`_index-type_` `_current__` |  the current position  
(exposition-only member object*)  
  
### Member functions

##  std::ranges::repeat_view::_iterator_ ::_iterator_

/*iterator*/() = default; |  (1)  |  (since C++23)  
---|---|---  
constexpr explicit /*iterator*/  
( const W* value, /*index-type*/ b = /*index-type*/() ); |  (2) | (since C++23)   
(exposition only*)  
| |   
  
Constructs an iterator. Overload (2) is called by [`begin()`](../repeat_view.html#begin "cpp/ranges/repeat view") and [`end()`](../repeat_view.html#end "cpp/ranges/repeat view") of [`ranges::repeat_view`](../repeat_view.html "cpp/ranges/repeat view"). 

1) Initializes `_[value_](iterator.html#value)_` with nullptr and value-initializes `_[current_](iterator.html#current)_` ﻿.

2) Initializes `_[value_](iterator.html#value)_` with value and `_[current_](iterator.html#current)_` with b.

If `Bound` is not [std::unreachable_sentinel_t](../../iterator/unreachable_sentinel_t.html "cpp/iterator/unreachable sentinel t") and b is negative, the behavior is undefined. 

##  std::ranges::repeat_view::_iterator_ ::operator*

constexpr const W& operator*() const noexcept; |  |  (since C++23)  
---|---|---  
| |   
  
Returns *`_[value_](iterator.html#value)_`. 

##  std::ranges::repeat_view::_iterator_ ::operator[]

constexpr const W& operator[]( difference_type n ) const noexcept; |  |  (since C++23)  
---|---|---  
| |   
  
Returns *(*this + n). 

##  std::ranges::repeat_view::_iterator_ ::operator++

constexpr /*iterator*/& operator++(); |  (1)  |  (since C++23)  
---|---|---  
constexpr void operator++(int); |  (2)  |  (since C++23)  
| |   
  
1) Equivalent to ++`_[current_](iterator.html#current)_` ﻿; return *this;.

2) Equivalent to auto tmp = *this; ++*this; return tmp;. 

##  std::ranges::repeat_view::_iterator_ ::operator--

constexpr /*iterator*/& operator\--(); |  (1)  |  (since C++23)  
---|---|---  
constexpr /*iterator*/ operator\--(int); |  (2)  |  (since C++23)  
| |   
  
1) Equivalent to \--`_[current_](iterator.html#current)_` ﻿; return *this;.

If `Bound` is not [std::unreachable_sentinel_t](../../iterator/unreachable_sentinel_t.html "cpp/iterator/unreachable sentinel t") and `_[current_](iterator.html#current)_` is non-positive, the behavior is undefined.

2) Equivalent to auto tmp = *this; \--*this; return tmp;. 

##  std::ranges::repeat_view::_iterator_ ::operator+=

constexpr /*iterator*/& operator+=( difference_type n ); |  |  (since C++23)  
---|---|---  
| |   
  
Equivalent to `_[current_](iterator.html#current)_`` `+= n; return *this;. 

If `Bound` is not [std::unreachable_sentinel_t](../../iterator/unreachable_sentinel_t.html "cpp/iterator/unreachable sentinel t") and `_[current_](iterator.html#current)_`` `+ n is negative, the behavior is undefined. 

##  std::ranges::repeat_view::_iterator_ ::operator-=

constexpr /*iterator*/& operator-=( difference_type n ); |  |  (since C++23)  
---|---|---  
| |   
  
Equivalent to `_[current_](iterator.html#current)_`` `-= n; return *this;. 

If `Bound` is not [std::unreachable_sentinel_t](../../iterator/unreachable_sentinel_t.html "cpp/iterator/unreachable sentinel t") and `_[current_](iterator.html#current)_`` `- n is negative, the behavior is undefined. 

### Non-member functions

##  operator==, <=>(std::ranges::repeat_view::_iterator_)

friend constexpr bool operator==  
( const /*iterator*/& x, const /*iterator*/& y ); |  (1)  |  (since C++23)  
---|---|---  
friend constexpr auto operator<=>  
( const /*iterator*/& x, const /*iterator*/& y ); |  (2)  |  (since C++23)  
| |   
  
1) Returns x.`_[current_](iterator.html#current)_`` `== y.`_[current_](iterator.html#current)_`.

2) Returns x.`_[current_](iterator.html#current)_`` `<=> y.`_[current_](iterator.html#current)_`.

The `!=` operator is [synthesized](../../language/default_comparisons.html#Other_defaulted_comparison_operators "cpp/language/default comparisons") from `operator==`. 

These functions are not visible to ordinary [unqualified](../../language/unqualified_lookup.html "cpp/language/unqualified lookup") or [qualified lookup](../../language/qualified_lookup.html "cpp/language/qualified lookup"), and can only be found by [argument-dependent lookup](../../language/adl.html "cpp/language/adl") when `_iterator_` is an associated class of the arguments. 

##  operator+(std::ranges::repeat_view::_iterator_)

friend constexpr /*iterator*/ operator+  
( /*iterator*/ i, difference_type n ); |  (1)  |  (since C++23)  
---|---|---  
friend constexpr /*iterator*/ operator+  
( difference_type n, /*iterator*/ i ); |  (2)  |  (since C++23)  
| |   
  
Equivalent to i += n; return i;. 

These functions are not visible to ordinary [unqualified](../../language/unqualified_lookup.html "cpp/language/unqualified lookup") or [qualified lookup](../../language/qualified_lookup.html "cpp/language/qualified lookup"), and can only be found by [argument-dependent lookup](../../language/adl.html "cpp/language/adl") when `_iterator_` is an associated class of the arguments. 

##  operator-(std::ranges::repeat_view::_iterator_)

friend constexpr /*iterator*/ operator-  
( /*iterator*/ i, difference_type n ); |  (1)  |  (since C++23)  
---|---|---  
friend constexpr difference_type operator-  
( const /*iterator*/& x, const /*iterator*/& y ); |  (2)  |  (since C++23)  
| |   
  
1) Equivalent to i -= n; return i;.

2) Returns static_cast<`[difference_type](iterator.html#difference_type)`>(x.`_[current_](iterator.html#current)_` ﻿) -  
` `static_cast<`[difference_type](iterator.html#difference_type)`>(y.`_[current_](iterator.html#current)_` ﻿).

These functions are not visible to ordinary [unqualified](../../language/unqualified_lookup.html "cpp/language/unqualified lookup") or [qualified lookup](../../language/qualified_lookup.html "cpp/language/qualified lookup"), and can only be found by [argument-dependent lookup](../../language/adl.html "cpp/language/adl") when `_iterator_` is an associated class of the arguments. 

### Notes

`_iterator_` is always [`random_access_iterator`](../../iterator/random_access_iterator.html "cpp/iterator/random access iterator"). 
