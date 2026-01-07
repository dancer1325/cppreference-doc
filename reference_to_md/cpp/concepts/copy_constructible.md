
  


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
**copy_constructible**(C++20)  
[assignable_from](assignable_from.html "cpp/concepts/assignable from")(C++20)  
  
  
| Exposition-only concepts  
---  
[_boolean-testable_](boolean-testable.html "cpp/concepts/boolean-testable") ﻿(C++20)  
  


Defined in header `[<concepts>](../header/concepts.html "cpp/header/concepts")` |  |   
---|---|---  
template< class T >  
concept copy_constructible =  
[std::move_constructible](move_constructible.html)<T> &&  
[std::constructible_from](constructible_from.html)<T, T&> && [std::convertible_to](convertible_to.html)<T&, T> &&  
[std::constructible_from](constructible_from.html)<T, const T&> && [std::convertible_to](convertible_to.html)<const T&, T> &&  
[std::constructible_from](constructible_from.html)<T, const T> && [std::convertible_to](convertible_to.html)<const T, T>; |  |  (since C++20)  
| |   
  
The concept `copy_constructible` is satisfied if T is an lvalue reference type, or if it is a [`move_constructible`](move_constructible.html "cpp/concepts/move constructible") object type where an object of that type can constructed from a (possibly const) lvalue or const rvalue of that type in both direct- and copy-initialization contexts with the usual semantics (a copy is constructed with the source unchanged). 

### Semantic requirements

If T is an object type, then `copy_constructible<T>` is modeled only if given 

  * v, an lvalue of type (possibly const) T or an rvalue of type const T, 



the following are true: 

  * After the definition T u = v;, u is equal to v and v is not modified; 
  * T(v) is equal to v and does not modify v. 



### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 18.4.14 Concept `copy_constructible` [concept.copyconstructible] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 18.4.14 Concept `copy_constructible` [concept.copyconstructible] 



### See also

[ is_copy_constructibleis_trivially_copy_constructibleis_nothrow_copy_constructible](../types/is_copy_constructible.html "cpp/types/is copy constructible")(C++11)(C++11)(C++11) |  checks if a type has a copy constructor   
(class template)   
---|---
