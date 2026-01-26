 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
**expected::or_else**  
[expected::transform](transform.html "cpp/utility/expected/transform")  
[expected::transform_error](transform_error.html "cpp/utility/expected/transform error")  
[Modifiers](../expected.html#Modifiers "cpp/utility/expected")  
[expected::emplace](emplace.html "cpp/utility/expected/emplace")  
[expected::swap](swap.html "cpp/utility/expected/swap")  
[Non-member functions](../expected.html#Non-member_functions "cpp/utility/expected")  
[operator==(std::expected)](operator_cmp.html "cpp/utility/expected/operator cmp")  
[swap(std::expected)](swap2.html "cpp/utility/expected/swap2")  
[Helper classes](../expected.html#Helper_classes "cpp/utility/expected")  
[unexpected](unexpected.html "cpp/utility/expected/unexpected")  
[bad_expected_access](bad_expected_access.html "cpp/utility/expected/bad expected access")  
[unexpect_tunexpect](unexpect_t.html "cpp/utility/expected/unexpect t")  
  


Primary template |  |   
---|---|---  
template< class F >  
constexpr auto or_else( F&& f ) &; |  (1) | (since C++23)  
template< class F >  
constexpr auto or_else( F&& f ) const&; |  (2) | (since C++23)  
template< class F >  
constexpr auto or_else( F&& f ) &&; |  (3) | (since C++23)  
template< class F >  
constexpr auto or_else( F&& f ) const&&; |  (4) | (since C++23)  
void partial specialization |  |   
template< class F >  
constexpr auto or_else( F&& f ) &; |  (5) | (since C++23)  
template< class F >  
constexpr auto or_else( F&& f ) const&; |  (6) | (since C++23)  
template< class F >  
constexpr auto or_else( F&& f ) &&; |  (7) | (since C++23)  
template< class F >  
constexpr auto or_else( F&& f ) const&&; |  (8) | (since C++23)  
| |   
  
If *this contains an unexpected value, invokes f with the unexpected value of *this as the argument and returns its result. Otherwise, returns a `std::expected` object that represents an expected value. 

1-4) The expected value is initialized with the expected value [`_val_`](../expected.html#Data_members "cpp/utility/expected") of *this.

Given type `G` as: 

1,2) [std::remove_cvref_t](../../types/remove_cvref.html)<[std::invoke_result_t](../../types/result_of.html)<F, decltype(error())>>

3,4) [std::remove_cvref_t](../../types/remove_cvref.html)<[std::invoke_result_t](../../types/result_of.html)<F, decltype(std::move(error()))>>

5,6) [std::remove_cvref_t](../../types/remove_cvref.html)<[std::invoke_result_t](../../types/result_of.html)<F, decltype(error())>>

7,8) [std::remove_cvref_t](../../types/remove_cvref.html)<[std::invoke_result_t](../../types/result_of.html)<F, decltype(std::move(error()))>>

If `G` is not a specialization of `std::expected`, or [std::is_same_v](../../types/is_same.html)<G::value_type, T> is false, the program is ill-formed. 

1,2) These overloads participate in overload resolution only if [std::is_constructible_v](../../types/is_constructible.html)<T, decltype((`_val_`))> is true.

3,4) These overloads participate in overload resolution only if [std::is_constructible_v](../../types/is_constructible.html)<T, decltype(std::move(`_val_`))> is true.

## Contents

  * [1 Parameters](or_else.html#Parameters)
  * [2 Return value](or_else.html#Return_value)
  * [3 Notes](or_else.html#Notes)
  * [4 Example](or_else.html#Example)
  * [5 Defect reports](or_else.html#Defect_reports)
  * [6 See also](or_else.html#See_also)

  
---  
  
### Parameters

f  |  \-  |  a suitable function or [Callable](../../named_req/Callable.html "cpp/named req/Callable") object that returns a `std::expected`  
---|---|---  
  
### Return value

Overload  | Value of [`has_value()`](operator_bool.html "cpp/utility/expected/operator bool")  
---|---  
true | false  
([1,2](or_else.html#Version_1)) | G([std::in_place](../in_place.html),` `` _val_`) | [std::invoke](../functional/invoke.html)([std::forward](../forward.html)<F>(f), error())  
([3,4](or_else.html#Version_3)) | G([std::in_place](../in_place.html), std::move(`_val_`)) | [std::invoke](../functional/invoke.html)([std::forward](../forward.html)<F>(f), std::move(error()))  
([5,6](or_else.html#Version_5)) | G() | [std::invoke](../functional/invoke.html)([std::forward](../forward.html)<F>(f), error())  
([7,8](or_else.html#Version_7)) | [std::invoke](../functional/invoke.html)([std::forward](../forward.html)<F>(f), std::move(error()))  
  
### Notes

[Feature-test](../feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_expected`](../../experimental/feature_test.html#cpp_lib_expected "cpp/feature test") | [`202211L`](../../compiler_support/23.html#cpp_lib_expected_202211L "cpp/compiler support/23") | (C++23) | Monadic functions for `std::expected`  
  
### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3938](https://cplusplus.github.io/LWG/issue3938) | C++23  | the expected value was obtained by value()[[1]](or_else.html#cite_note-1) | changed to **this  
[LWG 3973](https://cplusplus.github.io/LWG/issue3973) | C++23  | the expected value was obtained by **this[[2]](or_else.html#cite_note-2) | changed to [`_val_`](../expected.html#Data_members "cpp/utility/expected")  
  
  1. [↑](or_else.html#cite_ref-1) [`value()`](value.html "cpp/utility/expected/value") requires `E` to be copy constructible (see [LWG issue 3843](https://cplusplus.github.io/LWG/issue3843)), where [`operator*`](operator*.html "cpp/utility/expected/operator*") does not.
  2. [↑](or_else.html#cite_ref-2) **this can trigger [argument-dependent lookup](../../language/adl.html "cpp/language/adl").



### See also

[ transform_error](transform_error.html "cpp/utility/expected/transform error") |  returns the `expected` itself if it contains an expected value; otherwise, returns an `expected` containing the transformed unexpected value   
(public member function)   
---|---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
