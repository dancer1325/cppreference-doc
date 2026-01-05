[[edit template]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/swap_ad&action=edit)

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
**priority_queue::swap**(C++11)  
[Non-member functions](../priority_queue.html#Non-member_functions "cpp/container/priority queue")  
[swap(std::priority_queue)](swap2.html "cpp/container/priority queue/swap2")(C++11)  
[Helper classes](../priority_queue.html#Helper_classes "cpp/container/priority queue")  
[uses_allocator<std::priority_queue>](uses_allocator.html "cpp/container/priority queue/uses allocator")(C++11)  
[formatter<std::priority_queue>](formatter.html "cpp/container/priority queue/formatter")(C++23)  
[Deduction guides](deduction_guides.html "cpp/container/priority queue/deduction guides")(C++17)  
  


void swap( priority_queue& other ) noexcept(/* see below */); |  |  (since C++11)  
---|---|---  
| |   
Exchanges the contents of the container adaptor with those of `other`. Effectively calls 
    
    
    using [std::swap](../../algorithm/swap.html);
    swap(c, other.c);
    swap(comp, other.comp);

## Contents

  * [1 Parameters](swap.html#Parameters)
  * [2 Return value](swap.html#Return_value)
  * [3 Exceptions](swap.html#Exceptions)
  * [4 Complexity](swap.html#Complexity)
  * [5 Notes](swap.html#Notes)
  * [6 Example](swap.html#Example)
  * [7 Defect reports](swap.html#Defect_reports)
  * [8 See also](swap.html#See_also)

  
---  
  
### Parameters

other  |  \-  |  container adaptor to exchange the contents with   
---|---|---  
  
### Return value

(none) 

### Exceptions

[`noexcept`](../../language/noexcept_spec.html "cpp/language/noexcept spec") specification: noexcept(noexcept(swap(c, other.c)) && noexcept(swap(comp, other.comp))) In the expression above, the identifier `swap` is looked up in the same manner as the one used by the C++17 [std::is_nothrow_swappable](../../types/is_swappable.html "cpp/types/is swappable") trait.  | (since C++11)  
(until C++17)  
---|---  
[`noexcept`](../../language/noexcept_spec.html "cpp/language/noexcept spec") specification: noexcept([std::is_nothrow_swappable_v](../../types/is_swappable.html)<Container> &&  
[std::is_nothrow_swappable_v](../../types/is_swappable.html)<Compare>) | (since C++17)  
  
### Complexity

Same as underlying container (typically constant). 

###  Notes

Some implementations (e.g. libc++) provide the `swap` member function as an extension to pre-C++11 modes. 

### Example

Run this code
    
    
    #include <iostream>
    #include <concepts>
    #include <functional>
    #include <queue>
    #include <string>
    #include <string_view>
    #include <vector>
     
    template<typename Adaptor>
    requires (std::[ranges::input_range](../../ranges/input_range.html)<typename Adaptor::container_type>)
    void print([std::string_view](../../string/basic_string_view.html) name, const Adaptor& adaptor)
    {
        struct Printer : Adaptor // to use protected Adaptor::Container c;
        {
            void print([std::string_view](../../string/basic_string_view.html) name) const
            {
                [std::cout](../../io/cout.html) << name << " [" << [std::size](../../iterator/size.html)(this->c) << "]: ";
                for (auto const& elem : this->c)
                    [std::cout](../../io/cout.html) << elem << ' ';
                [std::cout](../../io/cout.html) << '\n';
            }
        };
     
        static_cast<Printer const&>(adaptor).print(name);
    }
     
    int main()
    {
        [std::vector](../vector.html)<[std::string](../../string/basic_string.html)> v1{"1","2","3","4"},
                                 v2{"Ɐ","B","Ɔ","D","Ǝ"};
     
        [std::priority_queue](../priority_queue.html) s1([std::less](../../utility/functional/less.html)<>(), std::move(v1));
        [std::priority_queue](../priority_queue.html) s2([std::less](../../utility/functional/less.html)<>(), std::move(v2));
     
        print("s1", s1);
        print("s2", s2);
     
        s1.swap(s2);
     
        print("s1", s1);
        print("s2", s2);
    }

Output: 
    
    
    s1 [4]: 4 3 2 1
    s2 [5]: Ǝ D Ɔ B Ɐ
    s1 [5]: Ǝ D Ɔ B Ɐ
    s2 [4]: 4 3 2 1

###  Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2456](https://cplusplus.github.io/LWG/issue2456) | C++11  | the `noexcept` specification is ill-formed  | made to work   
  
### See also

[ std::swap(std::priority_queue)](swap2.html "cpp/container/priority queue/swap2")(C++11) |  specializes the [std::swap](../../utility/swap.html "cpp/algorithm/swap") algorithm   
(function template)   
---|---
