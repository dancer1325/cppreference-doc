
  


[Utilities library](../utility.html "cpp/utility")

| [Language support](../utility.html#Language_support "cpp/utility")  
---  
[Type support](rtti.html "cpp/types") (basic types, RTTI)  
[Library feature-test macros](feature_test.html "cpp/utility/feature test") (C++20)  
[Program utilities](program.html "cpp/utility/program")  
[Variadic functions](variadic.html "cpp/utility/variadic")  
[initializer_list](initializer_list.html "cpp/utility/initializer list")(C++11)  
[is_constant_evaluated](../types/is_constant_evaluated.html "cpp/types/is constant evaluated")(C++20)  
[is_within_lifetime](../types/is_within_lifetime.html "cpp/types/is within lifetime")(C++26)  
[source_location](source_location.html "cpp/utility/source location")(C++20)  
[Coroutine support](../coroutine.html "cpp/coroutine") (C++20)  
[Contract support](../contract.html "cpp/contract") (C++26)  
[Three-way comparison](../utility.html#Three-way_comparison "cpp/utility")  
[three_way_comparablethree_way_comparable_with](compare/three_way_comparable.html "cpp/utility/compare/three way comparable")(C++20)(C++20)  
[strong_ordering](compare/strong_ordering.html "cpp/utility/compare/strong ordering")(C++20)  
[weak_ordering](compare/weak_ordering.html "cpp/utility/compare/weak ordering")(C++20)  
[partial_ordering](compare/partial_ordering.html "cpp/utility/compare/partial ordering")(C++20)  
[common_comparison_category](compare/common_comparison_category.html "cpp/utility/compare/common comparison category")(C++20)  
[compare_three_way_result](compare/compare_three_way_result.html "cpp/utility/compare/compare three way result")(C++20)  
[compare_three_way](compare/compare_three_way.html "cpp/utility/compare/compare three way")(C++20)  
[strong_order](compare/strong_order.html "cpp/utility/compare/strong order")(C++20)  
[weak_order](compare/weak_order.html "cpp/utility/compare/weak order")(C++20)  
[partial_order](compare/partial_order.html "cpp/utility/compare/partial order")(C++20)  
[compare_strong_order_fallback](compare/compare_strong_order_fallback.html "cpp/utility/compare/compare strong order fallback")(C++20)  
[compare_weak_order_fallback](compare/compare_weak_order_fallback.html "cpp/utility/compare/compare weak order fallback")(C++20)  
[compare_partial_order_fallback](compare/compare_partial_order_fallback.html "cpp/utility/compare/compare partial order fallback")(C++20)` `  
|  | [is_eqis_ltis_lteq](compare/named_comparison_functions.html "cpp/utility/compare/named comparison functions")(C++20)(C++20)(C++20)` `  
---  
  
| [is_neqis_gtis_gteq](compare/named_comparison_functions.html "cpp/utility/compare/named comparison functions")(C++20)(C++20)(C++20)  
---  
  
  
  
  
| General utilities  
---  
| [Function objects](../functional.html "cpp/utility/functional")  
---  
[Bit manipulation](bit.html "cpp/utility/bit") (C++20)  
[C-style bit manipulation](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/stdbit&action=edit&redlink=1 "cpp/utility/stdbit \(page does not exist\)") (C++26)  
[bitset](bitset.html "cpp/utility/bitset")  
[hash](hash.html "cpp/utility/hash")(C++11)  
  
[Relational operators](../utility.html#Relational_operators "cpp/utility") (deprecated in C++20)  
|  | [rel_ops::operator!=rel_ops::operator>](rel_ops/operator_cmp.html "cpp/utility/rel ops/operator cmp")` `  
---  
  
| [rel_ops::operator<=rel_ops::operator>=](rel_ops/operator_cmp.html "cpp/utility/rel ops/operator cmp")  
---  
  
[Integer comparison functions](../utility.html#Integer_comparison_functions "cpp/utility")  
| [cmp_equalcmp_lesscmp_less_than](intcmp.html "cpp/utility/intcmp")(C++20)(C++20)(C++20)` `  
---  
  
| [cmp_not_equalcmp_greatercmp_greater_than](intcmp.html "cpp/utility/intcmp")(C++20)(C++20)(C++20)  
---  
  
[in_range](in_range.html "cpp/utility/in range")(C++20)  
[Swap](../utility.html#Swap "cpp/utility") and [type operations](../utility.html#Type_operations "cpp/utility")  
| [swap](swap.html "cpp/algorithm/swap")  
---  
[ranges::swap](ranges/swap.html "cpp/utility/ranges/swap")(C++20)  
[exchange](exchange.html "cpp/utility/exchange")(C++14)  
[declval](declval.html "cpp/utility/declval")(C++11)  
[to_underlying](to_underlying.html "cpp/utility/to underlying")(C++23)  
  
| [forward](forward.html "cpp/utility/forward")(C++11)  
---  
[forward_like](forward_like.html "cpp/utility/forward like")(C++23)  
[move](move.html "cpp/utility/move")(C++11)  
[move_if_noexcept](move_if_noexcept.html "cpp/utility/move if noexcept")(C++11)  
[as_const](as_const.html "cpp/utility/as const")(C++17)  
  
Common vocabulary types  
| [pair](pair.html "cpp/utility/pair")  
---  
[tuple](tuple.html "cpp/utility/tuple")(C++11)  
[optional](optional.html "cpp/utility/optional")(C++17)  
[any](any.html "cpp/utility/any")(C++17)  
[variant](variant.html "cpp/utility/variant")(C++17)  
  
| **tuple_size**(C++11)  
---  
[tuple_element](tuple_element.html "cpp/utility/tuple element")(C++11)  
[apply](apply.html "cpp/utility/apply")(C++17)  
[make_from_tuple](make_from_tuple.html "cpp/utility/make from tuple")(C++17)  
[expected](expected.html "cpp/utility/expected")(C++23)  
  
  
  
  
  
  


Defined in header `[<array>](../header/array.html "cpp/header/array")` |  |   
---|---|---  
Defined in header `[<tuple>](../header/tuple.html "cpp/header/tuple")` |  |   
Defined in header `[<utility>](../header/utility.html "cpp/header/utility")` |  |   
Defined in header `[<ranges>](../header/ranges.html "cpp/header/ranges")` |  | (since C++20)  
Defined in header `[<complex>](../header/complex.html "cpp/header/complex")` |  | (since C++26)  
template< class T >  
struct tuple_size; // not defined |  (1)  |  (since C++11)  
template< class T >  
struct tuple_size< const T >  
: [std::integral_constant](../types/integral_constant.html)<[std::size_t](../types/size_t.html), std::tuple_size<T>::value> {}; |  (2)  |  (since C++11)  
template< class T >  
struct tuple_size< volatile T >  
: [std::integral_constant](../types/integral_constant.html)<[std::size_t](../types/size_t.html), std::tuple_size<T>::value> {}; |  (3)  |  (since C++11)   
(deprecated in C++20)  
template< class T >  
struct tuple_size< const volatile T >  
: [std::integral_constant](../types/integral_constant.html)<[std::size_t](../types/size_t.html), std::tuple_size<T>::value> {}; |  (4)  |  (since C++11)   
(deprecated in C++20)  
| |   
  
Provides access to the number of elements in a [tuple-like](tuple/tuple-like.html "cpp/utility/tuple/tuple-like") type as a compile-time constant expression. 

1) The primary template is not defined. An explicit (full) or partial specialization is required to make a type tuple-like.

2-4) Specializations for a cv-qualified types reuse the value from the corresponding cv-unqualified versions by default.

`std::tuple_size` interacts with the core language: it can provide [structured binding](../language/structured_binding.html "cpp/language/structured binding") support in the tuple-like case. (2-4) are SFINAE-friendly: if std::tuple_size<T>::value is ill-formed when treated as an unevaluated operand, they do not provide the member value. Access checking is performed as if in a context unrelated to `tuple_size` and `T`. Only the validity of the immediate context of the expression is considered. This allows 
    
    
    #include <utility>
     
    struct X { int a, b; };
    const auto [x, y] = X(); // structured binding declaration first attempts
                             // tuple_size<const X> which attempts to use tuple_size<X>::value,
                             // then soft error encountered, binds to public data members

| (since C++17)  
---|---  
  
## Contents

  * [1 Specializations](tuple_size.html#Specializations)
  * [2 Helper variable template](tuple_size.html#Helper_variable_template)
  * [3 Inherited from std::integral_constant](tuple_size.html#Inherited_from_std::integral_constant)
    * [3.1 Member constants](tuple_size.html#Member_constants)
    * [3.2 Member functions](tuple_size.html#Member_functions)
    * [3.3 Member types](tuple_size.html#Member_types)
    * [3.4 Example](tuple_size.html#Example)
    * [3.5 Defect reports](tuple_size.html#Defect_reports)
    * [3.6 See also](tuple_size.html#See_also)

  
---  
  
### Specializations

The standard library provides following specializations for standard library types: 

[ std::tuple_size<std::tuple>](tuple/tuple_size.html "cpp/utility/tuple/tuple size")(C++11) |  obtains the size of a `tuple`   
(class template specialization)   
---|---  
[ std::tuple_size<std::pair>](pair/tuple_size.html "cpp/utility/pair/tuple size")(C++11) |  obtains the size of a `pair`   
(class template specialization)   
[ std::tuple_size<std::array>](../container/array/tuple_size.html "cpp/container/array/tuple size")(C++11) |  obtains the size of an `array`   
(class template specialization)   
[ std::tuple_size<std::ranges::subrange>](../ranges/subrange/tuple_size.html "cpp/ranges/subrange/tuple size")(C++20) |  obtains the size of a [std::ranges::subrange](../ranges/subrange.html "cpp/ranges/subrange")   
(class template specialization)   
[ std::tuple_size<std::complex>](../numeric/complex/tuple_size.html "cpp/numeric/complex/tuple size")(C++26) |  obtains the size of a [std::complex](../numeric/complex.html "cpp/numeric/complex")   
(class template specialization)   
  
All specializations of `std::tuple_size` satisfy [UnaryTypeTrait](../named_req/UnaryTypeTrait.html "cpp/named req/UnaryTypeTrait") with _base characteristic_ [std::integral_constant](../types/integral_constant.html)<[std::size_t](../types/size_t.html), N> for some `N`. 

Users may specialize `std::tuple_size` for program-defined types to make them tuple-like. Program-defined specializations must meet the requirements above. 

Usually only specialization for cv-unqualified types are needed to be customized. 

### Helper variable template

Defined in header `[<tuple>](../header/tuple.html "cpp/header/tuple")` |  |   
---|---|---  
template< class T >  
constexpr [std::size_t](../types/size_t.html) tuple_size_v = tuple_size<T>::value; |  |  (since C++17)  
| |   
  
##  Inherited from [ std::integral_constant](../types/integral_constant.html "cpp/types/integral constant")

###  Member constants

value[static] |  for a standard specialization, the number of elements in the tuple-like type `T`   
(public static member constant)  
---|---  
  
###  Member functions

operator std::size_t |  converts the object to [std::size_t](../types/size_t.html), returns value   
(public member function)  
---|---  
operator()(C++14) |  returns value   
(public member function)  
  
###  Member types

Type  |  Definition   
---|---  
`value_type` |  [std::size_t](../types/size_t.html)  
`type` |  [std::integral_constant](../types/integral_constant.html)<[std::size_t](../types/size_t.html), value>  
  
### Example

Run this code
    
    
    #include <array>
    #include <cstddef>
    #include <ranges>
    #include <tuple>
    #include <utility>
     
    template<class T, [std::size_t](../types/size_t.html) Size> struct Arr { T data[Size]; };
     
    // Program-defined specialization of std::tuple_size:
    template<class T, [std::size_t](../types/size_t.html) Size> struct std::tuple_size<Arr<T, Size>>
        : public integral_constant<[std::size_t](../types/size_t.html), Size> {};
     
    int main()
    {
        using tuple1 = [std::tuple](tuple.html)<int, char, double>;
        static_assert(3 == std::tuple_size_v<tuple1>); // uses using template (C++17)
     
        using array3x4 = [std::array](../container/array.html)<[std::array](../container/array.html)<int, 3>, 4>;
        static_assert(4 == std::tuple_size<array3x4>{}); // uses operator std::size_t
     
        using pair = [std::pair](pair.html)<tuple1, array3x4>;
        static_assert(2 == std::tuple_size<pair>()); // uses operator()
     
        using sub = std::[ranges::subrange](../ranges/subrange.html)<char*, char*>;
        static_assert(2 == std::tuple_size<sub>::value);
     
        using Arr5 = Arr<int, 5>;
        static_assert(5 == std::tuple_size_v<Arr5>);
    }

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2212](https://cplusplus.github.io/LWG/issue2212) | C++11  | specializations for cv types were not required in some headers, which led to ambiguity  | required   
  
### See also

[Structured binding](../language/structured_binding.html "cpp/language/structured binding") (C++17) |  binds the specified names to sub-objects or tuple elements of the initializer  
---|---  
[ tuple_element](tuple_element.html "cpp/utility/tuple element")(C++11) |  obtains the element types of a tuple-like type   
(class template)   
[ tuple_cat](tuple/tuple_cat.html "cpp/utility/tuple/tuple cat")(C++11) |  creates a `tuple` by concatenating any number of tuples   
(function template) 
