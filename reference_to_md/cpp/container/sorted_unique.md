
  


[Containers library](../container.html "cpp/container")

[_node-handle_](node_handle.html "cpp/container/node handle")(C++17)  
---  
[Sequence](../container.html#Sequence_containers "cpp/container")  
[array](array.html "cpp/container/array")(C++11)  
[vector](vector.html "cpp/container/vector")  
[vector<bool>](vector_bool.html "cpp/container/vector bool")  
[inplace_vector](inplace_vector.html "cpp/container/inplace vector")(C++26)  
[hive](https://en.cppreference.com/mwiki/index.php?title=cpp/container/hive&action=edit&redlink=1 "cpp/container/hive \(page does not exist\)")(C++26)  
[deque](deque.html "cpp/container/deque")  
[forward_list](forward_list.html "cpp/container/forward list")(C++11)  
[list](list.html "cpp/container/list")  
[Associative](../container.html#Associative_containers "cpp/container")  
[set](set.html "cpp/container/set")  
[multiset](multiset.html "cpp/container/multiset")  
[map](map.html "cpp/container/map")  
[multimap](multimap.html "cpp/container/multimap")  
[Unordered associative](../container.html#Unordered_associative_containers "cpp/container")  
[unordered_set](unordered_set.html "cpp/container/unordered set")(C++11)  
[unordered_multiset](unordered_multiset.html "cpp/container/unordered multiset")(C++11)  
[unordered_map](unordered_map.html "cpp/container/unordered map")(C++11)  
[unordered_multimap](unordered_multimap.html "cpp/container/unordered multimap")(C++11)  
[Adaptors](../container.html#Container_adaptors "cpp/container")  
[stack](stack.html "cpp/container/stack")  
[queue](queue.html "cpp/container/queue")  
[priority_queue](priority_queue.html "cpp/container/priority queue")  
[flat_set](flat_set.html "cpp/container/flat set")(C++23)  
[flat_multiset](flat_multiset.html "cpp/container/flat multiset")(C++23)  
[flat_map](flat_map.html "cpp/container/flat map")(C++23)  
[flat_multimap](flat_multimap.html "cpp/container/flat multimap")(C++23)  
[Views](../container.html#Views "cpp/container")  
[span](span.html "cpp/container/span")(C++20)  
[mdspan](mdspan.html "cpp/container/mdspan")(C++23)  
Tables  
[Iterator invalidation](../container.html#Iterator_invalidation "cpp/container")  
[Member function table](../container.html#Member_function_table "cpp/container")  
[Non-member function table](../container.html#Non-member_function_table "cpp/container")  
  


Defined in header `[<flat_map>](../header/flat_map.html "cpp/header/flat map")` |  |   
---|---|---  
Defined in header `[<flat_set>](../header/flat_set.html "cpp/header/flat set")` |  |   
struct sorted_unique_t { explicit sorted_unique_t() = default; }; |  (1)  |  (since C++23)  
inline constexpr sorted_unique_t sorted_unique{}; |  (2)  |  (since C++23)  
| |   
  
1) The type `std::sorted_unique_t` can be used in the function's (including constructor's) parameter list to match the intended tag.

2) The corresponding `std::sorted_unique` instance of (1) is a disambiguation tag that can be passed to the functions of std::flat_map and std::flat_set to indicate that the input range or container is sorted (with respect to the comparator used in flat container adaptor) and all elements of such container or range are unique.

### Standard library

The following standard library container adaptors use (1,2) as disambiguation tags: 

[ flat_map](flat_map.html "cpp/container/flat map")(C++23) |  adapts two containers to provide a collection of key-value pairs, sorted by unique keys   
(class template)   
---|---  
[ flat_set](flat_set.html "cpp/container/flat set")(C++23) |  adapts a container to provide a collection of unique keys, sorted by keys   
(class template)   
  
### See also

[ sorted_equivalentsorted_equivalent_t](sorted_equivalent.html "cpp/container/sorted equivalent")(C++23) |  indicates that elements of a range are sorted (uniqueness is not required)  
(tag)  
---|---  
[ from_range_tfrom_range](../ranges/from_range.html "cpp/ranges/from range")(C++23) |  from-range construction tag  
(tag)  
[ in_placein_place_typein_place_indexin_place_tin_place_type_tin_place_index_t](../utility/in_place.html "cpp/utility/in place")(C++17) |  in-place construction tag  
(tag)
