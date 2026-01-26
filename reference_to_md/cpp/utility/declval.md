
  


  
  
  
  
  
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
**declval**(C++11)  
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
template< class T >  
typename [std::add_rvalue_reference](../types/add_reference.html)<T>::type declval() noexcept; |  | (since C++11)   
(until C++14)   
(unevaluated-only)  
template< class T >  
[std::add_rvalue_reference_t](../types/add_reference.html)<T> declval() noexcept; |  |  (since C++14)   
(unevaluated-only)  
| |   
  
Helper template for writing expressions that appear in [unevaluated contexts](../language/expressions.html#Potentially-evaluated_expressions "cpp/language/expressions"), typically the operand of [`decltype`](../language/decltype.html "cpp/language/decltype"). In unevaluated context, this helper template converts any type `T` (which may be an incomplete type) to an expression of that type, making it possible to use member functions of T without the need to go through constructors. 

`std::declval` can only be used in [unevaluated contexts](../language/expressions.html#Potentially-evaluated_expressions "cpp/language/expressions") and is not required to be defined; it is an error to evaluate an expression that contains this function. Formally, the program is ill-formed if this function is [odr-used](../language/definition.html#ODR-use "cpp/language/definition"). 

## Contents

  * [1 Parameters](declval.html#Parameters)
  * [2 Return value](declval.html#Return_value)
  * [3 Notes](declval.html#Notes)
  * [4 Possible implementation](declval.html#Possible_implementation)
  * [5 Example](declval.html#Example)
  * [6 See also](declval.html#See_also)

  
---  
  
### Parameters

(none) 

### Return value

Cannot be evaluated and thus never returns a value. The return type is `T&&` (reference collapsing rules apply) unless `T` is (possibly cv-qualified) void, in which case the return type is `T`. 

### Notes

`std::declval` is commonly used in templates where acceptable template parameters may have no constructor in common, but have the same member function whose return type is needed. 

### Possible implementation
    
    
    template<typename T>
    typename [std::add_rvalue_reference](../types/add_reference.html)<T>::type declval() noexcept
    {
        static_assert(false, "declval not allowed in an evaluated context");
    }  
  
---  
  
### Example

Run this code
    
    
    #include <iostream>
    #include <utility>
     
    struct Default
    {
        int foo() const { return 1; }
    };
     
    struct NonDefault
    {
        NonDefault() = delete;
        int foo() const { return 1; }
    };
     
    int main()
    {
        decltype(Default().foo())               n1 = 1;     // type of n1 is int
        decltype(std::declval<Default>().foo()) n2 = 1;     // same
     
    //  decltype(NonDefault().foo())               n3 = n1; // error: no default constructor
        decltype(std::declval<NonDefault>().foo()) n3 = n1; // type of n3 is int
     
        [std::cout](../io/cout.html) << "n1 = " << n1 << '\n'
                  << "n2 = " << n2 << '\n'
                  << "n3 = " << n3 << '\n';
    }

Output: 
    
    
    n1 = 1
    n2 = 1
    n3 = 1

### See also

[ `decltype` specifier](../language/decltype.html "cpp/language/decltype")(C++11) |  obtains the type of an expression or an entity  
---|---  
[ result_ofinvoke_result](../types/result_of.html "cpp/types/result of")(C++11)(removed in C++20)(C++17) |  deduces the result type of invoking a callable object with a set of arguments   
(class template) 
