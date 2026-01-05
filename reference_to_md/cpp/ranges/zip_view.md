
  


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
**zip_view views::zip**(C++23)(C++23)  
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
  
  
  


**`std::ranges::zip_view`**

[Member functions](zip_view.html#Member_functions "cpp/ranges/zip view")  
---  
[zip_view::zip_view](zip_view/zip_view.html "cpp/ranges/zip view/zip view")  
[zip_view::begin](zip_view/begin.html "cpp/ranges/zip view/begin")  
[zip_view::end](zip_view/end.html "cpp/ranges/zip view/end")  
[zip_view::size](zip_view/size.html "cpp/ranges/zip view/size")  
[Deduction guides](zip_view/deduction_guides.html "cpp/ranges/zip view/deduction guides")  
[Iterator](zip_view/iterator.html "cpp/ranges/zip view/iterator")  
[Member functions](zip_view/iterator.html#Member_functions "cpp/ranges/zip view/iterator")  
[zip_view::_iterator_ ::_iterator_](zip_view/iterator/iterator.html "cpp/ranges/zip view/iterator/iterator")  
[zip_view::_iterator_ ::operator*](zip_view/iterator/operator*.html "cpp/ranges/zip view/iterator/operator*")  
[zip_view::_iterator_ ::operator[]](zip_view/iterator/operator_at.html "cpp/ranges/zip view/iterator/operator at")  
[zip_view::_iterator_ ::operator++  
zip_view::_iterator_ ::operator++(int)  
zip_view::_iterator_ ::operator--  
zip_view::_iterator_ ::operator--(int)  
zip_view::_iterator_ ::operator+=  
zip_view::_iterator_ ::operator-=](zip_view/iterator/operator_arith.html "cpp/ranges/zip view/iterator/operator arith")  
[Non-member functions](zip_view/iterator.html#Non-member_functions "cpp/ranges/zip view/iterator")  
[operator==(zip_view::_iterator_)  
operator<(zip_view::_iterator_)  
operator>(zip_view::_iterator_)  
operator<=(zip_view::_iterator_)  
operator>=(zip_view::_iterator_)  
operator<=>(zip_view::_iterator_)](zip_view/iterator/operator_cmp.html "cpp/ranges/zip view/iterator/operator cmp")  
[operator+(zip_view::_iterator_)  
operator-(zip_view::_iterator_)](zip_view/iterator/operator_arith2.html "cpp/ranges/zip view/iterator/operator arith2")  
[iter_move(zip_view::_iterator_)](zip_view/iterator/iter_move.html "cpp/ranges/zip view/iterator/iter move")  
[iter_swap(zip_view::_iterator_)](zip_view/iterator/iter_swap.html "cpp/ranges/zip view/iterator/iter swap")  
[Sentinel](zip_view/sentinel.html "cpp/ranges/zip view/sentinel")  
Member functions  
[zip_view::_sentinel_ ::_sentinel_](zip_view/sentinel/sentinel.html "cpp/ranges/zip view/sentinel/sentinel")  
Non-member functions  
[operator==(zip_view::_iterator_ ,zip_view::_sentinel_)](zip_view/sentinel/operator_cmp.html "cpp/ranges/zip view/sentinel/operator cmp")  
[operator-(zip_view::_iterator_ ,zip_view::_sentinel_)](zip_view/sentinel/operator-.html "cpp/ranges/zip view/sentinel/operator-")  
  


Defined in header `[<ranges>](../header/ranges.html "cpp/header/ranges")` |  |   
---|---|---  
template< [ranges::input_range](input_range.html)... Views >  
requires ([ranges::view](view.html)<Views> && ...) && (sizeof...(Views) > 0)  
class zip_view  
: public [ranges::view_interface](view_interface.html)<zip_view<Views...>> |  (1)  |  (since C++23)  
namespace views {  
inline constexpr /*unspecified*/ zip = /*unspecified*/;  
} |  (2)  |  (since C++23)  
Call signature |  |   
template< [ranges::viewable_range](viewable_range.html)... Rs >  
requires /* see below */  
constexpr [ranges::view](view.html) auto zip( Rs&&... rs ); |  |  (since C++23)  
| |   
  
1) `zip_view` is a range adaptor that takes one or more [`view`s](view.html "cpp/ranges/view"), and produces a [`view`](view.html "cpp/ranges/view") whose `_i_`th element is a tuple-like value consisting of the `_i_` th elements of all views. The size of produced view is the minimum of sizes of all adapted views.

2) `views::zip` is a customization point object.  


When calling with no argument, views::zip() is [expression-equivalent](../language/expressions.html#Expression-equivalence "cpp/language/expressions") to auto([views::empty](empty_view.html)<[std::tuple](../utility/tuple.html)<>>).  


Otherwise, views::zip(rs...) is _expression-equivalent_ to ranges::zip_view<[views::all_t](all_view.html)<decltype((rs))>...>(rs...).

`zip_view` always models [`input_range`](input_range.html "cpp/ranges/input range"), and models [`forward_range`](forward_range.html "cpp/ranges/forward range"), [`bidirectional_range`](bidirectional_range.html "cpp/ranges/bidirectional range"), [`random_access_range`](random_access_range.html "cpp/ranges/random access range"), or [`sized_range`](sized_range.html "cpp/ranges/sized range") if all adapted [`view`](view.html "cpp/ranges/view") types model the corresponding concept. 

`zip_view` models [`common_range`](common_range.html "cpp/ranges/common range") if 

  * sizeof...(Views) is equal to 1, and the only adapted view type models [`common_range`](common_range.html "cpp/ranges/common range"), or 
  * at least one adapted view type does not model [`bidirectional_range`](bidirectional_range.html "cpp/ranges/bidirectional range"), and every adapted view type models [`common_range`](common_range.html "cpp/ranges/common range"), or 
  * every adapted view type models both [`random_access_range`](random_access_range.html "cpp/ranges/random access range") and [`sized_range`](sized_range.html "cpp/ranges/sized range"). 



## Contents

  * [1 Customization point objects](zip_view.html#Customization_point_objects)
  * [2 Data members](zip_view.html#Data_members)
  * [3 Member functions](zip_view.html#Member_functions)
    * [3.1 Inherited from std::ranges::view_interface](zip_view.html#Inherited_from_std::ranges::view_interface)
  * [4 Deduction guides](zip_view.html#Deduction_guides)
  * [5 Nested classes](zip_view.html#Nested_classes)
  * [6 Helper templates](zip_view.html#Helper_templates)
  * [7 Notes](zip_view.html#Notes)
  * [8 Example](zip_view.html#Example)
  * [9 See also](zip_view.html#See_also)

  
---  
  
###  Customization point objects

The name `views::zip` denotes a _customization point object_ , which is a const [function object](../named_req/FunctionObject.html "cpp/named req/FunctionObject") of a [literal](../named_req/LiteralType.html "cpp/named req/LiteralType") [`semiregular`](../concepts/semiregular.html "cpp/concepts/semiregular") class type. See [CustomizationPointObject](../named_req/CustomizationPointObject.html "cpp/named req/CustomizationPointObject") for details. 

### Data members

Member  |  Description   
---|---  
[std::tuple](../utility/tuple.html)<Views...> `_views__` |  all adapted view objects  
(exposition-only member object*)  
  
### Member functions

[ (constructor)](zip_view/zip_view.html "cpp/ranges/zip view/zip view") |  constructs a `zip_view`   
(public member function)   
---|---  
[ begin](zip_view/begin.html "cpp/ranges/zip view/begin") |  returns an iterator to the beginning   
(public member function)   
[ end](zip_view/end.html "cpp/ranges/zip view/end") |  returns an iterator or a sentinel to the end   
(public member function)   
[ size](zip_view/size.html "cpp/ranges/zip view/size") |  returns the number of elements, provided only if each underlying (adapted) range satisfies [`sized_range`](sized_range.html "cpp/ranges/sized range")   
(public member function)   
  
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
[ back](view_interface/back.html "cpp/ranges/view interface/back") |  returns the last element in the derived view, provided only if it satisfies [`bidirectional_range`](bidirectional_range.html "cpp/ranges/bidirectional range") and [`common_range`](common_range.html "cpp/ranges/common range")   
(public member function of `std::ranges::view_interface<D>`)   
[ operator[]](view_interface/operator_at.html "cpp/ranges/view interface/operator at") |  returns the `n`th element in the derived view, provided only if it satisfies [`random_access_range`](random_access_range.html "cpp/ranges/random access range")   
(public member function of `std::ranges::view_interface<D>`)   
  
### [Deduction guides](zip_view/deduction_guides.html "cpp/ranges/zip view/deduction guides")

### Nested classes

[_iterator_](zip_view/iterator.html "cpp/ranges/zip view/iterator") |  the iterator type  
(exposition-only member class template*)  
---|---  
[_sentinel_](zip_view/sentinel.html "cpp/ranges/zip view/sentinel") |  the sentinel type used when `zip_view` is not a [`common_range`](common_range.html "cpp/ranges/common range")  
(exposition-only member class template*)  
  
### Helper templates

template< class... Views >  
constexpr bool enable_borrowed_range<ranges::zip_view<Views...>> =  
([ranges::enable_borrowed_range](borrowed_range.html)<Views> && ...); |  |  (since C++23)  
---|---|---  
| |   
  
This specialization of [`ranges::enable_borrowed_range`](borrowed_range.html "cpp/ranges/borrowed range") makes [`zip_view`](zip_view.html#top) satisfy [`borrowed_range`](borrowed_range.html "cpp/ranges/borrowed range") when each underlying view satisfies it. 

### Notes

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_ranges_zip`](../experimental/feature_test.html#cpp_lib_ranges_zip "cpp/feature test") | [`202110L`](../compiler_support/23.html#cpp_lib_ranges_zip_202110L "cpp/compiler support/23") | (C++23) | `ranges::zip_view`,  
[ranges::zip_transform_view](zip_transform_view.html),  
[ranges::adjacent_view](adjacent_view.html),  
[ranges::adjacent_transform_view](adjacent_transform_view.html)  
  
### Example

Run this code
    
    
    #include <array>
    #include <iostream>
    #include <list>
    #include <ranges>
    #include <string>
    #include <tuple>
    #include <vector>
     
    void print(auto const rem, auto const& range)
    {
        for ([std::cout](../io/cout.html) << rem; auto const& elem : range)
            [std::cout](../io/cout.html) << elem << ' ';
        [std::cout](../io/cout.html) << '\n';
    }
     
    int main()
    {
        auto x = [std::vector](../container/vector.html){1, 2, 3, 4};
        auto y = [std::list](../container/list.html)<[std::string](../string/basic_string.html)>{"α", "β", "γ", "δ", "ε"};
        auto z = [std::array](../container/array.html){'A', 'B', 'C', 'D', 'E', 'F'};
     
        print("Source views:", "");
        print("x: ", x);
        print("y: ", y);
        print("z: ", z);
     
        print("\nzip(x,y,z):", "");
     
        for ([std::tuple](../utility/tuple.html)<int&, [std::string](../string/basic_string.html)&, char&> elem : std::views::zip(x, y, z))
        {
            [std::cout](../io/cout.html) << std::get<0>(elem) << ' '
                      << std::get<1>(elem) << ' '
                      << std::get<2>(elem) << '\n';
     
            std::get<char&>(elem) += ('a' - 'A'); // modifies the element of z
        }
     
        print("\nAfter modification, z: ", z);
    }

Output: 
    
    
    Source views:
    x: 1 2 3 4
    y: α β γ δ ε
    z: A B C D E F
     
    zip(x,y,z):
    1 α A
    2 β B
    3 γ C
    4 δ D
     
    After modification, z: a b c d E F

### See also

[ ranges::zip_transform_viewviews::zip_transform](zip_transform_view.html "cpp/ranges/zip transform view")(C++23) |  a [`view`](view.html "cpp/ranges/view") consisting of results of application of a transformation function to corresponding elements of the adapted views  
(class template) (customization point object)  
---|---  
[ ranges::elements_viewviews::elements](elements_view.html "cpp/ranges/elements view")(C++20) |  takes a [`view`](view.html "cpp/ranges/view") consisting of [`_tuple-like_`](../utility/tuple/tuple-like.html "cpp/utility/tuple/tuple-like") values and a number N and produces a [`view`](view.html "cpp/ranges/view") of Nth element of each tuple  
(class template) (range adaptor object)
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
