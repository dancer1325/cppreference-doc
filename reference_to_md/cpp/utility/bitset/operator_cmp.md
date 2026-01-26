 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::bitset`](../bitset.html "cpp/utility/bitset")

[Member types](../bitset.html#Member_types "cpp/utility/bitset")  
---  
[bitset::reference](reference.html "cpp/utility/bitset/reference")  
[Member functions](../bitset.html#Member_functions "cpp/utility/bitset")  
[bitset::bitset](bitset.html "cpp/utility/bitset/bitset")  
**bitset::operator== bitset::operator!=**(until C++20)  
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
| [operator&operator|operator^](operator_logic2.html "cpp/utility/bitset/operator logic2")  
---  
  
| [operator<<operator>>](operator_ltltgtgt2.html "cpp/utility/bitset/operator ltltgtgt2")  
---  
  
  
  
[Helper classes](../bitset.html#Helper_classes "cpp/utility/bitset")  
[std::hash](hash.html "cpp/utility/bitset/hash")(C++11)  
  


bool operator==( const bitset& rhs ) const; |  (1) | (noexcept since C++11)   
(constexpr since C++23)  
---|---|---  
bool operator!=( const bitset& rhs ) const; |  (2) | (noexcept since C++11)   
(until C++20)  
| |   
  
1) Returns true if all of the bits in *this and rhs are equal.

2) Returns true if any of the bits in *this and rhs are not equal.

The `!=` operator is [synthesized](../../language/default_comparisons.html#Other_defaulted_comparison_operators "cpp/language/default comparisons") from `operator==`.  | (since C++20)  
---|---  
  
### Parameters

rhs  |  \-  |  bitset to compare   
---|---|---  
  
### Return value

1) true if the value of each bit in *this equals the value of the corresponding bit in rhs, otherwise false.

2) true if !(*this == rhs), otherwise false.

### Example

Compare given bitsets to determine if they are identical:

Run this code
    
    
    #include <bitset>
    #include <iostream>
     
    int main()
    {
        [std::bitset](../bitset.html)<4> b1(0b0011);
        [std::bitset](../bitset.html)<4> b2(b1);
        [std::bitset](../bitset.html)<4> b3(0b0100);
     
        [std::cout](../../io/cout.html) << [std::boolalpha](../../io/manip/boolalpha.html);
        [std::cout](../../io/cout.html) << "b1 == b2: " << (b1 == b2) << '\n';
        [std::cout](../../io/cout.html) << "b1 == b3: " << (b1 == b3) << '\n';
        [std::cout](../../io/cout.html) << "b1 != b3: " << (b1 != b3) << '\n';
     
    //  b1 == std::bitset<3>{}; // compile-time error: incompatible types
    }

Output: 
    
    
    b1 == b2: true
    b1 == b3: false
    b1 != b3: true
