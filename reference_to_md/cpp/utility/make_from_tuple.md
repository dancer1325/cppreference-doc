
  


  
  
  
  
  
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
**make_from_tuple**(C++17)  
[expected](expected.html "cpp/utility/expected")(C++23)  
  
  
  
  
  
  


Defined in header `[<tuple>](../header/tuple.html "cpp/header/tuple")` |  |   
---|---|---  
template< class T, class Tuple >  
constexpr T make_from_tuple( Tuple&& t ); |  | (since C++17)   
(until C++23)  
template< class T, tuple-like Tuple >  
constexpr T make_from_tuple( Tuple&& t ); |  |  (since C++23)  
| |   
  
Construct an object of type `T`, using the elements of the tuple t as the arguments to the constructor. 

Given the exposition-only function /*make-from-tuple-impl*/ defined as follows:  
template<class T,` `[` _tuple-like_`](tuple/tuple-like.html "cpp/utility/tuple/tuple-like")` `Tuple, [std::size_t](../types/size_t.html)... I> // no constraint on Tuple before C++23  
constexpr T /*make-from-tuple-impl*/(Tuple&& t, [std::index_sequence](integer_sequence.html)<I...>)  
`{`  
` `return T(std::get<I>([std::forward](forward.html)<Tuple>(t))...);  
`}`

The effect is equivalent to:  
return /*make-from-tuple-impl*/<T>(  
[std::forward](forward.html)<Tuple>(t),  
[std::make_index_sequence](integer_sequence.html)<[std::tuple_size_v](tuple_size.html)<[std::remove_reference_t](../types/remove_reference.html)<Tuple>>>{}  
);. 

If 

  * [std::tuple_size_v](tuple_size.html)<[std::remove_reference_t](../types/remove_reference.html)<Tuple>> is 1 and std::reference_constructs_from_temporary_v<  
T, decltype(std::get<0>([std::declval](declval.html)<Tuple>()))> is true, or 

| (since C++23)  
---|---  
  
  * [std::is_constructible_v](../types/is_constructible.html)<T, decltype(std::get<I>([std::declval](declval.html)<Tuple>()))...> is false, 



the program is ill-formed. 

## Contents

  * [1 Parameters](make_from_tuple.html#Parameters)
  * [2 Return value](make_from_tuple.html#Return_value)
  * [3 Notes](make_from_tuple.html#Notes)
  * [4 Example](make_from_tuple.html#Example)
  * [5 Defect reports](make_from_tuple.html#Defect_reports)
  * [6 See also](make_from_tuple.html#See_also)

  
---  
  
### Parameters

t  |  \-  |  tuple whose elements to be used as arguments to the constructor of `T`  
---|---|---  
  
### Return value

The constructed `T` object or reference. 

### Notes

`Tuple` need not be [std::tuple](tuple.html "cpp/utility/tuple"), and instead may be anything that supports [`std::get`](tuple/get.html "cpp/utility/tuple/get") and [`std::tuple_size`](tuple_size.html "cpp/utility/tuple size"); in particular, [std::array](../container/array.html "cpp/container/array") and [std::pair](pair.html "cpp/utility/pair") may be used.  | (until C++23)  
---|---  
`Tuple` is constrained to be tuple-like, i.e. each type therein is required to be a specialization of [std::tuple](tuple.html "cpp/utility/tuple") or another type (such as [std::array](../container/array.html "cpp/container/array") and [std::pair](pair.html "cpp/utility/pair")) that models [`_tuple-like_`](tuple/tuple-like.html "cpp/utility/tuple/tuple-like").  | (since C++23)  
  
Due to [guaranteed copy elision](../language/copy_elision.html "cpp/language/copy elision"), `T` need not be movable. 

[Feature-test](feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_make_from_tuple`](../experimental/feature_test.html#cpp_lib_make_from_tuple "cpp/feature test") | [`201606L`](../compiler_support/17.html#cpp_lib_make_from_tuple_201606L "cpp/compiler support/17") | (C++17) | `std::make_from_tuple`  
  
### Example

Run this code
    
    
    #include <iostream>
    #include <tuple>
     
    struct Foo
    {
        Foo(int first, float second, int third)
        {
            [std::cout](../io/cout.html) << first << ", " << second << ", " << third << '\n';
        }
    };
     
    int main()
    {
        auto tuple = [std::make_tuple](tuple/make_tuple.html)(42, 3.14f, 0);
        std::make_from_tuple<Foo>(std::move(tuple));
    }

Output: 
    
    
    42, 3.14, 0

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3528](https://cplusplus.github.io/LWG/issue3528) | C++17  | cast containing reinterpret_cast etc. was allowed in the case of 1-tuple  | prohibited   
  
### See also

[ make_tuple](tuple/make_tuple.html "cpp/utility/tuple/make tuple")(C++11) |  creates a `tuple` object of the type defined by the argument types   
(function template)   
---|---  
[ forward_as_tuple](tuple/forward_as_tuple.html "cpp/utility/tuple/forward as tuple")(C++11) |  creates a `tuple` of [forwarding references](../language/reference.html#Forwarding_references "cpp/language/reference")   
(function template)   
[ apply](apply.html "cpp/utility/apply")(C++17) |  calls a function with a tuple of arguments   
(function template) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
