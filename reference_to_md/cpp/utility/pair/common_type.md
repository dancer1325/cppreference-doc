 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::pair`](../pair.html "cpp/utility/pair")

[Member functions](../pair.html#Member_functions "cpp/utility/pair")  
---  
[pair::pair](pair.html "cpp/utility/pair/pair")  
[pair::operator=](operator=.html "cpp/utility/pair/operator=")  
[pair::swap](swap.html "cpp/utility/pair/swap")(C++11)  
[Non-member functions](../pair.html#Non-member_functions "cpp/utility/pair")  
[make_pair](make_pair.html "cpp/utility/pair/make pair")  
[operator==operator!=operator<operator<=operator>operator>=operator<=>](operator_cmp.html "cpp/utility/pair/operator cmp")(until C++20)(until C++20)(until C++20)(until C++20)(until C++20)(C++20)  
[swap(std::pair)](swap2.html "cpp/utility/pair/swap2")(C++11)  
[get(std::pair)](get.html "cpp/utility/pair/get")(C++11)  
[Helper classes](../pair.html#Helper_classes "cpp/utility/pair")  
[tuple_size<std::pair>](tuple_size.html "cpp/utility/pair/tuple size")(C++11)  
[tuple_element<std::pair>](tuple_element.html "cpp/utility/pair/tuple element")(C++11)  
[basic_common_reference<std::pair>](basic_common_reference.html "cpp/utility/pair/basic common reference")(C++23)  
**common_type <std::pair>**(C++23)  
[formatter<std::pair>](../format/tuple_formatter.html "cpp/utility/format/tuple formatter")(C++23)  
[piecewise_construct_t](../piecewise_construct.html "cpp/utility/piecewise construct")(C++11)  
[Deduction guides](deduction_guides.html "cpp/utility/pair/deduction guides")(C++17)  
  


Defined in header `[<utility>](../../header/utility.html "cpp/header/utility")` |  |   
---|---|---  
template< class T1, class T2, class U1, class U2 >  
requires requires { typename [std::pair](../pair.html)<[std::common_type_t](../../types/common_type.html)<T1, U1>,  
[std::common_type_t](../../types/common_type.html)<T2, U2>>; }  
struct common_type<[std::pair](../pair.html)<T1, T2>, [std::pair](../pair.html)<U1, U2>>; |  |  (since C++23)  
| |   
  
The common type of two `pair`s is a `pair` of both common types of corresponding element types of both `pair`s. 

The common type is defined only if both pairs of corresponding element types have common types. 

### Member types

Member type  |  Definition   
---|---  
`type` |  [std::pair](../pair.html)<[std::common_type_t](../../types/common_type.html)<T1, U1>, [std::common_type_t](../../types/common_type.html)<T2, U2>>  
  
### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### See also

[ common_type](../../types/common_type.html "cpp/types/common type")(C++11) |  determines the common type of a group of types   
(class template)   
---|---  
[ std::common_type<_tuple-like_ >](../tuple/common_type.html "cpp/utility/tuple/common type")(C++23) |  determines the common type of a `tuple` and a `_tuple-like_` type   
(class template specialization) 
