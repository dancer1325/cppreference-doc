 
  


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
**weak_ordering**(C++20)  
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
class weak_ordering; |  |  (since C++20)  
| |   
  
The class type `std::weak_ordering` is the result type of a [three-way comparison](../../language/operator_comparison.html#Three-way_comparison "cpp/language/operator comparison") that: 

  * Admits all six relational operators (`==`, `!=`, `<`, `<=`, `>`, `>=`). 


  * Does not imply substitutability: if a is equivalent to b, f(a) may not be equivalent to f(b), where f denotes a function that reads only comparison-salient state that is accessible via the argument's public const members. In other words, equivalent values may be distinguishable. 
  * [Does not allow incomparable values](https://en.wikipedia.org/wiki/Connected_relation "enwiki:Connected relation"): exactly one of a < b, a == b, or a > b must be true. 



## Contents

  * [1 Constants](weak_ordering.html#Constants)
  * [2 Conversions](weak_ordering.html#Conversions)
  * [3 std::weak_ordering::operator partial_ordering](weak_ordering.html#std::weak_ordering::operator_partial_ordering)
    * [3.1 Return value](weak_ordering.html#Return_value)
    * [3.2 Comparisons](weak_ordering.html#Comparisons)
  * [4 operator==](weak_ordering.html#operator.3D.3D)
    * [4.1 Parameters](weak_ordering.html#Parameters)
    * [4.2 Return value](weak_ordering.html#Return_value_2)
  * [5 operator<](weak_ordering.html#operator.3C)
    * [5.1 Parameters](weak_ordering.html#Parameters_2)
    * [5.2 Return value](weak_ordering.html#Return_value_3)
  * [6 operator<=](weak_ordering.html#operator.3C.3D)
    * [6.1 Parameters](weak_ordering.html#Parameters_3)
    * [6.2 Return value](weak_ordering.html#Return_value_4)
  * [7 operator>](weak_ordering.html#operator.3E)
    * [7.1 Parameters](weak_ordering.html#Parameters_4)
    * [7.2 Return value](weak_ordering.html#Return_value_5)
  * [8 operator>=](weak_ordering.html#operator.3E.3D)
    * [8.1 Parameters](weak_ordering.html#Parameters_5)
    * [8.2 Return value](weak_ordering.html#Return_value_6)
  * [9 operator<=>](weak_ordering.html#operator.3C.3D.3E)
    * [9.1 Parameters](weak_ordering.html#Parameters_6)
    * [9.2 Return value](weak_ordering.html#Return_value_7)
    * [9.3 Example](weak_ordering.html#Example)
    * [9.4 See also](weak_ordering.html#See_also)

  
---  
  
### Constants

The type `std::weak_ordering` has three valid values, implemented as const static data members of its type: 

Name  |  Definition   
---|---  
inline constexpr std::weak_ordering less[static] |  a valid value indicating less-than (ordered before) relationship   
(public static member constant)  
inline constexpr std::weak_ordering equivalent[static] |  a valid value indicating equivalence (neither ordered before nor ordered after)   
(public static member constant)  
inline constexpr std::weak_ordering greater[static] |  a valid value indicating greater-than (ordered after) relationship   
(public static member constant)  
  
### Conversions

`std::weak_ordering` is implicitly-convertible to std::partial_ordering, while std::strong_ordering is implicitly-convertible to weak_ordering. 

** operator partial_ordering** |  implicit conversion to std::partial_ordering   
(public member function)  
---|---  
  
##  std::weak_ordering::operator partial_ordering

constexpr operator partial_ordering() const noexcept; |  |   
---|---|---  
| |   
  
###  Return value

std::partial_ordering::less if `v` is `less`, std::partial_ordering::greater if `v` is `greater`, std::partial_ordering::equivalent if `v` is `equivalent`. 

### Comparisons

Comparison operators are defined between values of this type and literal ​0​. This supports the expressions a <=> b == 0 or a <=> b < 0 that can be used to convert the result of a three-way comparison operator to a boolean relationship; see [`std::is_eq`](named_comparison_functions.html "cpp/utility/compare/named comparison functions"), [`std::is_lt`](named_comparison_functions.html "cpp/utility/compare/named comparison functions"), etc. 

These functions are not visible to ordinary [unqualified](../../language/unqualified_lookup.html "cpp/language/unqualified lookup") or [qualified lookup](../../language/qualified_lookup.html "cpp/language/qualified lookup"), and can only be found by [argument-dependent lookup](../../language/adl.html "cpp/language/adl") when `std::weak_ordering` is an associated class of the arguments. 

The behavior of a program that attempts to compare a `weak_ordering` with anything other than the integer literal ​0​ is undefined. 

** operator==operator<operator>operator<=operator>=operator<=>** |  compares with zero or a `weak_ordering`   
(function)  
---|---  
  
##  operator==

friend constexpr bool operator==( weak_ordering v, /*unspecified*/ u ) noexcept; |  (1)  |   
---|---|---  
friend constexpr bool operator==( weak_ordering v, weak_ordering w ) noexcept = default; |  (2)  |   
| |   
  
###  Parameters

v, w  |  \-  |  `std::weak_ordering` values to check   
---|---|---  
u  |  \-  |  an unused parameter of any type that accepts literal zero argument   
  
###  Return value

1) true if `v` is `equivalent`, false if `v` is `less` or `greater`

2) true if both parameters hold the same value, false otherwise 

##  operator<

friend constexpr bool operator<( weak_ordering v, /*unspecified*/ u ) noexcept; |  (1)  |   
---|---|---  
friend constexpr bool operator<( /*unspecified*/ u, weak_ordering v ) noexcept; |  (2)  |   
| |   
  
###  Parameters

v  |  \-  |  a `std::weak_ordering` value to check   
---|---|---  
u  |  \-  |  an unused parameter of any type that accepts literal zero argument   
  
###  Return value

1) true if `v` is `less`, and false if `v` is `greater` or `equivalent`

2) true if `v` is `greater`, and false if `v` is `less` or `equivalent`

##  operator<=

friend constexpr bool operator<=( weak_ordering v, /*unspecified*/ u ) noexcept; |  (1)  |   
---|---|---  
friend constexpr bool operator<=( /*unspecified*/ u, weak_ordering v ) noexcept; |  (2)  |   
| |   
  
###  Parameters

v  |  \-  |  a `std::weak_ordering` value to check   
---|---|---  
u  |  \-  |  an unused parameter of any type that accepts literal zero argument   
  
###  Return value

1) true if `v` is `less` or `equivalent`, and false if `v` is `greater`

2) true if `v` is `greater` or `equivalent`, and false if `v` is `less`

##  operator>

friend constexpr bool operator>( weak_ordering v, /*unspecified*/ u ) noexcept; |  (1)  |   
---|---|---  
friend constexpr bool operator>( /*unspecified*/ u, weak_ordering v ) noexcept; |  (2)  |   
| |   
  
###  Parameters

v  |  \-  |  a `std::weak_ordering` value to check   
---|---|---  
u  |  \-  |  an unused parameter of any type that accepts literal zero argument   
  
###  Return value

1) true if `v` is `greater`, and false if `v` is `less` or `equivalent`

2) true if `v` is `less`, and false if `v` is `greater` or `equivalent`

##  operator>=

friend constexpr bool operator>=( weak_ordering v, /*unspecified*/ u ) noexcept; |  (1)  |   
---|---|---  
friend constexpr bool operator>=( /*unspecified*/ u, weak_ordering v ) noexcept; |  (2)  |   
| |   
  
###  Parameters

v  |  \-  |  a `std::weak_ordering` value to check   
---|---|---  
u  |  \-  |  an unused parameter of any type that accepts literal zero argument   
  
###  Return value

1) true if `v` is `greater` or `equivalent`, and false if `v` is `less`

2) true if `v` is `less` or `equivalent`, and false if `v` is `greater`

##  operator<=>

friend constexpr weak_ordering operator<=>( weak_ordering v, /*unspecified*/ u ) noexcept; |  (1)  |   
---|---|---  
friend constexpr weak_ordering operator<=>( /*unspecified*/ u, weak_ordering v ) noexcept; |  (2)  |   
| |   
  
###  Parameters

v  |  \-  |  a `std::weak_ordering` value to check   
---|---|---  
u  |  \-  |  an unused parameter of any type that accepts literal zero argument   
  
###  Return value

1) v.

2) `greater` if `v` is `less`, `less` if `v` is `greater`, otherwise `v`. 

### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### See also

[ strong_ordering](strong_ordering.html "cpp/utility/compare/strong ordering")(C++20) |  the result type of 3-way comparison that supports all 6 operators and is substitutable   
(class)   
---|---  
[ partial_ordering](partial_ordering.html "cpp/utility/compare/partial ordering")(C++20) |  the result type of 3-way comparison that supports all 6 operators, is not substitutable, and allows incomparable values   
(class) 
