
  


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
| **gcd**(C++17)  
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
| [ckd_add](ckd_add.html "cpp/numeric/ckd add")(C++26)  
---  
[ckd_sub](ckd_sub.html "cpp/numeric/ckd sub")(C++26)  
  
| [ckd_mul](ckd_mul.html "cpp/numeric/ckd mul")(C++26)  
---  
  
  
  


Defined in header `[<numeric>](../header/numeric.html "cpp/header/numeric")` |  |   
---|---|---  
template< class M, class N >  
constexpr [std::common_type_t](../types/common_type.html)<M, N> gcd( M m, N n ); |  |  (since C++17)  
| |   
  
Computes the [greatest common divisor](https://en.wikipedia.org/wiki/greatest_common_divisor "enwiki:greatest common divisor") of the integers m and n. 

If either `M` or `N` is not an integer type, or if either is (possibly cv-qualified) bool, the program is ill-formed. 

If either |m| or |n| is not representable as a value of type [std::common_type_t](../types/common_type.html)<M, N>, the behavior is undefined. 

## Contents

  * [1 Parameters](gcd.html#Parameters)
  * [2 Return value](gcd.html#Return_value)
  * [3 Exceptions](gcd.html#Exceptions)
  * [4 Notes](gcd.html#Notes)
  * [5 Example](gcd.html#Example)
  * [6 See also](gcd.html#See_also)

  
---  
  
### Parameters

m, n  |  \-  |  integer values   
---|---|---  
  
### Return value

If both m and n are zero, returns zero. Otherwise, returns the greatest common divisor of |m| and |n|. 

### Exceptions

Throws no exceptions. 

### Notes

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_gcd_lcm`](../experimental/feature_test.html#cpp_lib_gcd_lcm "cpp/feature test") | [`201606L`](../compiler_support/17.html#cpp_lib_gcd_lcm_201606L "cpp/compiler support/17") | (C++17) | `std::gcd`, [std::lcm](lcm.html "cpp/numeric/lcm")  
  
### Example

Run this code
    
    
    #include <numeric>
     
    int main()
    {
        constexpr int p{2 * 2 * 3};
        constexpr int q{2 * 3 * 3};
        static_assert(2 * 3 == std::gcd(p, q));
     
        static_assert(std::gcd( 6,  10) == 2);
        static_assert(std::gcd( 6, -10) == 2);
        static_assert(std::gcd(-6, -10) == 2);
     
        static_assert(std::gcd( 24, 0) == 24);
        static_assert(std::gcd(-24, 0) == 24);
    }

### See also

[ lcm](lcm.html "cpp/numeric/lcm")(C++17) |  computes the least common multiple of two integers   
(function template)   
---|---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
