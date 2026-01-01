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
[sub_sat](sub_sat.html "cpp/numeric/sub sat")(C++26)  
[mul_sat](mul_sat.html "cpp/numeric/mul sat")(C++26)  
[div_sat](div_sat.html "cpp/numeric/div sat")(C++26)  
**saturate_cast**(C++26)  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/sat_math/navbar_content&action=edit)

Defined in header `[<numeric>](../header/numeric.html "cpp/header/numeric")` |  |   
---|---|---  
template< class T, class U >  
constexpr T saturate_cast( U x ) noexcept; |  |  (since C++26)  
| |   
  
Converts the value x to a value of type `T`, clamping x between the minimum and maximum values of type `T`. 

The program is ill-formed if either `T` or `U` is not a signed or unsigned [integer type](../language/types.html#Integer_types "cpp/language/types") (including [standard integer type](../language/types.html#Standard_integer_types "cpp/language/types") and [extended integer type](../language/types.html#Extended_integer_types "cpp/language/types")). 

## Contents

  * [1 Parameters](saturate_cast.html#Parameters)
  * [2 Return value](saturate_cast.html#Return_value)
  * [3 Notes](saturate_cast.html#Notes)
  * [4 Possible implementation](saturate_cast.html#Possible_implementation)
  * [5 Example](saturate_cast.html#Example)
  * [6 See also](saturate_cast.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/saturate_cast&action=edit&section=1 "Edit section: Parameters")] Parameters

x  |  \-  |  an integer value   
---|---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/saturate_cast&action=edit&section=2 "Edit section: Return value")] Return value

  * x, if x is representable as a value of type `T`. Otherwise, 
  * either the largest or smallest representable value of type `T`, whichever is closer to the value of x. 



### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/saturate_cast&action=edit&section=3 "Edit section: Notes")] Notes

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_saturation_arithmetic`](../experimental/feature_test.html#cpp_lib_saturation_arithmetic "cpp/feature test") | [`202311L`](../compiler_support/26.html#cpp_lib_saturation_arithmetic_202311L "cpp/compiler support/26") | (C++26) | Saturation arithmetic   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/saturate_cast&action=edit&section=4 "Edit section: Possible implementation")] Possible implementation

See [libstdc++ (GCC)](https://github.com/gcc-mirror/gcc/blob/07fe07935ddb9228b4426dbfdb62d4a7e7337efe/libstdc%2B%2B-v3/include/bits/sat_arith.h#L106). 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/saturate_cast&action=edit&section=5 "Edit section: Example")] Example

Can be previewed on [Compiler Explorer](https://godbolt.org/z/5P149Y377).

Run this code
    
    
    #include <cstdint>
    #include <limits>
    #include <numeric>
     
    int main()
    {
        constexpr [std::int16_t](../types/integer.html) x1{696};
     
        constexpr [std::int8_t](../types/integer.html) x2 = std::saturate_cast<[std::int8_t](../types/integer.html)>(x1);
        static_assert(x2 == [std::numeric_limits](../types/numeric_limits.html)<[std::int8_t](../types/integer.html)>::max());
     
        constexpr [std::uint8_t](../types/integer.html) x3 = std::saturate_cast<[std::uint8_t](../types/integer.html)>(x1);
        static_assert(x3 == [std::numeric_limits](../types/numeric_limits.html)<[std::uint8_t](../types/integer.html)>::max());
     
        constexpr [std::int16_t](../types/integer.html) y1{-696};
     
        constexpr [std::int8_t](../types/integer.html) y2 = std::saturate_cast<[std::int8_t](../types/integer.html)>(y1);
        static_assert(y2 == [std::numeric_limits](../types/numeric_limits.html)<[std::int8_t](../types/integer.html)>::min());
     
        constexpr [std::uint8_t](../types/integer.html) y3 = std::saturate_cast<[std::uint8_t](../types/integer.html)>(y1);
        static_assert(y3 == 0);
    }

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/saturate_cast&action=edit&section=6 "Edit section: See also")] See also

[ bit_cast](bit_cast.html "cpp/numeric/bit cast")(C++20) |  reinterpret the object representation of one type as that of another   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/dsc_bit_cast&action=edit)  
---|---  
[ clamp](../algorithm/clamp.html "cpp/algorithm/clamp")(C++17) |  clamps a value between a pair of boundary values   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/algorithm/dsc_clamp&action=edit)  
[ in_range](../utility/in_range.html "cpp/utility/in range")(C++20) |  checks if an integer value is in the range of a given integer type   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/utility/dsc_in_range&action=edit)
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
