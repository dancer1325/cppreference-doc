[C++](../../../cpp.html "cpp")

[Compiler support](../../compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](../../freestanding.html "cpp/freestanding")  
[Language](../../language.html "cpp/language")  
[Standard library](../../standard_library.html "cpp/standard library")  
[Standard library headers](../../headers.html "cpp/header")  
[Named requirements](../../iterator/concepts.html "cpp/named req")  
[Feature test macros](../../experimental/feature_test.html "cpp/feature test") (C++20)  
[Language support library](../../utility.html#Language_support "cpp/utility")  
[Concepts library](../../concepts.html "cpp/concepts") (C++20)  
[Diagnostics library](../../error.html "cpp/error")  
[Memory management library](../../memory.html "cpp/memory")  
[Metaprogramming library](../../meta.html "cpp/meta") (C++11)  
[General utilities library](../../utility.html "cpp/utility")  
[Containers library](../../container.html "cpp/container")  
[Iterators library](../../iterator.html "cpp/iterator")  
[Ranges library](../../ranges.html "cpp/ranges") (C++20)  
[Algorithms library](../../algorithm.html "cpp/algorithm")  
[Strings library](../../string.html "cpp/string")  
[Text processing library](../../text.html "cpp/text")  
[Numerics library](../../numeric.html "cpp/numeric")  
[Date and time library](../../chrono.html "cpp/chrono")  
[Input/output library](../../io.html "cpp/io")  
[Filesystem library](../../filesystem.html "cpp/filesystem") (C++17)  
[Concurrency support library](../../atomic.html "cpp/thread") (C++11)  
[Execution control library](../../experimental/execution.html "cpp/execution") (C++26)  
[Technical specifications](../../experimental.html "cpp/experimental")  
[Symbols index](../../symbol_index.html "cpp/symbol index")  
[External libraries](../../links/libs.html "cpp/links/libs")  
  


[Numerics library](../../numeric.html "cpp/numeric")

[Common mathematical functions](../math.html "cpp/numeric/math")  
---  
[Mathematical special functions](../special_math.html "cpp/numeric/special functions") (C++17)  
[Mathematical constants](../constants.html "cpp/numeric/constants") (C++20)  
[Basic linear algebra algorithms](../linalg.html "cpp/numeric/linalg") (C++26)  
[Data-parallel types (SIMD)](../simd.html "cpp/numeric/simd") (C++26)  
[Floating-point environment](../fenv.html "cpp/numeric/fenv") (C++11)  
[Complex numbers](../complex.html "cpp/numeric/complex")  
[Numeric array (`valarray`)](../valarray.html "cpp/numeric/valarray")  
[Pseudo-random number generation](../random.html "cpp/numeric/random")  
[Bit manipulation](../../utility/bit.html "cpp/utility/bit") (C++20)  
[Saturation arithmetic](../../numeric.html#Saturation_arithmetic "cpp/numeric") (C++26)  
[Factor operations](../../numeric.html#Factor_operations "cpp/numeric")  
| [gcd](../gcd.html "cpp/numeric/gcd")(C++17)  
---  
  
| [lcm](../lcm.html "cpp/numeric/lcm")(C++17)  
---  
  
[Interpolations](../../numeric.html#Interpolation_operations "cpp/numeric")  
| [midpoint](../midpoint.html "cpp/numeric/midpoint")(C++20)  
---  
  
| [lerp](../lerp.html "cpp/numeric/lerp")(C++20)  
---  
  
[Generic numeric operations](../../numeric.html#Numeric_operations "cpp/numeric")  
| [iota](../../algorithm/iota.html "cpp/algorithm/iota")(C++11)  
---  
[ranges::iota](../../algorithm/ranges/iota.html "cpp/algorithm/ranges/iota")(C++23)  
[accumulate](../../algorithm/accumulate.html "cpp/algorithm/accumulate")  
[inner_product](../../algorithm/inner_product.html "cpp/algorithm/inner product")  
[adjacent_difference](../../algorithm/adjacent_difference.html "cpp/algorithm/adjacent difference")` `  
[partial_sum](../../algorithm/partial_sum.html "cpp/algorithm/partial sum")  
  
| [reduce](../../algorithm/reduce.html "cpp/algorithm/reduce")(C++17)  
---  
[transform_reduce](../../algorithm/transform_reduce.html "cpp/algorithm/transform reduce")(C++17)  
[inclusive_scan](../../algorithm/inclusive_scan.html "cpp/algorithm/inclusive scan")(C++17)  
[exclusive_scan](../../algorithm/exclusive_scan.html "cpp/algorithm/exclusive scan")(C++17)  
[transform_inclusive_scan](../../algorithm/transform_inclusive_scan.html "cpp/algorithm/transform inclusive scan")(C++17)  
[transform_exclusive_scan](../../algorithm/transform_exclusive_scan.html "cpp/algorithm/transform exclusive scan")(C++17)  
  
[C-style checked integer arithmetic](../../numeric.html#Checked_integer_arithmetic "cpp/numeric")  
| [ckd_add](../ckd_add.html "cpp/numeric/ckd add")(C++26)  
---  
[ckd_sub](../ckd_sub.html "cpp/numeric/ckd sub")(C++26)  
  
| [ckd_mul](../ckd_mul.html "cpp/numeric/ckd mul")(C++26)  
---  
  
  
  


[Floating-point environment](../fenv.html "cpp/numeric/fenv")

Functions  
---  
[feclearexcept](feclearexcept.html "cpp/numeric/fenv/feclearexcept")(C++11)  
[fetestexcept](fetestexcept.html "cpp/numeric/fenv/fetestexcept")(C++11)  
[feraiseexcept](feraiseexcept.html "cpp/numeric/fenv/feraiseexcept")(C++11)  
[fegetexceptflagfesetexceptflag](feexceptflag.html "cpp/numeric/fenv/feexceptflag")(C++11)(C++11)  
**fegetround fesetround**(C++11)(C++11)  
[fegetenvfesetenv](feenv.html "cpp/numeric/fenv/feenv")(C++11)(C++11)  
[feholdexcept](feholdexcept.html "cpp/numeric/fenv/feholdexcept")(C++11)  
[feupdateenv](feupdateenv.html "cpp/numeric/fenv/feupdateenv")(C++11)  
Macro constants  
[FE_ALL_EXCEPTFE_DIVBYZEROFE_INEXACTFE_INVALIDFE_OVERFLOWFE_UNDERFLOW](FE_exceptions.html "cpp/numeric/fenv/FE exceptions")(C++11)(C++11)(C++11)(C++11)(C++11)(C++11)  
[FE_DOWNWARDFE_TONEARESTFE_TOWARDZEROFE_UPWARD](FE_round.html "cpp/numeric/fenv/FE round")(C++11)(C++11)(C++11)(C++11)  
[FE_DFL_ENV](FE_DFL_ENV.html "cpp/numeric/fenv/FE DFL ENV")(C++11)  
  


Defined in header `[<cfenv>](../../header/cfenv.html "cpp/header/cfenv")` |  |   
---|---|---  
int fesetround( int round ) |  (1)  |  (since C++11)  
int fegetround() |  (2)  |  (since C++11)  
| |   
  
Manages the floating-point rounding direction. 

1) Attempts to establish the floating-point rounding direction equal to the argument `round`, which is expected to be one of the [floating point rounding macros](FE_round.html "cpp/numeric/fenv/FE round"). 

2) Returns the value of the [floating point rounding macro](FE_round.html "cpp/numeric/fenv/FE round") that corresponds to the current rounding direction. 

## Contents

  * [1 Parameters](feround.html#Parameters)
  * [2 Return value](feround.html#Return_value)
  * [3 Notes](feround.html#Notes)
  * [4 Example](feround.html#Example)
  * [5 See also](feround.html#See_also)

  
---  
  
### Parameters

round  |  \-  |  rounding direction, one of [floating point rounding macros](FE_round.html "cpp/numeric/fenv/FE round")  
---|---|---  
  
### Return value

1) ​0​ on success, non-zero otherwise. 

2) The [floating point rounding macro](FE_round.html "cpp/numeric/fenv/FE round") describing the current rounding direction or a negative value if the direction cannot be determined. 

### Notes

The current rounding mode, reflecting the effects of the most recent `fesetround`, can also be queried with [FLT_ROUNDS](../../types/climits/FLT_ROUNDS.html "cpp/types/climits/FLT ROUNDS"). 

See [floating-point rounding macros](FE_round.html "cpp/numeric/fenv/FE round") for the effects of rounding. 

### Example



Run this code
    
    
    #include <cfenv>
    #include <cmath>
    #include <iomanip>
    #include <iostream>
    #include <utility>
    // #pragma STDC FENV_ACCESS ON
     
    int main()
    {
        static constexpr [std::pair](../../utility/pair.html)<const char*, const double> samples[]
        {
            {" 12.0", 12.0},  {" 12.1", 12.1}, {"-12.1", -12.1}, {" 12.5", 12.5},
            {"-12.5", -12.5}, {" 12.9", 12.9}, {"-12.9", -12.9}, {" 13.0", 13.0}
        };
     
        [std::cout](../../io/cout.html) <<
            "│ sample │  FE_DOWNWARD  │   FE_UPWARD   │ FE_TONEAREST  │ FE_TOWARDZERO │\n";
     
        for (const auto& [str, fp] : samples)
        {
            [std::cout](../../io/cout.html) << "│ " << [std::setw](../../io/manip/setw.html)(6) << str << " │  ";
            for (const int dir : {[FE_DOWNWARD](FE_round.html), [FE_UPWARD](FE_round.html), [FE_TONEAREST](FE_round.html), [FE_TOWARDZERO](FE_round.html)})
            {
                std::fesetround(dir);
                [std::cout](../../io/cout.html) << [std::setw](../../io/manip/setw.html)(10) << [std::fixed](../../io/manip/fixed.html) << [std::nearbyint](../math/nearbyint.html)(fp) << "   │  ";
            }
            [std::cout](../../io/cout.html) << '\n';
        }
    }

Output: 
    
    
    │ sample │  FE_DOWNWARD  │   FE_UPWARD   │ FE_TONEAREST  │ FE_TOWARDZERO │
    │   12.0 │   12.000000   │   12.000000   │   12.000000   │   12.000000   │
    │   12.1 │   12.000000   │   13.000000   │   12.000000   │   12.000000   │
    │  -12.1 │  -13.000000   │  -12.000000   │  -12.000000   │  -12.000000   │
    │   12.5 │   12.000000   │   13.000000   │   12.000000   │   12.000000   │
    │  -12.5 │  -13.000000   │  -12.000000   │  -12.000000   │  -12.000000   │
    │   12.9 │   12.000000   │   13.000000   │   13.000000   │   12.000000   │
    │  -12.9 │  -13.000000   │  -12.000000   │  -13.000000   │  -12.000000   │
    │   13.0 │   13.000000   │   13.000000   │   13.000000   │   13.000000   │

### See also

[ nearbyintnearbyintfnearbyintl](../math/nearbyint.html "cpp/numeric/math/nearbyint")(C++11)(C++11)(C++11) |  nearest integer using current rounding mode   
(function)   
---|---  
[ rintrintfrintllrintlrintflrintlllrintllrintfllrintl](../math/rint.html "cpp/numeric/math/rint")(C++11)(C++11)(C++11)(C++11)(C++11)(C++11)(C++11)(C++11)(C++11) |  nearest integer using current rounding mode with  
exception if the result differs   
(function)   
[C documentation](../../../c/numeric/fenv/feround.html "c/numeric/fenv/feround") for fegetround, fesetround
