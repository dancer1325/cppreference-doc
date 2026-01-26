 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::bitset`](../bitset.html "cpp/utility/bitset")

[Member types](../bitset.html#Member_types "cpp/utility/bitset")  
---  
[bitset::reference](reference.html "cpp/utility/bitset/reference")  
[Member functions](../bitset.html#Member_functions "cpp/utility/bitset")  
[bitset::bitset](bitset.html "cpp/utility/bitset/bitset")  
[bitset::operator==bitset::operator!=](operator_cmp.html "cpp/utility/bitset/operator cmp")(until C++20)  
[Element access](../bitset.html#Element_access "cpp/utility/bitset")  
[bitset::operator[]](operator_at.html "cpp/utility/bitset/operator at")  
**bitset::test**  
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
  


bool test( [std::size_t](../../types/size_t.html) pos ) const; |  | (constexpr since C++23)  
---|---|---  
| |   
  
Returns the value of the bit at the position pos (counting from 0). 

Unlike [operator[]](operator_at.html "cpp/utility/bitset/operator at"), it performs a bounds check. 

## Contents

  * [1 Parameters](test.html#Parameters)
  * [2 Return value](test.html#Return_value)
  * [3 Exceptions](test.html#Exceptions)
  * [4 Example](test.html#Example)
  * [5 Defect reports](test.html#Defect_reports)
  * [6 See also](test.html#See_also)

  
---  
  
### Parameters

pos  |  \-  |  position of the bit to return (counting from 0)   
---|---|---  
  
### Return value

true if the requested bit is set, false otherwise. 

### Exceptions

Throws [std::out_of_range](../../error/out_of_range.html "cpp/error/out of range") if pos does not correspond to a valid bit position. 

### Example

Run this code
    
    
    #include <bit>
    #include <bitset>
    #include <cassert>
    #include <iostream>
    #include <stdexcept>
     
    int main()
    {
        [std::bitset](../bitset.html)<10> b1("1111010000");
     
        [std::size_t](../../types/size_t.html) idx = 0;
        while (idx < b1.size() && !b1.test(idx))
            ++idx;
     
        [assert](../../error/assert.html)(static_cast<int>(idx) == [std::countr_zero](../../numeric/countr_zero.html)(b1.to_ulong()));
     
        if (idx < b1.size())
            [std::cout](../../io/cout.html) << "The first set bit is at index " << idx << '\n';
        else
            [std::cout](../../io/cout.html) << "no set bits\n";
     
        try
        {
            [std::bitset](../bitset.html)<0B10'1001'1010> bad;
            if (bad.test(bad.size()))
                [std::cout](../../io/cout.html) << "Expect unexpected!\n";
        }
        catch ([std::out_of_range](../../error/out_of_range.html) const& ex)
        {
            [std::cout](../../io/cout.html) << "Exception: " << ex.what() << '\n';
        }
    }

Possible output: 
    
    
    The first set bit is at index 4
    Exception: bitset::test: __position (which is 666) >= _Nb (which is 666)

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2250](https://cplusplus.github.io/LWG/issue2250) | C++98  | the behavior was undefined if pos does  
not correspond to a valid bit position  | always throws an  
exception in this case   
  
### See also

[ operator[]](operator_at.html "cpp/utility/bitset/operator at") |  accesses specific bit   
(public member function)   
---|---  
[ popcount](../../numeric/popcount.html "cpp/numeric/popcount")(C++20) |  counts the number of 1 bits in an unsigned integer   
(function template)   
[ has_single_bit](../../numeric/has_single_bit.html "cpp/numeric/has single bit")(C++20) |  checks if a number is an integral power of 2   
(function template) 
