 
  


  
  
  
  
  
  
  
  
  
  
  
  


[`std::bitset`](../bitset.html "cpp/utility/bitset")

[Member types](../bitset.html#Member_types "cpp/utility/bitset")  
---  
**bitset::reference**  
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
[std::hash](hash.html "cpp/utility/bitset/hash")(C++11)  
  


class reference; |  |   
---|---|---  
| |   
  
The [std::bitset](../bitset.html "cpp/utility/bitset") class includes `std::bitset::reference` as a publicly-accessible nested class. This class is used as a proxy object to allow users to interact with individual bits of a bitset, since standard C++ types (like references and pointers) are not built with enough precision to specify individual bits. 

The primary use of `std::bitset::reference` is to provide an lvalue that can be returned from [`operator[]`](operator_at.html "cpp/utility/bitset/operator at"). 

Any reads or writes to a bitset that happen via a `std::bitset::reference` potentially read or write to the entire underlying bitset. 

## Contents

  * [1 Member functions](reference.html#Member_functions)
  * [2 std::bitset<N>::reference::reference](reference.html#std::bitset.3CN.3E::reference::reference)
  * [3 std::bitset<N>::reference::~reference](reference.html#std::bitset.3CN.3E::reference::.7Ereference)
  * [4 std::bitset<N>::reference::operator=](reference.html#std::bitset.3CN.3E::reference::operator.3D)
    * [4.1 Parameters](reference.html#Parameters)
    * [4.2 Return value](reference.html#Return_value)
  * [5 std::bitset<N>::reference::operator bool](reference.html#std::bitset.3CN.3E::reference::operator_bool)
    * [5.1 Return value](reference.html#Return_value_2)
  * [6 std::bitset<N>::reference::operator~](reference.html#std::bitset.3CN.3E::reference::operator.7E)
    * [6.1 Return value](reference.html#Return_value_3)
  * [7 std::bitset<N>::reference::flip](reference.html#std::bitset.3CN.3E::reference::flip)
    * [7.1 Return value](reference.html#Return_value_4)
    * [7.2 Example](reference.html#Example)
    * [7.3 See also](reference.html#See_also)

  
---  
  
### Member functions

(constructor) |  constructs the reference   
(public member function)  
---|---  
**(destructor)** |  destroys the reference   
(public member function)  
operator= |  assigns a value to the referenced bit   
(public member function)  
** operator bool** |  returns the referenced bit   
(public member function)   
operator~ |  returns inverted referenced bit   
(public member function)  
flip |  flips the referenced bit   
(public member function)  
  
##  std::bitset<N>::reference::reference

reference( const reference& ) = default; |  | (since C++11)   
(constexpr since C++23)  
---|---|---  
| |   
  
Constructs the reference from another reference. The copy constructor is implicitly declared.(until C++11)

Other constructors can only be accessed by [`std::bitset`](../bitset.html "cpp/utility/bitset"). 

##  std::bitset<N>::reference::~reference

~reference(); |  | (constexpr since C++23)  
---|---|---  
| |   
  
Destroys the reference. 

##  std::bitset<N>::reference::operator=

reference& operator=( bool x ); |  (1) | (noexcept since C++11)   
(constexpr since C++23)  
---|---|---  
reference& operator=( const reference& x ); |  (2) | (noexcept since C++11)   
(constexpr since C++23)  
| |   
  
Assigns a value to the referenced bit. 

###  Parameters

x  |  \-  |  value to assign   
---|---|---  
  
###  Return value

*this

##  std::bitset<N>::reference::operator bool

operator bool() const; |  | (noexcept since C++11)   
(constexpr since C++23)  
---|---|---  
| |   
  
Returns the value of the referenced bit. 

###  Return value

The referenced bit. 

##  std::bitset<N>::reference::operator~

bool operator~() const; |  | (noexcept since C++11)   
(constexpr since C++23)  
---|---|---  
| |   
  
Returns the inverse of the referenced bit. 

###  Return value

The inverse of the referenced bit. 

##  std::bitset<N>::reference::flip

reference& flip(); |  | (noexcept since C++11)   
(constexpr since C++23)  
---|---|---  
| |   
  
Inverts the referenced bit. 

###  Return value

*this

### Example

Run this code
    
    
    #include <bitset>
    #include <iostream>
     
    int main()
    {
        [std::bitset](../bitset.html)<4> bs{0b1110};
        [std::bitset](../bitset.html)<4>::reference ref = bs[2];
     
        auto info = [&](int id)
        {
            [std::cout](../../io/cout.html) << id << ") bs: " << bs << "; ref bit: " << ref << '\n';
        };
     
        info(1);
        ref = false;
        info(2);
        ref = true;
        info(3);
        ref.flip();
        info(4);
        ref = bs[1]; // operator=( const reference& x )
        info(5);
     
        [std::cout](../../io/cout.html) << "6) ~ref bit: " << ~ref << '\n';
    }

Output: 
    
    
    1) bs: 1110; ref bit: 1
    2) bs: 1010; ref bit: 0
    3) bs: 1110; ref bit: 1
    4) bs: 1010; ref bit: 0
    5) bs: 1110; ref bit: 1
    6) ~ref bit: 0

### See also

[ operator[]](operator_at.html "cpp/utility/bitset/operator at") |  accesses specific bit   
(public member function)   
---|---
