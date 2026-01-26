 
  


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
[three_way_comparablethree_way_comparable_with](three_way_comparable.html "cpp/utility/compare/three way comparable")(C++20)(C++20)  
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
**compare_partial_order_fallback**(C++20)` `  
|  | [is_eqis_ltis_lteq](named_comparison_functions.html "cpp/utility/compare/named comparison functions")(C++20)(C++20)(C++20)` `  
---  
  
| [is_neqis_gtis_gteq](named_comparison_functions.html "cpp/utility/compare/named comparison functions")(C++20)(C++20)(C++20)  
---  
  
  
  
  
  
  
  
  
  
  
  


Defined in header `[<compare>](../../header/compare.html "cpp/header/compare")` |  |   
---|---|---  
inline namespace /* unspecified */ {  
inline constexpr /* unspecified */  
compare_partial_order_fallback = /* unspecified */;  
} |  |  (since C++20)  
Call signature |  |   
template< class T, class U >  
requires /* see below */  
constexpr [std::partial_ordering](partial_ordering.html)  
compare_partial_order_fallback( T&& t, U&& u ) noexcept(/* see below */); |  |  (since C++20)  
| |   
  
Performs three-way comparison on [subexpressions](../../language/expressions.html#Full-expressions "cpp/language/expressions") t and u and produces a result of type [`std::partial_ordering`](partial_ordering.html "cpp/utility/compare/partial ordering"), even if the operator `<=>` is unavailable. 

If [std::decay_t](../../types/decay.html)<T> and [std::decay_t](../../types/decay.html)<U>> are the same type, std::compare_partial_order_fallback(t, u) is [expression-equivalent](../../language/expressions.html#Expression-equivalence "cpp/language/expressions") to: 

  * [std::partial_order](partial_order.html)(t, u), if it is a well-formed expression; 
  * otherwise, t == u ? std::partial_ordering::equivalent :  
t < u ? std::partial_ordering::less :  
u < t ? std::partial_ordering::greater :  
std::partial_ordering::unordered, if the expressions t == u, t < u and u < t are all well-formed and each of decltype(t == u), decltype(t < u) and decltype(u < t) models [`_boolean-testable_`](../../concepts/boolean-testable.html "cpp/concepts/boolean-testable"), except that t and u are evaluated only once. 



In all other cases, std::compare_partial_order_fallback(t, u) is ill-formed, which can result in [substitution failure](../../language/sfinae.html "cpp/language/sfinae") when it appears in the immediate context of a template instantiation. 

## Contents

  * [1 Customization point objects](compare_partial_order_fallback.html#Customization_point_objects)
  * [2 Example](compare_partial_order_fallback.html#Example)
  * [3 Defect reports](compare_partial_order_fallback.html#Defect_reports)
  * [4 See also](compare_partial_order_fallback.html#See_also)

  
---  
  
###  Customization point objects

The name `std::compare_partial_order_fallback` denotes a _customization point object_ , which is a const [function object](../../named_req/FunctionObject.html "cpp/named req/FunctionObject") of a [literal](../../named_req/LiteralType.html "cpp/named req/LiteralType") [`semiregular`](../../concepts/semiregular.html "cpp/concepts/semiregular") class type. See [CustomizationPointObject](../../named_req/CustomizationPointObject.html "cpp/named req/CustomizationPointObject") for details. 

### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2114](https://cplusplus.github.io/LWG/issue2114)  
([P2167R3](https://wg21.link/P2167R3))  | C++20  | the fallback mechanism only required  
return types to be convertible to bool | constraints strengthened   
[LWG 3465](https://cplusplus.github.io/LWG/issue3465) | C++20  | the fallback mechanism did not require u < t to be well-formed  | required   
[LWG 4157](https://cplusplus.github.io/LWG/issue4157) | C++20  | [P2167R3](https://wg21.link/P2167R3) overwrote the resolution of [LWG issue 3465](https://cplusplus.github.io/LWG/issue3465) | restored the resolution   
  
### See also

[ partial_order](partial_order.html "cpp/utility/compare/partial order")(C++20) |  performs 3-way comparison and produces a result of type `std::partial_ordering`  
(customization point object)  
---|---
