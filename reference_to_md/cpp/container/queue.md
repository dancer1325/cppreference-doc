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
**queue**  
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
  


`**std::queue**`

[Member functions](queue.html#Member_functions "cpp/container/queue")  
---  
[queue::queue](queue/queue.html "cpp/container/queue/queue")  
[queue::~queue](queue/~queue.html "cpp/container/queue/~queue")  
[queue::operator=](queue/operator=.html "cpp/container/queue/operator=")  
[Element access](queue.html#Element_access "cpp/container/queue")  
[queue::front](queue/front.html "cpp/container/queue/front")  
[queue::back](queue/back.html "cpp/container/queue/back")  
[Capacity](queue.html#Capacity "cpp/container/queue")  
[queue::empty](queue/empty.html "cpp/container/queue/empty")  
[queue::size](queue/size.html "cpp/container/queue/size")  
[Modifiers](queue.html#Modifiers "cpp/container/queue")  
[queue::push](queue/push.html "cpp/container/queue/push")  
[queue::push_range](queue/push_range.html "cpp/container/queue/push range")(C++23)  
[queue::emplace](queue/emplace.html "cpp/container/queue/emplace")(C++11)  
[queue::pop](queue/pop.html "cpp/container/queue/pop")  
[queue::swap](queue/swap.html "cpp/container/queue/swap")(C++11)  
[Non-member functions](queue.html#Non-member_functions "cpp/container/queue")  
[swap(std::queue)](queue/swap2.html "cpp/container/queue/swap2")(C++11)  
[operator==operator!=operator<operator>operator<=operator>=operator<=>](queue/operator_cmp.html "cpp/container/queue/operator cmp")(C++20)  
[Helper classes](queue.html#Helper_classes "cpp/container/queue")  
[uses_allocator<std::queue>](queue/uses_allocator.html "cpp/container/queue/uses allocator")(C++11)  
[formatter<std::queue>](queue/formatter.html "cpp/container/queue/formatter")(C++23)  
[Deduction guides](queue/deduction_guides.html "cpp/container/queue/deduction guides")(C++17)  
  


Defined in header `[<queue>](../header/queue.html "cpp/header/queue")` |  |   
---|---|---  
template<  
class T,  
class Container = [std::deque](deque.html)<T>  
> class queue; |  |   
| |   
  
The `std::queue` class template is a [container adaptor](../container.html#Container_adaptors "cpp/container") that gives the functionality of a [queue](https://en.wikipedia.org/wiki/Queue_\(abstract_data_type\) "enwiki:Queue \(abstract data type\)") \- specifically, a FIFO (first-in, first-out) data structure. 

The class template acts as a wrapper to the underlying container - only a specific set of functions is provided. The queue pushes the elements on the back of the underlying container and pops them from the front. 

All member functions of `std::queue` are constexpr: it is possible to create and use `std::queue` objects in the evaluation of a constant expression.However, `std::queue` objects generally cannot be constexpr, because any dynamically allocated storage must be released in the same evaluation of constant expression. | (since C++26)  
---|---  
  
## Contents

  * [1 Template parameters](queue.html#Template_parameters)
  * [2 Member types](queue.html#Member_types)
  * [3 Member objects](queue.html#Member_objects)
  * [4 Member functions](queue.html#Member_functions)
    * [4.1 Element access](queue.html#Element_access)
    * [4.2 Capacity](queue.html#Capacity)
    * [4.3 Modifiers](queue.html#Modifiers)
  * [5 Non-member functions](queue.html#Non-member_functions)
  * [6 Helper classes](queue.html#Helper_classes)
  * [7 Deduction guides](queue.html#Deduction_guides)
  * [8 Notes](queue.html#Notes)
  * [9 Example](queue.html#Example)
  * [10 Defect reports](queue.html#Defect_reports)
  * [11 See also](queue.html#See_also)

  
---  
  
### Template parameters

T  |  \-  |  The type of the stored elements. The program is ill-formed if `T` is not the same type as `Container::value_type`.   
---|---|---  
Container  |  \-  |  The type of the underlying container to use to store the elements. The container must satisfy the requirements of [SequenceContainer](../named_req/SequenceContainer.html "cpp/named req/SequenceContainer"). Additionally, it must provide the following functions with the [usual semantics](../named_req/SequenceContainer.html#Optional_operations "cpp/named req/SequenceContainer"): 

  * `back()`, e.g., [std::deque::back()](deque/back.html "cpp/container/deque/back"), 
  * `front()`, e.g. [std::list::front()](list/front.html "cpp/container/list/front"), 
  * `push_back()`, e.g., [std::deque::push_back()](deque/push_back.html "cpp/container/deque/push back"), 
  * `pop_front()`, e.g., [std::list::pop_front()](list/pop_front.html "cpp/container/list/pop front"). 

The standard containers [std::deque](deque.html "cpp/container/deque") and [std::list](list.html "cpp/container/list") satisfy these requirements.   
  
### Member types

Member type  |  Definition   
---|---  
`container_type` |  `Container`  
`value_type` |  `Container::value_type`  
`size_type` |  Container::size_type  
`reference` |  `Container::reference`  
`const_reference` |  `Container::const_reference`  
  
### Member objects

Member name  |  Definition   
---|---  
Container c |  the underlying container   
(protected member object)   
  
### Member functions

[ (constructor)](queue/queue.html "cpp/container/queue/queue") |  constructs the `queue`   
(public member function)   
---|---  
[ (destructor)](queue/~queue.html "cpp/container/queue/~queue") |  destructs the `queue`   
(public member function)   
[ operator=](queue/operator=.html "cpp/container/queue/operator=") |  assigns values to the container adaptor   
(public member function)   
  
#####  Element access   
  
[ front](queue/front.html "cpp/container/queue/front") |  access the first element   
(public member function)   
[ back](queue/back.html "cpp/container/queue/back") |  access the last element   
(public member function)   
  
#####  Capacity   
  
[ empty](queue/empty.html "cpp/container/queue/empty") |  checks whether the container adaptor is empty   
(public member function)   
[ size](queue/size.html "cpp/container/queue/size") |  returns the number of elements   
(public member function)   
  
#####  Modifiers   
  
[ push](queue/push.html "cpp/container/queue/push") |  inserts element at the end   
(public member function)   
[ push_range](queue/push_range.html "cpp/container/queue/push range")(C++23) |  inserts a range of elements at the end   
(public member function)   
[ emplace](queue/emplace.html "cpp/container/queue/emplace")(C++11) |  constructs element in-place at the end   
(public member function)   
[ pop](queue/pop.html "cpp/container/queue/pop") |  removes the first element   
(public member function)   
[ swap](queue/swap.html "cpp/container/queue/swap")(C++11) |  swaps the contents   
(public member function)   
  
### Non-member functions

[ operator==operator!=operator<operator<=operator>operator>=operator<=>](queue/operator_cmp.html "cpp/container/queue/operator cmp")(C++20) |  lexicographically compares the values of two `queue`s   
(function template)   
---|---  
[ std::swap(std::queue)](queue/swap2.html "cpp/container/queue/swap2")(C++11) |  specializes the [std::swap](../utility/swap.html "cpp/algorithm/swap") algorithm   
(function template)   
  
### Helper classes

[ std::uses_allocator<std::queue>](queue/uses_allocator.html "cpp/container/queue/uses allocator")(C++11) |  specializes the [std::uses_allocator](../memory/uses_allocator.html "cpp/memory/uses allocator") type trait   
(class template specialization)   
---|---  
[ std::formatter<std::queue>](queue/formatter.html "cpp/container/queue/formatter")(C++23) |  formatting support for `std::queue`   
(class template specialization)   
  
###  [Deduction guides](queue/deduction_guides.html "cpp/container/queue/deduction guides")

| (since C++17)  
---|---  
  
### Notes

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_containers_ranges`](../experimental/feature_test.html#cpp_lib_containers_ranges "cpp/feature test") | [`202202L`](../compiler_support/23.html#cpp_lib_containers_ranges_202202L "cpp/compiler support/23") | (C++23) | Ranges construction and insertion for containers   
[`__cpp_lib_constexpr_queue`](../experimental/feature_test.html#cpp_lib_constexpr_queue "cpp/feature test") | [`202502L`](../compiler_support/26.html#cpp_lib_constexpr_queue_202502L "cpp/compiler support/26") | (C++26) | constexpr `std::queue`  
  
### Example

Run this code
    
    
    #include <cassert>
    #include <iostream>
    #include <queue>
     
    int main()
    {
        std::queue<int> q;
     
        q.push(0); // back pushes 0
        q.push(1); // q = 0 1
        q.push(2); // q = 0 1 2
        q.push(3); // q = 0 1 2 3
     
        [assert](../error/assert.html)(q.front() == 0);
        [assert](../error/assert.html)(q.back() == 3);
        [assert](../error/assert.html)(q.size() == 4);
     
        q.pop(); // removes the front element, 0
        [assert](../error/assert.html)(q.size() == 3);
     
        // Print and remove all elements. Note that std::queue does not
        // support begin()/end(), so a range-for-loop cannot be used.
        [std::cout](../io/cout.html) << "q: ";
        for (; !q.empty(); q.pop())
            [std::cout](../io/cout.html) << q.front() << ' ';
        [std::cout](../io/cout.html) << '\n';
        [assert](../error/assert.html)(q.size() == 0);
    }

Output: 
    
    
    q: 1 2 3

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 307](https://cplusplus.github.io/LWG/issue307) | C++98  | `std::queue` did not support containers using proxy  
reference types[[1]](queue.html#cite_note-1) in place of (`const`) `value_type&` | supported   
[LWG 2566](https://cplusplus.github.io/LWG/issue2566) | C++98  | Missing the requirement for `Container::value_type` | ill-formed if `T` is not the same type as `Container::value_type`  
  
  1. [↑](queue.html#cite_ref-1) Such as containers similar to [`std::vector<bool>`](vector_bool.html "cpp/container/vector bool") with additional support of `pop_front()`. The resolution of this DR  
added support of [`std::vector<bool>`](vector_bool.html "cpp/container/vector bool") for [std::stack](stack.html "cpp/container/stack") and [std::priority_queue](priority_queue.html "cpp/container/priority queue"). The changes involving `std::queue`  
are for maintaining consistency.



### See also

[ priority_queue](priority_queue.html "cpp/container/priority queue") |  adapts a container to provide priority queue   
(class template)   
---|---  
[ deque](deque.html "cpp/container/deque") |  double-ended queue   
(class template)   
[ list](list.html "cpp/container/list") |  doubly-linked list   
(class template) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
