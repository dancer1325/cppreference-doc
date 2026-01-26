
  


  
  
  
  
  
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
**apply**(C++17)  
[make_from_tuple](make_from_tuple.html "cpp/utility/make from tuple")(C++17)  
[expected](expected.html "cpp/utility/expected")(C++23)  
  
  
  
  
  
  


Defined in header `[<tuple>](../header/tuple.html "cpp/header/tuple")` |  |   
---|---|---  
template< class F, class Tuple >  
constexpr decltype(auto) apply( F&& f, Tuple&& t ); |  | (since C++17)   
(until C++23)  
template< class F, tuple-like Tuple >  
constexpr decltype(auto) apply( F&& f, Tuple&& t ) noexcept(/* see below */); |  |  (since C++23)  
| |   
  
Invoke the [Callable](../named_req/Callable.html "cpp/named req/Callable") object f with the elements of t as arguments. 

Given the exposition-only function `_apply-impl_` defined as follows: 

template<class F,class Tuple, [std::size_t](../types/size_t.html)... I>  
constexpr decltype(auto)  
` `` _apply-impl_`(F&& f, Tuple&& t, [std::index_sequence](integer_sequence.html)<I...>) // exposition only  
`{`  
` `return` `[` _INVOKE_`](../functional.html "cpp/utility/functional")([std::forward](forward.html)<F>(f), std::get<I>([std::forward](forward.html)<Tuple>(t))...);  
`}`

The effect is equivalent to: 

return` `` _apply-impl_`([std::forward](forward.html)<F>(f), [std::forward](forward.html)<Tuple>(t),  
` `[std::make_index_sequence](integer_sequence.html)<  
` `[std::tuple_size_v](tuple_size.html)<[std::decay_t](../types/decay.html)<Tuple>>>{}); . 

## Contents

  * [1 Parameters](apply.html#Parameters)
  * [2 Return value](apply.html#Return_value)
  * [3 Exceptions](apply.html#Exceptions)
  * [4 Notes](apply.html#Notes)
  * [5 Example](apply.html#Example)
  * [6 See also](apply.html#See_also)

  
---  
  
### Parameters

f  |  \-  |  [Callable](../named_req/Callable.html "cpp/named req/Callable") object to be invoked   
---|---|---  
t  |  \-  |  tuple whose elements to be used as arguments to f  
  
### Return value

The value returned by f. 

### Exceptions

(none)  | (until C++23)  
---|---  
[`noexcept`](../language/noexcept_spec.html "cpp/language/noexcept spec") specification: noexcept(  
noexcept([std::invoke](functional/invoke.html)([std::forward](forward.html)<F>(f),  
std::get<Is>([std::forward](forward.html)<Tuple>(t))...))  
) where `Is...` denotes the [pack](../language/parameter_pack.html "cpp/language/pack"): 

  * 0, 1, ..., [std::tuple_size_v](tuple_size.html)<[std::remove_reference_t](../types/remove_reference.html)<Tuple>> - 1. 

| (since C++23)  
  
### Notes

`Tuple` need not be [std::tuple](tuple.html "cpp/utility/tuple"), and instead may be anything that supports [`std::get`](tuple/get.html "cpp/utility/tuple/get") and [`std::tuple_size`](tuple_size.html "cpp/utility/tuple size"); in particular, [std::array](../container/array.html "cpp/container/array") and [std::pair](pair.html "cpp/utility/pair") may be used.  | (until C++23)  
---|---  
`Tuple` is constrained to be tuple-like, i.e. each type therein is required to be a specialization of [std::tuple](tuple.html "cpp/utility/tuple") or another type (such as [std::array](../container/array.html "cpp/container/array") and [std::pair](pair.html "cpp/utility/pair")) that models [`_tuple-like_`](tuple/tuple-like.html "cpp/utility/tuple/tuple-like").  | (since C++23)  
[Feature-test](feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_apply`](../experimental/feature_test.html#cpp_lib_apply "cpp/feature test") | [`201603L`](../compiler_support/17.html#cpp_lib_apply_201603L "cpp/compiler support/17") | (C++17) | `std::apply`  
  
### Example

Run this code
    
    
    #include <iostream>
    #include <tuple>
    #include <utility>
     
    int add(int first, int second) { return first + second; }
     
    template<typename T>
    T add_generic(T first, T second) { return first + second; }
     
    auto add_lambda = [](auto first, auto second) { return first + second; };
     
    template<typename... Ts>
    [std::ostream](../io/basic_ostream.html)& operator<<([std::ostream](../io/basic_ostream.html)& os, [std::tuple](tuple.html)<Ts...> const& theTuple)
    {
        std::apply
        (
            [&os](Ts const&... tupleArgs)
            {
                os << '[';
                [std::size_t](../types/size_t.html) n{0};
                ((os << tupleArgs << (++n != sizeof...(Ts) ? ", " : "")), ...);
                os << ']';
            }, theTuple
        );
        return os;
    }
     
    int main()
    {
        // OK
        [std::cout](../io/cout.html) << std::apply(add, [std::pair](pair.html)(1, 2)) << '\n';
     
        // Error: can't deduce the function type
        // std::cout << std::apply(add_generic, std::make_pair(2.0f, 3.0f)) << '\n'; 
     
        // OK
        [std::cout](../io/cout.html) << std::apply(add_lambda, [std::pair](pair.html)(2.0f, 3.0f)) << '\n'; 
     
        // advanced example
        [std::tuple](tuple.html) myTuple{25, "Hello", 9.31f, 'c'};
        [std::cout](../io/cout.html) << myTuple << '\n';
    }

Output: 
    
    
    3
    5
    [25, Hello, 9.31, c]

### See also

[ make_tuple](tuple/make_tuple.html "cpp/utility/tuple/make tuple")(C++11) |  creates a `tuple` object of the type defined by the argument types   
(function template)   
---|---  
[ forward_as_tuple](tuple/forward_as_tuple.html "cpp/utility/tuple/forward as tuple")(C++11) |  creates a `tuple` of [forwarding references](../language/reference.html#Forwarding_references "cpp/language/reference")   
(function template)   
[ make_from_tuple](make_from_tuple.html "cpp/utility/make from tuple")(C++17) |  construct an object with a tuple of arguments   
(function template)   
[ invokeinvoke_r](functional/invoke.html "cpp/utility/functional/invoke")(C++17)(C++23) |  invokes any [Callable](../named_req/Callable.html "cpp/named req/Callable") object with given arguments and possibility to specify return type(since C++23)   
(function template) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
