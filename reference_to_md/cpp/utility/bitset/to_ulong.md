 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
**bitset::to_ulong**  
[bitset::to_ullong](to_ullong.html "cpp/utility/bitset/to ullong")(C++11)  
[Non-member functions](../bitset.html#Non-member_functions "cpp/utility/bitset")  
| [operator&operator|operator^](operator_logic2.html "cpp/utility/bitset/operator logic2")  
---  
  
| [operator<<operator>>](operator_ltltgtgt2.html "cpp/utility/bitset/operator ltltgtgt2")  
---  
  
  
  
[Helper classes](../bitset.html#Helper_classes "cpp/utility/bitset")  
[std::hash](hash.html "cpp/utility/bitset/hash")(C++11)  
  


unsigned long to_ulong() const |  |  (constexpr since C++23)  
---|---|---  
| |   
  
Converts the contents of the bitset to an unsigned long integer. 

The first bit of the bitset corresponds to the least significant digit of the number and the last bit corresponds to the most significant digit. 

## Contents

  * [1 Parameters](to_ulong.html#Parameters)
  * [2 Return value](to_ulong.html#Return_value)
  * [3 Exceptions](to_ulong.html#Exceptions)
  * [4 Example](to_ulong.html#Example)
  * [5 See also](to_ulong.html#See_also)

  
---  
  
### Parameters

(none) 

### Return value

The converted integer. 

### Exceptions

Throws [std::overflow_error](../../error/overflow_error.html "cpp/error/overflow error") if the value can not be represented in unsigned long. 

### Example

Run this code
    
    
    #include <bitset>
    #include <iostream>
    #include <stdexcept>
     
    int main()
    {
        for (unsigned long i = 0; i < 10; ++i)
        {
            [std::bitset](../bitset.html)<5> b(i);
            [std::bitset](../bitset.html)<5> b_inverted = ~b;
            [std::cout](../../io/cout.html) << i << '\t' << b << '\t' << b_inverted << '\t'
                      << b_inverted.to_ulong() << '\n';
        }
     
        [std::cout](../../io/cout.html) << [std::bitset](../bitset.html)<32>().to_string('-') << '\n';
     
        try
        {
            [std::bitset](../bitset.html)<128> x(42);
            [std::cout](../../io/cout.html) << x.to_ulong() << '\n';
            x.flip();
            [std::cout](../../io/cout.html) << x.to_ulong() << '\n'; // throws
        }
        catch (const [std::overflow_error](../../error/overflow_error.html)& ex)
        {
            [std::cout](../../io/cout.html) << "ex: " << ex.what() << '\n';
        }
    }

Possible output: 
    
    
    0   00000   11111   31
    1   00001   11110   30
    2   00010   11101   29
    3   00011   11100   28
    4   00100   11011   27
    5   00101   11010   26
    6   00110   11001   25
    7   00111   11000   24
    8   01000   10111   23
    9   01001   10110   22
    --------------------------------
    42
    ex: bitset to_ulong overflow error

### See also

[ to_string](to_string.html "cpp/utility/bitset/to string") |  returns a string representation of the data   
(public member function)   
---|---  
[ to_ullong](to_ullong.html "cpp/utility/bitset/to ullong")(C++11) |  returns an unsigned long long integer representation of the data   
(public member function) 
