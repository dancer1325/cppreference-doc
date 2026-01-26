 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
**expected::and_then**  
[expected::or_else](or_else.html "cpp/utility/expected/or else")  
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
  


Main template |  |   
---|---|---  
template< class F >  
constexpr auto and_then( F&& f ) &; |  (1) | (since C++23)  
template< class F >  
constexpr auto and_then( F&& f ) const&; |  (2)  |  (since C++23)  
template< class F >  
constexpr auto and_then( F&& f ) &&; |  (3) | (since C++23)  
template< class F >  
constexpr auto and_then( F&& f ) const&&; |  (4)  |  (since C++23)  
void partial specialization |  |   
template< class F >  
constexpr auto and_then( F&& f ) &; |  (5) | (since C++23)  
template< class F >  
constexpr auto and_then( F&& f ) const&; |  (6)  |  (since C++23)  
template< class F >  
constexpr auto and_then( F&& f ) &&; |  (7) | (since C++23)  
template< class F >  
constexpr auto and_then( F&& f ) const&&; |  (8)  |  (since C++23)  
| |   
  
If *this represents an expected value, invokes f and returns its result. Otherwise, returns a `std::expected` object that contains an unexpected value, which is initialized with the unexpected value of *this. 

1-4) f is invoked with the expected value [`_val_`](../expected.html#Data_members "cpp/utility/expected") as the argument.

5-8) f is invoked without any argument.

Given type `U` as: 

1,2) [std::remove_cvref_t](../../types/remove_cvref.html)<[std::invoke_result_t](../../types/result_of.html)<F, decltype((`_val_`))>>

3,4) [std::remove_cvref_t](../../types/remove_cvref.html)<[std::invoke_result_t](../../types/result_of.html)<F, decltype(std::move(`_val_`))>>

5-8) [std::remove_cvref_t](../../types/remove_cvref.html)<[std::invoke_result_t](../../types/result_of.html)<F>>

If `U` is not a specialization of `std::expected`, or [std::is_same_v](../../types/is_same.html)<U::error_type, E> is false, the program is ill-formed. 

1,2) These overloads participate in overload resolution only if [std::is_constructible_v](../../types/is_constructible.html)<E, decltype(error())> is true.

3,4) These overloads participate in overload resolution only if [std::is_constructible_v](../../types/is_constructible.html)<E, decltype(std::move(error()))> is true.

5,6) These overloads participate in overload resolution only if [std::is_constructible_v](../../types/is_constructible.html)<E, decltype(error())> is true.

7,8) These overloads participate in overload resolution only if [std::is_constructible_v](../../types/is_constructible.html)<E, decltype(std::move(error()))> is true.

## Contents

  * [1 Parameters](and_then.html#Parameters)
  * [2 Return value](and_then.html#Return_value)
  * [3 Notes](and_then.html#Notes)
  * [4 Example](and_then.html#Example)
  * [5 Defect reports](and_then.html#Defect_reports)
  * [6 See also](and_then.html#See_also)

  
---  
  
### Parameters

f  |  \-  |  a suitable function or [Callable](../../named_req/Callable.html "cpp/named req/Callable") object that returns a std::expected  
---|---|---  
  
### Return value

Overload  | Value of [`has_value()`](operator_bool.html "cpp/utility/expected/operator bool")  
---|---  
true | false  
([1,2](and_then.html#Version_1)) | [std::invoke](../functional/invoke.html)([std::forward](../forward.html)<F>(f),` `` _val_`) | U([std::unexpect](unexpect_t.html), error())  
([3,4](and_then.html#Version_3)) | [std::invoke](../functional/invoke.html)([std::forward](../forward.html)<F>(f),std::move(`_val_`)) | U([std::unexpect](unexpect_t.html), std::move(error()))  
([5,6](and_then.html#Version_5)) | [std::invoke](../functional/invoke.html)([std::forward](../forward.html)<F>(f)) | U([std::unexpect](unexpect_t.html), error())  
([7,8](and_then.html#Version_7)) | U([std::unexpect](unexpect_t.html), std::move(error()))  
  
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
[LWG 3938](https://cplusplus.github.io/LWG/issue3938) | C++23  | the expected value was obtained by value()[[1]](and_then.html#cite_note-1) | changed to **this  
[LWG 3973](https://cplusplus.github.io/LWG/issue3973) | C++23  | the expected value was obtained by **this[[2]](and_then.html#cite_note-2) | changed to [`_val_`](../expected.html#Data_members "cpp/utility/expected")  
  
  1. [↑](and_then.html#cite_ref-1) [`value()`](value.html "cpp/utility/expected/value") requires `E` to be copy constructible (see [LWG issue 3843](https://cplusplus.github.io/LWG/issue3843)), where [`operator*`](operator*.html "cpp/utility/expected/operator*") does not.
  2. [↑](and_then.html#cite_ref-2) **this can trigger [argument-dependent lookup](../../language/adl.html "cpp/language/adl").



### See also

[ unexpectunexpect_t](unexpect_t.html "cpp/utility/expected/unexpect t")(C++23) |  in-place construction tag for unexpected value in `expected`  
(tag)  
---|---  
[ transform](transform.html "cpp/utility/expected/transform") |  returns an `expected` containing the transformed expected value if it exists; otherwise, returns the `expected` itself   
(public member function) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
