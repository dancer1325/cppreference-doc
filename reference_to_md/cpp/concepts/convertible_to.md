
  


[Concepts library](../concepts.html "cpp/concepts")

| [Core language concepts](../concepts.html#Core_language_concepts "cpp/concepts")  
---  
[same_as](same_as.html "cpp/concepts/same as")(C++20)  
[derived_from](derived_from.html "cpp/concepts/derived from")(C++20)  
**convertible_to**(C++20)  
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
[_boolean-testable_](boolean-testable.html "cpp/concepts/boolean-testable") ﻿(C++20)  
  


Defined in header `[<concepts>](../header/concepts.html "cpp/header/concepts")` |  |   
---|---|---  
template< class From, class To >  
concept convertible_to =  
[std::is_convertible_v](../types/is_convertible.html)<From, To> &&  
requires {  
static_cast<To>([std::declval](../utility/declval.html)<From>());  
}; |  |  (since C++20)  
| |   
  
The concept convertible_to<From, To> specifies that an expression of the same type and value category as those of [std::declval](../utility/declval.html)<From>() can be implicitly and explicitly converted to the type `To`, and the two forms of conversion produce equal results. 

## Contents

  * [1 Semantic requirements](convertible_to.html#Semantic_requirements)
  * [2 Equality preservation](convertible_to.html#Equality_preservation)
  * [3 References](convertible_to.html#References)
  * [4 See also](convertible_to.html#See_also)

  
---  
  
### Semantic requirements

convertible_to<From, To> is modeled only if, given a function `fun` of type [std::add_rvalue_reference_t](../types/add_reference.html)<From>() such that the expression fun() is [equality-preserving](../concepts.html#Equality_preservation "cpp/concepts"), 

  * Either 
    * `To` is neither an object type nor a reference-to-object type, or 
    * static_cast<To>(fun()) is equal to []() -> To { return fun(); }(), and 


  * One of the following is true: 
    * [std::add_rvalue_reference_t](../types/add_reference.html)<From> is not a reference-to-object type, or 
    * [std::add_rvalue_reference_t](../types/add_reference.html)<From> is an rvalue reference to a non-const-qualified type, and the resulting state of the object referenced by fun() is valid but unspecified after either expression above; or 
    * the object referred to by fun() is not modified by either expression above. 



### Equality preservation

Expressions declared in [requires expressions](../language/requires.html "cpp/language/requires") of the standard library concepts are required to be [equality-preserving](../concepts.html#Equality_preservation "cpp/concepts") (except where stated otherwise). 

### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 18.4.4 Concept `convertible_to` [concept.convertible] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 18.4.4 Concept `convertible_to` [concept.convertible] 



### See also

[ is_convertibleis_nothrow_convertible](../types/is_convertible.html "cpp/types/is convertible")(C++11)(C++20) |  checks if a type can be converted to the other type   
(class template)   
---|---
