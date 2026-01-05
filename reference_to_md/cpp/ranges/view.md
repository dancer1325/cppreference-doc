
  


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
**view**  
  
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
template<class T>  
concept view = [ranges::range](range.html)<T> && [std::movable](../concepts/movable.html)<T> && ranges::enable_view<T>; |  (1)  |  (since C++20)  
template<class T>  
constexpr bool enable_view =  
[std::derived_from](../concepts/derived_from.html)<T, view_base> || /*is-derived-from-view-interface*/<T>; |  (2)  |  (since C++20)  
struct view_base { }; |  (3)  |  (since C++20)  
| |   
  
1) The `view` concept specifies the requirements of a [`range`](range.html "cpp/ranges/range") type that has suitable semantic properties for use in constructing range adaptor pipelines.

2) The `enable_view` variable template is used to indicate whether a [`range`](range.html "cpp/ranges/range") is a `view`. /*is-derived-from-view-interface*/<T> is true if and only if `T` has exactly one public base class [ranges::view_interface](view_interface.html)<U> for some type `U`, and `T` has no base classes of type [ranges::view_interface](view_interface.html)<V> for any other type `V`.   
Users may specialize `enable_view` to true for cv-unqualified program-defined types which model `view`, and false for types which do not. Such specializations must be [usable in constant expressions](../language/constant_expression.html#Usable_in_constant_expressions "cpp/language/constant expression") and have type const bool.

3) Deriving from `view_base` enables [`range`](range.html "cpp/ranges/range") types to model `view`.

## Contents

  * [1 Semantic requirements](view.html#Semantic_requirements)
  * [2 Specializations](view.html#Specializations)
  * [3 Notes](view.html#Notes)
  * [4 Example](view.html#Example)
  * [5 Defect reports](view.html#Defect_reports)

  
---  
  
### Semantic requirements

1) `T` models `view` only if: 

  * move construction of `T` has constant time complexity, and 
  * if \\(\scriptsize N\\)N copies and/or moves are made from a `T` object holding \\(\scriptsize M\\)M elements, then these \\(\scriptsize N\\)N objects have \\(\scriptsize \mathcal{O}{(N+M)}\\)𝓞(N+M) destruction (which implies that a moved-from `view` object has \\(\scriptsize \mathcal{O}{(1)}\\)𝓞(1) destruction), and 
  * either [std::copy_constructible](../concepts/copy_constructible.html)<T> is false, or copy construction of `T` has constant time complexity, and 
  * either [std::copyable](../concepts/copyable.html)<T> is false, or copy assignment of `T` has no more time complexity than destruction followed by copy construction.



### Specializations

Specializations of `enable_view` for all specializations of the following standard templates are defined as true: 

  * [`std::basic_string_view`](../string/basic_string_view.html "cpp/string/basic string view")
  * [`std::span`](../container/span.html "cpp/container/span")



  * [`std::optional`](../utility/optional.html "cpp/utility/optional")

| (since C++26)  
---|---  
  
### Notes

Examples of `view` types are: 

  * A [`range`](range.html "cpp/ranges/range") type that wraps a pair of iterators, e.g., std::[ranges::subrange](subrange.html)<I>. 
  * A [`range`](range.html "cpp/ranges/range") type that holds its elements by [std::shared_ptr](../memory/shared_ptr.html "cpp/memory/shared ptr") and shares ownership with all its copies. 
  * A [`range`](range.html "cpp/ranges/range") type that generates its elements on demand, e.g., [std::ranges::iota_view](iota_view.html "cpp/ranges/iota view"). 



A copyable container such as [std::vector](../container/vector.html)<[std::string](../string/basic_string.html)> generally does not meet the semantic requirements of `view` since copying the container copies all of the elements, which cannot be done in constant time. 

While views were originally described as cheaply copyable and non-owning ranges, a type is not required to be copyable or non-owning for it to model `view`. However, it must still be cheap to copy (if it is copyable), move, assign, and destroy, so that [range adaptors](../ranges.html#Range_adaptors "cpp/ranges") will not have unexpected complexity. 

By default, a type modeling [`movable`](../concepts/movable.html "cpp/concepts/movable") and [`range`](range.html "cpp/ranges/range") is considered a view if it is publicly and unambiguously derived from `view_base`, or exactly one specialization of std::ranges::view_interface. 

### Example

A minimum view. 
    
    
    #include <ranges>
     
    struct ArchetypalView : std::[ranges::view_interface](view_interface.html)<ArchetypalView>
    {
        int* begin();
        int* end();
    };
     
    static_assert(std::ranges::view<ArchetypalView>);

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[P2325R3](https://wg21.link/P2325R3) | C++20  | `view` required [`default_initializable`](../concepts/default_initializable.html "cpp/concepts/default initializable") | does not require   
[LWG 3549](https://cplusplus.github.io/LWG/issue3549) | C++20  | `enable_view` did not detect inheritance from `view_interface` | detects   
[P2415R2](https://wg21.link/P2415R2) | C++20  | the restriction on the time complexity of destruction was too strict  | relaxed 
