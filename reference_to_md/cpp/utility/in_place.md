
  


  
  
  
  
  
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
[tuple_element](tuple_element.html "cpp/utility/tuple element")(C++11)  
[apply](apply.html "cpp/utility/apply")(C++17)  
[make_from_tuple](make_from_tuple.html "cpp/utility/make from tuple")(C++17)  
[expected](expected.html "cpp/utility/expected")(C++23)  
  
  
  
  
  
  


Defined in header `[<utility>](../header/utility.html "cpp/header/utility")` |  |   
---|---|---  
struct in_place_t { explicit in_place_t() = default; }; |  (1)  |  (since C++17)  
inline constexpr std::in_place_t in_place {}; |  (2)  |  (since C++17)  
template< class T >  
struct in_place_type_t { explicit in_place_type_t() = default; }; |  (3)  |  (since C++17)  
template< class T >  
constexpr std::in_place_type_t<T> in_place_type {}; |  (4)  |  (since C++17)  
template< [std::size_t](../types/size_t.html) I >  
struct in_place_index_t { explicit in_place_index_t() = default; }; |  (5)  |  (since C++17)  
template< [std::size_t](../types/size_t.html) I >  
constexpr std::in_place_index_t<I> in_place_index {}; |  (6)  |  (since C++17)  
| |   
  
1,3,5) The type/type templates `std::in_place_t`, `std::in_place_type_t` and `std::in_place_index_t` can be used in the constructor's parameter list to match the intended tag.

2,4,6) The corresponding `std::in_place`, `std::in_place_type`, and `std::in_place_index` instances of (1,3,5) are disambiguation tags that can be passed to the constructors to indicate that the contained object should be constructed in-place, and (for the latter two) the type of the object to be constructed.

### Standard library

The following standard library types use (1-6) as disambiguation tags: 

[ any](any.html "cpp/utility/any")(C++17) |  objects that hold instances of any [CopyConstructible](../named_req/CopyConstructible.html "cpp/named req/CopyConstructible") type   
(class)   
---|---  
[ expected](expected.html "cpp/utility/expected")(C++23) |  a wrapper that contains either an expected or error value   
(class template)   
[ move_only_function](functional/move_only_function.html "cpp/utility/functional/move only function")(C++23) |  move-only wrapper of any callable object that supports qualifiers in a given call signature   
(class template)   
[ optional](optional.html "cpp/utility/optional")(C++17) |  a wrapper that may or may not hold an object   
(class template)   
[ variant](variant.html "cpp/utility/variant")(C++17) |  a type-safe discriminated union   
(class template)   
  
### See also

[ sorted_uniquesorted_unique_t](../container/sorted_unique.html "cpp/container/sorted unique")(C++23) |  indicates that elements of a range are sorted and unique  
(tag)  
---|---  
[ sorted_equivalentsorted_equivalent_t](../container/sorted_equivalent.html "cpp/container/sorted equivalent")(C++23) |  indicates that elements of a range are sorted (uniqueness is not required)  
(tag)
