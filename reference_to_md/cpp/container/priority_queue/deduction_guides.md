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
  


`[std::priority_queue](../priority_queue.html "cpp/container/priority queue")`

[Member functions](../priority_queue.html#Member_functions "cpp/container/priority queue")  
---  
[priority_queue::priority_queue](priority_queue.html "cpp/container/priority queue/priority queue")  
[priority_queue::~priority_queue](~priority_queue.html "cpp/container/priority queue/~priority queue")  
[priority_queue::operator=](operator=.html "cpp/container/priority queue/operator=")  
[Element access](../priority_queue.html#Element_access "cpp/container/priority queue")  
[priority_queue::top](top.html "cpp/container/priority queue/top")  
[Capacity](../priority_queue.html#Capacity "cpp/container/priority queue")  
[priority_queue::empty](empty.html "cpp/container/priority queue/empty")  
[priority_queue::size](size.html "cpp/container/priority queue/size")  
[Modifiers](../priority_queue.html#Modifiers "cpp/container/priority queue")  
[priority_queue::push](push.html "cpp/container/priority queue/push")  
[priority_queue::push_range](push_range.html "cpp/container/priority queue/push range")(C++23)  
[priority_queue::emplace](emplace.html "cpp/container/priority queue/emplace")(C++11)  
[priority_queue::pop](pop.html "cpp/container/priority queue/pop")  
[priority_queue::swap](swap.html "cpp/container/priority queue/swap")(C++11)  
[Non-member functions](../priority_queue.html#Non-member_functions "cpp/container/priority queue")  
[swap(std::priority_queue)](swap2.html "cpp/container/priority queue/swap2")(C++11)  
[Helper classes](../priority_queue.html#Helper_classes "cpp/container/priority queue")  
[uses_allocator<std::priority_queue>](uses_allocator.html "cpp/container/priority queue/uses allocator")(C++11)  
[formatter<std::priority_queue>](formatter.html "cpp/container/priority queue/formatter")(C++23)  
**Deduction guides**(C++17)  
  


Defined in header `[<queue>](../../header/queue.html "cpp/header/queue")` |  |   
---|---|---  
template< class Comp, class Container >  
priority_queue( Comp, Container )  
-> priority_queue<typename Container::value_type, Container, Comp>; |  (1)  |  (since C++17)  
template< class InputIt,  
class Comp = [std::less](../../utility/functional/less.html)</*iter-val-t*/<InputIt>>,  
class Container = [std::vector](../vector.html)</*iter-val-t*/<InputIt> >  
priority_queue( InputIt, InputIt, Comp = Comp(), Container = Container() )  
-> priority_queue</*iter-val-t*/<InputIt>, Container, Comp>; |  (2)  |  (since C++17)  
template< class Comp, class Container, class Alloc >  
priority_queue( Comp, Container, Alloc )  
-> priority_queue<typename Container::value_type, Container, Comp>; |  (3) | (since C++17)  
template< class InputIt, class Alloc >  
priority_queue( InputIt, InputIt, Alloc )  
-> priority_queue</*iter-val-t*/<InputIt>,  
[std::vector](../vector.html)</*iter-val-t*/<InputIt>, Alloc>,  
[std::less](../../utility/functional/less.html)</*iter-val-t*/<InputIt>>>; |  (4) | (since C++17)  
template< class InputIt, class Comp, class Alloc >  
priority_queue( InputIt, InputIt, Comp, Alloc )  
-> priority_queue</*iter-val-t*/<InputIt>,  
[std::vector](../vector.html)</*iter-val-t*/<InputIt>, Alloc>, Comp>; |  (5)  |  (since C++17)  
template< class InputIt, class Comp, class Container, class Alloc >  
priority_queue( InputIt, InputIt, Comp, Container, Alloc )  
-> priority_queue<typename Container::value_type, Container, Comp>; |  (6)  |  (since C++17)  
template< [ranges::input_range](../../ranges/input_range.html) R,  
class Comp = [std::less](../../utility/functional/less.html)<[ranges::range_value_t](../../ranges/range_size_t.html)<R>> >  
priority_queue( [std::from_range_t](../../ranges/from_range.html), R&&, Comp = Comp() )  
-> priority_queue<[ranges::range_value_t](../../ranges/range_size_t.html)<R>,  
[std::vector](../vector.html)<[ranges::range_value_t](../../ranges/range_size_t.html)<R>>, Comp>; |  (7) | (since C++23)  
template< [ranges::input_range](../../ranges/input_range.html) R, class Comp, class Alloc >  
priority_queue( [std::from_range_t](../../ranges/from_range.html), R&&, Comp, Alloc )  
-> priority_queue<[ranges::range_value_t](../../ranges/range_size_t.html)<R>,  
[std::vector](../vector.html)<[ranges::range_value_t](../../ranges/range_size_t.html)<R>, Alloc>, Comp>; |  (8)  |  (since C++23)  
template< [ranges::input_range](../../ranges/input_range.html) R, class Alloc >  
priority_queue( [std::from_range_t](../../ranges/from_range.html), R&&, Alloc )  
-> priority_queue<[ranges::range_value_t](../../ranges/range_size_t.html)<R>,  
[std::vector](../vector.html)<[ranges::range_value_t](../../ranges/range_size_t.html)<R>, Alloc>>; |  (9)  |  (since C++23)  
Exposition-only helper type aliases |  |   
template< class InputIt >  
using /*iter-val-t*/ =  
typename [std::iterator_traits](../../iterator/iterator_traits.html)<InputIt>::value_type; |  | (exposition only*)  
| |   
  
The following [deduction guides](../../language/ctad.html "cpp/language/class template argument deduction") are provided for [std::priority_queue](../priority_queue.html "cpp/container/priority queue"): 

1-6) Allow deduction from underlying container type and from an iterator range.

7-9) Allow deduction from a [`std::from_range_t`](../../ranges/from_range.html "cpp/ranges/from range") tag and an [input_range](../../ranges/input_range.html "cpp/ranges/input range").

These overloads participate in overload resolution only if 

  * `InputIt` satisfies [LegacyInputIterator](../../named_req/InputIterator.html "cpp/named req/InputIterator"), 
  * `Comp` does not satisfy [Allocator](../../named_req/Allocator.html "cpp/named req/Allocator"), 
  * `Container` does not satisfy [Allocator](../../named_req/Allocator.html "cpp/named req/Allocator"), 
  * for overloads ([4,5](deduction_guides.html#Version_4)),(since C++23) `Alloc` satisfies [Allocator](../../named_req/Allocator.html "cpp/named req/Allocator"), and 
  * for overloads ([3,6](deduction_guides.html#Version_3)), [std::uses_allocator_v](../../memory/uses_allocator.html)<Container, Alloc> is true. 



Note: the extent to which the library determines that a type does not satisfy [LegacyInputIterator](../../named_req/InputIterator.html "cpp/named req/InputIterator") is unspecified, except that as a minimum integral types do not qualify as input iterators. Likewise, the extent to which it determines that a type does not satisfy [Allocator](../../named_req/Allocator.html "cpp/named req/Allocator") is unspecified, except that as a minimum the member type `Alloc::value_type` must exist and the expression [std::declval](../../utility/declval.html)<Alloc&>().allocate([std::size_t](../../types/size_t.html){}) must be well-formed when treated as an unevaluated operand. 

### Notes

[Feature-test](../../utility/feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_containers_ranges`](../../experimental/feature_test.html#cpp_lib_containers_ranges "cpp/feature test") | [`202202L`](../../compiler_support/23.html#cpp_lib_containers_ranges_202202L "cpp/compiler support/23") | (C++23) | [Ranges-aware](../../ranges/to.html#container_compatible_range "cpp/ranges/to") construction and insertion; overloads ([7-9](deduction_guides.html#Version_7))  
  
### Example

Run this code
    
    
    #include <functional>
    #include <iostream>
    #include <queue>
    #include <vector>
     
    int main()
    {
        const [std::vector](../vector.html)<int> v = {1, 2, 3, 4};
        [std::priority_queue](../priority_queue.html) pq1{[std::greater](../../utility/functional/greater.html)<int>{}, v}; // deduces std::priority_queue<
                                                         //     int, std::vector<int>,
                                                         //     std::greater<int>>
        for (; !pq1.empty(); pq1.pop())
            [std::cout](../../io/cout.html) << pq1.top() << ' ';
        [std::cout](../../io/cout.html) << '\n';
     
        [std::priority_queue](../priority_queue.html) pq2{v.begin(), v.end()}; // deduces std::priority_queue<int>
     
        for (; !pq2.empty(); pq2.pop())
            [std::cout](../../io/cout.html) << pq2.top() << ' ';
        [std::cout](../../io/cout.html) << '\n';
    }

Output: 
    
    
    1 2 3 4
    4 3 2 1

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3506](https://cplusplus.github.io/LWG/issue3506) | C++17  | deduction guides from iterator and allocator were missing  | added, ([4-6](deduction_guides.html#Version_4))
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
