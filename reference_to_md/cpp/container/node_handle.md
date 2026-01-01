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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/navbar_content&action=edit)

[Containers library](../container.html "cpp/container")

**_node-handle_**(C++17)  
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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/navbar_content&action=edit)

template</* unspecified */>  
class /*node-handle*/; |  | (since C++17)   
(exposition only*)  
---|---|---  
| |   
  
A _node handle_ is an object that accepts ownership of a single element from an [associative containers](../container.html#Associative_containers "cpp/container") and [unordered associative containers](../container.html#Unordered_associative_containers "cpp/container"). It may be used to transfer that ownership to another container with compatible nodes. 

A node handle has two possible states: 

  * It refers to an element extracted from a container, or 
  * it is _empty ﻿_. 



If a node handle is not empty, then it contains an allocator that is equal to the allocator of the previously extracted container. 

For all map containers ([std::map](map.html "cpp/container/map"), [std::multimap](multimap.html "cpp/container/multimap"), [std::unordered_map](unordered_map.html "cpp/container/unordered map"), and [std::unordered_multimap](unordered_multimap.html "cpp/container/unordered multimap")) whose `key_type` is `Key` and `mapped_type` is `T`, the behavior of operations involving node handles is undefined if a user-defined specialization of [std::pair](../utility/pair.html "cpp/utility/pair") exists for [std::pair](../utility/pair.html)<Key, T> or [std::pair](../utility/pair.html)<const Key, T>. 

## Contents

  * [1 Nested types](node_handle.html#Nested_types)
  * [2 Data members](node_handle.html#Data_members)
  * [3 Member functions](node_handle.html#Member_functions)
  * [4 _node-handle ﻿_ ::_node-handle_](node_handle.html#node-handle.E2.80.8A.EF.BB.BF::node-handle)
    * [4.1 Parameters](node_handle.html#Parameters)
    * [4.2 Notes](node_handle.html#Notes)
  * [5 _node-handle ﻿_ ::operator=](node_handle.html#node-handle.E2.80.8A.EF.BB.BF::operator.3D)
    * [5.1 Parameters](node_handle.html#Parameters_2)
    * [5.2 Return](node_handle.html#Return)
    * [5.3 Exceptions](node_handle.html#Exceptions)
    * [5.4 Notes](node_handle.html#Notes_2)
  * [6 _node-handle ﻿_ ::~_node-handle_](node_handle.html#node-handle.E2.80.8A.EF.BB.BF::.7Enode-handle)
  * [7 _node-handle ﻿_ ::empty](node_handle.html#node-handle.E2.80.8A.EF.BB.BF::empty)
    * [7.1 Return value](node_handle.html#Return_value)
  * [8 _node-handle ﻿_ ::operator bool](node_handle.html#node-handle.E2.80.8A.EF.BB.BF::operator_bool)
    * [8.1 Return value](node_handle.html#Return_value_2)
  * [9 _node-handle ﻿_ ::get_allocator](node_handle.html#node-handle.E2.80.8A.EF.BB.BF::get_allocator)
    * [9.1 Return value](node_handle.html#Return_value_3)
    * [9.2 Exceptions](node_handle.html#Exceptions_2)
  * [10 _node-handle ﻿_ ::value (set containers only)](node_handle.html#node-handle.E2.80.8A.EF.BB.BF::value_.28set_containers_only.29)
    * [10.1 Return value](node_handle.html#Return_value_4)
    * [10.2 Exceptions](node_handle.html#Exceptions_3)
  * [11 _node-handle ﻿_ ::key (map containers only)](node_handle.html#node-handle.E2.80.8A.EF.BB.BF::key_.28map_containers_only.29)
    * [11.1 Return value](node_handle.html#Return_value_5)
    * [11.2 Exceptions](node_handle.html#Exceptions_4)
    * [11.3 Notes](node_handle.html#Notes_3)
  * [12 _node-handle ﻿_ ::mapped (map containers only)](node_handle.html#node-handle.E2.80.8A.EF.BB.BF::mapped_.28map_containers_only.29)
    * [12.1 Return value](node_handle.html#Return_value_6)
    * [12.2 Exceptions](node_handle.html#Exceptions_5)
  * [13 _node-handle ﻿_ ::swap](node_handle.html#node-handle.E2.80.8A.EF.BB.BF::swap)
    * [13.1 Exceptions](node_handle.html#Exceptions_6)
    * [13.2 Non-member functions](node_handle.html#Non-member_functions)
  * [14 std::swap(_node-handle ﻿_)](node_handle.html#std::swap.28node-handle.E2.80.8A.EF.BB.BF.29)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/container/node_handle&action=edit&section=1 "Edit section: Nested types")] Nested types

Type  |  Definition   
---|---  
`key_type` (map containers only) |  the key stored in the node[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_key_type&action=edit)  
`mapped_type` (map containers only) |  the mapped part of the element stored in the node[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_mapped_type&action=edit)  
`value_type` (set containers only) |  the element stored in the node[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_value_type&action=edit)  
`allocator_type` |  the allocator to be used when destroying the element[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_allocator_type&action=edit)  
`_container_node_type_` |  unspecified  
(exposition-only member type*)  
`_ator_traits_` |  [std::allocator_traits](../memory/allocator_traits.html)<allocator_type>  
(exposition-only member type*)  
  
See [AssociativeContainer](../named_req/AssociativeContainer.html "cpp/named req/AssociativeContainer") and [UnorderedAssociativeContainer](../named_req/UnorderedAssociativeContainer.html "cpp/named req/UnorderedAssociativeContainer") for the actual definitions of the non-exposition-only nested types. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/container/node_handle&action=edit&section=2 "Edit section: Data members")] Data members

Member  |  Description   
---|---  
typename` `` _ator_traits_` ﻿::template  
` `rebind_traits<`_container_node_type_` ﻿>::pointer `_ptr__` |  a pointer to a container node containing the referred object[[1]](node_handle.html#cite_note-1)  
(exposition-only member object*)  
[std::optional](../utility/optional.html)<allocator_type> `_alloc__` |  the allocator stored  
(exposition-only member object*)  
  
  1. [↑](node_handle.html#cite_ref-1) The ownership of the pointed-to container node was already detached from the source container while extracting the element. Even if the lifetime of the source container has ended, the container node and the contained element are still accessible.



### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/container/node_handle&action=edit&section=3 "Edit section: Member functions")] Member functions

##  _node-handle ﻿_ ::_node-handle_

constexpr /*node-handle*/() noexcept; |  (1)  |   
---|---|---  
/*node-handle*/( /*node-handle*/&& other ) noexcept; |  (2) | (constexpr since C++26)  
| |   
  
1) The default constructor initializes the node handle to the empty state.

2) The move constructor takes ownership of the container element from other. 

  * `_ptr__` is initialized with other.`_ptr__`. 
  * `_alloc__` is move constructed with other.`_alloc__`. 
  * Assigns nullptr to other.`_ptr__`. 
  * Assigns [std::nullopt](../utility/optional/nullopt.html) to other.`_ptr__`.



###  Parameters

other  |  \-  |  another node handle   
---|---|---  
  
###  Notes

There is no user-provided copy destructor. `_node-handle_` is not [CopyConstructible](../named_req/CopyConstructible.html "cpp/named req/CopyConstructible"). 

Besides move construction and move assignment, a non-empty `_node-handle_` can only be created by calling the `extract` member functions of (unordered) associative containers. 

##  _node-handle ﻿_ ::operator=

/*node-handle*/& operator=( /*node-handle*/&& other ); |  | (constexpr since C++26)  
---|---|---  
| |   
  
The move assignment operator replaces state of *this with the state of other using move semantics. 

  1. If `_ptr__`` `!= nullptr is true, destroys the element referred to by *this by calling `_ator_traits_` ﻿::destroy, then deallocates the storage for the referred element by calling `_ator_traits_` ﻿::rebind_traits<`_container-node-type_` ﻿>::deallocate. 
  2. Assigns other.`_ptr__` to `_ptr__` ﻿. 
  3. If `_ator_traits_` ﻿::propagate_on_container_move_assignment is true, move assigns other.`_alloc__` to `_alloc__` ﻿. 
  4. Assigns nullptr to other.`_ptr__` and assigns [std::nullopt](../utility/optional/nullopt.html) to other.`_alloc__`. 



If the following values are all false, the behavior is undefined: 

  * `_ator_traits_` ﻿::propagate_on_container_move_assignment
  * !`_alloc__`
  * `_alloc__`` `== other.`_alloc__`



###  Parameters

other  |  \-  |  another node handle   
---|---|---  
  
###  Return

*this

###  Exceptions

Throws nothing. 

###  Notes

There is no user-provided copy assignment operator. `_node-handle_` is not [CopyAssignable](../named_req/CopyAssignable.html "cpp/named req/CopyAssignable"). 

##  _node-handle ﻿_ ::~_node-handle_

~/*node-handle*/(); |  | (constexpr since C++26)  
---|---|---  
| |   
  
If `_ptr__`` `!= nullptr is true, destroys the element referred to by *this by calling `_ator_traits_` ﻿::destroy, then deallocates the container element by calling `_ator_traits_` ﻿::rebind_traits<`_container-node-type_` ﻿>::deallocate. 

Otherwise, does nothing. 

##  _node-handle ﻿_ ::empty

bool empty() const noexcept; |  | (constexpr since C++26)  
---|---|---  
| |   
  
Returns true if the node handle is empty, false otherwise. 

###  Return value

`_ptr__`` `== nullptr

##  _node-handle ﻿_ ::operator bool

explicit operator bool() const noexcept; |  | (constexpr since C++26)  
---|---|---  
| |   
  
Converts to false if the node handle is empty, true otherwise. 

###  Return value

`_ptr__`` `!= nullptr

##  _node-handle ﻿_ ::get_allocator

allocator_type get_allocator() const; |  | (constexpr since C++26)  
---|---|---  
| |   
  
Returns a copy of the stored allocator. 

If empty() is true, the behavior is undefined. 

###  Return value

*`_alloc__`

###  Exceptions

Throws nothing. 

##  _node-handle ﻿_ ::value (set containers only)

value_type& value() const; |  | (constexpr since C++26)  
---|---|---  
| |   
  
Returns a reference to the element referred to by *this. 

If empty() is true, the behavior is undefined. 

###  Return value

As described above. 

###  Exceptions

Throws nothing. 

##  _node-handle ﻿_ ::key (map containers only)

key_type& key() const; |  | (constexpr since C++26)  
---|---|---  
| |   
  
Returns a non-const reference to the `key_type` member of the element referred to by *this. 

If empty() is true, the behavior is undefined. 

###  Return value

As described above. 

###  Exceptions

Throws nothing. 

###  Notes

This function makes it possible to modify the key of a node extracted from a map, and then re-insert it into the map, without ever copying or moving the element. 

##  _node-handle ﻿_ ::mapped (map containers only)

mapped_type& mapped() const; |  | (constexpr since C++26)  
---|---|---  
| |   
  
Returns a reference to the `mapped_type` member of the element referred to by *this. 

If empty() is true, the behavior is undefined. 

###  Return value

As described above. 

###  Exceptions

Throws nothing. 

##  _node-handle ﻿_ ::swap

void swap( /*node-handle*/& other ) noexcept(/* see below */); |  | (constexpr since C++26)  
---|---|---  
| |   
  
Calls swap(`_ptr__` ﻿, nh.`_ptr__` ﻿). If any of the following values is true, also calls swap(`_alloc__` ﻿, nh.`_alloc__` ﻿): 

  * `_ator_traits_` ﻿::propagate_on_container_swap
  * !`_alloc__`
  * !other.`_alloc__`



If the following values are all false, the behavior is undefined: 

  * `_ator_traits_` ﻿::propagate_on_container_swap
  * !`_alloc__`
  * !other.`_alloc__`
  * `_alloc__`` `== other.`_alloc__`



###  Exceptions

[`noexcept`](../language/noexcept_spec.html "cpp/language/noexcept spec") specification: 

noexcept(ator_traits::propagate_on_container_swap::value ||  
ator_traits::is_always_equal::value)

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/container/node_handle&action=edit&section=22 "Edit section: Non-member functions")] Non-member functions

##  std::swap(_node-handle ﻿_)

friend void swap(/*node-handle*/& lhs, /*node-handle*/& rhs)  
noexcept(noexcept(lhs.swap(rhs))); |  | (constexpr since C++26)  
---|---|---  
| |   
  
Effectively executes x.swap(y). 

This function is not visible to ordinary [unqualified](../language/unqualified_lookup.html "cpp/language/unqualified lookup") or [qualified lookup](../language/qualified_lookup.html "cpp/language/qualified lookup"), and can only be found by [argument-dependent lookup](../language/adl.html "cpp/language/adl") when `_node-handle_` is an associated class of the arguments. 
