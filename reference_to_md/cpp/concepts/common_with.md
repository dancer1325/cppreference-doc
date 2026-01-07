
  


[Concepts library](../concepts.html "cpp/concepts")

| [Core language concepts](../concepts.html#Core_language_concepts "cpp/concepts")  
---  
[same_as](same_as.html "cpp/concepts/same as")(C++20)  
[derived_from](derived_from.html "cpp/concepts/derived from")(C++20)  
[convertible_to](convertible_to.html "cpp/concepts/convertible to")(C++20)  
[common_reference_with](common_reference_with.html "cpp/concepts/common reference with")(C++20)  
**common_with**(C++20)  
[integral](integral.html "cpp/concepts/integral")(C++20)  
[signed_integral](signed_integral.html "cpp/concepts/signed integral")(C++20)  
[unsigned_integral](unsigned_integral.html "cpp/concepts/unsigned integral")(C++20)  
[floating_point](floating_point.html "cpp/concepts/floating point")(C++20)  
[swappableswappable_with](swappable.html "cpp/concepts/swappable")(C++20)(C++20)  
[destructible](destructible.html "cpp/concepts/destructible")(C++20)  
[constructible_from](constructible_from.html "cpp/concepts/constructible from")(C++20)  
[default_initializable](default_initializable.html "cpp/concepts/default initializable")(C++20)` `  
[move_constructible](move_constructible.html "cpp/concepts/move constructible")(C++20)  
[copy_constructible](copy_constructible.html "cpp/concepts/copy constructible")(C++20)  
[assignable_from](assignable_from.html "cpp/concepts/assignable from")(C++20)  
  
  
| Exposition-only concepts  
---  
[_boolean-testable_](boolean-testable.html "cpp/concepts/boolean-testable") ﻿(C++20)  
  


Defined in header `[<concepts>](../header/concepts.html "cpp/header/concepts")` |  |   
---|---|---  
template< class T, class U >  
concept common_with =  
[std::same_as](same_as.html)<[std::common_type_t](../types/common_type.html)<T, U>, [std::common_type_t](../types/common_type.html)<U, T>> &&  
requires {  
static_cast<[std::common_type_t](../types/common_type.html)<T, U>>([std::declval](../utility/declval.html)<T>());  
static_cast<[std::common_type_t](../types/common_type.html)<T, U>>([std::declval](../utility/declval.html)<U>());  
} &&  
[std::common_reference_with](common_reference_with.html)<  
[std::add_lvalue_reference_t](../types/add_reference.html)<const T>,  
[std::add_lvalue_reference_t](../types/add_reference.html)<const U>> &&  
[std::common_reference_with](common_reference_with.html)<  
[std::add_lvalue_reference_t](../types/add_reference.html)<[std::common_type_t](../types/common_type.html)<T, U>>,  
[std::common_reference_t](../types/common_reference.html)<  
[std::add_lvalue_reference_t](../types/add_reference.html)<const T>,  
[std::add_lvalue_reference_t](../types/add_reference.html)<const U>>>; |  |  (since C++20)  
| |   
  
The concept `common_with<T, U>` specifies that two types `T` and `U` share a _common type_ (as computed by [std::common_type_t](../types/common_type.html "cpp/types/common type")) to which both can be converted. 

## Contents

  * [1 Semantic requirements](common_with.html#Semantic_requirements)
  * [2 Equality preservation](common_with.html#Equality_preservation)
  * [3 References](common_with.html#References)
  * [4 See also](common_with.html#See_also)

  
---  
  
### Semantic requirements

T and U model std::common_with<T, U> only if, given [equality-preserving](../concepts.html#Equality_preservation "cpp/concepts") expressions `t1`, `t2`, `u1` and `u2` such that decltype((t1)) and decltype((t2)) are both `T` and decltype((u1)) and decltype((u2)) are both `U`, 

  * [std::common_type_t](../types/common_type.html)<T, U>(t1) equals [std::common_type_t](../types/common_type.html)<T, U>(t2) if and only if `t1` equals `t2`; and 
  * [std::common_type_t](../types/common_type.html)<T, U>(u1) equals [std::common_type_t](../types/common_type.html)<T, U>(u2) if and only if `u1` equals `u2`. 



In other words, the conversion to the common type must [preserve equality](../concepts.html#Equality_preservation "cpp/concepts"). 

### Equality preservation

Expressions declared in [requires expressions](../language/requires.html "cpp/language/requires") of the standard library concepts are required to be [equality-preserving](../concepts.html#Equality_preservation "cpp/concepts") (except where stated otherwise). 

### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 18.4.6 Concept `common_with` [concept.common] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 18.4.6 Concept `common_with` [concept.common] 



### See also

[ common_type](../types/common_type.html "cpp/types/common type")(C++11) |  determines the common type of a group of types   
(class template)   
---|---  
[ common_referencebasic_common_reference](../types/common_reference.html "cpp/types/common reference")(C++20) |  determines the common reference type of a group of types   
(class template)   
[ common_reference_with](common_reference_with.html "cpp/concepts/common reference with")(C++20) |  specifies that two types share a common reference type   
(concept) 
