 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
**expected::transform_error**  
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
constexpr auto transform_error( F&& f ) &; |  (1) | (since C++23)  
template< class F >  
constexpr auto transform_error( F&& f ) const&; |  (2) | (since C++23)  
template< class F >  
constexpr auto transform_error( F&& f ) &&; |  (3) | (since C++23)  
template< class F >  
constexpr auto transform_error( F&& f ) const&&; |  (4) | (since C++23)  
void partial specialization |  |   
template< class F >  
constexpr auto transform_error( F&& f ) &; |  (5) | (since C++23)  
template< class F >  
constexpr auto transform_error( F&& f ) const&; |  (6) | (since C++23)  
template< class F >  
constexpr auto transform_error( F&& f ) &&; |  (7) | (since C++23)  
template< class F >  
constexpr auto transform_error( F&& f ) const&&; |  (8) | (since C++23)  
| |   
  
If *this contains an unexpected value, invokes f with the unexpected value of *this as the argument and returns a `std::expected` object that contains an unexpected value, which is initialized with the result of f. Otherwise, returns a `std::expected` object that represents an expected value. 

1-4) The expected value is initialized with the expected value [`_val_`](../expected.html#Data_members "cpp/utility/expected") of *this.

Given type `G` as: 

1,2) [std::remove_cv_t](../../types/remove_cv.html)<[std::invoke_result_t](../../types/result_of.html)<F, decltype(error())>>

3,4) [std::remove_cv_t](../../types/remove_cv.html)<[std::invoke_result_t](../../types/result_of.html)<F, decltype(std::move(error()))>>

5,6) [std::remove_cv_t](../../types/remove_cv.html)<[std::invoke_result_t](../../types/result_of.html)<F, decltype(error())>>

7,8) [std::remove_cv_t](../../types/remove_cv.html)<[std::invoke_result_t](../../types/result_of.html)<F, decltype(std::move(error()))>>

If any of the following conditions is satisfied, the program is ill-formed: 

  * `G` is not a valid template argument for [`std::unexpected`](unexpected.html "cpp/utility/expected/unexpected"). 
  * The following corresponding declaration is ill-formed: 



1,2) G g([std::invoke](../functional/invoke.html)([std::forward](../forward.html)<F>(f), error()));

3,4) G g([std::invoke](../functional/invoke.html)([std::forward](../forward.html)<F>(f), std::move(error()));

5,6) G g([std::invoke](../functional/invoke.html)([std::forward](../forward.html)<F>(f), error()));

7,8) G g([std::invoke](../functional/invoke.html)([std::forward](../forward.html)<F>(f), std::move(error()));

  


1,2) This overload participates in overload resolution only if [std::is_constructible_v](../../types/is_constructible.html)<T, decltype((`_val_`))> is true.

3,4) This overload participates in overload resolution only if [std::is_constructible_v](../../types/is_constructible.html)<T, decltype(std::move(`_val_`))> is true.

## Contents

  * [1 Parameters](transform_error.html#Parameters)
  * [2 Return value](transform_error.html#Return_value)
  * [3 Example](transform_error.html#Example)
  * [4 Defect reports](transform_error.html#Defect_reports)
  * [5 See also](transform_error.html#See_also)

  
---  
  
### Parameters

f  |  \-  |  a suitable function or [Callable](../../named_req/Callable.html "cpp/named req/Callable") object whose call signature returns a non-reference type   
---|---|---  
  
### Return value

Given expression expr as: 

1,2) [std::invoke](../functional/invoke.html)([std::forward](../forward.html)<F>(f), error())

3,4) [std::invoke](../functional/invoke.html)([std::forward](../forward.html)<F>(f), std::move(error()))

5,6) [std::invoke](../functional/invoke.html)([std::forward](../forward.html)<F>(f), error())

7,8) [std::invoke](../functional/invoke.html)([std::forward](../forward.html)<F>(f), std::move(error()))

The return values are defined as follows: 

Overload  | Value of [`has_value()`](operator_bool.html "cpp/utility/expected/operator bool")  
---|---  
true | false  
([1,2](transform_error.html#Version_1)) | [std::expected](../expected.html)<T, G>([std::in_place](../in_place.html),` `` _val_`) | [std::expected](../expected.html)<T, G>  
([std::unexpect](unexpect_t.html), expr)  
([3,4](transform_error.html#Version_3)) | [std::expected](../expected.html)<T, G>([std::in_place](../in_place.html), std::move(`_val_`))  
([5,6](transform_error.html#Version_5)) | [std::expected](../expected.html)<T, G>()  
([7,8](transform_error.html#Version_7))  
  
### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3938](https://cplusplus.github.io/LWG/issue3938) | C++23  | the expected value was obtained by value()[[1]](transform_error.html#cite_note-1) | changed to **this  
[LWG 3973](https://cplusplus.github.io/LWG/issue3973) | C++23  | the expected value was obtained by **this[[2]](transform_error.html#cite_note-2) | changed to [`_val_`](../expected.html#Data_members "cpp/utility/expected")  
  
  1. [↑](transform_error.html#cite_ref-1) [`value()`](value.html "cpp/utility/expected/value") requires `E` to be copy constructible (see [LWG issue 3843](https://cplusplus.github.io/LWG/issue3843)), where [`operator*`](operator*.html "cpp/utility/expected/operator*") does not.
  2. [↑](transform_error.html#cite_ref-2) **this can trigger [argument-dependent lookup](../../language/adl.html "cpp/language/adl").



### See also

[ or_else](or_else.html "cpp/utility/expected/or else") |  returns the `expected` itself if it contains an expected value; otherwise, returns the result of the given function on the unexpected value   
(public member function)   
---|---  
[ transform](transform.html "cpp/utility/expected/transform") |  returns an `expected` containing the transformed expected value if it exists; otherwise, returns the `expected` itself   
(public member function) 
