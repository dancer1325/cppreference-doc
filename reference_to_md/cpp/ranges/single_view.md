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
  
| **single_view views::single**` `  
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
  
  
  


Defined in header `[<ranges>](../header/ranges.html "cpp/header/ranges")` |  |   
---|---|---  
| (1) |   
template< [std::copy_constructible](../concepts/copy_constructible.html) T >  
requires [std::is_object_v](../types/is_object.html)<T>  
class single_view  
: public [ranges::view_interface](view_interface.html)<single_view<T>> |  | (since C++20)   
(until C++23)  
template< [std::move_constructible](../concepts/move_constructible.html) T >  
requires [std::is_object_v](../types/is_object.html)<T>  
class single_view  
: public [ranges::view_interface](view_interface.html)<single_view<T>> |  |  (since C++23)  
namespace views {  
inline constexpr /* unspecified */ single = /* unspecified */;  
} |  (2)  |  (since C++20)  
Call signature |  |   
template< class T >  
requires /* see below */  
constexpr /* see below */ single( T&& t ); |  |  (since C++20)  
| |   
  
1) Produces a [`view`](view.html "cpp/ranges/view") that contains exactly one element of a specified value.

2) The expression views::single(e) is [expression-equivalent](../language/expressions.html#Expression-equivalence "cpp/language/expressions") to single_view<[std::decay_t](../types/decay.html)<decltype((e))>>(e) for any suitable subexpression e.

The lifetime of the element is bound to the parent `single_view`. Copying `single_view` makes a copy of the element. 

## Contents

  * [1 Customization point objects](single_view.html#Customization_point_objects)
  * [2 Data members](single_view.html#Data_members)
  * [3 Member functions](single_view.html#Member_functions)
    * [3.1 Inherited from std::ranges::view_interface](single_view.html#Inherited_from_std::ranges::view_interface)
  * [4 std::ranges::single_view::single_view](single_view.html#std::ranges::single_view::single_view)
  * [5 std::ranges::single_view::begin](single_view.html#std::ranges::single_view::begin)
  * [6 std::ranges::single_view::end](single_view.html#std::ranges::single_view::end)
  * [7 std::ranges::single_view::empty](single_view.html#std::ranges::single_view::empty)
  * [8 std::ranges::single_view::size](single_view.html#std::ranges::single_view::size)
  * [9 std::ranges::single_view::data](single_view.html#std::ranges::single_view::data)
    * [9.1 Deduction guides](single_view.html#Deduction_guides)
    * [9.2 Notes](single_view.html#Notes)
    * [9.3 Example](single_view.html#Example)
    * [9.4 Defect reports](single_view.html#Defect_reports)
    * [9.5 See also](single_view.html#See_also)

  
---  
  
###  Customization point objects

The name `views::single` denotes a _customization point object_ , which is a const [function object](../named_req/FunctionObject.html "cpp/named req/FunctionObject") of a [literal](../named_req/LiteralType.html "cpp/named req/LiteralType") [`semiregular`](../concepts/semiregular.html "cpp/concepts/semiregular") class type. See [CustomizationPointObject](../named_req/CustomizationPointObject.html "cpp/named req/CustomizationPointObject") for details. 

### Data members

Member  |  Definition   
---|---  
[`_copyable-box_`](copyable_wrapper.html "cpp/ranges/copyable wrapper") ﻿`<T>` `_value__` (until C++23) |  the single element of the view  
(exposition-only member object*)  
[`_movable-box_`](copyable_wrapper.html "cpp/ranges/copyable wrapper") ﻿`<T>` `_value__` (since C++23) |  the single element of the view  
(exposition-only member object*)  
  
### Member functions

[ (constructor)](single_view.html#ctor "cpp/ranges/single view") |  constructs a `single_view`   
(public member function)  
---|---  
[ begin](single_view.html#begin "cpp/ranges/single view") |  returns a pointer to the element   
(public member function)  
[ end](single_view.html#end "cpp/ranges/single view") |  returns a pointer past the element   
(public member function)  
[ empty](single_view.html#empty "cpp/ranges/single view")[static] |  returns false   
(public static member function)  
[ size](single_view.html#size "cpp/ranges/single view")[static] |  returns 1   
(public static member function)  
[ data](single_view.html#data "cpp/ranges/single view") |  returns a pointer to the element   
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
  
##  std::ranges::single_view::single_view

single_view() requires [std::default_initializable](../concepts/default_initializable.html)<T> = default; |  (1)  |  (since C++20)  
---|---|---  
| (2) |   
constexpr explicit single_view( const T& t ); |  | (since C++20)   
(until C++23)  
constexpr explicit single_view( const T& t )  
requires [std::copy_constructible](../concepts/copy_constructible.html)<T>; |  |  (since C++23)  
constexpr explicit single_view( T&& t ); |  (3)  |  (since C++20)  
template< class... Args >  
requires [std::constructible_from](../concepts/constructible_from.html)<T, Args...>  
constexpr explicit single_view( [std::in_place_t](../utility/in_place.html), Args&&... args ); |  (4)  |  (since C++20)  
| |   
  
Constructs a `single_view`. 

1) Default initializes `_value__`, which value-initializes its contained value.

2) Initializes `_value__` with t.

3) Initializes `_value__` with std::move(t).

4) Initializes `_value__` as if by `_value__`{[std::in_place](../utility/in_place.html), [std::forward](../utility/forward.html)<Args>(args)...}.

##  std::ranges::single_view::begin

constexpr T* begin() noexcept;  
constexpr const T* begin() const noexcept; |  |  (since C++20)  
---|---|---  
| |   
  
Equivalent to return data();. 

##  std::ranges::single_view::end

constexpr T* end() noexcept;  
constexpr const T* end() const noexcept; |  |  (since C++20)  
---|---|---  
| |   
  
Equivalent to return data() + 1;. 

##  std::ranges::single_view::empty

static constexpr bool empty() noexcept; |  |  (since C++20)  
---|---|---  
| |   
  
Equivalent to return false;. 

##  std::ranges::single_view::size

static constexpr [std::size_t](../types/size_t.html) size() noexcept; |  |  (since C++20)  
---|---|---  
| |   
  
Equivalent to return 1;. 

Makes `single_view` model /*tiny-range*/ as required by [`split_view`](split_view.html "cpp/ranges/split view"). 

##  std::ranges::single_view::data

constexpr T* data() noexcept;  
constexpr const T* data() const noexcept; |  |  (since C++20)  
---|---|---  
| |   
  
Returns a pointer to the contained value of `_value__`. The behavior is undefined if `_value__` does not contains a value. 

### Deduction guides

template< class T >  
single_view( T ) -> single_view<T>; |  |  (since C++20)  
---|---|---  
| |   
  
### Notes

For a [`single_view`](single_view.html#top), the inherited `empty` member function always returns false, and the inherited operator bool conversion function always returns true. 

### Example

Run this code
    
    
    #include <iomanip>
    #include <iostream>
    #include <ranges>
    #include <string>
    #include <tuple>
     
    int main()
    {
        constexpr std::ranges::single_view sv1{3.1415}; // uses (const T&) constructor
        static_assert(sv1);
        static_assert(not sv1.empty());
     
        [std::cout](../io/cout.html) << "1) *sv1.data(): " << *sv1.data() << '\n'
                  << "2) *sv1.begin(): " << *sv1.begin() << '\n'
                  << "3)  sv1.size(): " << sv1.size() << '\n'
                  << "4)  distance: " << [std::distance](../iterator/distance.html)(sv1.begin(), sv1.end()) << '\n';
     
        [std::string](../string/basic_string.html) str{"C++20"};
        [std::cout](../io/cout.html) << "5)  str = " << [std::quoted](../io/manip/quoted.html)(str) << '\n';
        std::ranges::single_view sv2{std::move(str)}; // uses (T&&) constructor
        [std::cout](../io/cout.html) << "6) *sv2.data(): " << [std::quoted](../io/manip/quoted.html)(*sv2.data()) << '\n'
                  << "7)  str = " << [std::quoted](../io/manip/quoted.html)(str) << '\n';
     
        std::ranges::single_view<[std::tuple](../utility/tuple.html)<int, double, [std::string](../string/basic_string.html)>>
            sv3{[std::in_place](../utility/in_place.html), 42, 3.14, "😄"}; // uses (std::in_place_t, Args&&... args)
     
        [std::cout](../io/cout.html) << "8)  sv3 holds a tuple: { "
                  << std::get<0>(sv3[0]) << ", "
                  << std::get<1>(sv3[0]) << ", "
                  << std::get<2>(sv3[0]) << " }\n";
    }

Output: 
    
    
    1) *sv1.data(): 3.1415
    2) *sv1.begin(): 3.1415
    3)  sv1.size(): 1
    4)  distance: 1
    5)  str = "C++20"
    6) *sv2.data(): "C++20"
    7)  str = ""
    8)  sv3 holds a tuple: { 42, 3.14, 😄 }

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3428](https://cplusplus.github.io/LWG/issue3428) | C++20  | `single_view` was convertible from [std::in_place_t](../utility/in_place.html "cpp/utility/in place") | the constructor is made explicit   
[LWG 4035](https://cplusplus.github.io/LWG/issue4035) | C++20  | `single_view` did not provide the member function `empty()` | provides `empty()`  
[P2367R0](https://wg21.link/P2367R0) | C++20  | deduction guides for `single_view` failed to decay the argument;  
`views::single` copied but not wrapped a `single_view` | a decaying guide provided;  
made always wrapping   
  
### See also

[ optional](../utility/optional.html "cpp/utility/optional")(C++17) |  a wrapper that may or may not hold an object   
(class template)   
---|---  
[ ranges::empty_viewviews::empty](empty_view.html "cpp/ranges/empty view")(C++20) |  an empty [`view`](view.html "cpp/ranges/view") with no elements  
(class template) (variable template)  
[ ranges::split_viewviews::split](split_view.html "cpp/ranges/split view")(C++20) |  a [`view`](view.html "cpp/ranges/view") over the subranges obtained from splitting another [`view`](view.html "cpp/ranges/view") using a delimiter  
(class template) (range adaptor object)
