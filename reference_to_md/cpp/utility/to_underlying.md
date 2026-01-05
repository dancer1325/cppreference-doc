
  


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
**to_underlying**(C++23)  
  
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
[tuple_element](tuple_element.html "cpp/utility/tuple element")(C++11)  
[apply](apply.html "cpp/utility/apply")(C++17)  
[make_from_tuple](make_from_tuple.html "cpp/utility/make from tuple")(C++17)  
[expected](expected.html "cpp/utility/expected")(C++23)  
  
  
  
  
  
  


Defined in header `[<utility>](../header/utility.html "cpp/header/utility")` |  |   
---|---|---  
template< class Enum >  
constexpr [std::underlying_type_t](../types/underlying_type.html)<Enum> to_underlying( Enum e ) noexcept; |  |  (since C++23)  
| |   
  
Converts an enumeration to its underlying type. Equivalent to return static_cast<[std::underlying_type_t](../types/underlying_type.html)<Enum>>(e);. 

## Contents

  * [1 Parameters](to_underlying.html#Parameters)
  * [2 Return value](to_underlying.html#Return_value)
  * [3 Notes](to_underlying.html#Notes)
  * [4 Example](to_underlying.html#Example)
  * [5 See also](to_underlying.html#See_also)

  
---  
  
### Parameters

e  |  \-  |  enumeration value to convert   
---|---|---  
  
### Return value

The integer value of the underlying type of `Enum`, converted from e. 

### Notes

`std::to_underlying` can be used to avoid converting an enumeration to an integer type other than its underlying type. 

[Feature-test](feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_to_underlying`](../experimental/feature_test.html#cpp_lib_to_underlying "cpp/feature test") | [`202102L`](../compiler_support/23.html#cpp_lib_to_underlying_202102L "cpp/compiler support/23") | (C++23) | `std::to_underlying`  
  
### Example

Run this code
    
    
    #include <cstdint>
    #include <iomanip>
    #include <iostream>
    #include <type_traits>
    #include <utility>
     
    enum class E1 : char { e };
    static_assert([std::is_same_v](../types/is_same.html)<char, decltype(std::to_underlying(E1::e))>);
     
    enum struct E2 : long { e };
    static_assert([std::is_same_v](../types/is_same.html)<long, decltype(std::to_underlying(E2::e))>);
     
    enum E3 : unsigned { e };
    static_assert([std::is_same_v](../types/is_same.html)<unsigned, decltype(std::to_underlying(e))>);
     
    int main()
    {
        enum class ColorMask : [std::uint32_t](../types/integer.html)
        {
            red = 0xFF, green = (red << 8), blue = (green << 8), alpha = (blue << 8)
        };
     
        [std::cout](../io/cout.html) << [std::hex](../io/manip/hex.html) << [std::uppercase](../io/manip/uppercase.html) << [std::setfill](../io/manip/setfill.html)('0')
                  << [std::setw](../io/manip/setw.html)(8) << std::to_underlying(ColorMask::red) << '\n'
                  << [std::setw](../io/manip/setw.html)(8) << std::to_underlying(ColorMask::green) << '\n'
                  << [std::setw](../io/manip/setw.html)(8) << std::to_underlying(ColorMask::blue) << '\n'
                  << [std::setw](../io/manip/setw.html)(8) << std::to_underlying(ColorMask::alpha) << '\n';
     
    //  std::underlying_type_t<ColorMask> x = ColorMask::alpha; // Error: no known conversion
        [[maybe_unused]]
        [std::underlying_type_t](../types/underlying_type.html)<ColorMask> y = std::to_underlying(ColorMask::alpha); // OK
    }

Output: 
    
    
    000000FF
    0000FF00
    00FF0000
    FF000000

### See also

[ underlying_type](../types/underlying_type.html "cpp/types/underlying type")(C++11) |  obtains the underlying integer type for a given enumeration type   
(class template)   
---|---  
[ is_enum](../types/is_enum.html "cpp/types/is enum")(C++11) |  checks if a type is an enumeration type   
(class template)   
[ is_scoped_enum](../types/is_scoped_enum.html "cpp/types/is scoped enum")(C++23) |  checks if a type is a scoped enumeration type   
(class template) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
