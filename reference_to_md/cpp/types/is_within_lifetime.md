
  


[Utilities library](../utility.html "cpp/utility")

| [Language support](../utility.html#Language_support "cpp/utility")  
---  
[Type support](../utility/rtti.html "cpp/types") (basic types, RTTI)  
[Library feature-test macros](../utility/feature_test.html "cpp/utility/feature test") (C++20)  
[Program utilities](../utility/program.html "cpp/utility/program")  
[Variadic functions](../utility/variadic.html "cpp/utility/variadic")  
[initializer_list](../utility/initializer_list.html "cpp/utility/initializer list")(C++11)  
[is_constant_evaluated](is_constant_evaluated.html "cpp/types/is constant evaluated")(C++20)  
**is_within_lifetime**(C++26)  
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
template< class T >  
consteval bool is_within_lifetime( const T* ptr ) noexcept; |  |  (since C++26)  
| |   
  
Determines whether the pointer ptr points to an object that is within its [lifetime](../language/lifetime.html "cpp/language/lifetime"). 

During the evaluation of an expression E as a core constant expression, a call to `std::is_within_lifetime` is ill-formed unless ptr points to an object 

  * that is [usable in constant expressions](../language/constant_expression.html#Usable_in_constant_expressions "cpp/language/constant expression"), or 
  * whose complete object’s lifetime began within E. 



## Contents

  * [1 Parameters](is_within_lifetime.html#Parameters)
  * [2 Return value](is_within_lifetime.html#Return_value)
  * [3 Notes](is_within_lifetime.html#Notes)
  * [4 Example](is_within_lifetime.html#Example)

  
---  
  
### Parameters

p  |  \-  |  pointer to detect   
---|---|---  
  
### Return value

true if pointer ptr points to an object that is within its lifetime; otherwise false. 

### Notes

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_is_within_lifetime`](../experimental/feature_test.html#cpp_lib_is_within_lifetime "cpp/feature test") | [`202306L`](../compiler_support/26.html#cpp_lib_is_within_lifetime_202306L "cpp/compiler support/26") | (C++26) | Checking if a union alternative is active   
  
### Example

`std::is_within_lifetime` can be used to check whether a union member is active:

Run this code
    
    
    #include <type_traits>
     
    // an optional boolean type occupying only one byte,
    // assuming sizeof(bool) == sizeof(char)
    struct optional_bool
    {
        union { bool b; char c; };
     
        // assuming the value representations for true and false
        // are distinct from the value representation for 2
        constexpr optional_bool() : c(2) {}
        constexpr optional_bool(bool b) : b(b) {}
     
        constexpr auto has_value() const -> bool
        {
            if consteval
            {
                return std::is_within_lifetime(&b); // during constant evaluation,
                                                    // cannot read from c
            }
            else
            {
                return c != 2; // during runtime, must read from c
            }
        }
     
        constexpr auto operator*() -> bool&
        {
            return b;
        }
    };
     
    int main()
    {
        constexpr optional_bool disengaged;
        constexpr optional_bool engaged(true);
     
        static_assert(!disengaged.has_value());
        static_assert(engaged.has_value());
        static_assert(*engaged);
    }
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
