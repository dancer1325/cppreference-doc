[[edit template]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/push&action=edit)

[C++](../../../cpp.html "cpp")

[Compiler support](../../compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](../../freestanding.html "cpp/freestanding")  
[Language](../../language.html "cpp/language")  
[Standard library](../../standard_library.html "cpp/standard library")  
[Standard library headers](../../headers.html "cpp/header")  
[Named requirements](../../iterator/concepts.html "cpp/named req")  
[Feature test macros](../../experimental/feature_test.html "cpp/feature test") (C++20)  
[Language support library](../../utility.html#Language_support "cpp/utility")  
[Concepts library](../../concepts.html "cpp/concepts") (C++20)  
[Diagnostics library](../../error.html "cpp/error")  
[Memory management library](../../memory.html "cpp/memory")  
[Metaprogramming library](../../meta.html "cpp/meta") (C++11)  
[General utilities library](../../utility.html "cpp/utility")  
[Containers library](../../container.html "cpp/container")  
[Iterators library](../../iterator.html "cpp/iterator")  
[Ranges library](../../ranges.html "cpp/ranges") (C++20)  
[Algorithms library](../../algorithm.html "cpp/algorithm")  
[Strings library](../../string.html "cpp/string")  
[Text processing library](../../text.html "cpp/text")  
[Numerics library](../../numeric.html "cpp/numeric")  
[Date and time library](../../chrono.html "cpp/chrono")  
[Input/output library](../../io.html "cpp/io")  
[Filesystem library](../../filesystem.html "cpp/filesystem") (C++17)  
[Concurrency support library](../../atomic.html "cpp/thread") (C++11)  
[Execution control library](../../experimental/execution.html "cpp/execution") (C++26)  
[Technical specifications](../../experimental.html "cpp/experimental")  
[Symbols index](../../symbol_index.html "cpp/symbol index")  
[External libraries](../../links/libs.html "cpp/links/libs")  
  


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
  


`[std::queue](../queue.html "cpp/container/queue")`

[Member functions](../queue.html#Member_functions "cpp/container/queue")  
---  
[queue::queue](queue.html "cpp/container/queue/queue")  
[queue::~queue](~queue.html "cpp/container/queue/~queue")  
[queue::operator=](operator=.html "cpp/container/queue/operator=")  
[Element access](../queue.html#Element_access "cpp/container/queue")  
[queue::front](front.html "cpp/container/queue/front")  
[queue::back](back.html "cpp/container/queue/back")  
[Capacity](../queue.html#Capacity "cpp/container/queue")  
[queue::empty](empty.html "cpp/container/queue/empty")  
[queue::size](size.html "cpp/container/queue/size")  
[Modifiers](../queue.html#Modifiers "cpp/container/queue")  
**queue::push**  
[queue::push_range](push_range.html "cpp/container/queue/push range")(C++23)  
[queue::emplace](emplace.html "cpp/container/queue/emplace")(C++11)  
[queue::pop](pop.html "cpp/container/queue/pop")  
[queue::swap](swap.html "cpp/container/queue/swap")(C++11)  
[Non-member functions](../queue.html#Non-member_functions "cpp/container/queue")  
[swap(std::queue)](swap2.html "cpp/container/queue/swap2")(C++11)  
[operator==operator!=operator<operator>operator<=operator>=operator<=>](operator_cmp.html "cpp/container/queue/operator cmp")(C++20)  
[Helper classes](../queue.html#Helper_classes "cpp/container/queue")  
[uses_allocator<std::queue>](uses_allocator.html "cpp/container/queue/uses allocator")(C++11)  
[formatter<std::queue>](formatter.html "cpp/container/queue/formatter")(C++23)  
[Deduction guides](deduction_guides.html "cpp/container/queue/deduction guides")(C++17)  
  


void push( const value_type& value ); |  (1)  |   
---|---|---  
void push( value_type&& value ); |  (2)  |  (since C++11)  
| |   
  
Pushes the given element value to the end of the queue. 

1) Equivalent to: c.push_back(value).

2) Equivalent to: c.push_back(std::move(value)).

## Contents

  * [1 Parameters](push.html#Parameters)
  * [2 Return value](push.html#Return_value)
  * [3 Complexity](push.html#Complexity)
  * [4 Example](push.html#Example)
  * [5 See also](push.html#See_also)

  
---  
  
### Parameters

value  |  \-  |  the value of the element to push   
---|---|---  
  
### Return value

(none) 

### Complexity

Equal to the complexity of Container::push_back. 

### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### See also

[ emplace](emplace.html "cpp/container/queue/emplace")(C++11) |  constructs element in-place at the end   
(public member function)   
---|---  
[ pop](pop.html "cpp/container/queue/pop") |  removes the first element   
(public member function) 
