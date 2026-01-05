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
**span::operator=**  
[Element access](../span.html#Element_access "cpp/container/span")  
[span::front](front.html "cpp/container/span/front")  
[span::back](back.html "cpp/container/span/back")  
[span::at](at.html "cpp/container/span/at")(C++26)  
[span::operator[]](operator_at.html "cpp/container/span/operator at")  
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
  


constexpr span& operator=( const span& other ) noexcept = default; |  |  (since C++20)  
---|---|---  
| |   
  
Assigns other to *this. This defaulted assignment operator performs a shallow copy of the data pointer and the size, i.e., after a call to this function, data() == other.data() and size() == other.size(). 

## Contents

  * [1 Parameters](operator=.html#Parameters)
  * [2 Return value](operator=.html#Return_value)
  * [3 Example](operator=.html#Example)
  * [4 See also](operator=.html#See_also)

  
---  
  
### Parameters

other  |  \-  |  another span to copy from   
---|---|---  
  
### Return value

*this

### Example

Run this code
    
    
    #include <algorithm>
    #include <array>
    #include <cassert>
    #include <cstddef>
    #include <iostream>
    #include <span>
    #include <string_view>
     
    void print([std::string_view](../../string/basic_string_view.html) info = "", [std::span](../span.html)<const int> span = {},
               [std::size_t](../../types/size_t.html) extent = 0, [std::size_t](../../types/size_t.html) size_of = 0)
    {
        if (span.empty())
        {
            [std::cout](../../io/cout.html) << info << '\n';
            return;
        }
     
        [std::cout](../../io/cout.html) << info << '[' << span.size() << "] {";
        std::[ranges::for_each](../../algorithm/ranges/for_each.html)(span, [](const int x) { [std::cout](../../io/cout.html) << ' ' << x; });
        [std::cout](../../io/cout.html) << " }";
     
        if (extent)
        {
            [std::cout](../../io/cout.html) << " extent = ";
            if (extent == [std::dynamic_extent](dynamic_extent.html))
                [std::cout](../../io/cout.html) << "dynamic";
            else
                [std::cout](../../io/cout.html) << extent;
        }
     
        if (size_of)
            [std::cout](../../io/cout.html) << ", sizeof = " << size_of;
     
        [std::cout](../../io/cout.html) << '\n';
    }
     
    int main()
    {
        [std::array](../array.html)<int,6> a1;
        [std::array](../array.html)<int,6> a2;
        a1.fill(3);
        a2.fill(4);
     
        auto s1 = [std::span](../span.html)(a1);
        auto s2 = [std::span](../span.html)(a2);
        print("s1", s1, s1.extent, sizeof(s1));
        print("s2", s2, s2.extent, sizeof(s2));
     
        // Check that assignment performs a shallow copy.
        s1 = s2;
        (s1.data() == s2.data() && s1.size() == s2.size())
            ? print("s1 = s2; is a shallow copy!")
            : print("s1 = s2; is a deep copy!");
        print("s1", s1);
     
        print("Fill s1 with 5:");
        std::[ranges::fill](../../algorithm/ranges/fill.html)(s1, 5);
        // s2 is also 'updated' since s1 and s2 point to the same data
        [assert](../../error/assert.html)(std::[ranges::equal](../../algorithm/ranges/equal.html)(s1, s2));
        print("s1", s1);
        print("s2", s2);
        print();
     
        int a3[]{1, 2, 3, 4};
        int a4[]{2, 3, 4, 5};
        int a5[]{3, 4, 5};
     
        [std::span](../span.html)<int, [std::dynamic_extent](dynamic_extent.html)> dynamic_1{a3};
        [std::span](../span.html)<int, [std::dynamic_extent](dynamic_extent.html)> dynamic_2{a4, 3};
        [std::span](../span.html)<int, 4> static_1{a3};
        [std::span](../span.html)<int, 4> static_2{a4};
        [std::span](../span.html)<int, 3> static_3{a5};
     
        print("dynamic_1", dynamic_1, dynamic_1.extent, sizeof(dynamic_1));
        print("dynamic_2", dynamic_2, dynamic_2.extent, sizeof(dynamic_2));
        print("static_1", static_1, static_1.extent, sizeof(static_1));
        print("static_2", static_2, static_2.extent, sizeof(static_2));
        print("static_3", static_3, static_3.extent, sizeof(static_3));
     
        dynamic_1 = dynamic_2; // OK
        dynamic_1 = static_1;  // OK
    //  static_1 = dynamic_1;  // ERROR: no match for ‘operator=’
        static_1 = static_2;   // OK: same extents = 4
    //  static_1 = static_3;   // ERROR: different extents: 4 and 3
    }

Output: 
    
    
    s1[6] { 3 3 3 3 3 3 } extent = 6, sizeof = 8
    s2[6] { 4 4 4 4 4 4 } extent = 6, sizeof = 8
    s1 = s2; is a shallow copy!
    s1[6] { 4 4 4 4 4 4 }
    Fill s1 with 5:
    s1[6] { 5 5 5 5 5 5 }
    s2[6] { 5 5 5 5 5 5 }
     
    dynamic_1[4] { 1 2 3 4 } extent = dynamic, sizeof = 16
    dynamic_2[3] { 2 3 4 } extent = dynamic, sizeof = 16
    static_1[4] { 1 2 3 4 } extent = 4, sizeof = 8
    static_2[4] { 2 3 4 5 } extent = 4, sizeof = 8
    static_3[3] { 3 4 5 } extent = 3, sizeof = 8

### See also

[ (constructor)](span.html "cpp/container/span/span") |  constructs the `span`   
(public member function)   
---|---  
[ data](data.html "cpp/container/span/data") |  direct access to the underlying contiguous storage   
(public member function)   
[ size](size.html "cpp/container/span/size") |  returns the number of elements   
(public member function) 
