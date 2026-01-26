 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
**bitset::count**  
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
  


[std::size_t](../../types/size_t.html) count() const; |  | (noexcept since C++11)   
(constexpr since C++23)  
---|---|---  
| |   
  
Returns the number of bits that are set to true. 

### Return value

Number of bits that are set to true. 

### Example

Run this code
    
    
    #include <bitset>
    #include <iostream>
     
    constexpr auto popcount(unsigned x) noexcept
    {
        unsigned num{};
        for (; x; ++num, x &= (x - 1));
        return num;
    }
    static_assert(popcount(0b101010) == [std::bitset](../bitset.html)<8>{0b101010}.count());
     
    int main()
    {
        [std::bitset](../bitset.html)<8> b("00010010");
        [std::cout](../../io/cout.html) << "Initial value: " << b << '\n';
     
        // Find the first unset bit
        [std::size_t](../../types/size_t.html) idx = 0;
        while (idx < b.size() && b.test(idx))
            ++idx;
     
        // Continue setting bits until half the bitset is filled
        while (idx < b.size() && b.count() < b.size() / 2)
        {
            b.set(idx);
            [std::cout](../../io/cout.html) << "Setting bit " << idx << ": " << b << '\n';
            while (idx < b.size() && b.test(idx))
                ++idx;
        }
    }

Output: 
    
    
    Initial value: 00010010
    Setting bit 0: 00010011
    Setting bit 2: 00010111

### See also

[ size](size.html "cpp/utility/bitset/size") |  returns the number of bits that the bitset holds   
(public member function)   
---|---  
[ popcount](../../numeric/popcount.html "cpp/numeric/popcount")(C++20) |  counts the number of 1 bits in an unsigned integer   
(function template) 
