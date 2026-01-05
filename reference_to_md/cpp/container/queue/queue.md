[[edit template]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/constructor_ad&action=edit)

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
**queue::queue**  
[queue::~queue](~queue.html "cpp/container/queue/~queue")  
[queue::operator=](operator=.html "cpp/container/queue/operator=")  
[Element access](../queue.html#Element_access "cpp/container/queue")  
[queue::front](front.html "cpp/container/queue/front")  
[queue::back](back.html "cpp/container/queue/back")  
[Capacity](../queue.html#Capacity "cpp/container/queue")  
[queue::empty](empty.html "cpp/container/queue/empty")  
[queue::size](size.html "cpp/container/queue/size")  
[Modifiers](../queue.html#Modifiers "cpp/container/queue")  
[queue::push](push.html "cpp/container/queue/push")  
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
  


queue() : queue(Container()) {} |  (1)  |  (since C++11)  
---|---|---  
| (2) |   
explicit queue( const Container& cont = Container() ); |  | (until C++11)  
explicit queue( const Container& cont ); |  |  (since C++11)  
explicit queue( Container&& cont ); |  (3)  |  (since C++11)  
queue( const queue& other ); |  (4)  |  (implicitly declared)  
queue( queue&& other ); |  (5)  |  (since C++11)   
(implicitly declared)  
template< class InputIt >  
queue( InputIt first, InputIt last ); |  (6) | (since C++23)  
template< class Alloc >  
explicit queue( const Alloc& alloc ); |  (7)  |  (since C++11)  
template< class Alloc >  
queue( const Container& cont, const Alloc& alloc ); |  (8)  |  (since C++11)  
template< class Alloc >  
queue( Container&& cont, const Alloc& alloc ); |  (9)  |  (since C++11)  
template< class Alloc >  
queue( const queue& other, const Alloc& alloc ); |  (10)  |  (since C++11)  
template< class Alloc >  
queue( queue&& other, const Alloc& alloc ); |  (11)  |  (since C++11)  
template< class InputIt, class Alloc >  
queue( InputIt first, InputIt last, const Alloc& alloc ); |  (12) | (since C++23)  
template< [container-compatible-range](../../ranges/to.html)<T> R>  
queue( [std::from_range_t](../../ranges/from_range.html), R&& rg ); |  (13) | (since C++23)  
template< [container-compatible-range](../../ranges/to.html)<T> R, class Alloc >  
queue( [std::from_range_t](../../ranges/from_range.html), R&& rg, const Alloc& alloc ); |  (14) | (since C++23)  
| |   
  
Constructs new underlying container of the container adaptor from a variety of data sources. 

1) Default constructor. Value-initializes the container.

2) Copy-constructs the underlying container c with the contents of cont. This is also the default constructor.(until C++11)

3) Move-constructs the underlying container c with std::move(cont).

4) [Copy constructor](../../language/copy_constructor.html "cpp/language/copy constructor"). The adaptor is copy-constructed with the contents of other.c.

5) [Move constructor](../../language/move_constructor.html "cpp/language/move constructor"). The adaptor is constructed with std::move(other.c).

6) Constructs the underlying container c with the contents of the range `[`first`, `last`)`. This overload participates in overload resolution only if `InputIt` satisfies [LegacyInputIterator](../../named_req/InputIterator.html "cpp/named req/InputIterator").

7-12) These constructors participate in overload resolution only if [std::uses_allocator](../../memory/uses_allocator.html)<Container, Alloc>::value is true, that is, if the underlying container is an allocator-aware container (true for all standard library containers that can be used with `queue`).

7) Constructs the underlying container using alloc as allocator, as if by c(alloc).

8) Constructs the underlying container with the contents of cont and using alloc as allocator, as if by c(cont, alloc).

9) Constructs the underlying container with the contents of cont using move semantics while utilizing alloc as allocator, as if by c(std::move(cont), alloc).

10) Constructs the adaptor with the contents of other.c and using alloc as allocator, as if by c(other.c, alloc).

11) Constructs the adaptor with the contents of other using move semantics while utilizing alloc as allocator, as if by c(std::move(other.c), alloc).

12) Constructs the underlying container with the contents of the range `[`first`, `last`)` using alloc as allocator, as if by c(first, last, alloc). This overload participates in overload resolution only if `InputIt` satisfies [LegacyInputIterator](../../named_req/InputIterator.html "cpp/named req/InputIterator").

13) Constructs the underlying container with [ranges::to](../../ranges/to.html)<Container>([std::forward](../../utility/forward.html)<R>(rg)).

14) Constructs the underlying container with [ranges::to](../../ranges/to.html)<Container>([std::forward](../../utility/forward.html)<R>(rg), alloc).

## Contents

  * [1 Parameters](queue.html#Parameters)
  * [2 Complexity](queue.html#Complexity)
  * [3 Notes](queue.html#Notes)
  * [4 Example](queue.html#Example)
  * [5 Defect reports](queue.html#Defect_reports)
  * [6 See also](queue.html#See_also)

  
---  
  
### Parameters

alloc  |  \-  |  allocator to use for all memory allocations of the underlying container   
---|---|---  
other  |  \-  |  another container adaptor to be used as source to initialize the underlying container   
cont  |  \-  |  container to be used as source to initialize the underlying container   
first, last  |  \-  |  the pair of iterators defining the source [range](../../iterator.html#Ranges "cpp/iterator") of elements to initialize with   
rg  |  \-  |  a [container compatible range](../../ranges/to.html#container_compatible_range "cpp/ranges/to"), that is, an [`input_range`](../../ranges/input_range.html "cpp/ranges/input range") whose elements are convertible to `T`  
Type requirements   
-`Alloc` must meet the requirements of [Allocator](../../named_req/Allocator.html "cpp/named req/Allocator").   
-`Container` must meet the requirements of [Container](../../named_req/Container.html "cpp/named req/Container"). The constructors taking an allocator parameter participate in overload resolution only if `Container` meets the requirements of [AllocatorAwareContainer](../../named_req/AllocatorAwareContainer.html "cpp/named req/AllocatorAwareContainer").   
-`InputIt` must meet the requirements of [LegacyInputIterator](../../named_req/InputIterator.html "cpp/named req/InputIterator").   
  
### Complexity

Same as the corresponding operation on the wrapped container. 

### Notes

[Feature-test](../../utility/feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_adaptor_iterator_pair_constructor`](../../experimental/feature_test.html#cpp_lib_adaptor_iterator_pair_constructor "cpp/feature test") | [`202106L`](../../compiler_support/23.html#cpp_lib_adaptor_iterator_pair_constructor_202106L "cpp/compiler support/23") | (C++23) | Iterator pair constructors for [std::queue](../queue.html "cpp/container/queue") and [std::stack](../stack.html "cpp/container/stack"); overloads ([6](queue.html#Version_6)) and ([12](queue.html#Version_12))  
[`__cpp_lib_containers_ranges`](../../experimental/feature_test.html#cpp_lib_containers_ranges "cpp/feature test") | [`202202L`](../../compiler_support/23.html#cpp_lib_containers_ranges_202202L "cpp/compiler support/23") | (C++23) | [Ranges-aware](../../ranges/to.html#container_compatible_range "cpp/ranges/to") construction and insertion; overloads ([13](queue.html#Version_13)) and ([14](queue.html#Version_14))  
  
### Example

Run this code
    
    
    #include <cassert>
    #include <deque>
    #include <iostream>
    #include <memory>
    #include <ranges>
    #include <queue>
     
    int main()
    {
        [std::queue](../queue.html)<int> c1;
        c1.push(5);
        [assert](../../error/assert.html)(c1.size() == 1);
     
        [std::queue](../queue.html)<int> c2(c1);
        [assert](../../error/assert.html)(c2.size() == 1);
     
        [std::deque](../deque.html)<int> deq{3, 1, 4, 1, 5};
        [std::queue](../queue.html)<int> c3(deq); // overload (2)
        [assert](../../error/assert.html)(c3.size() == 5);
     
    # ifdef __cpp_lib_adaptor_iterator_pair_constructor
        const auto il = {2, 7, 1, 8, 2};
        [std::queue](../queue.html)<int> c4{il.begin(), il.end()}; // C++23, (6)
        [assert](../../error/assert.html)(c4.size() == 5);
    # endif
     
    # if __cpp_lib_containers_ranges >= 202202L
        // C++23, overload (13)
        auto c5 = [std::queue](../queue.html)([std::from_range_t](../../ranges/from_range.html), std::[ranges::iota](../../algorithm/ranges/iota.html)(0, 42));
        [assert](../../error/assert.html)(c5.size() == 42);
     
        // the same effect with pipe syntax, internally uses overload (13)
        auto c6 = std::[ranges::iota](../../algorithm/ranges/iota.html)(0, 42) | std::[ranges::to](../../ranges/to.html)<[std::queue](../queue.html)>();
        [assert](../../error/assert.html)(c6.size() == 42);
     
        [std::allocator](../../memory/allocator.html)<int> alloc;
     
        // C++23, overload (14)
        auto c7 = [std::queue](../queue.html)([std::from_range_t](../../ranges/from_range.html), std::[ranges::iota](../../algorithm/ranges/iota.html)(0, 42), alloc);
        [assert](../../error/assert.html)(c7.size() == 42);
     
        // the same effect with pipe syntax, internally uses overload (14)
        auto c8 = std::[ranges::iota](../../algorithm/ranges/iota.html)(0, 42) | std::[ranges::to](../../ranges/to.html)<[std::queue](../queue.html)>(alloc);
        [assert](../../error/assert.html)(c8.size() == 42);
    # endif
    }

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[P0935R0](https://wg21.link/P0935R0) | C++11  | default constructor was explicit  | made implicit   
  
### See also

[ operator=](operator=.html "cpp/container/queue/operator=") |  assigns values to the container adaptor   
(public member function)   
---|---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
