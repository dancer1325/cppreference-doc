
  


  
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
**disjunction**(C++17)  
[negation](negation.html "cpp/types/negation")(C++17)  
  
  
  
  
  
  
  
  
  
  
  


Defined in header `[<type_traits>](../header/type_traits.html "cpp/header/type traits")` |  |   
---|---|---  
template< class... B >  
struct disjunction; |  |  (since C++17)  
| |   
  
Forms the [logical disjunction](https://en.wikipedia.org/wiki/Logical_disjunction "enwiki:Logical disjunction") of the type traits B..., effectively performing a logical OR on the sequence of traits. 

The specialization std::disjunction<B1, ..., BN> has a public and unambiguous base that is 

  * if sizeof...(B) == 0, [std::false_type](integral_constant.html); otherwise 
  * the first type `Bi` in `B1, ..., BN` for which bool(Bi::value) == true, or `BN` if there is no such type. 



The member names of the base class, other than `disjunction` and `operator=`, are not hidden and are unambiguously available in `disjunction`. 

Disjunction is short-circuiting: if there is a template type argument `Bi` with bool(Bi::value) != false, then instantiating disjunction<B1, ..., BN>::value does not require the instantiation of Bj::value for `j > i`. 

If the program adds specializations for `std::disjunction` or `std::disjunction_v`, the behavior is undefined. 

## Contents

  * [1 Template parameters](disjunction.html#Template_parameters)
  * [2 Helper variable template](disjunction.html#Helper_variable_template)
  * [3 Possible implementation](disjunction.html#Possible_implementation)
  * [4 Notes](disjunction.html#Notes)
  * [5 Example](disjunction.html#Example)
  * [6 See also](disjunction.html#See_also)

  
---  
  
### Template parameters

B...  |  \-  |  every template argument `Bi` for which Bi::value is instantiated must be usable as a base class and define member `value` that is convertible to bool  
---|---|---  
  
### Helper variable template

template< class... B >  
constexpr bool disjunction_v = disjunction<B...>::value; |  |  (since C++17)  
---|---|---  
| |   
  
### Possible implementation
    
    
    template<class...>
    struct disjunction : [std::false_type](integral_constant.html) {};
     
    template<class B1>
    struct disjunction<B1> : B1 {};
     
    template<class B1, class... Bn>
    struct disjunction<B1, Bn...>
        : [std::conditional_t](conditional.html)<bool(B1::value), B1, disjunction<Bn...>>  {};  
  
---  
  
### Notes

A specialization of `disjunction` does not necessarily inherit from of either [std::true_type](integral_constant.html) or [std::false_type](integral_constant.html): it simply inherits from the first `B` whose `::value`, explicitly converted to bool, is true, or from the very last `B` when all of them convert to false. For example, std::disjunction<[std::integral_constant](integral_constant.html)<int, 2>, [std::integral_constant](integral_constant.html)<int, 4>>::value is 2. 

The short-circuit instantiation differentiates `disjunction` from [fold expressions](../language/fold.html "cpp/language/fold"): a fold expression like (... || Bs::value) instantiates every `B` in `Bs`, while std::disjunction_v<Bs...> stops instantiation once the value can be determined. This is particularly useful if the later type is expensive to instantiate or can cause a hard error when instantiated with the wrong type. 

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_logical_traits`](../experimental/feature_test.html#cpp_lib_logical_traits "cpp/feature test") | [`201510L`](../compiler_support/17.html#cpp_lib_logical_traits_201510L "cpp/compiler support/17") | (C++17) | [Logical operator type traits](../meta.html#Operations_on_traits "cpp/meta")  
  
### Example

Run this code
    
    
    #include <cstdint>
    #include <string>
    #include <type_traits>
     
    // values_equal<a, b, T>::value is true if and only if a == b.
    template<auto V1, decltype(V1) V2, typename T>
    struct values_equal : [std::bool_constant](integral_constant.html)<V1 == V2>
    {
        using type = T;
    };
     
    // default_type<T>::value is always true
    template<typename T>
    struct default_type : [std::true_type](integral_constant.html)
    {
        using type = T;
    };
     
    // Now we can use disjunction like a switch statement:
    template<int I>
    using int_of_size = typename std::disjunction< //
        values_equal<I, 1, [std::int8_t](integer.html)>,           //
        values_equal<I, 2, [std::int16_t](integer.html)>,          //
        values_equal<I, 4, [std::int32_t](integer.html)>,          //
        values_equal<I, 8, [std::int64_t](integer.html)>,          //
        default_type<void>                         // must be last!
        >::type;
     
    static_assert(sizeof(int_of_size<1>) == 1);
    static_assert(sizeof(int_of_size<2>) == 2);
    static_assert(sizeof(int_of_size<4>) == 4);
    static_assert(sizeof(int_of_size<8>) == 8);
    static_assert([std::is_same_v](is_same.html)<int_of_size<13>, void>);
     
    // checking if Foo is constructible from double will cause a hard error
    struct Foo
    {
        template<class T>
        struct sfinae_unfriendly_check { static_assert(![std::is_same_v](is_same.html)<T, double>); };
     
        template<class T>
        Foo(T, sfinae_unfriendly_check<T> = {});
    };
     
    template<class... Ts>
    struct first_constructible
    {
        template<class T, class...Args>
        struct is_constructible_x : [std::is_constructible](is_constructible.html)<T, Args...>
        {
            using type = T;
        };
     
        struct fallback
        {
            static constexpr bool value = true;
            using type = void; // type to return if nothing is found
        };
     
        template<class... Args>
        using with = typename std::disjunction<is_constructible_x<Ts, Args...>...,
                                               fallback>::type;
    };
     
    // OK, is_constructible<Foo, double> not instantiated
    static_assert([std::is_same_v](is_same.html)<first_constructible<[std::string](../string/basic_string.html), int, Foo>::with<double>,
                                 int>);
     
    static_assert([std::is_same_v](is_same.html)<first_constructible<[std::string](../string/basic_string.html), int>::with<>, [std::string](../string/basic_string.html)>);
    static_assert([std::is_same_v](is_same.html)<first_constructible<[std::string](../string/basic_string.html), int>::with<const char*>,
                                 [std::string](../string/basic_string.html)>);
    static_assert([std::is_same_v](is_same.html)<first_constructible<[std::string](../string/basic_string.html), int>::with<void*>, void>);
     
    int main() {}

### See also

[ negation](negation.html "cpp/types/negation")(C++17) |  logical NOT metafunction   
(class template)   
---|---  
[ conjunction](conjunction.html "cpp/types/conjunction")(C++17) |  variadic logical AND metafunction   
(class template) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
