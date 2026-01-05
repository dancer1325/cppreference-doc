
  


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
[tuple_element](tuple_element.html "cpp/utility/tuple element")(C++11)  
[apply](apply.html "cpp/utility/apply")(C++17)  
[make_from_tuple](make_from_tuple.html "cpp/utility/make from tuple")(C++17)  
**expected**(C++23)  
  
  
  
  
  
  


**`std::expected`**

[Member functions](expected.html#Member_functions "cpp/utility/expected")  
---  
[expected::expected](expected/expected.html "cpp/utility/expected/expected")  
[expected::~expected](expected/~expected.html "cpp/utility/expected/~expected")  
[expected::operator=](expected/operator=.html "cpp/utility/expected/operator=")  
[Observers](expected.html#Observers "cpp/utility/expected")  
[expected::operator->expected::operator*](expected/operator*.html "cpp/utility/expected/operator*")  
[expected::operator boolexpected::has_value](expected/operator_bool.html "cpp/utility/expected/operator bool")  
[expected::value](expected/value.html "cpp/utility/expected/value")  
[expected::error](expected/error.html "cpp/utility/expected/error")  
[expected::value_or](expected/value_or.html "cpp/utility/expected/value or")  
[expected::error_or](expected/error_or.html "cpp/utility/expected/error or")  
[Monadic operations](expected.html#Monadic_operations "cpp/utility/expected")  
[expected::and_then](expected/and_then.html "cpp/utility/expected/and then")  
[expected::or_else](expected/or_else.html "cpp/utility/expected/or else")  
[expected::transform](expected/transform.html "cpp/utility/expected/transform")  
[expected::transform_error](expected/transform_error.html "cpp/utility/expected/transform error")  
[Modifiers](expected.html#Modifiers "cpp/utility/expected")  
[expected::emplace](expected/emplace.html "cpp/utility/expected/emplace")  
[expected::swap](expected/swap.html "cpp/utility/expected/swap")  
[Non-member functions](expected.html#Non-member_functions "cpp/utility/expected")  
[operator==(std::expected)](expected/operator_cmp.html "cpp/utility/expected/operator cmp")  
[swap(std::expected)](expected/swap2.html "cpp/utility/expected/swap2")  
[Helper classes](expected.html#Helper_classes "cpp/utility/expected")  
[unexpected](expected/unexpected.html "cpp/utility/expected/unexpected")  
[bad_expected_access](expected/bad_expected_access.html "cpp/utility/expected/bad expected access")  
[unexpect_tunexpect](expected/unexpect_t.html "cpp/utility/expected/unexpect t")  
  


Defined in header `[<expected>](../header/expected.html "cpp/header/expected")` |  |   
---|---|---  
template< class T, class E >  
class expected; |  (1)  |  (since C++23)  
template< class T, class E >  
requires [std::is_void_v](../types/is_void.html)<T>  
class expected<T, E>; |  (2)  |  (since C++23)  
| |   
  
The class template `std::expected` provides a way to represent either of two values: an _expected_ value of type `T`, or an _unexpected_ value of type `E`. `expected` is never valueless. 

1) The main template. Contains the expected or unexpected value within its own storage, which is [nested within](../language/objects.html#Address "cpp/language/object") the `expected` object.

2) The void partial specialization. Represents an expected void value or contains an unexpected value. If it contains an unexpected value, it is nested within the `expected` object.

A program is ill-formed if it instantiates an `expected` with a reference type, a function type, or a specialization of [`std::unexpected`](expected/unexpected.html "cpp/utility/expected/unexpected"). In addition, `T` must not be [std::in_place_t](in_place.html "cpp/utility/in place") or [`std::unexpect_t`](expected/unexpect_t.html "cpp/utility/expected/unexpect t"). 

## Contents

  * [1 Template parameters](expected.html#Template_parameters)
  * [2 Nested types](expected.html#Nested_types)
  * [3 Member templates](expected.html#Member_templates)
  * [4 Data members](expected.html#Data_members)
  * [5 Member functions](expected.html#Member_functions)
    * [5.1 Observers](expected.html#Observers)
    * [5.2 Monadic operations](expected.html#Monadic_operations)
    * [5.3 Modifiers](expected.html#Modifiers)
  * [6 Non-member functions](expected.html#Non-member_functions)
  * [7 Helper classes](expected.html#Helper_classes)
  * [8 Notes](expected.html#Notes)
  * [9 Example](expected.html#Example)
  * [10 Defect reports](expected.html#Defect_reports)
  * [11 References](expected.html#References)
  * [12 See also](expected.html#See_also)

  
---  
  
### Template parameters

T  |  \-  |  the type of the expected value. The type must either be (possibly cv-qualified) void, or meet the [Destructible](../named_req/Destructible.html "cpp/named req/Destructible") requirements (in particular, array and reference types are not allowed).   
---|---|---  
E  |  \-  |  the type of the unexpected value. The type must meet the [Destructible](../named_req/Destructible.html "cpp/named req/Destructible") requirements, and must be a valid template argument for [`std::unexpected`](expected/unexpected.html "cpp/utility/expected/unexpected") (in particular, arrays, non-object types, and cv-qualified types are not allowed).   
  
### Nested types

Type  |  Definition   
---|---  
`value_type` |  `T`  
`error_type` |  `E`  
`unexpected_type` |  [`std::unexpected<E>`](expected/unexpected.html "cpp/utility/expected/unexpected")  
  
### Member templates

Template  |  Definition   
---|---  
rebind<U> |  std::expected<U, error_type>  
  
### Data members

Member  |  Description   
---|---  
bool `_has_val_` |  whether the `expected` object currently represents the expected value  
(exposition-only member object*)  
`T` `_val_` (main template only) |  the expected value  
(exposition-only variant member object*)  
`E` `_unex_` |  the unexpected value  
(exposition-only variant member object*)  
  
### Member functions

[ (constructor)](expected/expected.html "cpp/utility/expected/expected") |  constructs the `expected` object   
(public member function)   
---|---  
[ (destructor)](expected/~expected.html "cpp/utility/expected/~expected") |  destroys the `expected` object, along with its contained value   
(public member function)   
[ operator=](expected/operator=.html "cpp/utility/expected/operator=") |  assigns contents   
(public member function)   
  
#####  Observers   
  
[ operator->operator*](expected/operator*.html "cpp/utility/expected/operator*") |  accesses the expected value   
(public member function)   
[ operator boolhas_value](expected/operator_bool.html "cpp/utility/expected/operator bool") |  checks whether the object contains an expected value   
(public member function)   
[ value](expected/value.html "cpp/utility/expected/value") |  returns the expected value   
(public member function)   
[ error](expected/error.html "cpp/utility/expected/error") |  returns the unexpected value   
(public member function)   
[ value_or](expected/value_or.html "cpp/utility/expected/value or") |  returns the expected value if present, another value otherwise   
(public member function)   
[ error_or](expected/error_or.html "cpp/utility/expected/error or") |  returns the unexpected value if present, another value otherwise   
(public member function)   
  
#####  Monadic operations   
  
[ and_then](expected/and_then.html "cpp/utility/expected/and then") |  returns the result of the given function on the expected value if it exists; otherwise, returns the `expected` itself   
(public member function)   
[ transform](expected/transform.html "cpp/utility/expected/transform") |  returns an `expected` containing the transformed expected value if it exists; otherwise, returns the `expected` itself   
(public member function)   
[ or_else](expected/or_else.html "cpp/utility/expected/or else") |  returns the `expected` itself if it contains an expected value; otherwise, returns the result of the given function on the unexpected value   
(public member function)   
[ transform_error](expected/transform_error.html "cpp/utility/expected/transform error") |  returns the `expected` itself if it contains an expected value; otherwise, returns an `expected` containing the transformed unexpected value   
(public member function)   
  
#####  Modifiers   
  
[ emplace](expected/emplace.html "cpp/utility/expected/emplace") |  constructs the expected value in-place   
(public member function)   
[ swap](expected/swap.html "cpp/utility/expected/swap") |  exchanges the contents   
(public member function)   
  
### Non-member functions

[ operator==](expected/operator_cmp.html "cpp/utility/expected/operator cmp")(C++23) |  compares `expected` objects   
(function template)   
---|---  
[ swap(std::expected)](expected/swap2.html "cpp/utility/expected/swap2")(C++23) |  specializes the [std::swap](swap.html "cpp/algorithm/swap") algorithm   
(function)   
  
### Helper classes

[ unexpected](expected/unexpected.html "cpp/utility/expected/unexpected")(C++23) |  represented as an unexpected value   
(class template)   
---|---  
[ bad_expected_access](expected/bad_expected_access.html "cpp/utility/expected/bad expected access")(C++23) |  exception indicating checked access to an `expected` that contains an unexpected value   
(class template)   
[ unexpectunexpect_t](expected/unexpect_t.html "cpp/utility/expected/unexpect t")(C++23) |  in-place construction tag for unexpected value in `expected`  
(tag)  
  
### Notes

Types with the same functionality are called [`Result`](https://doc.rust-lang.org/std/result/enum.Result.html) in Rust and [`Either`](https://hackage.haskell.org/package/base-4.17.0.0/docs/Data-Either.html) in Haskell. 

[Feature-test](feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_expected`](../experimental/feature_test.html#cpp_lib_expected "cpp/feature test") | [`202202L`](../compiler_support/23.html#cpp_lib_expected_202202L "cpp/compiler support/23") | (C++23) | class template `std::expected` and associated [helper classes](expected.html#Helper_classes)  
[`202211L`](../compiler_support/23.html#cpp_lib_expected_202211L "cpp/compiler support/23") | (C++23) | Monadic functions for `std::expected`  
  
### Example

Run this code
    
    
    #include <cmath>
    #include <expected>
    #include <iomanip>
    #include <iostream>
    #include <string_view>
     
    enum class parse_error
    {
        invalid_input,
        overflow
    };
     
    auto parse_number([std::string_view](../string/basic_string_view.html)& str) -> std::expected<double, parse_error>
    {
        const char* begin = str.data();
        char* end;
        double retval = [std::strtod](../string/byte/strtof.html)(begin, &end);
     
        if (begin == end)
            return [std::unexpected](expected/unexpected.html)(parse_error::invalid_input);
        else if ([std::isinf](../numeric/math/isinf.html)(retval))
            return [std::unexpected](expected/unexpected.html)(parse_error::overflow);
     
        str.remove_prefix(end - begin);
        return retval;
    }
     
    int main()
    {
        auto process = []([std::string_view](../string/basic_string_view.html) str)
        {
            [std::cout](../io/cout.html) << "str: " << [std::quoted](../io/manip/quoted.html)(str) << ", ";
            if (const auto num = parse_number(str); num.has_value())
                [std::cout](../io/cout.html) << "value: " << *num << '\n';
                // If num did not have a value, dereferencing num
                // would cause an undefined behavior, and
                // num.value() would throw std::bad_expected_access.
                // num.value_or(123) uses specified default value 123.
            else if (num.error() == parse_error::invalid_input)
                [std::cout](../io/cout.html) << "error: invalid input\n";
            else if (num.error() == parse_error::overflow)
                [std::cout](../io/cout.html) << "error: overflow\n";
            else
                [std::cout](../io/cout.html) << "unexpected!\n"; // or invoke std::unreachable();
        };
     
        for (auto src : {"42", "42abc", "meow", "inf"})
            process(src);
    }

Output: 
    
    
    str: "42", value: 42
    str: "42abc", value: 42
    str: "meow", error: invalid input
    str: "inf", error: overflow

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 4141](https://cplusplus.github.io/LWG/issue4141) | C++23  | the requirement of storage  
allocation was confusing  | the contained object must be  
nested within the `expected` object   
  
### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 22.8 Expected objects [expected] 



### See also

[ variant](variant.html "cpp/utility/variant")(C++17) |  a type-safe discriminated union   
(class template)   
---|---  
[ optional](optional.html "cpp/utility/optional")(C++17) |  a wrapper that may or may not hold an object   
(class template) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
