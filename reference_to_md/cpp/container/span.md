
  


[Containers library](../container.html "cpp/container")

[_node-handle_](node_handle.html "cpp/container/node handle")(C++17)  
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
**span**(C++20)  
[mdspan](mdspan.html "cpp/container/mdspan")(C++23)  
Tables  
[Iterator invalidation](../container.html#Iterator_invalidation "cpp/container")  
[Member function table](../container.html#Member_function_table "cpp/container")  
[Non-member function table](../container.html#Non-member_function_table "cpp/container")  
  


**`std::span`**

[Member functions](span.html#Member_functions "cpp/container/span")  
---  
[span::span](span/span.html "cpp/container/span/span")  
[span::operator=](span/operator=.html "cpp/container/span/operator=")  
[Element access](span.html#Element_access "cpp/container/span")  
[span::front](span/front.html "cpp/container/span/front")  
[span::back](span/back.html "cpp/container/span/back")  
[span::at](span/at.html "cpp/container/span/at")(C++26)  
[span::operator[]](span/operator_at.html "cpp/container/span/operator at")  
[span::data](span/data.html "cpp/container/span/data")  
[Iterators](span.html#Iterators "cpp/container/span")  
[span::beginspan::cbegin](span/begin.html "cpp/container/span/begin")(C++23)  
[span::endspan::cend](span/end.html "cpp/container/span/end")(C++23)  
[span::rbeginspan::crbegin](span/rbegin.html "cpp/container/span/rbegin")(C++23)  
[span::rendspan::crend](span/rend.html "cpp/container/span/rend")(C++23)  
[Observers](span.html#Observers "cpp/container/span")  
[span::empty](span/empty.html "cpp/container/span/empty")  
[span::size](span/size.html "cpp/container/span/size")  
[span::size_bytes](span/size_bytes.html "cpp/container/span/size bytes")  
[Subviews](span.html#Subviews "cpp/container/span")  
[span::first](span/first.html "cpp/container/span/first")  
[span::last](span/last.html "cpp/container/span/last")  
[span::subspan](span/subspan.html "cpp/container/span/subspan")  
[Non-member functions](span.html#Non-member_functions "cpp/container/span")  
[as_bytesas_writable_bytes](span/as_bytes.html "cpp/container/span/as bytes")  
[Non-member constant](span.html#Non-member_constant "cpp/container/span")  
[dynamic_extent](span/dynamic_extent.html "cpp/container/span/dynamic extent")  
[Deduction guides](span/deduction_guides.html "cpp/container/span/deduction guides")  
  


Defined in header `[<span>](../header/span.html "cpp/header/span")` |  |   
---|---|---  
template<  
class T,  
[std::size_t](../types/size_t.html) Extent = [std::dynamic_extent](span/dynamic_extent.html)  
> class span; |  |  (since C++20)  
| |   
  
The class template `span` describes an object that can refer to a contiguous sequence of objects with the first element of the sequence at position zero. A `span` can either have a _static_ extent, in which case the number of elements in the sequence is known at compile-time and encoded in the type, or a _dynamic_ extent. 

For a `span` s, pointers, iterators, and references to elements of s are invalidated when an operation invalidates a pointer in the range `[`s.data()`, `s.data() + s.size()`)`. 

Every specialization of `std::span` is a [TriviallyCopyable](../named_req/TriviallyCopyable.html "cpp/named req/TriviallyCopyable") type.  | (since C++23)  
---|---  
  
## Contents

  * [1 Template parameters](span.html#Template_parameters)
  * [2 Nested types](span.html#Nested_types)
  * [3 Data members](span.html#Data_members)
  * [4 Member functions](span.html#Member_functions)
    * [4.1 Iterators](span.html#Iterators)
    * [4.2 Element access](span.html#Element_access)
    * [4.3 Observers](span.html#Observers)
    * [4.4 Subviews](span.html#Subviews)
  * [5 Non-member functions](span.html#Non-member_functions)
  * [6 Helper constant](span.html#Helper_constant)
  * [7 Helper templates](span.html#Helper_templates)
  * [8 Deduction guides](span.html#Deduction_guides)
  * [9 Notes](span.html#Notes)
  * [10 Example](span.html#Example)
  * [11 Defect reports](span.html#Defect_reports)
  * [12 See also](span.html#See_also)

  
---  
  
### Template parameters

T  |  \-  |  element type; must be a complete object type that is not an abstract class type   
---|---|---  
Extent  |  \-  |  the number of elements in the sequence, or `std::dynamic_extent` if dynamic   
  
### Nested types

Type  |  Definition   
---|---  
`element_type` |  `T`  
`value_type` |  [std::remove_cv_t](../types/remove_cv.html)<T>  
`size_type` |  [std::size_t](../types/size_t.html "cpp/types/size t")  
`difference_type` |  [std::ptrdiff_t](../types/ptrdiff_t.html "cpp/types/ptrdiff t")  
`pointer` |  T*  
`const_pointer` |  const T*  
`reference` |  T&  
`const_reference` |  const T&  
`iterator`[[1]](span.html#cite_note-1) |  implementation-defined [LegacyRandomAccessIterator](../named_req/RandomAccessIterator.html "cpp/named req/RandomAccessIterator"), [ConstexprIterator](../named_req/ConstexprIterator.html "cpp/named req/ConstexprIterator"), and [`contiguous_iterator`](../iterator/contiguous_iterator.html "cpp/iterator/contiguous iterator") whose `value_type` is `value_type`  
`const_iterator` (since C++23) |  [std::const_iterator](../iterator/const_iterator.html)<iterator>  
`reverse_iterator` |  [std::reverse_iterator](../iterator/reverse_iterator.html)<iterator>  
`const_reverse_iterator` (since C++23) |  [std::const_iterator](../iterator/const_iterator.html)<reverse_iterator>  
  
  1. [↑](span.html#cite_ref-1) `iterator` is a mutable iterator if `T` is not const-qualified.



All requirements on the iterator types of a [Container](../named_req/Container.html "cpp/named req/Container") apply to the `iterator` type of `span` as well. 

### Data members

Member  |  Description   
---|---  
constexpr [std::size_t](../types/size_t.html) extent[static] |  Extent   
(public static member constant)  
`pointer` `_data__` |  a pointer to the underlying sequence  
(exposition-only member object*)  
`size_type` `_size__`   
(present only if the extent is _dynamic ﻿_) |  the number of elements  
(exposition-only member object*)  
  
### Member functions

[ (constructor)](span/span.html "cpp/container/span/span") |  constructs a `span`   
(public member function)   
---|---  
[ operator=](span/operator=.html "cpp/container/span/operator=") |  assigns a `span`   
(public member function)   
(destructor)(implicitly declared) |  destructs a `span`   
(public member function)  
  
#####  Iterators   
  
[ begincbegin](span/begin.html "cpp/container/span/begin")(C++23) |  returns an iterator to the beginning   
(public member function)   
[ endcend](span/end.html "cpp/container/span/end")(C++23) |  returns an iterator to the end   
(public member function)   
[ rbegincrbegin](span/rbegin.html "cpp/container/span/rbegin")(C++23) |  returns a reverse iterator to the beginning   
(public member function)   
[ rendcrend](span/rend.html "cpp/container/span/rend")(C++23) |  returns a reverse iterator to the end   
(public member function)   
  
#####  Element access   
  
[ front](span/front.html "cpp/container/span/front") |  access the first element   
(public member function)   
[ back](span/back.html "cpp/container/span/back") |  access the last element   
(public member function)   
[ at](span/at.html "cpp/container/span/at")(C++26) |  access specified element with bounds checking   
(public member function)   
[ operator[]](span/operator_at.html "cpp/container/span/operator at") |  access specified element   
(public member function)   
[ data](span/data.html "cpp/container/span/data") |  direct access to the underlying contiguous storage   
(public member function)   
  
#####  Observers   
  
[ size](span/size.html "cpp/container/span/size") |  returns the number of elements   
(public member function)   
[ size_bytes](span/size_bytes.html "cpp/container/span/size bytes") |  returns the size of the sequence in bytes   
(public member function)   
[ empty](span/empty.html "cpp/container/span/empty") |  checks if the sequence is empty   
(public member function)   
  
#####  Subviews   
  
[ first](span/first.html "cpp/container/span/first") |  obtains a subspan consisting of the first `N` elements of the sequence   
(public member function)   
[ last](span/last.html "cpp/container/span/last") |  obtains a subspan consisting of the last `N` elements of the sequence   
(public member function)   
[ subspan](span/subspan.html "cpp/container/span/subspan") |  obtains a subspan   
(public member function)   
  
### Non-member functions

[ as_bytesas_writable_bytes](span/as_bytes.html "cpp/container/span/as bytes")(C++20) |  converts a `span` into a view of its underlying bytes   
(function template)   
---|---  
  
### Helper constant

[ dynamic_extent](span/dynamic_extent.html "cpp/container/span/dynamic extent")(C++20) |  a constant of type [std::size_t](../types/size_t.html "cpp/types/size t") signifying that the `span` has dynamic extent   
(constant)   
---|---  
  
### Helper templates

template< class T, [std::size_t](../types/size_t.html) Extent >  
constexpr bool [ranges::enable_borrowed_range](../ranges/borrowed_range.html)<std::span<T, Extent>> = true; |  |  (since C++20)  
---|---|---  
| |   
  
This specialization of [ranges::enable_borrowed_range](../ranges/borrowed_range.html "cpp/ranges/borrowed range") makes `span` satisfy [`borrowed_range`](../ranges/borrowed_range.html "cpp/ranges/borrowed range"). 

template< class T, [std::size_t](../types/size_t.html) Extent >  
constexpr bool [ranges::enable_view](../ranges/view.html)<std::span<T, Extent>> = true; |  |  (since C++20)  
---|---|---  
| |   
  
This specialization of [ranges::enable_view](../ranges/view.html "cpp/ranges/view") makes `span` satisfy [`view`](../ranges/view.html "cpp/ranges/view"). 

### [Deduction guides](span/deduction_guides.html "cpp/container/span/deduction guides")

### Notes

Specializations of `std::span` are already trivially copyable types in all existing implementations, even before the formal requirement introduced in C++23. 

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_span`](../experimental/feature_test.html#cpp_lib_span "cpp/feature test") | [`202002L`](../compiler_support/20.html#cpp_lib_span_202002L "cpp/compiler support/20") | (C++20) | `std::span`  
[`202311L`](../compiler_support/26.html#cpp_lib_span_202311L "cpp/compiler support/26") | (C++26) | std::span::at  
[`__cpp_lib_span_initializer_list`](../experimental/feature_test.html#cpp_lib_span_initializer_list "cpp/feature test") | [`202311L`](../compiler_support/26.html#cpp_lib_span_initializer_list_202311L "cpp/compiler support/26") | (C++26) | Constructing `std::span` from a [std::initializer_list](../utility/initializer_list.html "cpp/utility/initializer list")  
  
### Example

The example uses `std::span` to implement some algorithms on contiguous ranges.

Run this code
    
    
    #include <algorithm>
    #include <cstddef>
    #include <iostream>
    #include <span>
     
    template<class T, [std::size_t](../types/size_t.html) N>
    [[nodiscard]]
    constexpr auto slide(std::span<T, N> s, [std::size_t](../types/size_t.html) offset, [std::size_t](../types/size_t.html) width)
    {
        return s.subspan(offset, offset + width <= s.size() ? width : 0U);
    }
     
    template<class T, [std::size_t](../types/size_t.html) N, [std::size_t](../types/size_t.html) M>
    constexpr bool starts_with(std::span<T, N> data, std::span<T, M> prefix)
    {
        return data.size() >= prefix.size()
            && [std::equal](../algorithm/equal.html)(prefix.begin(), prefix.end(), data.begin());
    }
     
    template<class T, [std::size_t](../types/size_t.html) N, [std::size_t](../types/size_t.html) M>
    constexpr bool ends_with(std::span<T, N> data, std::span<T, M> suffix)
    {
        return data.size() >= suffix.size()
            && [std::equal](../algorithm/equal.html)(data.end() - suffix.size(), data.end(),
                          suffix.end() - suffix.size());
    }
     
    template<class T, [std::size_t](../types/size_t.html) N, [std::size_t](../types/size_t.html) M>
    constexpr bool contains(std::span<T, N> span, std::span<T, M> sub)
    {
        return std::[ranges::search](../algorithm/ranges/search.html)(span, sub).begin() != span.end();
    }
     
    void println(const auto& seq)
    {
        for (const auto& elem : seq)
            [std::cout](../io/cout.html) << elem << ' ';
        [std::cout](../io/cout.html) << '\n';
    }
     
    int main()
    {
        constexpr int a[]{0, 1, 2, 3, 4, 5, 6, 7, 8};
        constexpr int b[]{8, 7, 6};
        constexpr static [std::size_t](../types/size_t.html) width{6};
     
        for ([std::size_t](../types/size_t.html) offset{}; ; ++offset)
            if (auto s = slide(std::span{a}, offset, width); !s.empty())
                println(s);
            else
                break;
     
        static_assert(""
            && starts_with(std::span{a}, std::span{a, 4})
            && starts_with(std::span{a + 1, 4}, std::span{a + 1, 3})
            && !starts_with(std::span{a}, std::span{b})
            && !starts_with(std::span{a, 8}, std::span{a + 1, 3})
            && ends_with(std::span{a}, std::span{a + 6, 3})
            && !ends_with(std::span{a}, std::span{a + 6, 2})
            && contains(std::span{a}, std::span{a + 1, 4})
            && !contains(std::span{a, 8}, std::span{a, 9})
        );
    }

Output: 
    
    
    0 1 2 3 4 5
    1 2 3 4 5 6
    2 3 4 5 6 7
    3 4 5 6 7 8

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3203](https://cplusplus.github.io/LWG/issue3203) | C++20  | it was unclear when the pointers, iterators, and  
references to elements of `span` are invalidated  | made clear   
[LWG 3903](https://cplusplus.github.io/LWG/issue3903) | C++20  | the declaration of `span`'s destructor was unnecessary  | removed the declaration   
[P2325R3](https://wg21.link/P2325R3) | C++20  | a `span` of non-zero static extents was not a `view` | any `span` is a `view`  
  
### See also

[ mdspan](mdspan.html "cpp/container/mdspan")(C++23) |  a multi-dimensional non-owning array view   
(class template)   
---|---  
[ ranges::subrange](../ranges/subrange.html "cpp/ranges/subrange")(C++20) |  combines an iterator-sentinel pair into a [`view`](../ranges/view.html "cpp/ranges/view")   
(class template)   
[ initializer_list](../utility/initializer_list.html "cpp/utility/initializer list")(C++11) |  references a temporary array created in [list-initialization](../language/list_initialization.html "cpp/language/list initialization")   
(class template)   
[ basic_string_view](../string/basic_string_view.html "cpp/string/basic string view")(C++17) |  read-only string view   
(class template) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
