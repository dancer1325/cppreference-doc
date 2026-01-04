* defined | header [`<vector>`](../header/vector.md)

* vector's storage
    * is handled AUTOMATICALLY / can be expanded -- as -- needed

* space / occupy vector > space / occupy static arrays
    * Reason:🧠handle future growth allocates NORMALLY MORE memory🧠
    * moments | reallocate the vector:
        * ONLY | ADDITIONAL memory is exhausted
            * != | insert an element
    * if you want to
        * query the TOTAL amount of allocated memory -> use [capacity()](vector/capacity.md)
        * return EXTRA memory to the system -> use [shrink_to_fit()](vector/shrink_to_fit.md)

* reallocations
    * costly (about performance) operations
    * if you want to eliminate reallocations & the number of elements is known beforehand -> use [reserve()](vector/reserve.md)

* common operations | vectors' complexity (efficiency)
    * Random access
        * constant 𝓞(1)
    * Insert OR remove of elements | end
        * amortized constant 𝓞(1)
    * Insert OR remove of elements
        * linear in the distance -- to the -- end of the vector 𝓞(n)

## (1)
* `template<class T, class Allocator = std::allocator<T>> class vector;`
  * == 💡`std::vector`💡
  * == sequence container / encapsulates dynamic size arrays
    * ALL elements (❌EXCEPT for the `std::vector<bool>`❌) are stored contiguously
      * -> ways to access the elements
        * through iterators
        * offsets -- to -- regular pointers to elements
          * == pointer -- to a -- vector's element may be passed -- to -- any function /
            * expects: pointer -- to an -- array's element
  * if `T` != `bool` -> meets the requirements of 
    * [Container](../named_req/Container.md),
    * [AllocatorAwareContainer](../named_req/AllocatorAwareContainer.md)
      * requirements
        * C++11
    * [SequenceContainer](../named_req/SequenceContainer.md),
    * [ContiguousContainer](../named_req/ContiguousContainer.md)
      * requirements
        * C++17
    * [ReversibleContainer](../named_req/ReversibleContainer.md) 
  * ALL member functions
    * are `constexpr`
      * == | evaluate a constant expression, possible to create & use `std::vector` objects
      * requirements
        * C++20
  * objects
    * NORMALLY, can NOT be `constexpr`
      * Reason:🧠| evaluate a constant expression, ANY dynamically allocated storage MUST be released🧠
      * requirements
        * C++20

## (2)
* 
    ```c++
    namespace pmr {  
        template< class T >  
        using vector = std::vector<T, std::pmr::polymorphic_allocator<T>>;  
    }
    ```
  * requirements
    * C++17
  * == 💡`std::pmr::vector`💡
  * == alias template / uses a [polymorphic allocator](../memory/polymorphic_allocator.md)

## Contents

  * [1 Template parameters](vector.html#Template_parameters)
  * [2 Specializations](vector.html#Specializations)
  * [3 Iterator invalidation](vector.html#Iterator_invalidation)
  * [4 Member types](vector.html#Member_types)
  * [5 Member functions](vector.html#Member_functions)
    * [5.1 Element access](vector.html#Element_access)
    * [5.2 Iterators](vector.html#Iterators)
    * [5.3 Capacity](vector.html#Capacity)
    * [5.4 Modifiers](vector.html#Modifiers)
  * [6 Non-member functions](vector.html#Non-member_functions)
  * [7 Deduction guides](vector.html#Deduction_guides)
  * [8 Notes](vector.html#Notes)
  * [9 Example](vector.html#Example)
  * [10 Defect reports](vector.html#Defect_reports)
  * [11 See also](vector.html#See_also)

###  Template parameters

* `T` 
  * == type of the elements
  * requirements
    * | C++11-,
      * requirements of [CopyAssignable](../named_req/CopyAssignable.md)
      * requirements of [CopyConstructible](../named_req/CopyConstructible.md)   
    * | [C++11, C++17],
      * requirements that are imposed on the elements depend on the actual operations performed on the container
      * Generally, it is required that element type is a complete type and meets the requirements of [Erasable](../named_req/Erasable.html "cpp/named req/Erasable"), but many member functions impose stricter requirements
    * | C++17,
      * requirements | elements
        * depend on the actual operations / performed | container
        * NORMALLY,
          * requirements of [Erasable](../named_req/Erasable.md)
            * MANY member functions has stricter requirements
        * if the allocator satisfies the [allocator completeness requirements](../named_req/Allocator.md#Allocator_completeness_requirements) -> this container (NOT its members) can be instantiated -- via -- incomplete element type  
  
* `Allocator`
  * uses
    * acquire/release memory
    * construct/destroy the elements | that memory
  * [requirements](../named_req/Allocator.md)
  * | C++20-,
    * behavior is undefined 
  * | C++20,
    * if `Allocator::value_type` != `T` -> program is ill-formed   

###  Specializations

* [`std::vector<bool>`](vector_bool.md)
  * == template class specialization
    * space-efficient
    * dynamic
    * bitset
  
###  Iterator invalidation

| Operations                     | Invalidated                                                                             |
|--------------------------------|-----------------------------------------------------------------------------------------|
| ALL read ONLY operations       | NEVER                                                                                   |
| `swap`, `std::swap`            | `end()`                                                                                 |
| `clear`, `operator=`, `assign` | ALWAYS                                                                                  |
| `reserve`, `shrink_to_fit`     | if capacity changed -> ALL <br/> Otherwise: none                                        |
| `erase`                        | Erased elements & ALL AFTER them (including `end()`)                                    |
| `push_back`, `emplace_back`    | if capacity changed -> ALL <br/> Otherwise: only `end()`                                |
| `insert`, `emplace`            | if capacity changed -> ALL <br/> Otherwise: insertion point & after (including `end()`) |
| `resize`                       | if capacity changed -> ALL <br/> Otherwise: `end()` & erased elements                   |
| `pop_back`                     | Erased element & `end()`                                                                |   
  
###  Member types

| Member type | Definition |
|-------------|------------|
| `value_type` | `T` |
| `allocator_type` | `Allocator` |
| `size_type` | Unsigned integer type (usually `std::size_t`) |
| `difference_type` | Signed integer type (usually `std::ptrdiff_t`) |
| `reference` | `value_type&` |
| `const_reference` | `const value_type&` |
| `pointer` | `Allocator::pointer` (until C++11)<br>`std::allocator_traits<Allocator>::pointer` (since C++11) |
| `const_pointer` | `Allocator::const_pointer` (until C++11)<br>`std::allocator_traits<Allocator>::const_pointer` (since C++11) |
| `iterator` | Random access iterator to `value_type` (until C++20)<br>Random access, contiguous, and constexpr iterator to `value_type` (since C++20) |
| `const_iterator` | Random access iterator to `const value_type` (until C++20)<br>Random access, contiguous, and constexpr iterator to `const value_type` (since C++20) |
| `reverse_iterator` | `std::reverse_iterator<iterator>` |
| `const_reverse_iterator` | `std::reverse_iterator<const_iterator>` |  
  
###  Member functions

[ (constructor)](vector/vector.html "cpp/container/vector/vector") |  constructs the `vector`   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_constructor&action=edit)  
---|---  
[ (destructor)](vector/~vector.html "cpp/container/vector/~vector") |  destructs the `vector`   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_destructor&action=edit)  
[ operator=](vector/operator=.html "cpp/container/vector/operator=") |  assigns values to the container   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_operator%3D&action=edit)  
[ assign](vector/assign.html "cpp/container/vector/assign") |  assigns values to the container   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_assign&action=edit)  
[ assign_range](vector/assign_range.html "cpp/container/vector/assign range")(C++23) |  assigns a range of values to the container   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_assign_range&action=edit)  
[ get_allocator](vector/get_allocator.html "cpp/container/vector/get allocator") |  returns the associated allocator   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_get_allocator&action=edit)  
  
#####  Element access   
  
[ at](vector/at.html "cpp/container/vector/at") |  access specified element with bounds checking   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_at&action=edit)  
[ operator[]](vector/operator_at.html "cpp/container/vector/operator at") |  access specified element   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_operator_at&action=edit)  
[ front](vector/front.html "cpp/container/vector/front") |  access the first element   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_front&action=edit)  
[ back](vector/back.html "cpp/container/vector/back") |  access the last element   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_back&action=edit)  
[ data](vector/data.html "cpp/container/vector/data") |  direct access to the underlying contiguous storage   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_data&action=edit)  
  
#####  Iterators   
  
[ begincbegin](vector/begin.html "cpp/container/vector/begin")(C++11) |  returns an iterator to the beginning   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_begin&action=edit)  
[ endcend](vector/end.html "cpp/container/vector/end")(C++11) |  returns an iterator to the end   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_end&action=edit)  
[ rbegincrbegin](vector/rbegin.html "cpp/container/vector/rbegin")(C++11) |  returns a reverse iterator to the beginning   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_rbegin&action=edit)  
[ rendcrend](vector/rend.html "cpp/container/vector/rend")(C++11) |  returns a reverse iterator to the end   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_rend&action=edit)  
  
#####  Capacity   
  
[ empty](vector/empty.html "cpp/container/vector/empty") |  checks whether the container is empty   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_empty&action=edit)  
[ size](vector/size.html "cpp/container/vector/size") |  returns the number of elements   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_size&action=edit)  
[ max_size](vector/max_size.html "cpp/container/vector/max size") |  returns the maximum possible number of elements   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_max_size&action=edit)  
[ reserve](vector/reserve.html "cpp/container/vector/reserve") |  reserves storage   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_reserve&action=edit)  
[ capacity](vector/capacity.html "cpp/container/vector/capacity") |  returns the number of elements that can be held in currently allocated storage   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_capacity&action=edit)  
[ shrink_to_fit](vector/shrink_to_fit.html "cpp/container/vector/shrink to fit")(DR*) |  reduces memory usage by freeing unused memory   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_shrink_to_fit&action=edit)  
  
#####  Modifiers   
  
[ clear](vector/clear.html "cpp/container/vector/clear") |  clears the contents   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_clear&action=edit)  
[ insert](vector/insert.html "cpp/container/vector/insert") |  inserts elements   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_insert&action=edit)  
[ insert_range](vector/insert_range.html "cpp/container/vector/insert range")(C++23) |  inserts a range of elements   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_insert_range&action=edit)  
[ emplace](vector/emplace.html "cpp/container/vector/emplace")(C++11) |  constructs element in-place   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_emplace&action=edit)  
[ erase](vector/erase.html "cpp/container/vector/erase") |  erases elements   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_erase&action=edit)  
[ push_back](vector/push_back.html "cpp/container/vector/push back") |  adds an element to the end   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_push_back&action=edit)  
[ emplace_back](vector/emplace_back.html "cpp/container/vector/emplace back")(C++11) |  constructs an element in-place at the end   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_emplace_back&action=edit)  
[ append_range](vector/append_range.html "cpp/container/vector/append range")(C++23) |  adds a range of elements to the end   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_append_range&action=edit)  
[ pop_back](vector/pop_back.html "cpp/container/vector/pop back") |  removes the last element   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_pop_back&action=edit)  
[ resize](vector/resize.html "cpp/container/vector/resize") |  changes the number of elements stored   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_resize&action=edit)  
[ swap](vector/swap.html "cpp/container/vector/swap") |  swaps the contents   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_swap&action=edit)  
  
###  Non-member functions

[ operator==operator!=operator<operator<=operator>operator>=operator<=>](vector/operator_cmp.html "cpp/container/vector/operator cmp")(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(C++20) |  lexicographically compares the values of two `vector`s   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_operator_cmp&action=edit)  
---|---  
[ std::swap(std::vector)](vector/std_swap.html "cpp/container/vector/swap2") |  specializes the [std::swap](../utility/swap.html "cpp/algorithm/swap") algorithm   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_swap2&action=edit)  
[ erase(std::vector)erase_if(std::vector)](vector/erase2.html "cpp/container/vector/erase2")(C++20) |  erases all elements satisfying specific criteria   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_erase_seq&action=edit)  
  
###  [Deduction guides](vector/deduction_guides.md)
* requirements
  * C++17
  
###  Notes

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_containers_ranges`](../experimental/feature_test.html#cpp_lib_containers_ranges "cpp/feature test") | [`202202L`](../compiler_support/23.html#cpp_lib_containers_ranges_202202L "cpp/compiler support/23") | (C++23) | Ranges construction and insertion for containers   
[`__cpp_lib_ranges_reserve_hint`](../experimental/feature_test.html#cpp_lib_ranges_reserve_hint "cpp/feature test") | [`202502L`](../compiler_support/26.html#cpp_lib_ranges_reserve_hint_202502L "cpp/compiler support/26") | (C++26) | ranges::approximately_sized_range, ranges::reserve_hint, and changes to `std::vector`

###  Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 69](https://cplusplus.github.io/LWG/issue69) | C++98  | contiguity of the storage for elements of `vector` was not required  | required   
[LWG 230](https://cplusplus.github.io/LWG/issue230) | C++98  | `T` was not required to be [CopyConstructible](../named_req/CopyConstructible.html "cpp/named req/CopyConstructible")  
(an element of type `T` might not be able to be constructed)  | `T` is also required to  
be [CopyConstructible](../named_req/CopyConstructible.html "cpp/named req/CopyConstructible")  
[LWG 464](https://cplusplus.github.io/LWG/issue464) | C++98  | access to the underlying storage of an empty `vector` resulted in UB  | `data` function provided   
  
###  See also

[ inplace_vector](inplace_vector.html "cpp/container/inplace vector")(C++26) |  resizable, fixed capacity, inplace contiguous array   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_inplace_vector&action=edit)  
---|---  
[ array](array.html "cpp/container/array")(C++11) |  fixed-sized inplace contiguous array   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_array&action=edit)  
[ deque](deque.html "cpp/container/deque") |  double-ended queue   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_deque&action=edit)
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
