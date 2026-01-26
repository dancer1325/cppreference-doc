 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
**bitset::reset**  
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
  


bitset& reset(); |  (1) | (noexcept since C++11)   
(constexpr since C++23)  
---|---|---  
bitset& reset( [std::size_t](../../types/size_t.html) pos ); |  (2) | (constexpr since C++23)  
| |   
  
Sets bits to false. 

1) Sets all bits to false

2) Sets the bit at position pos to false.

## Contents

  * [1 Parameters](reset.html#Parameters)
  * [2 Return value](reset.html#Return_value)
  * [3 Exceptions](reset.html#Exceptions)
  * [4 Example](reset.html#Example)
  * [5 Defect reports](reset.html#Defect_reports)
  * [6 See also](reset.html#See_also)

  
---  
  
### Parameters

pos  |  \-  |  the position of the bit to set   
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
        [std::bitset](../bitset.html)<8> b(42);
        [std::cout](../../io/cout.html) << "Bitset is         " << b << '\n';
        b.reset(1);
        [std::cout](../../io/cout.html) << "After b.reset(1): " << b << '\n';
        b.reset();
        [std::cout](../../io/cout.html) << "After b.reset():  " << b << '\n';
    }

Output: 
    
    
    Bitset is         00101010
    After b.reset(1): 00101000
    After b.reset():  00000000

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
[ flip](flip.html "cpp/utility/bitset/flip") |  toggles the values of bits   
(public member function) 
