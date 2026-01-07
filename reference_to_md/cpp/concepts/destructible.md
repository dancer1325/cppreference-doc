
  


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
**destructible**(C++20)  
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
template< class T >  
concept destructible = [std::is_nothrow_destructible_v](../types/is_destructible.html)<T>; |  |  (since C++20)  
| |   
  
The concept `destructible` specifies the concept of all types whose instances can safely be destroyed at the end of their lifetime (including reference types). 

### Notes

Unlike the [Destructible](../named_req/Destructible.html "cpp/named req/Destructible") named requirement, `std::destructible` requires the destructor to be noexcept(true), not merely non-throwing when invoked, and allows reference types and array types. 

### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 18.4.10 Concept `destructible` [concept.destructible] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 18.4.10 Concept `destructible` [concept.destructible] 



### See also

[ is_destructibleis_trivially_destructibleis_nothrow_destructible](../types/is_destructible.html "cpp/types/is destructible")(C++11)(C++11)(C++11) |  checks if a type has a non-deleted destructor   
(class template)   
---|---
