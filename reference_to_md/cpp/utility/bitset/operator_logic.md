 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
**bitset::operator &=bitset::operator|=bitset::operator^=bitset::operator~**  
[bitset::operator<<=bitset::operator>>=bitset::operator<<bitset::operator>>](operator_ltltgtgt.html "cpp/utility/bitset/operator ltltgtgt")  
[bitset::set](set.html "cpp/utility/bitset/set")  
[bitset::reset](reset.html "cpp/utility/bitset/reset")  
[bitset::flip](flip.html "cpp/utility/bitset/flip")  
[Conversions](../bitset.html#Conversions "cpp/utility/bitset")  
[bitset::to_string](to_string.html "cpp/utility/bitset/to string")  
[bitset::to_ulong](to_ulong.html "cpp/utility/bitset/to ulong")  
[bitset::to_ullong](to_ullong.html "cpp/utility/bitset/to ullong")(C++11)  
[Non-member functions](../bitset.html#Non-member_functions "cpp/utility/bitset")  
| [operator&operator|operator^](operator_logic2.html "cpp/utility/bitset/operator logic2")  
---  
  
| [operator<<operator>>](operator_ltltgtgt2.html "cpp/utility/bitset/operator ltltgtgt2")  
---  
  
  
  
[Helper classes](../bitset.html#Helper_classes "cpp/utility/bitset")  
[std::hash](hash.html "cpp/utility/bitset/hash")(C++11)  
  


bitset& operator&=( const bitset& other ); |  (1) | (noexcept since C++11)   
(constexpr since C++23)  
---|---|---  
bitset& operator|=( const bitset& other ); |  (2) | (noexcept since C++11)   
(constexpr since C++23)  
bitset& operator^=( const bitset& other ); |  (3) | (noexcept since C++11)   
(constexpr since C++23)  
bitset operator~() const; |  (4) | (noexcept since C++11)   
(constexpr since C++23)  
| |   
  
Performs binary AND, OR, XOR and NOT. 

1) Sets the bits to the result of binary AND on corresponding pairs of bits of *this and other.

2) Sets the bits to the result of binary OR on corresponding pairs of bits of *this and other.

3) Sets the bits to the result of binary XOR on corresponding pairs of bits of *this and other.

4) Returns a temporary copy of *this with all bits flipped (binary NOT).

Note that `&=`, `|=`, and `^=` are only defined for bitsets of the same size `N`. 

## Contents

  * [1 Parameters](operator_logic.html#Parameters)
  * [2 Return value](operator_logic.html#Return_value)
  * [3 Example](operator_logic.html#Example)
  * [4 See also](operator_logic.html#See_also)

  
---  
  
### Parameters

other  |  \-  |  another bitset   
---|---|---  
  
### Return value

1-3) *this

4) [std::bitset](../bitset.html)<N>(*this).flip()

### Example

Run this code
    
    
    #include <bitset>
    #include <cstddef>
    #include <iostream>
    #include <string>
     
    int main()
    {
        const [std::string](../../string/basic_string.html) pattern_str{"1001"};
        [std::bitset](../bitset.html)<16> pattern{pattern_str}, dest;
     
        for ([std::size_t](../../types/size_t.html) i = dest.size() / pattern_str.size(); i != 0; --i)
        {
            dest <<= pattern_str.size();
            dest |= pattern;
            [std::cout](../../io/cout.html) << dest << " (i = " << i << ")\n";
        }
     
        [std::cout](../../io/cout.html) << ~dest << " (~dest)\n";
    }

Output: 
    
    
    0000000000001001 (i = 4)
    0000000010011001 (i = 3)
    0000100110011001 (i = 2)
    1001100110011001 (i = 1)
    0110011001100110 (~dest)

### See also

[ operator<<=operator>>=operator<<operator>>](operator_ltltgtgt.html "cpp/utility/bitset/operator ltltgtgt") |  performs binary shift left and shift right   
(public member function)   
---|---
