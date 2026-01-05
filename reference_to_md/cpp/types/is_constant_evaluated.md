
  


[Utilities library](../utility.html "cpp/utility")

| [Language support](../utility.html#Language_support "cpp/utility")  
---  
[Type support](../utility/rtti.html "cpp/types") (basic types, RTTI)  
[Library feature-test macros](../utility/feature_test.html "cpp/utility/feature test") (C++20)  
[Program utilities](../utility/program.html "cpp/utility/program")  
[Variadic functions](../utility/variadic.html "cpp/utility/variadic")  
[initializer_list](../utility/initializer_list.html "cpp/utility/initializer list")(C++11)  
**is_constant_evaluated**(C++20)  
[is_within_lifetime](is_within_lifetime.html "cpp/types/is within lifetime")(C++26)  
[source_location](../utility/source_location.html "cpp/utility/source location")(C++20)  
[Coroutine support](../coroutine.html "cpp/coroutine") (C++20)  
[Contract support](../contract.html "cpp/contract") (C++26)  
[Three-way comparison](../utility.html#Three-way_comparison "cpp/utility")  
[three_way_comparablethree_way_comparable_with](../utility/compare/three_way_comparable.html "cpp/utility/compare/three way comparable")(C++20)(C++20)  
[strong_ordering](../utility/compare/strong_ordering.html "cpp/utility/compare/strong ordering")(C++20)  
[weak_ordering](../utility/compare/weak_ordering.html "cpp/utility/compare/weak ordering")(C++20)  
[partial_ordering](../utility/compare/partial_ordering.html "cpp/utility/compare/partial ordering")(C++20)  
[common_comparison_category](../utility/compare/common_comparison_category.html "cpp/utility/compare/common comparison category")(C++20)  
[compare_three_way_result](../utility/compare/compare_three_way_result.html "cpp/utility/compare/compare three way result")(C++20)  
[compare_three_way](../utility/compare/compare_three_way.html "cpp/utility/compare/compare three way")(C++20)  
[strong_order](../utility/compare/strong_order.html "cpp/utility/compare/strong order")(C++20)  
[weak_order](../utility/compare/weak_order.html "cpp/utility/compare/weak order")(C++20)  
[partial_order](../utility/compare/partial_order.html "cpp/utility/compare/partial order")(C++20)  
[compare_strong_order_fallback](../utility/compare/compare_strong_order_fallback.html "cpp/utility/compare/compare strong order fallback")(C++20)  
[compare_weak_order_fallback](../utility/compare/compare_weak_order_fallback.html "cpp/utility/compare/compare weak order fallback")(C++20)  
[compare_partial_order_fallback](../utility/compare/compare_partial_order_fallback.html "cpp/utility/compare/compare partial order fallback")(C++20)` `  
|  | [is_eqis_ltis_lteq](../utility/compare/named_comparison_functions.html "cpp/utility/compare/named comparison functions")(C++20)(C++20)(C++20)` `  
---  
  
| [is_neqis_gtis_gteq](../utility/compare/named_comparison_functions.html "cpp/utility/compare/named comparison functions")(C++20)(C++20)(C++20)  
---  
  
  
  
  
| General utilities  
---  
| [Function objects](../functional.html "cpp/utility/functional")  
---  
[Bit manipulation](../utility/bit.html "cpp/utility/bit") (C++20)  
[C-style bit manipulation](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/stdbit&action=edit&redlink=1 "cpp/utility/stdbit \(page does not exist\)") (C++26)  
[bitset](../utility/bitset.html "cpp/utility/bitset")  
[hash](../utility/hash.html "cpp/utility/hash")(C++11)  
  
[Relational operators](../utility.html#Relational_operators "cpp/utility") (deprecated in C++20)  
|  | [rel_ops::operator!=rel_ops::operator>](../utility/rel_ops/operator_cmp.html "cpp/utility/rel ops/operator cmp")` `  
---  
  
| [rel_ops::operator<=rel_ops::operator>=](../utility/rel_ops/operator_cmp.html "cpp/utility/rel ops/operator cmp")  
---  
  
[Integer comparison functions](../utility.html#Integer_comparison_functions "cpp/utility")  
| [cmp_equalcmp_lesscmp_less_than](../utility/intcmp.html "cpp/utility/intcmp")(C++20)(C++20)(C++20)` `  
---  
  
| [cmp_not_equalcmp_greatercmp_greater_than](../utility/intcmp.html "cpp/utility/intcmp")(C++20)(C++20)(C++20)  
---  
  
[in_range](../utility/in_range.html "cpp/utility/in range")(C++20)  
[Swap](../utility.html#Swap "cpp/utility") and [type operations](../utility.html#Type_operations "cpp/utility")  
| [swap](../utility/swap.html "cpp/algorithm/swap")  
---  
[ranges::swap](../utility/ranges/swap.html "cpp/utility/ranges/swap")(C++20)  
[exchange](../utility/exchange.html "cpp/utility/exchange")(C++14)  
[declval](../utility/declval.html "cpp/utility/declval")(C++11)  
[to_underlying](../utility/to_underlying.html "cpp/utility/to underlying")(C++23)  
  
| [forward](../utility/forward.html "cpp/utility/forward")(C++11)  
---  
[forward_like](../utility/forward_like.html "cpp/utility/forward like")(C++23)  
[move](../utility/move.html "cpp/utility/move")(C++11)  
[move_if_noexcept](../utility/move_if_noexcept.html "cpp/utility/move if noexcept")(C++11)  
[as_const](../utility/as_const.html "cpp/utility/as const")(C++17)  
  
Common vocabulary types  
| [pair](../utility/pair.html "cpp/utility/pair")  
---  
[tuple](../utility/tuple.html "cpp/utility/tuple")(C++11)  
[optional](../utility/optional.html "cpp/utility/optional")(C++17)  
[any](../utility/any.html "cpp/utility/any")(C++17)  
[variant](../utility/variant.html "cpp/utility/variant")(C++17)  
  
| [tuple_size](../utility/tuple_size.html "cpp/utility/tuple size")(C++11)  
---  
[tuple_element](../utility/tuple_element.html "cpp/utility/tuple element")(C++11)  
[apply](../utility/apply.html "cpp/utility/apply")(C++17)  
[make_from_tuple](../utility/make_from_tuple.html "cpp/utility/make from tuple")(C++17)  
[expected](../utility/expected.html "cpp/utility/expected")(C++23)  
  
  
  
  
  
  


Defined in header `[<type_traits>](../header/type_traits.html "cpp/header/type traits")` |  |   
---|---|---  
constexpr bool is_constant_evaluated() noexcept; |  |  (since C++20)  
| |   
  
Detects whether the function call occurs within a constant-evaluated context. Returns true if the evaluation of the call occurs within the evaluation of an expression or conversion that is [manifestly constant-evaluated](../language/constant_expression.html#Manifestly_constant-evaluated_expressions "cpp/language/constant expression"); otherwise returns false. 

To determine whether initializers of following variables are manifestly constant-evaluated, compilers may first perform a trial constant evaluation: 

  * variables with reference type or const-qualified integral or enumeration type; 
  * static and thread local variables. 



It is not recommended to depend on the result in this case. 
    
    
    int y = 0;
    const int a = std::is_constant_evaluated() ? y : 1;
    // Trial constant evaluation fails. The constant evaluation is discarded.
    // Variable a is dynamically initialized with 1
     
    const int b = std::is_constant_evaluated() ? 2 : y;
    // Constant evaluation with std::is_constant_evaluated() == true succeeds.
    // Variable b is statically initialized with 2

## Contents

  * [1 Parameters](is_constant_evaluated.html#Parameters)
  * [2 Return value](is_constant_evaluated.html#Return_value)
  * [3 Possible implementation](is_constant_evaluated.html#Possible_implementation)
  * [4 Notes](is_constant_evaluated.html#Notes)
  * [5 Example](is_constant_evaluated.html#Example)
  * [6 See also](is_constant_evaluated.html#See_also)

  
---  
  
### Parameters

(none) 

### Return value

true if the evaluation of the call occurs within the evaluation of an expression or conversion that is manifestly constant-evaluated; otherwise false. 

### Possible implementation
    
    
    // This implementation requires C++23 if consteval.
    constexpr bool is_constant_evaluated() noexcept
    {
        if consteval
        {
            return true;
        }
        else 
        {
            return false;
        }
    }  
  
---  
  
### Notes

When directly used as the condition of [`static_assert`](../language/static_assert.html "cpp/language/static assert") declaration or [constexpr if statement](../language/if.html#constexpr_if "cpp/language/if"), std::is_constant_evaluated() always returns true. 

Because [`if consteval`](../language/if.html#Consteval_if "cpp/language/if") is absent in C++20, `std::is_constant_evaluated` is typically implemented using a compiler extension. 

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_is_constant_evaluated`](../experimental/feature_test.html#cpp_lib_is_constant_evaluated "cpp/feature test") | [`201811L`](../compiler_support/20.html#cpp_lib_is_constant_evaluated_201811L "cpp/compiler support/20") | (C++20) | `std::is_constant_evaluated`  
  
### Example

Run this code
    
    
    #include <cmath>
    #include <iostream>
    #include <type_traits>
     
    constexpr double power(double b, int x)
    {
        if (std::is_constant_evaluated() && !(b == 0.0 && x < 0))
        {
            // A constant-evaluation context: Use a constexpr-friendly algorithm.
            if (x == 0)
                return 1.0;
            double r {1.0};
            double p {x > 0 ? b : 1.0 / b};
            for (auto u = unsigned(x > 0 ? x : -x); u != 0; u /= 2)
            {
                if (u & 1)
                    r *= p;
                p *= p;
            }
            return r;
        }
        else
        {
            // Let the code generator figure it out.
            return [std::pow](../numeric/math/pow.html)(b, double(x));
        }
    }
     
    int main()
    {
        // A constant-expression context
        constexpr double kilo = power(10.0, 3);
        int n = 3;
        // Not a constant expression, because n cannot be converted to an rvalue
        // in a constant-expression context
        // Equivalent to std::pow(10.0, double(n))
        double mucho = power(10.0, n);
     
        [std::cout](../io/cout.html) << kilo << " " << mucho << "\n"; // (3)
    }

Output: 
    
    
    1000 1000

### See also

[ `constexpr` specifier](../language/constexpr.html "cpp/language/constexpr")(C++11) |  specifies that the value of a variable or function can be computed at compile time  
---|---  
[ `consteval` specifier](../language/consteval.html "cpp/language/consteval")(C++20) |  specifies that a function is an _immediate function_ , that is, every call to the function must be in a constant evaluation  
[ `constinit` specifier](../language/constinit.html "cpp/language/constinit")(C++20) |  asserts that a variable has static initialization, i.e. [zero initialization](../language/zero_initialization.html "cpp/language/zero initialization") and [constant initialization](../language/constant_initialization.html "cpp/language/constant initialization")
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
