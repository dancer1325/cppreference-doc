Defined in header `[<vector>](../header/vector.html "cpp/header/vector")` |  |   
---|---|---  
template<  
class Allocator  
> class vector<bool, Allocator>; |  |   
| |   
  
std::`vector`<bool> is a possibly space-efficient specialization of [std::vector](vector.html "cpp/container/vector") for the type bool. 

The manner in which std::`vector`<bool> is made space efficient (as well as whether it is optimized at all) is implementation defined. One potential optimization involves coalescing vector elements such that each element occupies a single bit instead of sizeof(bool) bytes. 

std::`vector`<bool> behaves similarly to [std::vector](vector.html "cpp/container/vector"), but in order to be space efficient, it: 

  * Does not necessarily store its elements as a contiguous array. 
  * Exposes class std::`vector`<bool>::[`reference`](vector_bool/reference.html "cpp/container/vector bool/reference") as a method of accessing individual bits. In particular, objects of this class are returned by [`operator[]`](vector/operator_at.html "cpp/container/vector/operator at") by value. 
  * Does not use std::allocator_traits::construct to construct bit values. 
  * Does not guarantee that different elements in the same container can be modified concurrently by different threads. 



## Contents

  * [1 Member types](vector_bool.html#Member_types)
  * [2 Member functions](vector_bool.html#Member_functions)
    * [2.1 Element access](vector_bool.html#Element_access)
    * [2.2 Iterators](vector_bool.html#Iterators)
    * [2.3 Capacity](vector_bool.html#Capacity)
    * [2.4 Modifiers](vector_bool.html#Modifiers)
    * [2.5 vector<bool> specific modifiers](vector_bool.html#vector.3Cbool.3E_specific_modifiers)
  * [3 Non-member functions](vector_bool.html#Non-member_functions)
  * [4 Helper classes](vector_bool.html#Helper_classes)
  * [5 Deduction guides (C++17)](vector_bool.html#Deduction_guides_.28C.2B.2B17.29)
  * [6 Notes](vector_bool.html#Notes)
  * [7 Example](vector_bool.html#Example)
  * [8 Defect reports](vector_bool.html#Defect_reports)

  
---  
  
### Member types

Member type  |  Definition   
---|---  
`value_type` |  bool  
`allocator_type` |  `Allocator`  
`size_type` |  implementation-defined  
`difference_type` |  implementation-defined  
[ reference](vector_bool/reference.html "cpp/container/vector bool/reference") |  proxy class representing a reference to a single bool   
(class)  
`const_reference` |  bool  
`pointer` |  implementation-defined  
`const_pointer` |  implementation-defined  
`iterator` |  |  implementation-defined  | (until C++20)  
---|---  
implementation-defined [ConstexprIterator](../named_req/ConstexprIterator.html "cpp/named req/ConstexprIterator") | (since C++20)  
  
`const_iterator` |  |  implementation-defined  | (until C++20)  
---|---  
implementation-defined [ConstexprIterator](../named_req/ConstexprIterator.html "cpp/named req/ConstexprIterator") | (since C++20)  
  
`reverse_iterator` |  [std::reverse_iterator](../iterator/reverse_iterator.html)<iterator>  
`const_reverse_iterator` |  [std::reverse_iterator](../iterator/reverse_iterator.html)<const_iterator>  
  
### Member functions

[ (constructor)](vector/vector.html "cpp/container/vector/vector") |  constructs the `vector`   
(public member function of `std::vector<T,Allocator>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_constructor&action=edit)  
---|---  
[ (destructor)](vector/~vector.html "cpp/container/vector/~vector") |  destructs the `vector`   
(public member function of `std::vector<T,Allocator>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_destructor&action=edit)  
[ operator=](vector/operator=.html "cpp/container/vector/operator=") |  assigns values to the container   
(public member function of `std::vector<T,Allocator>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_operator%3D&action=edit)  
[ assign](vector/assign.html "cpp/container/vector/assign") |  assigns values to the container   
(public member function of `std::vector<T,Allocator>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_assign&action=edit)  
[ assign_range](vector/assign_range.html "cpp/container/vector/assign range")(C++23) |  assigns a range of values to the container   
(public member function of `std::vector<T,Allocator>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_assign_range&action=edit)  
[ get_allocator](vector/get_allocator.html "cpp/container/vector/get allocator") |  returns the associated allocator   
(public member function of `std::vector<T,Allocator>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_get_allocator&action=edit)  
  
#####  Element access   
  
[ at](vector/at.html "cpp/container/vector/at") |  access specified element with bounds checking   
(public member function of `std::vector<T,Allocator>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_at&action=edit)  
[ operator[]](vector/operator_at.html "cpp/container/vector/operator at") |  access specified element   
(public member function of `std::vector<T,Allocator>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_operator_at&action=edit)  
[ front](vector/front.html "cpp/container/vector/front") |  access the first element   
(public member function of `std::vector<T,Allocator>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_front&action=edit)  
[ back](vector/back.html "cpp/container/vector/back") |  access the last element   
(public member function of `std::vector<T,Allocator>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_back&action=edit)  
  
#####  Iterators   
  
[ begincbegin](vector/begin.html "cpp/container/vector/begin")(C++11) |  returns an iterator to the beginning   
(public member function of `std::vector<T,Allocator>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_begin&action=edit)  
[ endcend](vector/end.html "cpp/container/vector/end")(C++11) |  returns an iterator to the end   
(public member function of `std::vector<T,Allocator>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_end&action=edit)  
[ rbegincrbegin](vector/rbegin.html "cpp/container/vector/rbegin")(C++11) |  returns a reverse iterator to the beginning   
(public member function of `std::vector<T,Allocator>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_rbegin&action=edit)  
[ rendcrend](vector/rend.html "cpp/container/vector/rend")(C++11) |  returns a reverse iterator to the end   
(public member function of `std::vector<T,Allocator>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_rend&action=edit)  
  
#####  Capacity   
  
[ empty](vector/empty.html "cpp/container/vector/empty") |  checks whether the container is empty   
(public member function of `std::vector<T,Allocator>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_empty&action=edit)  
[ size](vector/size.html "cpp/container/vector/size") |  returns the number of elements   
(public member function of `std::vector<T,Allocator>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_size&action=edit)  
[ max_size](vector/max_size.html "cpp/container/vector/max size") |  returns the maximum possible number of elements   
(public member function of `std::vector<T,Allocator>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_max_size&action=edit)  
[ reserve](vector/reserve.html "cpp/container/vector/reserve") |  reserves storage   
(public member function of `std::vector<T,Allocator>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_reserve&action=edit)  
[ capacity](vector/capacity.html "cpp/container/vector/capacity") |  returns the number of elements that can be held in currently allocated storage   
(public member function of `std::vector<T,Allocator>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_capacity&action=edit)  
  
#####  Modifiers   
  
[ clear](vector/clear.html "cpp/container/vector/clear") |  clears the contents   
(public member function of `std::vector<T,Allocator>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_clear&action=edit)  
[ insert](vector/insert.html "cpp/container/vector/insert") |  inserts elements   
(public member function of `std::vector<T,Allocator>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_insert&action=edit)  
[ insert_range](vector/insert_range.html "cpp/container/vector/insert range")(C++23) |  inserts a range of elements   
(public member function of `std::vector<T,Allocator>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_insert_range&action=edit)  
[ append_range](vector/append_range.html "cpp/container/vector/append range")(C++23) |  adds a range of elements to the end   
(public member function of `std::vector<T,Allocator>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_append_range&action=edit)  
[ emplace](vector/emplace.html "cpp/container/vector/emplace")(C++11) |  constructs element in-place   
(public member function of `std::vector<T,Allocator>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_emplace&action=edit)  
[ erase](vector/erase.html "cpp/container/vector/erase") |  erases elements   
(public member function of `std::vector<T,Allocator>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_erase&action=edit)  
[ push_back](vector/push_back.html "cpp/container/vector/push back") |  adds an element to the end   
(public member function of `std::vector<T,Allocator>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_push_back&action=edit)  
[ emplace_back](vector/emplace_back.html "cpp/container/vector/emplace back")(C++11) |  constructs an element in-place at the end   
(public member function of `std::vector<T,Allocator>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_emplace_back&action=edit)  
[ pop_back](vector/pop_back.html "cpp/container/vector/pop back") |  removes the last element   
(public member function of `std::vector<T,Allocator>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_pop_back&action=edit)  
[ resize](vector/resize.html "cpp/container/vector/resize") |  changes the number of elements stored   
(public member function of `std::vector<T,Allocator>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_resize&action=edit)  
[ swap](vector/swap.html "cpp/container/vector/swap") |  swaps the contents   
(public member function of `std::vector<T,Allocator>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_swap&action=edit)  
  
#####  `vector<bool>` specific modifiers   
  
[ flip](vector_bool/flip.html "cpp/container/vector bool/flip") |  flips all the bits   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/vector_bool/dsc_flip&action=edit)  
[ swap](vector_bool/swap.html "cpp/container/vector bool/swap")[static] |  swaps two `std::vector<bool>::`[`reference`s](vector_bool/reference.html "cpp/container/vector bool/reference")   
(public static member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/vector_bool/dsc_swap&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/container/vector_bool&action=edit&section=3 "Edit section: Non-member functions")] Non-member functions

[ operator==operator!=operator<operator<=operator>operator>=operator<=>](vector/operator_cmp.html "cpp/container/vector/operator cmp")(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(C++20) |  lexicographically compares the values of two `vector`s   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_operator_cmp&action=edit)  
---|---  
[ std::swap(std::vector)](vector/std_swap.html "cpp/container/vector/swap2") |  specializes the [std::swap](../utility/swap.html "cpp/algorithm/swap") algorithm   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_swap2&action=edit)  
[ erase(std::vector)erase_if(std::vector)](vector/erase2.html "cpp/container/vector/erase2")(C++20) |  erases all elements satisfying specific criteria   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_erase_seq&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/container/vector_bool&action=edit&section=4 "Edit section: Helper classes")] Helper classes

[ std::hash<std::vector<bool>>](vector_bool/hash.html "cpp/container/vector bool/hash")(C++11) |  hash support for std::**`vector`** <bool>   
(class template specialization) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/vector_bool/dsc_hash&action=edit)  
---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/container/vector_bool&action=edit&section=5 "Edit section: Deduction guides \(C++17\)")] [Deduction guides](vector/deduction_guides.html "cpp/container/vector/deduction guides") (C++17)

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/container/vector_bool&action=edit&section=6 "Edit section: Notes")] Notes

If the size of the bitset is known at compile time, [std::bitset](../utility/bitset.html "cpp/utility/bitset") may be used, which offers a richer set of member functions. In addition, [`boost::dynamic_bitset`](https://www.boost.org/doc/libs/release/libs/dynamic_bitset/dynamic_bitset.html) exists as an alternative to std::`vector`<bool>. 

Since its representation may be optimized, std::`vector`<bool> does not necessarily meet all [Container](../named_req/Container.html "cpp/named req/Container") or [SequenceContainer](../named_req/SequenceContainer.html "cpp/named req/SequenceContainer") requirements. For example, because std::`vector`<bool>::iterator is implementation-defined, it may not satisfy the [LegacyForwardIterator](../named_req/ForwardIterator.html "cpp/named req/ForwardIterator") requirement. Use of algorithms such as [std::search](../algorithm/search.html "cpp/algorithm/search") that require [LegacyForwardIterators](../named_req/ForwardIterator.html "cpp/named req/ForwardIterator") may result in [either compile-time or run-time errors](https://www.boost.org/doc/libs/release/libs/dynamic_bitset/dynamic_bitset.html#rationale). 

The [Boost.Container version of `vector`](https://www.boost.org/doc/libs/release/doc/html/boost/container/vector.html) does not specialize for bool. 

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_containers_ranges`](../experimental/feature_test.html#cpp_lib_containers_ranges "cpp/feature test") | [`202202L`](../compiler_support/23.html#cpp_lib_containers_ranges_202202L "cpp/compiler support/23") | (C++23) | Ranges construction and insertion for containers   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/container/vector_bool&action=edit&section=7 "Edit section: Example")] Example

Run this code
    
    
    #include <cassert>
    #include <initializer_list>
    #include <iostream>
    #include <vector>
     
    void println(auto rem, const [std::vector](vector.html)<bool>& vb)
    {
        [std::cout](../io/cout.html) << rem << " = [";
        for ([std::size_t](../types/size_t.html) t{}; t != vb.size(); ++t)
            [std::cout](../io/cout.html) << (t ? ", " : "") << vb[t];
        [std::cout](../io/cout.html) << "]\n";
    }
     
    int main()
    {
        [std::vector](vector.html)<bool> v1; // creates an empty vector of boolean values
        println("1) v1", v1);
     
        [std::vector](vector.html)<bool> v2{0, 1, 1, 0, 1}; // creates filled vector
        println("2) v2", v2);
     
        v1 = v2; // copies v2 to v1
        println("3) v1", v1);
     
        [assert](../error/assert.html)(v1.size() == v2.size()); // checks that v1 and v2 sizes are equal
        [assert](../error/assert.html)(v1.front() == false); // accesses first element, equivalent to:
        [assert](../error/assert.html)(v1[0] == false);
        [assert](../error/assert.html)(v1.back() == true); // accesses last element, equivalent to:
        [assert](../error/assert.html)(v1[v1.size() - 1] == true);
     
        v1 = {true, true, false, false}; // assigns an initializer list
        println("4) v1", v1);
     
        v1.push_back(true); // adds one element to the end
        println("5) v1", v1);
     
        v1.pop_back(); // removes one element from the end
        println("6) v1", v1);
     
        v1.flip(); // flips all elements
        println("7) v1", v1);
     
        v1.resize(8, true); // resizes v1; new elements are set to “true”
        println("8) v1", v1);
     
        v1.clear(); // erases v1
        [assert](../error/assert.html)(v1.empty()); // checks that v1 is empty
    }

Output: 
    
    
    1) v1 = []
    2) v2 = [0, 1, 1, 0, 1]
    3) v1 = [0, 1, 1, 0, 1]
    4) v1 = [1, 1, 0, 0]
    5) v1 = [1, 1, 0, 0, 1]
    6) v1 = [1, 1, 0, 0]
    7) v1 = [0, 0, 1, 1]
    8) v1 = [0, 0, 1, 1, 1, 1, 1, 1]

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2187](https://cplusplus.github.io/LWG/issue2187) | C++11  | specializations for bool lacked `emplace` and `emplace_back` member functions  | added 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
