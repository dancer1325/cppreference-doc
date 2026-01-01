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
**elements_view views::elements**  
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

**`std::ranges::elements_view`**

[Member functions](elements_view.html#Member_functions "cpp/ranges/elements view")  
---  
[elements_view::elements_view](elements_view/elements_view.html "cpp/ranges/elements view/elements view")  
[elements_view::base](elements_view/base.html "cpp/ranges/elements view/base")  
[elements_view::begin](elements_view/begin.html "cpp/ranges/elements view/begin")  
[elements_view::end](elements_view/end.html "cpp/ranges/elements view/end")  
[elements_view::size](elements_view/size.html "cpp/ranges/elements view/size")  
[elements_view::reserve_hint](elements_view/reserve_hint.html "cpp/ranges/elements view/reserve hint")(C++26)  
[Nested classes](elements_view.html#Nested_classes "cpp/ranges/elements view")  
[Iterator](elements_view/iterator.html "cpp/ranges/elements view/iterator")  
[elements_view::_iterator_ ::_iterator_](elements_view/iterator/iterator.html "cpp/ranges/elements view/iterator/iterator")  
[elements_view::_iterator_ ::base](elements_view/iterator/base.html "cpp/ranges/elements view/iterator/base")  
[elements_view::_iterator_ ::operator*](elements_view/iterator/operator*.html "cpp/ranges/elements view/iterator/operator*")  
[elements_view::_iterator_ ::operator[]](elements_view/iterator/operator_at.html "cpp/ranges/elements view/iterator/operator at")  
[elements_view::_iterator_ ::operator++  
elements_view::_iterator_ ::operator++(int)  
elements_view::_iterator_ ::operator--  
elements_view::_iterator_ ::operator--(int)  
elements_view::_iterator_ ::operator+=  
elements_view::_iterator_ ::operator-=](elements_view/iterator/operator_arith.html "cpp/ranges/elements view/iterator/operator arith")  
[operator==(elements_view::_iterator_)  
operator<(elements_view::_iterator_)  
operator>(elements_view::_iterator_)  
operator<=(elements_view::_iterator_)  
operator>=(elements_view::_iterator_)  
operator<=>(elements_view::_iterator_)](elements_view/iterator/operator_cmp.html "cpp/ranges/elements view/iterator/operator cmp")  
[operator+(elements_view::_iterator_)  
operator-(elements_view::_iterator_)](elements_view/iterator/operator_arith2.html "cpp/ranges/elements view/iterator/operator arith2")  
[Sentinel](elements_view/sentinel.html "cpp/ranges/elements view/sentinel")  
[elements_view::_sentinel_ ::_sentinel_](elements_view/sentinel/sentinel.html "cpp/ranges/elements view/sentinel/sentinel")  
[elements_view::_sentinel_ ::base](elements_view/sentinel/base.html "cpp/ranges/elements view/sentinel/base")  
[operator==(elements_view::_iterator_ ,elements_view::_sentinel_)](elements_view/sentinel/operator_cmp.html "cpp/ranges/elements view/sentinel/operator cmp")  
[operator-(elements_view::_iterator_ ,elements_view::_sentinel_)](elements_view/sentinel/operator-.html "cpp/ranges/elements view/sentinel/operator-")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/elements_view/navbar_content&action=edit)

Defined in header `[<ranges>](../header/ranges.html "cpp/header/ranges")` |  |   
---|---|---  
template< [ranges::input_range](input_range.html) V, [std::size_t](../types/size_t.html) N >  
requires [ranges::view](view.html)<V> &&  
/*has-tuple-element*/<[ranges::range_value_t](range_size_t.html)<V>, N> &&  
/*has-tuple-element*/<[std::remove_reference_t](../types/remove_reference.html)<  
[ranges::range_reference_t](range_reference_t.html)<V>>, N> &&  
/*returnable-element*/<[ranges::range_reference_t](range_reference_t.html)<V>, N>  
class elements_view  
: public [ranges::view_interface](view_interface.html)<elements_view<V, N>>; |  (1)  |  (since C++20)  
namespace views {  
template< [std::size_t](../types/size_t.html) N >  
constexpr /* unspecified */ elements = /* unspecified */;  
} |  (2)  |  (since C++20)  
Call signature |  |   
template< [ranges::viewable_range](viewable_range.html) R >  
requires /* see below */  
constexpr [ranges::view](view.html) auto elements<N>( R&& r ); |  |  (since C++20)  
Helper concepts |  |   
| (3) |   
template< class T, [std::size_t](../types/size_t.html) N >  
concept /*has-tuple-element*/ =  
requires(T t) {  
typename [std::tuple_size](../utility/tuple_size.html)<T>::type;  
requires N < [std::tuple_size_v](../utility/tuple_size.html)<T>;  
typename [std::tuple_element_t](../utility/tuple_element.html)<N, T>;  
{ std::get<N>(t) } -> [std::convertible_to](../concepts/convertible_to.html)<  
const [std::tuple_element_t](../utility/tuple_element.html)<N, T>&>;  
}; |  | (until C++23)   
(exposition only*)  
template< class T, [std::size_t](../types/size_t.html) N >  
concept /*has-tuple-element*/ =  
/*tuple-like*/<T> && N < [std::tuple_size_v](../utility/tuple_size.html)<T> |  |  (since C++23)   
(exposition only*)  
template< class T, [std::size_t](../types/size_t.html) N >  
concept returnable-element =  
[std::is_reference_v](../types/is_reference.html)<T> || [std::move_constructible](../concepts/move_constructible.html)<  
[std::tuple_element_t](../utility/tuple_element.html)<N, T>>; |  (4)  |  (exposition only*)  
| |   
  
1) Accepts a [`view`](view.html "cpp/ranges/view") of tuple-like values, and issues a view with a value type of the `N`th element of the adapted view's value-type.

2) Every specialization of `views::elements` is a [RangeAdaptorObject](../named_req/RangeAdaptorObject.html "cpp/named req/RangeAdaptorObject"). The expression views::elements<M>(e) is [expression-equivalent](../language/expressions.html#Expression-equivalence "cpp/language/expressions") to elements_view<[views::all_t](all_view.html)<decltype((e))>, M>{e} for any suitable subexpression e and constant expression M.

3) Ensures that the elements of the underlying view are tuple-like values, see [`_tuple-like_`](../utility/tuple/tuple-like.html "cpp/utility/tuple/tuple-like")(since C++23).

4) Ensures that dangling references cannot be returned.

`elements_view` models the concepts [`random_access_range`](random_access_range.html "cpp/ranges/random access range"), [`bidirectional_range`](bidirectional_range.html "cpp/ranges/bidirectional range"), [`forward_range`](forward_range.html "cpp/ranges/forward range"), [`input_range`](input_range.html "cpp/ranges/input range"), [`common_range`](common_range.html "cpp/ranges/common range"), and [`sized_range`](sized_range.html "cpp/ranges/sized range") when the underlying view `V` models respective concepts. 

## Contents

  * [1 Data members](elements_view.html#Data_members)
  * [2 Member functions](elements_view.html#Member_functions)
    * [2.1 Inherited from std::ranges::view_interface](elements_view.html#Inherited_from_std::ranges::view_interface)
  * [3 Nested classes](elements_view.html#Nested_classes)
  * [4 Helper templates](elements_view.html#Helper_templates)
  * [5 Example](elements_view.html#Example)
  * [6 Defect reports](elements_view.html#Defect_reports)
  * [7 See also](elements_view.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/elements_view&action=edit&section=1 "Edit section: Data members")] Data members

Member  |  Description   
---|---  
`V` `_base__` |  the underlying view  
(exposition-only member object*)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/elements_view&action=edit&section=2 "Edit section: Member functions")] Member functions

[ (constructor)](elements_view/elements_view.html "cpp/ranges/elements view/elements view") |  constructs a `elements_view`   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/adaptor/dsc_constructor&action=edit)  
---|---  
[ base](elements_view/base.html "cpp/ranges/elements view/base") |  returns a copy of the underlying (adapted) view   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/adaptor/dsc_base&action=edit)  
[ begin](elements_view/begin.html "cpp/ranges/elements view/begin") |  returns an iterator to the beginning   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/adaptor/dsc_begin&action=edit)  
[ end](elements_view/end.html "cpp/ranges/elements view/end") |  returns an iterator or a sentinel to the end   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/adaptor/dsc_end&action=edit)  
[ size](elements_view/size.html "cpp/ranges/elements view/size") |  returns the number of elements, provided only if the underlying (adapted) range satisfies [`sized_range`](sized_range.html "cpp/ranges/sized range")   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/adaptor/dsc_size&action=edit)  
[ reserve_hint](elements_view/reserve_hint.html "cpp/ranges/elements view/reserve hint")(C++26) |  returns the approximate size of the resulting [`approximately_sized_range`](approximately_sized_range.html "cpp/ranges/approximately sized range")   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/adaptor/dsc_reserve_hint&action=edit)  
  
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
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/elements_view&action=edit&section=3 "Edit section: Nested classes")] Nested classes

[_iterator_](elements_view/iterator.html "cpp/ranges/elements view/iterator") |  the iterator type  
(exposition-only member class template*)  
---|---  
[_sentinel_](elements_view/sentinel.html "cpp/ranges/elements view/sentinel") |  the sentinel type  
(exposition-only member class template*)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/elements_view&action=edit&section=4 "Edit section: Helper templates")] Helper templates

template<class T, [std::size_t](../types/size_t.html) N>  
constexpr bool enable_borrowed_range<std::ranges::elements_view<T, N>> =  
[ranges::enable_borrowed_range](borrowed_range.html)<T>; |  |  (since C++20)  
---|---|---  
| |   
  
This specialization of [ranges::enable_borrowed_range](borrowed_range.html "cpp/ranges/borrowed range") makes `elements_view` satisfy [`borrowed_range`](borrowed_range.html "cpp/ranges/borrowed range") when the underlying view satisfies it. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/elements_view&action=edit&section=5 "Edit section: Example")] Example

Run this code
    
    
    #include <iostream>
    #include <ranges>
    #include <string>
    #include <tuple>
    #include <vector>
     
    int main()
    {
        const [std::vector](../container/vector.html)<[std::tuple](../utility/tuple.html)<int, char, [std::string](../string/basic_string.html)>> vt
        {
            {1, 'A', "α"},
            {2, 'B', "β"},
            {3, 'C', "γ"},
            {4, 'D', "δ"},
            {5, 'E', "ε"},
        };
     
        for (int const e : std::views::elements<0>(vt))
            [std::cout](../io/cout.html) << e << ' ';
        [std::cout](../io/cout.html) << '\n';
     
        for (char const e : vt | std::views::elements<1>)
            [std::cout](../io/cout.html) << e << ' ';
        [std::cout](../io/cout.html) << '\n';
     
        for ([std::string](../string/basic_string.html) const& e : std::views::elements<2>(vt))
            [std::cout](../io/cout.html) << e << ' ';
        [std::cout](../io/cout.html) << '\n';
    }

Output: 
    
    
    1 2 3 4 5
    A B C D E
    α β γ δ ε

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/elements_view&action=edit&section=6 "Edit section: Defect reports")] Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3494](https://cplusplus.github.io/LWG/issue3494) | C++20  | `elements_view` was never a `borrowed_range` | it is a `borrowed_range`  
if its underlying view is   
[LWG 3502](https://cplusplus.github.io/LWG/issue3502) | C++20  | dangling reference could be obtained from `elements_view` | such usage is forbidden   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/ranges/elements_view&action=edit&section=7 "Edit section: See also")] See also

[ ranges::keys_viewviews::keys](keys_view.html "cpp/ranges/keys view")(C++20) |  takes a [`view`](view.html "cpp/ranges/view") consisting of pair-like values and produces a [`view`](view.html "cpp/ranges/view") of the first elements of each pair  
(class template) (range adaptor object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_keys_view&action=edit)  
---|---  
[ ranges::values_viewviews::values](values_view.html "cpp/ranges/values view")(C++20) |  takes a [`view`](view.html "cpp/ranges/view") consisting of pair-like values and produces a [`view`](view.html "cpp/ranges/view") of the second elements of each pair  
(class template) (range adaptor object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_values_view&action=edit)  
[ ranges::zip_viewviews::zip](zip_view.html "cpp/ranges/zip view")(C++23) |  a [`view`](view.html "cpp/ranges/view") consisting of tuples of references to corresponding elements of the adapted views  
(class template) (customization point object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_zip_view&action=edit)  
[ ranges::zip_transform_viewviews::zip_transform](zip_transform_view.html "cpp/ranges/zip transform view")(C++23) |  a [`view`](view.html "cpp/ranges/view") consisting of results of application of a transformation function to corresponding elements of the adapted views  
(class template) (customization point object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/ranges/dsc_zip_transform_view&action=edit)  
[ slice](../numeric/valarray/slice.html "cpp/numeric/valarray/slice") |  BLAS-like slice of a valarray: starting index, length, stride   
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/valarray/dsc_slice&action=edit)
