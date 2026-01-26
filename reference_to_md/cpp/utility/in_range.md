
  


  
  
  
  
  
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
  
**in_range**(C++20)  
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
[tuple_element](tuple_element.html "cpp/utility/tuple element")(C++11)  
[apply](apply.html "cpp/utility/apply")(C++17)  
[make_from_tuple](make_from_tuple.html "cpp/utility/make from tuple")(C++17)  
[expected](expected.html "cpp/utility/expected")(C++23)  
  
  
  
  
  
  


Defined in header `[<utility>](../header/utility.html "cpp/header/utility")` |  |   
---|---|---  
template< class R, class T >  
constexpr bool in_range( T t ) noexcept; |  |  (since C++20)  
| |   
  
Returns true if the value of t is in the range of values that can be represented in `R`, that is, if t can be converted to `R` in a value-preserving manner. 

It is a compile-time error if either `T` or `U` is a non-[integer](../language/types.html#Integer_types "cpp/language/types") type, a character type, or bool. 

## Contents

  * [1 Parameters](in_range.html#Parameters)
  * [2 Return value](in_range.html#Return_value)
  * [3 Possible implementation](in_range.html#Possible_implementation)
  * [4 Notes](in_range.html#Notes)
  * [5 Example](in_range.html#Example)
  * [6 See also](in_range.html#See_also)

  
---  
  
### Parameters

t  |  \-  |  value to test   
---|---|---  
  
### Return value

true if the value of t is representable in `R`, false otherwise. 

### Possible implementation
    
    
    template<class R, class T>
    constexpr bool in_range(T t) noexcept
    {
        return [std::cmp_greater_equal](intcmp.html)(t, [std::numeric_limits](../types/numeric_limits.html)<R>::min()) &&
            [std::cmp_less_equal](intcmp.html)(t, [std::numeric_limits](../types/numeric_limits.html)<R>::max());
    }  
  
---  
  
### Notes

This function cannot be used with [enums](../language/enum.html "cpp/language/enum") (including [`std::byte`](../types/byte.html "cpp/types/byte")), char, char8_t, char16_t, char32_t, wchar_t and bool. 

[Feature-test](feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_integer_comparison_functions`](../experimental/feature_test.html#cpp_lib_integer_comparison_functions "cpp/feature test") | [`202002L`](../compiler_support/20.html#cpp_lib_integer_comparison_functions_202002L "cpp/compiler support/20") | (C++20) | Integer comparison functions   
  
### Example

Run this code
    
    
    #include <iostream>
    #include <utility>
     
    int main()
    {
        [std::cout](../io/cout.html) << [std::boolalpha](../io/manip/boolalpha.html);
     
        [std::cout](../io/cout.html) << std::in_range<[std::size_t](../types/size_t.html)>(-1) << '\n';
        [std::cout](../io/cout.html) << std::in_range<[std::size_t](../types/size_t.html)>(42) << '\n';
    }

Output: 
    
    
    false
    true

### See also

[ ranges::min](../algorithm/ranges/min.html "cpp/algorithm/ranges/min")(C++20) |  returns the smaller of the given values  
(algorithm function object)  
---|---  
[ ranges::max](../algorithm/ranges/max.html "cpp/algorithm/ranges/max")(C++20) |  returns the greater of the given values  
(algorithm function object)  
[ ranges::clamp](../algorithm/ranges/clamp.html "cpp/algorithm/ranges/clamp")(C++20) |  clamps a value between a pair of boundary values  
(algorithm function object)  
[ lerp](../numeric/lerp.html "cpp/numeric/lerp")(C++20) |  linear interpolation function   
(function) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
