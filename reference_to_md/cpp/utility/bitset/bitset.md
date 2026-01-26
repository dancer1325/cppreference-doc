 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::bitset`](../bitset.html "cpp/utility/bitset")

[Member types](../bitset.html#Member_types "cpp/utility/bitset")  
---  
[bitset::reference](reference.html "cpp/utility/bitset/reference")  
[Member functions](../bitset.html#Member_functions "cpp/utility/bitset")  
**bitset::bitset**  
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
[std::hash](hash.html "cpp/utility/bitset/hash")(C++11)  
  


bitset(); |  (1) | (noexcept since C++11)   
(constexpr since C++11)  
---|---|---  
| (2) |   
bitset( unsigned long val ); |  | (until C++11)  
constexpr bitset( unsigned long long val ) noexcept; |  |  (since C++11)  
template< class CharT, class Traits, class Alloc >  
explicit bitset  
( const [std::basic_string](../../string/basic_string.html)<CharT, Traits, Alloc>& str,  
typename [std::basic_string](../../string/basic_string.html)  
<CharT, Traits, Alloc>::size_type pos = 0,  
typename [std::basic_string](../../string/basic_string.html)<CharT, Traits, Alloc>::size_type  
n = [std::basic_string](../../string/basic_string.html)<CharT, Traits, Alloc>::npos,  
CharT zero = CharT('0'), CharT one = CharT('1') ); |  (3) | (constexpr since C++23)  
template< class CharT, class Traits >  
constexpr explicit bitset  
( [std::basic_string_view](../../string/basic_string_view.html)<CharT, Traits> str,  
[std::size_t](../../types/size_t.html) pos = 0, [std::size_t](../../types/size_t.html) n = [std::size_t](../../types/size_t.html)(-1),  
CharT zero = CharT('0'), CharT one = CharT('1') ); |  (4) | (since C++26)  
template< class CharT >  
explicit bitset( const CharT* str, [std::size_t](../../types/size_t.html) n = [std::size_t](../../types/size_t.html)(-1),  
CharT zero = CharT('0'), CharT one = CharT('1') ); |  (5) | (since C++11)   
(constexpr since C++23)  
| |   
  
Constructs a new bitset from one of several optional data sources: 

1) Default constructor. Constructs a bitset with all bits set to zero.

2) Constructs a bitset from an unsigned integer val.

Given the number of bits in the [value representation](../../language/objects.html#Object_representation_and_value_representation "cpp/language/object") of unsigned long(until C++11)unsigned long long(since C++11) as S: 

  * The first (rightmost, least significant) [std::min](../../algorithm/min.html)(S, N) bit positions are initialized with the corresponding bit values of val. 
  * If S is less than N, the remaining bit positions are initialized to zeroes.



3) Constructs a bitset using the characters in str. An optional starting position pos and length n can be provided, as well as characters denoting alternate values for set (one) and unset (zero) bits. `Traits::eq()` is used to compare the character values.

The effective length of the initializing string is [std::min](../../algorithm/min.html)(n, str.size() - pos).

4) Similar to (3), but uses a [std::basic_string_view](../../string/basic_string_view.html "cpp/string/basic string view") instead of a [std::basic_string](../../string/basic_string.html "cpp/string/basic string").

5) Similar to (3), but uses a const CharT* instead of a [std::basic_string](../../string/basic_string.html "cpp/string/basic string").  Equivalent to bitset(n == [std::basic_string](../../string/basic_string.html)<CharT>::npos  
? [std::basic_string](../../string/basic_string.html)<CharT>(str)  
: [std::basic_string](../../string/basic_string.html)<CharT>(str, n), 0, n, zero, one).  | (until C++26)  
---|---  
Equivalent to bitset(n == [std::basic_string_view](../../string/basic_string_view.html)<CharT>::npos  
? [std::basic_string_view](../../string/basic_string_view.html)<CharT>(str)  
: [std::basic_string_view](../../string/basic_string_view.html)<CharT>(str, n), 0, n, zero, one).  | (since C++26)  
  
## Contents

  * [1 Parameters](bitset.html#Parameters)
  * [2 Exceptions](bitset.html#Exceptions)
  * [3 Notes](bitset.html#Notes)
  * [4 Example](bitset.html#Example)
  * [5 Defect reports](bitset.html#Defect_reports)
  * [6 See also](bitset.html#See_also)

  
---  
  
### Parameters

val  |  \-  |  number used to initialize the bitset   
---|---|---  
str  |  \-  |  string used to initialize the bitset   
pos  |  \-  |  a starting offset into str  
n  |  \-  |  number of characters to use from str  
zero  |  \-  |  alternate character for unset bits in str  
one  |  \-  |  alternate character for set bits in str  
  
### Exceptions

3,4) [std::out_of_range](../../error/out_of_range.html "cpp/error/out of range") if pos > str.size(), [std::invalid_argument](../../error/invalid_argument.html "cpp/error/invalid argument") if any character is not one or zero.

5) [std::invalid_argument](../../error/invalid_argument.html "cpp/error/invalid argument") if any character is not one or zero.

### Notes

[Feature-test](../feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_constexpr_bitset`](../../experimental/feature_test.html#cpp_lib_constexpr_bitset "cpp/feature test") | [`202207L`](../../compiler_support/23.html#cpp_lib_constexpr_bitset_202207L "cpp/compiler support/23") | (C++23) | A more constexpr `std::bitset`, overloads ([3,5](bitset.html#Version_3))  
[`__cpp_lib_bitset`](../../experimental/feature_test.html#cpp_lib_bitset "cpp/feature test") | [`202306L`](../../compiler_support/26.html#cpp_lib_bitset_202306L "cpp/compiler support/26") | (C++26) | Interfacing `std::bitset` with [std::string_view](../../string/basic_string_view.html "cpp/string/basic string view"), ([4](bitset.html#Version_4))  
  
### Example

Run this code
    
    
    #include <bitset>
    #include <climits>
    #include <iostream>
    #include <string>
     
    int main()
    {
        // empty constructor (1)
        [std::bitset](../bitset.html)<8> b1; // [0,0,0,0,0,0,0,0]
     
        // unsigned long long constructor (2)
        [std::bitset](../bitset.html)<8> b2(42);          // [0,0,1,0,1,0,1,0]
        [std::bitset](../bitset.html)<70> bl([ULLONG_MAX](../../types/climits.html)); // [0,0,0,0,0,0,1,1,1,...,1,1,1] in C++11
        [std::bitset](../bitset.html)<8> bs(0xfff0);      // [1,1,1,1,0,0,0,0]
     
        // string constructor (3)
        [std::string](../../string/basic_string.html) bit_string = "110010";
        [std::bitset](../bitset.html)<8> b3(bit_string);       // [0,0,1,1,0,0,1,0]
        [std::bitset](../bitset.html)<8> b4(bit_string, 2);    // [0,0,0,0,0,0,1,0]
        [std::bitset](../bitset.html)<8> b5(bit_string, 2, 3); // [0,0,0,0,0,0,0,1]
     
        // string constructor using custom zero/one digits (3)
        [std::string](../../string/basic_string.html) alpha_bit_string = "aBaaBBaB";
        [std::bitset](../bitset.html)<8> b6(alpha_bit_string, 0, alpha_bit_string.size(),
                          'a', 'B');         // [0,1,0,0,1,1,0,1]
     
        // char* constructor using custom digits (5)
        [std::bitset](../bitset.html)<8> b7("XXXXYYYY", 8, 'X', 'Y'); // [0,0,0,0,1,1,1,1]
     
        [std::cout](../../io/cout.html) <<   "b1: " << b1 << "\nb2: " << b2 << "\nbl: " << bl
                  << "\nbs: " << bs << "\nb3: " << b3 << "\nb4: " << b4
                  << "\nb5: " << b5 << "\nb6: " << b6 << "\nb7: " << b7 << '\n';
    }

Possible output: 
    
    
    b1: 00000000
    b2: 00101010
    bl: 0000001111111111111111111111111111111111111111111111111111111111111111
    bs: 11110000
    b3: 00110010
    b4: 00000010
    b5: 00000001
    b6: 01001101
    b7: 00001111

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 396](https://cplusplus.github.io/LWG/issue396) | C++98  | the values of the zero and one characters for overload (3)  
were ​0​ and 1 (which do not correspond to '0' and '1')  | added parameters to provide  
values for these characters   
[LWG 457](https://cplusplus.github.io/LWG/issue457) | C++98  | S was [CHAR_BIT](../../types/climits.html) * sizeof(unsigned long)  
for overload (2), but unsigned long is not  
guaranteed to use all its bits to represent its value  | consider the number  
of bits of the value  
representation instead   
[LWG 2250](https://cplusplus.github.io/LWG/issue2250) | C++98  | the behavior was undefined if pos > str.size() is true | always throws an  
exception in this case   
  
### See also

[ set](set.html "cpp/utility/bitset/set") |  sets bits to true or given value   
(public member function)   
---|---  
[ reset](reset.html "cpp/utility/bitset/reset") |  sets bits to false   
(public member function) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
