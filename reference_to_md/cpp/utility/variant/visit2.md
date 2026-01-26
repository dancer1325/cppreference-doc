 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::variant`](../variant.html "cpp/utility/variant")

[Member functions](../variant.html#Member_functions "cpp/utility/variant")  
---  
[variant::variant](variant.html "cpp/utility/variant/variant")  
[variant::~variant](~variant.html "cpp/utility/variant/~variant")  
[variant::operator=](operator=.html "cpp/utility/variant/operator=")  
[Observers](../variant.html#Observers "cpp/utility/variant")  
[variant::index](index.html "cpp/utility/variant/index")  
[variant::valueless_by_exception](valueless_by_exception.html "cpp/utility/variant/valueless by exception")  
[Modifiers](../variant.html#Modifiers "cpp/utility/variant")  
[variant::emplace](emplace.html "cpp/utility/variant/emplace")  
[variant::swap](swap.html "cpp/utility/variant/swap")  
[Visitation](../variant.html#Visitation "cpp/utility/variant")  
[variant::visit](visit.html "cpp/utility/variant/visit")(C++26)  
[Non-member functions](../variant.html#Non-member_functions "cpp/utility/variant")  
**visit(std::variant)**  
[holds_alternative](holds_alternative.html "cpp/utility/variant/holds alternative")  
[get(std::variant)](get.html "cpp/utility/variant/get")  
[get_if](get_if.html "cpp/utility/variant/get if")  
[operator==operator!=operator<operator<=operator>operator>=operator<=>](operator_cmp.html "cpp/utility/variant/operator cmp")(C++20)  
[swap(std::variant)](swap2.html "cpp/utility/variant/swap2")  
[Helper classes](../variant.html#Helper_classes "cpp/utility/variant")  
[monostate](monostate.html "cpp/utility/variant/monostate")  
[bad_variant_access](bad_variant_access.html "cpp/utility/variant/bad variant access")  
[variant_size](variant_size.html "cpp/utility/variant/variant size")  
[variant_alternative](variant_alternative.html "cpp/utility/variant/variant alternative")  
[hash<std::variant>](hash.html "cpp/utility/variant/hash")  
[Helper objects](../variant.html#Helper_objects "cpp/utility/variant")  
[variant_npos](variant_npos.html "cpp/utility/variant/variant npos")  
  


Defined in header `[<variant>](../../header/variant.html "cpp/header/variant")` |  |   
---|---|---  
template< class Visitor, class... Variants >  
constexpr /* see below */ visit( Visitor&& v, Variants&&... values ); |  (1)  |  (since C++17)  
template< class R, class Visitor, class... Variants >  
constexpr R visit( Visitor&& v, Variants&&... values ); |  (2)  |  (since C++20)  
Helper templates |  |   
template< class... Ts >  
auto&& as-variant( [std::variant](../variant.html)<Ts...>& value ); |  (3)  |  (exposition only*)  
template< class... Ts >  
auto&& as-variant( const [std::variant](../variant.html)<Ts...>& value ); |  (4)  |  (exposition only*)  
template< class... Ts >  
auto&& as-variant( [std::variant](../variant.html)<Ts...>&& value ); |  (5)  |  (exposition only*)  
template< class... Ts >  
auto&& as-variant( const [std::variant](../variant.html)<Ts...>&& value ); |  (6)  |  (exposition only*)  
| |   
  
Applies the visitor v (a [Callable](../../named_req/Callable.html "cpp/named req/Callable") that can be called with any combination of types from Variants) to the Variants values. 

Given `VariantBases` as decltype(`_as-variant_`([std::forward](../forward.html)<Variants>(values))... (a pack of sizeof...(Variants) types): 

1) Invokes v as if by 

[`_INVOKE_`](../../functional.html "cpp/utility/functional")([std::forward](../forward.html)<Visitor>(v),  
std::get<indices>([std::forward](../forward.html)<VariantBases>(values))...), 

where indices is `_as-variant_`(values).index()....

2) Invokes v as if by 

[`_INVOKE <R>_`](../../functional.html "cpp/utility/functional")([std::forward](../forward.html)<Visitor>(v),  
std::get<indices>([std::forward](../forward.html)<VariantBases>(values))...), 

where indices is `_as-variant_`(values).index()....

These overloads participate in overload resolution only if every type in `VariantBases` is a valid type. If the expression denoted by [`_INVOKE_`](../../functional.html "cpp/utility/functional") or [`_INVOKE <R>_`](../../functional.html "cpp/utility/functional")(since C++20) is invalid, or the results of [`_INVOKE_`](../../functional.html "cpp/utility/functional") or [`_INVOKE <R>_`](../../functional.html "cpp/utility/functional")(since C++20) have different types or value categories for different indices, the program is ill-formed. 

3-6) The exposition-only `_as-variant_` function templates accept a value whose type can be [deduced](../../language/template_argument_deduction.html "cpp/language/template argument deduction") for [std::variant](../variant.html)<Ts...> (i.e., either [std::variant](../variant.html)<Ts...> or a type derived from [std::variant](../variant.html)<Ts...>), and return the [std::variant](../variant.html "cpp/utility/variant") value with the same const-qualification and value category.

3,4) Returns value.

5,6) Returns std::move(value).

## Contents

  * [1 Parameters](visit2.html#Parameters)
  * [2 Return value](visit2.html#Return_value)
  * [3 Exceptions](visit2.html#Exceptions)
  * [4 Complexity](visit2.html#Complexity)
  * [5 Notes](visit2.html#Notes)
  * [6 Example](visit2.html#Example)
  * [7 Defect reports](visit2.html#Defect_reports)
  * [8 See also](visit2.html#See_also)

  
---  
  
### Parameters

v  |  \-  |  a [Callable](../../named_req/Callable.html "cpp/named req/Callable") that accepts every possible alternative from every variant in Variants  
---|---|---  
values  |  \-  |  list of variants to pass to the visitor   
  
### Return value

1) The result of the [`_INVOKE_`](../../functional.html "cpp/utility/functional") operation. The return type is the type obtained from applying [`decltype`](../../language/decltype.html "cpp/language/decltype") to the result.

2) Nothing if `R` is (possibly cv-qualified) void; otherwise the result of the [`_INVOKE <R>_`](../../functional.html "cpp/utility/functional") operation.

3-6) A [std::variant](../variant.html "cpp/utility/variant") value converted from value.

### Exceptions

Throws [std::bad_variant_access](bad_variant_access.html "cpp/utility/variant/bad variant access") if `_as-variant_`(value_i).valueless_by_exception() is true for any variant value_i in values. 

### Complexity

When the number of variants is zero or one, the invocation of the callable object is implemented in constant time; i.e., it does not depend on the number of types can be stored in the variant. 

If the number of variants is larger than one, the invocation of the callable object has no complexity requirements. 

### Notes

Let n be (1 * ... * [std::variant_size_v](variant_size.html)<[std::remove_reference_t](../../types/remove_reference.html)<VariantBases>>), implementations usually generate a table equivalent to an (possibly multidimensional) array of n function pointers for every specialization of `std::visit`, which is similar to the implementation of [virtual functions](../../language/virtual.html "cpp/language/virtual"). 

Implementations may also generate a [switch statement](../../language/switch.html "cpp/language/switch") with n branches for `std::visit` (e.g., the MSVC STL implementation uses a switch statement when n is not greater than 256). 

On typical implementations, the time complexity of the invocation of v can be considered equal to that of access to an element in an (possibly multidimensional) array or execution of a switch statement. 

[Feature-test](../feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_variant`](../../experimental/feature_test.html#cpp_lib_variant "cpp/feature test") | [`202102L`](../../compiler_support/23.html#cpp_lib_variant_202102L "cpp/compiler support/23") | (C++23)  
(DR17) | `std::visit` for classes derived from [std::variant](../variant.html "cpp/utility/variant")  
  
### Example

Run this code
    
    
    #include <iomanip>
    #include <iostream>
    #include <string>
    #include <type_traits>
    #include <variant>
    #include <vector>
     
    // the variant to visit
    using value_t = [std::variant](../variant.html)<int, long, double, [std::string](../../string/basic_string.html)>;
     
    // helper type for the visitor #4
    template<class... Ts>
    struct overloaded : Ts... { using Ts::operator()...; };
    // explicit deduction guide (not needed as of C++20)
    template<class... Ts>
    overloaded(Ts...) -> overloaded<Ts...>;
     
    int main()
    {
        [std::vector](../../container/vector.html)<value_t> vec = {10, 15l, 1.5, "hello"};
     
        for (auto& v: vec)
        {
            // 1. void visitor, only called for side-effects (here, for I/O)
            [std::visit](visit.html)([](auto&& arg){ [std::cout](../../io/cout.html) << arg; }, v);
     
            // 2. value-returning visitor, demonstrates the idiom of returning another variant
            value_t w = [std::visit](visit.html)([](auto&& arg) -> value_t { return arg + arg; }, v);
     
            // 3. type-matching visitor: a lambda that handles each type differently
            [std::cout](../../io/cout.html) << ". After doubling, variant holds ";
            [std::visit](visit.html)([](auto&& arg)
            {
                using T = [std::decay_t](../../types/decay.html)<decltype(arg)>;
                if constexpr ([std::is_same_v](../../types/is_same.html)<T, int>)
                    [std::cout](../../io/cout.html) << "int with value " << arg << '\n';
                else if constexpr ([std::is_same_v](../../types/is_same.html)<T, long>)
                    [std::cout](../../io/cout.html) << "long with value " << arg << '\n';
                else if constexpr ([std::is_same_v](../../types/is_same.html)<T, double>)
                    [std::cout](../../io/cout.html) << "double with value " << arg << '\n';
                else if constexpr ([std::is_same_v](../../types/is_same.html)<T, [std::string](../../string/basic_string.html)>)
                    [std::cout](../../io/cout.html) << "std::string with value " << [std::quoted](../../io/manip/quoted.html)(arg) << '\n';
                else
                    static_assert(false, "non-exhaustive visitor!");
            }, w);
        }
     
        for (auto& v: vec)
        {
            // 4. another type-matching visitor: a class with 3 overloaded operator()'s
            // Note: The `(auto arg)` template operator() will bind to `int` and `long`
            //       in this case, but in its absence the `(double arg)` operator()
            //       *will also* bind to `int` and `long` because both are implicitly
            //       convertible to double. When using this form, care has to be taken
            //       that implicit conversions are handled correctly.
            [std::visit](visit.html)(overloaded{
                [](auto arg) { [std::cout](../../io/cout.html) << arg << ' '; },
                [](double arg) { [std::cout](../../io/cout.html) << [std::fixed](../../io/manip/fixed.html) << arg << ' '; },
                [](const [std::string](../../string/basic_string.html)& arg) { [std::cout](../../io/cout.html) << [std::quoted](../../io/manip/quoted.html)(arg) << ' '; }
            }, v);
        }
    }

Output: 
    
    
    10. After doubling, variant holds int with value 20
    15. After doubling, variant holds long with value 30
    1.5. After doubling, variant holds double with value 3
    hello. After doubling, variant holds std::string with value "hellohello"
    10 15 1.500000 "hello"

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2970](https://cplusplus.github.io/LWG/issue2970) | C++17  | the return type of overload (1) did not preserve the  
value category of the result of the `_INVOKE_` operation  | preserves   
[LWG 3052](https://cplusplus.github.io/LWG/issue3052)  
([P2162R2](https://wg21.link/P2162R2))  | C++17  | the effects were unspecified if any type  
in `Variants` is not a [std::variant](../variant.html "cpp/utility/variant") | specified   
  
### See also

[ visit](visit.html "cpp/utility/variant/visit")(C++26) |  calls the provided functor with the argument held by the `variant`   
(public member function)   
---|---  
[ swap](swap.html "cpp/utility/variant/swap") |  swaps with another `variant`   
(public member function) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
