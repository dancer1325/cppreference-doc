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

[Saturation arithmetic](../numeric.html#Saturation_arithmetic "cpp/numeric")

Functions  
---  
[add_sat](add_sat.html "cpp/numeric/add sat")(C++26)  
**sub_sat**(C++26)  
[mul_sat](mul_sat.html "cpp/numeric/mul sat")(C++26)  
[div_sat](div_sat.html "cpp/numeric/div sat")(C++26)  
[saturate_cast](saturate_cast.html "cpp/numeric/saturate cast")(C++26)  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/sat_math/navbar_content&action=edit)

Defined in header `[<numeric>](../header/numeric.html "cpp/header/numeric")` |  |   
---|---|---  
template< class T >  
constexpr T sub_sat( T x, T y ) noexcept; |  |  (since C++26)  
| |   
  
Computes the [saturating](https://en.wikipedia.org/wiki/Saturation_arithmetic "enwiki:Saturation arithmetic") subtraction x - y. This operation (unlike built-in [arithmetic operations on integers](../language/operator_arithmetic.html#Overflows "cpp/language/operator arithmetic")) behaves as-if it is a mathematical operation with an _infinite_ range. Let `_q_` denote the result of such operation. Returns: 

  * `_q_`, if `_q_` is representable as a value of type `T`. Otherwise, 
  * the largest or smallest value of type `T`, whichever is closer to the `_q_`. 



This overload participates in overload resolution only if `T` is an [integer type](../language/types.html#Integer_types "cpp/language/types"), that is: signed char, short, int, long, long long, an extended signed integer type, or an unsigned version of such types. In particular, `T` must not be (possibly cv-qualified) bool, char, wchar_t, char8_t, char16_t, and char32_t, as these types are not intended for arithmetic. 

## Contents

  * [1 Parameters](sub_sat.html#Parameters)
  * [2 Return value](sub_sat.html#Return_value)
  * [3 Notes](sub_sat.html#Notes)
  * [4 Possible implementation](sub_sat.html#Possible_implementation)
  * [5 Example](sub_sat.html#Example)
  * [6 See also](sub_sat.html#See_also)
  * [7 External links](sub_sat.html#External_links)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/op_sat&action=edit&section=T-1 "Template:cpp/numeric/op sat")] Parameters

x, y  |  \-  |  integer values   
---|---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/op_sat&action=edit&section=T-2 "Template:cpp/numeric/op sat")] Return value

Saturated x - y. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/op_sat&action=edit&section=T-3 "Template:cpp/numeric/op sat")] Notes

Unlike the built-in arithmetic operators on integers, the [integral promotion](../language/implicit_cast.html#Integral_promotion "cpp/language/implicit conversion") does not apply to the x and y arguments. 

If two arguments of different type are passed, the call fails to compile, i.e. the behavior relative to [template argument deduction](../language/template_argument_deduction.html "cpp/language/template argument deduction") is the same as for [std::min](../algorithm/min.html "cpp/algorithm/min") or [std::max](../algorithm/max.html "cpp/algorithm/max"). 

Most modern hardware architectures have efficient support for saturation arithmetic on [SIMD vectors](https://en.wikipedia.org/wiki/Single_instruction,_multiple_data "enwiki:Single instruction, multiple data"), including [SSE2](https://en.wikipedia.org/wiki/SSE2 "enwiki:SSE2") for [x86](https://en.wikipedia.org/wiki/x86 "enwiki:x86") and [NEON](https://en.wikipedia.org/wiki/ARM_architecture_family#Advanced_SIMD_.28Neon.29 "enwiki:ARM architecture family") for [ARM](https://en.wikipedia.org/wiki/ARM_architecture_family "enwiki:ARM architecture family"). 

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_saturation_arithmetic`](../experimental/feature_test.html#cpp_lib_saturation_arithmetic "cpp/feature test") | [`202311L`](../compiler_support/26.html#cpp_lib_saturation_arithmetic_202311L "cpp/compiler support/26") | (C++26) | Saturation arithmetic   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/op_sat&action=edit&section=T-4 "Template:cpp/numeric/op sat")] Possible implementation

See [libstdc++ (gcc)](https://github.com/gcc-mirror/gcc/tree/master/libstdc%2B%2B-v3/include/bits/sat_arith.h#L42). 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/op_sat&action=edit&section=T-5 "Template:cpp/numeric/op sat")] Example

Can be previewed on [Compiler Explorer](https://godbolt.org/z/WfP56eeK6)

Run this code
    
    
    #include <climits>
    #include <numeric>
     
    static_assert
    (""
        && (std::sub_sat<int>([INT_MIN](../types/climits.html) + 4, 3) == [INT_MIN](../types/climits.html) + 1) // not saturated
        && (std::sub_sat<int>([INT_MIN](../types/climits.html) + 4, 5) == [INT_MIN](../types/climits.html)) // saturated
        && (std::sub_sat<int>([INT_MAX](../types/climits.html) - 4, -3) == [INT_MAX](../types/climits.html) - 1) // not saturated
        && (std::sub_sat<int>([INT_MAX](../types/climits.html) - 4, -5) == [INT_MAX](../types/climits.html)) // saturated
        && (std::sub_sat<unsigned>(4, 3) == 1) // not saturated
        && (std::sub_sat<unsigned>(4, 5) == 0) // saturated
    );
     
    int main() {}

### [[edit](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/op_sat&action=edit&section=T-6 "Template:cpp/numeric/op sat")] See also

[ add_sat](add_sat.html "cpp/numeric/add sat")(C++26) |  saturating addition operation on two integers   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/dsc_add_sat&action=edit)  
---|---  
[ mul_sat](mul_sat.html "cpp/numeric/mul sat")(C++26) |  saturating multiplication operation on two integers   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/dsc_mul_sat&action=edit)  
[ div_sat](div_sat.html "cpp/numeric/div sat")(C++26) |  saturating division operation on two integers   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/dsc_div_sat&action=edit)  
[ saturate_cast](saturate_cast.html "cpp/numeric/saturate cast")(C++26) |  returns an integer value clamped to the range of another integer type   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/dsc_saturate_cast&action=edit)  
[ clamp](../algorithm/clamp.html "cpp/algorithm/clamp")(C++17) |  clamps a value between a pair of boundary values   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/algorithm/dsc_clamp&action=edit)  
[ in_range](../utility/in_range.html "cpp/utility/in range")(C++20) |  checks if an integer value is in the range of a given integer type   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/utility/dsc_in_range&action=edit)  
[ min](../types/numeric_limits/min.html "cpp/types/numeric limits/min")[static] |  returns the smallest finite value of the given non-floating-point type, or the smallest positive normal value of the given floating-point type   
(public static member function of `std::numeric_limits<T>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/types/numeric_limits/dsc_min&action=edit)  
[ max](../types/numeric_limits/max.html "cpp/types/numeric limits/max")[static] |  returns the largest finite value of the given type   
(public static member function of `std::numeric_limits<T>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/types/numeric_limits/dsc_max&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/op_sat&action=edit&section=T-7 "Template:cpp/numeric/op sat")] External links

1\.  | [A branch-free implementation of saturation arithmetic](http://locklessinc.com/articles/sat_arithmetic/) — Locklessinc.com, 2012   
---|---  
2\.  | [C++ Weekly - Ep 459 - C++26's Saturating Math Operations](https://youtu.be/XNMnQOFrEIY) — Youtube.com, 2024-12-16 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
