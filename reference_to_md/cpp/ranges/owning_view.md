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
[split_viewviews::split](split_view.html "cpp/ranges/split view")  
[join_viewviews::join](join_view.html "cpp/ranges/join view")  
[join_with_viewviews::join_with](join_with_view.html "cpp/ranges/join with view")(C++23)(C++23)` `  
[concat_viewviews::concat](concat_view.html "cpp/ranges/concat view")(C++26)(C++26)  
[cache_latest_viewviews::cache_latest](cache_latest_view.html "cpp/ranges/cache latest view")(C++26)(C++26)` `  
  
| **owning_view**  
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
  
  
  


Defined in header `[<ranges>](../header/ranges.html "cpp/header/ranges")` |  |   
---|---|---  
template< [ranges::range](range.html) R >  
requires [std::movable](../concepts/movable.html)<R> && (!/*is-initializer-list*/<R>)  
class owning_view  
: public [ranges::view_interface](view_interface.html)<owning_view<R>> |  |  (since C++20)  
| |   
  
`owning_view` is a [`view`](view.html "cpp/ranges/view") that has unique ownership of a [`range`](range.html "cpp/ranges/range"). It is move-only and stores that `range` within it. 

The constant /*is-initializer-list*/<R> in the requires clause is true if and only if [std::remove_cvref_t](../types/remove_cvref.html)<R> is a specialization of [std::initializer_list](../utility/initializer_list.html "cpp/utility/initializer list"). 

## Contents

  * [1 Data members](owning_view.html#Data_members)
  * [2 Member functions](owning_view.html#Member_functions)
    * [2.1 Inherited from std::ranges::view_interface](owning_view.html#Inherited_from_std::ranges::view_interface)
  * [3 std::ranges::owning_view::owning_view](owning_view.html#std::ranges::owning_view::owning_view)
    * [3.1 Parameters](owning_view.html#Parameters)
    * [3.2 Notes](owning_view.html#Notes)
  * [4 std::ranges::owning_view::operator=](owning_view.html#std::ranges::owning_view::operator.3D)
    * [4.1 Parameters](owning_view.html#Parameters_2)
    * [4.2 Return value](owning_view.html#Return_value)
    * [4.3 Notes](owning_view.html#Notes_2)
  * [5 std::ranges::owning_view::base](owning_view.html#std::ranges::owning_view::base)
    * [5.1 Return value](owning_view.html#Return_value_2)
  * [6 std::ranges::owning_view::begin](owning_view.html#std::ranges::owning_view::begin)
  * [7 std::ranges::owning_view::end](owning_view.html#std::ranges::owning_view::end)
  * [8 std::ranges::owning_view::empty](owning_view.html#std::ranges::owning_view::empty)
  * [9 std::ranges::owning_view::size](owning_view.html#std::ranges::owning_view::size)
  * [10 std::ranges::owning_view::reserve_hint](owning_view.html#std::ranges::owning_view::reserve_hint)
  * [11 std::ranges::owning_view::data](owning_view.html#std::ranges::owning_view::data)
    * [11.1 Helper templates](owning_view.html#Helper_templates)
    * [11.2 Notes](owning_view.html#Notes_3)
    * [11.3 Example](owning_view.html#Example)
    * [11.4 See also](owning_view.html#See_also)

  
---  
  
### Data members

Member  |  Description   
---|---  
`R` `_r__` |  the underlying range  
(exposition-only member object*)  
  
### Member functions

[ (constructor)](owning_view.html#ctor "cpp/ranges/owning view") |  constructs an `owning_view` by value-initializing or move-constructing the stored range   
(public member function)  
---|---  
[ operator=](owning_view.html#assign "cpp/ranges/owning view") |  move-assigns the stored range   
(public member function)  
[ base](owning_view.html#base "cpp/ranges/owning view") |  returns a reference to the stored range   
(public member function)  
[ begin](owning_view.html#begin "cpp/ranges/owning view") |  returns the beginning iterator of the stored range   
(public member function)  
[ end](owning_view.html#end "cpp/ranges/owning view") |  returns the sentinel of the stored range   
(public member function)  
[ empty](owning_view.html#empty "cpp/ranges/owning view") |  checks whether the stored range is empty   
(public member function)  
[ size](owning_view.html#size "cpp/ranges/owning view") |  returns the size of the stored [`sized_range`](sized_range.html "cpp/ranges/sized range")   
(public member function)  
[ reserve_hint](owning_view.html#reserve_hint "cpp/ranges/owning view")(C++26) |  returns the approximate size of the stored [`approximately_sized_range`](approximately_sized_range.html "cpp/ranges/approximately sized range")   
(public member function)  
[ data](owning_view.html#data "cpp/ranges/owning view") |  returns the pointer to the beginning of the stored [`contiguous_range`](contiguous_range.html "cpp/ranges/contiguous range")   
(public member function)  
  
#####  Inherited from [std::ranges::view_interface](view_interface.html "cpp/ranges/view interface")  
  
[ cbegin](view_interface/cbegin.html "cpp/ranges/view interface/cbegin")(C++23) |  returns a constant iterator to the beginning of the range   
(public member function of `std::ranges::view_interface<D>`)   
[ cend](view_interface/cend.html "cpp/ranges/view interface/cend")(C++23) |  returns a sentinel for the constant iterator of the range   
(public member function of `std::ranges::view_interface<D>`)   
[ operator bool](view_interface/operator_bool.html "cpp/ranges/view interface/operator bool") |  returns whether the derived view is not empty, provided only if [ranges::empty](empty.html "cpp/ranges/empty") is applicable to it   
(public member function of `std::ranges::view_interface<D>`)   
[ front](view_interface/front.html "cpp/ranges/view interface/front") |  returns the first element in the derived view, provided if it satisfies [`forward_range`](forward_range.html "cpp/ranges/forward range")   
(public member function of `std::ranges::view_interface<D>`)   
[ back](view_interface/back.html "cpp/ranges/view interface/back") |  returns the last element in the derived view, provided only if it satisfies [`bidirectional_range`](bidirectional_range.html "cpp/ranges/bidirectional range") and [`common_range`](common_range.html "cpp/ranges/common range")   
(public member function of `std::ranges::view_interface<D>`)   
[ operator[]](view_interface/operator_at.html "cpp/ranges/view interface/operator at") |  returns the `n`th element in the derived view, provided only if it satisfies [`random_access_range`](random_access_range.html "cpp/ranges/random access range")   
(public member function of `std::ranges::view_interface<D>`)   
  
##  std::ranges::owning_view::owning_view

owning_view() requires [std::default_initializable](../concepts/default_initializable.html)<R> = default; |  (1)  |  (since C++20)  
---|---|---  
owning_view( owning_view&& other ) = default; |  (2)  |  (since C++20)  
constexpr owning_view( R&& t ); |  (3)  |  (since C++20)  
| |   
  
1) Default constructor. Value-initializes `_[r_](owning_view.html#r)_` by its default member initializer (= R()).

2) Move constructor. Move constructs `_[r_](owning_view.html#r)_` from that of other.

3) Move constructs `_[r_](owning_view.html#r)_` from t.

###  Parameters

other  |  \-  |  another `owning_view` to move from   
---|---|---  
t  |  \-  |  range to move from   
  
###  Notes

`owning_view` does not explicitly define a copy constructor. `owning_view` is move-only. 

##  std::ranges::owning_view::operator=

owning_view& operator=( owning_view&& other ) = default; |  |  (since C++20)  
---|---|---  
| |   
  
Move assignment operator. Move assigns `_[r_](owning_view.html#r)_` from that of other. 

###  Parameters

other  |  \-  |  another `owning_view` to move from   
---|---|---  
  
###  Return value

*this

###  Notes

`owning_view` does not explicitly define a copy assignment operator. `owning_view` is move-only. 

##  std::ranges::owning_view::base

constexpr R& base() & noexcept; |  (1)  |  (since C++20)  
---|---|---  
constexpr const R& base() const & noexcept; |  (2)  |  (since C++20)  
constexpr R&& base() && noexcept; |  (3)  |  (since C++20)  
constexpr const R&& base() const && noexcept; |  (4)  |  (since C++20)  
| |   
  
Returns a reference to the stored range, keeping value category and const-qualification. 

###  Return value

1,2) `_[r_](owning_view.html#r)_`

3,4) std::move(`_[r_](owning_view.html#r)_` ﻿)

##  std::ranges::owning_view::begin

constexpr [ranges::iterator_t](iterator_t.html)<R> begin(); |  (1)  |  (since C++20)  
---|---|---  
constexpr auto begin() const requires [ranges::range](range.html)<const R>; |  (2)  |  (since C++20)  
| |   
  
Returns [ranges::begin](begin.html)(`_[r_](owning_view.html#r)_` ﻿). 

##  std::ranges::owning_view::end

constexpr [ranges::sentinel_t](iterator_t.html)<R> end(); |  (1)  |  (since C++20)  
---|---|---  
constexpr auto end() const requires [ranges::range](range.html)<const R>; |  (2)  |  (since C++20)  
| |   
  
Returns [ranges::end](end.html)(`_[r_](owning_view.html#r)_` ﻿). 

##  std::ranges::owning_view::empty

constexpr bool empty() requires requires { [ranges::empty](empty.html)(r_); }; |  (1)  |  (since C++20)  
---|---|---  
constexpr bool empty() const requires requires { [ranges::empty](empty.html)(r_); }; |  (2)  |  (since C++20)  
| |   
  
Returns [ranges::empty](empty.html)(`_[r_](owning_view.html#r)_` ﻿). 

##  std::ranges::owning_view::size

constexpr auto size() requires [ranges::sized_range](sized_range.html)<R>; |  (1)  |  (since C++20)  
---|---|---  
constexpr auto size() const requires [ranges::sized_range](sized_range.html)<const R>; |  (2)  |  (since C++20)  
| |   
  
Returns [ranges::size](size.html)(`_[r_](owning_view.html#r)_` ﻿). 

##  std::ranges::owning_view::reserve_hint

constexpr auto reserve_hint()  
requires ranges::approximately_sized_range<R>; |  (1)  |  (since C++26)  
---|---|---  
constexpr auto reserve_hint() const  
requires ranges::approximately_sized_range<const R>; |  (2)  |  (since C++26)  
| |   
  
Returns ranges::reserve_hint(`_[r_](owning_view.html#r)_` ﻿). 

##  std::ranges::owning_view::data

constexpr auto data() requires [ranges::contiguous_range](contiguous_range.html)<R>; |  (1)  |  (since C++20)  
---|---|---  
constexpr auto data() const requires [ranges::contiguous_range](contiguous_range.html)<const R>; |  (2)  |  (since C++20)  
| |   
  
Returns [ranges::data](data.html)(`_[r_](owning_view.html#r)_` ﻿). 

### Helper templates

template< class T >  
constexpr bool enable_borrowed_range<std::ranges::owning_view<T>> =  
[ranges::enable_borrowed_range](borrowed_range.html)<T>; |  |  (since C++20)  
---|---|---  
| |   
  
This specialization of [ranges::enable_borrowed_range](borrowed_range.html) makes `owning_view` satisfy [`borrowed_range`](borrowed_range.html "cpp/ranges/borrowed range") when the underlying range satisfies it. 

### Notes

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_ranges_reserve_hint`](../experimental/feature_test.html#cpp_lib_ranges_reserve_hint "cpp/feature test") | [`202502L`](../compiler_support/26.html#cpp_lib_ranges_reserve_hint_202502L "cpp/compiler support/26") | (C++26) | ranges::approximately_sized_range and `[reserve_hint](owning_view.html#reserve_hint)`  
  
### Example

Run this code
    
    
    #include <cassert>
    #include <iostream>
    #include <ranges>
    #include <string>
     
    int main()
    {
        using namespace std::literals;
        std::ranges::owning_view ov{"cosmos"s}; // the deduced type of R is std::string;
                                                // “ov” is the only owner of this string
        [assert](../error/assert.html)(
            ov.empty() == false &&
            ov.size() == 6 &&
            ov.size() == ov.base().size() &&
            ov.front() == 'c' &&
            ov.front() == *ov.begin() &&
            ov.back() == 's' &&
            ov.back() == *(ov.end() - 1) &&
            ov.data() == ov.base()
        );
     
        [std::cout](../io/cout.html) << "sizeof(ov): " << sizeof ov << '\n' // typically equal to sizeof(R)
                  << "range-for: ";
        for (const char ch : ov)
            [std::cout](../io/cout.html) << ch;
        [std::cout](../io/cout.html) << '\n';
     
        std::ranges::owning_view<[std::string](../string/basic_string.html)> ov2;
        [assert](../error/assert.html)(ov2.empty());
    //  ov2 = ov; // compile-time error: copy assignment operator is deleted
        ov2 = std::move(ov); // OK
        [assert](../error/assert.html)(ov2.size() == 6);
    }

Possible output: 
    
    
    sizeof(ov): 32
    range-for: cosmos

### See also

[ ranges::ref_view](ref_view.html "cpp/ranges/ref view")(C++20) |  a [`view`](view.html "cpp/ranges/view") of the elements of some other [`range`](range.html "cpp/ranges/range")   
(class template)   
---|---  
[ views::all_tviews::all](all_view.html "cpp/ranges/all view")(C++20) |  a [`view`](view.html "cpp/ranges/view") that includes all elements of a [`range`](range.html "cpp/ranges/range")  
(alias template) (range adaptor object)
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
