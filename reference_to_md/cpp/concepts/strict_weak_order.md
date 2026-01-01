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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/navbar_content&action=edit)

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
**strict_weak_order**(C++20)  
  
| Exposition-only concepts  
---  
[_boolean-testable_](boolean-testable.html "cpp/concepts/boolean-testable") ﻿(C++20)  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/concepts/navbar_content&action=edit)

Defined in header `[<concepts>](../header/concepts.html "cpp/header/concepts")` |  |   
---|---|---  
template< class R, class T, class U >  
concept strict_weak_order = [std::relation](relation.html)<R, T, U>; |  |  (since C++20)  
| |   
  
The concept `strict_weak_order<R, T, U>` specifies that the [`relation`](relation.html "cpp/concepts/relation") `R` imposes a strict weak ordering on its arguments. 

## Contents

  * [1 Semantic requirements](strict_weak_order.html#Semantic_requirements)
  * [2 Notes](strict_weak_order.html#Notes)
  * [3 References](strict_weak_order.html#References)
  * [4 See also](strict_weak_order.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/concepts/strict_weak_order&action=edit&section=1 "Edit section: Semantic requirements")] Semantic requirements

A relation r is a strict weak ordering if 

  * it is irreflexive: for all x, r(x, x) is false; 
  * it is transitive: for all a, b and c, if r(a, b) and r(b, c) are both true then r(a, c) is true; 
  * let e(a, b) be !r(a, b) && !r(b, a), then e is transitive: e(a, b) && e(b, c) implies e(a, c). 



Under these conditions, it can be shown that e is an equivalence relation, and r induces a strict total ordering on the equivalence classes determined by e. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/concepts/strict_weak_order&action=edit&section=2 "Edit section: Notes")] Notes

The distinction between [`relation`](relation.html "cpp/concepts/relation") and `strict_weak_order` is purely semantic. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/concepts/strict_weak_order&action=edit&section=3 "Edit section: References")] References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 18.7.7 Concept `strict_weak_order` [concept.strictweakorder] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 18.7.7 Concept `strict_weak_order` [concept.strictweakorder] 



### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/concepts/strict_weak_order&action=edit&section=4 "Edit section: See also")] See also

  * [LessThanComparable](../named_req/LessThanComparable.html "cpp/named req/LessThanComparable")


