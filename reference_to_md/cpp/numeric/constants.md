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
**Mathematical constants** (C++20)  
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
| [ckd_add](ckd_add.html "cpp/numeric/ckd add")(C++26)  
---  
[ckd_sub](ckd_sub.html "cpp/numeric/ckd sub")(C++26)  
  
| [ckd_mul](ckd_mul.html "cpp/numeric/ckd mul")(C++26)  
---  
  
  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/navbar_content&action=edit)

**Mathematical constants**

## Contents

  * [1 Constants (since C++20)](constants.html#Constants_.28since_C.2B.2B20.29)
  * [2 Notes](constants.html#Notes)
  * [3 Example](constants.html#Example)
  * [4 See also](constants.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/constants&action=edit&section=1 "Edit section: Constants \(since C++20\)")] Constants (since C++20)

Defined in header `[<numbers>](../header/numbers.html "cpp/header/numbers")`  
---  
Defined in namespace `std::numbers`  
e_v |  [the mathematical constant \\(\small e\\)e](https://en.wikipedia.org/wiki/E_\(mathematical_constant\) "enwiki:E \(mathematical constant\)")  
(variable template)  
log2e_v |  \\(\log_{2}e\\)log2e  
(variable template)  
log10e_v |  \\(\log_{10}e\\)log10e  
(variable template)  
pi_v |  [the mathematical constant \\(\pi\\)π](https://en.wikipedia.org/wiki/Pi_\(mathematical_constant\) "enwiki:Pi \(mathematical constant\)")  
(variable template)  
inv_pi_v |  \\(\frac1\pi\\)| 1  
---  
π  
  
(variable template)  
inv_sqrtpi_v |  \\(\frac1{\sqrt\pi}\\)| 1  
---  
√π  
  
(variable template)  
ln2_v |  \\(\ln{2}\\)ln 2  
(variable template)  
ln10_v |  \\(\ln{10}\\)ln 10  
(variable template)  
sqrt2_v |  \\(\sqrt2\\)√2  
(variable template)  
sqrt3_v |  \\(\sqrt3\\)√3  
(variable template)  
inv_sqrt3_v |  \\(\frac1{\sqrt3}\\)| 1  
---  
√3  
  
(variable template)  
egamma_v |  [the Euler–Mascheroni constant γ](https://en.wikipedia.org/wiki/Euler%27s_constant "enwiki:Euler's constant")  
(variable template)  
phi_v |  [the golden ratio Φ](https://en.wikipedia.org/wiki/Golden_ratio "enwiki:Golden ratio") (\\(\frac{1+\sqrt5}2\\)| 1 + √5  
---  
2  
)  
(variable template)  
inline constexpr double e |  e_v<double>   
(constant)  
inline constexpr double log2e |  log2e_v<double>   
(constant)  
inline constexpr double log10e |  log10e_v<double>   
(constant)  
inline constexpr double pi |  pi_v<double>   
(constant)  
inline constexpr double inv_pi |  inv_pi_v<double>   
(constant)  
inline constexpr double inv_sqrtpi |  inv_sqrtpi_v<double>   
(constant)  
inline constexpr double ln2 |  ln2_v<double>   
(constant)  
inline constexpr double ln10 |  ln10_v<double>   
(constant)  
inline constexpr double sqrt2 |  sqrt2_v<double>   
(constant)  
inline constexpr double sqrt3 |  sqrt3_v<double>   
(constant)  
inline constexpr double inv_sqrt3 |  inv_sqrt3_v<double>   
(constant)  
inline constexpr double egamma |  egamma_v<double>   
(constant)  
inline constexpr double phi |  phi_v<double>   
(constant)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/constants&action=edit&section=2 "Edit section: Notes")] Notes

A program that instantiates a primary template of a mathematical constant variable template is ill-formed. 

The standard library specializes mathematical constant variable templates for all floating-point types (i.e. float, double, long double , and [fixed width floating-point types](../types/floating-point.html "cpp/types/floating-point")(since C++23)). 

A program may partially or explicitly specialize a mathematical constant variable template provided that the specialization depends on a [program-defined type](../language/type-id.html#Program-defined_type "cpp/language/type"). 

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_math_constants`](../experimental/feature_test.html#cpp_lib_math_constants "cpp/feature test") | [`201907L`](../compiler_support/20.html#cpp_lib_math_constants_201907L "cpp/compiler support/20") | (C++20) | [Mathematical constants](constants.html#top)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/constants&action=edit&section=3 "Edit section: Example")] Example

Run this code
    
    
    #include <cmath>
    #include <iomanip>
    #include <iostream>
    #include <limits>
    #include <numbers>
    #include <string_view>
     
    auto egamma_aprox(const unsigned iterations)
    {
        long double s{};
        for (unsigned m{2}; m != iterations; ++m)
            if (const long double t{[std::riemann_zetal](special_functions/riemann_zeta.html)(m) / m}; m % 2)
                s -= t;
            else
                s += t;
        return s;
    };
     
    int main()
    {
        using namespace std::numbers;
        using namespace std::string_view_literals;
     
        const auto x = [std::sqrt](math/sqrt.html)(inv_pi) / inv_sqrtpi +
            [std::ceil](math/ceil.html)([std::exp2](math/exp2.html)(log2e)) + sqrt3 * inv_sqrt3 + [std::exp](math/exp.html)(0);
        const auto v = (phi * phi - phi) + 1 / [std::log2](math/log2.html)(sqrt2) +
            log10e * ln10 + [std::pow](math/pow.html)(e, ln2) - [std::cos](math/cos.html)(pi);    
        [std::cout](../io/cout.html) << "The answer is " << x * v << '\n';
     
        constexpr auto γ{"0.577215664901532860606512090082402"sv};
        [std::cout](../io/cout.html)
            << "γ as 10⁶ sums of ±ζ(m)/m   = "
            << egamma_aprox(1'000'000) << '\n'
            << "γ as egamma_v<float>       = "
            << [std::setprecision](../io/manip/setprecision.html)([std::numeric_limits](../types/numeric_limits.html)<float>::digits10 + 1)
            << egamma_v<float> << '\n'
            << "γ as egamma_v<double>      = "
            << [std::setprecision](../io/manip/setprecision.html)([std::numeric_limits](../types/numeric_limits.html)<double>::digits10 + 1)
            << egamma_v<double> << '\n'
            << "γ as egamma_v<long double> = "
            << [std::setprecision](../io/manip/setprecision.html)([std::numeric_limits](../types/numeric_limits.html)<long double>::digits10 + 1)
            << egamma_v<long double> << '\n'
            << "γ with " << γ.length() - 1 << " digits precision = " << γ << '\n';
    }

Possible output: 
    
    
    The answer is 42
    γ as 10⁶ sums of ±ζ(m)/m   = 0.577215
    γ as egamma_v<float>       = 0.5772157
    γ as egamma_v<double>      = 0.5772156649015329
    γ as egamma_v<long double> = 0.5772156649015328606
    γ with 34 digits precision = 0.577215664901532860606512090082402

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/constants&action=edit&section=4 "Edit section: See also")] See also

[ ratio](ratio/ratio.html "cpp/numeric/ratio/ratio")(C++11) |  represents exact rational fraction   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/ratio/dsc_ratio&action=edit)  
---|---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
