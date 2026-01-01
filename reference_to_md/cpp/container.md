[C++](../cpp.html "cpp")

[Compiler support](compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](freestanding.html "cpp/freestanding")  
[Language](language.html "cpp/language")  
[Standard library](standard_library.html "cpp/standard library")  
[Standard library headers](headers.html "cpp/header")  
[Named requirements](iterator/concepts.html "cpp/named req")  
[Feature test macros](experimental/feature_test.html "cpp/feature test") (C++20)  
[Language support library](utility.html#Language_support "cpp/utility")  
[Concepts library](concepts.html "cpp/concepts") (C++20)  
[Diagnostics library](error.html "cpp/error")  
[Memory management library](memory.html "cpp/memory")  
[Metaprogramming library](meta.html "cpp/meta") (C++11)  
[General utilities library](utility.html "cpp/utility")  
**Containers library**  
[Iterators library](iterator.html "cpp/iterator")  
[Ranges library](ranges.html "cpp/ranges") (C++20)  
[Algorithms library](algorithm.html "cpp/algorithm")  
[Strings library](string.html "cpp/string")  
[Text processing library](text.html "cpp/text")  
[Numerics library](numeric.html "cpp/numeric")  
[Date and time library](chrono.html "cpp/chrono")  
[Input/output library](io.html "cpp/io")  
[Filesystem library](filesystem.html "cpp/filesystem") (C++17)  
[Concurrency support library](atomic.html "cpp/thread") (C++11)  
[Execution control library](experimental/execution.html "cpp/execution") (C++26)  
[Technical specifications](experimental.html "cpp/experimental")  
[Symbols index](symbol_index.html "cpp/symbol index")  
[External libraries](links/libs.html "cpp/links/libs")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/navbar_content&action=edit)

**Containers library**

[_node-handle_](container/node_handle.html "cpp/container/node handle")(C++17)  
---  
[Sequence](container.html#Sequence_containers "cpp/container")  
[array](container/array.html "cpp/container/array")(C++11)  
[vector](container/vector.html "cpp/container/vector")  
[vector<bool>](container/vector_bool.html "cpp/container/vector bool")  
[inplace_vector](container/inplace_vector.html "cpp/container/inplace vector")(C++26)  
[hive](https://en.cppreference.com/mwiki/index.php?title=cpp/container/hive&action=edit&redlink=1 "cpp/container/hive \(page does not exist\)")(C++26)  
[deque](container/deque.html "cpp/container/deque")  
[forward_list](container/forward_list.html "cpp/container/forward list")(C++11)  
[list](container/list.html "cpp/container/list")  
[Associative](container.html#Associative_containers "cpp/container")  
[set](container/set.html "cpp/container/set")  
[multiset](container/multiset.html "cpp/container/multiset")  
[map](container/map.html "cpp/container/map")  
[multimap](container/multimap.html "cpp/container/multimap")  
[Unordered associative](container.html#Unordered_associative_containers "cpp/container")  
[unordered_set](container/unordered_set.html "cpp/container/unordered set")(C++11)  
[unordered_multiset](container/unordered_multiset.html "cpp/container/unordered multiset")(C++11)  
[unordered_map](container/unordered_map.html "cpp/container/unordered map")(C++11)  
[unordered_multimap](container/unordered_multimap.html "cpp/container/unordered multimap")(C++11)  
[Adaptors](container.html#Container_adaptors "cpp/container")  
[stack](container/stack.html "cpp/container/stack")  
[queue](container/queue.html "cpp/container/queue")  
[priority_queue](container/priority_queue.html "cpp/container/priority queue")  
[flat_set](container/flat_set.html "cpp/container/flat set")(C++23)  
[flat_multiset](container/flat_multiset.html "cpp/container/flat multiset")(C++23)  
[flat_map](container/flat_map.html "cpp/container/flat map")(C++23)  
[flat_multimap](container/flat_multimap.html "cpp/container/flat multimap")(C++23)  
[Views](container.html#Views "cpp/container")  
[span](container/span.html "cpp/container/span")(C++20)  
[mdspan](container/mdspan.html "cpp/container/mdspan")(C++23)  
Tables  
[Iterator invalidation](container.html#Iterator_invalidation "cpp/container")  
[Member function table](container.html#Member_function_table "cpp/container")  
[Non-member function table](container.html#Non-member_function_table "cpp/container")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/navbar_content&action=edit)

The Containers library is a generic collection of class templates and algorithms that allow programmers to easily implement common data structures like queues, lists and stacks. There are two(until C++11)three(since C++11) classes of containers: 

  * sequence containers, 
  * associative containers, 



  * unordered associative containers, 

| (since C++11)  
---|---  
  
each of which is designed to support a different set of operations. 

The container manages the storage space that is allocated for its elements and provides member functions to access them, either directly or through iterators (objects with properties similar to pointers). 

Most containers have at least several member functions in common, and share functionalities. Which container is the best for the particular application depends not only on the offered functionality, but also on its efficiency for different workloads. 

## Contents

  * [1 Sequence containers](container.html#Sequence_containers)
  * [2 Associative containers](container.html#Associative_containers)
  * [3 Unordered associative containers (since C++11)](container.html#Unordered_associative_containers_.28since_C.2B.2B11.29)
  * [4 Container adaptors](container.html#Container_adaptors)
  * [5 Views (since C++20)](container.html#Views_.28since_C.2B.2B20.29)
  * [6 Iterator invalidation](container.html#Iterator_invalidation)
  * [7 Thread safety](container.html#Thread_safety)
  * [8 Function table](container.html#Function_table)
    * [8.1 Member function table](container.html#Member_function_table)
    * [8.2 Non-member function table](container.html#Non-member_function_table)
  * [9 Defect reports](container.html#Defect_reports)
  * [10 See also](container.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/container&action=edit&section=1 "Edit section: Sequence containers")] Sequence containers

Sequence containers implement data structures which can be accessed sequentially. 

[ array](container/array.html "cpp/container/array")(C++11) |  fixed-sized inplace contiguous array   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_array&action=edit)  
---|---  
[ vector](container/vector.html "cpp/container/vector") |  resizable contiguous array   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_vector&action=edit)  
[ inplace_vector](container/inplace_vector.html "cpp/container/inplace vector")(C++26) |  resizable, fixed capacity, inplace contiguous array   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_inplace_vector&action=edit)  
[ hive](https://en.cppreference.com/mwiki/index.php?title=cpp/container/hive&action=edit&redlink=1 "cpp/container/hive \(page does not exist\)")(C++26) |  collection that reuses erased elements' memory   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_hive&action=edit)  
[ deque](container/deque.html "cpp/container/deque") |  double-ended queue   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_deque&action=edit)  
[ forward_list](container/forward_list.html "cpp/container/forward list")(C++11) |  singly-linked list   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_forward_list&action=edit)  
[ list](container/list.html "cpp/container/list") |  doubly-linked list   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_list&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/container&action=edit&section=2 "Edit section: Associative containers")] Associative containers

Associative containers implement sorted data structures that can be quickly searched (O(log n) complexity). 

[ set](container/set.html "cpp/container/set") |  collection of unique keys, sorted by keys   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_set&action=edit)  
---|---  
[ map](container/map.html "cpp/container/map") |  collection of key-value pairs, sorted by keys, keys are unique   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_map&action=edit)  
[ multiset](container/multiset.html "cpp/container/multiset") |  collection of keys, sorted by keys   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_multiset&action=edit)  
[ multimap](container/multimap.html "cpp/container/multimap") |  collection of key-value pairs, sorted by keys   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_multimap&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/container&action=edit&section=3 "Edit section: Unordered associative containers \(since C++11\)")] Unordered associative containers (since C++11)

Unordered associative containers implement unsorted (hashed) data structures that can be quickly searched (O(1) average, O(n) worst-case complexity). 

[ unordered_set](container/unordered_set.html "cpp/container/unordered set")(C++11) |  collection of unique keys, hashed by keys   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_unordered_set&action=edit)  
---|---  
[ unordered_map](container/unordered_map.html "cpp/container/unordered map")(C++11) |  collection of key-value pairs, hashed by keys, keys are unique   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_unordered_map&action=edit)  
[ unordered_multiset](container/unordered_multiset.html "cpp/container/unordered multiset")(C++11) |  collection of keys, hashed by keys   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_unordered_multiset&action=edit)  
[ unordered_multimap](container/unordered_multimap.html "cpp/container/unordered multimap")(C++11) |  collection of key-value pairs, hashed by keys   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_unordered_multimap&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/container&action=edit&section=4 "Edit section: Container adaptors")] Container adaptors

Container adaptors provide a different interface for sequential containers. 

[ stack](container/stack.html "cpp/container/stack") |  adapts a container to provide stack (LIFO data structure)   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_stack&action=edit)  
---|---  
[ queue](container/queue.html "cpp/container/queue") |  adapts a container to provide queue (FIFO data structure)   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_queue&action=edit)  
[ priority_queue](container/priority_queue.html "cpp/container/priority queue") |  adapts a container to provide priority queue   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_priority_queue&action=edit)  
[ flat_set](container/flat_set.html "cpp/container/flat set")(C++23) |  adapts a container to provide a collection of unique keys, sorted by keys   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_flat_set&action=edit)  
[ flat_map](container/flat_map.html "cpp/container/flat map")(C++23) |  adapts two containers to provide a collection of key-value pairs, sorted by unique keys   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_flat_map&action=edit)  
[ flat_multiset](container/flat_multiset.html "cpp/container/flat multiset")(C++23) |  adapts a container to provide a collection of keys, sorted by keys   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_flat_multiset&action=edit)  
[ flat_multimap](container/flat_multimap.html "cpp/container/flat multimap")(C++23) |  adapts two containers to provide a collection of key-value pairs, sorted by keys   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_flat_multimap&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/container&action=edit&section=5 "Edit section: Views \(since C++20\)")] Views (since C++20)

Views provide flexible facilities for interacting with one- or multi-dimensional views over a non-owning array of elements. 

[ span](container/span.html "cpp/container/span")(C++20) |  a non-owning view over a contiguous sequence of objects   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_span&action=edit)  
---|---  
[ mdspan](container/mdspan.html "cpp/container/mdspan")(C++23) |  a multi-dimensional non-owning array view   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_mdspan&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/container&action=edit&section=6 "Edit section: Iterator invalidation")] Iterator invalidation

Read-only methods never [invalidate](iterator.html#Dereferceability_and_validity "cpp/iterator") iterators or references. Methods which modify the contents of a container may invalidate iterators and/or references, as summarized in this table. 

Category  | Container  | After **insertion** , are...  | After **erasure** , are...  | Conditionally   
---|---|---|---|---  
**iterators** valid?  | **references** valid?  | **iterators** valid?  | **references** valid?   
Sequence containers  | [`array`](container/array.html "cpp/container/array") |  N/A |  N/A |   
[`vector`](container/vector.html "cpp/container/vector") |  No  |  N/A | Insertion changed capacity   
Yes  | Yes  | Before modified element(s)  
(for insertion only if capacity didn't change)   
No  |  No  | At or after modified element(s)   
[`deque`](container/deque.html "cpp/container/deque") |  No  | Yes  | Yes, except erased element(s)  | Modified first or last element   
No  |  No  | Modified middle only   
[`list`](container/list.html "cpp/container/list") | Yes  | Yes, except erased element(s)  |   
[`forward_list`](container/forward_list.html "cpp/container/forward list") | Yes  | Yes, except erased element(s)  |   
Associative containers  | [`set`](container/set.html "cpp/container/set")  
[`multiset`](container/multiset.html "cpp/container/multiset")  
[`map`](container/map.html "cpp/container/map")  
[`multimap`](container/multimap.html "cpp/container/multimap") | Yes  | Yes, except erased element(s)  |   
Unordered associative containers  | [`unordered_set`](container/unordered_set.html "cpp/container/unordered set")  
[`unordered_multiset`](container/unordered_multiset.html "cpp/container/unordered multiset")  
[`unordered_map`](container/unordered_map.html "cpp/container/unordered map")  
[`unordered_multimap`](container/unordered_multimap.html "cpp/container/unordered multimap") |  No  | Yes  |  N/A | Insertion caused rehash   
Yes  | Yes, except erased element(s)  | No rehash   
| This section is incomplete  
Reason: add iterator invalidation for C++23 "flat" adaptors (std::flat_set etc)   
---|---  
| This section is incomplete  
Reason: add iterator invalidation for C++26 std::inplace_vector  
---|---  
  
Here, **insertion** refers to any method which adds one or more elements to the container and **erasure** refers to any method which removes one or more elements from the container. 

  * Examples of insertion methods are [std::set::insert](container/set/insert.html "cpp/container/set/insert"), [std::map::emplace](container/map/emplace.html "cpp/container/map/emplace"), [std::vector::push_back](container/vector/push_back.html "cpp/container/vector/push back"), and [std::deque::push_front](container/deque/push_front.html "cpp/container/deque/push front"). 



    

  * Note that [std::unordered_map::operator[]](container/unordered_map/operator_at.html "cpp/container/unordered map/operator at") also counts, as it may insert an element into the map. 


| (since C++11)  
---|---  
  
  * Examples of erasure methods are [std::set::erase](container/set/erase.html "cpp/container/set/erase"), [std::vector::pop_back](container/vector/pop_back.html "cpp/container/vector/pop back"), [std::deque::pop_front](container/deque/pop_front.html "cpp/container/deque/pop front"), and [std::map::clear](container/map/clear.html "cpp/container/map/clear"). 
    * `clear` invalidates all iterators and references. Because it erases all elements, this technically complies with the rules above. 



Unless otherwise specified (either explicitly or by defining a function in terms of other functions), passing a container as an argument to a library function never invalidate iterators to, or change the values of, objects within that container. 

The past-the-end iterator deserves particular mention. In general this iterator is invalidated as though it were a normal iterator to a non-erased element. So [std::set::end](container/set/end.html "cpp/container/set/end") is never invalidated, [std::unordered_set::end](container/unordered_set/end.html "cpp/container/unordered set/end") is invalidated only on rehash(since C++11), [std::vector::end](container/vector/end.html "cpp/container/vector/end") is always invalidated (since it is always after the modified elements), and so on. 

There is one exception: an erasure which deletes the last element of a [std::deque](container/deque.html "cpp/container/deque") _does_ invalidate the past-the-end iterator, even though it is not an erased element of the container (or an element at all). Combined with the general rules for [std::deque](container/deque.html "cpp/container/deque") iterators, the net result is that the only modifying operation which does _not_ invalidate [std::deque::end](container/deque/end.html "cpp/container/deque/end") is an erasure which deletes the first element, but not the last. 

###  Thread safety

  1. All container functions can be called concurrently by different threads on different containers. More generally, the C++ standard library functions do not read objects accessible by other threads unless those objects are directly or indirectly accessible via the function arguments, including the this pointer. 
  2. All const member functions can be called concurrently by different threads on the same container. In addition, the member functions `begin()`, `end()`, `rbegin()`, `rend()`, `front()`, `back()`, `data()`, `find()`, `lower_bound()`, `upper_bound()`, `equal_range()`, `at()`, and, except in associative containers, `operator[]`, behave as const for the purposes of thread safety (that is, they can also be called concurrently by different threads on the same container). More generally, the C++ standard library functions do not modify objects unless those objects are accessible, directly or indirectly, via the function's non-const arguments, including the this pointer. 
  3. Different elements in the same container can be modified concurrently by different threads, except for the elements of std::vector<bool> (for example, a vector of [std::future](thread/future.html "cpp/thread/future") objects can be receiving values from multiple threads). 
  4. Iterator operations (e.g. incrementing an iterator) read, but do not modify the underlying container, and may be executed concurrently with operations on other iterators on the same container, with the const member functions, or reads from the elements. Container operations that invalidate any iterators modify the container and cannot be executed concurrently with any operations on existing iterators even if those iterators are not invalidated. 
  5. Elements of the same container can be modified concurrently with those member functions that are not specified to access these elements. More generally, the C++ standard library functions do not read objects indirectly accessible through their arguments (including other elements of a container) except when required by its specification. 
  6. In any case, container operations (as well as algorithms, or any other C++ standard library functions) may be parallelized internally as long as this does not change the user-visible results (e.g. [std::transform](algorithm/transform.html "cpp/algorithm/transform") may be parallelized, but not [std::for_each](algorithm/for_each.html "cpp/algorithm/for each") which is specified to visit each element of a sequence in order). 

| (since C++11)  
---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/container&action=edit&section=8 "Edit section: Function table")] Function table

Note: [std::basic_string](string/basic_string.html "cpp/string/basic string") is not treated as a container by the standard but behaves much like one due to its similarity. It is listed as 'Pseudo container' here for convenience. 

|  \- functions present in C++03   
---|---  
|  \- functions present since C++11   
|  \- functions present since C++17   
|  \- functions present since C++20   
|  \- functions present since C++23   
| This section is incomplete  
Reason: Add C++26 "color" and fill member/non-member function table for std::inplace_vector  
---|---  
  
#### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/container&action=edit&section=9 "Edit section: Member function table")] Member function table

| Pseudo container  | Sequence containers  | Associative containers  | Unordered associative containers  | Container adaptors  |   
---|---|---|---|---|---|---  
Header  | `[`<string>`](header/string.html "cpp/header/string")` | `[`<array>`](header/array.html "cpp/header/array")` | `[`<vector>`](header/vector.html "cpp/header/vector")` | `[`<deque>`](header/deque.html "cpp/header/deque")` | `[`<forward_list>`](header/forward_list.html "cpp/header/forward list")` | `[`<list>`](header/list.html "cpp/header/list")` | `[`<set>`](header/set.html "cpp/header/set")` | `[`<map>`](header/map.html "cpp/header/map")` | `[`<unordered_set>`](header/unordered_set.html "cpp/header/unordered set")` | `[`<unordered_map>`](header/unordered_map.html "cpp/header/unordered map")` | `[`<stack>`](header/stack.html "cpp/header/stack")` | `[`<queue>`](header/queue.html "cpp/header/queue")` | `[`<flat_set>`](header/flat_set.html "cpp/header/flat set")` | `[`<flat_map>`](header/flat_map.html "cpp/header/flat map")` | Header   
Container  | [ | `**basic_string**`  
--- ](string/basic_string.html "cpp/string/basic string") [ | `**array**`  
--- ](container/array.html "cpp/container/array") [ | `**vector**`  
--- ](container/vector.html "cpp/container/vector") [ | `**deque**`  
--- ](container/deque.html "cpp/container/deque") [ | `**forward_list**`  
--- ](container/forward_list.html "cpp/container/forward list") [ | `**list**`  
--- ](container/list.html "cpp/container/list") [ | `**set**`  
--- ](container/set.html "cpp/container/set") [ | `**multiset**`  
--- ](container/multiset.html "cpp/container/multiset") [ | `**map**`  
--- ](container/map.html "cpp/container/map") [ | `**multimap**`  
--- ](container/multimap.html "cpp/container/multimap") [ | `**unordered_set**`  
--- ](container/unordered_set.html "cpp/container/unordered set") [ | `**unordered_multiset**`  
--- ](container/unordered_multiset.html "cpp/container/unordered multiset") [ | `**unordered_map**`  
--- ](container/unordered_map.html "cpp/container/unordered map") [ | `**unordered_multimap**`  
--- ](container/unordered_multimap.html "cpp/container/unordered multimap") [ | `**stack**`  
--- ](container/stack.html "cpp/container/stack") [ | `**queue**`  
--- ](container/queue.html "cpp/container/queue") [ | `**priority_queue**`  
--- ](container/priority_queue.html "cpp/container/priority queue") [ | `**flat_set**`  
--- ](container/flat_set.html "cpp/container/flat set") [ | `**flat_multiset**`  
--- ](container/flat_multiset.html "cpp/container/flat multiset") [ | `**flat_map**`  
--- ](container/flat_map.html "cpp/container/flat map") [ | `**flat_multimap**`  
--- ](container/flat_multimap.html "cpp/container/flat multimap") Container   
|  | `(constructor)`  
---  
  
[ | `basic_string`  
--- ](string/basic_string/basic_string.html "cpp/string/basic string/basic string") (implicit) | [ | `vector`  
--- ](container/vector/vector.html "cpp/container/vector/vector") [ | `deque`  
--- ](container/deque/deque.html "cpp/container/deque/deque") [ | `forward_list`  
--- ](container/forward_list/forward_list.html "cpp/container/forward list/forward list") [ | `list`  
--- ](container/list/list.html "cpp/container/list/list") [ | `set`  
--- ](container/set/set.html "cpp/container/set/set") [ | `multiset`  
--- ](container/multiset/multiset.html "cpp/container/multiset/multiset") [ | `map`  
--- ](container/map/map.html "cpp/container/map/map") [ | `multimap`  
--- ](container/multimap/multimap.html "cpp/container/multimap/multimap") [ | `unordered_set`  
--- ](container/unordered_set/unordered_set.html "cpp/container/unordered set/unordered set") [ | `unordered_multiset`  
--- ](container/unordered_multiset/unordered_multiset.html "cpp/container/unordered multiset/unordered multiset") [ | `unordered_map`  
--- ](container/unordered_map/unordered_map.html "cpp/container/unordered map/unordered map") [ | `unordered_multimap`  
--- ](container/unordered_multimap/unordered_multimap.html "cpp/container/unordered multimap/unordered multimap") [ | `stack`  
--- ](container/stack/stack.html "cpp/container/stack/stack") [ | `queue`  
--- ](container/queue/queue.html "cpp/container/queue/queue") [ | `priority_queue`  
--- ](container/priority_queue/priority_queue.html "cpp/container/priority queue/priority queue") [ | `flat_set`  
--- ](container/flat_set/flat_set.html "cpp/container/flat set/flat set") [ | `flat_multiset`  
--- ](container/flat_multiset/flat_multiset.html "cpp/container/flat multiset/flat multiset") [ | `flat_map`  
--- ](container/flat_map/flat_map.html "cpp/container/flat map/flat map") [ | `flat_multimap`  
--- ](container/flat_multimap/flat_multimap.html "cpp/container/flat multimap/flat multimap") | `(constructor)`  
---  
  
| `(destructor)`  
---  
  
[ | `~basic_string`  
--- ](string/basic_string/~basic_string.html "cpp/string/basic string/~basic string") (implicit) | [ | `~vector`  
--- ](container/vector/~vector.html "cpp/container/vector/~vector") [ | `~deque`  
--- ](container/deque/~deque.html "cpp/container/deque/~deque") [ | `~forward_list`  
--- ](container/forward_list/~forward_list.html "cpp/container/forward list/~forward list") [ | `~list`  
--- ](container/list/~list.html "cpp/container/list/~list") [ | `~set`  
--- ](container/set/~set.html "cpp/container/set/~set") [ | `~multiset`  
--- ](container/multiset/~multiset.html "cpp/container/multiset/~multiset") [ | `~map`  
--- ](container/map/~map.html "cpp/container/map/~map") [ | `~multimap`  
--- ](container/multimap/~multimap.html "cpp/container/multimap/~multimap") [ | `~unordered_set`  
--- ](container/unordered_set/~unordered_set.html "cpp/container/unordered set/~unordered set") [ | `~unordered_multiset`  
--- ](container/unordered_multiset/~unordered_multiset.html "cpp/container/unordered multiset/~unordered multiset") [ | `~unordered_map`  
--- ](container/unordered_map/~unordered_map.html "cpp/container/unordered map/~unordered map") [ | `~unordered_multimap`  
--- ](container/unordered_multimap/~unordered_multimap.html "cpp/container/unordered multimap/~unordered multimap") [ | `~stack`  
--- ](container/stack/~stack.html "cpp/container/stack/~stack") [ | `~queue`  
--- ](container/queue/~queue.html "cpp/container/queue/~queue") [ | `~priority_queue`  
--- ](container/priority_queue/~priority_queue.html "cpp/container/priority queue/~priority queue") [ | `~flat_set`  
--- ](https://en.cppreference.com/mwiki/index.php?title=cpp/container/flat_set/%7Eflat_set&action=edit&redlink=1 "cpp/container/flat set/~flat set \(page does not exist\)") [ | `~flat_multiset`  
--- ](https://en.cppreference.com/mwiki/index.php?title=cpp/container/flat_multiset/%7Eflat_multiset&action=edit&redlink=1 "cpp/container/flat multiset/~flat multiset \(page does not exist\)") [ | `~flat_map`  
--- ](https://en.cppreference.com/mwiki/index.php?title=cpp/container/flat_map/%7Eflat_map&action=edit&redlink=1 "cpp/container/flat map/~flat map \(page does not exist\)") [ | `~flat_multimap`  
--- ](https://en.cppreference.com/mwiki/index.php?title=cpp/container/flat_multimap/%7Eflat_multimap&action=edit&redlink=1 "cpp/container/flat multimap/~flat multimap \(page does not exist\)") | `(destructor)`  
---  
  
| `operator=`  
---  
  
[ | `operator=`  
--- ](string/basic_string/operator=.html "cpp/string/basic string/operator=") (implicit) | [ | `operator=`  
--- ](container/vector/operator=.html "cpp/container/vector/operator=") [ | `operator=`  
--- ](container/deque/operator=.html "cpp/container/deque/operator=") [ | `operator=`  
--- ](container/forward_list/operator=.html "cpp/container/forward list/operator=") [ | `operator=`  
--- ](container/list/operator=.html "cpp/container/list/operator=") [ | `operator=`  
--- ](container/set/operator=.html "cpp/container/set/operator=") [ | `operator=`  
--- ](container/multiset/operator=.html "cpp/container/multiset/operator=") [ | `operator=`  
--- ](container/map/operator=.html "cpp/container/map/operator=") [ | `operator=`  
--- ](container/multimap/operator=.html "cpp/container/multimap/operator=") [ | `operator=`  
--- ](container/unordered_set/operator=.html "cpp/container/unordered set/operator=") [ | `operator=`  
--- ](container/unordered_multiset/operator=.html "cpp/container/unordered multiset/operator=") [ | `operator=`  
--- ](container/unordered_map/operator=.html "cpp/container/unordered map/operator=") [ | `operator=`  
--- ](container/unordered_multimap/operator=.html "cpp/container/unordered multimap/operator=") [ | `operator=`  
--- ](container/stack/operator=.html "cpp/container/stack/operator=") [ | `operator=`  
--- ](container/queue/operator=.html "cpp/container/queue/operator=") [ | `operator=`  
--- ](container/priority_queue/operator=.html "cpp/container/priority queue/operator=") [ | `operator=`  
--- ](container/flat_set/operator=.html "cpp/container/flat set/operator=") [ | `operator=`  
--- ](container/flat_multiset/operator=.html "cpp/container/flat multiset/operator=") [ | `operator=`  
--- ](container/flat_map/operator=.html "cpp/container/flat map/operator=") [ | `operator=`  
--- ](container/flat_multimap/operator=.html "cpp/container/flat multimap/operator=") | `operator=`  
---  
  
| `assign`  
---  
  
[ | `assign`  
--- ](string/basic_string/assign.html "cpp/string/basic string/assign") | [ | `assign`  
--- ](container/vector/assign.html "cpp/container/vector/assign") [ | `assign`  
--- ](container/deque/assign.html "cpp/container/deque/assign") [ | `assign`  
--- ](container/forward_list/assign.html "cpp/container/forward list/assign") [ | `assign`  
--- ](container/list/assign.html "cpp/container/list/assign") |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | `assign`  
---  
  
| `assign_range`  
---  
  
[ | `assign_range`  
--- ](string/basic_string/assign_range.html "cpp/string/basic string/assign range") | [ | `assign_range`  
--- ](container/vector/assign_range.html "cpp/container/vector/assign range") [ | `assign_range`  
--- ](container/deque/assign_range.html "cpp/container/deque/assign range") [ | `assign_range`  
--- ](container/forward_list/assign_range.html "cpp/container/forward list/assign range") [ | `assign_range`  
--- ](container/list/assign_range.html "cpp/container/list/assign range") |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | `assign_range`  
---  
  
Iterators  |  | `begin`  
---  
`cbegin`  
[ | `begin`  
---  
`cbegin` ](string/basic_string/begin.html "cpp/string/basic string/begin") [ | `begin`  
---  
`cbegin` ](container/array/begin.html "cpp/container/array/begin") [ | `begin`  
---  
`cbegin` ](container/vector/begin.html "cpp/container/vector/begin") [ | `begin`  
---  
`cbegin` ](container/deque/begin.html "cpp/container/deque/begin") [ | `begin`  
---  
`cbegin` ](container/forward_list/begin.html "cpp/container/forward list/begin") [ | `begin`  
---  
`cbegin` ](container/list/begin.html "cpp/container/list/begin") [ | `begin`  
---  
`cbegin` ](container/set/begin.html "cpp/container/set/begin") [ | `begin`  
---  
`cbegin` ](container/multiset/begin.html "cpp/container/multiset/begin") [ | `begin`  
---  
`cbegin` ](container/map/begin.html "cpp/container/map/begin") [ | `begin`  
---  
`cbegin` ](container/multimap/begin.html "cpp/container/multimap/begin") [ | `begin`  
---  
`cbegin` ](container/unordered_set/begin.html "cpp/container/unordered set/begin") [ | `begin`  
---  
`cbegin` ](container/unordered_multiset/begin.html "cpp/container/unordered multiset/begin") [ | `begin`  
---  
`cbegin` ](container/unordered_map/begin.html "cpp/container/unordered map/begin") [ | `begin`  
---  
`cbegin` ](container/unordered_multimap/begin.html "cpp/container/unordered multimap/begin") |  |  | [ | `begin`  
---  
`cbegin` ](container/flat_set/begin.html "cpp/container/flat set/begin") [ | `begin`  
---  
`cbegin` ](container/flat_multiset/begin.html "cpp/container/flat multiset/begin") [ | `begin`  
---  
`cbegin` ](container/flat_map/begin.html "cpp/container/flat map/begin") [ | `begin`  
---  
`cbegin` ](container/flat_multimap/begin.html "cpp/container/flat multimap/begin") | `begin`  
---  
`cbegin`  
Iterators   
| `end`  
---  
`cend`  
[ | `end`  
---  
`cend` ](string/basic_string/end.html "cpp/string/basic string/end") [ | `end`  
---  
`cend` ](container/array/end.html "cpp/container/array/end") [ | `end`  
---  
`cend` ](container/vector/end.html "cpp/container/vector/end") [ | `end`  
---  
`cend` ](container/deque/end.html "cpp/container/deque/end") [ | `end`  
---  
`cend` ](container/forward_list/end.html "cpp/container/forward list/end") [ | `end`  
---  
`cend` ](container/list/end.html "cpp/container/list/end") [ | `end`  
---  
`cend` ](container/set/end.html "cpp/container/set/end") [ | `end`  
---  
`cend` ](container/multiset/end.html "cpp/container/multiset/end") [ | `end`  
---  
`cend` ](container/map/end.html "cpp/container/map/end") [ | `end`  
---  
`cend` ](container/multimap/end.html "cpp/container/multimap/end") [ | `end`  
---  
`cend` ](container/unordered_set/end.html "cpp/container/unordered set/end") [ | `end`  
---  
`cend` ](container/unordered_multiset/end.html "cpp/container/unordered multiset/end") [ | `end`  
---  
`cend` ](container/unordered_map/end.html "cpp/container/unordered map/end") [ | `end`  
---  
`cend` ](container/unordered_multimap/end.html "cpp/container/unordered multimap/end") |  |  | [ | `end`  
---  
`cend` ](container/flat_set/end.html "cpp/container/flat set/end") [ | `end`  
---  
`cend` ](container/flat_multiset/end.html "cpp/container/flat multiset/end") [ | `end`  
---  
`cend` ](container/flat_map/end.html "cpp/container/flat map/end") [ | `end`  
---  
`cend` ](container/flat_multimap/end.html "cpp/container/flat multimap/end") | `end`  
---  
`cend`  
| `rbegin`  
---  
`crbegin`  
[ | `rbegin`  
---  
`crbegin` ](string/basic_string/rbegin.html "cpp/string/basic string/rbegin") [ | `rbegin`  
---  
`crbegin` ](container/array/rbegin.html "cpp/container/array/rbegin") [ | `rbegin`  
---  
`crbegin` ](container/vector/rbegin.html "cpp/container/vector/rbegin") [ | `rbegin`  
---  
`crbegin` ](container/deque/rbegin.html "cpp/container/deque/rbegin") | [ | `rbegin`  
---  
`crbegin` ](container/list/rbegin.html "cpp/container/list/rbegin") [ | `rbegin`  
---  
`crbegin` ](container/set/rbegin.html "cpp/container/set/rbegin") [ | `rbegin`  
---  
`crbegin` ](container/multiset/rbegin.html "cpp/container/multiset/rbegin") [ | `rbegin`  
---  
`crbegin` ](container/map/rbegin.html "cpp/container/map/rbegin") [ | `rbegin`  
---  
`crbegin` ](container/multimap/rbegin.html "cpp/container/multimap/rbegin") |  |  |  |  |  |  | [ | `rbegin`  
---  
`crbegin` ](container/flat_set/rbegin.html "cpp/container/flat set/rbegin") [ | `rbegin`  
---  
`crbegin` ](container/flat_multiset/rbegin.html "cpp/container/flat multiset/rbegin") [ | `rbegin`  
---  
`crbegin` ](container/flat_map/rbegin.html "cpp/container/flat map/rbegin") [ | `rbegin`  
---  
`crbegin` ](container/flat_multimap/rbegin.html "cpp/container/flat multimap/rbegin") | `rbegin`  
---  
`crbegin`  
| `rend`  
---  
`crend`  
[ | `rend`  
---  
`crend` ](string/basic_string/rend.html "cpp/string/basic string/rend") [ | `rend`  
---  
`crend` ](container/array/rend.html "cpp/container/array/rend") [ | `rend`  
---  
`crend` ](container/vector/rend.html "cpp/container/vector/rend") [ | `rend`  
---  
`crend` ](container/deque/rend.html "cpp/container/deque/rend") | [ | `rend`  
---  
`crend` ](container/list/rend.html "cpp/container/list/rend") [ | `rend`  
---  
`crend` ](container/set/rend.html "cpp/container/set/rend") [ | `rend`  
---  
`crend` ](container/multiset/rend.html "cpp/container/multiset/rend") [ | `rend`  
---  
`crend` ](container/map/rend.html "cpp/container/map/rend") [ | `rend`  
---  
`crend` ](container/multimap/rend.html "cpp/container/multimap/rend") |  |  |  |  |  |  | [ | `rend`  
---  
`crend` ](container/flat_set/rend.html "cpp/container/flat set/rend") [ | `rend`  
---  
`crend` ](container/flat_multiset/rend.html "cpp/container/flat multiset/rend") [ | `rend`  
---  
`crend` ](container/flat_map/rend.html "cpp/container/flat map/rend") [ | `rend`  
---  
`crend` ](container/flat_multimap/rend.html "cpp/container/flat multimap/rend") | `rend`  
---  
`crend`  
Element   
access  |  | `at`  
---  
  
[ | `at`  
--- ](string/basic_string/at.html "cpp/string/basic string/at") [ | `at`  
--- ](container/array/at.html "cpp/container/array/at") [ | `at`  
--- ](container/vector/at.html "cpp/container/vector/at") [ | `at`  
--- ](container/deque/at.html "cpp/container/deque/at") |  |  |  | [ | `at`  
--- ](container/map/at.html "cpp/container/map/at") |  |  | [ | `at`  
--- ](container/unordered_map/at.html "cpp/container/unordered map/at") |  |  |  |  |  | [ | `at`  
--- ](container/flat_map/at.html "cpp/container/flat map/at") |  | `at`  
---  
  
Element   
access   
| `operator[]`  
---  
  
[ | `operator[]`  
--- ](string/basic_string/operator_at.html "cpp/string/basic string/operator at") [ | `operator[]`  
--- ](container/array/operator_at.html "cpp/container/array/operator at") [ | `operator[]`  
--- ](container/vector/operator_at.html "cpp/container/vector/operator at") [ | `operator[]`  
--- ](container/deque/operator_at.html "cpp/container/deque/operator at") |  |  |  | [ | `operator[]`  
--- ](container/map/operator_at.html "cpp/container/map/operator at") |  |  | [ | `operator[]`  
--- ](container/unordered_map/operator_at.html "cpp/container/unordered map/operator at") |  |  |  |  |  | [ | `operator[]`  
--- ](container/flat_map/operator_at.html "cpp/container/flat map/operator at") |  | `operator[]`  
---  
  
| `data`  
---  
  
[ | `data`  
--- ](string/basic_string/data.html "cpp/string/basic string/data") [ | `data`  
--- ](container/array/data.html "cpp/container/array/data") [ | `data`  
--- ](container/vector/data.html "cpp/container/vector/data") |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | `data`  
---  
  
| `front`  
---  
  
[ | `front`  
--- ](string/basic_string/front.html "cpp/string/basic string/front") [ | `front`  
--- ](container/array/front.html "cpp/container/array/front") [ | `front`  
--- ](container/vector/front.html "cpp/container/vector/front") [ | `front`  
--- ](container/deque/front.html "cpp/container/deque/front") [ | `front`  
--- ](container/forward_list/front.html "cpp/container/forward list/front") [ | `front`  
--- ](container/list/front.html "cpp/container/list/front") |  |  |  |  |  |  |  |  | [ | `front`  
--- ](container/queue/front.html "cpp/container/queue/front") [ | `top`  
--- ](container/priority_queue/top.html "cpp/container/priority queue/top") |  |  |  |  | `front`  
---  
  
| `back`  
---  
  
[ | `back`  
--- ](string/basic_string/back.html "cpp/string/basic string/back") [ | `back`  
--- ](container/array/back.html "cpp/container/array/back") [ | `back`  
--- ](container/vector/back.html "cpp/container/vector/back") [ | `back`  
--- ](container/deque/back.html "cpp/container/deque/back") | [ | `back`  
--- ](container/list/back.html "cpp/container/list/back") |  |  |  |  |  |  |  | [ | `top`  
--- ](container/stack/top.html "cpp/container/stack/top") [ | `back`  
--- ](container/queue/back.html "cpp/container/queue/back") |  |  |  |  |  | `back`  
---  
  
Capacity  |  | `empty`  
---  
  
[ | `empty`  
--- ](string/basic_string/empty.html "cpp/string/basic string/empty") [ | `empty`  
--- ](container/array/empty.html "cpp/container/array/empty") [ | `empty`  
--- ](container/vector/empty.html "cpp/container/vector/empty") [ | `empty`  
--- ](container/deque/empty.html "cpp/container/deque/empty") [ | `empty`  
--- ](container/forward_list/empty.html "cpp/container/forward list/empty") [ | `empty`  
--- ](container/list/empty.html "cpp/container/list/empty") [ | `empty`  
--- ](container/set/empty.html "cpp/container/set/empty") [ | `empty`  
--- ](container/multiset/empty.html "cpp/container/multiset/empty") [ | `empty`  
--- ](container/map/empty.html "cpp/container/map/empty") [ | `empty`  
--- ](container/multimap/empty.html "cpp/container/multimap/empty") [ | `empty`  
--- ](container/unordered_set/empty.html "cpp/container/unordered set/empty") [ | `empty`  
--- ](container/unordered_multiset/empty.html "cpp/container/unordered multiset/empty") [ | `empty`  
--- ](container/unordered_map/empty.html "cpp/container/unordered map/empty") [ | `empty`  
--- ](container/unordered_multimap/empty.html "cpp/container/unordered multimap/empty") [ | `empty`  
--- ](container/stack/empty.html "cpp/container/stack/empty") [ | `empty`  
--- ](container/queue/empty.html "cpp/container/queue/empty") [ | `empty`  
--- ](container/priority_queue/empty.html "cpp/container/priority queue/empty") [ | `empty`  
--- ](container/flat_set/empty.html "cpp/container/flat set/empty") [ | `empty`  
--- ](container/flat_multiset/empty.html "cpp/container/flat multiset/empty") [ | `empty`  
--- ](container/flat_map/empty.html "cpp/container/flat map/empty") [ | `empty`  
--- ](container/flat_multimap/empty.html "cpp/container/flat multimap/empty") | `empty`  
---  
  
Capacity   
| `size`  
---  
  
[ | `size`  
--- ](string/basic_string/size.html "cpp/string/basic string/size") [ | `size`  
--- ](container/array/size.html "cpp/container/array/size") [ | `size`  
--- ](container/vector/size.html "cpp/container/vector/size") [ | `size`  
--- ](container/deque/size.html "cpp/container/deque/size") | [ | `size`  
--- ](container/list/size.html "cpp/container/list/size") [ | `size`  
--- ](container/set/size.html "cpp/container/set/size") [ | `size`  
--- ](container/multiset/size.html "cpp/container/multiset/size") [ | `size`  
--- ](container/map/size.html "cpp/container/map/size") [ | `size`  
--- ](container/multimap/size.html "cpp/container/multimap/size") [ | `size`  
--- ](container/unordered_set/size.html "cpp/container/unordered set/size") [ | `size`  
--- ](container/unordered_multiset/size.html "cpp/container/unordered multiset/size") [ | `size`  
--- ](container/unordered_map/size.html "cpp/container/unordered map/size") [ | `size`  
--- ](container/unordered_multimap/size.html "cpp/container/unordered multimap/size") [ | `size`  
--- ](container/stack/size.html "cpp/container/stack/size") [ | `size`  
--- ](container/queue/size.html "cpp/container/queue/size") [ | `size`  
--- ](container/priority_queue/size.html "cpp/container/priority queue/size") [ | `size`  
--- ](container/flat_set/size.html "cpp/container/flat set/size") [ | `size`  
--- ](container/flat_multiset/size.html "cpp/container/flat multiset/size") [ | `size`  
--- ](container/flat_map/size.html "cpp/container/flat map/size") [ | `size`  
--- ](container/flat_multimap/size.html "cpp/container/flat multimap/size") | `size`  
---  
  
| `max_size`  
---  
  
[ | `max_size`  
--- ](string/basic_string/max_size.html "cpp/string/basic string/max size") [ | `max_size`  
--- ](container/array/max_size.html "cpp/container/array/max size") [ | `max_size`  
--- ](container/vector/max_size.html "cpp/container/vector/max size") [ | `max_size`  
--- ](container/deque/max_size.html "cpp/container/deque/max size") [ | `max_size`  
--- ](container/forward_list/max_size.html "cpp/container/forward list/max size") [ | `max_size`  
--- ](container/list/max_size.html "cpp/container/list/max size") [ | `max_size`  
--- ](container/set/max_size.html "cpp/container/set/max size") [ | `max_size`  
--- ](container/multiset/max_size.html "cpp/container/multiset/max size") [ | `max_size`  
--- ](container/map/max_size.html "cpp/container/map/max size") [ | `max_size`  
--- ](container/multimap/max_size.html "cpp/container/multimap/max size") [ | `max_size`  
--- ](container/unordered_set/max_size.html "cpp/container/unordered set/max size") [ | `max_size`  
--- ](container/unordered_multiset/max_size.html "cpp/container/unordered multiset/max size") [ | `max_size`  
--- ](container/unordered_map/max_size.html "cpp/container/unordered map/max size") [ | `max_size`  
--- ](container/unordered_multimap/max_size.html "cpp/container/unordered multimap/max size") |  |  | [ | `max_size`  
--- ](container/flat_set/max_size.html "cpp/container/flat set/max size") [ | `max_size`  
--- ](container/flat_multiset/max_size.html "cpp/container/flat multiset/max size") [ | `max_size`  
--- ](container/flat_map/max_size.html "cpp/container/flat map/max size") [ | `max_size`  
--- ](container/flat_multimap/max_size.html "cpp/container/flat multimap/max size") | `max_size`  
---  
  
| `resize`  
---  
  
[ | `resize`  
--- ](string/basic_string/resize.html "cpp/string/basic string/resize") | [ | `resize`  
--- ](container/vector/resize.html "cpp/container/vector/resize") [ | `resize`  
--- ](container/deque/resize.html "cpp/container/deque/resize") [ | `resize`  
--- ](container/forward_list/resize.html "cpp/container/forward list/resize") [ | `resize`  
--- ](container/list/resize.html "cpp/container/list/resize") |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | `resize`  
---  
  
| `capacity`  
---  
  
[ | `capacity`  
--- ](string/basic_string/capacity.html "cpp/string/basic string/capacity") | [ | `capacity`  
--- ](container/vector/capacity.html "cpp/container/vector/capacity") |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | `capacity`  
---  
  
| `reserve`  
---  
  
[ | `reserve`  
--- ](string/basic_string/reserve.html "cpp/string/basic string/reserve") | [ | `reserve`  
--- ](container/vector/reserve.html "cpp/container/vector/reserve") |  |  |  |  |  |  | [ | `reserve`  
--- ](container/unordered_set/reserve.html "cpp/container/unordered set/reserve") [ | `reserve`  
--- ](container/unordered_multiset/reserve.html "cpp/container/unordered multiset/reserve") [ | `reserve`  
--- ](container/unordered_map/reserve.html "cpp/container/unordered map/reserve") [ | `reserve`  
--- ](container/unordered_multimap/reserve.html "cpp/container/unordered multimap/reserve") |  |  |  |  |  |  |  | `reserve`  
---  
  
| `shrink_to_fit`  
---  
  
[ | `shrink_to_fit`  
--- ](string/basic_string/shrink_to_fit.html "cpp/string/basic string/shrink to fit") | [ | `shrink_to_fit`  
--- ](container/vector/shrink_to_fit.html "cpp/container/vector/shrink to fit") [ | `shrink_to_fit`  
--- ](container/deque/shrink_to_fit.html "cpp/container/deque/shrink to fit") |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | `shrink_to_fit`  
---  
  
Modifiers  |  | `clear`  
---  
  
[ | `clear`  
--- ](string/basic_string/clear.html "cpp/string/basic string/clear") | [ | `clear`  
--- ](container/vector/clear.html "cpp/container/vector/clear") [ | `clear`  
--- ](container/deque/clear.html "cpp/container/deque/clear") [ | `clear`  
--- ](container/forward_list/clear.html "cpp/container/forward list/clear") [ | `clear`  
--- ](container/list/clear.html "cpp/container/list/clear") [ | `clear`  
--- ](container/set/clear.html "cpp/container/set/clear") [ | `clear`  
--- ](container/multiset/clear.html "cpp/container/multiset/clear") [ | `clear`  
--- ](container/map/clear.html "cpp/container/map/clear") [ | `clear`  
--- ](container/multimap/clear.html "cpp/container/multimap/clear") [ | `clear`  
--- ](container/unordered_set/clear.html "cpp/container/unordered set/clear") [ | `clear`  
--- ](container/unordered_multiset/clear.html "cpp/container/unordered multiset/clear") [ | `clear`  
--- ](container/unordered_map/clear.html "cpp/container/unordered map/clear") [ | `clear`  
--- ](container/unordered_multimap/clear.html "cpp/container/unordered multimap/clear") |  |  | [ | `clear`  
--- ](container/flat_set/clear.html "cpp/container/flat set/clear") [ | `clear`  
--- ](container/flat_multiset/clear.html "cpp/container/flat multiset/clear") [ | `clear`  
--- ](container/flat_map/clear.html "cpp/container/flat map/clear") [ | `clear`  
--- ](container/flat_multimap/clear.html "cpp/container/flat multimap/clear") | `clear`  
---  
  
Modifiers   
| `insert`  
---  
  
[ | `insert`  
--- ](string/basic_string/insert.html "cpp/string/basic string/insert") | [ | `insert`  
--- ](container/vector/insert.html "cpp/container/vector/insert") [ | `insert`  
--- ](container/deque/insert.html "cpp/container/deque/insert") [ | `insert_after`  
--- ](container/forward_list/insert_after.html "cpp/container/forward list/insert after") [ | `insert`  
--- ](container/list/insert.html "cpp/container/list/insert") [ | `insert`  
--- ](container/set/insert.html "cpp/container/set/insert") [ | `insert`  
--- ](container/multiset/insert.html "cpp/container/multiset/insert") [ | `insert`  
--- ](container/map/insert.html "cpp/container/map/insert") [ | `insert`  
--- ](container/multimap/insert.html "cpp/container/multimap/insert") [ | `insert`  
--- ](container/unordered_set/insert.html "cpp/container/unordered set/insert") [ | `insert`  
--- ](container/unordered_multiset/insert.html "cpp/container/unordered multiset/insert") [ | `insert`  
--- ](container/unordered_map/insert.html "cpp/container/unordered map/insert") [ | `insert`  
--- ](container/unordered_multimap/insert.html "cpp/container/unordered multimap/insert") |  |  | [ | `insert`  
--- ](container/flat_set/insert.html "cpp/container/flat set/insert") [ | `insert`  
--- ](container/flat_multiset/insert.html "cpp/container/flat multiset/insert") [ | `insert`  
--- ](container/flat_map/insert.html "cpp/container/flat map/insert") [ | `insert`  
--- ](container/flat_multimap/insert.html "cpp/container/flat multimap/insert") | `insert`  
---  
  
| `insert_range`  
---  
  
[ | `insert_range`  
--- ](string/basic_string/insert_range.html "cpp/string/basic string/insert range") | [ | `insert_range`  
--- ](container/vector/insert_range.html "cpp/container/vector/insert range") [ | `insert_range`  
--- ](container/deque/insert_range.html "cpp/container/deque/insert range") [ | `insert_range_after`  
--- ](container/forward_list/insert_range_after.html "cpp/container/forward list/insert range after") [ | `insert_range`  
--- ](container/list/insert_range.html "cpp/container/list/insert range") [ | `insert_range`  
--- ](container/set/insert_range.html "cpp/container/set/insert range") [ | `insert_range`  
--- ](container/multiset/insert_range.html "cpp/container/multiset/insert range") [ | `insert_range`  
--- ](container/map/insert_range.html "cpp/container/map/insert range") [ | `insert_range`  
--- ](container/multimap/insert_range.html "cpp/container/multimap/insert range") [ | `insert_range`  
--- ](container/unordered_set/insert_range.html "cpp/container/unordered set/insert range") [ | `insert_range`  
--- ](container/unordered_multiset/insert_range.html "cpp/container/unordered multiset/insert range") [ | `insert_range`  
--- ](container/unordered_map/insert_range.html "cpp/container/unordered map/insert range") [ | `insert_range`  
--- ](container/unordered_multimap/insert_range.html "cpp/container/unordered multimap/insert range") |  |  | [ | `insert_range`  
--- ](container/flat_set/insert_range.html "cpp/container/flat set/insert range") [ | `insert_range`  
--- ](container/flat_multiset/insert_range.html "cpp/container/flat multiset/insert range") [ | `insert_range`  
--- ](container/flat_map/insert_range.html "cpp/container/flat map/insert range") [ | `insert_range`  
--- ](container/flat_multimap/insert_range.html "cpp/container/flat multimap/insert range") | `insert_range`  
---  
  
| `insert_or_assign`  
---  
  
|  |  |  |  |  |  |  | [ | `insert_or_assign`  
--- ](container/map/insert_or_assign.html "cpp/container/map/insert or assign") |  |  | [ | `insert_or_assign`  
--- ](container/unordered_map/insert_or_assign.html "cpp/container/unordered map/insert or assign") |  |  |  |  |  | [ | `insert_or_assign`  
--- ](container/flat_map/insert_or_assign.html "cpp/container/flat map/insert or assign") |  | `insert_or_assign`  
---  
  
| `emplace`  
---  
  
|  | [ | `emplace`  
--- ](container/vector/emplace.html "cpp/container/vector/emplace") [ | `emplace`  
--- ](container/deque/emplace.html "cpp/container/deque/emplace") [ | `emplace_after`  
--- ](container/forward_list/emplace_after.html "cpp/container/forward list/emplace after") [ | `emplace`  
--- ](container/list/emplace.html "cpp/container/list/emplace") [ | `emplace`  
--- ](container/set/emplace.html "cpp/container/set/emplace") [ | `emplace`  
--- ](container/multiset/emplace.html "cpp/container/multiset/emplace") [ | `emplace`  
--- ](container/map/emplace.html "cpp/container/map/emplace") [ | `emplace`  
--- ](container/multimap/emplace.html "cpp/container/multimap/emplace") [ | `emplace`  
--- ](container/unordered_set/emplace.html "cpp/container/unordered set/emplace") [ | `emplace`  
--- ](container/unordered_multiset/emplace.html "cpp/container/unordered multiset/emplace") [ | `emplace`  
--- ](container/unordered_map/emplace.html "cpp/container/unordered map/emplace") [ | `emplace`  
--- ](container/unordered_multimap/emplace.html "cpp/container/unordered multimap/emplace") |  |  | [ | `emplace`  
--- ](container/flat_set/emplace.html "cpp/container/flat set/emplace") [ | `emplace`  
--- ](container/flat_multiset/emplace.html "cpp/container/flat multiset/emplace") [ | `emplace`  
--- ](container/flat_map/emplace.html "cpp/container/flat map/emplace") [ | `emplace`  
--- ](container/flat_multimap/emplace.html "cpp/container/flat multimap/emplace") | `emplace`  
---  
  
| `emplace_hint`  
---  
  
|  |  |  |  |  | [ | `emplace_hint`  
--- ](container/set/emplace_hint.html "cpp/container/set/emplace hint") [ | `emplace_hint`  
--- ](container/multiset/emplace_hint.html "cpp/container/multiset/emplace hint") [ | `emplace_hint`  
--- ](container/map/emplace_hint.html "cpp/container/map/emplace hint") [ | `emplace_hint`  
--- ](container/multimap/emplace_hint.html "cpp/container/multimap/emplace hint") [ | `emplace_hint`  
--- ](container/unordered_set/emplace_hint.html "cpp/container/unordered set/emplace hint") [ | `emplace_hint`  
--- ](container/unordered_multiset/emplace_hint.html "cpp/container/unordered multiset/emplace hint") [ | `emplace_hint`  
--- ](container/unordered_map/emplace_hint.html "cpp/container/unordered map/emplace hint") [ | `emplace_hint`  
--- ](container/unordered_multimap/emplace_hint.html "cpp/container/unordered multimap/emplace hint") |  |  | [ | `emplace_hint`  
--- ](container/flat_set/emplace_hint.html "cpp/container/flat set/emplace hint") [ | `emplace_hint`  
--- ](container/flat_multiset/emplace_hint.html "cpp/container/flat multiset/emplace hint") [ | `emplace_hint`  
--- ](container/flat_map/emplace_hint.html "cpp/container/flat map/emplace hint") [ | `emplace_hint`  
--- ](container/flat_multimap/emplace_hint.html "cpp/container/flat multimap/emplace hint") | `emplace_hint`  
---  
  
| `try_emplace`  
---  
  
|  |  |  |  |  |  |  | [ | `try_emplace`  
--- ](container/map/try_emplace.html "cpp/container/map/try emplace") |  |  | [ | `try_emplace`  
--- ](container/unordered_map/try_emplace.html "cpp/container/unordered map/try emplace") |  |  |  |  |  | [ | `try_emplace`  
--- ](container/flat_map/try_emplace.html "cpp/container/flat map/try emplace") |  | `try_emplace`  
---  
  
| `erase`  
---  
  
[ | `erase`  
--- ](string/basic_string/erase.html "cpp/string/basic string/erase") | [ | `erase`  
--- ](container/vector/erase.html "cpp/container/vector/erase") [ | `erase`  
--- ](container/deque/erase.html "cpp/container/deque/erase") [ | `erase_after`  
--- ](container/forward_list/erase_after.html "cpp/container/forward list/erase after") [ | `erase`  
--- ](container/list/erase.html "cpp/container/list/erase") [ | `erase`  
--- ](container/set/erase.html "cpp/container/set/erase") [ | `erase`  
--- ](container/multiset/erase.html "cpp/container/multiset/erase") [ | `erase`  
--- ](container/map/erase.html "cpp/container/map/erase") [ | `erase`  
--- ](container/multimap/erase.html "cpp/container/multimap/erase") [ | `erase`  
--- ](container/unordered_set/erase.html "cpp/container/unordered set/erase") [ | `erase`  
--- ](container/unordered_multiset/erase.html "cpp/container/unordered multiset/erase") [ | `erase`  
--- ](container/unordered_map/erase.html "cpp/container/unordered map/erase") [ | `erase`  
--- ](container/unordered_multimap/erase.html "cpp/container/unordered multimap/erase") |  |  | [ | `erase`  
--- ](container/flat_set/erase.html "cpp/container/flat set/erase") [ | `erase`  
--- ](container/flat_multiset/erase.html "cpp/container/flat multiset/erase") [ | `erase`  
--- ](container/flat_map/erase.html "cpp/container/flat map/erase") [ | `erase`  
--- ](container/flat_multimap/erase.html "cpp/container/flat multimap/erase") | `erase`  
---  
  
| `push_front`  
---  
  
|  |  | [ | `push_front`  
--- ](container/deque/push_front.html "cpp/container/deque/push front") [ | `push_front`  
--- ](container/forward_list/push_front.html "cpp/container/forward list/push front") [ | `push_front`  
--- ](container/list/push_front.html "cpp/container/list/push front") |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | `push_front`  
---  
  
| `prepend_range`  
---  
  
|  |  | [ | `prepend_range`  
--- ](container/deque/prepend_range.html "cpp/container/deque/prepend range") [ | `prepend_range`  
--- ](container/forward_list/prepend_range.html "cpp/container/forward list/prepend range") [ | `prepend_range`  
--- ](container/list/prepend_range.html "cpp/container/list/prepend range") |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | `prepend_range`  
---  
  
| `emplace_front`  
---  
  
|  |  | [ | `emplace_front`  
--- ](container/deque/emplace_front.html "cpp/container/deque/emplace front") [ | `emplace_front`  
--- ](container/forward_list/emplace_front.html "cpp/container/forward list/emplace front") [ | `emplace_front`  
--- ](container/list/emplace_front.html "cpp/container/list/emplace front") |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | `emplace_front`  
---  
  
| `pop_front`  
---  
  
|  |  | [ | `pop_front`  
--- ](container/deque/pop_front.html "cpp/container/deque/pop front") [ | `pop_front`  
--- ](container/forward_list/pop_front.html "cpp/container/forward list/pop front") [ | `pop_front`  
--- ](container/list/pop_front.html "cpp/container/list/pop front") |  |  |  |  |  |  |  |  | [ | `pop`  
--- ](container/queue/pop.html "cpp/container/queue/pop") [ | `pop`  
--- ](container/priority_queue/pop.html "cpp/container/priority queue/pop") |  |  |  |  | `pop_front`  
---  
  
| `push_back`  
---  
  
[ | `push_back`  
--- ](string/basic_string/push_back.html "cpp/string/basic string/push back") | [ | `push_back`  
--- ](container/vector/push_back.html "cpp/container/vector/push back") [ | `push_back`  
--- ](container/deque/push_back.html "cpp/container/deque/push back") | [ | `push_back`  
--- ](container/list/push_back.html "cpp/container/list/push back") |  |  |  |  |  |  |  | [ | `push`  
--- ](container/stack/push.html "cpp/container/stack/push") [ | `push`  
--- ](container/queue/push.html "cpp/container/queue/push") [ | `push`  
--- ](container/priority_queue/push.html "cpp/container/priority queue/push") |  |  |  |  | `push_back`  
---  
  
| `append_range`  
---  
  
[ | `append_range`  
--- ](string/basic_string/append_range.html "cpp/string/basic string/append range") | [ | `append_range`  
--- ](container/vector/append_range.html "cpp/container/vector/append range") [ | `append_range`  
--- ](container/deque/append_range.html "cpp/container/deque/append range") | [ | `append_range`  
--- ](container/list/append_range.html "cpp/container/list/append range") |  |  |  |  |  |  |  | [ | `push_range`  
--- ](container/stack/push_range.html "cpp/container/stack/push range") [ | `push_range`  
--- ](container/queue/push_range.html "cpp/container/queue/push range") [ | `push_range`  
--- ](container/priority_queue/push_range.html "cpp/container/priority queue/push range") |  |  |  |  | `append_range`  
---  
  
| `emplace_back`  
---  
  
|  | [ | `emplace_back`  
--- ](container/vector/emplace_back.html "cpp/container/vector/emplace back") [ | `emplace_back`  
--- ](container/deque/emplace_back.html "cpp/container/deque/emplace back") | [ | `emplace_back`  
--- ](container/list/emplace_back.html "cpp/container/list/emplace back") |  |  |  |  |  |  |  | [ | `emplace`  
--- ](container/stack/emplace.html "cpp/container/stack/emplace") [ | `emplace`  
--- ](container/queue/emplace.html "cpp/container/queue/emplace") [ | `emplace`  
--- ](container/priority_queue/emplace.html "cpp/container/priority queue/emplace") |  |  |  |  | `emplace_back`  
---  
  
| `pop_back`  
---  
  
[ | `pop_back`  
--- ](string/basic_string/pop_back.html "cpp/string/basic string/pop back") | [ | `pop_back`  
--- ](container/vector/pop_back.html "cpp/container/vector/pop back") [ | `pop_back`  
--- ](container/deque/pop_back.html "cpp/container/deque/pop back") | [ | `pop_back`  
--- ](container/list/pop_back.html "cpp/container/list/pop back") |  |  |  |  |  |  |  | [ | `pop`  
--- ](container/stack/pop.html "cpp/container/stack/pop") |  |  |  |  |  |  | `pop_back`  
---  
  
| `swap`  
---  
  
[ | `swap`  
--- ](string/basic_string/swap.html "cpp/string/basic string/swap") [ | `swap`  
--- ](container/array/swap.html "cpp/container/array/swap") [ | `swap`  
--- ](container/vector/swap.html "cpp/container/vector/swap") [ | `swap`  
--- ](container/deque/swap.html "cpp/container/deque/swap") [ | `swap`  
--- ](container/forward_list/swap.html "cpp/container/forward list/swap") [ | `swap`  
--- ](container/list/swap.html "cpp/container/list/swap") [ | `swap`  
--- ](container/set/swap.html "cpp/container/set/swap") [ | `swap`  
--- ](container/multiset/swap.html "cpp/container/multiset/swap") [ | `swap`  
--- ](container/map/swap.html "cpp/container/map/swap") [ | `swap`  
--- ](container/multimap/swap.html "cpp/container/multimap/swap") [ | `swap`  
--- ](container/unordered_set/swap.html "cpp/container/unordered set/swap") [ | `swap`  
--- ](container/unordered_multiset/swap.html "cpp/container/unordered multiset/swap") [ | `swap`  
--- ](container/unordered_map/swap.html "cpp/container/unordered map/swap") [ | `swap`  
--- ](container/unordered_multimap/swap.html "cpp/container/unordered multimap/swap") [ | `swap`  
--- ](container/stack/swap.html "cpp/container/stack/swap") [ | `swap`  
--- ](container/queue/swap.html "cpp/container/queue/swap") [ | `swap`  
--- ](container/priority_queue/swap.html "cpp/container/priority queue/swap") [ | `swap`  
--- ](container/unordered_set/swap.html "cpp/container/unordered set/swap") [ | `swap`  
--- ](container/unordered_multiset/swap.html "cpp/container/unordered multiset/swap") [ | `swap`  
--- ](container/unordered_map/swap.html "cpp/container/unordered map/swap") [ | `swap`  
--- ](container/unordered_multimap/swap.html "cpp/container/unordered multimap/swap") | `swap`  
---  
  
| `merge`  
---  
  
|  |  |  | [ | `merge`  
--- ](container/forward_list/merge.html "cpp/container/forward list/merge") [ | `merge`  
--- ](container/list/merge.html "cpp/container/list/merge") [ | `merge`  
--- ](container/set/merge.html "cpp/container/set/merge") [ | `merge`  
--- ](container/multiset/merge.html "cpp/container/multiset/merge") [ | `merge`  
--- ](container/map/merge.html "cpp/container/map/merge") [ | `merge`  
--- ](container/multimap/merge.html "cpp/container/multimap/merge") [ | `merge`  
--- ](container/unordered_set/merge.html "cpp/container/unordered set/merge") [ | `merge`  
--- ](container/unordered_multiset/merge.html "cpp/container/unordered multiset/merge") [ | `merge`  
--- ](container/unordered_map/merge.html "cpp/container/unordered map/merge") [ | `merge`  
--- ](container/unordered_multimap/merge.html "cpp/container/unordered multimap/merge") |  |  |  |  |  |  |  | `merge`  
---  
  
| `extract [[1]](container.html#cite_note-1)`  
---  
  
|  |  |  |  |  | [ | `extract`  
--- ](container/set/extract.html "cpp/container/set/extract") [ | `extract`  
--- ](container/multiset/extract.html "cpp/container/multiset/extract") [ | `extract`  
--- ](container/map/extract.html "cpp/container/map/extract") [ | `extract`  
--- ](container/multimap/extract.html "cpp/container/multimap/extract") [ | `extract`  
--- ](container/unordered_set/extract.html "cpp/container/unordered set/extract") [ | `extract`  
--- ](container/unordered_multiset/extract.html "cpp/container/unordered multiset/extract") [ | `extract`  
--- ](container/unordered_map/extract.html "cpp/container/unordered map/extract") [ | `extract`  
--- ](container/unordered_multimap/extract.html "cpp/container/unordered multimap/extract") |  |  |  |  |  |  |  | `extract`  
---  
  
List operations  |  | `splice`  
---  
  
|  |  |  | [ | `splice_after`  
--- ](container/forward_list/splice_after.html "cpp/container/forward list/splice after") [ | `splice`  
--- ](container/list/splice.html "cpp/container/list/splice") |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | `splice`  
---  
  
List operations   
| `remove`  
---  
  
|  |  |  | [ | `remove`  
--- ](container/forward_list/remove.html "cpp/container/forward list/remove") [ | `remove`  
--- ](container/list/remove.html "cpp/container/list/remove") |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | `remove`  
---  
  
| `remove_if`  
---  
  
|  |  |  | [ | `remove_if`  
--- ](container/forward_list/remove.html "cpp/container/forward list/remove") [ | `remove_if`  
--- ](container/list/remove.html "cpp/container/list/remove") |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | `remove_if`  
---  
  
| `reverse`  
---  
  
|  |  |  | [ | `reverse`  
--- ](container/forward_list/reverse.html "cpp/container/forward list/reverse") [ | `reverse`  
--- ](container/list/reverse.html "cpp/container/list/reverse") |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | `reverse`  
---  
  
| `unique`  
---  
  
|  |  |  | [ | `unique`  
--- ](container/forward_list/unique.html "cpp/container/forward list/unique") [ | `unique`  
--- ](container/list/unique.html "cpp/container/list/unique") |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | `unique`  
---  
  
| `sort`  
---  
  
|  |  |  | [ | `sort`  
--- ](container/forward_list/sort.html "cpp/container/forward list/sort") [ | `sort`  
--- ](container/list/sort.html "cpp/container/list/sort") |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | `sort`  
---  
  
Bucket and Hash  |  | `begin(size_type)`  
---  
`cbegin(size_type)`  
  
|  |  |  |  |  |  |  |  |  | [ | `begin(size_type)`  
---  
`cbegin(size_type)` ](container/unordered_set/begin2.html "cpp/container/unordered set/begin2") [ | `begin(size_type)`  
---  
`cbegin(size_type)` ](container/unordered_multiset/begin2.html "cpp/container/unordered multiset/begin2") [ | `begin(size_type)`  
---  
`cbegin(size_type)` ](container/unordered_map/begin2.html "cpp/container/unordered map/begin2") [ | `begin(size_type)`  
---  
`cbegin(size_type)` ](container/unordered_multimap/begin2.html "cpp/container/unordered multimap/begin2") |  |  |  |  |  |  |  | `begin(size_type)`  
---  
`cbegin(size_type)`  
  
Bucket and Hash   
| `end(size_type)`  
---  
`cend(size_type)`  
  
|  |  |  |  |  |  |  |  |  | [ | `end(size_type)`  
---  
`cend(size_type)` ](container/unordered_set/end2.html "cpp/container/unordered set/end2") [ | `end(size_type)`  
---  
`cend(size_type)` ](container/unordered_multiset/end2.html "cpp/container/unordered multiset/end2") [ | `end(size_type)`  
---  
`cend(size_type)` ](container/unordered_map/end2.html "cpp/container/unordered map/end2") [ | `end(size_type)`  
---  
`cend(size_type)` ](container/unordered_multimap/end.html "cpp/container/unordered multimap/end") |  |  |  |  |  |  |  | `end(size_type)`  
---  
`cend(size_type)`  
  
| `bucket_count`  
---  
  
|  |  |  |  |  |  |  |  |  | [ | `bucket_count`  
--- ](container/unordered_set/bucket_count.html "cpp/container/unordered set/bucket count") [ | `bucket_count`  
--- ](container/unordered_multiset/bucket_count.html "cpp/container/unordered multiset/bucket count") [ | `bucket_count`  
--- ](container/unordered_map/bucket_count.html "cpp/container/unordered map/bucket count") [ | `bucket_count`  
--- ](container/unordered_multimap/bucket_count.html "cpp/container/unordered multimap/bucket count") |  |  |  |  |  |  |  | `bucket_count`  
---  
  
| `max_bucket_count`  
---  
  
|  |  |  |  |  |  |  |  |  | [ | `max_bucket_count`  
--- ](container/unordered_set/max_bucket_count.html "cpp/container/unordered set/max bucket count") [ | `max_bucket_count`  
--- ](container/unordered_multiset/max_bucket_count.html "cpp/container/unordered multiset/max bucket count") [ | `max_bucket_count`  
--- ](container/unordered_map/max_bucket_count.html "cpp/container/unordered map/max bucket count") [ | `max_bucket_count`  
--- ](container/unordered_multimap/max_bucket_count.html "cpp/container/unordered multimap/max bucket count") |  |  |  |  |  |  |  | `max_bucket_count`  
---  
  
| `bucket_size`  
---  
  
|  |  |  |  |  |  |  |  |  | [ | `bucket_size`  
--- ](container/unordered_set/bucket_size.html "cpp/container/unordered set/bucket size") [ | `bucket_size`  
--- ](container/unordered_multiset/bucket_size.html "cpp/container/unordered multiset/bucket size") [ | `bucket_size`  
--- ](container/unordered_map/bucket_size.html "cpp/container/unordered map/bucket size") [ | `bucket_size`  
--- ](container/unordered_multimap/bucket_size.html "cpp/container/unordered multimap/bucket size") |  |  |  |  |  |  |  | `bucket_size`  
---  
  
| `bucket`  
---  
  
|  |  |  |  |  |  |  |  |  | [ | `bucket`  
--- ](container/unordered_set/bucket.html "cpp/container/unordered set/bucket") [ | `bucket`  
--- ](container/unordered_multiset/bucket.html "cpp/container/unordered multiset/bucket") [ | `bucket`  
--- ](container/unordered_map/bucket.html "cpp/container/unordered map/bucket") [ | `bucket`  
--- ](container/unordered_multimap/bucket.html "cpp/container/unordered multimap/bucket") |  |  |  |  |  |  |  | `bucket`  
---  
  
| `load_factor`  
---  
  
|  |  |  |  |  |  |  |  |  | [ | `load_factor`  
--- ](container/unordered_set/load_factor.html "cpp/container/unordered set/load factor") [ | `load_factor`  
--- ](container/unordered_multiset/load_factor.html "cpp/container/unordered multiset/load factor") [ | `load_factor`  
--- ](container/unordered_map/load_factor.html "cpp/container/unordered map/load factor") [ | `load_factor`  
--- ](container/unordered_multimap/load_factor.html "cpp/container/unordered multimap/load factor") |  |  |  |  |  |  |  | `load_factor`  
---  
  
| `max_load_factor`  
---  
  
|  |  |  |  |  |  |  |  |  | [ | `max_load_factor`  
--- ](container/unordered_set/max_load_factor.html "cpp/container/unordered set/max load factor") [ | `max_load_factor`  
--- ](container/unordered_multiset/max_load_factor.html "cpp/container/unordered multiset/max load factor") [ | `max_load_factor`  
--- ](container/unordered_map/max_load_factor.html "cpp/container/unordered map/max load factor") [ | `max_load_factor`  
--- ](container/unordered_multimap/max_load_factor.html "cpp/container/unordered multimap/max load factor") |  |  |  |  |  |  |  | `max_load_factor`  
---  
  
| `rehash`  
---  
  
|  |  |  |  |  |  |  |  |  | [ | `rehash`  
--- ](container/unordered_set/rehash.html "cpp/container/unordered set/rehash") [ | `rehash`  
--- ](container/unordered_multiset/rehash.html "cpp/container/unordered multiset/rehash") [ | `rehash`  
--- ](container/unordered_map/rehash.html "cpp/container/unordered map/rehash") [ | `rehash`  
--- ](container/unordered_multimap/rehash.html "cpp/container/unordered multimap/rehash") |  |  |  |  |  |  |  | `rehash`  
---  
  
Lookup  |  | `count`  
---  
  
|  |  |  |  |  | [ | `count`  
--- ](container/set/count.html "cpp/container/set/count") [ | `count`  
--- ](container/multiset/count.html "cpp/container/multiset/count") [ | `count`  
--- ](container/map/count.html "cpp/container/map/count") [ | `count`  
--- ](container/multimap/count.html "cpp/container/multimap/count") [ | `count`  
--- ](container/unordered_set/count.html "cpp/container/unordered set/count") [ | `count`  
--- ](container/unordered_multiset/count.html "cpp/container/unordered multiset/count") [ | `count`  
--- ](container/unordered_map/count.html "cpp/container/unordered map/count") [ | `count`  
--- ](container/unordered_multimap/count.html "cpp/container/unordered multimap/count") |  |  | [ | `count`  
--- ](container/flat_set/count.html "cpp/container/flat set/count") [ | `count`  
--- ](container/flat_multiset/count.html "cpp/container/flat multiset/count") [ | `count`  
--- ](container/flat_map/count.html "cpp/container/flat map/count") [ | `count`  
--- ](container/flat_multimap/count.html "cpp/container/flat multimap/count") | `count`  
---  
  
Lookup   
| `find`  
---  
  
[ | `find`  
--- ](string/basic_string/find.html "cpp/string/basic string/find") |  |  |  |  | [ | `find`  
--- ](container/set/find.html "cpp/container/set/find") [ | `find`  
--- ](container/multiset/find.html "cpp/container/multiset/find") [ | `find`  
--- ](container/map/find.html "cpp/container/map/find") [ | `find`  
--- ](container/multimap/find.html "cpp/container/multimap/find") [ | `find`  
--- ](container/unordered_set/find.html "cpp/container/unordered set/find") [ | `find`  
--- ](container/unordered_multiset/find.html "cpp/container/unordered multiset/find") [ | `find`  
--- ](container/unordered_map/find.html "cpp/container/unordered map/find") [ | `find`  
--- ](container/unordered_multimap/find.html "cpp/container/unordered multimap/find") |  |  | [ | `find`  
--- ](container/flat_set/find.html "cpp/container/flat set/find") [ | `find`  
--- ](container/flat_multiset/find.html "cpp/container/flat multiset/find") [ | `find`  
--- ](container/flat_map/find.html "cpp/container/flat map/find") [ | `find`  
--- ](container/flat_multimap/find.html "cpp/container/flat multimap/find") | `find`  
---  
  
| `contains`  
---  
  
[ | `contains`  
--- ](string/basic_string/contains.html "cpp/string/basic string/contains") |  |  |  |  | [ | `contains`  
--- ](container/set/contains.html "cpp/container/set/contains") [ | `contains`  
--- ](container/multiset/contains.html "cpp/container/multiset/contains") [ | `contains`  
--- ](container/map/contains.html "cpp/container/map/contains") [ | `contains`  
--- ](container/multimap/contains.html "cpp/container/multimap/contains") [ | `contains`  
--- ](container/unordered_set/contains.html "cpp/container/unordered set/contains") [ | `contains`  
--- ](container/unordered_multiset/contains.html "cpp/container/unordered multiset/contains") [ | `contains`  
--- ](container/unordered_map/contains.html "cpp/container/unordered map/contains") [ | `contains`  
--- ](container/unordered_multimap/contains.html "cpp/container/unordered multimap/contains") |  |  | [ | `contains`  
--- ](container/flat_set/contains.html "cpp/container/flat set/contains") [ | `contains`  
--- ](container/flat_multiset/contains.html "cpp/container/flat multiset/contains") [ | `contains`  
--- ](container/flat_map/contains.html "cpp/container/flat map/contains") [ | `contains`  
--- ](container/flat_multimap/contains.html "cpp/container/flat multimap/contains") | `contains`  
---  
  
| `lower_bound`  
---  
  
|  |  |  |  |  | [ | `lower_bound`  
--- ](container/set/lower_bound.html "cpp/container/set/lower bound") [ | `lower_bound`  
--- ](container/multiset/lower_bound.html "cpp/container/multiset/lower bound") [ | `lower_bound`  
--- ](container/map/lower_bound.html "cpp/container/map/lower bound") [ | `lower_bound`  
--- ](container/multimap/lower_bound.html "cpp/container/multimap/lower bound") |  |  |  |  |  |  | [ | `lower_bound`  
--- ](container/flat_set/lower_bound.html "cpp/container/flat set/lower bound") [ | `lower_bound`  
--- ](container/flat_multiset/lower_bound.html "cpp/container/flat multiset/lower bound") [ | `lower_bound`  
--- ](container/flat_map/lower_bound.html "cpp/container/flat map/lower bound") [ | `lower_bound`  
--- ](container/flat_multimap/lower_bound.html "cpp/container/flat multimap/lower bound") | `lower_bound`  
---  
  
| `upper_bound`  
---  
  
|  |  |  |  |  | [ | `upper_bound`  
--- ](container/set/upper_bound.html "cpp/container/set/upper bound") [ | `upper_bound`  
--- ](container/multiset/upper_bound.html "cpp/container/multiset/upper bound") [ | `upper_bound`  
--- ](container/map/upper_bound.html "cpp/container/map/upper bound") [ | `upper_bound`  
--- ](container/multimap/upper_bound.html "cpp/container/multimap/upper bound") |  |  |  |  |  |  | [ | `upper_bound`  
--- ](container/flat_set/upper_bound.html "cpp/container/flat set/upper bound") [ | `upper_bound`  
--- ](container/flat_multiset/upper_bound.html "cpp/container/flat multiset/upper bound") [ | `upper_bound`  
--- ](container/flat_map/upper_bound.html "cpp/container/flat map/upper bound") [ | `upper_bound`  
--- ](container/flat_multimap/upper_bound.html "cpp/container/flat multimap/upper bound") | `upper_bound`  
---  
  
| `equal_range`  
---  
  
|  |  |  |  |  | [ | `equal_range`  
--- ](container/set/equal_range.html "cpp/container/set/equal range") [ | `equal_range`  
--- ](container/multiset/equal_range.html "cpp/container/multiset/equal range") [ | `equal_range`  
--- ](container/map/equal_range.html "cpp/container/map/equal range") [ | `equal_range`  
--- ](container/multimap/equal_range.html "cpp/container/multimap/equal range") [ | `equal_range`  
--- ](container/unordered_set/equal_range.html "cpp/container/unordered set/equal range") [ | `equal_range`  
--- ](container/unordered_multiset/equal_range.html "cpp/container/unordered multiset/equal range") [ | `equal_range`  
--- ](container/unordered_map/equal_range.html "cpp/container/unordered map/equal range") [ | `equal_range`  
--- ](container/unordered_multimap/equal_range.html "cpp/container/unordered multimap/equal range") |  |  | [ | `equal_range`  
--- ](container/flat_set/equal_range.html "cpp/container/flat set/equal range") [ | `equal_range`  
--- ](container/flat_multiset/equal_range.html "cpp/container/flat multiset/equal range") [ | `equal_range`  
--- ](container/flat_map/equal_range.html "cpp/container/flat map/equal range") [ | `equal_range`  
--- ](container/flat_multimap/equal_range.html "cpp/container/flat multimap/equal range") | `equal_range`  
---  
  
Observers  |  | `key_comp`  
---  
  
|  |  |  |  |  | [ | `key_comp`  
--- ](container/set/key_comp.html "cpp/container/set/key comp") [ | `key_comp`  
--- ](container/multiset/key_comp.html "cpp/container/multiset/key comp") [ | `key_comp`  
--- ](container/map/key_comp.html "cpp/container/map/key comp") [ | `key_comp`  
--- ](container/multimap/key_comp.html "cpp/container/multimap/key comp") |  |  |  |  |  |  | [ | `key_comp`  
--- ](container/flat_set/key_comp.html "cpp/container/flat set/key comp") [ | `key_comp`  
--- ](container/flat_multiset/key_comp.html "cpp/container/flat multiset/key comp") [ | `key_comp`  
--- ](container/flat_map/key_comp.html "cpp/container/flat map/key comp") [ | `key_comp`  
--- ](container/flat_multimap/key_comp.html "cpp/container/flat multimap/key comp") | `key_comp`  
---  
  
Observers   
| `value_comp`  
---  
  
|  |  |  |  |  | [ | `value_comp`  
--- ](container/set/value_comp.html "cpp/container/set/value comp") [ | `value_comp`  
--- ](container/multiset/value_comp.html "cpp/container/multiset/value comp") [ | `value_comp`  
--- ](container/map/value_comp.html "cpp/container/map/value comp") [ | `value_comp`  
--- ](container/multimap/value_comp.html "cpp/container/multimap/value comp") |  |  |  |  |  |  | [ | `value_comp`  
--- ](container/flat_set/value_comp.html "cpp/container/flat set/value comp") [ | `value_comp`  
--- ](container/flat_multiset/value_comp.html "cpp/container/flat multiset/value comp") [ | `value_comp`  
--- ](container/flat_map/value_comp.html "cpp/container/flat map/value comp") [ | `value_comp`  
--- ](container/flat_multimap/value_comp.html "cpp/container/flat multimap/value comp") | `value_comp`  
---  
  
| `hash_function`  
---  
  
|  |  |  |  |  |  |  |  |  | [ | `hash_function`  
--- ](container/unordered_set/hash_function.html "cpp/container/unordered set/hash function") [ | `hash_function`  
--- ](container/unordered_multiset/hash_function.html "cpp/container/unordered multiset/hash function") [ | `hash_function`  
--- ](container/unordered_map/hash_function.html "cpp/container/unordered map/hash function") [ | `hash_function`  
--- ](container/unordered_multimap/hash_function.html "cpp/container/unordered multimap/hash function") |  |  |  |  |  |  |  | `hash_function`  
---  
  
| `key_eq`  
---  
  
|  |  |  |  |  |  |  |  |  | [ | `key_eq`  
--- ](container/unordered_set/key_eq.html "cpp/container/unordered set/key eq") [ | `key_eq`  
--- ](container/unordered_multiset/key_eq.html "cpp/container/unordered multiset/key eq") [ | `key_eq`  
--- ](container/unordered_map/key_eq.html "cpp/container/unordered map/key eq") [ | `key_eq`  
--- ](container/unordered_multimap/key_eq.html "cpp/container/unordered multimap/key eq") |  |  |  |  |  |  |  | `key_eq`  
---  
  
Allocator  |  | `get_allocator`  
---  
  
[ | `get_allocator`  
--- ](string/basic_string/get_allocator.html "cpp/string/basic string/get allocator") | [ | `get_allocator`  
--- ](container/vector/get_allocator.html "cpp/container/vector/get allocator") [ | `get_allocator`  
--- ](container/deque/get_allocator.html "cpp/container/deque/get allocator") [ | `get_allocator`  
--- ](container/forward_list/get_allocator.html "cpp/container/forward list/get allocator") [ | `get_allocator`  
--- ](container/list/get_allocator.html "cpp/container/list/get allocator") [ | `get_allocator`  
--- ](container/set/get_allocator.html "cpp/container/set/get allocator") [ | `get_allocator`  
--- ](container/multiset/get_allocator.html "cpp/container/multiset/get allocator") [ | `get_allocator`  
--- ](container/map/get_allocator.html "cpp/container/map/get allocator") [ | `get_allocator`  
--- ](container/multimap/get_allocator.html "cpp/container/multimap/get allocator") [ | `get_allocator`  
--- ](container/unordered_set/get_allocator.html "cpp/container/unordered set/get allocator") [ | `get_allocator`  
--- ](container/unordered_multiset/get_allocator.html "cpp/container/unordered multiset/get allocator") [ | `get_allocator`  
--- ](container/unordered_map/get_allocator.html "cpp/container/unordered map/get allocator") [ | `get_allocator`  
--- ](container/unordered_multimap/get_allocator.html "cpp/container/unordered multimap/get allocator") |  |  |  |  |  |  |  | `get_allocator`  
---  
  
Allocator   
Adaptors  |  | `extract [[2]](container.html#cite_note-2)`  
---  
  
|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | [ | `extract`  
--- ](container/flat_set/extract.html "cpp/container/flat set/extract") [ | `extract`  
--- ](container/flat_multiset/extract.html "cpp/container/flat multiset/extract") [ | `extract`  
--- ](container/flat_map/extract.html "cpp/container/flat map/extract") [ | `extract`  
--- ](container/flat_multimap/extract.html "cpp/container/flat multimap/extract") | `extract`  
---  
  
Adaptors   
| `replace`  
---  
  
|  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | [ | `replace`  
--- ](container/flat_set/replace.html "cpp/container/flat set/replace") [ | `replace`  
--- ](container/flat_multiset/replace.html "cpp/container/flat multiset/replace") [ | `replace`  
--- ](container/flat_map/replace.html "cpp/container/flat map/replace") [ | `replace`  
--- ](container/flat_multimap/replace.html "cpp/container/flat multimap/replace") | `replace`  
---  
  
Container  | [ | `**basic_string**`  
--- ](string/basic_string.html "cpp/string/basic string") [ | `**array**`  
--- ](container/array.html "cpp/container/array") [ | `**vector**`  
--- ](container/vector.html "cpp/container/vector") [ | `**deque**`  
--- ](container/deque.html "cpp/container/deque") [ | `**forward_list**`  
--- ](container/forward_list.html "cpp/container/forward list") [ | `**list**`  
--- ](container/list.html "cpp/container/list") [ | `**set**`  
--- ](container/set.html "cpp/container/set") [ | `**multiset**`  
--- ](container/multiset.html "cpp/container/multiset") [ | `**map**`  
--- ](container/map.html "cpp/container/map") [ | `**multimap**`  
--- ](container/multimap.html "cpp/container/multimap") [ | `**unordered_set**`  
--- ](container/unordered_set.html "cpp/container/unordered set") [ | `**unordered_multiset**`  
--- ](container/unordered_multiset.html "cpp/container/unordered multiset") [ | `**unordered_map**`  
--- ](container/unordered_map.html "cpp/container/unordered map") [ | `**unordered_multimap**`  
--- ](container/unordered_multimap.html "cpp/container/unordered multimap") [ | `**stack**`  
--- ](container/stack.html "cpp/container/stack") [ | `**queue**`  
--- ](container/queue.html "cpp/container/queue") [ | `**priority_queue**`  
--- ](container/priority_queue.html "cpp/container/priority queue") [ | `**flat_set**`  
--- ](container/flat_set.html "cpp/container/flat set") [ | `**flat_multiset**`  
--- ](container/flat_multiset.html "cpp/container/flat multiset") [ | `**flat_map**`  
--- ](container/flat_map.html "cpp/container/flat map") [ | `**flat_multimap**`  
--- ](container/flat_multimap.html "cpp/container/flat multimap") Container   
Header  | `[`<string>`](header/string.html "cpp/header/string")` | `[`<array>`](header/array.html "cpp/header/array")` | `[`<vector>`](header/vector.html "cpp/header/vector")` | `[`<deque>`](header/deque.html "cpp/header/deque")` | `[`<forward_list>`](header/forward_list.html "cpp/header/forward list")` | `[`<list>`](header/list.html "cpp/header/list")` | `[`<set>`](header/set.html "cpp/header/set")` | `[`<map>`](header/map.html "cpp/header/map")` | `[`<unordered_set>`](header/unordered_set.html "cpp/header/unordered set")` | `[`<unordered_map>`](header/unordered_map.html "cpp/header/unordered map")` | `[`<stack>`](header/stack.html "cpp/header/stack")` | `[`<queue>`](header/queue.html "cpp/header/queue")` | `[`<flat_set>`](header/flat_set.html "cpp/header/flat set")` | `[`<flat_map>`](header/flat_map.html "cpp/header/flat map")` | Header   
| Pseudo container  | Sequence containers  | Associative containers  | Unordered associative containers  | Container adaptors  |   
  
  * Note: functions in two different extract lines have different meanings and syntax: 


  1. [↑](container.html#cite_ref-1) e.g., node_type extract(const_iterator) or node_type extract(Key&)
  2. [↑](container.html#cite_ref-2) e.g., container_type extract() &&



#### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/container&action=edit&section=10 "Edit section: Non-member function table")] Non-member function table

| Pseudo container  | Sequence containers  | Associative containers  | Unordered associative containers  | Container adaptors  |   
---|---|---|---|---|---|---  
Header  | `[`<string>`](header/string.html "cpp/header/string")` | `[`<array>`](header/array.html "cpp/header/array")` | `[`<vector>`](header/vector.html "cpp/header/vector")` | `[`<deque>`](header/deque.html "cpp/header/deque")` | `[`<forward_list>`](header/forward_list.html "cpp/header/forward list")` | `[`<list>`](header/list.html "cpp/header/list")` | `[`<set>`](header/set.html "cpp/header/set")` | `[`<map>`](header/map.html "cpp/header/map")` | `[`<unordered_set>`](header/unordered_set.html "cpp/header/unordered set")` | `[`<unordered_map>`](header/unordered_map.html "cpp/header/unordered map")` | `[`<stack>`](header/stack.html "cpp/header/stack")` | `[`<queue>`](header/queue.html "cpp/header/queue")` | `[`<flat_set>`](header/flat_set.html "cpp/header/flat set")` | `[`<flat_map>`](header/flat_map.html "cpp/header/flat map")` | Header   
Container  | [ | `**basic_string**`  
--- ](string/basic_string.html "cpp/string/basic string") [ | `**array**`  
--- ](container/array.html "cpp/container/array") [ | `**vector**`  
--- ](container/vector.html "cpp/container/vector") [ | `**deque**`  
--- ](container/deque.html "cpp/container/deque") [ | `**forward_list**`  
--- ](container/forward_list.html "cpp/container/forward list") [ | `**list**`  
--- ](container/list.html "cpp/container/list") [ | `**set**`  
--- ](container/set.html "cpp/container/set") [ | `**multiset**`  
--- ](container/multiset.html "cpp/container/multiset") [ | `**map**`  
--- ](container/map.html "cpp/container/map") [ | `**multimap**`  
--- ](container/multimap.html "cpp/container/multimap") [ | `**unordered_set**`  
--- ](container/unordered_set.html "cpp/container/unordered set") [ | `**unordered_multiset**`  
--- ](container/unordered_multiset.html "cpp/container/unordered multiset") [ | `**unordered_map**`  
--- ](container/unordered_map.html "cpp/container/unordered map") [ | `**unordered_multimap**`  
--- ](container/unordered_multimap.html "cpp/container/unordered multimap") [ | `**stack**`  
--- ](container/stack.html "cpp/container/stack") [ | `**queue**`  
--- ](container/queue.html "cpp/container/queue") [ | `**priority_queue**`  
--- ](container/priority_queue.html "cpp/container/priority queue") [ | `**flat_set**`  
--- ](container/flat_set.html "cpp/container/flat set") [ | `**flat_multiset**`  
--- ](container/flat_multiset.html "cpp/container/flat multiset") [ | `**flat_map**`  
--- ](container/flat_map.html "cpp/container/flat map") [ | `**flat_multimap**`  
--- ](container/flat_multimap.html "cpp/container/flat multimap") Container   
Non-member function  |  | `operator==`  
---  
  
[ | `operator==`  
--- ](string/basic_string/operator_cmp.html "cpp/string/basic string/operator cmp") [ | `operator==`  
--- ](container/array/operator_cmp.html "cpp/container/array/operator cmp") [ | `operator==`  
--- ](container/vector/operator_cmp.html "cpp/container/vector/operator cmp") [ | `operator==`  
--- ](container/deque/operator_cmp.html "cpp/container/deque/operator cmp") [ | `operator==`  
--- ](container/forward_list/operator_cmp.html "cpp/container/forward list/operator cmp") [ | `operator==`  
--- ](container/list/operator_cmp.html "cpp/container/list/operator cmp") [ | `operator==`  
--- ](container/set/operator_cmp.html "cpp/container/set/operator cmp") [ | `operator==`  
--- ](container/multiset/operator_cmp.html "cpp/container/multiset/operator cmp") [ | `operator==`  
--- ](container/map/operator_cmp.html "cpp/container/map/operator cmp") [ | `operator==`  
--- ](container/multimap/operator_cmp.html "cpp/container/multimap/operator cmp") [ | `operator==`  
--- ](container/unordered_set/operator_cmp.html "cpp/container/unordered set/operator cmp") [ | `operator==`  
--- ](container/unordered_multiset/operator_cmp.html "cpp/container/unordered multiset/operator cmp") [ | `operator==`  
--- ](container/unordered_map/operator_cmp.html "cpp/container/unordered map/operator cmp") [ | `operator==`  
--- ](container/unordered_multimap/operator_cmp.html "cpp/container/unordered multimap/operator cmp") [ | `operator==`  
--- ](container/stack/operator_cmp.html "cpp/container/stack/operator cmp") [ | `operator==`  
--- ](container/queue/operator_cmp.html "cpp/container/queue/operator cmp") | [ | `operator==`  
--- ](container/flat_set/operator_cmp.html "cpp/container/flat set/operator cmp") [ | `operator==`  
--- ](container/flat_multiset/operator_cmp.html "cpp/container/flat multiset/operator cmp") [ | `operator==`  
--- ](container/flat_map/operator_cmp.html "cpp/container/flat map/operator cmp") [ | `operator==`  
--- ](container/flat_multimap/operator_cmp.html "cpp/container/flat multimap/operator cmp") | `operator==`  
---  
  
Non-member function   
| `operator!= (removed in C++20)`  
---  
  
[ | `operator!=`  
--- ](string/basic_string/operator_cmp.html "cpp/string/basic string/operator cmp") [ | `operator!=`  
--- ](container/array/operator_cmp.html "cpp/container/array/operator cmp") [ | `operator!=`  
--- ](container/vector/operator_cmp.html "cpp/container/vector/operator cmp") [ | `operator!=`  
--- ](container/deque/operator_cmp.html "cpp/container/deque/operator cmp") [ | `operator!=`  
--- ](container/forward_list/operator_cmp.html "cpp/container/forward list/operator cmp") [ | `operator!=`  
--- ](container/list/operator_cmp.html "cpp/container/list/operator cmp") [ | `operator!=`  
--- ](container/set/operator_cmp.html "cpp/container/set/operator cmp") [ | `operator!=`  
--- ](container/multiset/operator_cmp.html "cpp/container/multiset/operator cmp") [ | `operator!=`  
--- ](container/map/operator_cmp.html "cpp/container/map/operator cmp") [ | `operator!=`  
--- ](container/multimap/operator_cmp.html "cpp/container/multimap/operator cmp") [ | `operator!=`  
--- ](container/unordered_set/operator_cmp.html "cpp/container/unordered set/operator cmp") [ | `operator!=`  
--- ](container/unordered_multiset/operator_cmp.html "cpp/container/unordered multiset/operator cmp") [ | `operator!=`  
--- ](container/unordered_map/operator_cmp.html "cpp/container/unordered map/operator cmp") [ | `operator!=`  
--- ](container/unordered_multimap/operator_cmp.html "cpp/container/unordered multimap/operator cmp") [ | `operator!=`  
--- ](container/stack/operator_cmp.html "cpp/container/stack/operator cmp") [ | `operator!=`  
--- ](container/queue/operator_cmp.html "cpp/container/queue/operator cmp") |  |  |  |  |  | `operator!= (removed in C++20)`  
---  
  
| `operator< (removed in C++20)`  
---  
  
[ | `operator<`  
--- ](string/basic_string/operator_cmp.html "cpp/string/basic string/operator cmp") [ | `operator<`  
--- ](container/array/operator_cmp.html "cpp/container/array/operator cmp") [ | `operator<`  
--- ](container/vector/operator_cmp.html "cpp/container/vector/operator cmp") [ | `operator<`  
--- ](container/deque/operator_cmp.html "cpp/container/deque/operator cmp") [ | `operator<`  
--- ](container/forward_list/operator_cmp.html "cpp/container/forward list/operator cmp") [ | `operator<`  
--- ](container/list/operator_cmp.html "cpp/container/list/operator cmp") [ | `operator<`  
--- ](container/set/operator_cmp.html "cpp/container/set/operator cmp") [ | `operator<`  
--- ](container/multiset/operator_cmp.html "cpp/container/multiset/operator cmp") [ | `operator<`  
--- ](container/map/operator_cmp.html "cpp/container/map/operator cmp") [ | `operator<`  
--- ](container/multimap/operator_cmp.html "cpp/container/multimap/operator cmp") |  |  |  | [ | `operator<`  
--- ](container/stack/operator_cmp.html "cpp/container/stack/operator cmp") [ | `operator<`  
--- ](container/queue/operator_cmp.html "cpp/container/queue/operator cmp") |  |  |  |  |  | `operator< (removed in C++20)`  
---  
  
| `operator<= (removed in C++20)`  
---  
  
[ | `operator<=`  
--- ](string/basic_string/operator_cmp.html "cpp/string/basic string/operator cmp") [ | `operator<=`  
--- ](container/array/operator_cmp.html "cpp/container/array/operator cmp") [ | `operator<=`  
--- ](container/vector/operator_cmp.html "cpp/container/vector/operator cmp") [ | `operator<=`  
--- ](container/deque/operator_cmp.html "cpp/container/deque/operator cmp") [ | `operator<=`  
--- ](container/forward_list/operator_cmp.html "cpp/container/forward list/operator cmp") [ | `operator<=`  
--- ](container/list/operator_cmp.html "cpp/container/list/operator cmp") [ | `operator<=`  
--- ](container/set/operator_cmp.html "cpp/container/set/operator cmp") [ | `operator<=`  
--- ](container/multiset/operator_cmp.html "cpp/container/multiset/operator cmp") [ | `operator<=`  
--- ](container/map/operator_cmp.html "cpp/container/map/operator cmp") [ | `operator<=`  
--- ](container/multimap/operator_cmp.html "cpp/container/multimap/operator cmp") |  |  |  | [ | `operator<=`  
--- ](container/stack/operator_cmp.html "cpp/container/stack/operator cmp") [ | `operator<=`  
--- ](container/queue/operator_cmp.html "cpp/container/queue/operator cmp") |  |  |  |  |  | `operator<= (removed in C++20)`  
---  
  
| `operator> (removed in C++20)`  
---  
  
[ | `operator>`  
--- ](string/basic_string/operator_cmp.html "cpp/string/basic string/operator cmp") [ | `operator>`  
--- ](container/array/operator_cmp.html "cpp/container/array/operator cmp") [ | `operator>`  
--- ](container/vector/operator_cmp.html "cpp/container/vector/operator cmp") [ | `operator>`  
--- ](container/deque/operator_cmp.html "cpp/container/deque/operator cmp") [ | `operator>`  
--- ](container/forward_list/operator_cmp.html "cpp/container/forward list/operator cmp") [ | `operator>`  
--- ](container/list/operator_cmp.html "cpp/container/list/operator cmp") [ | `operator>`  
--- ](container/set/operator_cmp.html "cpp/container/set/operator cmp") [ | `operator>`  
--- ](container/multiset/operator_cmp.html "cpp/container/multiset/operator cmp") [ | `operator>`  
--- ](container/map/operator_cmp.html "cpp/container/map/operator cmp") [ | `operator>`  
--- ](container/multimap/operator_cmp.html "cpp/container/multimap/operator cmp") |  |  |  | [ | `operator>`  
--- ](container/stack/operator_cmp.html "cpp/container/stack/operator cmp") [ | `operator>`  
--- ](container/queue/operator_cmp.html "cpp/container/queue/operator cmp") |  |  |  |  |  | `operator> (removed in C++20)`  
---  
  
| `operator>= (removed in C++20)`  
---  
  
[ | `operator>=`  
--- ](string/basic_string/operator_cmp.html "cpp/string/basic string/operator cmp") [ | `operator>=`  
--- ](container/array/operator_cmp.html "cpp/container/array/operator cmp") [ | `operator>=`  
--- ](container/vector/operator_cmp.html "cpp/container/vector/operator cmp") [ | `operator>=`  
--- ](container/deque/operator_cmp.html "cpp/container/deque/operator cmp") [ | `operator>=`  
--- ](container/forward_list/operator_cmp.html "cpp/container/forward list/operator cmp") [ | `operator>=`  
--- ](container/list/operator_cmp.html "cpp/container/list/operator cmp") [ | `operator>=`  
--- ](container/set/operator_cmp.html "cpp/container/set/operator cmp") [ | `operator>=`  
--- ](container/multiset/operator_cmp.html "cpp/container/multiset/operator cmp") [ | `operator>=`  
--- ](container/map/operator_cmp.html "cpp/container/map/operator cmp") [ | `operator>=`  
--- ](container/multimap/operator_cmp.html "cpp/container/multimap/operator cmp") |  |  |  | [ | `operator>=`  
--- ](container/stack/operator_cmp.html "cpp/container/stack/operator cmp") [ | `operator>=`  
--- ](container/queue/operator_cmp.html "cpp/container/queue/operator cmp") |  |  |  |  |  | `operator>= (removed in C++20)`  
---  
  
| `operator<=>`  
---  
  
[ | `operator<=>`  
--- ](string/basic_string/operator_cmp.html "cpp/string/basic string/operator cmp") [ | `operator<=>`  
--- ](container/array/operator_cmp.html "cpp/container/array/operator cmp") [ | `operator<=>`  
--- ](container/vector/operator_cmp.html "cpp/container/vector/operator cmp") [ | `operator<=>`  
--- ](container/deque/operator_cmp.html "cpp/container/deque/operator cmp") [ | `operator<=>`  
--- ](container/forward_list/operator_cmp.html "cpp/container/forward list/operator cmp") [ | `operator<=>`  
--- ](container/list/operator_cmp.html "cpp/container/list/operator cmp") [ | `operator<=>`  
--- ](container/set/operator_cmp.html "cpp/container/set/operator cmp") [ | `operator<=>`  
--- ](container/multiset/operator_cmp.html "cpp/container/multiset/operator cmp") [ | `operator<=>`  
--- ](container/map/operator_cmp.html "cpp/container/map/operator cmp") [ | `operator<=>`  
--- ](container/multimap/operator_cmp.html "cpp/container/multimap/operator cmp") |  |  |  | [ | `operator<=>`  
--- ](container/stack/operator_cmp.html "cpp/container/stack/operator cmp") [ | `operator<=>`  
--- ](container/queue/operator_cmp.html "cpp/container/queue/operator cmp") | [ | `operator<=>`  
--- ](container/flat_set/operator_cmp.html "cpp/container/flat set/operator cmp") [ | `operator<=>`  
--- ](container/flat_multiset/operator_cmp.html "cpp/container/flat multiset/operator cmp") [ | `operator<=>`  
--- ](container/flat_map/operator_cmp.html "cpp/container/flat map/operator cmp") [ | `operator<=>`  
--- ](container/flat_multimap/operator_cmp.html "cpp/container/flat multimap/operator cmp") | `operator<=>`  
---  
  
| `swap`  
---  
  
[ | `swap`  
--- ](string/basic_string/swap.html "cpp/string/basic string/swap") [ | `swap`  
--- ](container/array/swap.html "cpp/container/array/swap") [ | `swap`  
--- ](container/vector/swap.html "cpp/container/vector/swap") [ | `swap`  
--- ](container/deque/swap.html "cpp/container/deque/swap") [ | `swap`  
--- ](container/forward_list/swap.html "cpp/container/forward list/swap") [ | `swap`  
--- ](container/list/swap.html "cpp/container/list/swap") [ | `swap`  
--- ](container/set/swap.html "cpp/container/set/swap") [ | `swap`  
--- ](container/multiset/swap.html "cpp/container/multiset/swap") [ | `swap`  
--- ](container/map/swap.html "cpp/container/map/swap") [ | `swap`  
--- ](container/multimap/swap.html "cpp/container/multimap/swap") [ | `swap`  
--- ](container/unordered_set/swap.html "cpp/container/unordered set/swap") [ | `swap`  
--- ](container/unordered_multiset/swap.html "cpp/container/unordered multiset/swap") [ | `swap`  
--- ](container/unordered_map/swap.html "cpp/container/unordered map/swap") [ | `swap`  
--- ](container/unordered_multimap/swap.html "cpp/container/unordered multimap/swap") [ | `swap`  
--- ](container/stack/swap.html "cpp/container/stack/swap") [ | `swap`  
--- ](container/queue/swap.html "cpp/container/queue/swap") [ | `swap`  
--- ](container/priority_queue/swap.html "cpp/container/priority queue/swap") [ | `swap`  
--- ](container/flat_set/swap.html "cpp/container/flat set/swap") [ | `swap`  
--- ](container/flat_multiset/swap.html "cpp/container/flat multiset/swap") [ | `swap`  
--- ](container/flat_map/swap.html "cpp/container/flat map/swap") [ | `swap`  
--- ](container/flat_multimap/swap.html "cpp/container/flat multimap/swap") | `swap`  
---  
  
| `erase`  
---  
  
[ | `erase`  
--- ](string/basic_string/erase2.html "cpp/string/basic string/erase2") | [ | `erase`  
--- ](container/vector/erase2.html "cpp/container/vector/erase2") [ | `erase`  
--- ](container/deque/erase2.html "cpp/container/deque/erase2") [ | `erase`  
--- ](container/forward_list/erase2.html "cpp/container/forward list/erase2") [ | `erase`  
--- ](container/list/erase2.html "cpp/container/list/erase2") |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  | `erase`  
---  
  
| `erase_if`  
---  
  
[ | `erase_if`  
--- ](string/basic_string/erase2.html "cpp/string/basic string/erase2") | [ | `erase_if`  
--- ](container/vector/erase2.html "cpp/container/vector/erase2") [ | `erase_if`  
--- ](container/deque/erase2.html "cpp/container/deque/erase2") [ | `erase_if`  
--- ](container/forward_list/erase2.html "cpp/container/forward list/erase2") [ | `erase_if`  
--- ](container/list/erase2.html "cpp/container/list/erase2") [ | `erase_if`  
--- ](container/set/erase_if.html "cpp/container/set/erase if") [ | `erase_if`  
--- ](container/multiset/erase_if.html "cpp/container/multiset/erase if") [ | `erase_if`  
--- ](container/map/erase_if.html "cpp/container/map/erase if") [ | `erase_if`  
--- ](container/multimap/erase_if.html "cpp/container/multimap/erase if") [ | `erase_if`  
--- ](container/unordered_set/erase_if.html "cpp/container/unordered set/erase if") [ | `erase_if`  
--- ](container/unordered_multiset/erase_if.html "cpp/container/unordered multiset/erase if") [ | `erase_if`  
--- ](container/unordered_map/erase_if.html "cpp/container/unordered map/erase if") [ | `erase_if`  
--- ](container/unordered_multimap/erase_if.html "cpp/container/unordered multimap/erase if") |  |  | [ | `erase_if`  
--- ](container/flat_set/erase_if.html "cpp/container/flat set/erase if") [ | `erase_if`  
--- ](container/flat_multiset/erase_if.html "cpp/container/flat multiset/erase if") [ | `erase_if`  
--- ](container/flat_map/erase_if.html "cpp/container/flat map/erase if") [ | `erase_if`  
--- ](container/flat_multimap/erase_if.html "cpp/container/flat multimap/erase if") | `erase_if`  
---  
  
Container  | [ | `**basic_string**`  
--- ](string/basic_string.html "cpp/string/basic string") [ | `**array**`  
--- ](container/array.html "cpp/container/array") [ | `**vector**`  
--- ](container/vector.html "cpp/container/vector") [ | `**deque**`  
--- ](container/deque.html "cpp/container/deque") [ | `**forward_list**`  
--- ](container/forward_list.html "cpp/container/forward list") [ | `**list**`  
--- ](container/list.html "cpp/container/list") [ | `**set**`  
--- ](container/set.html "cpp/container/set") [ | `**multiset**`  
--- ](container/multiset.html "cpp/container/multiset") [ | `**map**`  
--- ](container/map.html "cpp/container/map") [ | `**multimap**`  
--- ](container/multimap.html "cpp/container/multimap") [ | `**unordered_set**`  
--- ](container/unordered_set.html "cpp/container/unordered set") [ | `**unordered_multiset**`  
--- ](container/unordered_multiset.html "cpp/container/unordered multiset") [ | `**unordered_map**`  
--- ](container/unordered_map.html "cpp/container/unordered map") [ | `**unordered_multimap**`  
--- ](container/unordered_multimap.html "cpp/container/unordered multimap") [ | `**stack**`  
--- ](container/stack.html "cpp/container/stack") [ | `**queue**`  
--- ](container/queue.html "cpp/container/queue") [ | `**priority_queue**`  
--- ](container/priority_queue.html "cpp/container/priority queue") [ | `**flat_set**`  
--- ](container/flat_set.html "cpp/container/flat set") [ | `**flat_multiset**`  
--- ](container/flat_multiset.html "cpp/container/flat multiset") [ | `**flat_map**`  
--- ](container/flat_map.html "cpp/container/flat map") [ | `**flat_multimap**`  
--- ](container/flat_multimap.html "cpp/container/flat multimap") Container   
Header  | `[`<string>`](header/string.html "cpp/header/string")` | `[`<array>`](header/array.html "cpp/header/array")` | `[`<vector>`](header/vector.html "cpp/header/vector")` | `[`<deque>`](header/deque.html "cpp/header/deque")` | `[`<forward_list>`](header/forward_list.html "cpp/header/forward list")` | `[`<list>`](header/list.html "cpp/header/list")` | `[`<set>`](header/set.html "cpp/header/set")` | `[`<map>`](header/map.html "cpp/header/map")` | `[`<unordered_set>`](header/unordered_set.html "cpp/header/unordered set")` | `[`<unordered_map>`](header/unordered_map.html "cpp/header/unordered map")` | `[`<stack>`](header/stack.html "cpp/header/stack")` | `[`<queue>`](header/queue.html "cpp/header/queue")` | `[`<flat_set>`](header/flat_set.html "cpp/header/flat set")` | `[`<flat_map>`](header/flat_map.html "cpp/header/flat map")` | Header   
| Pseudo container  | Sequence containers  | Associative containers  | Unordered associative containers  | Container adaptors  |   
  
The `<`, `<=`, `>`, `>=`, and `!=` operators are [synthesized](language/operators.html#Comparison_operators "cpp/language/operators") from operator<=> and operator== respectively.  | (since C++20)  
---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/container&action=edit&section=11 "Edit section: Defect reports")] Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 51](https://cplusplus.github.io/LWG/issue51) | C++98  | container iterators might be invalidated  
by arbitrary library operation  | they are only invalidated  
when specified   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/container&action=edit&section=12 "Edit section: See also")] See also

C++ named requirements: 

  * [Container](named_req/Container.html "cpp/named req/Container")
  * [SequenceContainer](named_req/SequenceContainer.html "cpp/named req/SequenceContainer")
  * [ContiguousContainer](named_req/ContiguousContainer.html "cpp/named req/ContiguousContainer")
  * [ReversibleContainer](named_req/ReversibleContainer.html "cpp/named req/ReversibleContainer")
  * [AssociativeContainer](named_req/AssociativeContainer.html "cpp/named req/AssociativeContainer")
  * [AllocatorAwareContainer](named_req/AllocatorAwareContainer.html "cpp/named req/AllocatorAwareContainer")
  * [UnorderedAssociativeContainer](named_req/UnorderedAssociativeContainer.html "cpp/named req/UnorderedAssociativeContainer")

[ valarray](numeric/valarray.html "cpp/numeric/valarray") |  numeric arrays, array masks and array slices   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/dsc_valarray&action=edit)  
---|---  
[ basic_string](string/basic_string.html "cpp/string/basic string") |  stores and manipulates sequences of characters   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/dsc_basic_string&action=edit)  
[ basic_string_view](string/basic_string_view.html "cpp/string/basic string view")(C++17) |  read-only string view   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/dsc_basic_string_view&action=edit)
