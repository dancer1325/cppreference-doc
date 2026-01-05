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
  


[`std::span`](../span.html "cpp/container/span")

[Member functions](../span.html#Member_functions "cpp/container/span")  
---  
[span::span](span.html "cpp/container/span/span")  
[span::operator=](operator=.html "cpp/container/span/operator=")  
[Element access](../span.html#Element_access "cpp/container/span")  
[span::front](front.html "cpp/container/span/front")  
[span::back](back.html "cpp/container/span/back")  
[span::at](at.html "cpp/container/span/at")(C++26)  
**span::operator[]**  
[span::data](data.html "cpp/container/span/data")  
[Iterators](../span.html#Iterators "cpp/container/span")  
[span::beginspan::cbegin](begin.html "cpp/container/span/begin")(C++23)  
[span::endspan::cend](end.html "cpp/container/span/end")(C++23)  
[span::rbeginspan::crbegin](rbegin.html "cpp/container/span/rbegin")(C++23)  
[span::rendspan::crend](rend.html "cpp/container/span/rend")(C++23)  
[Observers](../span.html#Observers "cpp/container/span")  
[span::empty](empty.html "cpp/container/span/empty")  
[span::size](size.html "cpp/container/span/size")  
[span::size_bytes](size_bytes.html "cpp/container/span/size bytes")  
[Subviews](../span.html#Subviews "cpp/container/span")  
[span::first](first.html "cpp/container/span/first")  
[span::last](last.html "cpp/container/span/last")  
[span::subspan](subspan.html "cpp/container/span/subspan")  
[Non-member functions](../span.html#Non-member_functions "cpp/container/span")  
[as_bytesas_writable_bytes](as_bytes.html "cpp/container/span/as bytes")  
[Non-member constant](../span.html#Non-member_constant "cpp/container/span")  
[dynamic_extent](dynamic_extent.html "cpp/container/span/dynamic extent")  
[Deduction guides](deduction_guides.html "cpp/container/span/deduction guides")  
  


constexpr reference operator[]( size_type idx ) const; |  |  (since C++20)  
---|---|---  
| |   
  
Returns a reference to the idxth element of the sequence. 

If idx < size() is false, the behavior is undefined.  | (until C++26)  
---|---  
If idx < size() is false: 

  * If the implementation is [hardened](../../standard_library.html#Standard_library_hardening "cpp/standard library"), a [contract violation](../../language/contracts.html "cpp/language/contracts") occurs. Moreover, if the contract-violation handler returns under “observe” evaluation semantic, the behavior is undefined. 
  * If the implementation is not hardened, the behavior is undefined. 

| (since C++26)  
  
## Contents

  * [1 Parameters](operator_at.html#Parameters)
  * [2 Return value](operator_at.html#Return_value)
  * [3 Exceptions](operator_at.html#Exceptions)
  * [4 Example](operator_at.html#Example)
  * [5 See also](operator_at.html#See_also)

  
---  
  
### Parameters

idx  |  \-  |  the index of the element to access   
---|---|---  
  
### Return value

data()[idx]

### Exceptions

Throws nothing. 

### Example

Run this code
    
    
    #include <cstddef>
    #include <iostream>
    #include <span>
    #include <utility>
     
    void reverse([std::span](../span.html)<int> span)
    {
        for ([std::size_t](../../types/size_t.html) i = 0, j = [std::size](../../iterator/size.html)(span); i < j; ++i)
        {
            --j;
            [std::swap](../../algorithm/swap.html)(span[i], span[j]);
        }
    }
     
    void print(const [std::span](../span.html)<const int> span)
    {
        for (int element : span)
            [std::cout](../../io/cout.html) << element << ' ';
        [std::cout](../../io/cout.html) << '\n';
    }
     
    int main()
    {
        int data[]{1, 2, 3, 4, 5};
        print(data);
        reverse(data);
        print(data);
    }

Output: 
    
    
    1 2 3 4 5
    5 4 3 2 1

### See also

[ at](at.html "cpp/container/span/at")(C++26) |  access specified element with bounds checking   
(public member function)   
---|---  
[ data](data.html "cpp/container/span/data") |  direct access to the underlying contiguous storage   
(public member function)   
[ size](size.html "cpp/container/span/size") |  returns the number of elements   
(public member function)   
[ as_bytesas_writable_bytes](as_bytes.html "cpp/container/span/as bytes")(C++20) |  converts a `span` into a view of its underlying bytes   
(function template) 
