
  


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
**std::from_range_t  
std::from_range**(C++23)(C++23)` `  
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
struct from_range_t { explicit from_range_t() = default; }; |  |  (since C++23)  
inline constexpr std::from_range_t from_range {}; |  |  (since C++23)  
| |   
  
`std::from_range` is a disambiguation tag that can be passed to the constructors of the suitable containers to indicate that the contained member is range constructed. 

The corresponding type `std::from_range_t` can be used in the constructor's parameter list to match the intended tag. 

## Contents

  * [1 Standard library](from_range.html#Standard_library)
    * [1.1 Containers library](from_range.html#Containers_library)
    * [1.2 Strings library](from_range.html#Strings_library)
  * [2 Notes](from_range.html#Notes)
  * [3 Example](from_range.html#Example)
  * [4 See also](from_range.html#See_also)

  
---  
  
### Standard library

The following standard library types use `std::from_range_t` type in their constructors: 

#####  Containers library   
  
---  
[ (constructor)](../container/vector/vector.html "cpp/container/vector/vector")(C++23) |  constructs the `vector` from a range   
(public member function of `std::vector<T,Allocator>`)  
[ (constructor)](../container/inplace_vector/inplace_vector.html "cpp/container/inplace vector/inplace vector")(C++26) |  constructs the `inplace_vector` from a range   
(public member function of `std::inplace_vector<T,N>`)  
[ (constructor)](https://en.cppreference.com/mwiki/index.php?title=cpp/container/hive/hive&action=edit&redlink=1 "cpp/container/hive/hive \(page does not exist\)")(C++26) |  constructs the `hive` from a range   
(public member function of `[Template:cpp/container/hive/title](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/hive/title&action=edit&redlink=1 "Template:cpp/container/hive/title \(page does not exist\)")`)  
[ (constructor)](../container/deque/deque.html "cpp/container/deque/deque")(C++23) |  constructs the `deque` from a range   
(public member function of `std::deque<T,Allocator>`)  
[ (constructor)](../container/forward_list/forward_list.html "cpp/container/forward list/forward list")(C++23) |  constructs the `forward_list` from a range   
(public member function of `std::forward_list<T,Allocator>`)  
[ (constructor)](../container/list/list.html "cpp/container/list/list")(C++23) |  constructs the `list` from a range   
(public member function of `std::list<T,Allocator>`)  
[ (constructor)](../container/set/set.html "cpp/container/set/set")(C++23) |  constructs the `set` from a range   
(public member function of `std::set<Key,Compare,Allocator>`)  
[ (constructor)](../container/map/map.html "cpp/container/map/map")(C++23) |  constructs the `map` from a range   
(public member function of `std::map<Key,T,Compare,Allocator>`)  
[ (constructor)](../container/multiset/multiset.html "cpp/container/multiset/multiset")(C++23) |  constructs the `multiset` from a range   
(public member function of `std::multiset<Key,Compare,Allocator>`)  
[ (constructor)](../container/multimap/multimap.html "cpp/container/multimap/multimap")(C++23) |  constructs the `multimap` from a range   
(public member function of `std::multimap<Key,T,Compare,Allocator>`)  
[ (constructor)](../container/unordered_set/unordered_set.html "cpp/container/unordered set/unordered set")(C++23) |  constructs the `unordered_set` from a range   
(public member function of `std::unordered_set<Key,Hash,KeyEqual,Allocator>`)  
[ (constructor)](../container/unordered_map/unordered_map.html "cpp/container/unordered map/unordered map")(C++23) |  constructs the `unordered_map` from a range   
(public member function of `std::unordered_map<Key,T,Hash,KeyEqual,Allocator>`)  
[ (constructor)](../container/unordered_multiset/unordered_multiset.html "cpp/container/unordered multiset/unordered multiset")(C++23) |  constructs the `unordered_multiset` from a range   
(public member function of `std::unordered_multiset<Key,Hash,KeyEqual,Allocator>`)  
[ (constructor)](../container/unordered_multimap/unordered_multimap.html "cpp/container/unordered multimap/unordered multimap")(C++23) |  constructs the `unordered_multimap` from a range   
(public member function of `std::unordered_multimap<Key,T,Hash,KeyEqual,Allocator>`)  
[ (constructor)](../container/priority_queue/priority_queue.html "cpp/container/priority queue/priority queue")(C++23) |  constructs the `priority_queue` from a range   
(public member function of `std::priority_queue<T,Container,Compare>`)  
[ (constructor)](../container/queue/queue.html "cpp/container/queue/queue")(C++23) |  constructs the `queue` from a range   
(public member function of `std::queue<T,Container>`)  
[ (constructor)](../container/stack/stack.html "cpp/container/stack/stack")(C++23) |  constructs the `stack` from a range   
(public member function of `std::stack<T,Container>`)  
[ (constructor)](../container/flat_set/flat_set.html "cpp/container/flat set/flat set")(C++23) |  constructs the `flat_set` from a range   
(public member function of `std::flat_set<Key,Compare,KeyContainer>`)  
[ (constructor)](../container/flat_map/flat_map.html "cpp/container/flat map/flat map")(C++23) |  constructs the `flat_map` from a range   
(public member function of `std::flat_map<Key,T,Compare,KeyContainer,MappedContainer>`)  
[ (constructor)](../container/flat_multiset/flat_multiset.html "cpp/container/flat multiset/flat multiset")(C++23) |  constructs the `flat_multiset` from a range   
(public member function of `std::flat_multiset<Key,Compare,KeyContainer>`)  
[ (constructor)](../container/flat_multimap/flat_multimap.html "cpp/container/flat multimap/flat multimap")(C++23) |  constructs the `flat_multimap` from a range   
(public member function of `std::flat_multimap<Key,T,Compare,KeyContainer,MappedContainer>`)  
  
#####  Strings library   
  
[ (constructor)](../string/basic_string/basic_string.html "cpp/string/basic string/basic string")(C++23) |  constructs the `basic_string` from a range   
(public member function of `std::basic_string<CharT,Traits,Allocator>`)  
  
### Notes

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_containers_ranges`](../experimental/feature_test.html#cpp_lib_containers_ranges "cpp/feature test") | [`202202L`](../compiler_support/23.html#cpp_lib_containers_ranges_202202L "cpp/compiler support/23") | (C++23) | Tagged constructors to construct from [container compatible range](to.html#container_compatible_range "cpp/ranges/to")  
  
### Example

Run this code
    
    
    #include <cassert>
    #include <string>
     
    int main()
    {
    #ifdef __cpp_lib_containers_ranges
        auto const range = {0x43, 43, 43};
        [std::string](../string/basic_string.html) str{std::from_range, range}; // uses tagged constructor
        [assert](../error/assert.html)(str == "C++");
    #endif
    }

### See also

[ in_placein_place_typein_place_indexin_place_tin_place_type_tin_place_index_t](../utility/in_place.html "cpp/utility/in place")(C++17) |  in-place construction tag  
(tag)  
---|---  
[ sorted_equivalentsorted_equivalent_t](../container/sorted_equivalent.html "cpp/container/sorted equivalent")(C++23) |  indicates that elements of a range are sorted (uniqueness is not required)  
(tag)  
[ sorted_uniquesorted_unique_t](../container/sorted_unique.html "cpp/container/sorted unique")(C++23) |  indicates that elements of a range are sorted and unique  
(tag)  
[ ranges::to](to.html "cpp/ranges/to")(C++23) |  constructs a new non-view object from an input range   
(function template) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
