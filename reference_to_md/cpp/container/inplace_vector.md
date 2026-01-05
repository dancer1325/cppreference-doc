

Defined in header `[<inplace_vector>](../header/inplace_vector.html "cpp/header/inplace vector")` |  |   
---|---|---  
template<  
class T,  
[std::size_t](../types/size_t.html) N  
> struct inplace_vector; |  |  (since C++26)  
| |   
  
`inplace_vector` is a dynamically-resizable array with contiguous inplace storage. The elements of type `T` are stored and properly aligned within the object itself. The capacity of the internal storage is fixed at compile-time and is equal to N. 

The elements are stored contiguously, which means that elements can be accessed not only through iterators or random-access operator[], but also using offsets to regular pointers to elements. A pointer to an element of an `inplace_vector` may be passed to any function that expects a pointer to an element of a C-array. 

The `inplace_vector` models [Container](../named_req/Container.html "cpp/named req/Container"), [ReversibleContainer](../named_req/ReversibleContainer.html "cpp/named req/ReversibleContainer"), [ContiguousContainer](../named_req/ContiguousContainer.html "cpp/named req/ContiguousContainer"), and [SequenceContainer](../named_req/SequenceContainer.html "cpp/named req/SequenceContainer"), including most of the [optional sequence container requirements](../named_req/SequenceContainer.html#Optional_operations "cpp/named req/SequenceContainer"), except that the `push_front`, `emplace_front`, `pop_front`, and `prepend_range` member functions are not provided. 

For any positive N, `std::inplace_vector<T, N>::iterator` and `std::inplace_vector<T, N>::const_iterator` meet the [ConstexprIterator](../named_req/ConstexprIterator.html "cpp/named req/ConstexprIterator") requirements. 

The specialization std::inplace_vector<T, 0> is [TriviallyCopyable](../named_req/TriviallyCopyable.html "cpp/named req/TriviallyCopyable") and is empty. [std::is_trivially_default_constructible_v](../types/is_default_constructible.html)<std::inplace_vector<T, 0>> is also true. 

Any member function of std::inplace_vector<T, N> that would cause insertion beyond the capacity N throws [std::bad_alloc](../memory/new/bad_alloc.html "cpp/memory/new/bad alloc"). 

The complexity of common operations on `inplace_vector`s is as follows: 

  * Random access to an element via [`operator[]`](inplace_vector/operator_at.html "cpp/container/inplace vector/operator at") or [`at()`](inplace_vector/at.html "cpp/container/inplace vector/at") – constant: 𝓞(1). 
  * Insertion or removal of an element at the end – constant: 𝓞(1). 
  * Insertion or removal of elements at the end – linear in the number of elements inserted/removed: 𝓞(n). 
  * Insertion or removal of elements in the beginning or in the middle – linear in the number of elements inserted/removed plus the distance to the end of the vector: 𝓞(n). 



## Contents

  * [1 Iterator invalidation](inplace_vector.html#Iterator_invalidation)
  * [2 Template parameters](inplace_vector.html#Template_parameters)
  * [3 Member types](inplace_vector.html#Member_types)
  * [4 Member functions](inplace_vector.html#Member_functions)
    * [4.1 Element access](inplace_vector.html#Element_access)
    * [4.2 Iterators](inplace_vector.html#Iterators)
    * [4.3 Size and capacity](inplace_vector.html#Size_and_capacity)
    * [4.4 Modifiers](inplace_vector.html#Modifiers)
  * [5 Non-member functions](inplace_vector.html#Non-member_functions)
  * [6 Notes](inplace_vector.html#Notes)
  * [7 Example](inplace_vector.html#Example)
  * [8 See also](inplace_vector.html#See_also)
  * [9 External links](inplace_vector.html#External_links)

  
---  
  
### Iterator invalidation

`std::inplace_vector` iterator invalidation guarantees differ from [std::vector](vector.html "cpp/container/vector"): 

  * moving an `inplace_vector` invalidates all iterators; 
  * swapping two `inplace_vector`s invalidates all iterators (during swap, the iterator will continue to point to the same array element, and may thus change its value). 



The following member functions potentially invalidate iterators: [`operator=`](inplace_vector/operator=.html "cpp/container/inplace vector/operator="), [`assign`](inplace_vector/assign.html "cpp/container/inplace vector/assign"), [`assign_range`](inplace_vector/assign_range.html "cpp/container/inplace vector/assign range"), [`clear`](inplace_vector/clear.html "cpp/container/inplace vector/clear"), [`emplace`](inplace_vector/emplace.html "cpp/container/inplace vector/emplace"), [`erase`](inplace_vector/erase.html "cpp/container/inplace vector/erase"), [`insert`](inplace_vector/insert.html "cpp/container/inplace vector/insert"), [`insert_range`](inplace_vector/insert_range.html "cpp/container/inplace vector/insert range"), [`pop_back`](inplace_vector/pop_back.html "cpp/container/inplace vector/pop back"), [`resize`](inplace_vector/resize.html "cpp/container/inplace vector/resize"), and [`swap`](inplace_vector/swap.html "cpp/container/inplace vector/swap"). 

The following member functions potentially invalidate [`end`](inplace_vector/end.html "cpp/container/inplace vector/end") iterator only: [`append_range`](inplace_vector/append_range.html "cpp/container/inplace vector/append range"), [`emplace_back`](inplace_vector/emplace_back.html "cpp/container/inplace vector/emplace back"), [`push_back`](inplace_vector/push_back.html "cpp/container/inplace vector/push back"), [`try_append_range`](inplace_vector/try_append_range.html "cpp/container/inplace vector/try append range"), [`try_emplace_back`](inplace_vector/try_emplace_back.html "cpp/container/inplace vector/try emplace back"), [`try_push_back`](inplace_vector/try_push_back.html "cpp/container/inplace vector/try push back"), [`unchecked_emplace_back`](inplace_vector/unchecked_emplace_back.html "cpp/container/inplace vector/unchecked emplace back"), and [`unchecked_push_back`](inplace_vector/unchecked_push_back.html "cpp/container/inplace vector/unchecked push back"). 

### Template parameters

T  |  \-  |  element type. Must be [MoveConstructible](../named_req/MoveConstructible.html "cpp/named req/MoveConstructible") and [MoveAssignable](../named_req/MoveAssignable.html "cpp/named req/MoveAssignable").   
---|---|---  
N  |  \-  |  capacity, i.e. the maximum number of elements in the `inplace_vector` (might be ​0​).   
  
### Member types

Type  |  Definition   
---|---  
`value_type` |  `T`  
`size_type` |  [std::size_t](../types/size_t.html "cpp/types/size t")  
`difference_type` |  [std::ptrdiff_t](../types/ptrdiff_t.html "cpp/types/ptrdiff t")  
`reference` |  value_type&  
`const_reference` |  const value_type&  
`pointer` |  value_type*  
`const_pointer` |  const value_type*  
`iterator` |  implementation-defined [LegacyRandomAccessIterator](../named_req/RandomAccessIterator.html "cpp/named req/RandomAccessIterator") and [`random_access_iterator`](../iterator/random_access_iterator.html "cpp/iterator/random access iterator") to `value_type`  
`const_iterator` |  implementation-defined [LegacyRandomAccessIterator](../named_req/RandomAccessIterator.html "cpp/named req/RandomAccessIterator"), [ConstexprIterator](../named_req/ConstexprIterator.html "cpp/named req/ConstexprIterator")(since C++26) and [`random_access_iterator`](../iterator/random_access_iterator.html "cpp/iterator/random access iterator") to const value_type  
`reverse_iterator` |  [std::reverse_iterator](../iterator/reverse_iterator.html)<iterator>  
`const_reverse_iterator` |  [std::reverse_iterator](../iterator/reverse_iterator.html)<const_iterator>  
  
### Member functions

[ (constructor)](inplace_vector/inplace_vector.html "cpp/container/inplace vector/inplace vector") |  constructs the `inplace_vector`   
(public member function)   
---|---  
[ (destructor)](inplace_vector/~inplace_vector.html "cpp/container/inplace vector/~inplace vector") |  destructs the `inplace_vector`   
(public member function)   
[ operator=](inplace_vector/operator=.html "cpp/container/inplace vector/operator=") |  assigns values to the container   
(public member function)   
[ assign](inplace_vector/assign.html "cpp/container/inplace vector/assign") |  assigns values to the container   
(public member function)   
[ assign_range](inplace_vector/assign_range.html "cpp/container/inplace vector/assign range") |  assigns a range of values to the container   
(public member function)   
  
#####  Element access   
  
[ at](inplace_vector/at.html "cpp/container/inplace vector/at") |  access specified element with bounds checking   
(public member function)   
[ operator[]](inplace_vector/operator_at.html "cpp/container/inplace vector/operator at") |  access specified element   
(public member function)   
[ front](inplace_vector/front.html "cpp/container/inplace vector/front") |  access the first element   
(public member function)   
[ back](inplace_vector/back.html "cpp/container/inplace vector/back") |  access the last element   
(public member function)   
[ data](inplace_vector/data.html "cpp/container/inplace vector/data") |  direct access to the underlying contiguous storage   
(public member function)   
  
#####  Iterators   
  
[ begincbegin](inplace_vector/begin.html "cpp/container/inplace vector/begin") |  returns an iterator to the beginning   
(public member function)   
[ endcend](inplace_vector/end.html "cpp/container/inplace vector/end") |  returns an iterator to the end   
(public member function)   
[ rbegincrbegin](inplace_vector/rbegin.html "cpp/container/inplace vector/rbegin") |  returns a reverse iterator to the beginning   
(public member function)   
[ rendcrend](inplace_vector/rend.html "cpp/container/inplace vector/rend") |  returns a reverse iterator to the end   
(public member function)   
  
#####  Size and capacity   
  
[ empty](inplace_vector/empty.html "cpp/container/inplace vector/empty") |  checks whether the container is empty   
(public member function)   
[ size](inplace_vector/size.html "cpp/container/inplace vector/size") |  returns the number of elements   
(public member function)   
[ max_size](inplace_vector/max_size.html "cpp/container/inplace vector/max size")[static] |  returns the maximum possible number of elements   
(public static member function)   
[ capacity](inplace_vector/capacity.html "cpp/container/inplace vector/capacity")[static] |  returns the number of elements that can be held in currently allocated storage   
(public static member function)   
[ resize](inplace_vector/resize.html "cpp/container/inplace vector/resize") |  changes the number of elements stored   
(public member function)   
[ reserve](inplace_vector/reserve.html "cpp/container/inplace vector/reserve")[static] |  reserves storage   
(public static member function)   
[ shrink_to_fit](inplace_vector/shrink_to_fit.html "cpp/container/inplace vector/shrink to fit")[static] |  reduces memory usage by freeing unused memory   
(public static member function)   
  
#####  Modifiers   
  
[ insert](inplace_vector/insert.html "cpp/container/inplace vector/insert") |  inserts elements   
(public member function)   
[ insert_range](inplace_vector/insert_range.html "cpp/container/inplace vector/insert range") |  inserts a range of elements   
(public member function)   
[ emplace](inplace_vector/emplace.html "cpp/container/inplace vector/emplace") |  constructs element in-place   
(public member function)   
[ emplace_back](inplace_vector/emplace_back.html "cpp/container/inplace vector/emplace back") |  constructs an element in-place at the end   
(public member function)   
[ try_emplace_back](inplace_vector/try_emplace_back.html "cpp/container/inplace vector/try emplace back") |  tries to construct an element in-place at the end   
(public member function)   
[ unchecked_emplace_back](inplace_vector/unchecked_emplace_back.html "cpp/container/inplace vector/unchecked emplace back") |  unconditionally constructs an element in-place at the end   
(public member function)   
[ push_back](inplace_vector/push_back.html "cpp/container/inplace vector/push back") |  adds an element to the end   
(public member function)   
[ try_push_back](inplace_vector/try_push_back.html "cpp/container/inplace vector/try push back") |  tries to add an element to the end   
(public member function)   
[ unchecked_push_back](inplace_vector/unchecked_push_back.html "cpp/container/inplace vector/unchecked push back") |  unconditionally adds an element to the end   
(public member function)   
[ pop_back](inplace_vector/pop_back.html "cpp/container/inplace vector/pop back") |  removes the last element   
(public member function)   
[ append_range](inplace_vector/append_range.html "cpp/container/inplace vector/append range") |  adds a range of elements to the end   
(public member function)   
[ try_append_range](inplace_vector/try_append_range.html "cpp/container/inplace vector/try append range") |  tries to add a range of elements to the end   
(public member function)   
[ clear](inplace_vector/clear.html "cpp/container/inplace vector/clear") |  clears the contents   
(public member function)   
[ erase](inplace_vector/erase.html "cpp/container/inplace vector/erase") |  erases elements   
(public member function)   
[ swap](inplace_vector/swap.html "cpp/container/inplace vector/swap") |  swaps the contents   
(public member function)   
  
### Non-member functions

[ std::swap(std::inplace_vector)](inplace_vector/swap2.html "cpp/container/inplace vector/swap2")(C++26) |  specializes the [std::swap](../utility/swap.html "cpp/algorithm/swap") algorithm   
(function template)   
---|---  
[ erase(std::inplace_vector)erase_if(std::inplace_vector)](inplace_vector/erase2.html "cpp/container/inplace vector/erase2")(C++26) |  erases all elements satisfying specific criteria   
(function template)   
[ operator==operator<=>](inplace_vector/operator_cmp.html "cpp/container/inplace vector/operator cmp")(C++26) |  lexicographically compares the values of two `inplace_vector`s   
(function template)   
  
### Notes

The number of elements in a `inplace_vector` may vary dynamically up to a fixed capacity because elements are stored within the object itself similarly to [std::array](array.html "cpp/container/array"). However, objects are initialized as they are inserted into `inplace_vector` unlike C arrays or [std::array](array.html "cpp/container/array") , which must construct all elements on instantiation. 

`inplace_vector` is useful in environments where dynamic memory allocations are undesired. 

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_inplace_vector`](../experimental/feature_test.html#cpp_lib_inplace_vector "cpp/feature test") | [`202406L`](../compiler_support/26.html#cpp_lib_inplace_vector_202406L "cpp/compiler support/26") | (C++26) | `std::inplace_vector`: dynamically-resizable vector with fixed capacity inplace storage   
[`__cpp_lib_constexpr_inplace_vector`](../experimental/feature_test.html#cpp_lib_constexpr_inplace_vector "cpp/feature test") | [`202502L`](../compiler_support/26.html#cpp_lib_constexpr_inplace_vector_202502L "cpp/compiler support/26") | (C++26) | constexpr `std::inplace_vector` for non-trivial element types   
  
### Example

Run this code
    
    
    #include <algorithm>
    #include <array>
    #include <cassert>
    #include <inplace_vector>
     
    int main()
    {
        std::inplace_vector<int, 4> v1{0, 1, 2};
        [assert](../error/assert.html)(v1.max_size() == 4);
        [assert](../error/assert.html)(v1.capacity() == 4);
        [assert](../error/assert.html)(v1.size() == 3);
        [assert](../error/assert.html)(std::[ranges::equal](../algorithm/ranges/equal.html)(v1, [std::array](array.html){0, 1, 2}));
        [assert](../error/assert.html)(v1[0] == 0);
        [assert](../error/assert.html)(v1.at(0) == 0);
        [assert](../error/assert.html)(v1.front() == 0);
        [assert](../error/assert.html)(*v1.begin() == 0);
        [assert](../error/assert.html)(v1.back() == 2);
        v1.push_back(3);
        [assert](../error/assert.html)(v1.back() == 3);
        [assert](../error/assert.html)(std::[ranges::equal](../algorithm/ranges/equal.html)(v1, [std::array](array.html){0, 1, 2, 3}));
        v1.resize(3);
        [assert](../error/assert.html)(std::[ranges::equal](../algorithm/ranges/equal.html)(v1, [std::array](array.html){0, 1, 2}));
        [assert](../error/assert.html)(v1.try_push_back(3) != nullptr);
        [assert](../error/assert.html)(v1.back() == 3);
        [assert](../error/assert.html)(v1.size() == 4);
        [assert](../error/assert.html)(v1.try_push_back(13) == nullptr); // no place
        [assert](../error/assert.html)(v1.back() == 3);
        [assert](../error/assert.html)(v1.size() == 4);
        v1.clear();
        [assert](../error/assert.html)(v1.size() == 0);
        [assert](../error/assert.html)(v1.empty());
    }

### See also

[ vector](vector.html "cpp/container/vector") |  resizable contiguous array   
(class template)   
---|---  
[ array](array.html "cpp/container/array")(C++11) |  fixed-sized inplace contiguous array   
(class template)   
[ deque](deque.html "cpp/container/deque") |  double-ended queue   
(class template)   
  
### External links

1\.  | [`inplace_vector`](https://godbolt.org/z/5P78aG5xE) — A reference implementation of [P0843R14](https://wg21.link/P0843R14) (`std::inplace_vector`).   
---|---  
2\.  | [`static_vector`](https://www.boost.org/doc/libs/release/doc/html/container/non_standard_containers.html#container.non_standard_containers.static_vector) — Boost.Container implements inplace vector as a standalone type with its own guarantees.   
3\.  | [`fixed_vector`](https://github.com/questor/eastl/blob/master/fixed_vector.h#L71) — EASTL implements inplace vector via an extra template parameter.   
4\.  | [`small_vector`](https://github.com/facebook/folly/blob/master/folly/docs/small_vector.md) — Folly also implements inplace vector via an extra template parameter.   
5\.  | [`stack_alloc`](https://howardhinnant.github.io/stack_alloc.html) — Howard Hinnant's Custom allocators that emulate `std::inplace_vector` on top of [std::vector](vector.html "cpp/container/vector"). 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
