* == MULTIPLE function templates / about individual bits & bit sequences
  * access,
  * manipulate,
  * process  

* defined | [`<bit>` header](../header/bit.md)  
* defined | namespace `std`
  * [`bit_cast`](../numeric/bit_cast.html "cpp/numeric/bit cast")
    * == function template /
      * an object is represented -- as -- another type
    * requirements
      * C++20
  * [`byteswap`](../numeric/byteswap.md)
    * == function template /
      * reverses the bytes | given integer value
    * requirements
      * C++23

## Contents

  * [1 Integral powers of 2](bit.html#Integral_powers_of_2)
  * [2 Rotating](bit.html#Rotating)
  * [3 Counting](bit.html#Counting)
  * [4 Endian](bit.html#Endian)
  * [5 Notes](bit.html#Notes)
  * [6 See also](bit.html#See_also)

  
#####  Integral powers of 2  
  
[ has_single_bit](../numeric/has_single_bit.html "cpp/numeric/has single bit")(C++20) |  checks if a number is an integral power of 2   
(function template)   
[ bit_ceil](../numeric/bit_ceil.html "cpp/numeric/bit ceil")(C++20) |  finds the smallest integral power of 2 not less than the given value   
(function template)   
[ bit_floor](../numeric/bit_floor.html "cpp/numeric/bit floor")(C++20) |  finds the largest integral power of 2 not greater than the given value   
(function template)   
[ bit_width](../numeric/bit_width.html "cpp/numeric/bit width")(C++20) |  finds the smallest number of bits needed to represent the given value   
(function template)   
  
#####  Rotating   
  
[ rotl](../numeric/rotl.html "cpp/numeric/rotl")(C++20) |  computes the result of bitwise left-rotation   
(function template)   
[ rotr](../numeric/rotr.html "cpp/numeric/rotr")(C++20) |  computes the result of bitwise right-rotation   
(function template)   
  
#####  Counting   
  
[ countl_zero](../numeric/countl_zero.html "cpp/numeric/countl zero")(C++20) |  counts the number of consecutive ​0​ bits, starting from the most significant bit   
(function template)   
[ countl_one](../numeric/countl_one.html "cpp/numeric/countl one")(C++20) |  counts the number of consecutive 1 bits, starting from the most significant bit   
(function template)   
[ countr_zero](../numeric/countr_zero.html "cpp/numeric/countr zero")(C++20) |  counts the number of consecutive ​0​ bits, starting from the least significant bit   
(function template)   
[ countr_one](../numeric/countr_one.html "cpp/numeric/countr one")(C++20) |  counts the number of consecutive 1 bits, starting from the least significant bit   
(function template)   
[ popcount](../numeric/popcount.html "cpp/numeric/popcount")(C++20) |  counts the number of 1 bits in an unsigned integer   
(function template)   
  
#####  Endian   
  
[ endian](../types/endian.html "cpp/types/endian")(C++20) |  indicates the endianness of scalar types   
(enum)   
  
### Notes

[Feature-test](feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_bit_cast`](../experimental/feature_test.html#cpp_lib_bit_cast "cpp/feature test") | [`201806L`](../compiler_support/20.html#cpp_lib_bit_cast_201806L "cpp/compiler support/20") | (C++20) | std::bit_cast  
[`__cpp_lib_bitops`](../experimental/feature_test.html#cpp_lib_bitops "cpp/feature test") | [`201907L`](../compiler_support/20.html#cpp_lib_bitops_201907L "cpp/compiler support/20") | (C++20) | Bit operations   
[`__cpp_lib_int_pow2`](../experimental/feature_test.html#cpp_lib_int_pow2 "cpp/feature test") | [`202002L`](../compiler_support/20.html#cpp_lib_int_pow2_202002L "cpp/compiler support/20") | (C++20) | Integral power-of-2 operations   
[`__cpp_lib_byteswap`](../experimental/feature_test.html#cpp_lib_byteswap "cpp/feature test") | [`202110L`](../compiler_support/23.html#cpp_lib_byteswap_202110L "cpp/compiler support/23") | (C++23) | std::byteswap  
  
### See also

[C documentation](../../c/numeric/bit_manip.html "c/numeric/bit manip") for Bit manipulation  
---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
