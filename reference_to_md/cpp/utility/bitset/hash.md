 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
| [operator&operator|operator^](operator_logic2.html "cpp/utility/bitset/operator logic2")  
---  
  
| [operator<<operator>>](operator_ltltgtgt2.html "cpp/utility/bitset/operator ltltgtgt2")  
---  
  
  
  
[Helper classes](../bitset.html#Helper_classes "cpp/utility/bitset")  
**std::hash**(C++11)  
  


Defined in header `[<bitset>](../../header/bitset.html "cpp/header/bitset")` |  |   
---|---|---  
template< [std::size_t](../../types/size_t.html) N >  
struct hash<[std::bitset](../bitset.html)<N>>; |  |  (since C++11)  
| |   
  
The template specialization of [std::hash](../hash.html "cpp/utility/hash") for [std::bitset](../bitset.html)<N> allows users to obtain hashes of objects of type [std::bitset](../bitset.html)<N>. 

### Example

The following code shows one possible output of a hash function used on several bitsets:

Run this code
    
    
    #include <bitset>
    #include <functional>
    #include <iostream>
     
    int main()
    {
        [std::bitset](../bitset.html)<4> b1{0}, b2{42};
        [std::bitset](../bitset.html)<8> b3{0}, b4{42};
     
        [std::hash](../hash.html)<[std::bitset](../bitset.html)<4>> hash_fn4;
        [std::hash](../hash.html)<[std::bitset](../bitset.html)<8>> hash_fn8;
        using bin64 = [std::bitset](../bitset.html)<64>;
     
        [std::cout](../../io/cout.html) << [std::hex](../../io/manip/hex.html)
                  << bin64{hash_fn4(b1)} << " = " << hash_fn4(b1) << '\n'
                  << bin64{hash_fn4(b2)} << " = " << hash_fn4(b2) << '\n'
                  << bin64{hash_fn8(b3)} << " = " << hash_fn8(b3) << '\n'
                  << bin64{hash_fn8(b4)} << " = " << hash_fn8(b4) << '\n';
    }

Possible output: 
    
    
    0110110100001001111011100010011011010101100001100011011000011001 = 6d09ee26d5863619
    1111111101011100010110100000111000111110100000111011100011110000 = ff5c5a0e3e83b8f0
    0110110100001001111011100010011011010101100001100011011000011001 = 6d09ee26d5863619
    0101110000011100011110011010111011100110010000110100110001001101 = 5c1c79aee6434c4d

### See also

[ hash](../hash.html "cpp/utility/hash")(C++11) |  hash function object   
(class template)   
---|---
