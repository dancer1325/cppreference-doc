* `<<`
  * == binary shift left (== towards higher index positions) /
    * shift in 0s
* `>>`
  * == binary shift right (== towards lower index positions) /
    * bits / go to an index out of range -> dropped

## (1)
* `bitset operator<<( std::size_t pos ) const;` 
  * | C++11,
    * `noexcept`
  * | C++23,
    * `constexpr`   
## (2)  
* `bitset& operator<<=( std::size_t pos );`
  * 👀destructive binary shift👀
    * == impact | CURRENT object
  * | C++11,
    * `noexcept`
  * | C++23,
    * `constexpr`
## (3)
* `bitset operator>>( std::size_t pos ) const;`
  * | C++11,
    * `noexcept`
  * | C++23,
    * `constexpr`
## (4)
* `bitset& operator>>=( std::size_t pos );`   
  * 👀destructive binary shift👀
    * == impact | CURRENT object
  * | C++11,
    * `noexcept`
  * | C++23,
    * `constexpr`

## Contents

  * [1 Parameters](operator_ltltgtgt.html#Parameters)
  * [2 Return value](operator_ltltgtgt.html#Return_value)
  * [3 Example](operator_ltltgtgt.html#Example)
  * [4 See also](operator_ltltgtgt.html#See_also)

### Parameters

pos  |  \-  |  number of positions to shift the bits   
---|---|---  
  
### Return value

1,3) New bitset object containing the shifted bits.

2,4) *this

### Example

Run this code
    
    
    #include <bitset>
    #include <iostream>
     
    int main()
    {
        [std::bitset](../bitset.html)<8> b{0b01110010};
        [std::cout](../../io/cout.html) << b << " (initial value)\n";
     
        for (; b.any(); b >>= 1)
        {
            while (!b.test(0))
                b >>= 1;
            [std::cout](../../io/cout.html) << b << '\n';
        }
     
        [std::cout](../../io/cout.html) << b << " (final value)\n";
    }

Output: 
    
    
    01110010 (initial value)
    00111001
    00000111
    00000011
    00000001
    00000000 (final value)

### See also

[ rotl](../../numeric/rotl.html "cpp/numeric/rotl")(C++20) |  computes the result of bitwise left-rotation   
(function template)   
---|---  
[ rotr](../../numeric/rotr.html "cpp/numeric/rotr")(C++20) |  computes the result of bitwise right-rotation   
(function template)   
[ operator&=operator|=operator^=operator~](operator_logic.html "cpp/utility/bitset/operator logic") |  performs binary AND, OR, XOR and NOT   
(public member function) 
