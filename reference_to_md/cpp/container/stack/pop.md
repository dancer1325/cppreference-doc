[[edit template]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/pop&action=edit)

 
  


[Containers library](../../container.html "cpp/container")

[_node-handle_](../node_handle.html "cpp/container/node handle")(C++17)  
---  
[Sequence](../../container.html#Sequence_containers "cpp/container")  
[array](../array.html "cpp/container/array")(C++11)  
[vector](../vector.html "cpp/container/vector")  
[vector<bool>](../vector_bool.html "cpp/container/vector bool")  
[inplace_vector](../inplace_vector.html "cpp/container/inplace vector")(C++26)  
[hive](https://en.cppreference.com/mwiki/index.php?title=cpp/container/hive&action=edit&redlink=1 "cpp/container/hive \(page does not exist\)")(C++26)  
[deque](../deque.html "cpp/container/deque")  
[forward_list](../forward_list.html "cpp/container/forward list")(C++11)  
[list](../list.html "cpp/container/list")  
[Associative](../../container.html#Associative_containers "cpp/container")  
[set](../set.html "cpp/container/set")  
[multiset](../multiset.html "cpp/container/multiset")  
[map](../map.html "cpp/container/map")  
[multimap](../multimap.html "cpp/container/multimap")  
[Unordered associative](../../container.html#Unordered_associative_containers "cpp/container")  
[unordered_set](../unordered_set.html "cpp/container/unordered set")(C++11)  
[unordered_multiset](../unordered_multiset.html "cpp/container/unordered multiset")(C++11)  
[unordered_map](../unordered_map.html "cpp/container/unordered map")(C++11)  
[unordered_multimap](../unordered_multimap.html "cpp/container/unordered multimap")(C++11)  
[Adaptors](../../container.html#Container_adaptors "cpp/container")  
[stack](../stack.html "cpp/container/stack")  
[queue](../queue.html "cpp/container/queue")  
[priority_queue](../priority_queue.html "cpp/container/priority queue")  
[flat_set](../flat_set.html "cpp/container/flat set")(C++23)  
[flat_multiset](../flat_multiset.html "cpp/container/flat multiset")(C++23)  
[flat_map](../flat_map.html "cpp/container/flat map")(C++23)  
[flat_multimap](../flat_multimap.html "cpp/container/flat multimap")(C++23)  
[Views](../../container.html#Views "cpp/container")  
[span](../span.html "cpp/container/span")(C++20)  
[mdspan](../mdspan.html "cpp/container/mdspan")(C++23)  
Tables  
[Iterator invalidation](../../container.html#Iterator_invalidation "cpp/container")  
[Member function table](../../container.html#Member_function_table "cpp/container")  
[Non-member function table](../../container.html#Non-member_function_table "cpp/container")  
  


`[std::stack](../stack.html "cpp/container/stack")`

[Member functions](../stack.html#Member_functions "cpp/container/stack")  
---  
[stack::stack](stack.html "cpp/container/stack/stack")  
[stack::~stack](~stack.html "cpp/container/stack/~stack")  
[stack::operator=](operator=.html "cpp/container/stack/operator=")  
[Element access](../stack.html#Element_access "cpp/container/stack")  
[stack::top](top.html "cpp/container/stack/top")  
[Capacity](../stack.html#Capacity "cpp/container/stack")  
[stack::empty](empty.html "cpp/container/stack/empty")  
[stack::size](size.html "cpp/container/stack/size")  
[Modifiers](../stack.html#Modifiers "cpp/container/stack")  
[stack::push](push.html "cpp/container/stack/push")  
[stack::push_range](push_range.html "cpp/container/stack/push range")(C++23)  
[stack::emplace](emplace.html "cpp/container/stack/emplace")(C++11)  
**stack::pop**  
[stack::swap](swap.html "cpp/container/stack/swap")(C++11)  
[Non-member functions](../stack.html#Non-member_functions "cpp/container/stack")  
[swap(std::stack)](swap2.html "cpp/container/stack/swap2")(C++11)  
[operator==operator!=operator<operator>operator<=operator>=operator<=>](operator_cmp.html "cpp/container/stack/operator cmp")(C++20)  
[Helper classes](../stack.html#Helper_classes "cpp/container/stack")  
[uses_allocator<std::stack>](uses_allocator.html "cpp/container/stack/uses allocator")(C++11)  
[formatter<std::stack>](formatter.html "cpp/container/stack/formatter")(C++23)  
[Deduction guides](deduction_guides.html "cpp/container/stack/deduction guides")(C++17)  
  


void pop(); |  |   
---|---|---  
| |   
  
Removes the top element from the stack. Effectively calls c.pop_back(). 

## Contents

  * [1 Parameters](pop.html#Parameters)
  * [2 Return value](pop.html#Return_value)
  * [3 Complexity](pop.html#Complexity)
  * [4 Example](pop.html#Example)
  * [5 See also](pop.html#See_also)

  
---  
  
### Parameters

(none) 

### Return value

(none) 

### Complexity

Equal to the complexity of Container::pop_back. 

### Example

### See also

[ emplace](emplace.html "cpp/container/stack/emplace")(C++11) |  constructs element in-place at the top   
(public member function)   
---|---  
[ push](push.html "cpp/container/stack/push") |  inserts element at the top   
(public member function)   
[ top](top.html "cpp/container/stack/top") |  accesses the top element   
(public member function) 
