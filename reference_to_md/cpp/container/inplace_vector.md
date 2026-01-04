

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
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/container/inplace_vector&action=edit&section=1 "Edit section: Iterator invalidation")] Iterator invalidation

`std::inplace_vector` iterator invalidation guarantees differ from [std::vector](vector.html "cpp/container/vector"): 

  * moving an `inplace_vector` invalidates all iterators; 
  * swapping two `inplace_vector`s invalidates all iterators (during swap, the iterator will continue to point to the same array element, and may thus change its value). 



The following member functions potentially invalidate iterators: [`operator=`](inplace_vector/operator=.html "cpp/container/inplace vector/operator="), [`assign`](inplace_vector/assign.html "cpp/container/inplace vector/assign"), [`assign_range`](inplace_vector/assign_range.html "cpp/container/inplace vector/assign range"), [`clear`](inplace_vector/clear.html "cpp/container/inplace vector/clear"), [`emplace`](inplace_vector/emplace.html "cpp/container/inplace vector/emplace"), [`erase`](inplace_vector/erase.html "cpp/container/inplace vector/erase"), [`insert`](inplace_vector/insert.html "cpp/container/inplace vector/insert"), [`insert_range`](inplace_vector/insert_range.html "cpp/container/inplace vector/insert range"), [`pop_back`](inplace_vector/pop_back.html "cpp/container/inplace vector/pop back"), [`resize`](inplace_vector/resize.html "cpp/container/inplace vector/resize"), and [`swap`](inplace_vector/swap.html "cpp/container/inplace vector/swap"). 

The following member functions potentially invalidate [`end`](inplace_vector/end.html "cpp/container/inplace vector/end") iterator only: [`append_range`](inplace_vector/append_range.html "cpp/container/inplace vector/append range"), [`emplace_back`](inplace_vector/emplace_back.html "cpp/container/inplace vector/emplace back"), [`push_back`](inplace_vector/push_back.html "cpp/container/inplace vector/push back"), [`try_append_range`](inplace_vector/try_append_range.html "cpp/container/inplace vector/try append range"), [`try_emplace_back`](inplace_vector/try_emplace_back.html "cpp/container/inplace vector/try emplace back"), [`try_push_back`](inplace_vector/try_push_back.html "cpp/container/inplace vector/try push back"), [`unchecked_emplace_back`](inplace_vector/unchecked_emplace_back.html "cpp/container/inplace vector/unchecked emplace back"), and [`unchecked_push_back`](inplace_vector/unchecked_push_back.html "cpp/container/inplace vector/unchecked push back"). 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/container/inplace_vector&action=edit&section=2 "Edit section: Template parameters")] Template parameters

T  |  \-  |  element type. Must be [MoveConstructible](../named_req/MoveConstructible.html "cpp/named req/MoveConstructible") and [MoveAssignable](../named_req/MoveAssignable.html "cpp/named req/MoveAssignable").   
---|---|---  
N  |  \-  |  capacity, i.e. the maximum number of elements in the `inplace_vector` (might be ​0​).   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/container/inplace_vector&action=edit&section=3 "Edit section: Member types")] Member types

Type  |  Definition   
---|---  
`value_type` |  `T`[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_value_type&action=edit)  
`size_type` |  [std::size_t](../types/size_t.html "cpp/types/size t")[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_size_type&action=edit)  
`difference_type` |  [std::ptrdiff_t](../types/ptrdiff_t.html "cpp/types/ptrdiff t")[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_difference_type&action=edit)  
`reference` |  value_type&[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_reference&action=edit)  
`const_reference` |  const value_type&[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_const_reference&action=edit)  
`pointer` |  value_type*[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_pointer&action=edit)  
`const_pointer` |  const value_type*[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_const_pointer&action=edit)  
`iterator` |  implementation-defined [LegacyRandomAccessIterator](../named_req/RandomAccessIterator.html "cpp/named req/RandomAccessIterator") and [`random_access_iterator`](../iterator/random_access_iterator.html "cpp/iterator/random access iterator") to `value_type`[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_iterator&action=edit)  
`const_iterator` |  implementation-defined [LegacyRandomAccessIterator](../named_req/RandomAccessIterator.html "cpp/named req/RandomAccessIterator"), [ConstexprIterator](../named_req/ConstexprIterator.html "cpp/named req/ConstexprIterator")(since C++26) and [`random_access_iterator`](../iterator/random_access_iterator.html "cpp/iterator/random access iterator") to const value_type[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_const_iterator&action=edit)  
`reverse_iterator` |  [std::reverse_iterator](../iterator/reverse_iterator.html)<iterator>[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_reverse_iterator&action=edit)  
`const_reverse_iterator` |  [std::reverse_iterator](../iterator/reverse_iterator.html)<const_iterator>[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_const_reverse_iterator&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/container/inplace_vector&action=edit&section=4 "Edit section: Member functions")] Member functions

[ (constructor)](inplace_vector/inplace_vector.html "cpp/container/inplace vector/inplace vector") |  constructs the `inplace_vector`   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_constructor&action=edit)  
---|---  
[ (destructor)](inplace_vector/~inplace_vector.html "cpp/container/inplace vector/~inplace vector") |  destructs the `inplace_vector`   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_destructor&action=edit)  
[ operator=](inplace_vector/operator=.html "cpp/container/inplace vector/operator=") |  assigns values to the container   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_operator%3D&action=edit)  
[ assign](inplace_vector/assign.html "cpp/container/inplace vector/assign") |  assigns values to the container   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_assign&action=edit)  
[ assign_range](inplace_vector/assign_range.html "cpp/container/inplace vector/assign range") |  assigns a range of values to the container   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_assign_range&action=edit)  
  
#####  Element access   
  
[ at](inplace_vector/at.html "cpp/container/inplace vector/at") |  access specified element with bounds checking   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_at&action=edit)  
[ operator[]](inplace_vector/operator_at.html "cpp/container/inplace vector/operator at") |  access specified element   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_operator_at&action=edit)  
[ front](inplace_vector/front.html "cpp/container/inplace vector/front") |  access the first element   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_front&action=edit)  
[ back](inplace_vector/back.html "cpp/container/inplace vector/back") |  access the last element   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_back&action=edit)  
[ data](inplace_vector/data.html "cpp/container/inplace vector/data") |  direct access to the underlying contiguous storage   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_data&action=edit)  
  
#####  Iterators   
  
[ begincbegin](inplace_vector/begin.html "cpp/container/inplace vector/begin") |  returns an iterator to the beginning   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_begin&action=edit)  
[ endcend](inplace_vector/end.html "cpp/container/inplace vector/end") |  returns an iterator to the end   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_end&action=edit)  
[ rbegincrbegin](inplace_vector/rbegin.html "cpp/container/inplace vector/rbegin") |  returns a reverse iterator to the beginning   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_rbegin&action=edit)  
[ rendcrend](inplace_vector/rend.html "cpp/container/inplace vector/rend") |  returns a reverse iterator to the end   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_rend&action=edit)  
  
#####  Size and capacity   
  
[ empty](inplace_vector/empty.html "cpp/container/inplace vector/empty") |  checks whether the container is empty   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_empty&action=edit)  
[ size](inplace_vector/size.html "cpp/container/inplace vector/size") |  returns the number of elements   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_size&action=edit)  
[ max_size](inplace_vector/max_size.html "cpp/container/inplace vector/max size")[static] |  returns the maximum possible number of elements   
(public static member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_max_size&action=edit)  
[ capacity](inplace_vector/capacity.html "cpp/container/inplace vector/capacity")[static] |  returns the number of elements that can be held in currently allocated storage   
(public static member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_capacity&action=edit)  
[ resize](inplace_vector/resize.html "cpp/container/inplace vector/resize") |  changes the number of elements stored   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_resize&action=edit)  
[ reserve](inplace_vector/reserve.html "cpp/container/inplace vector/reserve")[static] |  reserves storage   
(public static member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_reserve&action=edit)  
[ shrink_to_fit](inplace_vector/shrink_to_fit.html "cpp/container/inplace vector/shrink to fit")[static] |  reduces memory usage by freeing unused memory   
(public static member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_shrink_to_fit&action=edit)  
  
#####  Modifiers   
  
[ insert](inplace_vector/insert.html "cpp/container/inplace vector/insert") |  inserts elements   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_insert&action=edit)  
[ insert_range](inplace_vector/insert_range.html "cpp/container/inplace vector/insert range") |  inserts a range of elements   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_insert_range&action=edit)  
[ emplace](inplace_vector/emplace.html "cpp/container/inplace vector/emplace") |  constructs element in-place   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_emplace&action=edit)  
[ emplace_back](inplace_vector/emplace_back.html "cpp/container/inplace vector/emplace back") |  constructs an element in-place at the end   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_emplace_back&action=edit)  
[ try_emplace_back](inplace_vector/try_emplace_back.html "cpp/container/inplace vector/try emplace back") |  tries to construct an element in-place at the end   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_try_emplace_back&action=edit)  
[ unchecked_emplace_back](inplace_vector/unchecked_emplace_back.html "cpp/container/inplace vector/unchecked emplace back") |  unconditionally constructs an element in-place at the end   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_unchecked_emplace_back&action=edit)  
[ push_back](inplace_vector/push_back.html "cpp/container/inplace vector/push back") |  adds an element to the end   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_push_back&action=edit)  
[ try_push_back](inplace_vector/try_push_back.html "cpp/container/inplace vector/try push back") |  tries to add an element to the end   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_try_push_back&action=edit)  
[ unchecked_push_back](inplace_vector/unchecked_push_back.html "cpp/container/inplace vector/unchecked push back") |  unconditionally adds an element to the end   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_unchecked_push_back&action=edit)  
[ pop_back](inplace_vector/pop_back.html "cpp/container/inplace vector/pop back") |  removes the last element   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_pop_back&action=edit)  
[ append_range](inplace_vector/append_range.html "cpp/container/inplace vector/append range") |  adds a range of elements to the end   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_append_range&action=edit)  
[ try_append_range](inplace_vector/try_append_range.html "cpp/container/inplace vector/try append range") |  tries to add a range of elements to the end   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_try_append_range&action=edit)  
[ clear](inplace_vector/clear.html "cpp/container/inplace vector/clear") |  clears the contents   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_clear&action=edit)  
[ erase](inplace_vector/erase.html "cpp/container/inplace vector/erase") |  erases elements   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_erase&action=edit)  
[ swap](inplace_vector/swap.html "cpp/container/inplace vector/swap") |  swaps the contents   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_swap&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/container/inplace_vector&action=edit&section=5 "Edit section: Non-member functions")] Non-member functions

[ std::swap(std::inplace_vector)](inplace_vector/swap2.html "cpp/container/inplace vector/swap2")(C++26) |  specializes the [std::swap](../utility/swap.html "cpp/algorithm/swap") algorithm   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_swap2&action=edit)  
---|---  
[ erase(std::inplace_vector)erase_if(std::inplace_vector)](inplace_vector/erase2.html "cpp/container/inplace vector/erase2")(C++26) |  erases all elements satisfying specific criteria   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_erase_seq&action=edit)  
[ operator==operator<=>](inplace_vector/operator_cmp.html "cpp/container/inplace vector/operator cmp")(C++26) |  lexicographically compares the values of two `inplace_vector`s   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_operator_cmp&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/container/inplace_vector&action=edit&section=6 "Edit section: Notes")] Notes

The number of elements in a `inplace_vector` may vary dynamically up to a fixed capacity because elements are stored within the object itself similarly to [std::array](array.html "cpp/container/array"). However, objects are initialized as they are inserted into `inplace_vector` unlike C arrays or [std::array](array.html "cpp/container/array") , which must construct all elements on instantiation. 

`inplace_vector` is useful in environments where dynamic memory allocations are undesired. 

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_inplace_vector`](../experimental/feature_test.html#cpp_lib_inplace_vector "cpp/feature test") | [`202406L`](../compiler_support/26.html#cpp_lib_inplace_vector_202406L "cpp/compiler support/26") | (C++26) | `std::inplace_vector`: dynamically-resizable vector with fixed capacity inplace storage   
[`__cpp_lib_constexpr_inplace_vector`](../experimental/feature_test.html#cpp_lib_constexpr_inplace_vector "cpp/feature test") | [`202502L`](../compiler_support/26.html#cpp_lib_constexpr_inplace_vector_202502L "cpp/compiler support/26") | (C++26) | constexpr `std::inplace_vector` for non-trivial element types   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/container/inplace_vector&action=edit&section=7 "Edit section: Example")] Example

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

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/container/inplace_vector&action=edit&section=8 "Edit section: See also")] See also

[ vector](vector.html "cpp/container/vector") |  resizable contiguous array   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_vector&action=edit)  
---|---  
[ array](array.html "cpp/container/array")(C++11) |  fixed-sized inplace contiguous array   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_array&action=edit)  
[ deque](deque.html "cpp/container/deque") |  double-ended queue   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_deque&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/container/inplace_vector&action=edit&section=9 "Edit section: External links")] External links

1\.  | [`inplace_vector`](https://godbolt.org/z/5P78aG5xE) — A reference implementation of [P0843R14](https://wg21.link/P0843R14) (`std::inplace_vector`).   
---|---  
2\.  | [`static_vector`](https://www.boost.org/doc/libs/release/doc/html/container/non_standard_containers.html#container.non_standard_containers.static_vector) — Boost.Container implements inplace vector as a standalone type with its own guarantees.   
3\.  | [`fixed_vector`](https://github.com/questor/eastl/blob/master/fixed_vector.h#L71) — EASTL implements inplace vector via an extra template parameter.   
4\.  | [`small_vector`](https://github.com/facebook/folly/blob/master/folly/docs/small_vector.md) — Folly also implements inplace vector via an extra template parameter.   
5\.  | [`stack_alloc`](https://howardhinnant.github.io/stack_alloc.html) — Howard Hinnant's Custom allocators that emulate `std::inplace_vector` on top of [std::vector](vector.html "cpp/container/vector"). 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
