
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/vector/navbar_content&action=edit)

| (1) |   
---|---|---  
vector() : vector(Allocator()) {} |  |  (since C++11)   
(until C++17)  
vector() noexcept(noexcept(Allocator())) : vector(Allocator()) {} |  | (since C++17)   
(constexpr since C++20)  
| (2) |   
explicit vector( const Allocator& alloc = Allocator() ); |  |  (until C++11)  
explicit vector( const Allocator& alloc ); |  | (since C++11)   
(noexcept since C++17)   
(constexpr since C++20)  
explicit vector( size_type count,  
const Allocator& alloc = Allocator() ); |  (3) | (since C++11)  
| (4) |   
explicit vector( size_type count, const T& value = T(),  
const Allocator& alloc = Allocator() ); |  | (until C++11)  
vector( size_type count, const T& value,  
const Allocator& alloc = Allocator() ); |  | (since C++11)   
(constexpr since C++20)  
template< class InputIt >  
vector( InputIt first, InputIt last,  
const Allocator& alloc = Allocator() ); |  (5) | (constexpr since C++20)  
template< [container-compatible-range](../../ranges/to.html)<T> R >  
constexpr vector( [std::from_range_t](../../ranges/from_range.html), R&& rg,  
const Allocator& alloc = Allocator() ); |  (6) | (since C++23)  
vector( const vector& other ); |  (7) | (constexpr since C++20)  
vector( vector&& other ); |  (8) | (since C++11)   
(noexcept since C++17)   
(constexpr since C++20)  
| (9) |   
vector( const vector& other, const Allocator& alloc ); |  | (since C++11)   
(constexpr since C++20)   
(until C++23)  
constexpr vector( const vector& other,  
const [std::type_identity_t](../../types/type_identity.html)<Allocator>& alloc ); |  |  (since C++23)  
| (10) |   
vector( vector&& other, const Allocator& alloc ); |  |  (since C++11)   
(until C++23)  
constexpr vector( vector&& other,  
const [std::type_identity_t](../../types/type_identity.html)<Allocator>& alloc ); |  |  (since C++23)  
vector( [std::initializer_list](../../utility/initializer_list.html)<T> init,  
const Allocator& alloc = Allocator() ); |  (11)  |  (since C++11)  
| |   
  
Constructs a new `vector` from a variety of data sources, optionally using a user supplied allocator alloc. 

1) The default constructor since C++11. Constructs an empty `vector` with a default-constructed allocator.

If `Allocator` is not [DefaultConstructible](../../named_req/DefaultConstructible.html "cpp/named req/DefaultConstructible"), the behavior is undefined.

2) The default constructor until C++11. Constructs an empty `vector` with the given allocator alloc.

3) Constructs a `vector` with count default-inserted objects of `T`. No copies are made.

If `T` is not [DefaultInsertable](../../named_req/DefaultInsertable.html "cpp/named req/DefaultInsertable") into `vector`, the behavior is undefined.

4) Constructs a `vector` with count copies of elements with value value.  If `T` is not [CopyInsertable](../../named_req/CopyInsertable.html "cpp/named req/CopyInsertable") into `vector`, the behavior is undefined.  | (since C++11)  
---|---  
  
5) Constructs a `vector` with the contents of the range `[`first`, `last`)`. Each iterator in `[`first`, `last`)` is dereferenced exactly once.  If `InputIt` does not satisfy the requirements of [LegacyInputIterator](../../named_req/InputIterator.html "cpp/named req/InputIterator"), overload (4) is called instead with arguments static_cast<size_type>(first), last and alloc.  | (until C++11)  
---|---  
This overload participates in overload resolution only if `InputIt` satisfies the requirements of [LegacyInputIterator](../../named_req/InputIterator.html "cpp/named req/InputIterator"). If any of the following conditions is satisfied, the behavior is undefined: 

  * `T` is not [EmplaceConstructible](../../named_req/EmplaceConstructible.html "cpp/named req/EmplaceConstructible") into `vector` from *first. 
  * `Iter` does not satisfy the requirements of [LegacyForwardIterator](../../named_req/ForwardIterator.html "cpp/named req/ForwardIterator"), and `T` is not [MoveInsertable](../../named_req/MoveInsertable.html "cpp/named req/MoveInsertable") into `vector`. 

| (since C++11)  
  
6) Constructs a `vector` with the contents of the range rg. Each iterator in rg is dereferenced exactly once.

If any of the following conditions is satisfied, the behavior is undefined: 

  * `T` is not [EmplaceConstructible](../../named_req/EmplaceConstructible.html "cpp/named req/EmplaceConstructible") into `vector` from *[ranges::begin](../../ranges/begin.html)(rg). 
  * `R` models neither [`sized_range`](../../ranges/sized_range.html "cpp/ranges/sized range") nor [`forward_range`](../../ranges/forward_range.html "cpp/ranges/forward range"), and `T` is not [MoveInsertable](../../named_req/MoveInsertable.html "cpp/named req/MoveInsertable") into `vector`.



7) The copy constructor. Constructs a `vector` with the contents of other.  The allocator is obtained as if by calling  
[std::allocator_traits](../../memory/allocator_traits.html)<Allocator>::select_on_container_copy_construction  
(other.get_allocator()).  | (since C++11)  
---|---  
  
8) The move constructor. Constructs a `vector` with the contents of other. The allocator is obtained by move construction from other.get_allocator().

9) Same as the copy constructor, except that alloc is used as the allocator.

If `T` is not [CopyInsertable](../../named_req/CopyInsertable.html "cpp/named req/CopyInsertable") into `vector`, the behavior is undefined.

10) Same as the move constructor, except that alloc is used as the allocator.

If `T` is not [MoveInsertable](../../named_req/MoveInsertable.html "cpp/named req/MoveInsertable") into `vector`, the behavior is undefined.

11) Equivalent to vector(il.begin(), il.end(), alloc).

## Contents

  * [1 Parameters](vector.html#Parameters)
  * [2 Complexity](vector.html#Complexity)
  * [3 Exceptions](vector.html#Exceptions)
  * [4 Notes](vector.html#Notes)
  * [5 Example](vector.html#Example)
  * [6 Defect reports](vector.html#Defect_reports)
  * [7 See also](vector.html#See_also)

  
---  
  
###  Parameters

alloc  |  \-  |  allocator to use for all memory allocations of this container   
---|---|---  
count  |  \-  |  the size of the container   
value  |  \-  |  the value to initialize elements of the container with   
first, last  |  \-  |  the pair of iterators defining the [range](../../iterator.html#Ranges "cpp/iterator") of elements to copy the elements from   
other  |  \-  |  another container to be used as source to initialize the elements of the container with   
init  |  \-  |  initializer list to initialize the elements of the container with   
rg  |  \-  |  a container compatible range   
  
###  Complexity

1,2) Constant.

3,4) Linear in count.

5) Given [std::distance](../../iterator/distance.html)(first, last) as \\(\scriptsize N \\)N: 

  * If `InputIt` satisfies the requirements of [LegacyForwardIterator](../../named_req/ForwardIterator.html "cpp/named req/ForwardIterator"), then: 



    

  * The copy constructor of `T` is only called \\(\scriptsize N \\)N times. 
  * No reallocation occurs. 



  * Otherwise: 



    

  * The copy constructor of `T` is called \\(\scriptsize O(N) \\)O(N) times. 
  * Reallocation occurs \\(\scriptsize O(\log N) \\)O(log N) times.



6) Given [ranges::distance](../../iterator/ranges/distance.html)(rg) as \\(\scriptsize N \\)N: 

  * If `R` models [`forward_range`](../../ranges/forward_range.html "cpp/ranges/forward range") or [`sized_range`](../../ranges/sized_range.html "cpp/ranges/sized range"), then: 

| (until C++26)  
---|---  
  
  * If `R` satisfies one of the following conditions: 



    

  * `R` models [`approximately_sized_range`](../../ranges/approximately_sized_range.html "cpp/ranges/approximately sized range"), and [ranges::distance](../../iterator/ranges/distance.html)(rg) <= ranges::reserve_hint(rg) is true. 
  * `R` models [`forward_range`](../../ranges/forward_range.html "cpp/ranges/forward range") and `R` does not model [`approximately_sized_range`](../../ranges/approximately_sized_range.html "cpp/ranges/approximately sized range"). 


     then: 
| (since C++26)  
  
    

  * Initializes exactly \\(\scriptsize N \\)N elements from the result of dereferencing successive iterators of rg. 
  * No reallocation occurs. 



  * Otherwise: 



    

  * The copy or move constructor of `T` is called \\(\scriptsize O(N) \\)O(N) times. 
  * Reallocation occurs \\(\scriptsize O(\log N) \\)O(log N) times.



7) Linear in other.size().

8) Constant.

9) Linear in other.size().

10) Linear in other.size() if alloc != other.get_allocator(), otherwise constant.

11) Linear in init.size().

###  Exceptions

Calls to Allocator::allocate may throw. 

###  Notes

After container move construction (overload ([8](vector.html#Version_8))), references, pointers, and iterators (other than the end iterator) to other remain valid, but refer to elements that are now in *this. The current standard makes this guarantee via the blanket statement in [[container.reqmts]/67](https://eel.is/c++draft/container.reqmts#67), and a more direct guarantee is under consideration via [LWG issue 2321](https://cplusplus.github.io/LWG/issue2321). 

[Feature-test](../../utility/feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_containers_ranges`](../../experimental/feature_test.html#cpp_lib_containers_ranges "cpp/feature test") | [`202202L`](../../compiler_support/23.html#cpp_lib_containers_ranges_202202L "cpp/compiler support/23") | (C++23) | [Ranges-aware](../../ranges/to.html#container_compatible_range "cpp/ranges/to") construction and insertion; overload ([6](vector.html#Version_6))  
[`__cpp_lib_ranges_reserve_hint`](../../experimental/feature_test.html#cpp_lib_ranges_reserve_hint "cpp/feature test") | [`202502L`](../../compiler_support/26.html#cpp_lib_ranges_reserve_hint_202502L "cpp/compiler support/26") | (C++26) | ranges::approximately_sized_range and ranges::reserve_hint; overload ([6](vector.html#Version_6))  
  
###  Example

Run this code
    
    
    #include <iostream>
    #include <string>
    #include <vector>
     
    template<typename T>
    [std::ostream](../../io/basic_ostream.html)& operator<<([std::ostream](../../io/basic_ostream.html)& s, const [std::vector](../vector.html)<T>& v)
    {
        s.put('{');
        for (char comma[]{'\0', ' ', '\0'}; const auto& e : v)
            s << comma << e, comma[0] = ',';
        return s << "}\n";
    }
     
    int main()
    {
        // C++11 initializer list syntax:
        [std::vector](../vector.html)<[std::string](../../string/basic_string.html)> words1{"the", "frogurt", "is", "also", "cursed"};
        [std::cout](../../io/cout.html) << "1: " << words1;
     
        // words2 == words1
        [std::vector](../vector.html)<[std::string](../../string/basic_string.html)> words2(words1.begin(), words1.end());
        [std::cout](../../io/cout.html) << "2: " << words2;
     
        // words3 == words1
        [std::vector](../vector.html)<[std::string](../../string/basic_string.html)> words3(words1);
        [std::cout](../../io/cout.html) << "3: " << words3;
     
        // words4 is {"Mo", "Mo", "Mo", "Mo", "Mo"}
        [std::vector](../vector.html)<[std::string](../../string/basic_string.html)> words4(5, "Mo");
        [std::cout](../../io/cout.html) << "4: " << words4;
     
        const auto rg = {"cat", "cow", "crow"};
    #ifdef __cpp_lib_containers_ranges
        [std::vector](../vector.html)<[std::string](../../string/basic_string.html)> words5([std::from_range](../../ranges/from_range.html), rg); // overload (6)
    #else
        [std::vector](../vector.html)<[std::string](../../string/basic_string.html)> words5(rg.begin(), rg.end()); // overload (5)
    #endif
        [std::cout](../../io/cout.html) << "5: " << words5;
    }

Output: 
    
    
    1: {the, frogurt, is, also, cursed}
    2: {the, frogurt, is, also, cursed}
    3: {the, frogurt, is, also, cursed}
    4: {Mo, Mo, Mo, Mo, Mo}
    5: {cat, cow, crow}

###  Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 134](https://cplusplus.github.io/LWG/issue134) | C++98  | overload ([5](vector.html#Version_5)) allowed up to 2N ﻿ copy  
constructor calls in the input iterator case  | changed to O(N) calls   
[LWG 438](https://cplusplus.github.io/LWG/issue438) | C++98  | overload ([5](vector.html#Version_5)) would only call overload ([4](vector.html#Version_4))  
if `InputIt` is an integral type  | calls overload ([4](vector.html#Version_4)) if `InputIt`  
is not an [LegacyInputIterator](../../named_req/InputIterator.html "cpp/named req/InputIterator")  
[LWG 2193](https://cplusplus.github.io/LWG/issue2193) | C++11  | the default constructor was explicit  | made non-explicit   
[LWG 2210](https://cplusplus.github.io/LWG/issue2210) | C++11  | overload ([3](vector.html#Version_3)) did not have an allocator parameter  | added the parameter   
[N3346](https://wg21.link/N3346) | C++11  | for overload ([3](vector.html#Version_3)), the elements in  
the container were value-initialized  | they are default-inserted   
  
###  See also

[ assign](assign.html "cpp/container/vector/assign") |  assigns values to the container   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_assign&action=edit)  
---|---  
[ operator=](operator=.html "cpp/container/vector/operator=") |  assigns values to the container   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/container/dsc_operator%3D&action=edit)
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
