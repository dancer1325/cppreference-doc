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
**totally_ordered totally_ordered_with**(C++20)(C++20)  
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
template< class T >  
concept totally_ordered =  
[std::equality_comparable](equality_comparable.html)<T> && __PartiallyOrderedWith<T, T>; |  (1)  |  (since C++20)  
template< class T, class U >  
concept totally_ordered_with =  
std::totally_ordered<T> &&  
std::totally_ordered<U> &&  
[std::equality_comparable_with](equality_comparable.html)<T, U> &&  
std::totally_ordered<  
[std::common_reference_t](../types/common_reference.html)<  
const [std::remove_reference_t](../types/remove_reference.html)<T>&,  
const [std::remove_reference_t](../types/remove_reference.html)<U>&>> &&  
__PartiallyOrderedWith<T, U>; |  (2)  |  (since C++20)  
Helper concepts |  |   
template< class T, class U >  
concept __PartiallyOrderedWith =  
requires(const [std::remove_reference_t](../types/remove_reference.html)<T>& t,  
const [std::remove_reference_t](../types/remove_reference.html)<U>& u) {  
{ t < u } -> [boolean-testable](boolean-testable.html);  
{ t > u } -> [boolean-testable](boolean-testable.html);  
{ t <= u } -> [boolean-testable](boolean-testable.html);  
{ t >= u } -> [boolean-testable](boolean-testable.html);  
{ u < t } -> [boolean-testable](boolean-testable.html);  
{ u > t } -> [boolean-testable](boolean-testable.html);  
{ u <= t } -> [boolean-testable](boolean-testable.html);  
{ u >= t } -> [boolean-testable](boolean-testable.html);  
}; |  (3)  |  (exposition only*)  
| |   
  
1) The concept `std::totally_ordered` specifies that the comparison operators `==,!=,<,>,<=,>=` on a type yield results consistent with a [strict total order](https://en.wikipedia.org/wiki/Total_order#Strict_and_non-strict_total_orders "enwiki:Total order") on the type.

2) The concept `std::totally_ordered_with` specifies that the comparison operators `==,!=,<,>,<=,>=` on (possibly mixed) `T` and `U` operands yield results consistent with a strict total order. Comparing mixed operands yields results equivalent to comparing the operands converted to their common type.

3) The exposition-only concept `___PartiallyOrderedWith_` specifies that a value of type `T` and a value of type `U` can be compared in a partial order with each other (in either order) using `<`, `>`, `<=`, and `>=`, and the results of the comparisons are consistent.

## Contents

  * [1 Semantic requirements](totally_ordered.html#Semantic_requirements)
  * [2 Equality preservation](totally_ordered.html#Equality_preservation)
  * [3 Implicit expression variations](totally_ordered.html#Implicit_expression_variations)
  * [4 References](totally_ordered.html#References)
  * [5 See also](totally_ordered.html#See_also)

  
---  
  
### Semantic requirements

These concepts are modeled only if they are satisfied and all concepts they subsume are modeled. 

1) std::totally_ordered<T> is modeled only if, given lvalues `a`, `b` and `c` of type const [std::remove_reference_t](../types/remove_reference.html)<T>: 

  * Exactly one of bool(a < b), bool(a > b) and bool(a == b) is true; 
  * If bool(a < b) and bool(b < c) are both true, then bool(a < c) is true; 
  * bool(a > b) == bool(b < a)
  * bool(a >= b) == !bool(a < b)
  * bool(a <= b) == !bool(b < a)



2) std::totally_ordered_with<T, U> is modeled only if, given 

  * `t` and `t2`, lvalues denoting distinct equal objects of types const [std::remove_reference_t](../types/remove_reference.html)<T> and [std::remove_reference_t](../types/remove_reference.html)<T> respectively, and 
  * `u` and `u2`, lvalues denoting distinct equal objects of types const [std::remove_reference_t](../types/remove_reference.html)<U> and [std::remove_reference_t](../types/remove_reference.html)<U> respectively, 



let `C` be [std::common_reference_t](../types/common_reference.html)<const [std::remove_reference_t](../types/remove_reference.html)<T>&, const [std::remove_reference_t](../types/remove_reference.html)<U>&>, and, given an expression `E` and a type `C`, let CONVERT_TO<C>(E) be: 

  * static_cast<C>([std::as_const](../utility/as_const.html)(E)). 

| (until C++23)  
---|---  
  
  * static_cast<const C&>([std::as_const](../utility/as_const.html)(E)) if that is a valid expression, 
  * static_cast<const C&>(std::move(E)) otherwise. 

| (since C++23)  
  
the following are true: 

  * bool(t < u) == bool(CONVERT_TO<C>(t2) < CONVERT_TO<C>(u2))
  * bool(t > u) == bool(CONVERT_TO<C>(t2) > CONVERT_TO<C>(u2))
  * bool(t <= u) == bool(CONVERT_TO<C>(t2) <= CONVERT_TO<C>(u2))
  * bool(t >= u) == bool(CONVERT_TO<C>(t2) >= CONVERT_TO<C>(u2))
  * bool(u < t) == bool(CONVERT_TO<C>(u2) < CONVERT_TO<C>(t2))
  * bool(u > t) == bool(CONVERT_TO<C>(u2) > CONVERT_TO<C>(t2))
  * bool(u <= t) == bool(CONVERT_TO<C>(u2) <= CONVERT_TO<C>(t2))
  * bool(u >= t) == bool(CONVERT_TO<C>(u2) >= CONVERT_TO<C>(t2))



3) __PartiallyOrderedWith<T, U> is modeled only if given 

  * any lvalue `t` of type const [std::remove_reference_t](../types/remove_reference.html)<T>, and 
  * any lvalue `u` of type const [std::remove_reference_t](../types/remove_reference.html)<U>, 



the following are true: 

  * t < u, t <= u, t > u, t >= u, u < t, u <= t, u > t, and u >= t have the same domain; 
  * bool(t < u) == bool(u > t); 
  * bool(u < t) == bool(t > u); 
  * bool(t <= u) == bool(u >= t); and 
  * bool(u <= t) == bool(t >= u).



### Equality preservation

Expressions declared in [requires expressions](../language/requires.html "cpp/language/requires") of the standard library concepts are required to be [equality-preserving](../concepts.html#Equality_preservation "cpp/concepts") (except where stated otherwise). 

### Implicit expression variations

A [requires expression](../language/requires.html "cpp/language/requires") that uses an expression that is non-modifying for some constant lvalue operand also requires [implicit expression variations](../concepts.html#Implicit_expression_variations "cpp/concepts"). 

### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 18.5.5 Concept `totally_ordered` [concept.totallyordered] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 18.5.4 Concept `totally_ordered` [concept.totallyordered] 



### See also

[ three_way_comparablethree_way_comparable_with](../utility/compare/three_way_comparable.html "cpp/utility/compare/three way comparable")(C++20) |  specifies that operator <=> produces consistent result on given types   
(concept)   
---|---
