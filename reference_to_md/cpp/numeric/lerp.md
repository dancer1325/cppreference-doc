[C++](../../cpp.html "cpp")

[Compiler support](../compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](../freestanding.html "cpp/freestanding")  
[Language](../language.html "cpp/language")  
[Standard library](../standard_library.html "cpp/standard library")  
[Standard library headers](../headers.html "cpp/header")  
[Named requirements](../iterator/concepts.html "cpp/named req")  
[Feature test macros](../experimental/feature_test.html "cpp/feature test") (C++20)  
[Language support library](../utility.html#Language_support "cpp/utility")  
[Concepts library](../concepts.html "cpp/concepts") (C++20)  
[Diagnostics library](../error.html "cpp/error")  
[Memory management library](../memory.html "cpp/memory")  
[Metaprogramming library](../meta.html "cpp/meta") (C++11)  
[General utilities library](../utility.html "cpp/utility")  
[Containers library](../container.html "cpp/container")  
[Iterators library](../iterator.html "cpp/iterator")  
[Ranges library](../ranges.html "cpp/ranges") (C++20)  
[Algorithms library](../algorithm.html "cpp/algorithm")  
[Strings library](../string.html "cpp/string")  
[Text processing library](../text.html "cpp/text")  
[Numerics library](../numeric.html "cpp/numeric")  
[Date and time library](../chrono.html "cpp/chrono")  
[Input/output library](../io.html "cpp/io")  
[Filesystem library](../filesystem.html "cpp/filesystem") (C++17)  
[Concurrency support library](../atomic.html "cpp/thread") (C++11)  
[Execution control library](../experimental/execution.html "cpp/execution") (C++26)  
[Technical specifications](../experimental.html "cpp/experimental")  
[Symbols index](../symbol_index.html "cpp/symbol index")  
[External libraries](../links/libs.html "cpp/links/libs")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/navbar_content&action=edit)

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
  
| **lerp**(C++20)  
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
  
  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/navbar_content&action=edit)

Defined in header `[<cmath>](../header/cmath.html "cpp/header/cmath")` |  |   
---|---|---  
| (1) |   
constexpr float lerp( float a, float b, float t ) noexcept;  
constexpr double lerp( double a, double b, double t ) noexcept;  
constexpr long double lerp( long double a, long double b,  
long double t ) noexcept; |  | (since C++20)   
(until C++23)  
constexpr /* floating-point-type */  
lerp( /* floating-point-type */ a,  
/* floating-point-type */ b,  
/* floating-point-type */ t ) noexcept; |  |  (since C++23)  
[Additional overloads](lerp.html#Notes) |  |   
Defined in header `[<cmath>](../header/cmath.html "cpp/header/cmath")` |  |   
template< class Arithmetic1, class Arithmetic2, class Arithmetic3 >  
constexpr /* common-floating-point-type */  
lerp( Arithmetic1 a, Arithmetic2 b, Arithmetic3 t ) noexcept; |  (A)  |  (since C++20)  
| |   
  
1) Computes the [linear interpolation](https://en.wikipedia.org/wiki/Linear_interpolation "enwiki:Linear interpolation") between a and b, if the parameter t is inside `[`​0​`, `1`)` (the [linear extrapolation](https://en.wikipedia.org/wiki/Extrapolation#Linear "enwiki:Extrapolation") otherwise), i.e. the result of \\(a+t(b−a)\\)a+t(b−a) with accounting for floating-point calculation imprecision. The library provides overloads for all cv-unqualified floating-point types as the type of the parameters a, b and t.(since C++23)

A) Additional overloads are provided for all other combinations of arithmetic types.

## Contents

  * [1 Parameters](lerp.html#Parameters)
  * [2 Return value](lerp.html#Return_value)
  * [3 Notes](lerp.html#Notes)
  * [4 Example](lerp.html#Example)
  * [5 See also](lerp.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/lerp&action=edit&section=1 "Edit section: Parameters")] Parameters

a, b, t  |  \-  |  floating-point or integer values   
---|---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/lerp&action=edit&section=2 "Edit section: Return value")] Return value

\\(a + t(b − a)\\)a + t(b − a)

When [std::isfinite](math/isfinite.html)(a) && [std::isfinite](math/isfinite.html)(b) is true, the following properties are guaranteed: 

  * If t == 0, the result is equal to a. 
  * If t == 1, the result is equal to b. 
  * If t >= 0 && t <= 1, the result is finite. 
  * If [std::isfinite](math/isfinite.html)(t) && a == b, the result is equal to a. 
  * If [std::isfinite](math/isfinite.html)(t) || (b - a != 0 && [std::isinf](math/isinf.html)(t)), the result is not [`NaN`](math/NAN.html "cpp/numeric/math/NAN"). 



Let CMP(x, y) be 1 if x > y, -1 if x < y, and ​0​ otherwise. For any t1 and t2, the product of 

  * CMP(std::lerp(a, b, t2), std::lerp(a, b, t1)), 
  * CMP(t2, t1), and 
  * CMP(b, a)



is non-negative. (That is, `std::lerp` is monotonic.) 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/lerp&action=edit&section=3 "Edit section: Notes")] Notes

The additional overloads are not required to be provided exactly as (A). They only need to be sufficient to ensure that for their first argument num1, second argument num2 and third argument num3: 

  * If num1, num2 or num3 has type long double, then std::lerp(num1, num2, num3) has the same effect as std::lerp(static_cast<long double>(num1),  
static_cast<long double>(num2),  
static_cast<long double>(num3)). 
  * Otherwise, if num1, num2 and/or num3 has type double or an integer type, then std::lerp(num1, num2, num3) has the same effect as std::lerp(static_cast<double>(num1),  
static_cast<double>(num2),  
static_cast<double>(num3)). 
  * Otherwise, if num1, num2 or num3 has type float, then std::lerp(num1, num2, num3) has the same effect as std::lerp(static_cast<float>(num1),  
static_cast<float>(num2),  
static_cast<float>(num3)). 

| (until C++23)  
---|---  
If num1, num2 and num3 have arithmetic types, then std::lerp(num1, num2, num3) has the same effect as std::lerp(static_cast</*common-floating-point-type*/>(num1),  
static_cast</*common-floating-point-type*/>(num2),  
static_cast</*common-floating-point-type*/>(num3)), where /*common-floating-point-type*/ is the floating-point type with the greatest [floating-point conversion rank](../language/usual_arithmetic_conversions.html#Floating-point_conversion_rank "cpp/language/usual arithmetic conversions") and greatest [floating-point conversion subrank](../language/usual_arithmetic_conversions.html#Floating-point_conversion_subrank "cpp/language/usual arithmetic conversions") among the types of num1, num2 and num3, arguments of integer type are considered to have the same floating-point conversion rank as double. If no such floating-point type with the greatest rank and subrank exists, then [overload resolution](../language/overload_resolution.html "cpp/language/overload resolution") does not result in a usable candidate from the overloads provided.  | (since C++23)  
[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_interpolate`](../experimental/feature_test.html#cpp_lib_interpolate "cpp/feature test") | [`201902L`](../compiler_support/20.html#cpp_lib_interpolate_201902L "cpp/compiler support/20") | (C++20) | `std::lerp`, [std::midpoint](midpoint.html "cpp/numeric/midpoint")  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/lerp&action=edit&section=4 "Edit section: Example")] Example

Run this code
    
    
    #include <cassert>
    #include <cmath>
    #include <iostream>
     
    float naive_lerp(float a, float b, float t)
    {
        return a + t * (b - a);
    }
     
    int main()
    {
        [std::cout](../io/cout.html) << [std::boolalpha](../io/manip/boolalpha.html);
     
        const float a = 1e8f, b = 1.0f;
        const float midpoint = std::lerp(a, b, 0.5f);
     
        [std::cout](../io/cout.html) << "a = " << a << ", " << "b = " << b << '\n'
                  << "midpoint = " << midpoint << '\n';
     
        [std::cout](../io/cout.html) << "std::lerp is exact: "
                  << (a == std::lerp(a, b, 0.0f)) << ' '
                  << (b == std::lerp(a, b, 1.0f)) << '\n';
     
        [std::cout](../io/cout.html) << "naive_lerp is exact: "
                  << (a == naive_lerp(a, b, 0.0f)) << ' '
                  << (b == naive_lerp(a, b, 1.0f)) << '\n';
     
        [std::cout](../io/cout.html) << "std::lerp(a, b, 1.0f) = " << std::lerp(a, b, 1.0f) << '\n'
                  << "naive_lerp(a, b, 1.0f) = " << naive_lerp(a, b, 1.0f) << '\n';
     
        [assert](../error/assert.html)(not [std::isnan](math/isnan.html)(std::lerp(a, b, [INFINITY](math/INFINITY.html)))); // lerp here can be -inf
     
        [std::cout](../io/cout.html) << "Extrapolation demo, given std::lerp(5, 10, t):\n";
        for (auto t{-2.0}; t <= 2.0; t += 0.5)
            [std::cout](../io/cout.html) << std::lerp(5.0, 10.0, t) << ' ';
        [std::cout](../io/cout.html) << '\n';
    }

Possible output: 
    
    
    a = 1e+08, b = 1
    midpoint = 5e+07
    std::lerp is exact?: true true
    naive_lerp is exact?: true false
    std::lerp(a, b, 1.0f) = 1
    naive_lerp(a, b, 1.0f) = 0
    Extrapolation demo, given std::lerp(5, 10, t):
    -5 -2.5 0 2.5 5 7.5 10 12.5 15

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/lerp&action=edit&section=5 "Edit section: See also")] See also

[ midpoint](midpoint.html "cpp/numeric/midpoint")(C++20) |  midpoint between two numbers or pointers   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/dsc_midpoint&action=edit)  
---|---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
