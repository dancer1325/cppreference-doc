
  


[Numerics library](../numeric.html "cpp/numeric")

[Common mathematical functions](math.html "cpp/numeric/math")  
---  
[Mathematical special functions](special_math.html "cpp/numeric/special functions") (C++17)  
[Mathematical constants](constants.html "cpp/numeric/constants") (C++20)  
[Basic linear algebra algorithms](linalg.html "cpp/numeric/linalg") (C++26)  
[Data-parallel types (SIMD)](simd.html "cpp/numeric/simd") (C++26)  
[Floating-point environment](fenv.html "cpp/numeric/fenv") (C++11)  
[Complex numbers](complex.html "cpp/numeric/complex")  
[Numeric array (`valarray`)](valarray.html "cpp/numeric/valarray")  
[Pseudo-random number generation](random.html "cpp/numeric/random")  
[Bit manipulation](../utility/bit.html "cpp/utility/bit") (C++20)  
[Saturation arithmetic](../numeric.html#Saturation_arithmetic "cpp/numeric") (C++26)  
[Factor operations](../numeric.html#Factor_operations "cpp/numeric")  
| [gcd](gcd.html "cpp/numeric/gcd")(C++17)  
---  
  
| [lcm](lcm.html "cpp/numeric/lcm")(C++17)  
---  
  
[Interpolations](../numeric.html#Interpolation_operations "cpp/numeric")  
| [midpoint](midpoint.html "cpp/numeric/midpoint")(C++20)  
---  
  
| [lerp](lerp.html "cpp/numeric/lerp")(C++20)  
---  
  
[Generic numeric operations](../numeric.html#Numeric_operations "cpp/numeric")  
| [iota](../algorithm/iota.html "cpp/algorithm/iota")(C++11)  
---  
[ranges::iota](../algorithm/ranges/iota.html "cpp/algorithm/ranges/iota")(C++23)  
[accumulate](../algorithm/accumulate.html "cpp/algorithm/accumulate")  
[inner_product](../algorithm/inner_product.html "cpp/algorithm/inner product")  
[adjacent_difference](../algorithm/adjacent_difference.html "cpp/algorithm/adjacent difference")` `  
[partial_sum](../algorithm/partial_sum.html "cpp/algorithm/partial sum")  
  
| [reduce](../algorithm/reduce.html "cpp/algorithm/reduce")(C++17)  
---  
[transform_reduce](../algorithm/transform_reduce.html "cpp/algorithm/transform reduce")(C++17)  
[inclusive_scan](../algorithm/inclusive_scan.html "cpp/algorithm/inclusive scan")(C++17)  
[exclusive_scan](../algorithm/exclusive_scan.html "cpp/algorithm/exclusive scan")(C++17)  
[transform_inclusive_scan](../algorithm/transform_inclusive_scan.html "cpp/algorithm/transform inclusive scan")(C++17)  
[transform_exclusive_scan](../algorithm/transform_exclusive_scan.html "cpp/algorithm/transform exclusive scan")(C++17)  
  
[C-style checked integer arithmetic](../numeric.html#Checked_integer_arithmetic "cpp/numeric")  
| **ckd_add**(C++26)  
---  
[ckd_sub](ckd_sub.html "cpp/numeric/ckd sub")(C++26)  
  
| [ckd_mul](ckd_mul.html "cpp/numeric/ckd mul")(C++26)  
---  
  
  
  


Defined in header `[<stdckdint.h>](../header/stdckdint.h.html "cpp/header/stdckdint.h")` |  |   
---|---|---  
template< class type1, class type2, class type3 >  
bool ckd_add( type1* result, type2 a, type3 b ); |  |  (since C++26)  
| |   
  
Computes the addition x + y and stores the result into *result. The addition is performed as if both operands were represented in a signed integer type with infinite range, and the result was then converted from this integer type to type1. If the value assigned to *result correctly represents the mathematical result of the operation, it returns false. Otherwise, it returns true. In this case, the value assigned to *result is the mathematical result of the operation wrapped around to the width of *result. 

## Contents

  * [1 Parameters](ckd_add.html#Parameters)
  * [2 Return value](ckd_add.html#Return_value)
  * [3 Note](ckd_add.html#Note)
  * [4 Example](ckd_add.html#Example)
  * [5 References](ckd_add.html#References)
  * [6 See also](ckd_add.html#See_also)

  
---  
  
### Parameters

a, b  |  \-  |  integer values   
---|---|---  
result  |  \-  |  address of where result should be stored   
  
### Return value

false if the value assigned to *result correctly represents the mathematical result of the addition, true otherwise. 

### Note

The function template `ckd_add` has the same semantics as the corresponding [type-generic macro](../../c/language/generic.html "c/language/generic") with the same name specified in [C23](../../c/numeric/ckd_add.html "c/numeric/ckd add"). 

Each of the types type1, type2, and type3 is a cv-unqualified signed or unsigned integer type. 

It is recommended to produce a diagnostic message if type2 or type3 are not suitable integer types, or if *result is not a modifiable lvalue of a suitable integer type. 

### Example

Compiler Explorer [preview](https://godbolt.org/z/jTcnerdn9).

Run this code
    
    
    #include <cstdint>
    #include <limits>
    #include <print>
    #include <stdckdint.h>
     
    int main()
    {
        const [std::uint8_t](../types/integer.html) x{14};
        [std::uint16_t](../types/integer.html) y{28}, result1{};
        bool overflow{};
     
        overflow = ckd_add(&result1, x, y);
        [std::println](../io/println.html)("{} + {} => {} ({})", x, y, result1, overflow ? "Overflow" : "OK");
     
        y = [std::numeric_limits](../types/numeric_limits.html)<[std::uint16_t](../types/integer.html)>::max();
        overflow = ckd_add(&result1, x, y);
        [std::println](../io/println.html)("{} + {} => {} ({})", x, y, result1, overflow ? "Overflow" : "OK");
     
        [std::uint32_t](../types/integer.html) result2{};
        overflow = ckd_add(&result2, x, y);
        [std::println](../io/println.html)("{} + {} => {} ({})", x, y, result2, overflow ? "Overflow" : "OK");
    }

Possible output: 
    
    
    14 + 28 => 42 (OK)
    14 + 65535 => 13 (Overflow)
    14 + 65535 => 65549 (OK)

### References

  * C++26 standard (ISO/IEC 14882:2026): 



    

  * 29.11.2 Checked integer operations 



### See also

[ ckd_sub](ckd_sub.html "cpp/numeric/ckd sub")(C++26) |  checked subtraction operation on two integers   
(function template)   
---|---  
[ ckd_mul](ckd_mul.html "cpp/numeric/ckd mul")(C++26) |  checked multiplication operation on two integers   
(function template)   
[C documentation](../../c/numeric/ckd_add.html "c/numeric/ckd add") for ckd_add
