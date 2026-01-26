 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
  
| **operator <<operator>>**  
---  
  
  
  
[Helper classes](../bitset.html#Helper_classes "cpp/utility/bitset")  
[std::hash](hash.html "cpp/utility/bitset/hash")(C++11)  
  


Defined in header `[<bitset>](../../header/bitset.html "cpp/header/bitset")` |  |   
---|---|---  
template< class CharT, class Traits, [std::size_t](../../types/size_t.html) N >  
[std::basic_ostream](../../io/basic_ostream.html)<CharT, Traits>&  
operator<<( [std::basic_ostream](../../io/basic_ostream.html)<CharT, Traits>& os, const [std::bitset](../bitset.html)<N>& x ); |  (1)  |   
template< class CharT, class Traits, [std::size_t](../../types/size_t.html) N >  
[std::basic_istream](../../io/basic_istream.html)<CharT, Traits>&  
operator>>( [std::basic_istream](../../io/basic_istream.html)<CharT, Traits>& is, [std::bitset](../bitset.html)<N>& x ); |  (2)  |   
| |   
  
Inserts or extracts a bitset from a character stream. 

1) Writes the bitset x to the character stream os as if by first converting it to a [std::basic_string](../../string/basic_string.html)<CharT, Traits> using [to_string()](to_string.html "cpp/utility/bitset/to string"), and then writing it into os using the [`operator<<`](../../string/basic_string/operator_ltltgtgt.html "cpp/string/basic string/operator ltltgtgt") (which is a [FormattedOutputFunction](../../named_req/FormattedOutputFunction.html "cpp/named req/FormattedOutputFunction") for strings).  
The characters to use for ones and zeroes are obtained from the currently-imbued locale by calling [std::use_facet](../../locale/use_facet.html)<[std::ctype](../../locale/ctype.html)<CharT>>(os.getloc()).widen() with '1' and '0' as arguments.

2) Behaves as a [FormattedInputFunction](../../named_req/FormattedInputFunction.html "cpp/named req/FormattedInputFunction"). After constructing and checking the sentry object, which may skip leading whitespace, extracts up to N characters from is and stores the characters in the bitset x.  
Characters are extracted until either 

  * N characters have been read, 
  * end-of-file occurs in is, or 
  * the next character is neither is.widen('0') nor is.widen('1'). 

If N > 0 and no characters are extracted, is.setstate(ios_base::failbit) is called.

## Contents

  * [1 Parameters](operator_ltltgtgt2.html#Parameters)
  * [2 Return value](operator_ltltgtgt2.html#Return_value)
  * [3 Example](operator_ltltgtgt2.html#Example)
  * [4 Defect reports](operator_ltltgtgt2.html#Defect_reports)
  * [5 See also](operator_ltltgtgt2.html#See_also)

  
---  
  
### Parameters

os  |  \-  |  the character stream to write to   
---|---|---  
is  |  \-  |  the character stream to read from   
x  |  \-  |  the bitset to be read or written   
  
### Return value

1) os

2) is

### Example

Run this code
    
    
    #include <bitset>
    #include <iostream>
    #include <sstream>
     
    int main()
    {
        [std::string](../../string/basic_string.html) bit_string = "001101";
        [std::istringstream](../../io/basic_istringstream.html) bit_stream(bit_string);
     
        [std::bitset](../bitset.html)<3> b1;
        bit_stream >> b1; // reads "001", stream still holds "101"
        [std::cout](../../io/cout.html) << b1 << '\n';
     
        [std::bitset](../bitset.html)<8> b2;
        bit_stream >> b2; // reads "101", populates the 8-bit set as "00000101"
        [std::cout](../../io/cout.html) << b2 << '\n';
    }

Output: 
    
    
    001
    00000101

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 303](https://cplusplus.github.io/LWG/issue303) | C++98  | single-byte characters were extracted from  
is, but `CharT` can have multiple bytes  | extracts `CharT` and compares  
it with widened '0' and '1'  
[LWG 396](https://cplusplus.github.io/LWG/issue396) | C++98  | the content written by operator<< was locale-independent  | writes widened '0's and '1's   
[LWG 3199](https://cplusplus.github.io/LWG/issue3199) | C++98  | extracting a `std::bitset<0>` always sets `failbit` | such extraction never sets `failbit`  
  
### See also

[ operator<<=operator>>=operator<<operator>>](operator_ltltgtgt.html "cpp/utility/bitset/operator ltltgtgt") |  performs binary shift left and shift right   
(public member function)   
---|---
