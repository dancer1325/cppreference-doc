[C++](../../cpp.html "cpp")

[Compiler support](../compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](../freestanding.html "cpp/freestanding")  
[Language](../language.html "cpp/language")  
[Standard library](../standard_library.html "cpp/standard library")  
[Standard library headers](../headers.html "cpp/header")  
[Named requirements](../iterator/concepts.html "cpp/named req")  
[Feature test macros](../experimental/feature_test.html "cpp/feature test") (C++20)  
[Language support library](../utility.html#Language_support "cpp/utility")  
[Concepts library](../concepts.html "cpp/concepts") (C++20)  
[Diagnostics library](../error.html "cpp/error")  
[Memory management library](../memory.html "cpp/memory")  
[Metaprogramming library](../meta.html "cpp/meta") (C++11)  
[General utilities library](../utility.html "cpp/utility")  
[Containers library](../container.html "cpp/container")  
[Iterators library](../iterator.html "cpp/iterator")  
[Ranges library](../ranges.html "cpp/ranges") (C++20)  
[Algorithms library](../algorithm.html "cpp/algorithm")  
[Strings library](../string.html "cpp/string")  
[Text processing library](../text.html "cpp/text")  
[Numerics library](../numeric.html "cpp/numeric")  
[Date and time library](../chrono.html "cpp/chrono")  
[Input/output library](../io.html "cpp/io")  
[Filesystem library](../filesystem.html "cpp/filesystem") (C++17)  
[Concurrency support library](../atomic.html "cpp/thread") (C++11)  
[Execution control library](../experimental/execution.html "cpp/execution") (C++26)  
[Technical specifications](../experimental.html "cpp/experimental")  
[Symbols index](../symbol_index.html "cpp/symbol index")  
[External libraries](../links/libs.html "cpp/links/libs")  
  


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
  
| [Comparison concepts](../concepts.html#Comparison_concepts "cpp/concepts")  
---  
[equality_comparableequality_comparable_with](equality_comparable.html "cpp/concepts/equality comparable")(C++20)(C++20)  
[totally_orderedtotally_ordered_with](totally_ordered.html "cpp/concepts/totally ordered")(C++20)(C++20)  
[Object concepts](../concepts.html#Object_concepts "cpp/concepts")  
[movable](movable.html "cpp/concepts/movable")(C++20)  
[copyable](copyable.html "cpp/concepts/copyable")(C++20)  
[semiregular](semiregular.html "cpp/concepts/semiregular")(C++20)  
[regular](regular.html "cpp/concepts/regular")(C++20)  
[Callable concepts](../concepts.html#Callable_concepts "cpp/concepts")  
[invocableregular_invocable](invocable.html "cpp/concepts/invocable")(C++20)(C++20)  
[predicate](predicate.html "cpp/concepts/predicate")(C++20)  
[relation](relation.html "cpp/concepts/relation")(C++20)  
[equivalence_relation](equivalence_relation.html "cpp/concepts/equivalence relation")(C++20)  
[strict_weak_order](strict_weak_order.html "cpp/concepts/strict weak order")(C++20)  
  
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
