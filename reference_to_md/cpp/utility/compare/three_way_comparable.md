 
  


[Utilities library](../../utility.html "cpp/utility")

| [Language support](../../utility.html#Language_support "cpp/utility")  
---  
[Type support](../rtti.html "cpp/types") (basic types, RTTI)  
[Library feature-test macros](../feature_test.html "cpp/utility/feature test") (C++20)  
[Program utilities](../program.html "cpp/utility/program")  
[Variadic functions](../variadic.html "cpp/utility/variadic")  
[initializer_list](../initializer_list.html "cpp/utility/initializer list")(C++11)  
[is_constant_evaluated](../../types/is_constant_evaluated.html "cpp/types/is constant evaluated")(C++20)  
[is_within_lifetime](../../types/is_within_lifetime.html "cpp/types/is within lifetime")(C++26)  
[source_location](../source_location.html "cpp/utility/source location")(C++20)  
[Coroutine support](../../coroutine.html "cpp/coroutine") (C++20)  
[Contract support](../../contract.html "cpp/contract") (C++26)  
[Three-way comparison](../../utility.html#Three-way_comparison "cpp/utility")  
**three_way_comparable three_way_comparable_with**(C++20)(C++20)  
[strong_ordering](strong_ordering.html "cpp/utility/compare/strong ordering")(C++20)  
[weak_ordering](weak_ordering.html "cpp/utility/compare/weak ordering")(C++20)  
[partial_ordering](partial_ordering.html "cpp/utility/compare/partial ordering")(C++20)  
[common_comparison_category](common_comparison_category.html "cpp/utility/compare/common comparison category")(C++20)  
[compare_three_way_result](compare_three_way_result.html "cpp/utility/compare/compare three way result")(C++20)  
[compare_three_way](compare_three_way.html "cpp/utility/compare/compare three way")(C++20)  
[strong_order](strong_order.html "cpp/utility/compare/strong order")(C++20)  
[weak_order](weak_order.html "cpp/utility/compare/weak order")(C++20)  
[partial_order](partial_order.html "cpp/utility/compare/partial order")(C++20)  
[compare_strong_order_fallback](compare_strong_order_fallback.html "cpp/utility/compare/compare strong order fallback")(C++20)  
[compare_weak_order_fallback](compare_weak_order_fallback.html "cpp/utility/compare/compare weak order fallback")(C++20)  
[compare_partial_order_fallback](compare_partial_order_fallback.html "cpp/utility/compare/compare partial order fallback")(C++20)` `  
|  | [is_eqis_ltis_lteq](named_comparison_functions.html "cpp/utility/compare/named comparison functions")(C++20)(C++20)(C++20)` `  
---  
  
| [is_neqis_gtis_gteq](named_comparison_functions.html "cpp/utility/compare/named comparison functions")(C++20)(C++20)(C++20)  
---  
  
  
  
  
  
  
  
  
  
  
  


Defined in header `[<compare>](../../header/compare.html "cpp/header/compare")` |  |   
---|---|---  
template< class T, class Cat = [std::partial_ordering](partial_ordering.html) >  
concept three_way_comparable =  
__WeaklyEqualityComparableWith<T, T> &&  
__PartiallyOrderedWith<T, T> &&  
requires(const [std::remove_reference_t](../../types/remove_reference.html)<T>& a,  
const [std::remove_reference_t](../../types/remove_reference.html)<T>& b) {  
{ a <=> b } -> __ComparesAs<Cat>;  
}; |  (1)  |  (since C++20)  
template< class T, class U, class Cat = [std::partial_ordering](partial_ordering.html) >  
concept three_way_comparable_with =  
std::three_way_comparable<T, Cat> &&  
std::three_way_comparable<U, Cat> &&  
__ComparisonCommonTypeWith<T, U> &&  
std::three_way_comparable<  
[std::common_reference_t](../../types/common_reference.html)<  
const [std::remove_reference_t](../../types/remove_reference.html)<T>&,  
const [std::remove_reference_t](../../types/remove_reference.html)<U>&>, Cat> &&  
__WeaklyEqualityComparableWith<T, U> &&  
__PartiallyOrderedWith<T, U> &&  
requires(const [std::remove_reference_t](../../types/remove_reference.html)<T>& t,  
const [std::remove_reference_t](../../types/remove_reference.html)<U>& u) {  
{ t <=> u } -> __ComparesAs<Cat>;  
{ u <=> t } -> __ComparesAs<Cat>;  
}; |  (2)  |  (since C++20)  
template< class T, class Cat >  
concept __ComparesAs =  
[std::same_as](../../concepts/same_as.html)<[std::common_comparison_category_t](common_comparison_category.html)<T, Cat>, Cat>; |  (3)  |  (exposition only*)  
| |   
  
1) The concept `std::three_way_comparable` specifies that the three way comparison operator `<=>` on `T` yield results consistent with the comparison category implied by `Cat`.

2) The concept `std::three_way_comparable_with` specifies that the three way comparison operator `<=>` on (possibly mixed) `T` and `U` operands yield results consistent with the comparison category implied by `Cat`. Comparing mixed operands yields results equivalent to comparing the operands converted to their common type.

[`___WeaklyEqualityComparableWith_`](../../concepts/equality_comparable.html "cpp/concepts/equality comparable"), [`___PartiallyOrderedWith_`](../../concepts/totally_ordered.html "cpp/concepts/totally ordered"), and [`___ComparisonCommonTypeWith_`](../../concepts/equality_comparable.html "cpp/concepts/equality comparable") are exposition-only concepts. See descriptions of [`equality_comparable`](../../concepts/equality_comparable.html "cpp/concepts/equality comparable") and [`totally_ordered`](../../concepts/totally_ordered.html "cpp/concepts/totally ordered"). 

## Contents

  * [1 Semantic requirements](three_way_comparable.html#Semantic_requirements)
  * [2 Equality preservation](three_way_comparable.html#Equality_preservation)
  * [3 Implicit expression variations](three_way_comparable.html#Implicit_expression_variations)
  * [4 See also](three_way_comparable.html#See_also)

  
---  
  
### Semantic requirements

These concepts are modeled only if they are satisfied and all concepts they subsume are modeled. 

1) `T` and `Cat` model std::three_way_comparable<T, Cat> only if, given lvalues `a` and `b` of type const [std::remove_reference_t](../../types/remove_reference.html)<T>, following are true: 

  * (a <=> b == 0) == bool(a == b), 
  * (a <=> b != 0) == bool(a != b), 
  * ((a <=> b) <=> 0) and (0 <=> (b <=> a)) are equal, 
  * bool(a > b) == bool(b < a), 
  * bool(a >= b) == !bool(a < b), 
  * bool(a <= b) == !bool(b < a), 
  * (a <=> b < 0) == bool(a < b), 
  * (a <=> b > 0) == bool(a > b), 
  * (a <=> b <= 0) == bool(a <= b), and 
  * (a <=> b >= 0) == bool(a >= b), and 
  * if `Cat` is convertible to std::strong_ordering, `T` models [`totally_ordered`](../../concepts/totally_ordered.html "cpp/concepts/totally ordered").



2) `T`, `U`, and `Cat` model std::three_way_comparable_with<T, U, Cat> only if given 

  * `t` and `t2`, lvalues denoting distinct equal objects of types const [std::remove_reference_t](../../types/remove_reference.html)<T> and [std::remove_reference_t](../../types/remove_reference.html)<T> respectively, and 
  * `u` and `u2`, lvalues denoting distinct equal objects of types const [std::remove_reference_t](../../types/remove_reference.html)<U> and [std::remove_reference_t](../../types/remove_reference.html)<U> respectively. 



Let `C` be [std::common_reference_t](../../types/common_reference.html)<const [std::remove_reference_t](../../types/remove_reference.html)<T>&, const [std::remove_reference_t](../../types/remove_reference.html)<U>&> and given an expression `E` and a type `C`, let CONVERT_TO<C>(E) be: 

  * static_cast<C>([std::as_const](../as_const.html)(E)). 

| (until C++23)  
---|---  
  
  * static_cast<const C&>([std::as_const](../as_const.html)(E)) if that is a valid expression, 
  * static_cast<const C&>(std::move(E)) otherwise. 

| (since C++23)  
  
the following are true: 

  * t <=> u and u <=> t have the same domain, 
  * ((t <=> u) <=> 0) and (0 <=> (u <=> t)) are equal, 
  * (t <=> u == 0) == bool(t == u), 
  * (t <=> u != 0) == bool(t != u), 
  * Cat(t <=> u) == Cat(CONVERT_TO<C>(t2) <=> CONVERT_TO<C>(u2)), 
  * (t <=> u < 0) == bool(t < u), 
  * (t <=> u > 0) == bool(t > u), 
  * (t <=> u <= 0) == bool(t <= u), 
  * (t <=> u >= 0) == bool(t >= u), and 
  * if `Cat` is convertible to std::strong_ordering, `T` and `U` model [std::totally_ordered_with](../../concepts/totally_ordered.html)<T, U>.



### Equality preservation

Expressions declared in [requires expressions](../../language/requires.html "cpp/language/requires") of the standard library concepts are required to be [equality-preserving](../../concepts.html#Equality_preservation "cpp/concepts") (except where stated otherwise). 

### Implicit expression variations

A [requires expression](../../language/requires.html "cpp/language/requires") that uses an expression that is non-modifying for some constant lvalue operand also requires [implicit expression variations](../../concepts.html#Implicit_expression_variations "cpp/concepts"). 

### See also

[ equality_comparableequality_comparable_with](../../concepts/equality_comparable.html "cpp/concepts/equality comparable")(C++20) |  specifies that operator == is an equivalence relation   
(concept)   
---|---  
[ totally_orderedtotally_ordered_with](../../concepts/totally_ordered.html "cpp/concepts/totally ordered")(C++20) |  specifies that the comparison operators on the type yield a total order   
(concept) 
