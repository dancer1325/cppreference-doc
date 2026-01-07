
  


[Metaprogramming library](../meta.html "cpp/meta")

Type traits  
---  
| Type categories  
---  
[is_void](is_void.html "cpp/types/is void")(C++11)  
[is_null_pointer](is_null_pointer.html "cpp/types/is null pointer")(C++11)(DR*)  
| [is_array](is_array.html "cpp/types/is array")(C++11)  
---  
[is_pointer](is_pointer.html "cpp/types/is pointer")(C++11)  
[is_enum](is_enum.html "cpp/types/is enum")(C++11)  
[is_union](is_union.html "cpp/types/is union")(C++11)  
[is_class](is_class.html "cpp/types/is class")(C++11)  
**is_function**(C++11)  
[is_reference](is_reference.html "cpp/types/is reference")(C++11)` `  
  
| [is_object](is_object.html "cpp/types/is object")(C++11)  
---  
[is_scalar](is_scalar.html "cpp/types/is scalar")(C++11)  
[is_compound](is_compound.html "cpp/types/is compound")(C++11)  
[is_integral](is_integral.html "cpp/types/is integral")(C++11)  
[is_floating_point](is_floating_point.html "cpp/types/is floating point")(C++11)` `  
[is_fundamental](is_fundamental.html "cpp/types/is fundamental")(C++11)  
[is_arithmetic](is_arithmetic.html "cpp/types/is arithmetic")(C++11)  
  
[is_lvalue_reference](is_lvalue_reference.html "cpp/types/is lvalue reference")(C++11)  
[is_rvalue_reference](is_rvalue_reference.html "cpp/types/is rvalue reference")(C++11)  
[is_member_pointer](is_member_pointer.html "cpp/types/is member pointer")(C++11)  
[is_member_object_pointer](is_member_object_pointer.html "cpp/types/is member object pointer")(C++11)  
[is_member_function_pointer](is_member_function_pointer.html "cpp/types/is member function pointer")(C++11)  
Type properties  
[is_const](is_const.html "cpp/types/is const")(C++11)  
[is_volatile](is_volatile.html "cpp/types/is volatile")(C++11)  
[is_empty](is_empty.html "cpp/types/is empty")(C++11)  
[is_polymorphic](is_polymorphic.html "cpp/types/is polymorphic")(C++11)  
[is_final](is_final.html "cpp/types/is final")(C++14)  
[is_abstract](is_abstract.html "cpp/types/is abstract")(C++11)  
[is_aggregate](is_aggregate.html "cpp/types/is aggregate")(C++17)  
[is_implicit_lifetime](is_implicit_lifetime.html "cpp/types/is implicit lifetime")(C++23)  
[is_trivial](is_trivial.html "cpp/types/is trivial")(C++11)(deprecated in C++26)  
[is_trivially_copyable](is_trivially_copyable.html "cpp/types/is trivially copyable")(C++11)  
[is_standard_layout](is_standard_layout.html "cpp/types/is standard layout")(C++11)  
[is_literal_type](is_literal_type.html "cpp/types/is literal type")(C++11)(until C++20*)  
[is_pod](is_pod.html "cpp/types/is pod")(C++11)(deprecated in C++20)  
[is_signed](is_signed.html "cpp/types/is signed")(C++11)  
[is_unsigned](is_unsigned.html "cpp/types/is unsigned")(C++11)  
[is_bounded_array](is_bounded_array.html "cpp/types/is bounded array")(C++20)  
[is_unbounded_array](is_unbounded_array.html "cpp/types/is unbounded array")(C++20)  
[is_scoped_enum](is_scoped_enum.html "cpp/types/is scoped enum")(C++23)  
[has_unique_object_representations](has_unique_object_representations.html "cpp/types/has unique object representations")(C++17)  
Type trait constants  
[integral_constantbool_constanttrue_typefalse_type](integral_constant.html "cpp/types/integral constant")(C++11)(C++17)(C++11)(C++11)  
Metafunctions  
[conjunction](conjunction.html "cpp/types/conjunction")(C++17)  
[disjunction](disjunction.html "cpp/types/disjunction")(C++17)  
[negation](negation.html "cpp/types/negation")(C++17)  
  
  
  
  
  
  
  
  
  
  
  


Defined in header `[<type_traits>](../header/type_traits.html "cpp/header/type traits")` |  |   
---|---|---  
template< class T >  
struct is_function; |  |  (since C++11)  
| |   
  
`std::is_function` is a [UnaryTypeTrait](../named_req/UnaryTypeTrait.html "cpp/named req/UnaryTypeTrait"). 

Checks whether `T` is a function type. Types like [std::function](../utility/functional/function.html), lambdas, classes with overloaded `operator()` and pointers to functions don't count as function types. Provides the member constant `value` which is equal to true, if `T` is a function type. Otherwise, `value` is equal to false. 

If the program adds specializations for `std::is_function` or `std::is_function_v`, the behavior is undefined. 

## Contents

  * [1 Template parameters](is_function.html#Template_parameters)
  * [2 Helper variable template](is_function.html#Helper_variable_template)
  * [3 Inherited from std::integral_constant](is_function.html#Inherited_from_std::integral_constant)
    * [3.1 Member constants](is_function.html#Member_constants)
    * [3.2 Member functions](is_function.html#Member_functions)
    * [3.3 Member types](is_function.html#Member_types)
    * [3.4 Notes](is_function.html#Notes)
    * [3.5 Possible implementation](is_function.html#Possible_implementation)
    * [3.6 Example](is_function.html#Example)
    * [3.7 See also](is_function.html#See_also)

  
---  
  
### Template parameters

T  |  \-  |  a type to check   
---|---|---  
  
### Helper variable template

template< class T >  
constexpr bool is_function_v = is_function<T>::value; |  |  (since C++17)  
---|---|---  
| |   
  


##  Inherited from [ std::integral_constant](integral_constant.html "cpp/types/integral constant")

###  Member constants

value[static] |  true if `T` is a function type, false otherwise   
(public static member constant)  
---|---  
  
###  Member functions

operator bool |  converts the object to bool, returns value   
(public member function)  
---|---  
operator()(C++14) |  returns value   
(public member function)  
  
###  Member types

Type  |  Definition   
---|---  
`value_type` |  bool  
`type` |  [std::integral_constant](integral_constant.html)<bool, value>  
  
### Notes

`std::is_function` can be implemented in much simpler ways. Implementations similar to the following one are used by new versions of [libc++](https://github.com/llvm-mirror/libcxx/blob/master/include/type_traits#L889), [libstdc++](https://github.com/gcc-mirror/gcc/blob/master/libstdc%2B%2B-v3/include/std/type_traits#L538) and [MS STL](https://github.com/microsoft/STL/pull/460): 
    
    
    template<class T>
    struct is_function : [std::integral_constant](integral_constant.html)<
        bool,
        ![std::is_const](is_const.html)<const T>::value && ![std::is_reference](is_reference.html)<T>::value
    > {};

The implementation shown below is for pedagogical purposes, since it exhibits the myriad kinds of function types. 

### Possible implementation
    
    
    // primary template
    template<class>
    struct is_function : [std::false_type](integral_constant.html) {};
     
    // specialization for regular functions
    template<class Ret, class... Args>
    struct is_function<Ret(Args...)> : [std::true_type](integral_constant.html) {};
     
    // specialization for variadic functions such as std::printf
    template<class Ret, class... Args>
    struct is_function<Ret(Args......)> : [std::true_type](integral_constant.html) {};
     
    // specialization for function types that have cv-qualifiers
    template<class Ret, class... Args>
    struct is_function<Ret(Args...) const> : [std::true_type](integral_constant.html) {};
    template<class Ret, class... Args>
    struct is_function<Ret(Args...) volatile> : [std::true_type](integral_constant.html) {};
    template<class Ret, class... Args>
    struct is_function<Ret(Args...) const volatile> : [std::true_type](integral_constant.html) {};
    template<class Ret, class... Args>
    struct is_function<Ret(Args......) const> : [std::true_type](integral_constant.html) {};
    template<class Ret, class... Args>
    struct is_function<Ret(Args......) volatile> : [std::true_type](integral_constant.html) {};
    template<class Ret, class... Args>
    struct is_function<Ret(Args......) const volatile> : [std::true_type](integral_constant.html) {};
     
    // specialization for function types that have ref-qualifiers
    template<class Ret, class... Args>
    struct is_function<Ret(Args...) &> : [std::true_type](integral_constant.html) {};
    template<class Ret, class... Args>
    struct is_function<Ret(Args...) const &> : [std::true_type](integral_constant.html) {};
    template<class Ret, class... Args>
    struct is_function<Ret(Args...) volatile &> : [std::true_type](integral_constant.html) {};
    template<class Ret, class... Args>
    struct is_function<Ret(Args...) const volatile &> : [std::true_type](integral_constant.html) {};
    template<class Ret, class... Args>
    struct is_function<Ret(Args......) &> : [std::true_type](integral_constant.html) {};
    template<class Ret, class... Args>
    struct is_function<Ret(Args......) const &> : [std::true_type](integral_constant.html) {};
    template<class Ret, class... Args>
    struct is_function<Ret(Args......) volatile &> : [std::true_type](integral_constant.html) {};
    template<class Ret, class... Args>
    struct is_function<Ret(Args......) const volatile &> : [std::true_type](integral_constant.html) {};
    template<class Ret, class... Args>
    struct is_function<Ret(Args...) &&> : [std::true_type](integral_constant.html) {};
    template<class Ret, class... Args>
    struct is_function<Ret(Args...) const &&> : [std::true_type](integral_constant.html) {};
    template<class Ret, class... Args>
    struct is_function<Ret(Args...) volatile &&> : [std::true_type](integral_constant.html) {};
    template<class Ret, class... Args>
    struct is_function<Ret(Args...) const volatile &&> : [std::true_type](integral_constant.html) {};
    template<class Ret, class... Args>
    struct is_function<Ret(Args......) &&> : [std::true_type](integral_constant.html) {};
    template<class Ret, class... Args>
    struct is_function<Ret(Args......) const &&> : [std::true_type](integral_constant.html) {};
    template<class Ret, class... Args>
    struct is_function<Ret(Args......) volatile &&> : [std::true_type](integral_constant.html) {};
    template<class Ret, class... Args>
    struct is_function<Ret(Args......) const volatile &&> : [std::true_type](integral_constant.html) {};
     
    // specializations for noexcept versions of all the above (C++17 and later)
    template<class Ret, class... Args>
    struct is_function<Ret(Args...) noexcept> : [std::true_type](integral_constant.html) {};
    template<class Ret, class... Args>
    struct is_function<Ret(Args......) noexcept> : [std::true_type](integral_constant.html) {};
    template<class Ret, class... Args>
    struct is_function<Ret(Args...) const noexcept> : [std::true_type](integral_constant.html) {};
    template<class Ret, class... Args>
    struct is_function<Ret(Args...) volatile noexcept> : [std::true_type](integral_constant.html) {};
    template<class Ret, class... Args>
    struct is_function<Ret(Args...) const volatile noexcept> : [std::true_type](integral_constant.html) {};
    template<class Ret, class... Args>
    struct is_function<Ret(Args......) const noexcept> : [std::true_type](integral_constant.html) {};
    template<class Ret, class... Args>
    struct is_function<Ret(Args......) volatile noexcept> : [std::true_type](integral_constant.html) {};
    template<class Ret, class... Args>
    struct is_function<Ret(Args......) const volatile noexcept> : [std::true_type](integral_constant.html) {};
    template<class Ret, class... Args>
    struct is_function<Ret(Args...) & noexcept> : [std::true_type](integral_constant.html) {};
    template<class Ret, class... Args>
    struct is_function<Ret(Args...) const & noexcept> : [std::true_type](integral_constant.html) {};
    template<class Ret, class... Args>
    struct is_function<Ret(Args...) volatile & noexcept> : [std::true_type](integral_constant.html) {};
    template<class Ret, class... Args>
    struct is_function<Ret(Args...) const volatile & noexcept> : [std::true_type](integral_constant.html) {};
    template<class Ret, class... Args>
    struct is_function<Ret(Args......) & noexcept> : [std::true_type](integral_constant.html) {};
    template<class Ret, class... Args>
    struct is_function<Ret(Args......) const & noexcept> : [std::true_type](integral_constant.html) {};
    template<class Ret, class... Args>
    struct is_function<Ret(Args......) volatile & noexcept> : [std::true_type](integral_constant.html) {};
    template<class Ret, class... Args>
    struct is_function<Ret(Args......) const volatile & noexcept> : [std::true_type](integral_constant.html) {};
    template<class Ret, class... Args>
    struct is_function<Ret(Args...) && noexcept> : [std::true_type](integral_constant.html) {};
    template<class Ret, class... Args>
    struct is_function<Ret(Args...) const && noexcept> : [std::true_type](integral_constant.html) {};
    template<class Ret, class... Args>
    struct is_function<Ret(Args...) volatile && noexcept> : [std::true_type](integral_constant.html) {};
    template<class Ret, class... Args>
    struct is_function<Ret(Args...) const volatile && noexcept> : [std::true_type](integral_constant.html) {};
    template<class Ret, class... Args>
    struct is_function<Ret(Args......) && noexcept> : [std::true_type](integral_constant.html) {};
    template<class Ret, class... Args>
    struct is_function<Ret(Args......) const && noexcept> : [std::true_type](integral_constant.html) {};
    template<class Ret, class... Args>
    struct is_function<Ret(Args......) volatile && noexcept> : [std::true_type](integral_constant.html) {};
    template<class Ret, class... Args>
    struct is_function<Ret(Args......) const volatile && noexcept> : [std::true_type](integral_constant.html) {};  
  
---  
  
### Example

Run this code
    
    
    #include <functional>
    #include <type_traits>
     
    int f();
    static_assert(std::is_function_v<decltype(f)>);
     
    static_assert(std::is_function_v<int(int)>);
    static_assert(!std::is_function_v<int>);
    static_assert(!std::is_function_v<decltype([]{})>);
    static_assert(!std::is_function_v<[std::function](../utility/functional/function.html)<void()>>);
     
    struct O { void operator()() {} };
    static_assert(std::is_function_v<O()>);
     
    struct A
    {
        static int foo();
        int fun() const&;
    };
    static_assert(!std::is_function_v<A>);
    static_assert(std::is_function_v<decltype(A::foo)>);
    static_assert(!std::is_function_v<decltype(&A::fun)>);
     
    template<typename>
    struct PM_traits {};
    template<class T, class U>
    struct PM_traits<U T::*> { using member_type = U; };
     
    int main()
    {
        using T = PM_traits<decltype(&A::fun)>::member_type; // T is int() const&
        static_assert(std::is_function_v<T>);
    }

### See also

[ is_invocableis_invocable_ris_nothrow_invocableis_nothrow_invocable_r](is_invocable.html "cpp/types/is invocable")(C++17) |  checks if a type can be invoked (as if by [std::invoke](../utility/functional/invoke.html "cpp/utility/functional/invoke")) with the given argument types   
(class template)   
---|---  
[ is_object](is_object.html "cpp/types/is object")(C++11) |  checks if a type is an object type   
(class template)   
[ is_class](is_class.html "cpp/types/is class")(C++11) |  checks if a type is a non-union class type   
(class template) 
