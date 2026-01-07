
  


[Concepts library](../concepts.html "cpp/concepts")

| [Core language concepts](../concepts.html#Core_language_concepts "cpp/concepts")  
---  
[same_as](same_as.html "cpp/concepts/same as")(C++20)  
[derived_from](derived_from.html "cpp/concepts/derived from")(C++20)  
[convertible_to](convertible_to.html "cpp/concepts/convertible to")(C++20)  
[common_reference_with](common_reference_with.html "cpp/concepts/common reference with")(C++20)  
[common_with](common_with.html "cpp/concepts/common with")(C++20)  
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
**_boolean-testable_** ﻿(C++20)  
  


template< class B >  
concept __boolean_testable_impl = [std::convertible_to](convertible_to.html)<B, bool>; |  (1) | (since C++20)   
(exposition only*)  
---|---|---  
template< class B >  
concept boolean-testable =  
__boolean_testable_impl<B> &&  
requires (B&& b) {  
{ ![std::forward](../utility/forward.html)<B>(b) } -> __boolean_testable_impl;  
}; |  (2) | (since C++20)   
(exposition only*)  
| |   
  
The exposition-only concept `_boolean-testable_` specifies the requirements for expressions that are convertible to bool and for which the logical operators have the usual behavior (including [short-circuiting](https://en.wikipedia.org/wiki/Short-circuit_evaluation "enwiki:Short-circuit evaluation")), even for two different `_boolean-testable_` types. 

Formally, to model the exposition-only concept `___boolean_testable_impl_`, the type must not define any member operator&& and operator||, and no viable non-member operator&& and operator|| may be visible by [argument-dependent lookup](../language/adl.html "cpp/language/adl"). Additionally, given an expression `e` such that decltype((e)) is `B`, `_boolean-testable_` is modeled only if bool(e) == !bool(!e). 

### Equality preservation

Expressions declared in [requires expressions](../language/requires.html "cpp/language/requires") of the standard library concepts are required to be [equality-preserving](../concepts.html#Equality_preservation "cpp/concepts") (except where stated otherwise). 

### Notes

Examples of `_boolean-testable_` types include bool, [std::true_type](../types/integral_constant.html "cpp/types/integral constant"), [std::bitset](../utility/bitset.html)<N>::[`reference`](../utility/bitset/reference.html "cpp/utility/bitset/reference"), and int*. 

### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 18.5.2 Boolean testability [concept.booleantestable] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 18.5.2 Boolean testability [concept.booleantestable] 


