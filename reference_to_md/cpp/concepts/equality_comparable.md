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
**equality_comparable equality_comparable_with**(C++20)(C++20)  
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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/concepts/navbar_content&action=edit)

Defined in header `[<concepts>](../header/concepts.html "cpp/header/concepts")` |  |   
---|---|---  
template< class T >  
concept equality_comparable = __WeaklyEqualityComparableWith<T, T>; |  (1)  |  (since C++20)  
template< class T, class U >  
concept equality_comparable_with =  
std::equality_comparable<T> &&  
std::equality_comparable<U> &&  
__ComparisonCommonTypeWith<T, U> &&  
std::equality_comparable<  
[std::common_reference_t](../types/common_reference.html)<  
const [std::remove_reference_t](../types/remove_reference.html)<T>&,  
const [std::remove_reference_t](../types/remove_reference.html)<U>&>> &&  
__WeaklyEqualityComparableWith<T, U>; |  (2)  |  (since C++20)  
Helper concepts |  |   
template< class T, class U >  
concept __WeaklyEqualityComparableWith =  
requires(const [std::remove_reference_t](../types/remove_reference.html)<T>& t,  
const [std::remove_reference_t](../types/remove_reference.html)<U>& u) {  
{ t == u } -> [boolean-testable](boolean-testable.html);  
{ t != u } -> [boolean-testable](boolean-testable.html);  
{ u == t } -> [boolean-testable](boolean-testable.html);  
{ u != t } -> [boolean-testable](boolean-testable.html);  
}; |  (3)  |  (exposition only*)  
| (4) |   
template< class T, class U >  
concept __ComparisonCommonTypeWith =  
[std::common_reference_with](common_reference_with.html)<  
const [std::remove_reference_t](../types/remove_reference.html)<T>&,  
const [std::remove_reference_t](../types/remove_reference.html)<U>&>; |  |  (until C++23)   
(exposition only*)  
template< class T, class U, class C = [std::common_reference_t](../types/common_reference.html)<const T&, const U&> >  
concept _ComparisonCommonTypeWithImpl =  
[std::same_as](same_as.html)<[std::common_reference_t](../types/common_reference.html)<const T&, const U&>,  
[std::common_reference_t](../types/common_reference.html)<const U&, const T&>> &&  
requires {  
requires [std::convertible_to](convertible_to.html)<const T&, const C&> ||  
[std::convertible_to](convertible_to.html)<T, const C&>;  
requires [std::convertible_to](convertible_to.html)<const U&, const C&> ||  
[std::convertible_to](convertible_to.html)<U, const C&>;  
};  
template< class T, class U >  
concept __ComparisonCommonTypeWith =  
_ComparisonCommonTypeWithImpl<[std::remove_cvref_t](../types/remove_cvref.html)<T>, [std::remove_cvref_t](../types/remove_cvref.html)<U>>; |  |  (since C++23)   
(exposition only*)  
| |   
  
1) The concept `std::equality_comparable` specifies that the comparison operators `==` and `!=` on `T` reflects equality: `==` yields true if and only if the operands are equal.

2) The concept `std::equality_comparable_with` specifies that the comparison operators `==` and `!=` on (possibly mixed) `T` and `U` operands yield results consistent with equality. Comparing mixed operands yields results equivalent to comparing the operands converted to their common type.

3) The exposition-only concept `___WeaklyEqualityComparableWith_` specifies that an object of type `T` and an object of type `U` can be compared for equality with each other (in either order) using both `==` and `!=`, and the results of the comparisons are consistent. 

4) The exposition-only concept `___ComparisonCommonTypeWith_` specifies that two types share a common type, and a const lvalue or a non-const rvalue(since C++23) of either type is convertible to that common type.

## Contents

  * [1 Semantic requirements](equality_comparable.html#Semantic_requirements)
  * [2 Equality preservation](equality_comparable.html#Equality_preservation)
  * [3 Implicit expression variations](equality_comparable.html#Implicit_expression_variations)
  * [4 References](equality_comparable.html#References)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/concepts/equality_comparable&action=edit&section=1 "Edit section: Semantic requirements")] Semantic requirements

These concepts are modeled only if they are satisfied and all concepts they subsume are modeled. 

In the following paragraphs, given an expression `E` and a type `C`, CONVERT_TO<C>(E) is defined as: 

  * static_cast<C>([std::as_const](../utility/as_const.html)(E)). 

| (until C++23)  
---|---  
  
  * static_cast<const C&>([std::as_const](../utility/as_const.html)(E)) if that is a valid expression, 
  * static_cast<const C&>(std::move(E)) otherwise. 

| (since C++23)  
  
1) std::equality_comparable<T> is modeled only if, given objects `a` and `b` of type `T`, bool(a == b) is true if and only if `a` and `b` are equal. Together with the requirement that a == b is [equality-preserving](../concepts.html#Equality_preservation "cpp/concepts"), this implies that `==` is symmetric and transitive, and further that `==` is reflexive for all objects `a` that are equal to at least one other object.

2) std::equality_comparable_with<T, U> is modeled only if, let 

  * `t` and `t2` be lvalues denoting distinct equal objects of types const [std::remove_reference_t](../types/remove_reference.html)<T> and [std::remove_cvref_t](../types/remove_cvref.html)<T> respectively, 
  * `u` and `u2` be lvalues denoting distinct equal objects of types const [std::remove_reference_t](../types/remove_reference.html)<U> and [std::remove_cvref_t](../types/remove_cvref.html)<U> respectively, 
  * `C` be [std::common_reference_t](../types/common_reference.html)<const [std::remove_reference_t](../types/remove_reference.html)<T>&, const [std::remove_reference_t](../types/remove_reference.html)<U>&>, 



the following expression is true: 

  * bool(t == u) == bool(CONVERT_TO<C>(t2) == CONVERT_TO<C>(u2)).



3) __WeaklyEqualityComparableWith<T, U> is modeled only if given 

  * `t`, an lvalue of type const [std::remove_reference_t](../types/remove_reference.html)<T> and 
  * `u`, an lvalue of type const [std::remove_reference_t](../types/remove_reference.html)<U>, 



the following are true: 

  * t == u, u == t, t != u, u != t have the same domain; 
  * bool(u == t) == bool(t == u); 
  * bool(t != u) == !bool(t == u); and 
  * bool(u != t) == bool(t != u).



4) __WeaklyEqualityComparableWith<T, U> is modeled only if:  The corresponding [`common_reference_with`](common_reference_with.html "cpp/concepts/common reference with") concept is modeled.  | (until C++23)  
---|---  
Let 

  * `C` be [std::common_reference_t](../types/common_reference.html)<const T&, const U&>, 
  * `t1` and `t2` be [equality-preserving](../concepts.html#Equality_preservation "cpp/concepts") expressions that are lvalues of type [std::remove_cvref_t](../types/remove_cvref.html)<T>, 
  * `u1` and `u2` be [equality-preserving](../concepts.html#Equality_preservation "cpp/concepts") expressions that are lvalues of type [std::remove_cvref_t](../types/remove_cvref.html)<U>, 

the following conditions hold: 

  * CONVERT_TO<C>(t1) equals CONVERT_TO<C>(t2) if and only if `t1` equals `t2`; and 
  * CONVERT_TO<C>(u1) equals CONVERT_TO<C>(u2) if and only if `u1` equals `u2`. 

| (since C++23)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/concepts/equality_preservation&action=edit&section=T-1 "Template:cpp/concepts/equality preservation")] Equality preservation

Expressions declared in [requires expressions](../language/requires.html "cpp/language/requires") of the standard library concepts are required to be [equality-preserving](../concepts.html#Equality_preservation "cpp/concepts") (except where stated otherwise). 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/concepts/implicit_expression_variations&action=edit&section=T-1 "Template:cpp/concepts/implicit expression variations")] Implicit expression variations

A [requires expression](../language/requires.html "cpp/language/requires") that uses an expression that is non-modifying for some constant lvalue operand also requires [implicit expression variations](../concepts.html#Implicit_expression_variations "cpp/concepts"). 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/concepts/equality_comparable&action=edit&section=2 "Edit section: References")] References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 18.5.4 Concept `equality_comparable` [concept.equalitycomparable] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 18.5.3 Concept `equality_comparable` [concept.equalitycomparable] 


