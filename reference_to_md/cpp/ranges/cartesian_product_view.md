
  


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
**cartesian_product_view views::cartesian_product**(C++23)(C++23)  
  
  
  
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
  
  
  


**`std::ranges::cartesian_product_view`**

[Member functions](cartesian_product_view.html#Member_functions "cpp/ranges/cartesian product view")  
---  
[cartesian_product_view::cartesian_product_view](cartesian_product_view/cartesian_product_view.html "cpp/ranges/cartesian product view/cartesian product view")  
[cartesian_product_view::begin](cartesian_product_view/begin.html "cpp/ranges/cartesian product view/begin")  
[cartesian_product_view::end](cartesian_product_view/end.html "cpp/ranges/cartesian product view/end")  
[cartesian_product_view::size](cartesian_product_view/size.html "cpp/ranges/cartesian product view/size")  
[Deduction guides](cartesian_product_view/deduction_guides.html "cpp/ranges/cartesian product view/deduction guides")  
[Iterator](cartesian_product_view/iterator.html "cpp/ranges/cartesian product view/iterator")  
Member functions  
[cartesian_product_view::_iterator_ ::_iterator_](cartesian_product_view/iterator/iterator.html "cpp/ranges/cartesian product view/iterator/iterator")  
[cartesian_product_view::_iterator_ ::operator*](cartesian_product_view/iterator/operator*.html "cpp/ranges/cartesian product view/iterator/operator*")  
[cartesian_product_view::_iterator_ ::operator[]](cartesian_product_view/iterator/operator_at.html "cpp/ranges/cartesian product view/iterator/operator at")  
[cartesian_product_view::_iterator_ ::operator++  
cartesian_product_view::_iterator_ ::operator++(int)  
cartesian_product_view::_iterator_ ::operator--  
cartesian_product_view::_iterator_ ::operator--(int)  
cartesian_product_view::_iterator_ ::operator+=  
cartesian_product_view::_iterator_ ::operator-=](cartesian_product_view/iterator/operator_arith.html "cpp/ranges/cartesian product view/iterator/operator arith")  
[cartesian_product_view::_iterator_ ::_next_](cartesian_product_view/iterator/helpers.html#next "cpp/ranges/cartesian product view/iterator/helpers")  
[cartesian_product_view::_iterator_ ::_prev_](cartesian_product_view/iterator/helpers.html#prev "cpp/ranges/cartesian product view/iterator/helpers")  
[cartesian_product_view::_iterator_ ::_distance_from_](cartesian_product_view/iterator/helpers.html#distance_from "cpp/ranges/cartesian product view/iterator/helpers")  
Non-member functions  
[operator==(cartesian_product_view::_iterator_)  
operator<=>(cartesian_product_view::_iterator_)](cartesian_product_view/iterator/operator_cmp.html "cpp/ranges/cartesian product view/iterator/operator cmp")  
[operator+(cartesian_product_view::_iterator_)  
operator-(cartesian_product_view::_iterator_)](cartesian_product_view/iterator/operator_arith2.html "cpp/ranges/cartesian product view/iterator/operator arith2")  
[iter_move(cartesian_product_view::_iterator_)](cartesian_product_view/iterator/iter_move.html "cpp/ranges/cartesian product view/iterator/iter move")  
[iter_swap(cartesian_product_view::_iterator_)](cartesian_product_view/iterator/iter_swap.html "cpp/ranges/cartesian product view/iterator/iter swap")  
  


Defined in header `[<ranges>](../header/ranges.html "cpp/header/ranges")` |  |   
---|---|---  
template< [ranges::input_range](input_range.html) First, [ranges::forward_range](forward_range.html)... Vs >  
requires ([ranges::view](view.html)<First> && ... && [ranges::view](view.html)<Vs>)  
class cartesian_product_view  
: public [ranges::view_interface](view_interface.html)<cartesian_product_view<First, Vs...>> |  (1)  |  (since C++23)  
namespace views {  
inline constexpr /*unspecified*/ cartesian_product = /*unspecified*/;  
} |  (2)  |  (since C++23)  
Call signature |  |   
template< [ranges::viewable_range](viewable_range.html)... Rs >  
requires /* see below */  
constexpr [ranges::view](view.html) auto cartesian_product( Rs&&... rs ); |  |  (since C++23)  
Helper concepts |  |   
template< bool Const, class First, class... Vs >  
concept /*cartesian-product-is-random-access*/ =  
([ranges::random_access_range](random_access_range.html)</*maybe-const*/<Const, First>> && ... &&  
([ranges::random_access_range](random_access_range.html)</*maybe-const*/<Const, Vs>> &&  
[ranges::sized_range](sized_range.html)</*maybe-const*/<Const, Vs>>)); |  (3)  |  (exposition only*)  
template< class R >  
concept /*cartesian-product-common-arg*/ =  
[ranges::common_range](common_range.html)<R> ||  
([ranges::sized_range](sized_range.html)<R> && [ranges::random_access_range](random_access_range.html)<R>); |  (4)  |  (exposition only*)  
template< bool Const, class First, class... Vs >  
concept /*cartesian-product-is-bidirectional*/ =  
([ranges::bidirectional_range](bidirectional_range.html)</*maybe-const*/<Const, First>> && ... &&  
([ranges::bidirectional_range](bidirectional_range.html)</*maybe-const*/<Const, Vs>> &&  
/*cartesian-product-common-arg*/</*maybe-const*/<Const, Vs>>)); |  (5)  |  (exposition only*)  
template< class First, class... Vs >  
concept /*cartesian-product-is-common*/ =  
/*cartesian-product-common-arg*/<First>; |  (6)  |  (exposition only*)  
template< class... Vs >  
concept /*cartesian-product-is-sized*/ =  
([ranges::sized_range](sized_range.html)<Vs> && ...); |  (7)  |  (exposition only*)  
template< bool Const, template<class> class FirstSent, class First, class... Vs >  
concept /*cartesian-is-sized-sentinel*/ =  
([std::sized_sentinel_for](../iterator/sized_sentinel_for.html)<FirstSent</*maybe-const*/<Const, First>>,  
[ranges::iterator_t](iterator_t.html)</*maybe-const*/<Const, First>>> && ... &&  
([ranges::sized_range](sized_range.html)</*maybe-const*/<Const, Vs>> &&  
[std::sized_sentinel_for](../iterator/sized_sentinel_for.html)<[ranges::iterator_t](iterator_t.html)<  
/*maybe-const*/<Const, Vs>>,  
[ranges::iterator_t](iterator_t.html)</*maybe-const*/<Const, Vs>>>)); |  (8)  |  (exposition only*)  
Helper function templates |  |   
template< /*cartesian-product-common-arg*/ R >  
constexpr auto /*cartesian-common-arg-end*/( R& r )  
{  
if constexpr ([ranges::common_range](common_range.html)<R>)  
return [ranges::end](end.html)(r);  
else  
return [ranges::begin](begin.html)(r) + [ranges::distance](../iterator/ranges/distance.html)(r);  
} |  (9)  |  (exposition only*)  
| |   
  
1) `cartesian_product_view` is a range adaptor that takes _n_ [`view`s](view.html "cpp/ranges/view"), where _n > 0_, and produces a [`view`](view.html "cpp/ranges/view") of tuples calculated by the [n-ary cartesian product](https://en.wikipedia.org/wiki/Cartesian_product#n-ary_Cartesian_product "enwiki:Cartesian product") of the provided ranges. The size of produced view is a multiple of sizes of provided ranges, while each element is a tuple (of references) of the size _n_.

2) `views::cartesian_product` is a customization point object. 

  * When calling with no argument, views::cartesian_product() is [expression-equivalent](../language/expressions.html#Expression-equivalence "cpp/language/expressions") to [views::single](single_view.html)([std::tuple](../utility/tuple.html)()). 
  * Otherwise, views::cartesian_product(rs...) is [expression-equivalent](../language/expressions.html#Expression-equivalence "cpp/language/expressions") to ranges::cartesian_product_view<[views::all_t](all_view.html)<decltype((rs))>...>(rs...).



3) Determines if `cartesian_product` is a random access range (see also [`random_access_range`](random_access_range.html "cpp/ranges/random access range")).

4) Determines if `cartesian_product` is a common range (see also [`common_range`](common_range.html "cpp/ranges/common range")).

5) Determines if `cartesian_product` is a bidirectional range (see also [`bidirectional_range`](bidirectional_range.html "cpp/ranges/bidirectional range")).

6) Determines if `cartesian_product` satisfies the helper concept /*cartesian-product-is-common*/ (see also [`common_range`](common_range.html "cpp/ranges/common range")).

7) Determines if `cartesian_product` is a sized range (see also [`sized_range`](sized_range.html "cpp/ranges/sized range")).

8) Determines if `cartesian_product` uses sized sentinel.

9) Returns the end of the produced [`view`](view.html "cpp/ranges/view"). Participates in overload resolution only if `cartesian_product` satisfies the helper concept /*cartesian-product-common-arg*/.

The `First` [`range`](range.html "cpp/ranges/range") passed to `cartesian_product_view` is treated specially, since it is only passed through a single time. As a result, several constrains are relaxed on it: 

  * `First` is an [`input_range`](input_range.html "cpp/ranges/input range") instead of [`forward_range`](forward_range.html "cpp/ranges/forward range"); 
  * `First` does not have to be a [`sized_range`](sized_range.html "cpp/ranges/sized range") in order for the `cartesian_product_view` to be [`random_access_range`](random_access_range.html "cpp/ranges/random access range") or [`common_range`](common_range.html "cpp/ranges/common range"); 
  * `First` does not have to be [`common_range`](common_range.html "cpp/ranges/common range") in order for the `cartesian_product_view` to be [`bidirectional_range`](bidirectional_range.html "cpp/ranges/bidirectional range"). 



## Contents

  * [1 Customization point objects](cartesian_product_view.html#Customization_point_objects)
  * [2 Data members](cartesian_product_view.html#Data_members)
  * [3 Member functions](cartesian_product_view.html#Member_functions)
    * [3.1 Inherited from std::ranges::view_interface](cartesian_product_view.html#Inherited_from_std::ranges::view_interface)
  * [4 Deduction guides](cartesian_product_view.html#Deduction_guides)
  * [5 Nested classes](cartesian_product_view.html#Nested_classes)
  * [6 Notes](cartesian_product_view.html#Notes)
  * [7 Example](cartesian_product_view.html#Example)
  * [8 References](cartesian_product_view.html#References)
  * [9 See also](cartesian_product_view.html#See_also)

  
---  
  
###  Customization point objects

The name `views::cartesian_product` denotes a _customization point object_ , which is a const [function object](../named_req/FunctionObject.html "cpp/named req/FunctionObject") of a [literal](../named_req/LiteralType.html "cpp/named req/LiteralType") [`semiregular`](../concepts/semiregular.html "cpp/concepts/semiregular") class type. See [CustomizationPointObject](../named_req/CustomizationPointObject.html "cpp/named req/CustomizationPointObject") for details. 

### Data members

Member  |  Definition   
---|---  
[std::tuple](../utility/tuple.html)<First, Vs...> `_base__` (private) |  An object that holds all adapted [`view`](view.html "cpp/ranges/view") objects.  
(exposition-only member object*)  
  
### Member functions

[ (constructor)](cartesian_product_view/cartesian_product_view.html "cpp/ranges/cartesian product view/cartesian product view") |  constructs a `cartesian_product_view`   
(public member function)   
---|---  
[ begin](cartesian_product_view/begin.html "cpp/ranges/cartesian product view/begin") |  returns an iterator to the beginning   
(public member function)   
[ end](cartesian_product_view/end.html "cpp/ranges/cartesian product view/end") |  returns an iterator or a sentinel to the end   
(public member function)   
[ size](cartesian_product_view/size.html "cpp/ranges/cartesian product view/size") |  returns the number of elements, provided only if the underlying (adapted) range satisfies [`sized_range`](sized_range.html "cpp/ranges/sized range")   
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
  
### [Deduction guides](cartesian_product_view/deduction_guides.html "cpp/ranges/cartesian product view/deduction guides")

### Nested classes

[_iterator_](cartesian_product_view/iterator.html "cpp/ranges/cartesian product view/iterator") |  the iterator type  
(exposition-only member class template*)  
---|---  
  
### Notes

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_ranges_cartesian_product`](../experimental/feature_test.html#cpp_lib_ranges_cartesian_product "cpp/feature test") | [`202207L`](../compiler_support/23.html#cpp_lib_ranges_cartesian_product_202207L "cpp/compiler support/23") | (C++23) | `std::ranges::cartesian_product_view`  
  
### Example

Run this code
    
    
    #include <array>
    #include <iostream>
    #include <list>
    #include <ranges>
    #include <string>
    #include <vector>
     
    void print([std::tuple](../utility/tuple.html)<char const&, int const&, [std::string](../string/basic_string.html) const&> t, int pos)
    {
        const auto& [a, b, c] = t;
        [std::cout](../io/cout.html) << '(' << a << ' ' << b << ' ' << c << ')' << (pos % 4 ? " " : "\n");
    }
     
    int main()
    {
        const auto x = [std::array](../container/array.html){'A', 'B'};
        const auto y = [std::vector](../container/vector.html){1, 2, 3};
        const auto z = [std::list](../container/list.html)<[std::string](../string/basic_string.html)>{"α", "β", "γ", "δ"};
     
        for (int i{1}; auto const& tuple : std::views::cartesian_product(x, y, z))
            print(tuple, i++);
    }

Output: 
    
    
    (A 1 α) (A 1 β) (A 1 γ) (A 1 δ)
    (A 2 α) (A 2 β) (A 2 γ) (A 2 δ)
    (A 3 α) (A 3 β) (A 3 γ) (A 3 δ)
    (B 1 α) (B 1 β) (B 1 γ) (B 1 δ)
    (B 2 α) (B 2 β) (B 2 γ) (B 2 δ)
    (B 3 α) (B 3 β) (B 3 γ) (B 3 δ)

### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 26.7.31 Cartesian product view [range.stride] 



### See also

[ ranges::zip_viewviews::zip](zip_view.html "cpp/ranges/zip view")(C++23) |  a [`view`](view.html "cpp/ranges/view") consisting of tuples of references to corresponding elements of the adapted views  
(class template) (customization point object)  
---|---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
