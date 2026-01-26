 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::tuple`](../tuple.html "cpp/utility/tuple")

[Member functions](../tuple.html#Member_functions "cpp/utility/tuple")  
---  
[tuple::tuple](tuple.html "cpp/utility/tuple/tuple")  
[tuple::operator=](operator=.html "cpp/utility/tuple/operator=")  
[tuple::swap](swap.html "cpp/utility/tuple/swap")  
[Non-member functions](../tuple.html#Non-member_functions "cpp/utility/tuple")  
[make_tuple](make_tuple.html "cpp/utility/tuple/make tuple")  
[tie](tie.html "cpp/utility/tuple/tie")  
[forward_as_tuple](forward_as_tuple.html "cpp/utility/tuple/forward as tuple")  
[tuple_cat](tuple_cat.html "cpp/utility/tuple/tuple cat")  
[operator==operator!=operator<operator<=operator>operator>=operator<=>](operator_cmp.html "cpp/utility/tuple/operator cmp")(until C++20)(until C++20)(until C++20)(until C++20)(until C++20)(C++20)  
[swap(std::tuple)](swap2.html "cpp/utility/tuple/swap2")  
[get(std::tuple)](get.html "cpp/utility/tuple/get")  
[Helper concepts](../tuple.html#Helper_concepts "cpp/utility/tuple")  
**`_tuple-like_`**(C++23)  
[Helper classes](../tuple.html#Helper_classes "cpp/utility/tuple")  
[tuple_size<std::tuple>](tuple_size.html "cpp/utility/tuple/tuple size")  
[tuple_element<std::tuple>](tuple_element.html "cpp/utility/tuple/tuple element")  
[uses_allocator<std::tuple>](uses_allocator.html "cpp/utility/tuple/uses allocator")  
[basic_common_reference<std::tuple>](basic_common_reference.html "cpp/utility/tuple/basic common reference")(C++23)  
[common_type<std::tuple>](common_type.html "cpp/utility/tuple/common type")(C++23)  
[formatter<std::tuple>](../format/tuple_formatter.html "cpp/utility/format/tuple formatter")(C++23)  
[ignore](ignore.html "cpp/utility/tuple/ignore")  
[Deduction guides](deduction_guides.html "cpp/utility/tuple/deduction guides")(C++17)  
  


template< class T >  
concept tuple-like = /* see below */; |  (1) | (since C++23)   
(exposition only*)  
---|---|---  
template< class T >  
concept pair-like =  
tuple-like<T> && [std::tuple_size_v](../tuple_size.html)<[std::remove_cvref_t](../../types/remove_cvref.html)<T>> == 2; |  (2) | (since C++23)   
(exposition only*)  
| |   
  
1) A type `T` models and satisfies the concept `_tuple-like_` if [std::remove_cvref_t](../../types/remove_cvref.html)<T> is a specialization of 

  * [std::array](../../container/array.html "cpp/container/array"), 



  * [std::complex](../../numeric/complex.html "cpp/numeric/complex"), 

| (since C++26)  
---|---  
  
  * [std::pair](../pair.html "cpp/utility/pair"), 
  * [std::tuple](../tuple.html "cpp/utility/tuple"), or 
  * [std::ranges::subrange](../../ranges/subrange.html "cpp/ranges/subrange").



2) `_pair-like_` objects are `_tuple-like_` objects with exactly 2 elements.

### Notes

`_tuple-like_` types implement the _tuple protocol_ , i.e., such types can be used with [`std::get`](get.html "cpp/utility/tuple/get"), [`std::tuple_element`](../tuple_element.html "cpp/utility/tuple element") and [`std::tuple_size`](../tuple_size.html "cpp/utility/tuple size"). 

Elements of `_tuple-like_` types can be bound with [structured binding](../../language/structured_binding.html#Case_2:_binding_a_tuple-like_type "cpp/language/structured binding"). 

### See also

`_tuple-like_` and `_pair-like_` are used in the following standard library components: 

[ (constructor)](tuple.html "cpp/utility/tuple/tuple") |  constructs a new `tuple`   
(public member function)   
---|---  
[ operator=](operator=.html "cpp/utility/tuple/operator=") |  assigns the contents of one `tuple` to another   
(public member function)   
[ operator==operator!=operator<operator<=operator>operator>=operator<=>](operator_cmp.html "cpp/utility/tuple/operator cmp")(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(removed in C++20)(C++20) |  lexicographically compares the values in the tuple   
(function template)   
[ std::basic_common_reference<_tuple-like_ >](basic_common_reference.html "cpp/utility/tuple/basic common reference")(C++23) |  determines the common reference type of a `tuple` and a `_tuple-like_` type   
(class template specialization)   
[ std::common_type<_tuple-like_ >](common_type.html "cpp/utility/tuple/common type")(C++23) |  determines the common type of a `tuple` and a `_tuple-like_` type   
(class template specialization)   
[ tuple_cat](tuple_cat.html "cpp/utility/tuple/tuple cat")(C++11) |  creates a `tuple` by concatenating any number of tuples   
(function template)   
[ apply](../apply.html "cpp/utility/apply")(C++17) |  calls a function with a tuple of arguments   
(function template)   
[ make_from_tuple](../make_from_tuple.html "cpp/utility/make from tuple")(C++17) |  construct an object with a tuple of arguments   
(function template)   
[ (constructor)](../pair/pair.html "cpp/utility/pair/pair") |  constructs new `pair`   
(public member function of `std::pair<T1,T2>`)   
[ operator=](../pair/operator=.html "cpp/utility/pair/operator=") |  assigns the contents   
(public member function of `std::pair<T1,T2>`)   
[ operator PairLike](../../ranges/subrange/operator_PairLike.html "cpp/ranges/subrange/operator PairLike") |  converts the `subrange` to a **`_pair-like_`** type   
(public member function of `std::ranges::subrange<I,S,K>`)   
[ ranges::elements_viewviews::elements](../../ranges/elements_view.html "cpp/ranges/elements view")(C++20) |  takes a [`view`](../../ranges/view.html "cpp/ranges/view") consisting of **`_tuple-like_`** values and a number N and produces a [`view`](../../ranges/view.html "cpp/ranges/view") of Nth element of each tuple  
(class template) (range adaptor object)
