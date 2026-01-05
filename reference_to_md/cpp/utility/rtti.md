
  


[Utilities library](../utility.html "cpp/utility")

| [Language support](../utility.html#Language_support "cpp/utility")  
---  
**Type support** (basic types, RTTI)  
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
[tuple_element](tuple_element.html "cpp/utility/tuple element")(C++11)  
[apply](apply.html "cpp/utility/apply")(C++17)  
[make_from_tuple](make_from_tuple.html "cpp/utility/make from tuple")(C++17)  
[expected](expected.html "cpp/utility/expected")(C++23)  
  
  
  
  
  
  


**Type support**

Basic types  
---  
[Fixed width integer types](../types/integer.html "cpp/types/integer") (C++11)  
[Fixed width floating-point types](../types/floating-point.html "cpp/types/floating-point") (C++23)  
| [ptrdiff_t](../types/ptrdiff_t.html "cpp/types/ptrdiff t")  
---  
[size_t](../types/size_t.html "cpp/types/size t")  
[max_align_t](../types/max_align_t.html "cpp/types/max align t")(C++11)  
[byte](../types/byte.html "cpp/types/byte")(C++17)  
  
| [nullptr_t](../types/nullptr_t.html "cpp/types/nullptr t")(C++11)  
---  
[offsetof](../types/offsetof.html "cpp/types/offsetof")  
[NULL](../types/NULL.html "cpp/types/NULL")  
  
  
  
Numeric limits  
[numeric_limits](../types/numeric_limits.html "cpp/types/numeric limits")  
[C numeric limits interface](../types/climits.html "cpp/types/climits")  
Runtime type information  
| [type_info](../types/type_info.html "cpp/types/type info")  
---  
[type_index](../types/type_index.html "cpp/types/type index")(C++11)  
  
| [bad_typeid](../types/bad_typeid.html "cpp/types/bad typeid")  
---  
[bad_cast](../types/bad_cast.html "cpp/types/bad cast")  
  


See also [type system overview](../language/type-id.html "cpp/language/type") and [fundamental types defined by the language](../language/types.html "cpp/language/types"). 

## Contents

  * [1 Additional basic types and macros](rtti.html#Additional_basic_types_and_macros)
  * [2 Fixed width integer types (since C++11)](rtti.html#Fixed_width_integer_types_.28since_C.2B.2B11.29)
  * [3 Fixed width floating-point types (since C++23)](rtti.html#Fixed_width_floating-point_types_.28since_C.2B.2B23.29)
  * [4 Numeric limits](rtti.html#Numeric_limits)
    * [4.1 C numeric limits interface](rtti.html#C_numeric_limits_interface)
  * [5 Runtime type identification](rtti.html#Runtime_type_identification)
  * [6 Defect reports](rtti.html#Defect_reports)
  * [7 See also](rtti.html#See_also)

  
---  
  
### Additional basic types and macros

Defined in header `[<cstddef>](../header/cstddef.html "cpp/header/cstddef")`  
---  
[ size_t](../types/size_t.html "cpp/types/size t") |  unsigned integer type returned by the [`sizeof`](../language/sizeof.html "cpp/language/sizeof") operator   
(typedef)   
[ ptrdiff_t](../types/ptrdiff_t.html "cpp/types/ptrdiff t") |  signed integer type returned when subtracting two pointers   
(typedef)   
[ nullptr_t](../types/nullptr_t.html "cpp/types/nullptr t")(C++11) |  the type of the null pointer literal [`nullptr`](../language/nullptr.html "cpp/language/nullptr")   
(typedef)   
[ NULL](../types/NULL.html "cpp/types/NULL") |  implementation-defined null pointer constant   
(macro constant)   
[ max_align_t](../types/max_align_t.html "cpp/types/max align t")(C++11) |  trivial type with alignment requirement as great as any other scalar type   
(typedef)   
[ offsetof](../types/offsetof.html "cpp/types/offsetof") |  byte offset from the beginning of a [standard-layout](../named_req/StandardLayoutType.html "cpp/named req/StandardLayoutType") type to specified member   
(function macro)   
[ byte](../types/byte.html "cpp/types/byte")(C++17) |  the byte type   
(enum)   
---  
Defined in header `[<cstdbool>](../header/cstdbool.html "cpp/header/cstdbool")`(deprecated) (until C++20)  
Defined in header `[<stdbool.h>](../header/cstdbool.html "cpp/header/cstdbool")`  
__bool_true_false_are_defined(C++11)(deprecated) |  C compatibility macro constant, expands to integer literal 1   
(macro constant)   
Defined in header `[<cstdalign>](../header/cstdalign.html "cpp/header/cstdalign")`(deprecated) (until C++20)  
Defined in header `[<stdalign.h>](../header/cstdalign.html "cpp/header/cstdalign")`  
__alignas_is_defined(C++11)(deprecated) |  C compatibility macro constant, expands to integer literal 1   
(macro constant)   
__alignof_is_defined(C++11)(deprecated) |  C compatibility macro constant, expands to integer literal 1   
(macro constant)   
  
### [Fixed width integer types](../types/integer.html "cpp/types/integer") (since C++11)

### [Fixed width floating-point types](../types/floating-point.html "cpp/types/floating-point") (since C++23)

### Numeric limits

Defined in header `[<limits>](../header/limits.html "cpp/header/limits")`  
---  
[ numeric_limits](../types/numeric_limits.html "cpp/types/numeric limits") |  provides an interface to query properties of all fundamental numeric types   
(class template)   
  
#### [C numeric limits interface](../types/climits.html "cpp/types/climits")

### Runtime type identification

Defined in header `[<typeinfo>](../header/typeinfo.html "cpp/header/typeinfo")`  
---  
[ type_info](../types/type_info.html "cpp/types/type info") |  contains some type’s information, the class returned by the typeid operator   
(class)   
[ bad_typeid](../types/bad_typeid.html "cpp/types/bad typeid") |  exception that is thrown if an argument in a [typeid expression](../language/typeid.html "cpp/language/typeid") is null   
(class)   
[ bad_cast](../types/bad_cast.html "cpp/types/bad cast") |  exception that is thrown by an invalid [`dynamic_cast`](../language/dynamic_cast.html "cpp/language/dynamic cast") expression, i.e. a cast of reference type fails   
(class)   
Defined in header `[<typeindex>](../header/typeindex.html "cpp/header/typeindex")`  
[ type_index](../types/type_index.html "cpp/types/type index")(C++11) |  wrapper around a `type_info` object, that can be used as index in associative and unordered associative containers   
(class)   
  
### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 4036](https://cplusplus.github.io/LWG/issue4036) | C++11  | `__alignof_is_defined` was underspecified in the C++ standard  | specified and deprecated   
  
### See also

[Type traits and metaprogramming library](../meta.html#Type_traits "cpp/meta")  
---  
[C documentation](../../c/types.html "c/types") for Type support library
