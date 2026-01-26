 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
**bitset::flip**  
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
  


bitset& flip(); |  (1) | (noexcept since C++11)   
(constexpr since C++23)  
---|---|---  
bitset& flip( [std::size_t](../../types/size_t.html) pos ); |  (2) | (constexpr since C++23)  
| |   
  
Flips bits, i.e. changes true values to false and false values to true. Equivalent to a logical NOT operation on part or all of the bitset. 

1) Flips all bits (like [operator~](operator_logic.html "cpp/utility/bitset/operator logic"), but in-place).

2) Flips the bit at the position pos.

## Contents

  * [1 Parameters](flip.html#Parameters)
  * [2 Return value](flip.html#Return_value)
  * [3 Exceptions](flip.html#Exceptions)
  * [4 Example](flip.html#Example)
  * [5 Defect reports](flip.html#Defect_reports)
  * [6 See also](flip.html#See_also)

  
---  
  
### Parameters

pos  |  \-  |  the position of the bit to flip   
---|---|---  
  
### Return value

*this

### Exceptions

2) Throws [std::out_of_range](../../error/out_of_range.html "cpp/error/out of range") if pos does not correspond to a valid bit position.

### Example

Run this code
    
    
    #include <bitset>
    #include <iostream>
     
    int main()
    {
        [std::bitset](../bitset.html)<4> flops;
     
        [std::cout](../../io/cout.html) << flops << '\n'
                  << flops.flip(0) << '\n'
                  << flops.flip(2) << '\n'
                  << flops.flip() << '\n';
    }

Output: 
    
    
    0000
    0001
    0101
    1010

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2250](https://cplusplus.github.io/LWG/issue2250) | C++98  | the behavior was undefined if pos does  
not correspond to a valid bit position  | always throws an  
exception in this case   
  
### See also

[ set](set.html "cpp/utility/bitset/set") |  sets bits to true or given value   
(public member function)   
---|---  
[ reset](reset.html "cpp/utility/bitset/reset") |  sets bits to false   
(public member function)   
[ operator&=operator|=operator^=operator~](operator_logic.html "cpp/utility/bitset/operator logic") |  performs binary AND, OR, XOR and NOT   
(public member function)   
[ flip](../../container/vector_bool/flip.html "cpp/container/vector bool/flip") |  flips all the bits   
(public member function of `std::vector<bool,Allocator>`) 
