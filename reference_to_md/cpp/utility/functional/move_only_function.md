 
  


  
  
  
  
  
  
  
  
  
  
  
  


[Function objects](../../functional.html "cpp/utility/functional")

| [Function wrappers](../../functional.html#Function_wrappers "cpp/utility/functional")  
---  
[function](function.html "cpp/utility/functional/function")(C++11)  
**move_only_function**(C++23)  
[copyable_function](copyable_function.html "cpp/utility/functional/copyable function")(C++26)  
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
  
  
  
  
  
  
  


**`std::move_only_function`**

[Member functions](move_only_function.html#Member_functions "cpp/utility/functional/move only function")  
---  
[move_only_function::move_only_function](move_only_function/move_only_function.html "cpp/utility/functional/move only function/move only function")  
[move_only_function::~move_only_function](move_only_function/~move_only_function.html "cpp/utility/functional/move only function/~move only function")  
[move_only_function::operator=](move_only_function/operator=.html "cpp/utility/functional/move only function/operator=")  
[move_only_function::swap](move_only_function/swap.html "cpp/utility/functional/move only function/swap")  
[move_only_function::operator bool](move_only_function/operator_bool.html "cpp/utility/functional/move only function/operator bool")  
[move_only_function::operator()](move_only_function/operator\(\).html "cpp/utility/functional/move only function/operator\(\)")  
[Non-member functions](move_only_function.html#Non-member_functions "cpp/utility/functional/move only function")  
[operator==](move_only_function/operator==.html "cpp/utility/functional/move only function/operator==")  
[swap(std::move_only_function)](move_only_function/swap2.html "cpp/utility/functional/move only function/swap2")  
  


Defined in header `[<functional>](../../header/functional.html "cpp/header/functional")` |  |   
---|---|---  
template< class... >  
class move_only_function; // not defined |  (1)  |  (since C++23)  
template< class R, class... Args >  
class move_only_function<R(Args...)>;  
template< class R, class... Args >  
class move_only_function<R(Args...) noexcept>;  
template< class R, class... Args >  
class move_only_function<R(Args...) &>;  
template< class R, class... Args >  
class move_only_function<R(Args...) & noexcept>;  
template< class R, class... Args >  
class move_only_function<R(Args...) &&>;  
template< class R, class... Args >  
class move_only_function<R(Args...) && noexcept>;  
template< class R, class... Args >  
class move_only_function<R(Args...) const>;  
template< class R, class... Args >  
class move_only_function<R(Args...) const noexcept>;  
template< class R, class... Args >  
class move_only_function<R(Args...) const &>;  
template< class R, class... Args >  
class move_only_function<R(Args...) const & noexcept>;  
template< class R, class... Args >  
class move_only_function<R(Args...) const &&>;  
template< class R, class... Args >  
class move_only_function<R(Args...) const && noexcept>; |  (2)  |  (since C++23)  
| |   
  
Class template `std::move_only_function` is a general-purpose polymorphic function wrapper. `std::move_only_function` objects can store and invoke any constructible (not required to be move constructible) [Callable](../../named_req/Callable.html "cpp/named req/Callable") _target_ — functions, [lambda expressions](../../language/lambda.html "cpp/language/lambda"), [bind expressions](bind.html "cpp/utility/functional/bind"), or other function objects, as well as pointers to member functions and pointers to member objects. 

The stored callable object is called the _target_ of `std::move_only_function`. If a `std::move_only_function` contains no target, it is called _empty_. Unlike [std::function](function.html "cpp/utility/functional/function"), invoking an _empty_ `std::move_only_function` results in undefined behavior. 

`std::move_only_function`s supports every possible combination of [cv-qualifiers](../../language/member_functions.html#Member_functions_with_cv-qualifiers "cpp/language/member functions") (not including volatile), [ref-qualifiers](../../language/member_functions.html#Member_functions_with_ref-qualifier "cpp/language/member functions"), and [noexcept-specifiers](../../language/noexcept_spec.html "cpp/language/noexcept spec") provided in its template parameter. These qualifiers and specifier (if any) are added to its [`operator()`](move_only_function/operator\(\).html "cpp/utility/functional/move only function/operator\(\)"). 

`std::move_only_function` satisfies the requirements of [MoveConstructible](../../named_req/MoveConstructible.html "cpp/named req/MoveConstructible") and [MoveAssignable](../../named_req/MoveAssignable.html "cpp/named req/MoveAssignable"), but does not satisfy [CopyConstructible](../../named_req/CopyConstructible.html "cpp/named req/CopyConstructible") or [CopyAssignable](../../named_req/CopyAssignable.html "cpp/named req/CopyAssignable"). 

## Contents

  * [1 Member types](move_only_function.html#Member_types)
  * [2 Member functions](move_only_function.html#Member_functions)
  * [3 Non-member functions](move_only_function.html#Non-member_functions)
  * [4 Notes](move_only_function.html#Notes)
  * [5 Example](move_only_function.html#Example)
  * [6 See also](move_only_function.html#See_also)

  
---  
  
### Member types

Type  |  Definition   
---|---  
`result_type` |  `R`  
  
### Member functions

[ (constructor)](move_only_function/move_only_function.html "cpp/utility/functional/move only function/move only function") |  constructs a new `std::move_only_function` object   
(public member function)   
---|---  
[ (destructor)](move_only_function/~move_only_function.html "cpp/utility/functional/move only function/~move only function") |  destroys a `std::move_only_function` object   
(public member function)   
[ operator=](move_only_function/operator=.html "cpp/utility/functional/move only function/operator=") |  replaces or destroys the target   
(public member function)   
[ swap](move_only_function/swap.html "cpp/utility/functional/move only function/swap") |  swaps the targets of two `std::move_only_function` objects   
(public member function)   
[ operator bool](move_only_function/operator_bool.html "cpp/utility/functional/move only function/operator bool") |  checks if the `std::move_only_function` has a target   
(public member function)   
[ operator()](move_only_function/operator\(\).html "cpp/utility/functional/move only function/operator\(\)") |  invokes the target   
(public member function) &action=edit)  
  
### Non-member functions

[ swap(std::move_only_function)](move_only_function/swap2.html "cpp/utility/functional/move only function/swap2")(C++23) |  specializes the [std::swap](../swap.html "cpp/algorithm/swap") algorithm   
(function)   
---|---  
[ operator==](move_only_function/operator==.html "cpp/utility/functional/move only function/operator==")(C++23) |  compares a `std::move_only_function` with nullptr   
(function)   
  
### Notes

Implementations may store a callable object of small size within the `std::move_only_function` object. Such small object optimization is effectively required for function pointers and [std::reference_wrapper](reference_wrapper.html "cpp/utility/functional/reference wrapper") specializations, and can only be applied to types `T` for which [std::is_nothrow_move_constructible_v](../../types/is_move_constructible.html)<T> is true. 

If a `std::move_only_function` returning a reference is initialized from a function or function object returning a prvalue (including a lambda expression without a trailing-return-type), the program is ill-formed because binding the returned reference to a temporary object is forbidden. See also [`std::function`](function.html#Notes "cpp/utility/functional/function") Notes. 

[Feature-test](../feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_move_only_function`](../../experimental/feature_test.html#cpp_lib_move_only_function "cpp/feature test") | [`202110L`](../../compiler_support/23.html#cpp_lib_move_only_function_202110L "cpp/compiler support/23") | (C++23) | `std::move_only_function`  
  
### Example

Run this code
    
    
    #include <functional>
    #include <future>
    #include <iostream>
     
    int main()
    {
        [std::packaged_task](../../thread/packaged_task.html)<double()> packaged_task([](){ return 3.14159; });
     
        [std::future](../../thread/future.html)<double> future = packaged_task.get_future();
     
        auto lambda = [task = std::move(packaged_task)]() mutable { task(); };
     
    //  std::function<void()> function = std::move(lambda); // Error
        std::move_only_function<void()> function = std::move(lambda); // OK
     
        function();
     
        [std::cout](../../io/cout.html) << future.get();
    }

Output: 
    
    
    3.14159

### See also

[ function](function.html "cpp/utility/functional/function")(C++11) |  copyable wrapper of any copy constructible callable object   
(class template)   
---|---  
[ function_ref](function_ref.html "cpp/utility/functional/function ref")(C++26) |  non-owning wrapper of any callable object   
(class template)   
[ copyable_function](copyable_function.html "cpp/utility/functional/copyable function")(C++26) |  copyable wrapper of any copy constructible callable object that supports qualifiers in a given call signature   
(class template) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
