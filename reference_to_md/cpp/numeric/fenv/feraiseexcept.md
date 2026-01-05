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
**feraiseexcept**(C++11)  
[fegetexceptflagfesetexceptflag](feexceptflag.html "cpp/numeric/fenv/feexceptflag")(C++11)(C++11)  
[fegetroundfesetround](feround.html "cpp/numeric/fenv/feround")(C++11)(C++11)  
[fegetenvfesetenv](feenv.html "cpp/numeric/fenv/feenv")(C++11)(C++11)  
[feholdexcept](feholdexcept.html "cpp/numeric/fenv/feholdexcept")(C++11)  
[feupdateenv](feupdateenv.html "cpp/numeric/fenv/feupdateenv")(C++11)  
Macro constants  
[FE_ALL_EXCEPTFE_DIVBYZEROFE_INEXACTFE_INVALIDFE_OVERFLOWFE_UNDERFLOW](FE_exceptions.html "cpp/numeric/fenv/FE exceptions")(C++11)(C++11)(C++11)(C++11)(C++11)(C++11)  
[FE_DOWNWARDFE_TONEARESTFE_TOWARDZEROFE_UPWARD](FE_round.html "cpp/numeric/fenv/FE round")(C++11)(C++11)(C++11)(C++11)  
[FE_DFL_ENV](FE_DFL_ENV.html "cpp/numeric/fenv/FE DFL ENV")(C++11)  
  


Defined in header `[<cfenv>](../../header/cfenv.html "cpp/header/cfenv")` |  |   
---|---|---  
int feraiseexcept( int excepts ); |  |  (since C++11)  
| |   
  
Attempts to raise all floating point exceptions listed in `excepts` (a bitwise OR of the [floating point exception macros](FE_exceptions.html "cpp/numeric/fenv/FE exceptions")). If one of the exceptions is [FE_OVERFLOW](FE_exceptions.html "cpp/numeric/fenv/FE exceptions") or [FE_UNDERFLOW](FE_exceptions.html "cpp/numeric/fenv/FE exceptions"), this function may additionally raise [FE_INEXACT](FE_exceptions.html "cpp/numeric/fenv/FE exceptions"). The order in which the exceptions are raised is unspecified, except that [FE_OVERFLOW](FE_exceptions.html "cpp/numeric/fenv/FE exceptions") and [FE_UNDERFLOW](FE_exceptions.html "cpp/numeric/fenv/FE exceptions") are always raised before [FE_INEXACT](FE_exceptions.html "cpp/numeric/fenv/FE exceptions"). 

## Contents

  * [1 Parameters](feraiseexcept.html#Parameters)
  * [2 Return value](feraiseexcept.html#Return_value)
  * [3 Example](feraiseexcept.html#Example)
  * [4 See also](feraiseexcept.html#See_also)

  
---  
  
### Parameters

excepts  |  \-  |  bitmask listing the exception flags to raise   
---|---|---  
  
### Return value

​0​ if all listed exceptions were raised, non-zero value otherwise. 

### Example

Run this code
    
    
    #include <cfenv>
    #include <iostream>
     
    // #pragma STDC FENV_ACCESS ON
     
    int main()
    {
        [std::feclearexcept](feclearexcept.html)([FE_ALL_EXCEPT](FE_exceptions.html));
        const int r = std::feraiseexcept([FE_UNDERFLOW](FE_exceptions.html) | [FE_DIVBYZERO](FE_exceptions.html));
        [std::cout](../../io/cout.html) << "Raising divbyzero and underflow simultaneously "
                  << (r ? "fails" : "succeeds") << " and results in\n";
     
        const int e = [std::fetestexcept](fetestexcept.html)([FE_ALL_EXCEPT](FE_exceptions.html));
        if (e & [FE_DIVBYZERO](FE_exceptions.html))
            [std::cout](../../io/cout.html) << "division by zero\n";
        if (e & [FE_INEXACT](FE_exceptions.html))
            [std::cout](../../io/cout.html) << "inexact\n";
        if (e & [FE_INVALID](FE_exceptions.html))
            [std::cout](../../io/cout.html) << "invalid\n";
        if (e & [FE_UNDERFLOW](FE_exceptions.html))
            [std::cout](../../io/cout.html) << "underflow\n";
        if (e & [FE_OVERFLOW](FE_exceptions.html))
            [std::cout](../../io/cout.html) << "overflow\n";
    }

Output: 
    
    
    Raising divbyzero and underflow simultaneously succeeds and results in
    division by zero
    underflow

### See also

[ feclearexcept](feclearexcept.html "cpp/numeric/fenv/feclearexcept")(C++11) |  clears the specified floating-point status flags   
(function)   
---|---  
[ fetestexcept](fetestexcept.html "cpp/numeric/fenv/fetestexcept")(C++11) |  determines which of the specified floating-point status flags are set   
(function)   
[C documentation](../../../c/numeric/fenv/feraiseexcept.html "c/numeric/fenv/feraiseexcept") for feraiseexcept
