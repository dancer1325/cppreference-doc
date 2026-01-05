
  


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
**move**(C++11)  
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
typename [std::remove_reference](../types/remove_reference.html)<T>::type&& move( T&& t ) noexcept; |  |  (since C++11)   
(until C++14)  
template< class T >  
constexpr [std::remove_reference_t](../types/remove_reference.html)<T>&& move( T&& t ) noexcept; |  |  (since C++14)  
| |   
  
`std::move` is used to _indicate_ that an object t may be "moved from", i.e. allowing the efficient transfer of resources from t to another object. 

In particular, `std::move` produces an [xvalue expression](../language/value_category.html "cpp/language/value category") that identifies its argument t. It is exactly equivalent to a `static_cast` to an rvalue reference type. 

## Contents

  * [1 Parameters](move.html#Parameters)
  * [2 Return value](move.html#Return_value)
  * [3 Notes](move.html#Notes)
  * [4 Example](move.html#Example)
  * [5 See also](move.html#See_also)

  
---  
  
### Parameters

t  |  \-  |  the object to be moved   
---|---|---  
  
### Return value

static_cast<typename [std::remove_reference](../types/remove_reference.html)<T>::type&&>(t)

### Notes

The functions that accept rvalue reference parameters (including [move constructors](../language/move_constructor.html "cpp/language/move constructor"), [move assignment operators](../language/move_operator.html "cpp/language/move operator"), and regular member functions such as [std::vector::push_back](../container/vector/push_back.html "cpp/container/vector/push back")) are selected, by [overload resolution](../language/overload_resolution.html "cpp/language/overload resolution"), when called with [rvalue](../language/value_category.html "cpp/language/value category") arguments (either [prvalues](../language/value_category.html "cpp/language/value category") such as a temporary object or [xvalues](../language/value_category.html "cpp/language/value category") such as the one produced by `std::move`). If the argument identifies a resource-owning object, these overloads have the option, but aren't required, to _move_ any resources held by the argument. For example, a move constructor of a linked list might copy the pointer to the head of the list and store nullptr in the argument instead of allocating and copying individual nodes. 

Names of [rvalue reference](../language/reference.html "cpp/language/reference") variables are [lvalues](../language/value_category.html "cpp/language/value category") and have to be converted to [xvalues](../language/value_category.html "cpp/language/value category") to be bound to the function overloads that accept rvalue reference parameters, which is why [move constructors](../language/move_constructor.html "cpp/language/move constructor") and [move assignment operators](../language/move_operator.html "cpp/language/move operator") typically use `std::move`: 
    
    
    // Simple move constructor
    A(A&& arg) : member(std::move(arg.member)) // the expression "arg.member" is lvalue
    {}
     
    // Simple move assignment operator
    A& operator=(A&& other)
    {
        member = std::move(other.member);
        return *this;
    }

One exception is when the type of the function parameter is a [forwarding reference](../language/reference.html#Forwarding_references "cpp/language/reference") (which looks like an rvalue reference to type template parameter), in which case [std::forward](forward.html "cpp/utility/forward") is used instead. 

Unless otherwise specified, all standard library objects that have been moved from are placed in a "valid but unspecified state", meaning the object's class invariants hold (so functions without preconditions, such as the assignment operator, can be safely used on the object after it was moved from): 
    
    
    [std::vector](../container/vector.html)<[std::string](../string/basic_string.html)> v;
    [std::string](../string/basic_string.html) str = "example";
    v.push_back(std::move(str)); // str is now valid but unspecified
    str.back(); // undefined behavior if size() == 0: back() has a precondition !empty()
    if (!str.empty())
        str.back(); // OK, empty() has no precondition and back() precondition is met
     
    str.clear(); // OK, clear() has no preconditions

Also, the standard library functions called with xvalue arguments may assume the argument is the only reference to the object; if it was constructed from an lvalue with `std::move`, no aliasing checks are made. However, self-move-assignment of standard library types is guaranteed to place the object in a valid (but usually unspecified) state: 
    
    
    [std::vector](../container/vector.html)<int> v = {2, 3, 3};
    v = std::move(v); // the value of v is unspecified

### Example

Run this code
    
    
    #include <iomanip>
    #include <iostream>
    #include <string>
    #include <utility>
    #include <vector>
     
    int main()
    {
        [std::string](../string/basic_string.html) str = "Salut";
        [std::vector](../container/vector.html)<[std::string](../string/basic_string.html)> v;
     
        // uses the push_back(const T&) overload, which means
        // we'll incur the cost of copying str
        v.push_back(str);
        [std::cout](../io/cout.html) << "After copy, str is " << [std::quoted](../io/manip/quoted.html)(str) << '\n';
     
        // uses the rvalue reference push_back(T&&) overload,
        // which means no strings will be copied; instead, the contents
        // of str will be moved into the vector. This is less
        // expensive, but also means str might now be empty.
        v.push_back(std::move(str));
        [std::cout](../io/cout.html) << "After move, str is " << [std::quoted](../io/manip/quoted.html)(str) << '\n';
     
        [std::cout](../io/cout.html) << "The contents of the vector are {" << [std::quoted](../io/manip/quoted.html)(v[0])
                  << ", " << [std::quoted](../io/manip/quoted.html)(v[1]) << "}\n";
    }

Possible output: 
    
    
    After copy, str is "Salut"
    After move, str is ""
    The contents of the vector are {"Salut", "Salut"}

### See also

[ forward](forward.html "cpp/utility/forward")(C++11) |  forwards a function argument and use the type template argument to preserve its value category   
(function template)   
---|---  
[ move_if_noexcept](move_if_noexcept.html "cpp/utility/move if noexcept")(C++11) |  converts the argument to an xvalue if the move constructor does not throw   
(function template)   
[ move](../algorithm/move.html "cpp/algorithm/move")(C++11) |  moves a range of elements to a new location   
(function template) 
