 
  


  
  
  
  
  
  
  
  
  
  
  
  


[Function objects](../../functional.html "cpp/utility/functional")

| [Function wrappers](../../functional.html#Function_wrappers "cpp/utility/functional")  
---  
[function](function.html "cpp/utility/functional/function")(C++11)  
[move_only_function](move_only_function.html "cpp/utility/functional/move only function")(C++23)  
[copyable_function](copyable_function.html "cpp/utility/functional/copyable function")(C++26)  
[function_ref](function_ref.html "cpp/utility/functional/function ref")(C++26)  
[mem_fn](mem_fn.html "cpp/utility/functional/mem fn")(C++11)  
[bad_function_call](bad_function_call.html "cpp/utility/functional/bad function call")(C++11)  
  
| [Partial function application](../../functional.html#Partial_function_application "cpp/utility/functional")  
---  
**bind_front bind_back**(C++20)(C++23)  
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
  
  
  
  
  
  
  


Defined in header `[<functional>](../../header/functional.html "cpp/header/functional")` |  |   
---|---|---  
`std::bind_front` |  |   
template< class F, class... Args >  
constexpr /* unspecified */ bind_front( F&& f, Args&&... args ); |  (1) | (since C++20)  
template< auto ConstFn, class... Args >  
constexpr /* unspecified */ bind_front( Args&&... args ); |  (2) | (since C++26)  
`std::bind_back` |  |   
template< class F, class... Args >  
constexpr /* unspecified */ bind_back( F&& f, Args&&... args ); |  (3) | (since C++23)  
template< auto ConstFn, class... Args >  
constexpr /* unspecified */ bind_back( Args&&... args ); |  (4) | (since C++26)  
| |   
  
Function templates `std::bind_front` and `std::bind_back` generate a perfect forwarding call wrapper which allows to invoke the callable target with its (1,2) first or (3,4) last sizeof...(Args) parameters bound to args. 

1,3) The call wrapper holds a copy of the target callable object f.

2,4) The call wrapper does not hold a callable target (it is statically determined).

1) std::bind_front(f, bound_args...)(call_args...) is [expression-equivalent](../../language/expressions.html#Expression-equivalence "cpp/language/expressions") to

[std::invoke](invoke.html)(f, bound_args..., call_args...).

2) std::bind_front<ConstFn>(bound_args...)(call_args...) is [expression-equivalent](../../language/expressions.html#Expression-equivalence "cpp/language/expressions") to

[std::invoke](invoke.html)(ConstFn, bound_args..., call_args...).

3) std::bind_back(f, bound_args...)(call_args...) is [expression-equivalent](../../language/expressions.html#Expression-equivalence "cpp/language/expressions") to

[std::invoke](invoke.html)(f, call_args..., bound_args...).

4) std::bind_back<ConstFn>(bound_args...)(call_args...) is [expression-equivalent](../../language/expressions.html#Expression-equivalence "cpp/language/expressions") to

[std::invoke](invoke.html)(ConstFn, call_args..., bound_args...).

The following conditions must be true, otherwise the program is ill-formed: 

  * (1,3) [std::is_constructible_v](../../types/is_constructible.html)<[std::decay_t](../../types/decay.html)<F>, F>, 
  * (1,3) [std::is_move_constructible_v](../../types/is_move_constructible.html)<[std::decay_t](../../types/decay.html)<F>>, 
  * (2,4) If decltype(ConstFn) is a pointer or a pointer-to-member then `ConstFn` is not a null pointer, 
  * ([std::is_constructible_v](../../types/is_constructible.html)<[std::decay_t](../../types/decay.html)<Args>, Args> && ...), 
  * ([std::is_move_constructible_v](../../types/is_move_constructible.html)<[std::decay_t](../../types/decay.html)<Args>> && ...). 



## Contents

  * [1 Parameters](bind_front.html#Parameters)
  * [2 Return value](bind_front.html#Return_value)
  * [3 _bind-partial return type_](bind_front.html#bind-partial_return_type)
    * [3.1 Member objects](bind_front.html#Member_objects)
    * [3.2 Constructors](bind_front.html#Constructors)
    * [3.3 Member function operator()](bind_front.html#Member_function_operator.28.29)
    * [3.4 Exceptions](bind_front.html#Exceptions)
    * [3.5 Notes](bind_front.html#Notes)
    * [3.6 Possible implementation](bind_front.html#Possible_implementation)
    * [3.7 Example](bind_front.html#Example)
    * [3.8 References](bind_front.html#References)
    * [3.9 See also](bind_front.html#See_also)

  
---  
  
### Parameters

f  |  \-  |  [Callable](../../named_req/Callable.html "cpp/named req/Callable") object (function object, pointer to function, reference to function, pointer to member function, or pointer to data member) that will be bound to some arguments   
---|---|---  
args  |  \-  |  list of the arguments to bind to the ([1,2](bind_front.html#Version_1)) first or ([3,4](bind_front.html#Version_3)) last sizeof...(Args) parameters of the callable target   
Type requirements   
-`[std::decay_t](../../types/decay.html)<F>` must meet the requirements of [MoveConstructible](../../named_req/MoveConstructible.html "cpp/named req/MoveConstructible").   
-`[std::decay_t](../../types/decay.html)<Args>...` must meet the requirements of [MoveConstructible](../../named_req/MoveConstructible.html "cpp/named req/MoveConstructible").   
-`decltype(ConstFn)` must meet the requirements of [Callable](../../named_req/Callable.html "cpp/named req/Callable").   
  
### Return value

A function object (the call wrapper) of type `T` that is unspecified, except that the types of objects returned by two calls to `std::bind_front` or `std::bind_back` with the same arguments are the same. 

Let `_bind-partial_` be either `std::bind_front` or `std::bind_back`. 

The returned object has the following properties: 

##  _bind-partial return type_

####  Member objects

The returned object behaves as if it holds: 

1,3) A member object `fd` of type [std::decay_t](../../types/decay.html)<F> direct-non-list-initialized from [std::forward](../forward.html)<F>(f), and

1-4) An [std::tuple](../tuple.html "cpp/utility/tuple") object `tup` constructed with [std::tuple](../tuple.html)<[std::decay_t](../../types/decay.html)<Args>...>([std::forward](../forward.html)<Args>(args)...), except that the returned object's assignment behavior is unspecified and the names are for exposition only.

####  Constructors

The return type of `_bind-partial_` behaves as if its copy/move constructors perform a memberwise copy/move. It is [CopyConstructible](../../named_req/CopyConstructible.html "cpp/named req/CopyConstructible") if all of its member objects (specified above) are CopyConstructible, and is [MoveConstructible](../../named_req/MoveConstructible.html "cpp/named req/MoveConstructible") otherwise. 

####  Member function `operator()`

Given an object `G` obtained from an earlier call to ([1,3](bind_front.html#Version_1)) `_bind-partial_(f, args...)` or ([2,4](bind_front.html#Version_2)) `_bind-partial_ <ConstFn>(args...)`, when a glvalue `g` designating `G` is invoked in a function call expression g(call_args...), an invocation of the stored object takes place, as if by: 

1) [std::invoke](invoke.html)(g.fd, std::get<Ns>(g.tup)..., call_args...), when `_bind-partial_` is `std::bind_front`,

2) [std::invoke](invoke.html)(ConstFn, std::get<Ns>(g.tup)..., call_args...), when `_bind-partial_` is `std::bind_front`,

3) [std::invoke](invoke.html)(g.fd, call_args..., std::get<Ns>(g.tup)...), when `_bind-partial_` is `std::bind_back`,

4) [std::invoke](invoke.html)(ConstFn, call_args..., std::get<Ns>(g.tup)...), when `_bind-partial_` is `std::bind_back`,

where 

    

  * `Ns` is an integer pack `0, 1, ..., (sizeof...(Args) - 1)`, 
  * `g` is an lvalue in the [std::invoke](invoke.html "cpp/utility/functional/invoke") expression if it is an lvalue in the call expression, and is an rvalue otherwise. Thus std::move(g)(call_args...) can move the bound arguments into the call, where g(call_args...) would copy. 



The program is ill-formed if `g` has volatile-qualified type. 

The member operator() is [`noexcept`](../../language/noexcept.html "cpp/language/noexcept") if the [std::invoke](invoke.html "cpp/utility/functional/invoke") expression it calls is noexcept (in other words, it preserves the exception specification of the underlying call operator). 

### Exceptions

1,3) Throw any exception thrown by calling the constructor of the stored function object.

1-4) Throw any exception thrown by calling the constructor of any of the bound arguments.

### Notes

These function templates are intended to replace [std::bind](bind.html "cpp/utility/functional/bind"). Unlike `std::bind`, they do not support arbitrary argument rearrangement and have no special treatment for nested bind-expressions or [std::reference_wrapper](reference_wrapper.html "cpp/utility/functional/reference wrapper")s. On the other hand, they pay attention to the value category of the call wrapper object and propagate exception specification of the underlying call operator. 

As described in [std::invoke](invoke.html "cpp/utility/functional/invoke"), when invoking a pointer to non-static member function or pointer to non-static data member, the first argument has to be a reference or pointer (including, possibly, smart pointer such as [std::shared_ptr](../../memory/shared_ptr.html "cpp/memory/shared ptr") and [std::unique_ptr](../../memory/unique_ptr.html "cpp/memory/unique ptr")) to an object whose member will be accessed. 

The arguments to `std::bind_front` or `std::bind_back` are copied or moved, and are never passed by reference unless wrapped in [std::ref](ref.html "cpp/utility/functional/ref") or [std::cref](ref.html "cpp/utility/functional/ref"). 

Typically, binding arguments to a function or a member function using ([1](bind_front.html#Version_1)) `std::bind_front` and ([3](bind_front.html#Version_3)) `std::bind_back` requires storing a function pointer along with the arguments, even though the language knows precisely which function to call without a need to dereference the pointer. To guarantee "zero cost" in those cases, C++26 introduces the versions ([2,4](bind_front.html#Version_2)) (that accept the callable object as an argument for [constant template parameter](../../language/template_parameters.html#Constant_template_parameter "cpp/language/template parameters")). 

[Feature-test](../feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_bind_front`](../../experimental/feature_test.html#cpp_lib_bind_front "cpp/feature test") | [`201907L`](../../compiler_support/20.html#cpp_lib_bind_front_201907L "cpp/compiler support/20") | (C++20) | `std::bind_front`, ([1](bind_front.html#Version_1))  
[`202306L`](../../compiler_support/26.html#cpp_lib_bind_front_202306L "cpp/compiler support/26") | (C++26) | Allow passing callable objects as constant template arguments to `std::bind_front`, ([2](bind_front.html#Version_2))  
[`__cpp_lib_bind_back`](../../experimental/feature_test.html#cpp_lib_bind_back "cpp/feature test") | [`202202L`](../../compiler_support/23.html#cpp_lib_bind_back_202202L "cpp/compiler support/23") | (C++23) | `std::bind_back`, ([3](bind_front.html#Version_3))  
[`202306L`](../../compiler_support/26.html#cpp_lib_bind_back_202306L "cpp/compiler support/26") | (C++26) | Allow passing callable objects as constant template arguments to `std::bind_back`, ([4](bind_front.html#Version_4))  
  
### Possible implementation

[(2) bind_front](bind_front.html#Version_2)  
---  
      
    
    namespace detail
    {
        template<class T, class U>
        struct copy_const
            : [std::conditional](../../types/conditional.html)<[std::is_const_v](../../types/is_const.html)<T>, U const, U> {};
     
        template<class T, class U,
                 class X = typename copy_const<[std::remove_reference_t](../../types/remove_reference.html)<T>, U>::type>
        struct copy_value_category
            : [std::conditional](../../types/conditional.html)<[std::is_lvalue_reference_v](../../types/is_lvalue_reference.html)<T&&>, X&, X&&> {};
     
        template <class T, class U>
        struct type_forward_like
            : copy_value_category<T, [std::remove_reference_t](../../types/remove_reference.html)<U>> {};
     
        template <class T, class U>
        using type_forward_like_t = typename type_forward_like<T, U>::type;
    }
     
    template<auto ConstFn, class... Args>
    constexpr auto bind_front(Args&&... args)
    {
        using F = decltype(ConstFn);
     
        if constexpr ([std::is_pointer_v](../../types/is_pointer.html)<F> or [std::is_member_pointer_v](../../types/is_member_pointer.html)<F>)
            static_assert(ConstFn != nullptr);
     
        return
            [... bound_args([std::forward](../forward.html)<Args>(args))]<class Self, class... T>
            (
                this Self&&, T&&... call_args
            )
            noexcept
            (
                [std::is_nothrow_invocable_v](../../types/is_invocable.html)<F,
                    detail::type_forward_like_t<Self, [std::decay_t](../../types/decay.html)<Args>>..., T...>
            )
            -> [std::invoke_result_t](../../types/result_of.html)<F,
                    detail::type_forward_like_t<Self, [std::decay_t](../../types/decay.html)<Args>>..., T...>
            {
                return [std::invoke](invoke.html)(ConstFn, [std::forward_like](../forward_like.html)<Self>(bound_args)...,
                                   [std::forward](../forward.html)<T>(call_args)...);
            };
    }  
  
[(4) bind_back](bind_front.html#Version_4)  
      
    
    namespace detail { /* is the same as above */ }
     
    template<auto ConstFn, class... Args>
    constexpr auto bind_back(Args&&... args)
    {
        using F = decltype(ConstFn);
     
        if constexpr ([std::is_pointer_v](../../types/is_pointer.html)<F> or [std::is_member_pointer_v](../../types/is_member_pointer.html)<F>)
            static_assert(ConstFn != nullptr);
     
        return
            [... bound_args([std::forward](../forward.html)<Args>(args))]<class Self, class... T>
            (
                this Self&&, T&&... call_args
            )
            noexcept
            (
                [std::is_nothrow_invocable_v](../../types/is_invocable.html)<F,
                    detail::type_forward_like_t<Self, T..., [std::decay_t](../../types/decay.html)<Args>>...>
            )
            -> [std::invoke_result_t](../../types/result_of.html)<F,
                    detail::type_forward_like_t<Self, T..., [std::decay_t](../../types/decay.html)<Args>>...>
            {
                return [std::invoke](invoke.html)(ConstFn, [std::forward](../forward.html)<T>(call_args)...,
                                   [std::forward_like](../forward_like.html)<Self>(bound_args)...);
            };
    }  
  
### Example

Run this code
    
    
    #include <cassert>
    #include <functional>
     
    int minus(int a, int b)
    {
        return a - b;
    }
     
    struct S
    {
        int val;
        int minus(int arg) const noexcept { return val - arg; }
    };
     
    int main()
    {
        auto fifty_minus = std::bind_front(minus, 50);
        [assert](../../error/assert.html)(fifty_minus(3) == 47); // equivalent to: minus(50, 3) == 47
     
        auto member_minus = std::bind_front(&S::minus, S{50});
        [assert](../../error/assert.html)(member_minus(3) == 47); //: S tmp{50}; tmp.minus(3) == 47
     
        // Noexcept-specification is preserved:
        static_assert(!noexcept(fifty_minus(3)));
        static_assert(noexcept(member_minus(3)));
     
        // Binding of a lambda:
        auto plus = [](int a, int b) { return a + b; };
        auto forty_plus = std::bind_front(plus, 40);
        [assert](../../error/assert.html)(forty_plus(7) == 47); // equivalent to: plus(40, 7) == 47
     
    #if __cpp_lib_bind_front >= 202306L
        auto fifty_minus_cpp26 = std::bind_front<minus>(50);
        [assert](../../error/assert.html)(fifty_minus_cpp26(3) == 47);
     
        auto member_minus_cpp26 = std::bind_front<&S::minus>(S{50});
        [assert](../../error/assert.html)(member_minus_cpp26(3) == 47);
     
        auto forty_plus_cpp26 = std::bind_front<plus>(40);
        [assert](../../error/assert.html)(forty_plus(7) == 47);
    #endif
     
    #if __cpp_lib_bind_back >= 202202L
        auto madd = [](int a, int b, int c) { return a * b + c; };
        auto mul_plus_seven = std::bind_back(madd, 7);
        [assert](../../error/assert.html)(mul_plus_seven(4, 10) == 47); //: madd(4, 10, 7) == 47
    #endif
     
    #if __cpp_lib_bind_back >= 202306L
        auto mul_plus_seven_cpp26 = std::bind_back<madd>(7);
        [assert](../../error/assert.html)(mul_plus_seven_cpp26(4, 10) == 47);
    #endif
    }

### References

  * C++26 standard (ISO/IEC 14882:2026): 



    

  * TBD Function templates bind_front and bind_back [func.bind.partial] 



  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 22.10.14 Function templates bind_front and bind_back [func.bind.partial] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 20.14.14 Function template bind_front [func.bind.front] 



### See also

[ bind](bind.html "cpp/utility/functional/bind")(C++11) |  binds one or more arguments to a function object   
(function template)   
---|---  
[ mem_fn](mem_fn.html "cpp/utility/functional/mem fn")(C++11) |  creates a function object out of a pointer to a member   
(function template) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
