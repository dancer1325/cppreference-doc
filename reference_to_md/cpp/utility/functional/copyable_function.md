 
  


  
  
  
  
  
  
  
  
  
  
  
  


[Function objects](../../functional.html "cpp/utility/functional")

| [Function wrappers](../../functional.html#Function_wrappers "cpp/utility/functional")  
---  
[function](function.html "cpp/utility/functional/function")(C++11)  
[move_only_function](move_only_function.html "cpp/utility/functional/move only function")(C++23)  
**copyable_function**(C++26)  
[function_ref](function_ref.html "cpp/utility/functional/function ref")(C++26)  
[mem_fn](mem_fn.html "cpp/utility/functional/mem fn")(C++11)  
[bad_function_call](bad_function_call.html "cpp/utility/functional/bad function call")(C++11)  
  
| [Partial function application](../../functional.html#Partial_function_application "cpp/utility/functional")  
---  
[bind_frontbind_back](bind_front.html "cpp/utility/functional/bind front")(C++20)(C++23)  
[bind](bind.html "cpp/utility/functional/bind")(C++11)  
[is_bind_expression](is_bind_expression.html "cpp/utility/functional/is bind expression")(C++11)  
[is_placeholder](is_placeholder.html "cpp/utility/functional/is placeholder")(C++11)  
[_1, _2, _3, ...](placeholders.html "cpp/utility/functional/placeholders")(C++11)  
  
| [Function invocation](../../functional.html#Function_invocation "cpp/utility/functional")  
---  
[invokeinvoke_r](invoke.html "cpp/utility/functional/invoke")(C++17)(C++23)  
Identity function object  
[identity](identity.html "cpp/utility/functional/identity")(C++20)  
  
| [Reference wrappers](../../functional.html#Reference_wrappers "cpp/utility/functional")  
---  
[reference_wrapper](reference_wrapper.html "cpp/utility/functional/reference wrapper")(C++11)  
[refcref](ref.html "cpp/utility/functional/ref")(C++11)(C++11)  
[unwrap_referenceunwrap_ref_decay](unwrap_reference.html "cpp/utility/functional/unwrap reference")(C++20)(C++20)  
  
| [Operator wrappers](../../functional.html#Operator_function_objects "cpp/utility/functional")  
---  
| [plus](plus.html "cpp/utility/functional/plus")  
---  
[minus](minus.html "cpp/utility/functional/minus")  
[negate](negate.html "cpp/utility/functional/negate")  
[multiplies](multiplies.html "cpp/utility/functional/multiplies")  
[divides](divides.html "cpp/utility/functional/divides")  
[modulus](modulus.html "cpp/utility/functional/modulus")  
[bit_and](bit_and.html "cpp/utility/functional/bit and")  
[bit_or](bit_or.html "cpp/utility/functional/bit or")  
[bit_not](bit_not.html "cpp/utility/functional/bit not")(C++14)  
[bit_xor](bit_xor.html "cpp/utility/functional/bit xor")  
  
| [equal_to](equal_to.html "cpp/utility/functional/equal to")  
---  
  
  
  
  
  
  
  


**`std::copyable_function`**

[Member functions](copyable_function.html#Member_functions "cpp/utility/functional/copyable function")  
---  
[copyable_function::copyable_function](copyable_function/copyable_function.html "cpp/utility/functional/copyable function/copyable function")  
[copyable_function::~copyable_function](copyable_function/~copyable_function.html "cpp/utility/functional/copyable function/~copyable function")  
[copyable_function::operator=](copyable_function/operator=.html "cpp/utility/functional/copyable function/operator=")  
[copyable_function::swap](copyable_function/swap.html "cpp/utility/functional/copyable function/swap")  
[copyable_function::operator bool](copyable_function/operator_bool.html "cpp/utility/functional/copyable function/operator bool")  
[copyable_function::operator()](copyable_function/operator\(\).html "cpp/utility/functional/copyable function/operator\(\)")  
[Non-member functions](copyable_function.html#Non-member_functions "cpp/utility/functional/copyable function")  
[operator==](copyable_function/operator==.html "cpp/utility/functional/copyable function/operator==")  
[swap(std::copyable_function)](copyable_function/swap2.html "cpp/utility/functional/copyable function/swap2")  
  


Defined in header `[<functional>](../../header/functional.html "cpp/header/functional")` |  |   
---|---|---  
template< class... >  
class copyable_function; // not defined |  (1)  |  (since C++26)  
template< class R, class... Args >  
class copyable_function<R(Args...)>;  
template< class R, class... Args >  
class copyable_function<R(Args...) noexcept>;  
template< class R, class... Args >  
class copyable_function<R(Args...) &>;  
template< class R, class... Args >  
class copyable_function<R(Args...) & noexcept>;  
template< class R, class... Args >  
class copyable_function<R(Args...) &&>;  
template< class R, class... Args >  
class copyable_function<R(Args...) && noexcept>;  
template< class R, class... Args >  
class copyable_function<R(Args...) const>;  
template< class R, class... Args >  
class copyable_function<R(Args...) const noexcept>;  
template< class R, class... Args >  
class copyable_function<R(Args...) const &>;  
template< class R, class... Args >  
class copyable_function<R(Args...) const & noexcept>;  
template< class R, class... Args >  
class copyable_function<R(Args...) const &&>;  
template< class R, class... Args >  
class copyable_function<R(Args...) const && noexcept>; |  (2)  |  (since C++26)  
| |   
  
Class template `std::copyable_function` is a general-purpose polymorphic function wrapper. `std::copyable_function` objects can store and invoke any [CopyConstructible](../../named_req/CopyConstructible.html "cpp/named req/CopyConstructible") [Callable](../../named_req/Callable.html "cpp/named req/Callable") _target_ — functions, [lambda expressions](../../language/lambda.html "cpp/language/lambda"), [bind expressions](bind.html "cpp/utility/functional/bind"), or other function objects, as well as pointers to member functions and pointers to member objects. 

The stored callable object is called the _target_ of `std::copyable_function`. If a `std::copyable_function` contains no target, it is called _empty_. Unlike [std::function](function.html "cpp/utility/functional/function"), invoking an _empty_ `std::copyable_function` results in undefined behavior. 

`std::copyable_function`s supports every possible combination of [cv-qualifiers](../../language/member_functions.html#Member_functions_with_cv-qualifiers "cpp/language/member functions") (not including volatile), [ref-qualifiers](../../language/member_functions.html#Member_functions_with_ref-qualifier "cpp/language/member functions"), and [noexcept-specifiers](../../language/noexcept_spec.html "cpp/language/noexcept spec") provided in its template parameter. These qualifiers and specifier (if any) are added to its [`operator()`](copyable_function/operator\(\).html "cpp/utility/functional/copyable function/operator\(\)"). 

`std::copyable_function` satisfies the requirements of [CopyConstructible](../../named_req/CopyConstructible.html "cpp/named req/CopyConstructible") and [CopyAssignable](../../named_req/CopyAssignable.html "cpp/named req/CopyAssignable"). 

## Contents

  * [1 Member types](copyable_function.html#Member_types)
  * [2 Member functions](copyable_function.html#Member_functions)
  * [3 Non-member functions](copyable_function.html#Non-member_functions)
  * [4 Notes](copyable_function.html#Notes)
  * [5 Example](copyable_function.html#Example)
  * [6 See also](copyable_function.html#See_also)

  
---  
  
### Member types

Type  |  Definition   
---|---  
`result_type` |  `R`  
  
### Member functions

[ (constructor)](copyable_function/copyable_function.html "cpp/utility/functional/copyable function/copyable function") |  constructs a new `std::copyable_function` object   
(public member function)   
---|---  
[ (destructor)](copyable_function/~copyable_function.html "cpp/utility/functional/copyable function/~copyable function") |  destroys a `std::copyable_function` object   
(public member function)   
[ operator=](copyable_function/operator=.html "cpp/utility/functional/copyable function/operator=") |  replaces or destroys the target   
(public member function)   
[ swap](copyable_function/swap.html "cpp/utility/functional/copyable function/swap") |  swaps the targets of two `std::copyable_function` objects   
(public member function)   
[ operator bool](copyable_function/operator_bool.html "cpp/utility/functional/copyable function/operator bool") |  checks if the `std::copyable_function` has a target   
(public member function)   
[ operator()](copyable_function/operator\(\).html "cpp/utility/functional/copyable function/operator\(\)") |  invokes the target   
(public member function) &action=edit)  
  
### Non-member functions

[ swap(std::copyable_function)](copyable_function/swap2.html "cpp/utility/functional/copyable function/swap2")(C++26) |  overloads the [std::swap](../swap.html "cpp/algorithm/swap") algorithm   
(function)   
---|---  
[ operator==](copyable_function/operator==.html "cpp/utility/functional/copyable function/operator==")(C++26) |  compares a `std::copyable_function` with nullptr   
(function)   
  
### Notes

Implementations may store a callable object of small size within the `std::copyable_function` object. Such small object optimization is effectively required for function pointers and [std::reference_wrapper](reference_wrapper.html "cpp/utility/functional/reference wrapper") specializations, and can only be applied to types `T` for which [std::is_nothrow_move_constructible_v](../../types/is_move_constructible.html)<T> is true. 

[Feature-test](../feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_copyable_function`](../../experimental/feature_test.html#cpp_lib_copyable_function "cpp/feature test") | [`202306L`](../../compiler_support/26.html#cpp_lib_copyable_function_202306L "cpp/compiler support/26") | (C++26) | `std::copyable_function`  
  
### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### See also

[ function](function.html "cpp/utility/functional/function")(C++11) |  copyable wrapper of any copy constructible callable object   
(class template)   
---|---  
[ move_only_function](move_only_function.html "cpp/utility/functional/move only function")(C++23) |  move-only wrapper of any callable object that supports qualifiers in a given call signature   
(class template)   
[ function_ref](function_ref.html "cpp/utility/functional/function ref")(C++26) |  non-owning wrapper of any callable object   
(class template) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
