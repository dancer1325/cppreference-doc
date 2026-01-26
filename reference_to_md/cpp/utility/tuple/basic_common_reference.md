 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
[`_tuple-like_`](tuple-like.html "cpp/utility/tuple/tuple-like")(C++23)  
[Helper classes](../tuple.html#Helper_classes "cpp/utility/tuple")  
[tuple_size<std::tuple>](tuple_size.html "cpp/utility/tuple/tuple size")  
[tuple_element<std::tuple>](tuple_element.html "cpp/utility/tuple/tuple element")  
[uses_allocator<std::tuple>](uses_allocator.html "cpp/utility/tuple/uses allocator")  
**basic_common_reference <std::tuple>**(C++23)  
[common_type<std::tuple>](common_type.html "cpp/utility/tuple/common type")(C++23)  
[formatter<std::tuple>](../format/tuple_formatter.html "cpp/utility/format/tuple formatter")(C++23)  
[ignore](ignore.html "cpp/utility/tuple/ignore")  
[Deduction guides](deduction_guides.html "cpp/utility/tuple/deduction guides")(C++17)  
  


Defined in header `[<tuple>](../../header/tuple.html "cpp/header/tuple")` |  |   
---|---|---  
template< tuple-like TTuple, tuple-like UTuple,  
template<class> class TQual, template<class> class UQual >  
requires /* see below */  
struct basic_common_reference<TTuple, UTuple, TQual, UQual>; |  |  (since C++23)  
| |   
  
The common reference type of two [`_tuple-like_`](tuple-like.html "cpp/utility/tuple/tuple-like") types is a [std::tuple](../tuple.html "cpp/utility/tuple") consists of the common reference types of all corresponding element type pairs of both types, where the cv and reference qualifiers on the tuple-like types are applied to their element types. 

Given 

  * `TTypes` as the pack formed by the sequence of [std::tuple_element_t](../tuple_element.html)<i, TTuple> for every integer i in `[`​0​`, `[std::tuple_size_v](../tuple_size.html)<TTuple>`)`, and 
  * `UTypes` as the pack formed by the sequence of [std::tuple_element_t](../tuple_element.html)<i, UTuple> for every integer i in `[`​0​`, `[std::tuple_size_v](../tuple_size.html)<UTuple>`)`, 



the following constraints need to be satisfied: 

  * `TTuple` or `UTuple` is a [std::tuple](../tuple.html "cpp/utility/tuple") specialization. 
  * [std::is_same_v](../../types/is_same.html)<TTuple, [std::decay_t](../../types/decay.html)<TTuple>> is true. 
  * [std::is_same_v](../../types/is_same.html)<UTuple, [std::decay_t](../../types/decay.html)<UTuple>> is true. 
  * [std::tuple_size_v](../tuple_size.html)<TTuple> equals [std::tuple_size_v](../tuple_size.html)<UTuple> (`TTuple` and `UTuple` have the same number of elements). 
  * [std::tuple](../tuple.html)<[std::common_reference_t](../../types/common_reference.html)<TQual<TTypes>..., UQual<UTypes>>...> denotes a type. 



### Member types

Member type  |  Definition   
---|---  
`type` |  [std::tuple](../tuple.html)<[std::common_reference_t](../../types/common_reference.html)<TQual<TTypes>..., UQual<UTypes>>...>  
  
### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### See also

[ common_referencebasic_common_reference](../../types/common_reference.html "cpp/types/common reference")(C++20) |  determines the common reference type of a group of types   
(class template)   
---|---  
[ std::basic_common_reference<std::pair>](../pair/basic_common_reference.html "cpp/utility/pair/basic common reference")(C++23) |  determines the common reference type of two `pair`s   
(class template specialization) 
