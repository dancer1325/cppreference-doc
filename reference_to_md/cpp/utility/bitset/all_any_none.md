 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
**bitset::all bitset::anybitset::none**(C++11)  
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
  


bool all() const; |  (1) | (noexcept since C++11)   
(constexpr since C++23)  
---|---|---  
bool any() const; |  (2) | (noexcept since C++11)   
(constexpr since C++23)  
bool none() const; |  (3) | (noexcept since C++11)   
(constexpr since C++23)  
| |   
  
1) Checks if all bits are set to true.

2) Checks if any bits are set to true.

3) Checks if none of the bits are set to true.

## Contents

  * [1 Parameters](all_any_none.html#Parameters)
  * [2 Return value](all_any_none.html#Return_value)
  * [3 Example](all_any_none.html#Example)
  * [4 Defect reports](all_any_none.html#Defect_reports)
  * [5 See also](all_any_none.html#See_also)

  
---  
  
### Parameters

(none) 

### Return value

1) true if all bits are set to true, otherwise false.

2) true if any of the bits are set to true, otherwise false.

3) true if none of the bits are set to true, otherwise false.

### Example

Run this code
    
    
    #include <bitset>
    #include <iostream>
     
    int main()
    {
        [std::bitset](../bitset.html)<4> b1("0000");
        [std::bitset](../bitset.html)<4> b2("0101");
        [std::bitset](../bitset.html)<4> b3("1111");
     
        [std::cout](../../io/cout.html)
            << "bitset\t" << "all\t" << "any\t" << "none\n"
            << b1 << '\t' << b1.all() << '\t' << b1.any() << '\t' << b1.none() << '\n'
            << b2 << '\t' << b2.all() << '\t' << b2.any() << '\t' << b2.none() << '\n'
            << b3 << '\t' << b3.all() << '\t' << b3.any() << '\t' << b3.none() << '\n';
    }

Output: 
    
    
    bitset  all any none
    0000    0   0   1
    0101    0   1   0
    1111    1   1   0

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 693](https://cplusplus.github.io/LWG/issue693) | C++98  | the member function `all()` was not provided  | provided   
  
### See also

[ count](count.html "cpp/utility/bitset/count") |  returns the number of bits set to true   
(public member function)   
---|---  
[ popcount](../../numeric/popcount.html "cpp/numeric/popcount")(C++20) |  counts the number of 1 bits in an unsigned integer   
(function template) 
