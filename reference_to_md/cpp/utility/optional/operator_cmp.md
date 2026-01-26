 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::optional`](../optional.html "cpp/utility/optional")

[Member functions](../optional.html#Member_functions "cpp/utility/optional")  
---  
[optional::optional](optional.html "cpp/utility/optional/optional")  
[optional::~optional](~optional.html "cpp/utility/optional/~optional")  
[optional::operator=](operator=.html "cpp/utility/optional/operator=")  
[Observers](../optional.html#Observers "cpp/utility/optional")  
[optional::operator->optional::operator*](operator*.html "cpp/utility/optional/operator*")  
[optional::operator booloptional::has_value](operator_bool.html "cpp/utility/optional/operator bool")  
[optional::value](value.html "cpp/utility/optional/value")  
[optional::value_or](value_or.html "cpp/utility/optional/value or")  
[Iterators](../optional.html#Iterators "cpp/utility/optional")  
[optional::begin](begin.html "cpp/utility/optional/begin")(C++26)  
[optional::end](end.html "cpp/utility/optional/end")(C++26)  
[Monadic operations](../optional.html#Monadic_operations "cpp/utility/optional")  
[optional::and_then](and_then.html "cpp/utility/optional/and then")(C++23)  
[optional::transform](transform.html "cpp/utility/optional/transform")(C++23)  
[optional::or_else](or_else.html "cpp/utility/optional/or else")(C++23)  
[Modifiers](../optional.html#Modifiers "cpp/utility/optional")  
[optional::emplace](emplace.html "cpp/utility/optional/emplace")  
[optional::swap](swap.html "cpp/utility/optional/swap")  
[optional::reset](reset.html "cpp/utility/optional/reset")  
[Non-member functions](../optional.html#Non-member_functions "cpp/utility/optional")  
**operator== operator!=operator<operator<=operator>operator>=operator<=>**(C++20)  
[make_optional](make_optional.html "cpp/utility/optional/make optional")  
[swap(std::optional)](swap2.html "cpp/utility/optional/swap2")  
[Deduction guides](deduction_guides.html "cpp/utility/optional/deduction guides")  
[Helper classes](../optional.html#Helper_classes "cpp/utility/optional")  
[hash<std::optional>](hash.html "cpp/utility/optional/hash")  
[nullopt_t](nullopt_t.html "cpp/utility/optional/nullopt t")  
[in_place_t](../in_place.html "cpp/utility/in place")  
[bad_optional_access](../bad_optional_access.html "cpp/utility/optional/bad optional access")  
[Helper objects](../optional.html#Helpers "cpp/utility/optional")  
[nullopt](nullopt.html "cpp/utility/optional/nullopt")  
[in_place](../in_place.html "cpp/utility/in place")  
  


Defined in header `[<optional>](../../header/optional.html "cpp/header/optional")` |  |   
---|---|---  
Compare two `optional` objects |  |   
template< class T, class U >  
constexpr bool operator==( const optional<T>& lhs, const optional<U>& rhs ); |  (1)  |  (since C++17)  
template< class T, class U >  
constexpr bool operator!=( const optional<T>& lhs, const optional<U>& rhs ); |  (2)  |  (since C++17)  
template< class T, class U >  
constexpr bool operator<( const optional<T>& lhs, const optional<U>& rhs ); |  (3)  |  (since C++17)  
template< class T, class U >  
constexpr bool operator<=( const optional<T>& lhs, const optional<U>& rhs ); |  (4)  |  (since C++17)  
template< class T, class U >  
constexpr bool operator>( const optional<T>& lhs, const optional<U>& rhs ); |  (5)  |  (since C++17)  
template< class T, class U >  
constexpr bool operator>=( const optional<T>& lhs, const optional<U>& rhs ); |  (6)  |  (since C++17)  
template< class T, [std::three_way_comparable_with](../compare/three_way_comparable.html)<T> U >  
constexpr [std::compare_three_way_result_t](../compare/compare_three_way_result.html)<T, U>  
operator<=>( const optional<T>& lhs, const optional<U>& rhs ); |  (7)  |  (since C++20)  
Compare an `optional` object with a `nullopt` |  |   
template< class T >  
constexpr bool operator==( const optional<T>& opt, [std::nullopt_t](nullopt_t.html) ) noexcept; |  (8)  |  (since C++17)  
template< class T >  
constexpr bool operator==( [std::nullopt_t](nullopt_t.html), const optional<T>& opt ) noexcept; |  (9)  |  (since C++17)   
(until C++20)  
template< class T >  
constexpr bool operator!=( const optional<T>& opt, [std::nullopt_t](nullopt_t.html) ) noexcept; |  (10)  |  (since C++17)   
(until C++20)  
template< class T >  
constexpr bool operator!=( [std::nullopt_t](nullopt_t.html), const optional<T>& opt ) noexcept; |  (11)  |  (since C++17)   
(until C++20)  
template< class T >  
constexpr bool operator<( const optional<T>& opt, [std::nullopt_t](nullopt_t.html) ) noexcept; |  (12)  |  (since C++17)   
(until C++20)  
template< class T >  
constexpr bool operator<( [std::nullopt_t](nullopt_t.html), const optional<T>& opt ) noexcept; |  (13)  |  (since C++17)   
(until C++20)  
template< class T >  
constexpr bool operator<=( const optional<T>& opt, [std::nullopt_t](nullopt_t.html) ) noexcept; |  (14)  |  (since C++17)   
(until C++20)  
template< class T >  
constexpr bool operator<=( [std::nullopt_t](nullopt_t.html), const optional<T>& opt ) noexcept; |  (15)  |  (since C++17)   
(until C++20)  
template< class T >  
constexpr bool operator>( const optional<T>& opt, [std::nullopt_t](nullopt_t.html) ) noexcept; |  (16)  |  (since C++17)   
(until C++20)  
template< class T >  
constexpr bool operator>( [std::nullopt_t](nullopt_t.html), const optional<T>& opt ) noexcept; |  (17)  |  (since C++17)   
(until C++20)  
template< class T >   
constexpr bool operator>=( const optional<T>& opt, [std::nullopt_t](nullopt_t.html) ) noexcept; |  (18)  |  (since C++17)   
(until C++20)  
template< class T >   
constexpr bool operator>=( [std::nullopt_t](nullopt_t.html), const optional<T>& opt ) noexcept; |  (19)  |  (since C++17)   
(until C++20)  
template< class T >  
constexpr [std::strong_ordering](../compare/strong_ordering.html)  
operator<=>( const optional<T>& opt, [std::nullopt_t](nullopt_t.html) ) noexcept; |  (20)  |  (since C++20)  
Compare an `optional` object with a value |  |   
template< class T, class U >  
constexpr bool operator==( const optional<T>& opt, const U& value ); |  (21)  |  (since C++17)  
template< class U, class T >  
constexpr bool operator==( const U& value, const optional<T>& opt ); |  (22)  |  (since C++17)  
template< class T, class U >  
constexpr bool operator!=( const optional<T>& opt, const U& value ); |  (23)  |  (since C++17)  
template< class U, class T >  
constexpr bool operator!=( const U& value, const optional<T>& opt ); |  (24)  |  (since C++17)  
template< class T, class U >  
constexpr bool operator<( const optional<T>& opt, const U& value ); |  (25)  |  (since C++17)  
template< class U, class T >  
constexpr bool operator<( const U& value, const optional<T>& opt ); |  (26)  |  (since C++17)  
template< class T, class U >  
constexpr bool operator<=( const optional<T>& opt, const U& value ); |  (27)  |  (since C++17)  
template< class U, class T >  
constexpr bool operator<=( const U& value, const optional<T>& opt ); |  (28)  |  (since C++17)  
template< class T, class U >  
constexpr bool operator>( const optional<T>& opt, const U& value ); |  (29)  |  (since C++17)  
template< class U, class T >  
constexpr bool operator>( const U& value, const optional<T>& opt ); |  (30)  |  (since C++17)  
template< class T, class U >  
constexpr bool operator>=( const optional<T>& opt, const U& value ); |  (31)  |  (since C++17)  
template< class U, class T >  
constexpr bool operator>=( const U& value, const optional<T>& opt ); |  (32)  |  (since C++17)  
template< class T, [std::three_way_comparable_with](../compare/three_way_comparable.html)<T> U >  
constexpr [std::compare_three_way_result_t](../compare/compare_three_way_result.html)<T, U>  
operator<=>( const optional<T>& opt, const U& value ); |  (33)  |  (since C++20)  
| |   
  
Performs comparison operations on `optional` objects. 

1-7) Compares two `optional` objects, lhs and rhs. The contained values are compared (using the corresponding operator of `T`) only if both lhs and rhs contain values. Otherwise, 

  * lhs is considered _equal to_ rhs if, and only if, both lhs and rhs do not contain a value. 
  * lhs is considered _less than_ rhs if, and only if, rhs contains a value and lhs does not.



1-6) Let @ denote the corresponding comparison operator, for each of these functions:  If the corresponding expression *lhs @ *rhs is ill-formed or its result is not convertible to bool, the program is ill-formed.  | (until C++26)  
---|---  
This overload participates in overload resolution only if the corresponding expression *lhs @ *rhs is well-formed and its result is convertible to bool.  | (since C++26)  
  
8-20) Compares opt with a `nullopt`. Equivalent to (1-6) when comparing to an `optional` that does not contain a value.  The `<`, `<=`, `>`, `>=`, and `!=` operators are [synthesized](../../language/operators.html#Comparison_operators "cpp/language/operators") from operator<=> and operator== respectively.  | (since C++20)  
---|---  
  
21-33) Compares opt with a value. The values are compared (using the corresponding operator of `T`) only if opt contains a value. Otherwise, opt is considered _less than_ value.

21-32) Let @ denote the corresponding comparison operator, for each of these functions:  If the corresponding expression *opt @ value or value @ *opt (depending on the positions of the operands) is ill-formed or its result is not convertible to bool, the program is ill-formed.  | (until C++26)  
---|---  
This overload participates in overload resolution only if all following conditions are satisfied: 

  * `U` is not a specialization of [std::optional](../optional.html "cpp/utility/optional"). 
  * The corresponding expression *opt @ value or value @ *opt (depending on the positions of the operands) is well-formed and its result is convertible to bool. 

| (since C++26)  
  
## Contents

  * [1 Parameters](operator_cmp.html#Parameters)
  * [2 Return value](operator_cmp.html#Return_value)
  * [3 Exceptions](operator_cmp.html#Exceptions)
  * [4 Notes](operator_cmp.html#Notes)
  * [5 Defect reports](operator_cmp.html#Defect_reports)

  
---  
  
### Parameters

lhs, rhs, opt  |  \-  |  an `optional` object to compare   
---|---|---  
value  |  \-  |  value to compare to the contained value   
  
### Return value

1) lhs.has_value() != rhs.has_value() ? false :  
(lhs.has_value() == false ? true : *lhs == *rhs)

2) lhs.has_value() != rhs.has_value() ? true :  
(lhs.has_value() == false ? false : *lhs != *rhs)

3) !rhs ? false : (!lhs ? true : *lhs < *rhs)

4) !lhs ? true : (!rhs ? false : *lhs <= *rhs)

5) !lhs ? false : (!rhs ? true : *lhs > *rhs)

6) !rhs ? true : (!lhs ? false : *lhs >= *rhs)

7) lhs && rhs ? *lhs <=> *rhs : lhs.has_value() <=> rhs.has_value()

8,9) !opt

10,11) opt.has_value()

12) false

13) opt.has_value()

14) !opt

15) true

16) opt.has_value()

17) false

18) true

19) !opt

20) opt.has_value() <=> false

21) opt.has_value() ? *opt == value : false

22) opt.has_value() ? value == *opt : false

23) opt.has_value() ? *opt != value : true

24) opt.has_value() ? value != *opt : true

25) opt.has_value() ? *opt < value : true

26) opt.has_value() ? value < *opt : false

27) opt.has_value() ? *opt <= value : true

28) opt.has_value() ? value <= *opt : false

29) opt.has_value() ? *opt > value : false

30) opt.has_value() ? value > *opt : true

31) opt.has_value() ? *opt >= value : false

32) opt.has_value() ? value >= *opt : true

33) opt.has_value() ? *opt <=> value : std::strong_ordering::less

### Exceptions

1-7) May throw implementation-defined exceptions.

21-33) Throws when and what the comparison throws.

### Notes

[Feature-test](../feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_constrained_equality`](../../experimental/feature_test.html#cpp_lib_constrained_equality "cpp/feature test") | [`202403L`](../../compiler_support/26.html#cpp_lib_constrained_equality_202403L "cpp/compiler support/26") | (C++26) | constrained comparison operators for [std::optional](../optional.html "cpp/utility/optional")  
  
### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2945](https://cplusplus.github.io/LWG/issue2945) | C++17  | order of template parameters inconsistent for compare-with-T cases  | made consistent 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
