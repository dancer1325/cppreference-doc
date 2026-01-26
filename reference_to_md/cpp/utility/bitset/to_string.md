 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
**bitset::to_string**  
[bitset::to_ulong](to_ulong.html "cpp/utility/bitset/to ulong")  
[bitset::to_ullong](to_ullong.html "cpp/utility/bitset/to ullong")(C++11)  
[Non-member functions](../bitset.html#Non-member_functions "cpp/utility/bitset")  
| [operator&operator|operator^](operator_logic2.html "cpp/utility/bitset/operator logic2")  
---  
  
| [operator<<operator>>](operator_ltltgtgt2.html "cpp/utility/bitset/operator ltltgtgt2")  
---  
  
  
  
[Helper classes](../bitset.html#Helper_classes "cpp/utility/bitset")  
[std::hash](hash.html "cpp/utility/bitset/hash")(C++11)  
  


| (1) |   
---|---|---  
template< class CharT, class Traits, class Allocator >  
[std::basic_string](../../string/basic_string.html)<CharT, Traits, Allocator>  
to_string( CharT zero = CharT('0'),  
CharT one = CharT('1') ) const; |  | (until C++11)  
template<  
class CharT = char,  
class Traits = [std::char_traits](../../string/char_traits.html)<CharT>,  
class Allocator = [std::allocator](../../memory/allocator.html)<CharT>  
>  
[std::basic_string](../../string/basic_string.html)<CharT, Traits, Allocator>  
to_string( CharT zero = CharT('0'),  
CharT one = CharT('1') ) const; |  | (since C++11)   
(constexpr since C++23)  
template< class CharT, class Traits >  
[std::basic_string](../../string/basic_string.html)<CharT, Traits>  
to_string( CharT zero = CharT('0'),  
CharT one = CharT('1') ) const; |  (2) | (until C++11)  
template< class CharT >  
[std::basic_string](../../string/basic_string.html)<CharT> to_string( CharT zero = CharT('0'),  
CharT one = CharT('1') ) const; |  (3)  |  (until C++11)  
[std::string](../../string/basic_string.html) to_string( char zero = '0', char one = '1' ) const; |  (4)  |  (until C++11)  
| |   
  
Converts the contents of the bitset to a string. Uses zero to represent bits with value of false and one to represent bits with value of true. 

The resulting string contains N characters with the first character corresponds to the last (N-1th) bit and the last character corresponding to the first bit. 

All template type arguments need to be provided because function templates cannot have default template arguments. Overloads (2-4) are provided to simplify the invocations of `to_string`:  2) Uses the default allocator [std::allocator](../../memory/allocator.html "cpp/memory/allocator"). 3) Uses the default character trait [std::char_traits](../../string/char_traits.html "cpp/string/char traits") and the default allocator [std::allocator](../../memory/allocator.html "cpp/memory/allocator"). 4) Uses the default character type char, the default character trait [std::char_traits](../../string/char_traits.html "cpp/string/char traits") and the default allocator [std::allocator](../../memory/allocator.html "cpp/memory/allocator"). | (until C++11)  
---|---  
  
## Contents

  * [1 Parameters](to_string.html#Parameters)
  * [2 Return value](to_string.html#Return_value)
  * [3 Exceptions](to_string.html#Exceptions)
  * [4 Notes](to_string.html#Notes)
  * [5 Example](to_string.html#Example)
  * [6 Defect reports](to_string.html#Defect_reports)
  * [7 See also](to_string.html#See_also)

  
---  
  
### Parameters

zero  |  \-  |  character to use to represent false  
---|---|---  
one  |  \-  |  character to use to represent true  
  
### Return value

1) The converted string.

2) to_string<CharT, Traits, [std::allocator](../../memory/allocator.html)<CharT>>(zero, one).

3) to_string<CharT, [std::char_traits](../../string/char_traits.html)<CharT>, [std::allocator](../../memory/allocator.html)<CharT>>(zero, one).

4) to_string<char, [std::char_traits](../../string/char_traits.html)<char>, [std::allocator](../../memory/allocator.html)<char>>(zero, one).

### Exceptions

May throw [std::bad_alloc](../../memory/new/bad_alloc.html "cpp/memory/new/bad alloc") from the [std::basic_string](../../string/basic_string.html "cpp/string/basic string") constructor. 

### Notes

Since C++11, functions templates can have default template arguments. [LWG issue 1113](https://cplusplus.github.io/LWG/issue1113) removed the helper overloads ([2-4](to_string.html#Version_2)) and added the corresponding default template arguments in ([1](to_string.html#Version_1)). 

### Example

Run this code
    
    
    #include <bitset>
    #include <iostream>
     
    int main()
    {
        [std::bitset](../bitset.html)<8> b{42};
        [std::cout](../../io/cout.html) << b.to_string() << '\n'
                  << b.to_string('*') << '\n'
                  << b.to_string('O', 'X') << '\n';
    }

Output: 
    
    
    00101010
    **1*1*1*
    OOXOXOXO

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 396](https://cplusplus.github.io/LWG/issue396) | C++98  | zero and one bits were converted to characters ​0​  
and 1 (which do not correspond to '0' and '1')  | added parameters to provide  
values for these characters   
[LWG 434](https://cplusplus.github.io/LWG/issue434) | C++98  | all template arguments needed to be provided  | added overloads ([2-4](to_string.html#Version_2))  
[LWG 853](https://cplusplus.github.io/LWG/issue853) | C++98  | overloads ([2-4](to_string.html#Version_2)) did not have the default  
arguments added by [LWG issue 396](https://cplusplus.github.io/LWG/issue396) | also added   
  
### See also

[ to_ulong](to_ulong.html "cpp/utility/bitset/to ulong") |  returns an unsigned long integer representation of the data   
(public member function)   
---|---  
[ to_ullong](to_ullong.html "cpp/utility/bitset/to ullong")(C++11) |  returns an unsigned long long integer representation of the data   
(public member function) 
