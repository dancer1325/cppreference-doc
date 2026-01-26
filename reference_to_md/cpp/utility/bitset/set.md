 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
**bitset::set**  
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
  


bitset& set(); |  (1) | (noexcept since C++11)   
(constexpr since C++23)  
---|---|---  
bitset& set( [std::size_t](../../types/size_t.html) pos, bool value = true ); |  (2)  |  (constexpr since C++23)  
| |   
  
Sets all bits to true or sets one bit to specified value. 

1) Sets all bits to true.

2) Sets the bit at position pos to the value value.

## Contents

  * [1 Parameters](set.html#Parameters)
  * [2 Return value](set.html#Return_value)
  * [3 Exceptions](set.html#Exceptions)
  * [4 Example](set.html#Example)
  * [5 Defect reports](set.html#Defect_reports)
  * [6 See also](set.html#See_also)

  
---  
  
### Parameters

pos  |  \-  |  the position (counting from ​0​, i.e. from least significant to most significant) of the bit to set   
---|---|---  
value  |  \-  |  the value to set the bit to   
  
### Return value

*this

### Exceptions

2) Throws [std::out_of_range](../../error/out_of_range.html "cpp/error/out of range") if pos does not correspond to a valid bit position.

### Example

Run this code
    
    
    #include <bitset>
    #include <cstddef>
    #include <iostream>
     
    int main()
    {
        [std::bitset](../bitset.html)<8> b;
        [std::cout](../../io/cout.html) << b << '\n';
        [std::cout](../../io/cout.html) << b.set() << '\n';
        [std::cout](../../io/cout.html) << b.reset() << '\n';
     
        for ([std::size_t](../../types/size_t.html) i = 1; i < b.size(); i += 2)
            b.set(i);
     
        [std::cout](../../io/cout.html) << b << '\n';
    }

Output: 
    
    
    00000000
    11111111
    00000000
    10101010

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 186](https://cplusplus.github.io/LWG/issue186) | C++98  | the type of value was int | corrected to bool  
[LWG 2250](https://cplusplus.github.io/LWG/issue2250) | C++98  | the behavior was undefined if pos does  
not correspond to a valid bit position  | always throws an  
exception in this case   
  
### See also

[ reset](reset.html "cpp/utility/bitset/reset") |  sets bits to false   
(public member function)   
---|---  
[ flip](flip.html "cpp/utility/bitset/flip") |  toggles the values of bits   
(public member function) 
