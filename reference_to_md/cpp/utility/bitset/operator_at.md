 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::bitset`](../bitset.html "cpp/utility/bitset")

[Member types](../bitset.html#Member_types "cpp/utility/bitset")  
---  
[bitset::reference](reference.html "cpp/utility/bitset/reference")  
[Member functions](../bitset.html#Member_functions "cpp/utility/bitset")  
[bitset::bitset](bitset.html "cpp/utility/bitset/bitset")  
[bitset::operator==bitset::operator!=](operator_cmp.html "cpp/utility/bitset/operator cmp")(until C++20)  
[Element access](../bitset.html#Element_access "cpp/utility/bitset")  
**bitset::operator[]**  
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
  


bool operator[]( [std::size_t](../../types/size_t.html) pos ) const; |  (1) | (constexpr since C++11)  
---|---|---  
reference operator[]( [std::size_t](../../types/size_t.html) pos ); |  (2) | (constexpr since C++23)  
| |   
  
Accesses the bit at position pos. 

1) Returns the value of the bit.

2) Returns an object of type [std::bitset::reference](reference.html "cpp/utility/bitset/reference") that allows modification of the value.

If pos < size() is false, the behavior is undefined.  | (until C++26)  
---|---  
If pos < size() is false: 

  * If the implementation is [hardened](../../standard_library.html#Standard_library_hardening "cpp/standard library"), a [contract violation](../../language/contracts.html "cpp/language/contracts") occurs. Moreover, if the contract-violation handler returns under “observe” evaluation semantic, the behavior is undefined. 
  * If the implementation is not hardened, the behavior is undefined. 

| (since C++26)  
  
## Contents

  * [1 Parameters](operator_at.html#Parameters)
  * [2 Return value](operator_at.html#Return_value)
  * [3 Exceptions](operator_at.html#Exceptions)
  * [4 Example](operator_at.html#Example)
  * [5 Defect reports](operator_at.html#Defect_reports)
  * [6 See also](operator_at.html#See_also)

  
---  
  
### Parameters

pos  |  \-  |  position of the bit to return   
---|---|---  
  
### Return value

1) The value of the requested bit.

2) An object of type [std::bitset::reference](reference.html "cpp/utility/bitset/reference"), which allows writing to the requested bit.

### Exceptions

Throws nothing. 

### Example

Run this code
    
    
    #include <bitset>
    #include <cstddef>
    #include <iostream>
     
    int main()
    {
        [std::bitset](../bitset.html)<8> b1{0b00101010}; // binary literal for 42
     
        for ([std::size_t](../../types/size_t.html) i = 0; i < b1.size(); ++i)
            [std::cout](../../io/cout.html) << "b1[" << i << "]: " << b1[i] << '\n';
        b1[0] = true; // modifies the first bit through bitset::reference
     
        [std::cout](../../io/cout.html) << "After setting bit 0, b1 holds " << b1 << '\n';
    }

Output: 
    
    
    b1[0]: 0
    b1[1]: 1
    b1[2]: 0
    b1[3]: 1
    b1[4]: 0
    b1[5]: 1
    b1[6]: 0
    b1[7]: 0
    After setting bit 0, b1 holds 00101011

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 11](https://cplusplus.github.io/LWG/issue11) | C++98  | 1\. the description was missing in the C++ standard  
2\. there was only the non-const overload  | 1\. description added  
2\. added the const overload   
[LWG 907](https://cplusplus.github.io/LWG/issue907) | C++98  | the behavior of reading the bit at pos was equivalent  
to that of [`test(pos)`](test.html "cpp/utility/bitset/test"), but `test()` may throw exceptions  | avoids mentioning `test()`  
  
### See also

[ test](test.html "cpp/utility/bitset/test") |  accesses specific bit   
(public member function)   
---|---
