[C++](../cpp.html "cpp")

[Compiler support](compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](freestanding.html "cpp/freestanding")  
[Language](language.html "cpp/language")  
[Standard library](standard_library.html "cpp/standard library")  
[Standard library headers](headers.html "cpp/header")  
[Named requirements](iterator/concepts.html "cpp/named req")  
[Feature test macros](experimental/feature_test.html "cpp/feature test") (C++20)  
[Language support library](utility.html#Language_support "cpp/utility")  
[Concepts library](concepts.html "cpp/concepts") (C++20)  
[Diagnostics library](error.html "cpp/error")  
[Memory management library](memory.html "cpp/memory")  
[Metaprogramming library](meta.html "cpp/meta") (C++11)  
[General utilities library](utility.html "cpp/utility")  
[Containers library](container.html "cpp/container")  
[Iterators library](iterator.html "cpp/iterator")  
[Ranges library](ranges.html "cpp/ranges") (C++20)  
[Algorithms library](algorithm.html "cpp/algorithm")  
[Strings library](string.html "cpp/string")  
[Text processing library](text.html "cpp/text")  
**Numerics library**  
[Date and time library](chrono.html "cpp/chrono")  
[Input/output library](io.html "cpp/io")  
[Filesystem library](filesystem.html "cpp/filesystem") (C++17)  
[Concurrency support library](atomic.html "cpp/thread") (C++11)  
[Execution control library](experimental/execution.html "cpp/execution") (C++26)  
[Technical specifications](experimental.html "cpp/experimental")  
[Symbols index](symbol_index.html "cpp/symbol index")  
[External libraries](links/libs.html "cpp/links/libs")  
  


**Numerics library**

[Common mathematical functions](numeric/math.html "cpp/numeric/math")  
---  
[Mathematical special functions](numeric/special_math.html "cpp/numeric/special functions") (C++17)  
[Mathematical constants](numeric/constants.html "cpp/numeric/constants") (C++20)  
[Basic linear algebra algorithms](numeric/linalg.html "cpp/numeric/linalg") (C++26)  
[Data-parallel types (SIMD)](numeric/simd.html "cpp/numeric/simd") (C++26)  
[Floating-point environment](numeric/fenv.html "cpp/numeric/fenv") (C++11)  
[Complex numbers](numeric/complex.html "cpp/numeric/complex")  
[Numeric array (`valarray`)](numeric/valarray.html "cpp/numeric/valarray")  
[Pseudo-random number generation](numeric/random.html "cpp/numeric/random")  
[Bit manipulation](utility/bit.html "cpp/utility/bit") (C++20)  
[Saturation arithmetic](numeric.html#Saturation_arithmetic "cpp/numeric") (C++26)  
[Factor operations](numeric.html#Factor_operations "cpp/numeric")  
| [gcd](numeric/gcd.html "cpp/numeric/gcd")(C++17)  
---  
  
| [lcm](numeric/lcm.html "cpp/numeric/lcm")(C++17)  
---  
  
[Interpolations](numeric.html#Interpolation_operations "cpp/numeric")  
| [midpoint](numeric/midpoint.html "cpp/numeric/midpoint")(C++20)  
---  
  
| [lerp](numeric/lerp.html "cpp/numeric/lerp")(C++20)  
---  
  
[Generic numeric operations](numeric.html#Numeric_operations "cpp/numeric")  
| [iota](algorithm/iota.html "cpp/algorithm/iota")(C++11)  
---  
[ranges::iota](algorithm/ranges/iota.html "cpp/algorithm/ranges/iota")(C++23)  
[accumulate](algorithm/accumulate.html "cpp/algorithm/accumulate")  
[inner_product](algorithm/inner_product.html "cpp/algorithm/inner product")  
[adjacent_difference](algorithm/adjacent_difference.html "cpp/algorithm/adjacent difference")` `  
[partial_sum](algorithm/partial_sum.html "cpp/algorithm/partial sum")  
  
| [reduce](algorithm/reduce.html "cpp/algorithm/reduce")(C++17)  
---  
[transform_reduce](algorithm/transform_reduce.html "cpp/algorithm/transform reduce")(C++17)  
[inclusive_scan](algorithm/inclusive_scan.html "cpp/algorithm/inclusive scan")(C++17)  
[exclusive_scan](algorithm/exclusive_scan.html "cpp/algorithm/exclusive scan")(C++17)  
[transform_inclusive_scan](algorithm/transform_inclusive_scan.html "cpp/algorithm/transform inclusive scan")(C++17)  
[transform_exclusive_scan](algorithm/transform_exclusive_scan.html "cpp/algorithm/transform exclusive scan")(C++17)  
  
[C-style checked integer arithmetic](numeric.html#Checked_integer_arithmetic "cpp/numeric")  
| [ckd_add](numeric/ckd_add.html "cpp/numeric/ckd add")(C++26)  
---  
[ckd_sub](numeric/ckd_sub.html "cpp/numeric/ckd sub")(C++26)  
  
| [ckd_mul](numeric/ckd_mul.html "cpp/numeric/ckd mul")(C++26)  
---  
  
  
  


The C++ numerics library includes common mathematical functions and types, as well as optimized numeric arrays and support for random number generation. 

## Contents

  * [1 Mathematical functions and types](numeric.html#Mathematical_functions_and_types)
    * [1.1 Common mathematical functions](numeric.html#Common_mathematical_functions)
    * [1.2 Mathematical special functions (since C++17)](numeric.html#Mathematical_special_functions_.28since_C.2B.2B17.29)
    * [1.3 Mathematical constants (since C++20)](numeric.html#Mathematical_constants_.28since_C.2B.2B20.29)
    * [1.4 Basic linear algebra algorithms (since C++26)](numeric.html#Basic_linear_algebra_algorithms_.28since_C.2B.2B26.29)
    * [1.5 Data-parallel types (since C++26)](numeric.html#Data-parallel_types_.28since_C.2B.2B26.29)
    * [1.6 Complex number arithmetic](numeric.html#Complex_number_arithmetic)
    * [1.7 Numeric arrays](numeric.html#Numeric_arrays)
  * [2 Numeric algorithms](numeric.html#Numeric_algorithms)
    * [2.1 Factor operations (since C++17)](numeric.html#Factor_operations_.28since_C.2B.2B17.29)
    * [2.2 Interpolation operations (C++20)](numeric.html#Interpolation_operations_.28C.2B.2B20.29)
    * [2.3 Saturation arithmetic (since C++26)](numeric.html#Saturation_arithmetic_.28since_C.2B.2B26.29)
    * [2.4 Numeric operations](numeric.html#Numeric_operations)
  * [3 Miscellaneous](numeric.html#Miscellaneous)
    * [3.1 Pseudo-random number generation](numeric.html#Pseudo-random_number_generation)
    * [3.2 Floating-point environment (since C++11)](numeric.html#Floating-point_environment_.28since_C.2B.2B11.29)
    * [3.3 Bit manipulation (since C++20)](numeric.html#Bit_manipulation_.28since_C.2B.2B20.29)
    * [3.4 Checked integer arithmetic (since C++26)](numeric.html#Checked_integer_arithmetic_.28since_C.2B.2B26.29)
    * [3.5 See also](numeric.html#See_also)

  
---  
  
## Mathematical functions and types

### [Common mathematical functions](numeric/math.html "cpp/numeric/math")

The header [`<cmath>`](header/cmath.html "cpp/header/cmath") provides [standard C library mathematical functions](numeric/math.html "cpp/numeric/math") such as [std::fabs](numeric/math/fabs.html "cpp/numeric/math/fabs"), [std::sqrt](numeric/math/sqrt.html "cpp/numeric/math/sqrt"), and [std::sin](numeric/math/sin.html "cpp/numeric/math/sin"). 

### [Mathematical special functions](numeric/special_math.html "cpp/numeric/special functions") (since C++17)

The header [`<cmath>`](header/cmath.html "cpp/header/cmath") also provides several mathematical special functions such as [std::beta](numeric/special_functions/beta.html "cpp/numeric/special functions/beta"), [std::hermite](numeric/special_functions/hermite.html "cpp/numeric/special functions/hermite"), and [std::cyl_bessel_i](numeric/special_functions/cyl_bessel_i.html "cpp/numeric/special functions/cyl bessel i"). 

### [Mathematical constants](numeric/constants.html "cpp/numeric/constants") (since C++20)

The header [`<numbers>`](header/numbers.html "cpp/header/numbers") provides several mathematical constants, such as [std::numbers::pi](numeric/constants.html "cpp/numeric/constants") or [std::numbers::sqrt2](numeric/constants.html "cpp/numeric/constants")

### [Basic linear algebra algorithms](numeric/linalg.html "cpp/numeric/linalg") (since C++26)

The header [`<linalg>`](header/linalg.html "cpp/header/linalg") provides basic linear algebra algorithms which are based on BLAS. 

### [Data-parallel types](numeric/simd.html "cpp/numeric/simd") (since C++26)

The header [`<simd>`](header/simd.html "cpp/header/simd") provides portable types for explicitly stating data-parallelism and structuring data for more efficient SIMD access. 

### Complex number arithmetic

Defined in header `[<complex>](header/complex.html "cpp/header/complex")`  
---  
[ complex](numeric/complex.html "cpp/numeric/complex") |  a complex number type   
(class template)  
  
### Numeric arrays

Defined in header `[<valarray>](header/valarray.html "cpp/header/valarray")`  
---  
[ valarray](numeric/valarray.html "cpp/numeric/valarray") |  numeric arrays, array masks and array slices   
(class template)  
  
## Numeric algorithms

The header [`<numeric>`](header/numeric.html "cpp/header/numeric") provides numeric algorithms below: 

### Factor operations (since C++17)

Defined in header `[<numeric>](header/numeric.html "cpp/header/numeric")`  
---  
[ gcd](numeric/gcd.html "cpp/numeric/gcd")(C++17) |  computes the greatest common divisor of two integers   
(function template)   
[ lcm](numeric/lcm.html "cpp/numeric/lcm")(C++17) |  computes the least common multiple of two integers   
(function template)   
  
### Interpolation operations (C++20)

Defined in header `[<numeric>](header/numeric.html "cpp/header/numeric")`  
---  
[ midpoint](numeric/midpoint.html "cpp/numeric/midpoint")(C++20) |  midpoint between two numbers or pointers   
(function template)   
Defined in header `[<cmath>](header/cmath.html "cpp/header/cmath")`  
[ lerp](numeric/lerp.html "cpp/numeric/lerp")(C++20) |  linear interpolation function   
(function)   
  
### Saturation arithmetic (since C++26)

Defined in header `[<numeric>](header/numeric.html "cpp/header/numeric")`  
---  
[ add_sat](numeric/add_sat.html "cpp/numeric/add sat")(C++26) |  saturating addition operation on two integers   
(function template)   
[ sub_sat](numeric/sub_sat.html "cpp/numeric/sub sat")(C++26) |  saturating subtraction operation on two integers   
(function template)   
[ mul_sat](numeric/mul_sat.html "cpp/numeric/mul sat")(C++26) |  saturating multiplication operation on two integers   
(function template)   
[ div_sat](numeric/div_sat.html "cpp/numeric/div sat")(C++26) |  saturating division operation on two integers   
(function template)   
[ saturate_cast](numeric/saturate_cast.html "cpp/numeric/saturate cast")(C++26) |  returns an integer value clamped to the range of another integer type   
(function template)   
  
### Numeric operations

Defined in header `[<numeric>](header/numeric.html "cpp/header/numeric")`  
---  
[ iota](algorithm/iota.html "cpp/algorithm/iota")(C++11) |  fills a range with successive increments of the starting value   
(function template)   
[ ranges::iota](algorithm/ranges/iota.html "cpp/algorithm/ranges/iota")(C++23) |  fills a range with successive increments of the starting value  
(algorithm function object)  
[ accumulate](algorithm/accumulate.html "cpp/algorithm/accumulate") |  sums up or folds a range of elements   
(function template)   
[ reduce](algorithm/reduce.html "cpp/algorithm/reduce")(C++17) |  similar to [std::accumulate](algorithm/accumulate.html "cpp/algorithm/accumulate"), except out of order   
(function template)   
[ transform_reduce](algorithm/transform_reduce.html "cpp/algorithm/transform reduce")(C++17) |  applies an invocable, then reduces out of order   
(function template)   
[ inner_product](algorithm/inner_product.html "cpp/algorithm/inner product") |  computes the inner product of two ranges of elements   
(function template)   
[ adjacent_difference](algorithm/adjacent_difference.html "cpp/algorithm/adjacent difference") |  computes the differences between adjacent elements in a range   
(function template)   
[ partial_sum](algorithm/partial_sum.html "cpp/algorithm/partial sum") |  computes the partial sum of a range of elements   
(function template)   
[ inclusive_scan](algorithm/inclusive_scan.html "cpp/algorithm/inclusive scan")(C++17) |  similar to [std::partial_sum](algorithm/partial_sum.html "cpp/algorithm/partial sum"), includes the ith input element in the ith sum   
(function template)   
[ exclusive_scan](algorithm/exclusive_scan.html "cpp/algorithm/exclusive scan")(C++17) |  similar to [std::partial_sum](algorithm/partial_sum.html "cpp/algorithm/partial sum"), excludes the ith input element from the ith sum   
(function template)   
[ transform_inclusive_scan](algorithm/transform_inclusive_scan.html "cpp/algorithm/transform inclusive scan")(C++17) |  applies an invocable, then calculates inclusive scan   
(function template)   
[ transform_exclusive_scan](algorithm/transform_exclusive_scan.html "cpp/algorithm/transform exclusive scan")(C++17) |  applies an invocable, then calculates exclusive scan   
(function template)   
  
## Miscellaneous

### [Pseudo-random number generation](numeric/random.html "cpp/numeric/random")

The header [`<random>`](header/random.html "cpp/header/random") defines [pseudo-random number generators and numerical distributions](numeric/random.html "cpp/numeric/random"). The header [`<cstdlib>`](header/cstdlib.html "cpp/header/cstdlib") also includes C-style random number generation via [std::srand](numeric/random/srand.html "cpp/numeric/random/srand") and [std::rand](numeric/random/rand.html "cpp/numeric/random/rand"). 

### [Floating-point environment](numeric/fenv.html "cpp/numeric/fenv") (since C++11)

The header [`<cfenv>`](header/cfenv.html "cpp/header/cfenv") defines [flags and functions related to exceptional floating-point state](numeric/fenv.html "cpp/numeric/fenv"), such as overflow and division by zero. 

### [Bit manipulation](utility/bit.html "cpp/utility/bit") (since C++20)

The header [`<bit>`](header/bit.html "cpp/header/bit") provides several function templates to access, manipulate, and process individual bits and bit sequences. The byte ordering ([endianness](types/endian.html "cpp/types/endian")) of scalar types can be inspected via [std::endian](types/endian.html) facility. 

### Checked integer arithmetic (since C++26)

The C compatibility header [`<stdckdint.h>`](header/stdckdint.h.html "cpp/header/stdckdint.h") provides several function templates for checked integer arithmetic. 

Defined in header `[<stdckdint.h>](header/stdckdint.h.html "cpp/header/stdckdint.h")`  
---  
[ ckd_add](numeric/ckd_add.html "cpp/numeric/ckd add")(C++26) |  checked addition operation on two integers   
(function template)   
[ ckd_sub](numeric/ckd_sub.html "cpp/numeric/ckd sub")(C++26) |  checked subtraction operation on two integers   
(function template)   
[ ckd_mul](numeric/ckd_mul.html "cpp/numeric/ckd mul")(C++26) |  checked multiplication operation on two integers   
(function template)   
  
### See also

[C documentation](../c/numeric.html "c/numeric") for Numerics  
---
