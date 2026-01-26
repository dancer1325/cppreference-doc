
  


  
  
  
  
  
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
**move_if_noexcept**(C++11)  
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
/* see below */ move_if_noexcept( T& x ) noexcept; |  | (since C++11)   
(constexpr since C++14)  
| |   
  
`std::move_if_noexcept` obtains an rvalue reference to its argument if its move constructor does not throw exceptions or if there is no copy constructor (move-only type), otherwise obtains an lvalue reference to its argument. It is typically used to combine move semantics with strong exception guarantee. 

The return type of `std::move_if_noexcept` is: 

  * T&& if [std::is_nothrow_move_constructible](../types/is_move_constructible.html)<T>::value || ![std::is_copy_constructible](../types/is_copy_constructible.html)<T>::value is true. 
  * Otherwise, const T&. 



## Contents

  * [1 Parameters](move_if_noexcept.html#Parameters)
  * [2 Return value](move_if_noexcept.html#Return_value)
  * [3 Complexity](move_if_noexcept.html#Complexity)
  * [4 Notes](move_if_noexcept.html#Notes)
  * [5 Example](move_if_noexcept.html#Example)
  * [6 See also](move_if_noexcept.html#See_also)

  
---  
  
### Parameters

x  |  \-  |  the object to be moved or copied   
---|---|---  
  
### Return value

std::move(x) or x, depending on exception guarantees. 

### Complexity

Constant. 

### Notes

This is used, for example, by [std::vector::resize](../container/vector/resize.html "cpp/container/vector/resize"), which may have to allocate new storage and then move or copy elements from old storage to new storage. If an exception occurs during this operation, [std::vector::resize](../container/vector/resize.html "cpp/container/vector/resize") undoes everything it did to this point, which is only possible if `std::move_if_noexcept` was used to decide whether to use move construction or copy construction (unless copy constructor is not available, in which case move constructor is used either way and the strong exception guarantee may be waived). 

### Example

Run this code
    
    
    #include <iostream>
    #include <utility>
     
    struct Bad
    {
        Bad() {}
        Bad(Bad&&) // may throw
        {
            [std::cout](../io/cout.html) << "Throwing move constructor called\n";
        }
        Bad(const Bad&) // may throw as well
        {
            [std::cout](../io/cout.html) << "Throwing copy constructor called\n";
        }
    };
     
    struct Good
    {
        Good() {}
        Good(Good&&) noexcept // will NOT throw
        {
            [std::cout](../io/cout.html) << "Non-throwing move constructor called\n";
        }
        Good(const Good&) noexcept // will NOT throw
        {
            [std::cout](../io/cout.html) << "Non-throwing copy constructor called\n";
        }
    };
     
    int main()
    {
        Good g;
        Bad b;
        [[maybe_unused]] Good g2 = std::move_if_noexcept(g);
        [[maybe_unused]] Bad b2 = std::move_if_noexcept(b);
    }

Output: 
    
    
    Non-throwing move constructor called
    Throwing copy constructor called

### See also

[ forward](forward.html "cpp/utility/forward")(C++11) |  forwards a function argument and use the type template argument to preserve its value category   
(function template)   
---|---  
[ move](move.html "cpp/utility/move")(C++11) |  converts the argument to an xvalue   
(function template) 
