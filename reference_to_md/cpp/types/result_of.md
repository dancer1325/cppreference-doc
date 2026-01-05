
  


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
[is_function](is_function.html "cpp/types/is function")(C++11)  
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
  
| Supported operations  
---  
| [is_constructibleis_trivially_constructibleis_nothrow_constructible](is_constructible.html "cpp/types/is constructible")(C++11)(C++11)(C++11)  
---  
[is_default_constructibleis_trivially_default_constructibleis_nothrow_default_constructible](is_default_constructible.html "cpp/types/is default constructible")(C++11)(C++11)(C++11)  
[is_copy_constructibleis_trivially_copy_constructibleis_nothrow_copy_constructible](is_copy_constructible.html "cpp/types/is copy constructible")(C++11)(C++11)(C++11)  
[is_move_constructibleis_trivially_move_constructibleis_nothrow_move_constructible](is_move_constructible.html "cpp/types/is move constructible")(C++11)(C++11)(C++11)  
[is_assignableis_trivially_assignableis_nothrow_assignable](is_assignable.html "cpp/types/is assignable")(C++11)(C++11)(C++11)  
  
| [is_copy_assignableis_trivially_copy_assignableis_nothrow_copy_assignable](is_copy_assignable.html "cpp/types/is copy assignable")(C++11)(C++11)(C++11)  
---  
[is_move_assignableis_trivially_move_assignableis_nothrow_move_assignable](is_move_assignable.html "cpp/types/is move assignable")(C++11)(C++11)(C++11)  
[is_destructibleis_trivially_destructibleis_nothrow_destructible](is_destructible.html "cpp/types/is destructible")(C++11)(C++11)(C++11)  
[has_virtual_destructor](has_virtual_destructor.html "cpp/types/has virtual destructor")(C++11)  
[is_swappable_withis_swappableis_nothrow_swappable_withis_nothrow_swappable](is_swappable.html "cpp/types/is swappable")(C++17)(C++17)(C++17)(C++17)  
  
  
  
Relationships and property queries  
| [is_same](is_same.html "cpp/types/is same")(C++11)  
---  
[is_convertibleis_nothrow_convertible](is_convertible.html "cpp/types/is convertible")(C++11)(C++20)  
[is_layout_compatible](is_layout_compatible.html "cpp/types/is layout compatible")(C++20)  
[is_pointer_interconvertible_base_of](is_pointer_interconvertible_base_of.html "cpp/types/is pointer interconvertible base of")(C++20)  
[is_pointer_interconvertible_with_class](is_pointer_interconvertible_with_class.html "cpp/types/is pointer interconvertible with class")(C++20)` `  
[is_corresponding_member](is_corresponding_member.html "cpp/types/is corresponding member")(C++20)  
[reference_constructs_from_temporary](reference_constructs_from_temporary.html "cpp/types/reference constructs from temporary")(C++23)  
[reference_converts_from_temporary](reference_converts_from_temporary.html "cpp/types/reference converts from temporary")(C++23)  
  
| [is_base_of](is_base_of.html "cpp/types/is base of")(C++11)  
---  
[is_virtual_base_of](is_virtual_base_of.html "cpp/types/is virtual base of")(C++26)  
[alignment_of](alignment_of.html "cpp/types/alignment of")(C++11)  
[rank](rank.html "cpp/types/rank")(C++11)  
[extent](extent.html "cpp/types/extent")(C++11)  
[is_invocableis_invocable_ris_nothrow_invocableis_nothrow_invocable_r](is_invocable.html "cpp/types/is invocable")(C++17)(C++17)(C++17)(C++17)  
  
Type modifications  
| [remove_cvremove_constremove_volatile](remove_cv.html "cpp/types/remove cv")(C++11)(C++11)(C++11)  
---  
[add_cvadd_constadd_volatile](add_cv.html "cpp/types/add cv")(C++11)(C++11)(C++11)  
[make_signed](make_signed.html "cpp/types/make signed")(C++11)  
[make_unsigned](make_unsigned.html "cpp/types/make unsigned")(C++11)  
  
| [remove_reference](remove_reference.html "cpp/types/remove reference")(C++11)  
---  
[add_lvalue_referenceadd_rvalue_reference](add_reference.html "cpp/types/add reference")(C++11)(C++11)  
[remove_pointer](remove_pointer.html "cpp/types/remove pointer")(C++11)  
[add_pointer](add_pointer.html "cpp/types/add pointer")(C++11)  
[remove_extent](remove_extent.html "cpp/types/remove extent")(C++11)  
[remove_all_extents](remove_all_extents.html "cpp/types/remove all extents")(C++11)  
  
  
  
Type transformations  
| [aligned_storage](aligned_storage.html "cpp/types/aligned storage")(C++11)(deprecated in C++23)  
---  
[aligned_union](aligned_union.html "cpp/types/aligned union")(C++11)(deprecated in C++23)  
[decay](decay.html "cpp/types/decay")(C++11)  
[remove_cvref](remove_cvref.html "cpp/types/remove cvref")(C++20)  
**result_of invoke_result**(C++11)(until C++20*)(C++17)  
  
  
  
| [conditional](conditional.html "cpp/types/conditional")(C++11)  
---  
[common_type](common_type.html "cpp/types/common type")(C++11)  
[common_reference](common_reference.html "cpp/types/common reference")(C++20)  
[underlying_type](underlying_type.html "cpp/types/underlying type")(C++11)  
[type_identity](type_identity.html "cpp/types/type identity")(C++20)  
[enable_if](enable_if.html "cpp/types/enable if")(C++11)  
[void_t](void_t.html "cpp/types/void t")(C++17)  
  
[Compile-time rational arithmetic](../utility/ratio.html "cpp/numeric/ratio")  
Compile-time integer sequences  
[integer_sequence](../utility/integer_sequence.html "cpp/utility/integer sequence")(C++14)  
  


Defined in header `[<type_traits>](../header/type_traits.html "cpp/header/type traits")` |  |   
---|---|---  
template< class >  
class result_of; // not defined  
  
template< class F, class... ArgTypes >  
class result_of<F(ArgTypes...)>; |  (1)  |  (since C++11)   
(deprecated in C++17)   
(removed in C++20)  
template< class F, class... ArgTypes >  
class invoke_result; |  (2)  |  (since C++17)  
| |   
  
Deduces the return type of an [`_INVOKE_` expression](../functional.html "cpp/utility/functional") at compile time. 

`F` must be a callable type, reference to function, or reference to callable type. Invoking `F` with `ArgTypes...` must be a well-formed expression.  | (since C++11)  
(until C++14)  
---|---  
`F` and all types in `ArgTypes` can be any complete type, array of unknown bound, or (possibly cv-qualified) `void`.  | (since C++14)  
  
If the program adds specializations for any of the templates described on this page, the behavior is undefined. 

## Contents

  * [1 Member types](result_of.html#Member_types)
  * [2 Helper types](result_of.html#Helper_types)
  * [3 Possible implementation](result_of.html#Possible_implementation)
  * [4 Notes](result_of.html#Notes)
  * [5 Notes](result_of.html#Notes_2)
  * [6 Examples](result_of.html#Examples)
  * [7 See also](result_of.html#See_also)

  
---  
  
### Member types

Member type  |  Definition   
---|---  
`type` |  the return type of the [Callable](../named_req/Callable.html "cpp/named req/Callable") type `F` if invoked with the arguments `ArgTypes...`. Only defined if F can be called with the arguments `ArgTypes...` in unevaluated context.(since C++14)  
  
### Helper types

template< class T >  
using result_of_t = typename result_of<T>::type; |  (1)  |  (since C++14)   
(deprecated in C++17)   
(removed in C++20)  
---|---|---  
template< class F, class... ArgTypes >  
using invoke_result_t = typename invoke_result<F, ArgTypes...>::type; |  (2)  |  (since C++17)  
| |   
  
### Possible implementation
    
    
    namespace detail
    {
        template<class T>
        struct is_reference_wrapper : [std::false_type](integral_constant.html) {};
        template<class U>
        struct is_reference_wrapper<[std::reference_wrapper](../utility/functional/reference_wrapper.html)<U>> : [std::true_type](integral_constant.html) {};
     
        template<class T>
        struct invoke_impl
        {
            template<class F, class... Args>
            static auto call(F&& f, Args&&... args)
                -> decltype([std::forward](../utility/forward.html)<F>(f)([std::forward](../utility/forward.html)<Args>(args)...));
        };
     
        template<class B, class MT>
        struct invoke_impl<MT B::*>
        {
            template<class T, class Td = typename [std::decay](decay.html)<T>::type,
                class = typename [std::enable_if](enable_if.html)<[std::is_base_of](is_base_of.html)<B, Td>::value>::type>
            static auto get(T&& t) -> T&&;
     
            template<class T, class Td = typename [std::decay](decay.html)<T>::type,
                class = typename [std::enable_if](enable_if.html)<is_reference_wrapper<Td>::value>::type>
            static auto get(T&& t) -> decltype(t.get());
     
            template<class T, class Td = typename [std::decay](decay.html)<T>::type,
                class = typename [std::enable_if](enable_if.html)<![std::is_base_of](is_base_of.html)<B, Td>::value>::type,
                class = typename [std::enable_if](enable_if.html)<!is_reference_wrapper<Td>::value>::type>
            static auto get(T&& t) -> decltype(*[std::forward](../utility/forward.html)<T>(t));
     
            template<class T, class... Args, class MT1,
                class = typename [std::enable_if](enable_if.html)<[std::is_function](is_function.html)<MT1>::value>::type>
            static auto call(MT1 B::*pmf, T&& t, Args&&... args)
                -> decltype((invoke_impl::get(
                    [std::forward](../utility/forward.html)<T>(t)).*pmf)([std::forward](../utility/forward.html)<Args>(args)...));
     
            template<class T>
            static auto call(MT B::*pmd, T&& t)
                -> decltype(invoke_impl::get([std::forward](../utility/forward.html)<T>(t)).*pmd);
        };
     
        template<class F, class... Args, class Fd = typename [std::decay](decay.html)<F>::type>
        auto INVOKE(F&& f, Args&&... args)
            -> decltype(invoke_impl<Fd>::call([std::forward](../utility/forward.html)<F>(f),
                [std::forward](../utility/forward.html)<Args>(args)...));
    } // namespace detail
     
    // Minimal C++11 implementation:
    template<class> struct result_of;
    template<class F, class... ArgTypes>
    struct result_of<F(ArgTypes...)>
    {
        using type = decltype(detail::INVOKE([std::declval](../utility/declval.html)<F>(), [std::declval](../utility/declval.html)<ArgTypes>()...));
    };
     
    // Conforming C++14 implementation (is also a valid C++11 implementation):
    namespace detail
    {
        template<typename AlwaysVoid, typename, typename...>
        struct invoke_result {};
        template<typename F, typename...Args>
        struct invoke_result<
            decltype(void(detail::INVOKE([std::declval](../utility/declval.html)<F>(), [std::declval](../utility/declval.html)<Args>()...))),
                F, Args...>
        {
            using type = decltype(detail::INVOKE([std::declval](../utility/declval.html)<F>(), [std::declval](../utility/declval.html)<Args>()...));
        };
    } // namespace detail
     
    template<class> struct result_of;
    template<class F, class... ArgTypes>
    struct result_of<F(ArgTypes...)> : detail::invoke_result<void, F, ArgTypes...> {};
     
    template<class F, class... ArgTypes>
    struct invoke_result : detail::invoke_result<void, F, ArgTypes...> {};

### Notes

As formulated in C++11, the behavior of `std::result_of` is undefined when `INVOKE(std::declval<F>(), std::declval<ArgTypes>()...)` is ill-formed (e.g. when F is not a callable type at all). C++14 changes that to a [SFINAE](../language/sfinae.html "cpp/language/sfinae") (when F is not callable, `std::result_of<F(ArgTypes...)>` simply doesn't have the `type` member). 

The motivation behind `std::result_of` is to determine the result of invoking a [Callable](../named_req/Callable.html "cpp/named req/Callable"), in particular if that result type is different for different sets of arguments. 

F(Args...) is a function type with `Args...` being the argument types and `F` being the return type. As such, `std::result_of` suffers from several quirks that led to its deprecation in favor of `std::invoke_result` in C++17: 

  * `F` cannot be a function type or an array type (but can be a reference to them); 
  * if any of the `Args` has type "array of `T`" or a function type `T`, it is automatically adjusted to `T*`; 
  * neither `F` nor any of `Args...` can be an abstract class type; 
  * if any of `Args...` has a top-level cv-qualifier, it is discarded; 
  * none of `Args...` may be of type void. 



To avoid these quirks, `result_of` is often used with reference types as `F` and `Args...`. For example: 
    
    
    template<class F, class... Args>
    std::result_of_t<F&&(Args&&...)> // instead of std::result_of_t<F(Args...)>, which is wrong
        my_invoke(F&& f, Args&&... args)
        {
            /* implementation */
        }

### Notes

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_result_of_sfinae`](../experimental/feature_test.html#cpp_lib_result_of_sfinae "cpp/feature test") | [`201210L`](../compiler_support/14.html#cpp_lib_result_of_sfinae_201210L "cpp/compiler support/14") | (C++14) | `std::result_of` and [SFINAE](../language/sfinae.html "cpp/language/sfinae")  
[`__cpp_lib_is_invocable`](../experimental/feature_test.html#cpp_lib_is_invocable "cpp/feature test") | [`201703L`](../compiler_support/17.html#cpp_lib_is_invocable_201703L "cpp/compiler support/17") | (C++17) | [`std::is_invocable`](is_invocable.html "cpp/types/is invocable"), `std::invoke_result`  
  
### Examples

Run this code
    
    
    #include <iostream>
    #include <type_traits>
     
    struct S
    {
        double operator()(char, int&);
        float operator()(int) { return 1.0; }
    };
     
    template<class T>
    typename std::result_of<T(int)>::type f(T& t)
    {
        [std::cout](../io/cout.html) << "overload of f for callable T\n";
        return t(0);
    }
     
    template<class T, class U>
    int f(U u)
    {
        [std::cout](../io/cout.html) << "overload of f for non-callable T\n";
        return u;
    }
     
    int main()
    {
        // the result of invoking S with char and int& arguments is double
        std::result_of<S(char, int&)>::type d = 3.14; // d has type double
        static_assert([std::is_same](is_same.html)<decltype(d), double>::value, "");
     
        // std::invoke_result uses different syntax (no parentheses)
        std::invoke_result<S,char,int&>::type b = 3.14;
        static_assert([std::is_same](is_same.html)<decltype(b), double>::value, "");
     
        // the result of invoking S with int argument is float
        std::result_of<S(int)>::type x = 3.14; // x has type float
        static_assert([std::is_same](is_same.html)<decltype(x), float>::value, "");
     
        // result_of can be used with a pointer to member function as follows
        struct C { double Func(char, int&); };
        std::result_of<decltype(&C::Func)(C, char, int&)>::type g = 3.14;
        static_assert([std::is_same](is_same.html)<decltype(g), double>::value, "");
     
        f<C>(1); // may fail to compile in C++11; calls the non-callable overload in C++14
    }

Output: 
    
    
    overload of f for non-callable T

### See also

[ invokeinvoke_r](../utility/functional/invoke.html "cpp/utility/functional/invoke")(C++17)(C++23) |  invokes any [Callable](../named_req/Callable.html "cpp/named req/Callable") object with given arguments and possibility to specify return type(since C++23)   
(function template)   
---|---  
[ is_invocableis_invocable_ris_nothrow_invocableis_nothrow_invocable_r](is_invocable.html "cpp/types/is invocable")(C++17) |  checks if a type can be invoked (as if by [std::invoke](../utility/functional/invoke.html "cpp/utility/functional/invoke")) with the given argument types   
(class template)   
[ declval](../utility/declval.html "cpp/utility/declval")(C++11) |  obtains a reference to an object of the template type argument for use in an unevaluated context   
(function template) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
