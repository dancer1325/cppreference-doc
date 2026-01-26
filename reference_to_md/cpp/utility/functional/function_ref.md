 
  


  
  
  
  
  
  
  
  
  
  
  
  


[Function objects](../../functional.html "cpp/utility/functional")

| [Function wrappers](../../functional.html#Function_wrappers "cpp/utility/functional")  
---  
[function](function.html "cpp/utility/functional/function")(C++11)  
[move_only_function](move_only_function.html "cpp/utility/functional/move only function")(C++23)  
[copyable_function](copyable_function.html "cpp/utility/functional/copyable function")(C++26)  
**function_ref**(C++26)  
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
  
  
  
  
  
  
  


**`std::function_ref`**

[Member functions](function_ref.html#Member_functions "cpp/utility/functional/function ref")  
---  
[function_ref::function_ref](function_ref/function_ref.html "cpp/utility/functional/function ref/function ref")  
[function_ref::operator=](function_ref/operator=.html "cpp/utility/functional/function ref/operator=")  
[function_ref::operator()](function_ref/operator\(\).html "cpp/utility/functional/function ref/operator\(\)")  
[Deduction guides](function_ref/deduction_guides.html "cpp/utility/functional/function ref/deduction guides")  
  


Defined in header `[<functional>](../../header/functional.html "cpp/header/functional")` |  |   
---|---|---  
template< class... >  
class function_ref; // not defined |  (1)  |  (since C++26)  
template< class R, class... Args >  
class function_ref<R(Args...)>;  
template< class R, class... Args >  
class function_ref<R(Args...) noexcept>;  
template< class R, class... Args >  
class function_ref<R(Args...) const>;  
template< class R, class... Args >  
class function_ref<R(Args...) const noexcept>; |  (2)  |  (since C++26)  
| |   
  
Class template `std::function_ref` is a non-owning function wrapper. `std::function_ref` objects can store and invoke reference to [Callable](../../named_req/Callable.html "cpp/named req/Callable") _target_ \- functions, [lambda expressions](../../language/lambda.html "cpp/language/lambda"), [bind expressions](bind.html "cpp/utility/functional/bind"), or other function objects, but not pointers to member functions and pointers to member objects. [std::nontype](../nontype.html) can be used to construct `std::function_ref` by passing function pointers, pointers to member functions, and pointers to member objects. 

`std::function_ref`s supports every possible combination of [cv-qualifiers](../../language/member_functions.html#Member_functions_with_cv-qualifiers "cpp/language/member functions") (excluding volatile), and [noexcept-specifiers](../../language/noexcept_spec.html "cpp/language/noexcept spec") provided in its template parameter. 

Every specialization of `std::function_ref` is a [TriviallyCopyable](../../named_req/TriviallyCopyable.html "cpp/named req/TriviallyCopyable") type that satisfies [`copyable`](../../concepts/copyable.html "cpp/concepts/copyable"). 

## Contents

  * [1 Member types](function_ref.html#Member_types)
  * [2 Data members](function_ref.html#Data_members)
  * [3 Member functions](function_ref.html#Member_functions)
  * [4 Deduction guides](function_ref.html#Deduction_guides)
  * [5 Notes](function_ref.html#Notes)
  * [6 Example](function_ref.html#Example)
  * [7 See also](function_ref.html#See_also)

  
---  
  
### Member types

Member  |  Definition   
---|---  
`_BoundEntityType_` (private) |  unspecified [TriviallyCopyable](../../named_req/TriviallyCopyable.html "cpp/named req/TriviallyCopyable") type that satisfies [`copyable`](../../concepts/copyable.html "cpp/concepts/copyable") and is capable of storing a pointer to object value or pointer to function value  
(exposition-only member type*)  
`_FunctionPointerType_` (private) |  R(*)(`_BoundEntityType_` ﻿, Args&&...) noexcept(noex ﻿) where noex is true if noexcept is present in function signature as part of the template parameter of `std::function_ref`, false otherwise  
(exposition-only member type*)  
  
### Data members

Member  |  Definition   
---|---  
`_BoundEntityType_` `_bound-entity_` |  a bound entity object  
(exposition-only member object*)  
`_FunctionPointerType_` `_thunk-ptr_` |  a stored pointer to function  
(exposition-only member object*)  
  
### Member functions

[ (constructor)](function_ref/function_ref.html "cpp/utility/functional/function ref/function ref") |  constructs a new `function_ref` object   
(public member function)   
---|---  
[ operator=](function_ref/operator=.html "cpp/utility/functional/function ref/operator=") |  assigns a `function_ref`   
(public member function)   
[ operator()](function_ref/operator\(\).html "cpp/utility/functional/function ref/operator\(\)") |  invokes the stored thunk of a `function_ref`   
(public member function) &action=edit)  
  
### [Deduction guides](function_ref/deduction_guides.html "cpp/utility/functional/function ref/deduction guides")

### Notes

[Feature-test](../feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_function_ref`](../../experimental/feature_test.html#cpp_lib_function_ref "cpp/feature test") | [`202306L`](../../compiler_support/26.html#cpp_lib_function_ref_202306L "cpp/compiler support/26") | (C++26) | `std::function_ref`  
  
### Example

| This section is incomplete  
Reason: example   
---|---  
  
### See also

[ function](function.html "cpp/utility/functional/function")(C++11) |  copyable wrapper of any copy constructible callable object   
(class template)   
---|---  
[ copyable_function](copyable_function.html "cpp/utility/functional/copyable function")(C++26) |  copyable wrapper of any copy constructible callable object that supports qualifiers in a given call signature   
(class template)   
[ move_only_function](move_only_function.html "cpp/utility/functional/move only function")(C++23) |  move-only wrapper of any callable object that supports qualifiers in a given call signature   
(class template)   
[ nontype  nontype_t](../nontype.html "cpp/utility/nontype")(C++26) |  value construction tag   
(tag)
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
