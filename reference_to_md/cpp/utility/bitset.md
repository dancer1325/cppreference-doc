
  


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
**bitset**  
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
[tuple_element](tuple_element.html "cpp/utility/tuple element")(C++11)  
[apply](apply.html "cpp/utility/apply")(C++17)  
[make_from_tuple](make_from_tuple.html "cpp/utility/make from tuple")(C++17)  
[expected](expected.html "cpp/utility/expected")(C++23)  
  
  
  
  
  
  


**`std::bitset`**

[Member types](bitset.html#Member_types "cpp/utility/bitset")  
---  
[bitset::reference](bitset/reference.html "cpp/utility/bitset/reference")  
[Member functions](bitset.html#Member_functions "cpp/utility/bitset")  
[bitset::bitset](bitset/bitset.html "cpp/utility/bitset/bitset")  
[bitset::operator==bitset::operator!=](bitset/operator_cmp.html "cpp/utility/bitset/operator cmp")(until C++20)  
[Element access](bitset.html#Element_access "cpp/utility/bitset")  
[bitset::operator[]](bitset/operator_at.html "cpp/utility/bitset/operator at")  
[bitset::test](bitset/test.html "cpp/utility/bitset/test")  
[bitset::allbitset::anybitset::none](bitset/all_any_none.html "cpp/utility/bitset/all any none")(C++11)  
[bitset::count](bitset/count.html "cpp/utility/bitset/count")  
[Capacity](bitset.html#Capacity "cpp/utility/bitset")  
[bitset::size](bitset/size.html "cpp/utility/bitset/size")  
[Modifiers](bitset.html#Modifiers "cpp/utility/bitset")  
[bitset::operator&=bitset::operator|=bitset::operator^=bitset::operator~](bitset/operator_logic.html "cpp/utility/bitset/operator logic")  
[bitset::operator<<=bitset::operator>>=bitset::operator<<bitset::operator>>](bitset/operator_ltltgtgt.html "cpp/utility/bitset/operator ltltgtgt")  
[bitset::set](bitset/set.html "cpp/utility/bitset/set")  
[bitset::reset](bitset/reset.html "cpp/utility/bitset/reset")  
[bitset::flip](bitset/flip.html "cpp/utility/bitset/flip")  
[Conversions](bitset.html#Conversions "cpp/utility/bitset")  
[bitset::to_string](bitset/to_string.html "cpp/utility/bitset/to string")  
[bitset::to_ulong](bitset/to_ulong.html "cpp/utility/bitset/to ulong")  
[bitset::to_ullong](bitset/to_ullong.html "cpp/utility/bitset/to ullong")(C++11)  
[Non-member functions](bitset.html#Non-member_functions "cpp/utility/bitset")  
| [operator&operator|operator^](bitset/operator_logic2.html "cpp/utility/bitset/operator logic2")  
---  
  
| [operator<<operator>>](bitset/operator_ltltgtgt2.html "cpp/utility/bitset/operator ltltgtgt2")  
---  
  
  
  
[Helper classes](bitset.html#Helper_classes "cpp/utility/bitset")  
[std::hash](bitset/hash.html "cpp/utility/bitset/hash")(C++11)  
  


Defined in header `[<bitset>](../header/bitset.html "cpp/header/bitset")` |  |   
---|---|---  
template< [std::size_t](../types/size_t.html) N >  
class bitset; |  |   
| |   
  
The class template `bitset` represents a fixed-size sequence of `N` bits. Bitsets can be manipulated by standard logic operators and converted to and from strings and integers. For the purpose of the string representation and of naming directions for shift operations, the sequence is thought of as having its lowest indexed elements at the _right_ , as in the binary representation of integers. 

`bitset` meets the requirements of [CopyConstructible](../named_req/CopyConstructible.html "cpp/named req/CopyConstructible") and [CopyAssignable](../named_req/CopyAssignable.html "cpp/named req/CopyAssignable"). 

All member functions of `std::bitset` are constexpr: it is possible to create and use `std::bitset` objects in the evaluation of a constant expression.  | (since C++23)  
---|---  
  
## Contents

  * [1 Template parameters](bitset.html#Template_parameters)
  * [2 Member types](bitset.html#Member_types)
  * [3 Member functions](bitset.html#Member_functions)
    * [3.1 Element access](bitset.html#Element_access)
    * [3.2 Capacity](bitset.html#Capacity)
    * [3.3 Modifiers](bitset.html#Modifiers)
    * [3.4 Conversions](bitset.html#Conversions)
  * [4 Non-member functions](bitset.html#Non-member_functions)
  * [5 Helper classes](bitset.html#Helper_classes)
  * [6 Notes](bitset.html#Notes)
  * [7 Example](bitset.html#Example)
  * [8 See also](bitset.html#See_also)

  
---  
  
### Template parameters

N  |  \-  |  the number of bits to allocate storage for   
---|---|---  
  
### Member types

[ reference](bitset/reference.html "cpp/utility/bitset/reference") |  proxy class representing a reference to a bit   
(class)  
---|---  
  
### Member functions

[ (constructor)](bitset/bitset.html "cpp/utility/bitset/bitset") |  constructs the bitset   
(public member function)   
---|---  
[ operator==operator!=](bitset/operator_cmp.html "cpp/utility/bitset/operator cmp")(removed in C++20) |  compares the contents   
(public member function)   
  
#####  Element access   
  
[ operator[]](bitset/operator_at.html "cpp/utility/bitset/operator at") |  accesses specific bit   
(public member function)   
[ test](bitset/test.html "cpp/utility/bitset/test") |  accesses specific bit   
(public member function)   
[ allanynone](bitset/all_any_none.html "cpp/utility/bitset/all any none") |  checks if all, any or none of the bits are set to true   
(public member function)   
[ count](bitset/count.html "cpp/utility/bitset/count") |  returns the number of bits set to true   
(public member function)   
  
#####  Capacity   
  
[ size](bitset/size.html "cpp/utility/bitset/size") |  returns the number of bits that the bitset holds   
(public member function)   
  
#####  Modifiers   
  
[ operator&=operator|=operator^=operator~](bitset/operator_logic.html "cpp/utility/bitset/operator logic") |  performs binary AND, OR, XOR and NOT   
(public member function)   
[ operator<<=operator>>=operator<<operator>>](bitset/operator_ltltgtgt.html "cpp/utility/bitset/operator ltltgtgt") |  performs binary shift left and shift right   
(public member function)   
[ set](bitset/set.html "cpp/utility/bitset/set") |  sets bits to true or given value   
(public member function)   
[ reset](bitset/reset.html "cpp/utility/bitset/reset") |  sets bits to false   
(public member function)   
[ flip](bitset/flip.html "cpp/utility/bitset/flip") |  toggles the values of bits   
(public member function)   
  
#####  Conversions   
  
[ to_string](bitset/to_string.html "cpp/utility/bitset/to string") |  returns a string representation of the data   
(public member function)   
[ to_ulong](bitset/to_ulong.html "cpp/utility/bitset/to ulong") |  returns an unsigned long integer representation of the data   
(public member function)   
[ to_ullong](bitset/to_ullong.html "cpp/utility/bitset/to ullong")(C++11) |  returns an unsigned long long integer representation of the data   
(public member function)   
  
### Non-member functions

[ operator&operator|operator^](bitset/operator_logic2.html "cpp/utility/bitset/operator logic2") |  performs binary logic operations on bitsets   
(function template)   
---|---  
[ operator<<operator>>](bitset/operator_ltltgtgt2.html "cpp/utility/bitset/operator ltltgtgt2") |  performs stream input and output of bitsets   
(function template)   
  
### Helper classes

[ std::hash<std::bitset>](bitset/hash.html "cpp/utility/bitset/hash")(C++11) |  hash support for **`std::bitset`**   
(class template specialization)   
---|---  
  
### Notes

If the size of a bit-set is not known at compile time, or it is necessary to change its size at run-time, the dynamic types such as [`std::vector<bool>`](../container/vector_bool.html "cpp/container/vector bool") or [`boost::dynamic_bitset<>`](https://www.boost.org/doc/libs/release/libs/dynamic_bitset/dynamic_bitset.html) may be used instead. 

[Feature-test](feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_constexpr_bitset`](../experimental/feature_test.html#cpp_lib_constexpr_bitset "cpp/feature test") | [`202207L`](../compiler_support/23.html#cpp_lib_constexpr_bitset_202207L "cpp/compiler support/23") | (C++23) | A more constexpr `std::bitset`  
[`__cpp_lib_bitset`](../experimental/feature_test.html#cpp_lib_bitset "cpp/feature test") | [`202306L`](../compiler_support/26.html#cpp_lib_bitset_202306L "cpp/compiler support/26") | (C++26) | Interfacing `std::bitset` with [std::string_view](../string/basic_string_view.html "cpp/string/basic string view")  
  
### Example

Run this code
    
    
    #include <bitset>
    #include <cassert>
    #include <cstddef>
    #include <iostream>
     
    int main()
    {
        typedef [std::size_t](../types/size_t.html) length_t, position_t; // the hints
     
        // constructors:
        constexpr std::bitset<4> b1;
        constexpr std::bitset<4> b2{0xA}; // == 0B1010
        std::bitset<4> b3{"0011"}; // can also be constexpr since C++23
        std::bitset<8> b4{"ABBA", length_t(4), /*0:*/'A', /*1:*/'B'}; // == 0B0000'0110
     
        // bitsets can be printed out to a stream:
        [std::cout](../io/cout.html) << "b1:" << b1 << "; b2:" << b2 << "; b3:" << b3 << "; b4:" << b4 << '\n';
     
        // bitset supports bitwise operations:
        b3 |= 0b0100; [assert](../error/assert.html)(b3 == 0b0111);
        b3 &= 0b0011; [assert](../error/assert.html)(b3 == 0b0011);
        b3 ^= std::bitset<4>{0b1100}; [assert](../error/assert.html)(b3 == 0b1111);
     
        // operations on the whole set:
        b3.reset(); [assert](../error/assert.html)(b3 == 0);
        b3.set(); [assert](../error/assert.html)(b3 == 0b1111);
        [assert](../error/assert.html)(b3.all() && b3.any() && !b3.none());
        b3.flip(); [assert](../error/assert.html)(b3 == 0);
     
        // operations on individual bits:
        b3.set(position_t(1), true); [assert](../error/assert.html)(b3 == 0b0010);
        b3.set(position_t(1), false); [assert](../error/assert.html)(b3 == 0);
        b3.flip(position_t(2)); [assert](../error/assert.html)(b3 == 0b0100);
        b3.reset(position_t(2)); [assert](../error/assert.html)(b3 == 0);
     
        // subscript operator[] is supported:
        b3[2] = true; [assert](../error/assert.html)(true == b3[2]);
     
        // other operations:
        [assert](../error/assert.html)(b3.count() == 1);
        [assert](../error/assert.html)(b3.size() == 4);
        [assert](../error/assert.html)(b3.to_ullong() == 0b0100ULL);
        [assert](../error/assert.html)(b3.to_string() == "0100");
    }

Output: 
    
    
    b1:0000; b2:1010; b3:0011; b4:00000110

### See also

[ vector<bool>](../container/vector_bool.html "cpp/container/vector bool") |  space-efficient dynamic bitset   
(class template specialization)   
---|---  
[**Bit manipulation**](../numeric.html#Bit_manipulation_.28since_C.2B.2B20.29 "cpp/numeric") (C++20) |  utilities to access, manipulate, and process individual bits and bit sequences 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
