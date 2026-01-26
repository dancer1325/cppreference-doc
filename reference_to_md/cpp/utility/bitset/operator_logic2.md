 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::bitset`](../bitset.html "cpp/utility/bitset")

[Member types](../bitset.html#Member_types "cpp/utility/bitset")  
---  
[bitset::reference](reference.html "cpp/utility/bitset/reference")  
[Member functions](../bitset.html#Member_functions "cpp/utility/bitset")  
[bitset::bitset](bitset.html "cpp/utility/bitset/bitset")  
[bitset::operator==bitset::operator!=](operator_cmp.html "cpp/utility/bitset/operator cmp")(until C++20)  
[Element access](../bitset.html#Element_access "cpp/utility/bitset")  
[bitset::operator[]](operator_at.html "cpp/utility/bitset/operator at")  
[bitset::test](test.html "cpp/utility/bitset/test")  
[bitset::allbitset::anybitset::none](all_any_none.html "cpp/utility/bitset/all any none")(C++11)  
[bitset::count](count.html "cpp/utility/bitset/count")  
[Capacity](../bitset.html#Capacity "cpp/utility/bitset")  
[bitset::size](size.html "cpp/utility/bitset/size")  
[Modifiers](../bitset.html#Modifiers "cpp/utility/bitset")  
[bitset::operator&=bitset::operator|=bitset::operator^=bitset::operator~](operator_logic.html "cpp/utility/bitset/operator logic")  
[bitset::operator<<=bitset::operator>>=bitset::operator<<bitset::operator>>](operator_ltltgtgt.html "cpp/utility/bitset/operator ltltgtgt")  
[bitset::set](set.html "cpp/utility/bitset/set")  
[bitset::reset](reset.html "cpp/utility/bitset/reset")  
[bitset::flip](flip.html "cpp/utility/bitset/flip")  
[Conversions](../bitset.html#Conversions "cpp/utility/bitset")  
[bitset::to_string](to_string.html "cpp/utility/bitset/to string")  
[bitset::to_ulong](to_ulong.html "cpp/utility/bitset/to ulong")  
[bitset::to_ullong](to_ullong.html "cpp/utility/bitset/to ullong")(C++11)  
[Non-member functions](../bitset.html#Non-member_functions "cpp/utility/bitset")  
| **operator &operator|operator^**  
---  
  
| [operator<<operator>>](operator_ltltgtgt2.html "cpp/utility/bitset/operator ltltgtgt2")  
---  
  
  
  
[Helper classes](../bitset.html#Helper_classes "cpp/utility/bitset")  
[std::hash](hash.html "cpp/utility/bitset/hash")(C++11)  
  


Defined in header `[<bitset>](../../header/bitset.html "cpp/header/bitset")` |  |   
---|---|---  
template< [std::size_t](../../types/size_t.html) N >  
[std::bitset](../bitset.html)<N> operator&( const [std::bitset](../bitset.html)<N>& lhs,  
const [std::bitset](../bitset.html)<N>& rhs ); |  (1) | (noexcept since C++11)   
(constexpr since C++23)  
template< [std::size_t](../../types/size_t.html) N >  
[std::bitset](../bitset.html)<N> operator|( const [std::bitset](../bitset.html)<N>& lhs,  
const [std::bitset](../bitset.html)<N>& rhs ); |  (2) | (noexcept since C++11)   
(constexpr since C++23)  
template< [std::size_t](../../types/size_t.html) N >  
[std::bitset](../bitset.html)<N> operator^( const [std::bitset](../bitset.html)<N>& lhs,  
const [std::bitset](../bitset.html)<N>& rhs ); |  (3) | (noexcept since C++11)   
(constexpr since C++23)  
| |   
  
Performs binary AND, OR, and XOR between two bitsets, lhs and rhs. 

1) Returns a [std::bitset](../bitset.html)<N> containing the result of binary AND on corresponding pairs of bits of lhs and rhs.

2) Returns a [std::bitset](../bitset.html)<N> containing the result of binary OR on corresponding pairs of bits of lhs and rhs.

3) Returns a [std::bitset](../bitset.html)<N> containing the result of binary XOR on corresponding pairs of bits of lhs and rhs.

## Contents

  * [1 Parameters](operator_logic2.html#Parameters)
  * [2 Return value](operator_logic2.html#Return_value)
  * [3 Example](operator_logic2.html#Example)
  * [4 See also](operator_logic2.html#See_also)

  
---  
  
### Parameters

lhs  |  \-  |  the bitset on the left-hand side of the operator   
---|---|---  
rhs  |  \-  |  the bitset on the right-hand side of the operator   
  
### Return value

1) [std::bitset](../bitset.html)<N>(lhs) &= rhs

2) [std::bitset](../bitset.html)<N>(lhs) |= rhs

3) [std::bitset](../bitset.html)<N>(lhs) ^= rhs

### Example

Run this code
    
    
    #include <bitset>
    #include <iostream>
     
    int main()
    {
        [std::bitset](../bitset.html)<4> b1("0110");
        [std::bitset](../bitset.html)<4> b2("0011");
     
        [std::cout](../../io/cout.html) << "b1 & b2: " << (b1 & b2) << '\n';
        [std::cout](../../io/cout.html) << "b1 | b2: " << (b1 | b2) << '\n';
        [std::cout](../../io/cout.html) << "b1 ^ b2: " << (b1 ^ b2) << '\n';
    }

Output: 
    
    
    b1 & b2: 0010
    b1 | b2: 0111
    b1 ^ b2: 0101

### See also

[ operator&=operator|=operator^=operator~](operator_logic.html "cpp/utility/bitset/operator logic") |  performs binary AND, OR, XOR and NOT   
(public member function)   
---|---
