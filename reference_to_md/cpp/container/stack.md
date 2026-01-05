
  


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
**stack**  
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
  


`**std::stack**`

[Member functions](stack.html#Member_functions "cpp/container/stack")  
---  
[stack::stack](stack/stack.html "cpp/container/stack/stack")  
[stack::~stack](stack/~stack.html "cpp/container/stack/~stack")  
[stack::operator=](stack/operator=.html "cpp/container/stack/operator=")  
[Element access](stack.html#Element_access "cpp/container/stack")  
[stack::top](stack/top.html "cpp/container/stack/top")  
[Capacity](stack.html#Capacity "cpp/container/stack")  
[stack::empty](stack/empty.html "cpp/container/stack/empty")  
[stack::size](stack/size.html "cpp/container/stack/size")  
[Modifiers](stack.html#Modifiers "cpp/container/stack")  
[stack::push](stack/push.html "cpp/container/stack/push")  
[stack::push_range](stack/push_range.html "cpp/container/stack/push range")(C++23)  
[stack::emplace](stack/emplace.html "cpp/container/stack/emplace")(C++11)  
[stack::pop](stack/pop.html "cpp/container/stack/pop")  
[stack::swap](stack/swap.html "cpp/container/stack/swap")(C++11)  
[Non-member functions](stack.html#Non-member_functions "cpp/container/stack")  
[swap(std::stack)](stack/swap2.html "cpp/container/stack/swap2")(C++11)  
[operator==operator!=operator<operator>operator<=operator>=operator<=>](stack/operator_cmp.html "cpp/container/stack/operator cmp")(C++20)  
[Helper classes](stack.html#Helper_classes "cpp/container/stack")  
[uses_allocator<std::stack>](stack/uses_allocator.html "cpp/container/stack/uses allocator")(C++11)  
[formatter<std::stack>](stack/formatter.html "cpp/container/stack/formatter")(C++23)  
[Deduction guides](stack/deduction_guides.html "cpp/container/stack/deduction guides")(C++17)  
  


Defined in header `[<stack>](../header/stack.html "cpp/header/stack")` |  |   
---|---|---  
template<  
class T,  
class Container = [std::deque](deque.html)<T>  
> class stack; |  |   
| |   
  
The `std::stack` class is a [container adaptor](../container.html#Container_adaptors "cpp/container") that gives the programmer the functionality of a [stack](https://en.wikipedia.org/wiki/Stack_\(abstract_data_type\) "enwiki:Stack \(abstract data type\)") \- specifically, a LIFO (last-in, first-out) data structure. 

The class template acts as a wrapper to the underlying container - only a specific set of functions is provided. The stack pushes and pops the element from the back of the underlying container, known as the top of the stack. 

All member functions of `std::stack` are constexpr: it is possible to create and use `std::stack` objects in the evaluation of a constant expression.However, `std::stack` objects generally cannot be constexpr, because any dynamically allocated storage must be released in the same evaluation of constant expression. | (since C++26)  
---|---  
  
## Contents

  * [1 Template parameters](stack.html#Template_parameters)
  * [2 Member types](stack.html#Member_types)
  * [3 Member objects](stack.html#Member_objects)
  * [4 Member functions](stack.html#Member_functions)
    * [4.1 Element access](stack.html#Element_access)
    * [4.2 Capacity](stack.html#Capacity)
    * [4.3 Modifiers](stack.html#Modifiers)
  * [5 Non-member functions](stack.html#Non-member_functions)
  * [6 Helper classes](stack.html#Helper_classes)
  * [7 Deduction guides](stack.html#Deduction_guides)
  * [8 Notes](stack.html#Notes)
  * [9 Example](stack.html#Example)
  * [10 Defect reports](stack.html#Defect_reports)
  * [11 See also](stack.html#See_also)

  
---  
  
### Template parameters

T  |  \-  |  The type of the stored elements. The program is ill-formed if `T` is not the same type as `Container::value_type`.   
---|---|---  
Container  |  \-  |  The type of the underlying container to use to store the elements. The container must satisfy the requirements of [SequenceContainer](../named_req/SequenceContainer.html "cpp/named req/SequenceContainer"). Additionally, it must provide the following functions with the [usual semantics](../named_req/SequenceContainer.html#Optional_operations "cpp/named req/SequenceContainer"): 

  * `back()`, e.g., [std::vector::back()](vector/back.html "cpp/container/vector/back"), 
  * `push_back()`, e.g., [std::deque::push_back()](deque/push_back.html "cpp/container/deque/push back"), 
  * `pop_back()`, e.g., [std::list::pop_back()](list/pop_back.html "cpp/container/list/pop back"). 

The standard containers [std::vector](vector.html "cpp/container/vector") (including [`std::vector<bool>`](vector_bool.html "cpp/container/vector bool")), [std::deque](deque.html "cpp/container/deque") and [std::list](list.html "cpp/container/list") satisfy these requirements. By default, if no container class is specified for a particular stack class instantiation, the standard container [std::deque](deque.html "cpp/container/deque") is used.   
  
### Member types

Type  |  Definition   
---|---  
`container_type` |  `Container`  
`value_type` |  `Container::value_type`  
`size_type` |  Container::size_type  
`reference` |  `Container::reference`  
`const_reference` |  `Container::const_reference`  
  
### Member objects

Member  |  Description   
---|---  
Container c |  the underlying container   
(protected member object)   
  
### Member functions

[ (constructor)](stack/stack.html "cpp/container/stack/stack") |  constructs the `stack`   
(public member function)   
---|---  
[ (destructor)](stack/~stack.html "cpp/container/stack/~stack") |  destructs the `stack`   
(public member function)   
[ operator=](stack/operator=.html "cpp/container/stack/operator=") |  assigns values to the container adaptor   
(public member function)   
  
#####  Element access   
  
[ top](stack/top.html "cpp/container/stack/top") |  accesses the top element   
(public member function)   
  
#####  Capacity   
  
[ empty](stack/empty.html "cpp/container/stack/empty") |  checks whether the container adaptor is empty   
(public member function)   
[ size](stack/size.html "cpp/container/stack/size") |  returns the number of elements   
(public member function)   
  
#####  Modifiers   
  
[ push](stack/push.html "cpp/container/stack/push") |  inserts element at the top   
(public member function)   
[ push_range](stack/push_range.html "cpp/container/stack/push range")(C++23) |  inserts a range of elements at the top   
(public member function)   
[ emplace](stack/emplace.html "cpp/container/stack/emplace")(C++11) |  constructs element in-place at the top   
(public member function)   
[ pop](stack/pop.html "cpp/container/stack/pop") |  removes the top element   
(public member function)   
[ swap](stack/swap.html "cpp/container/stack/swap")(C++11) |  swaps the contents   
(public member function)   
  
### Non-member functions

[ operator==operator!=operator<operator<=operator>operator>=operator<=>](stack/operator_cmp.html "cpp/container/stack/operator cmp")(C++20) |  lexicographically compares the values of two `stack`s   
(function template)   
---|---  
[ std::swap(std::stack)](stack/swap2.html "cpp/container/stack/swap2")(C++11) |  specializes the [std::swap](../utility/swap.html "cpp/algorithm/swap") algorithm   
(function template)   
  
### Helper classes

[ std::uses_allocator<std::stack>](stack/uses_allocator.html "cpp/container/stack/uses allocator")(C++11) |  specializes the [std::uses_allocator](../memory/uses_allocator.html "cpp/memory/uses allocator") type trait   
(class template specialization)   
---|---  
[ std::formatter<std::stack>](stack/formatter.html "cpp/container/stack/formatter")(C++23) |  formatting support for `std::stack`   
(class template specialization)   
  
###  [Deduction guides](stack/deduction_guides.html "cpp/container/stack/deduction guides")

| (since C++17)  
---|---  
  
### Notes

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_containers_ranges`](../experimental/feature_test.html#cpp_lib_containers_ranges "cpp/feature test") | [`202202L`](../compiler_support/23.html#cpp_lib_containers_ranges_202202L "cpp/compiler support/23") | (C++23) | Ranges construction and insertion for containers   
[`__cpp_lib_constexpr_stack`](../experimental/feature_test.html#cpp_lib_constexpr_stack "cpp/feature test") | [`202502L`](../compiler_support/26.html#cpp_lib_constexpr_stack_202502L "cpp/compiler support/26") | (C++26) | constexpr `std::stack`  
  
### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 307](https://cplusplus.github.io/LWG/issue307) | C++98  | `Container` could not be `std::vector<bool>` | allowed   
[LWG 2566](https://cplusplus.github.io/LWG/issue2566) | C++98  | Missing the requirement for `Container::value_type` | ill-formed if `T` is not the same type as `Container::value_type`  
  
### See also

[ vector](vector.html "cpp/container/vector") |  resizable contiguous array   
(class template)   
---|---  
[ vector<bool>](vector_bool.html "cpp/container/vector bool") |  space-efficient dynamic bitset   
(class template specialization)   
[ deque](deque.html "cpp/container/deque") |  double-ended queue   
(class template)   
[ list](list.html "cpp/container/list") |  doubly-linked list   
(class template) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
