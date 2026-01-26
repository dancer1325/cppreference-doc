 
  


  
  
  
  
  
| General utilities  
---  
| [Function objects](../../functional.html "cpp/utility/functional")  
---  
[Bit manipulation](../bit.html "cpp/utility/bit") (C++20)  
[C-style bit manipulation](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/stdbit&action=edit&redlink=1 "cpp/utility/stdbit \(page does not exist\)") (C++26)  
[bitset](../bitset.html "cpp/utility/bitset")  
[hash](../hash.html "cpp/utility/hash")(C++11)  
  
[Relational operators](../../utility.html#Relational_operators "cpp/utility") (deprecated in C++20)  
|  | **rel_ops::operator!= rel_ops::operator>**` `  
---  
  
| **rel_ops::operator <=rel_ops::operator>=**  
---  
  
[Integer comparison functions](../../utility.html#Integer_comparison_functions "cpp/utility")  
| [cmp_equalcmp_lesscmp_less_than](../intcmp.html "cpp/utility/intcmp")(C++20)(C++20)(C++20)` `  
---  
  
| [cmp_not_equalcmp_greatercmp_greater_than](../intcmp.html "cpp/utility/intcmp")(C++20)(C++20)(C++20)  
---  
  
[in_range](../in_range.html "cpp/utility/in range")(C++20)  
[Swap](../../utility.html#Swap "cpp/utility") and [type operations](../../utility.html#Type_operations "cpp/utility")  
| [swap](../swap.html "cpp/algorithm/swap")  
---  
[ranges::swap](../ranges/swap.html "cpp/utility/ranges/swap")(C++20)  
[exchange](../exchange.html "cpp/utility/exchange")(C++14)  
[declval](../declval.html "cpp/utility/declval")(C++11)  
[to_underlying](../to_underlying.html "cpp/utility/to underlying")(C++23)  
  
| [forward](../forward.html "cpp/utility/forward")(C++11)  
---  
[forward_like](../forward_like.html "cpp/utility/forward like")(C++23)  
[move](../move.html "cpp/utility/move")(C++11)  
[move_if_noexcept](../move_if_noexcept.html "cpp/utility/move if noexcept")(C++11)  
[as_const](../as_const.html "cpp/utility/as const")(C++17)  
  
  
  
  
  
  
  


Defined in header `[<utility>](../../header/utility.html "cpp/header/utility")` |  |   
---|---|---  
template< class T >  
bool operator!=( const T& lhs, const T& rhs ); |  (1) | (deprecated in C++20)  
template< class T >  
bool operator>( const T& lhs, const T& rhs ); |  (2) | (deprecated in C++20)  
template< class T >  
bool operator<=( const T& lhs, const T& rhs ); |  (3) | (deprecated in C++20)  
template< class T >  
bool operator>=( const T& lhs, const T& rhs ); |  (4) | (deprecated in C++20)  
| |   
  
Given a user-defined operator== and operator< for objects of type `T`, implements the usual semantics of other comparison operators. 

1) Implements operator!= in terms of operator==.

2) Implements operator> in terms of operator<.

3) Implements operator<= in terms of operator<.

4) Implements operator>= in terms of operator<.

## Contents

  * [1 Parameters](operator_cmp.html#Parameters)
  * [2 Return value](operator_cmp.html#Return_value)
  * [3 Possible implementation](operator_cmp.html#Possible_implementation)
  * [4 Notes](operator_cmp.html#Notes)
  * [5 Example](operator_cmp.html#Example)

  
---  
  
### Parameters

lhs  |  \-  |  left-hand argument   
---|---|---  
rhs  |  \-  |  right-hand argument   
  
### Return value

1) Returns true if lhs is _not equal_ to rhs.

2) Returns true if lhs is _greater_ than rhs.

3) Returns true if lhs is _less or equal_ to rhs.

4) Returns true if lhs is _greater or equal_ to rhs.

### Possible implementation

[(1) `operator!=`](operator_cmp.html#Version_1)  
---  
      
    
    namespace rel_ops
    {
        template<class T>
        bool operator!=(const T& lhs, const T& rhs)
        {
            return !(lhs == rhs);
        }
    }  
  
[(2) `operator>`](operator_cmp.html#Version_2)  
      
    
    namespace rel_ops
    {
        template<class T>
        bool operator>(const T& lhs, const T& rhs)
        {
            return rhs < lhs;
        }
    }  
  
[(3) `operator<=`](operator_cmp.html#Version_3)  
      
    
    namespace rel_ops
    {
        template<class T>
        bool operator<=(const T& lhs, const T& rhs)
        {
            return !(rhs < lhs);
        }
    }  
  
[(4) `operator>=`](operator_cmp.html#Version_4)  
      
    
    namespace rel_ops
    {
        template<class T>
        bool operator>=(const T& lhs, const T& rhs)
        {
            return !(lhs < rhs);
        }
    }  
  
### Notes

[Boost.operators](https://www.boost.org/doc/libs/release/libs/utility/operators.htm) provides a more versatile alternative to `std::rel_ops`. 

As of C++20, `std::rel_ops` are deprecated in favor of [`operator<=>`](../../language/default_comparisons.html "cpp/language/default comparisons"). 

### Example

Run this code
    
    
    #include <iostream>
    #include <utility>
     
    struct Foo
    {
        int n;
    };
     
    bool operator==(const Foo& lhs, const Foo& rhs)
    {
        return lhs.n == rhs.n;
    }
     
    bool operator<(const Foo& lhs, const Foo& rhs)
    {
        return lhs.n < rhs.n;
    }
     
    int main()
    {
        Foo f1 = {1};
        Foo f2 = {2};
        using namespace std::rel_ops;
     
        [std::cout](../../io/cout.html) << [std::boolalpha](../../io/manip/boolalpha.html)
                  << "{1} != {2} : " << (f1 != f2) << '\n'
                  << "{1} >  {2} : " << (f1 >  f2) << '\n'
                  << "{1} <= {2} : " << (f1 <= f2) << '\n'
                  << "{1} >= {2} : " << (f1 >= f2) << '\n';
    }

Output: 
    
    
    {1} != {2} : true
    {1} >  {2} : false
    {1} <= {2} : true
    {1} >= {2} : false
