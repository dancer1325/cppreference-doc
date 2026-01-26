 
  


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
**weak_order**(C++20)  
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
inline namespace /* unspecified */ {  
inline constexpr /* unspecified */ weak_order = /* unspecified */;  
} |  |  (since C++20)  
Call signature |  |   
template< class T, class U >  
requires /* see below */  
constexpr [std::weak_ordering](weak_ordering.html) weak_order(T&& t, U&& u) noexcept(/* see below */); |  |   
| |   
  
Compares two values using 3-way comparison and produces a result of type [`std::weak_ordering`](weak_ordering.html "cpp/utility/compare/weak ordering"). 

Let t and u be expressions and `T` and `U` denote decltype((t)) and decltype((u)) respectively, std::weak_order(t, u) is [expression-equivalent](../../language/expressions.html#Expression-equivalence "cpp/language/expressions") to: 

  * If [std::is_same_v](../../types/is_same.html)<[std::decay_t](../../types/decay.html)<T>, [std::decay_t](../../types/decay.html)<U>> is true: 
    * [std::weak_ordering](weak_ordering.html)(weak_order(t, u)), if it is a well-formed expression with overload resolution performed in a context that does not include a declaration of `std::weak_order`, 
    * otherwise, if `T` is a floating-point type: 
      * if [std::numeric_limits](../../types/numeric_limits.html)<T>::is_iec559 is true, performs the weak ordering comparison of floating-point values (see below) and returns that result as a value of type [`std::weak_ordering`](weak_ordering.html "cpp/utility/compare/weak ordering"), 
      * otherwise, yields a value of type [`std::weak_ordering`](weak_ordering.html "cpp/utility/compare/weak ordering") that is consistent with the ordering observed by `T`'s comparison operators, 
    * otherwise, [std::weak_ordering](weak_ordering.html)([std::compare_three_way](compare_three_way.html)()(t, u)), if it is well-formed, 
    * otherwise, [std::weak_ordering](weak_ordering.html)([std::strong_order](strong_order.html)(t, u)), if it is well-formed. 
  * In all other cases, the expression is ill-formed, which can result in [substitution failure](../../language/sfinae.html "cpp/language/sfinae") when it appears in the immediate context of a template instantiation. 



## Contents

  * [1 Customization point objects](weak_order.html#Customization_point_objects)
    * [1.1 Strict weak order of IEEE floating-point types](weak_order.html#Strict_weak_order_of_IEEE_floating-point_types)
  * [2 Example](weak_order.html#Example)
  * [3 See also](weak_order.html#See_also)

  
---  
  
###  Customization point objects

The name `std::weak_order` denotes a _customization point object_ , which is a const [function object](../../named_req/FunctionObject.html "cpp/named req/FunctionObject") of a [literal](../../named_req/LiteralType.html "cpp/named req/LiteralType") [`semiregular`](../../concepts/semiregular.html "cpp/concepts/semiregular") class type. See [CustomizationPointObject](../../named_req/CustomizationPointObject.html "cpp/named req/CustomizationPointObject") for details. 

#### Strict weak order of IEEE floating-point types

Let x and y be values of same IEEE floating-point type, and weak_order_less(x, y) be the boolean result indicating if x precedes y in the strict weak order defined by the C++ standard. 

  * If neither x nor y is NaN, then weak_order_less(x, y) == true if and only if x < y, i.e. all representations of equal floating-point value are equivalent; 
  * If x is negative NaN and y is not negative NaN, then weak_order_less(x, y) == true; 
  * If x is not positive NaN and y is positive NaN, then weak_order_less(x, y) == true; 
  * If both x and y are NaNs with the same sign, then (weak_order_less(x, y) || weak_order_less(y, x)) == false, i.e. all NaNs with the same sign are equivalent. 



### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### See also

[ weak_ordering](weak_ordering.html "cpp/utility/compare/weak ordering")(C++20) |  the result type of 3-way comparison that supports all 6 operators and is not substitutable   
(class)   
---|---  
[ strong_order](strong_order.html "cpp/utility/compare/strong order")(C++20) |  performs 3-way comparison and produces a result of type `std::strong_ordering`  
(customization point object)  
[ partial_order](partial_order.html "cpp/utility/compare/partial order")(C++20) |  performs 3-way comparison and produces a result of type `std::partial_ordering`  
(customization point object)  
[ compare_weak_order_fallback](compare_weak_order_fallback.html "cpp/utility/compare/compare weak order fallback")(C++20) |  performs 3-way comparison and produces a result of type `std::weak_ordering`, even if operator<=> is unavailable  
(customization point object)
