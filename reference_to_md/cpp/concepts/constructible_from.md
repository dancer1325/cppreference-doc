
  


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
**constructible_from**(C++20)  
[default_initializable](default_initializable.html "cpp/concepts/default initializable")(C++20)` `  
[move_constructible](move_constructible.html "cpp/concepts/move constructible")(C++20)  
[copy_constructible](copy_constructible.html "cpp/concepts/copy constructible")(C++20)  
[assignable_from](assignable_from.html "cpp/concepts/assignable from")(C++20)  
  
  
| Exposition-only concepts  
---  
[_boolean-testable_](boolean-testable.html "cpp/concepts/boolean-testable") ﻿(C++20)  
  


Defined in header `[<concepts>](../header/concepts.html "cpp/header/concepts")` |  |   
---|---|---  
template< class T, class... Args >  
concept constructible_from =  
[std::destructible](destructible.html)<T> && [std::is_constructible_v](../types/is_constructible.html)<T, Args...>; |  |  (since C++20)  
| |   
  
The `constructible_from` concept specifies that a variable of type `T` can be initialized with the given set of argument types `Args...`. 

### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 18.4.11 Concept `constructible_from` [concept.constructible] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 18.4.11 Concept `constructible_from` [concept.constructible] 



### See also

[ is_constructibleis_trivially_constructibleis_nothrow_constructible](../types/is_constructible.html "cpp/types/is constructible")(C++11)(C++11)(C++11) |  checks if a type has a constructor for specific arguments   
(class template)   
---|---
