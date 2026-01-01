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
[keys_viewviews::keys](keys_view.html "cpp/ranges/keys view")  
[values_viewviews::values](values_view.html "cpp/ranges/values view")  
[enumerate_viewviews::enumerate](enumerate_view.html "cpp/ranges/enumerate view")(C++23)(C++23)  
[zip_viewviews::zip](zip_view.html "cpp/ranges/zip view")(C++23)(C++23)  
**zip_transform_view views::zip_transform**(C++23)(C++23)` `  
  
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

**`std::ranges::zip_transform_view`**

[Member functions](zip_transform_view.html#Member_functions "cpp/ranges/zip transform view")  
---  
[zip_transform_view::zip_transform_view](zip_transform_view/zip_transform_view.html "cpp/ranges/zip transform view/zip transform view")  
[zip_transform_view::begin](zip_transform_view/begin.html "cpp/ranges/zip transform view/begin")  
[zip_transform_view::end](zip_transform_view/end.html "cpp/ranges/zip transform view/end")  
[zip_transform_view::size](zip_transform_view/size.html "cpp/ranges/zip transform view/size")  
[Deduction guides](zip_transform_view/deduction_guides.html "cpp/ranges/zip transform view/deduction guides")  
[Iterator](zip_transform_view/iterator.html "cpp/ranges/zip transform view/iterator")  
Member functions  
[zip_transform_view::_iterator_ ::_iterator_](zip_transform_view/iterator/iterator.html "cpp/ranges/zip transform view/iterator/iterator")  
[zip_transform_view::_iterator_ ::operator*](zip_transform_view/iterator/operator*.html "cpp/ranges/zip transform view/iterator/operator*")  
[zip_transform_view::_iterator_ ::operator[]](zip_transform_view/iterator/operator_at.html "cpp/ranges/zip transform view/iterator/operator at")  
[zip_transform_view::_iterator_ ::operator++  
zip_transform_view::_iterator_ ::operator++(int)  
zip_transform_view::_iterator_ ::operator--  
zip_transform_view::_iterator_ ::operator--(int)  
zip_transform_view::_iterator_ ::operator+=  
zip_transform_view::_iterator_ ::operator-=](zip_transform_view/iterator/operator_arith.html "cpp/ranges/zip transform view/iterator/operator arith")  
Non-member functions  
[operator==(zip_transform_view::_iterator_)  
operator<=>(zip_transform_view::_iterator_)](zip_transform_view/iterator/operator_cmp.html "cpp/ranges/zip transform view/iterator/operator cmp")  
[operator+(zip_transform_view::_iterator_)  
operator-(zip_transform_view::_iterator_)](zip_transform_view/iterator/operator_arith2.html "cpp/ranges/zip transform view/iterator/operator arith2")  
[Sentinel](zip_transform_view/sentinel.html "cpp/ranges/zip transform view/sentinel")  
Member functions  
[zip_transform_view::_sentinel_ ::_sentinel_](zip_transform_view/sentinel/sentinel.html "cpp/ranges/zip transform view/sentinel/sentinel")  
Non-member functions  
[operator==(zip_transform_view::_sentinel_)](zip_transform_view/sentinel/operator_cmp.html "cpp/ranges/zip transform view/sentinel/operator cmp")  
[operator-(zip_transform_view::_sentinel_)](zip_transform_view/sentinel/operator-.html "cpp/ranges/zip transform view/sentinel/operator-")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/zip_transform_view/navbar_content&action=edit)

Defined in header `[<ranges>](../header/ranges.html "cpp/header/ranges")` |  |   
---|---|---  
template< [std::move_constructible](../concepts/move_constructible.html) F, [ranges::input_range](input_range.html)... Views >  
requires ([ranges::view](view.html)<Views> && ...) && (sizeof...(Views) > 0) &&  
[std::is_object_v](../types/is_object.html)<F> && [std::regular_invocable](../concepts/invocable.html)<  
F&, [ranges::range_reference_t](range_reference_t.html)<Views>...> &&  
/*can-reference*/<[std::invoke_result_t](../types/result_of.html)<  
F&, [ranges::range_reference_t](range_reference_t.html)<Views>...>>  
class zip_transform_view  
: public [ranges::view_interface](view_interface.html)<zip_transform_view<F, Views...>> |  (1)  |  (since C++23)  
namespace views {  
inline constexpr /*unspecified*/ zip_transform = /*unspecified*/;  
} |  (2)  |  (since C++23)  
Call signature |  |   
template< class F, [ranges::viewable_range](viewable_range.html)... Rs >  
requires /* see below */  
constexpr auto zip_transform( F&& f, Rs&&... rs ); |  |  (since C++23)  
| |   
  
1) `zip_transform_view` is a range adaptor that takes an invocable object and one or more [`view`s](view.html "cpp/ranges/view"), and produces a [`view`](view.html "cpp/ranges/view") whose `_i_` _th_ element is the result of applying the invocable object to the `_i_` _th_ elements of all views.  
A type `T` models the exposition-only concept /*can-reference*/ if and only if `T&` is a valid type.

2) `views::zip_transform` is a customization point object. 

When calling with one argument f, let `FD` be [std::decay_t](../types/decay.html)<decltype(f)>, if: 

  * `FD` models [`copy_constructible`](../concepts/copy_constructible.html "cpp/concepts/copy constructible"), 
  * FD& models [`regular_invocable`](../concepts/invocable.html "cpp/concepts/invocable"), and 
  * [std::invoke_result_t](../types/result_of.html)<FD&> is an object type, 



then views::zip_transform(f) is [expression-equivalent](../language/expressions.html#Expression-equivalence "cpp/language/expressions") to ((void)f, auto([views::empty](empty_view.html)<[std::decay_t](../types/decay.html)<[std::invoke_result_t](../types/result_of.html)<FD&>>>)). Otherwise, the call to `views::zip_transform` is ill-formed. 

When calling with more than one arguments f and rs..., views::zip_transform(f, rs...) is [expression-equivalent](../language/expressions.html#Expression-equivalence "cpp/language/expressions") to ranges::zip_transform_view(f, rs...).

`zip_transform_view` models the concepts [`random_access_range`](random_access_range.html "cpp/ranges/random access range"), [`bidirectional_range`](bidirectional_range.html "cpp/ranges/bidirectional range"), [`forward_range`](forward_range.html "cpp/ranges/forward range"), [`input_range`](input_range.html "cpp/ranges/input range"), [`common_range`](common_range.html "cpp/ranges/common range"), and [`sized_range`](sized_range.html "cpp/ranges/sized range") when the underlying [ranges::zip_view](zip_view.html)<Views...> models respective concepts. 

## Contents

  * [1 Customization point objects](zip_transform_view.html#Customization_point_objects)
  * [2 Member functions](zip_transform_view.html#Member_functions)
    * [2.1 Inherited from std::ranges::view_interface](zip_transform_view.html#Inherited_from_std::ranges::view_interface)
  * [3 Deduction guides](zip_transform_view.html#Deduction_guides)
  * [4 Member types](zip_transform_view.html#Member_types)
  * [5 Data members](zip_transform_view.html#Data_members)
  * [6 Nested classes](zip_transform_view.html#Nested_classes)
  * [7 Notes](zip_transform_view.html#Notes)
  * [8 Example](zip_transform_view.html#Example)
  * [9 See also](zip_transform_view.html#See_also)

  
---  
  
###  Customization point objects

The name `views::zip_transform` denotes a _customization point object_ , which is a const [function object](../named_req/FunctionObject.html "cpp/named req/FunctionObject") of a [literal](../named_req/LiteralType.html "cpp/named req/LiteralType") [`semiregular`](../concepts/semiregular.html "cpp/concepts/semiregular") class type. See [CustomizationPointObject](../named_req/CustomizationPointObject.html "cpp/named req/CustomizationPointObject") for details. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/zip_transform_view&action=edit&section=1 "Edit section: Member functions")] Member functions

[ (constructor)](zip_transform_view/zip_transform_view.html "cpp/ranges/zip transform view/zip transform view") |  constructs a `zip_transform_view`   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/adaptor/dsc_constructor&action=edit)  
---|---  
[ begin](zip_transform_view/begin.html "cpp/ranges/zip transform view/begin") |  returns an iterator to the beginning   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/adaptor/dsc_begin&action=edit)  
[ end](zip_transform_view/end.html "cpp/ranges/zip transform view/end") |  returns an iterator or a sentinel to the end   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/adaptor/dsc_end&action=edit)  
[ size](zip_transform_view/size.html "cpp/ranges/zip transform view/size") |  returns the number of elements, provided only if each underlying (adapted) range satisfies [`sized_range`](sized_range.html "cpp/ranges/sized range")   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/adaptor/dsc_size&action=edit)  
  
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
[ operator[]](view_interface/operator_at.html "cpp/ranges/view interface/operator at") |  returns the `n`th element in the derived view, provided only if it satisfies [`random_access_range`](random_access_range.html "cpp/ranges/random access range")   
(public member function of `std::ranges::view_interface<D>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/view_interface/dsc_operator_at&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/zip_transform_view&action=edit&section=2 "Edit section: Deduction guides")] [Deduction guides](zip_transform_view/deduction_guides.html "cpp/ranges/zip transform view/deduction guides")

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/zip_transform_view&action=edit&section=3 "Edit section: Member types")] Member types

Member type  |  Definition   
---|---  
`_InnerView_` (private) |  [ranges::zip_view](zip_view.html)<Views...>.  
(exposition-only member type*)  
`_ziperator_` (private) | 

  * [ranges::iterator_t](iterator_t.html)<const InnerView> if Const is true, otherwise 
  * [ranges::iterator_t](iterator_t.html)<InnerView>.  
(exposition-only member type*)

  
`_zentinel_` (private) | 

  * [ranges::sentinel_t](iterator_t.html)<const InnerView> if Const is true, otherwise 
  * [ranges::sentinel_t](iterator_t.html)<InnerView>.  
(exposition-only member type*)

  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/zip_transform_view&action=edit&section=4 "Edit section: Data members")] Data members

Member object  |  Definition   
---|---  
`_zip__` (private) |  An underlying view object of type `_InnerView_`  
(exposition-only member object*)  
`_fun__` (private) |  A wrapped invocable object of type [`_movable-box_`](copyable_wrapper.html "cpp/ranges/copyable wrapper")`<F>`  
(exposition-only member object*)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/zip_transform_view&action=edit&section=5 "Edit section: Nested classes")] Nested classes

[_iterator_](zip_transform_view/iterator.html "cpp/ranges/zip transform view/iterator") |  the iterator type  
(exposition-only member class template*)  
---|---  
[_sentinel_](zip_transform_view/sentinel.html "cpp/ranges/zip transform view/sentinel") |  the sentinel type used when the underlying `zip_view` is not a [`common_range`](common_range.html "cpp/ranges/common range")  
(exposition-only member class template*)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/zip_transform_view&action=edit&section=6 "Edit section: Notes")] Notes

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_ranges_zip`](../experimental/feature_test.html#cpp_lib_ranges_zip "cpp/feature test") | [`202110L`](../compiler_support/23.html#cpp_lib_ranges_zip_202110L "cpp/compiler support/23") | (C++23) | [ranges::zip_view](zip_view.html),  
`std::ranges::zip_transform_view`,  
[ranges::adjacent_view](adjacent_view.html),  
[ranges::adjacent_transform_view](adjacent_transform_view.html)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/zip_transform_view&action=edit&section=7 "Edit section: Example")] Example

Run this code
    
    
    #include <array>
    #include <iostream>
    #include <list>
    #include <ranges>
    #include <vector>
     
    void print(auto const rem, auto const& r)
    {
        [std::cout](../io/cout.html) << rem << '{'; 
        for (char o[]{0,' ',0}; auto const& e : r)
            [std::cout](../io/cout.html) << o << e, *o = ',';
        [std::cout](../io/cout.html) << "}\n";
    }
     
    int main()
    {
        auto v1 = [std::vector](../container/vector.html)<float>{1, 2, 3};
        auto v2 = [std::list](../container/list.html)<short>{1, 2, 3, 4};
        auto v3 = [std::to_array](../container/array/to_array.html)({1, 2, 3, 4, 5});
     
        auto add = [](auto a, auto b, auto c) { return a + b + c; };
     
        auto sum = std::views::zip_transform(add, v1, v2, v3);
     
        print("v1:  ", v1);
        print("v2:  ", v2);
        print("v3:  ", v3);
        print("sum: ", sum);
    }

Output: 
    
    
    v1:  {1, 2, 3}
    v2:  {1, 2, 3, 4}
    v3:  {1, 2, 3, 4, 5}
    sum: {3, 6, 9}

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/zip_transform_view&action=edit&section=8 "Edit section: See also")] See also

[ ranges::zip_viewviews::zip](zip_view.html "cpp/ranges/zip view")(C++23) |  a [`view`](view.html "cpp/ranges/view") consisting of tuples of references to corresponding elements of the adapted views  
(class template) (customization point object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_zip_view&action=edit)  
---|---  
[ ranges::transform_viewviews::transform](transform_view.html "cpp/ranges/transform view")(C++20) |  a [`view`](view.html "cpp/ranges/view") of a sequence that applies a transformation function to each element  
(class template) (range adaptor object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_transform_view&action=edit)  
[ ranges::elements_viewviews::elements](elements_view.html "cpp/ranges/elements view")(C++20) |  takes a [`view`](view.html "cpp/ranges/view") consisting of [`_tuple-like_`](../utility/tuple/tuple-like.html "cpp/utility/tuple/tuple-like") values and a number N and produces a [`view`](view.html "cpp/ranges/view") of Nth element of each tuple  
(class template) (range adaptor object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_elements_view&action=edit)
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
