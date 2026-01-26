 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
**bitset::to_ullong**(C++11)  
[Non-member functions](../bitset.html#Non-member_functions "cpp/utility/bitset")  
| [operator&operator|operator^](operator_logic2.html "cpp/utility/bitset/operator logic2")  
---  
  
| [operator<<operator>>](operator_ltltgtgt2.html "cpp/utility/bitset/operator ltltgtgt2")  
---  
  
  
  
[Helper classes](../bitset.html#Helper_classes "cpp/utility/bitset")  
[std::hash](hash.html "cpp/utility/bitset/hash")(C++11)  
  


unsigned long long to_ullong() const |  |  (since C++11)   
(constexpr since C++23)  
---|---|---  
| |   
  
Converts the contents of the bitset to an unsigned long long integer. 

The first bit of the bitset corresponds to the least significant digit of the number and the last bit corresponds to the most significant digit. 

## Contents

  * [1 Parameters](to_ullong.html#Parameters)
  * [2 Return value](to_ullong.html#Return_value)
  * [3 Exceptions](to_ullong.html#Exceptions)
  * [4 Example](to_ullong.html#Example)
  * [5 See also](to_ullong.html#See_also)

  
---  
  
### Parameters

(none) 

### Return value

The converted integer 

### Exceptions

[std::overflow_error](../../error/overflow_error.html "cpp/error/overflow error") if the value can not be represented in unsigned long long. 

### Example

Run this code
    
    
    #include <bitset>
    #include <iostream>
    #include <limits>
     
    int main()
    {
        [std::bitset](../bitset.html)<[std::numeric_limits](../../types/numeric_limits.html)<unsigned long long>::digits> b
        (
            0x123456789abcdef0LL
        );
     
        [std::cout](../../io/cout.html) << b << "  " << [std::hex](../../io/manip/hex.html) << b.to_ullong() << '\n';
        b.flip();
        [std::cout](../../io/cout.html) << b << "  " << b.to_ullong() << '\n';
     
        [std::bitset](../bitset.html)<[std::numeric_limits](../../types/numeric_limits.html)<unsigned long long>::digits + 1> q{0};
        try
        {
            (~q).to_ullong(); // throws
        }
        catch (const [std::overflow_error](../../error/overflow_error.html)& ex)
        {
            [std::cout](../../io/cout.html) << "ex: " << ex.what() << '\n';
        }
    }

Output: 
    
    
    0001001000110100010101100111100010011010101111001101111011110000  123456789abcdef0
    1110110111001011101010011000011101100101010000110010000100001111  edcba9876543210f
    ex: _Base_bitset::_M_do_to_ullong

### See also

[ to_string](to_string.html "cpp/utility/bitset/to string") |  returns a string representation of the data   
(public member function)   
---|---  
[ to_ulong](to_ulong.html "cpp/utility/bitset/to ulong") |  returns an unsigned long integer representation of the data   
(public member function) 
