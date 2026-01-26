 
  


  
  
  
  
  
  
  
  
  
  
  
  


---  
**invoke invoke_r**(C++17)(C++23)  
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
template< class F, class... Args >  
[std::invoke_result_t](../../types/result_of.html)<F, Args...>  
invoke( F&& f, Args&&... args ) noexcept(/* see below */); |  (1) | (since C++17)   
(constexpr since C++20)  
template< class R, class F, class... Args >  
constexpr R  
invoke_r( F&& f, Args&&... args ) noexcept(/* see below */); |  (2) | (since C++23)  
| |   
  
1) Invoke the [Callable](../../named_req/Callable.html "cpp/named req/Callable") object f with the parameters args as by [`_INVOKE_`](../../functional.html "cpp/utility/functional")([std::forward](../forward.html)<F>(f), [std::forward](../forward.html)<Args>(args)...). This overload participates in overload resolution only if [std::is_invocable_v](../../types/is_invocable.html)<F, Args...> is true.

2) Invoke the [Callable](../../named_req/Callable.html "cpp/named req/Callable") object f with the parameters args as by [`_INVOKE <R>_`](../../functional.html "cpp/utility/functional")([std::forward](../forward.html)<F>(f), [std::forward](../forward.html)<Args>(args)...). This overload participates in overload resolution only if [std::is_invocable_r_v](../../types/is_invocable.html)<R, F, Args...> is true.

## Contents

  * [1 Parameters](invoke.html#Parameters)
  * [2 Return value](invoke.html#Return_value)
  * [3 Exceptions](invoke.html#Exceptions)
  * [4 Possible implementation](invoke.html#Possible_implementation)
  * [5 Notes](invoke.html#Notes)
  * [6 Example](invoke.html#Example)
  * [7 See also](invoke.html#See_also)

  
---  
  
### Parameters

f  |  \-  |  [Callable](../../named_req/Callable.html "cpp/named req/Callable") object to be invoked   
---|---|---  
args  |  \-  |  arguments to pass to f  
  
### Return value

1) The value returned by f.

2) The value returned by f, implicitly converted to `R`, if `R` is not (possibly [cv-qualified](../../language/cv.html "cpp/language/cv")) void. None otherwise.

### Exceptions

1)

[`noexcept`](../../language/noexcept_spec.html "cpp/language/noexcept spec") specification: 

noexcept([std::is_nothrow_invocable_v](../../types/is_invocable.html)<F, Args...>)

2)

[`noexcept`](../../language/noexcept_spec.html "cpp/language/noexcept spec") specification: 

noexcept([std::is_nothrow_invocable_r_v](../../types/is_invocable.html)<R, F, Args...>)

### Possible implementation

[invoke (1)](invoke.html#Version_1)  
---  
      
    
    namespace detail
    {
        template<class>
        constexpr bool is_reference_wrapper_v = false;
        template<class U>
        constexpr bool is_reference_wrapper_v<[std::reference_wrapper](reference_wrapper.html)<U>> = true;
     
        template<class T>
        using remove_cvref_t = [std::remove_cv_t](../../types/remove_cv.html)<[std::remove_reference_t](../../types/remove_reference.html)<T>>;
     
        template<class C, class Pointed, class Object, class... Args>
        constexpr decltype(auto) invoke_memptr(Pointed C::* member, Object&& object,
                                               Args&&... args)
        {
            using object_t = remove_cvref_t<Object>;
            constexpr bool is_member_function = [std::is_function_v](../../types/is_function.html)<Pointed>;
            constexpr bool is_wrapped = is_reference_wrapper_v<object_t>;
            constexpr bool is_derived_object = [std::is_same_v](../../types/is_same.html)<C, object_t>
                                            || [std::is_base_of_v](../../types/is_base_of.html)<C, object_t>;
     
            if constexpr (is_member_function)
            {
                if constexpr (is_derived_object)
                    return ([std::forward](../forward.html)<Object>(object) .* member)
                               ([std::forward](../forward.html)<Args>(args)...);
                else if constexpr (is_wrapped)
                    return (object.get() .* member)([std::forward](../forward.html)<Args>(args)...);
                else
                    return ((*[std::forward](../forward.html)<Object>(object)) .* member)
                               ([std::forward](../forward.html)<Args>(args)...);
            }
            else
            {
                static_assert([std::is_object_v](../../types/is_object.html)<Pointed> && sizeof...(args) == 0);
                if constexpr (is_derived_object)
                    return [std::forward](../forward.html)<Object>(object) .* member;
                else if constexpr (is_wrapped)
                    return object.get() .* member;
                else
                    return (*[std::forward](../forward.html)<Object>(object)) .* member;
            }
        }
    } // namespace detail
     
    template<class F, class... Args>
    constexpr [std::invoke_result_t](../../types/result_of.html)<F, Args...> invoke(F&& f, Args&&... args)
        noexcept([std::is_nothrow_invocable_v](../../types/is_invocable.html)<F, Args...>)
    {
        if constexpr ([std::is_member_pointer_v](../../types/is_member_pointer.html)<detail::remove_cvref_t<F>>)
            return detail::invoke_memptr(f, [std::forward](../forward.html)<Args>(args)...);
        else
            return [std::forward](../forward.html)<F>(f)([std::forward](../forward.html)<Args>(args)...);
    }  
  
[invoke_r (2)](invoke.html#Version_2)  
      
    
    template<class R, class F, class... Args>
        requires [std::is_invocable_r_v](../../types/is_invocable.html)<R, F, Args...>
    constexpr R invoke_r(F&& f, Args&&... args)
        noexcept([std::is_nothrow_invocable_r_v](../../types/is_invocable.html)<R, F, Args...>)
    {
        if constexpr ([std::is_void_v](../../types/is_void.html)<R>)
            std::invoke([std::forward](../forward.html)<F>(f), [std::forward](../forward.html)<Args>(args)...);
        else
            return std::invoke([std::forward](../forward.html)<F>(f), [std::forward](../forward.html)<Args>(args)...);
    }  
  
### Notes

[Feature-test](../feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_invoke`](../../experimental/feature_test.html#cpp_lib_invoke "cpp/feature test") | [`201411L`](../../compiler_support/17.html#cpp_lib_invoke_201411L "cpp/compiler support/17") | (C++17) | `std::invoke`, ([1](invoke.html#Version_1))  
[`__cpp_lib_invoke_r`](../../experimental/feature_test.html#cpp_lib_invoke_r "cpp/feature test") | [`202106L`](../../compiler_support/23.html#cpp_lib_invoke_r_202106L "cpp/compiler support/23") | (C++23) | `std::invoke_r`, ([2](invoke.html#Version_2))  
  
### Example

Run this code
    
    
    #include <functional>
    #include <iostream>
    #include <type_traits>
     
    struct Foo
    {
        Foo(int num) : num_(num) {}
        void print_add(int i) const { [std::cout](../../io/cout.html) << num_ + i << '\n'; }
        int num_;
    };
     
    void print_num(int i)
    {
        [std::cout](../../io/cout.html) << i << '\n';
    }
     
    struct PrintNum
    {
        void operator()(int i) const
        {
            [std::cout](../../io/cout.html) << i << '\n';
        }
    };
     
    int main()
    {
        [std::cout](../../io/cout.html) << "invoke a free function: ";
        std::invoke(print_num, -9);
     
        [std::cout](../../io/cout.html) << "invoke a lambda: ";
        std::invoke([](){ print_num(42); });
     
        [std::cout](../../io/cout.html) << "invoke a member function: ";
        const Foo foo(314159);
        std::invoke(&Foo::print_add, foo, 1);
     
        [std::cout](../../io/cout.html) << "invoke (i.e., access) a data member num_: "
                  << std::invoke(&Foo::num_, foo) << '\n';
     
        [std::cout](../../io/cout.html) << "invoke a function object: ";
        std::invoke(PrintNum(), 18);
     
    #if defined(__cpp_lib_invoke_r)
        auto add = [](int x, int y){ return x + y; };
        [std::cout](../../io/cout.html) << "invoke a lambda converting result to float: ";
        auto ret = std::invoke_r<float>(add, 11, 22);
        static_assert([std::is_same](../../types/is_same.html)<decltype(ret), float>());
        [std::cout](../../io/cout.html) << [std::fixed](../../io/manip/fixed.html) << ret << "\ninvoke print_num: ";
        std::invoke_r<void>(print_num, 44);
    #endif
    }

Possible output: 
    
    
    invoke a free function: -9
    invoke a lambda: 42
    invoke a member function: 314160
    invoke (i.e., access) a data member num_: 314159
    invoke a function object: 18
    invoke a lambda converting result to float: 33.000000
    invoke print_num: 44

### See also

[ mem_fn](mem_fn.html "cpp/utility/functional/mem fn")(C++11) |  creates a function object out of a pointer to a member   
(function template)   
---|---  
[ result_ofinvoke_result](../../types/result_of.html "cpp/types/result of")(C++11)(removed in C++20)(C++17) |  deduces the result type of invoking a callable object with a set of arguments   
(class template)   
[ is_invocableis_invocable_ris_nothrow_invocableis_nothrow_invocable_r](../../types/is_invocable.html "cpp/types/is invocable")(C++17) |  checks if a type can be invoked (as if by **std::invoke**) with the given argument types   
(class template)   
[ apply](../apply.html "cpp/utility/apply")(C++17) |  calls a function with a tuple of arguments   
(function template) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
