
  


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
  
| [tuple_size](tuple_size.html "cpp/utility/tuple size")(C++11)  
---  
**tuple_element**(C++11)  
[apply](apply.html "cpp/utility/apply")(C++17)  
[make_from_tuple](make_from_tuple.html "cpp/utility/make from tuple")(C++17)  
[expected](expected.html "cpp/utility/expected")(C++23)  
  
  
  
  
  
  


Defined in header `[<tuple>](../header/tuple.html "cpp/header/tuple")` |  |   
---|---|---  
Defined in header `[<array>](../header/array.html "cpp/header/array")` |  |   
Defined in header `[<utility>](../header/utility.html "cpp/header/utility")` |  |   
Defined in header `[<ranges>](../header/ranges.html "cpp/header/ranges")` |  | (since C++20)  
Defined in header `[<complex>](../header/complex.html "cpp/header/complex")` |  | (since C++26)  
template< [std::size_t](../types/size_t.html) I, class T >  
struct tuple_element; // not defined |  (1)  |  (since C++11)  
template< [std::size_t](../types/size_t.html) I, class T >  
struct tuple_element< I, const T > {  
using type = typename  
[std::add_const](../types/add_cv.html)<typename std::tuple_element<I, T>::type>::type;  
}; |  (2)  |  (since C++11)  
template< [std::size_t](../types/size_t.html) I, class T >  
struct tuple_element< I, volatile T > {  
using type = typename  
[std::add_volatile](../types/add_cv.html)<typename std::tuple_element<I, T>::type>::type;  
}; |  (3)  |  (since C++11)   
(deprecated in C++20)  
template< [std::size_t](../types/size_t.html) I, class T >  
struct tuple_element< I, const volatile T > {  
using type = typename  
[std::add_cv](../types/add_cv.html)<typename std::tuple_element<I, T>::type>::type;  
}; |  (4)  |  (since C++11)   
(deprecated in C++20)  
| |   
  
Provides compile-time indexed access to the types of the elements of a [tuple-like](tuple/tuple-like.html "cpp/utility/tuple/tuple-like") type. 

1) The primary template is not defined. An explicit (full) or partial specialization is required to make a type tuple-like.

2-4) Specializations for cv-qualified types simply add corresponding cv-qualifiers by default.

`std::tuple_element` interacts with the core language: it can provide [structured binding](../language/structured_binding.html "cpp/language/structured binding") support in the tuple-like case.  | (since C++17)  
---|---  
  
## Contents

  * [1 Specializations](tuple_element.html#Specializations)
  * [2 Member types](tuple_element.html#Member_types)
  * [3 Helper types](tuple_element.html#Helper_types)
  * [4 Notes](tuple_element.html#Notes)
  * [5 Example](tuple_element.html#Example)
  * [6 Defect reports](tuple_element.html#Defect_reports)
  * [7 See also](tuple_element.html#See_also)

  
---  
  
### Specializations

The standard library provides following specializations for standard library types: 

[ std::tuple_element<std::tuple>](tuple/tuple_element.html "cpp/utility/tuple/tuple element")(C++11) |  obtains the type of the specified element   
(class template specialization)   
---|---  
[ std::tuple_element<std::pair>](pair/tuple_element.html "cpp/utility/pair/tuple element")(C++11) |  obtains the type of the elements of `pair`   
(class template specialization)   
[ std::tuple_element<std::array>](../container/array/tuple_element.html "cpp/container/array/tuple element")(C++11) |  obtains the type of the elements of `array`   
(class template specialization)   
[ std::tuple_element<std::ranges::subrange>](../ranges/subrange/tuple_element.html "cpp/ranges/subrange/tuple element")(C++20) |  obtains the type of the iterator or the sentinel of a [std::ranges::subrange](../ranges/subrange.html "cpp/ranges/subrange")   
(class template specialization)   
[ std::tuple_element<std::complex>](../numeric/complex/tuple_element.html "cpp/numeric/complex/tuple element")(C++26) |  obtains the underlying real and imaginary number type of a [std::complex](../numeric/complex.html "cpp/numeric/complex")   
(class template specialization)   
  
Users may specialize `std::tuple_element` for program-defined types to make them tuple-like. 

In normal cases where the `get` functions returns reference members or reference to subobjects, only specializations for cv-unqualified types are needed to be customized. 

### Member types

Member type  |  Definition   
---|---  
type  |  for a standard specialization, the type of `I`th element of the [tuple-like](tuple/tuple-like.html "cpp/utility/tuple/tuple-like") type `T`, where `I` is in `[`​0​`, `[std::tuple_size](tuple_size.html)<T>::value`)`  
  
### Helper types

Defined in header `[<tuple>](../header/tuple.html "cpp/header/tuple")` |  |   
---|---|---  
template< [std::size_t](../types/size_t.html) I, class T >  
using tuple_element_t = typename tuple_element<I, T>::type; |  |  (since C++14)  
| |   
  
### Notes

[Feature-test](feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_tuple_element_t`](../experimental/feature_test.html#cpp_lib_tuple_element_t "cpp/feature test") | [`201402L`](../compiler_support/14.html#cpp_lib_tuple_element_t_201402L "cpp/compiler support/14") | (C++14) | `std::tuple_element_t`  
  
### Example

Run this code
    
    
    #include <array>
    #include <cstddef>
    #include <iostream>
    #include <ranges>
    #include <tuple>
    #include <type_traits>
    #include <utility>
     
    template<typename T1, typename T2, typename T3>
    struct Triple
    {
        T1 t1;
        T2 t2;
        T3 t3;
    };
     
    // A specialization of std::tuple_element for program-defined type Triple:
    template<[std::size_t](../types/size_t.html) I, typename T1, typename T2, typename T3>
        struct std::tuple_element<I, Triple<T1, T2, T3>>
        { static_assert(false, "Invalid index"); }; 
    template<typename T1, typename T2, typename T3>
        struct std::tuple_element<0, Triple<T1, T2, T3>> { using type = T1; };
    template<typename T1, typename T2, typename T3>
        struct std::tuple_element<1, Triple<T1, T2, T3>> { using type = T2; };
    template<typename T1, typename T2, typename T3>
        struct std::tuple_element<2, Triple<T1, T2, T3>> { using type = T3; };
     
     
    template<typename... Args> struct TripleTypes
    {
        static_assert(3 == sizeof...(Args), "Expected exactly 3 type names");
        template<[std::size_t](../types/size_t.html) N>
        using type = typename std::tuple_element_t<N, Triple<Args...>>;
    };
     
    int main()
    {
        TripleTypes<char, int, float>::type<1> i{42};
        [std::cout](../io/cout.html) << i << '\n';
     
        using Tri = Triple<int, char, short>; //< Program-defined type
        static_assert([std::is_same_v](../types/is_same.html)<std::tuple_element_t<0, Tri>, int> &&
                      [std::is_same_v](../types/is_same.html)<std::tuple_element_t<1, Tri>, char> &&
                      [std::is_same_v](../types/is_same.html)<std::tuple_element_t<2, Tri>, short>);
     
        using Tuple = [std::tuple](tuple.html)<int, char, short>;
        static_assert([std::is_same_v](../types/is_same.html)<std::tuple_element_t<0, Tuple>, int> &&
                      [std::is_same_v](../types/is_same.html)<std::tuple_element_t<1, Tuple>, char> &&
                      [std::is_same_v](../types/is_same.html)<std::tuple_element_t<2, Tuple>, short>);
     
        using Array3 = [std::array](../container/array.html)<int, 3>;
        static_assert([std::is_same_v](../types/is_same.html)<std::tuple_element_t<0, Array3>, int> &&
                      [std::is_same_v](../types/is_same.html)<std::tuple_element_t<1, Array3>, int> &&
                      [std::is_same_v](../types/is_same.html)<std::tuple_element_t<2, Array3>, int>);
     
        using Pair = [std::pair](pair.html)<Tuple, Tri>;
        static_assert([std::is_same_v](../types/is_same.html)<std::tuple_element_t<0, Pair>, Tuple> &&
                      [std::is_same_v](../types/is_same.html)<std::tuple_element_t<1, Pair>, Tri>);
     
        using Sub = std::[ranges::subrange](../ranges/subrange.html)<int*, int*>;
        static_assert([std::is_same_v](../types/is_same.html)<std::tuple_element_t<0, Sub>, int*> &&
                      [std::is_same_v](../types/is_same.html)<std::tuple_element_t<1, Sub>, int*>);
    }

Output: 
    
    
    42

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2212](https://cplusplus.github.io/LWG/issue2212) | C++11  | specializations for cv types were not required in some headers, which led to ambiguity  | required   
  
### See also

[Structured binding](../language/structured_binding.html "cpp/language/structured binding") (C++17) |  binds the specified names to sub-objects or tuple elements of the initializer  
---|---  
[ tuple_size](tuple_size.html "cpp/utility/tuple size")(C++11) |  obtains the number of elements of a tuple-like type   
(class template)   
[ tuple_cat](tuple/tuple_cat.html "cpp/utility/tuple/tuple cat")(C++11) |  creates a `tuple` by concatenating any number of tuples   
(function template) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
