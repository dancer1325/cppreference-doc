 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::expected`](../expected.html "cpp/utility/expected")

[Member functions](../expected.html#Member_functions "cpp/utility/expected")  
---  
[expected::expected](expected.html "cpp/utility/expected/expected")  
[expected::~expected](~expected.html "cpp/utility/expected/~expected")  
[expected::operator=](operator=.html "cpp/utility/expected/operator=")  
[Observers](../expected.html#Observers "cpp/utility/expected")  
[expected::operator->expected::operator*](operator*.html "cpp/utility/expected/operator*")  
[expected::operator boolexpected::has_value](operator_bool.html "cpp/utility/expected/operator bool")  
[expected::value](value.html "cpp/utility/expected/value")  
[expected::error](error.html "cpp/utility/expected/error")  
[expected::value_or](value_or.html "cpp/utility/expected/value or")  
[expected::error_or](error_or.html "cpp/utility/expected/error or")  
[Monadic operations](../expected.html#Monadic_operations "cpp/utility/expected")  
[expected::and_then](and_then.html "cpp/utility/expected/and then")  
[expected::or_else](or_else.html "cpp/utility/expected/or else")  
[expected::transform](transform.html "cpp/utility/expected/transform")  
[expected::transform_error](transform_error.html "cpp/utility/expected/transform error")  
[Modifiers](../expected.html#Modifiers "cpp/utility/expected")  
[expected::emplace](emplace.html "cpp/utility/expected/emplace")  
[expected::swap](swap.html "cpp/utility/expected/swap")  
[Non-member functions](../expected.html#Non-member_functions "cpp/utility/expected")  
**operator==(std::expected)**  
[swap(std::expected)](swap2.html "cpp/utility/expected/swap2")  
[Helper classes](../expected.html#Helper_classes "cpp/utility/expected")  
[unexpected](unexpected.html "cpp/utility/expected/unexpected")  
[bad_expected_access](bad_expected_access.html "cpp/utility/expected/bad expected access")  
[unexpect_tunexpect](unexpect_t.html "cpp/utility/expected/unexpect t")  
  


Primary template |  |   
---|---|---  
template< class T2, class E2 >  
requires (![std::is_void_v](../../types/is_void.html)<T2>)  
friend constexpr bool operator==( const expected& lhs,  
const [std::expected](../expected.html)<T2, E2>& rhs ); |  (1)  |  (since C++23)  
template< class E2 >  
friend constexpr bool operator==( const expected& lhs,  
const [std::unexpected](unexpected.html)<E2>& unex ); |  (2)  |  (since C++23)  
template< class T2 >  
friend constexpr bool operator==( const expected& lhs, const T2& val ); |  (3)  |  (since C++23)  
void partial specialization |  |   
template< class T2, class E2 >  
requires [std::is_void_v](../../types/is_void.html)<T2>  
friend constexpr bool operator==( const expected& lhs,  
const [std::expected](../expected.html)<T2, E2>& rhs ); |  (4)  |  (since C++23)  
template< class E2 >  
friend constexpr bool operator==( const expected& lhs,  
const [std::unexpected](unexpected.html)<E2>& unex ); |  (5)  |  (since C++23)  
| |   
  
Performs comparison operations on std::expected objects. 

1) Compares two std::expected objects. The objects compare equal if and only if both lhs and rhs contain expected values that are equal, or both contain unexpected values that are equal.  If any of the following expressions is ill-formed, or its result is not convertible to bool, the program is ill-formed:  | (until C++26)  
---|---  
This overload participates in overload resolution only if all following expressions is well-formed, and their results are convertible to bool:  | (since C++26)  
  
  * *lhs == *rhs
  * lhs.error() == rhs.error()



2) Compares std::expected object with an [std::unexpected](../../error/unexpected.html "cpp/error/unexpected") object. The objects compare equal if and only if lhs contains an unexpected value that is equal to unex.error().  If the expression lhs.error() == unex.error() is ill-formed, or its result is not convertible to bool, the program is ill-formed.  | (until C++26)  
---|---  
This overload participates in overload resolution only if the expression lhs.error() == unex.error() is well-formed, and its result is convertible to bool.  | (since C++26)  
  
3) Compares std::expected object with an expected value. The objects compare equal if and only if lhs contains an expected value that is equal to val.  If the expression *lhs == val is ill-formed, or its result is not convertible to bool, the program is ill-formed.  | (until C++26)  
---|---  
This overload participates in overload resolution only if all following conditions are satisfied: 

  * `T2` is not a specialization of std::expected. 
  * The expression *lhs == val is well-formed, and its result is convertible to bool. 

| (since C++26)  
  
4) Compares two std::expected objects. The objects compare equal if and only if lhs and rhs both represent expected values, or both contain unexpected values that are equal.  If the expression lhs.error() == rhs.error() is ill-formed, or its result is not convertible to bool, the program is ill-formed.  | (until C++26)  
---|---  
This overload participates in overload resolution only if the expression lhs.error() == rhs.error() is well-formed, and its result is convertible to bool.  | (since C++26)  
  
5) Compares std::expected object with an [std::unexpected](../../error/unexpected.html "cpp/error/unexpected") object. The objects compare equal if and only if lhs contains an unexpected value that is equal to unex.error().  If the expression lhs.error() == unex.error() is ill-formed, or its result is not convertible to bool, the program is ill-formed.  | (until C++26)  
---|---  
This overload participates in overload resolution only if the expression lhs.error() == unex.error() is well-formed, and its result is convertible to bool.  | (since C++26)  
  
These functions are not visible to ordinary [unqualified](../../language/unqualified_lookup.html "cpp/language/unqualified lookup") or [qualified lookup](../../language/qualified_lookup.html "cpp/language/qualified lookup"), and can only be found by [argument-dependent lookup](../../language/adl.html "cpp/language/adl") when `std::expected<T, E>` is an associated class of the arguments. 

The `!=` operator is [synthesized](../../language/default_comparisons.html#Other_defaulted_comparison_operators "cpp/language/default comparisons") from `operator==`. 

## Contents

  * [1 Parameters](operator_cmp.html#Parameters)
  * [2 Return value](operator_cmp.html#Return_value)
  * [3 Exceptions](operator_cmp.html#Exceptions)
  * [4 Notes](operator_cmp.html#Notes)
  * [5 Example](operator_cmp.html#Example)
  * [6 See also](operator_cmp.html#See_also)

  
---  
  
### Parameters

lhs, rhs  |  \-  |  std::expected object(s) to compare   
---|---|---  
unex  |  \-  |  [std::unexpected](../../error/unexpected.html "cpp/error/unexpected") value to compare to lhs  
val  |  \-  |  value to compare to the expected value contained in lhs  
  
### Return value

1)

lhs.has_value() != rhs.has_value() ? false :  
(lhs.has_value() ? *lhs == *rhs : lhs.error() == rhs.error())

2) !lhs.has_value() && static_cast<bool>(lhs.error() == unex.error())

3) lhs.has_value() && static_cast<bool>(*lhs == val)

4)

lhs.has_value() != rhs.has_value() ? false :  
lhs.has_value() || static_cast<bool>(lhs.error() == rhs.error())

5) !lhs.has_value() && static_cast<bool>(lhs.error() == unex.error())

### Exceptions

Throws when and what the comparison throws. 

### Notes

[Feature-test](../feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_constrained_equality`](../../experimental/feature_test.html#cpp_lib_constrained_equality "cpp/feature test") | [`202411L`](../../compiler_support/26.html#cpp_lib_constrained_equality_202411L "cpp/compiler support/26") | (C++26) | constrained comparison operators for std::expected  
  
### Example

Run this code
    
    
    #include <expected>
    #include <iostream>
    #include <string_view>
     
    using namespace std::string_view_literals;
     
    int main()
    {
        auto x1{"\N{GREEN HEART}"sv};
        auto x2{"\N{CROSS MARK}"sv};
        [std::expected](../expected.html)<[std::string_view](../../string/basic_string_view.html), int> e1{x1}, e2{x1}, e3{x2};
        [std::unexpected](unexpected.html) u1{13};
     
        [std::cout](../../io/cout.html) << "Overload (1):\n"
                  << e1.value() << (e1 == e2 ? " == " : " != ") << *e2 << '\n'
                  << e1.value() << (e1 != e3 ? " != " : " == ") << *e3 << "\n\n";
     
        [std::cout](../../io/cout.html) << "Overload (2):\n"
                  << e1.value() << (e1 == u1 ? " == " : " != ") << u1.error() << '\n';
        e1 = [std::unexpected](unexpected.html){13};
        [std::cout](../../io/cout.html) << e1.error() << (e1 == u1 ? " == " : " != ") << u1.error() << '\n';
        e1 = [std::unexpected](unexpected.html){31};
        [std::cout](../../io/cout.html) << e1.error() << (e1 != u1 ? " != " : " == ") << u1.error() << '\n';
     
        [std::cout](../../io/cout.html) << "Overload (3):\n"
                  << *e1 << (e1 == x1 ? " == " : " != ") << x1 << '\n'
                  << *e1 << (e1 != x2 ? " != " : " == ") << x2 << "\n\n";
    }

Output: 
    
    
    Overload (1):
    💚 == 💚
    💚 != ❌
     
    Overload (2):
    💚 != 13
    13 == 13
    31 != 13
     
    Overload (3):
    💚 == 💚
    💚 != ❌

### See also

[ operator==](unexpected.html#compare "cpp/utility/expected/unexpected")(C++23) |  compares [std::unexpected](../../error/unexpected.html "cpp/error/unexpected") objects   
(function template)  
---|---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
