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
| **midpoint**(C++20)  
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

Defined in header `[<numeric>](../header/numeric.html "cpp/header/numeric")` |  |   
---|---|---  
template< class T >  
constexpr T midpoint( T a, T b ) noexcept; |  (1)  |  (since C++20)  
template< class T >  
constexpr T* midpoint( T* a, T* b ); |  (2)  |  (since C++20)  
| |   
  
Computes the midpoint of the integers, floating-points, or pointers a and b. 

1) This overload participates in overload resolution only if `T` is an arithmetic type other than bool.

2) This overload participates in overload resolution only if `T` is an object type. Use of this overload is ill-formed if `T` is an [incomplete type](../language/type-id.html#Incomplete_type "cpp/language/type").

## Contents

  * [1 Parameters](midpoint.html#Parameters)
  * [2 Return value](midpoint.html#Return_value)
  * [3 Exceptions](midpoint.html#Exceptions)
  * [4 Notes](midpoint.html#Notes)
  * [5 Example](midpoint.html#Example)
  * [6 References](midpoint.html#References)
  * [7 See also](midpoint.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/midpoint&action=edit&section=1 "Edit section: Parameters")] Parameters 

a, b  |  \-  |  integers, floating-points, or pointer values   
---|---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/midpoint&action=edit&section=2 "Edit section: Return value")] Return value

1) Half the sum of a and b. No overflow occurs. If a and b have integer type and the sum is odd, the result is rounded towards a. If a and b have floating-point type, at most one inexact operation occurs.

2) If a and b point to, respectively, x[i] and x[j] of the same array object `x` (for the purpose of [pointer arithmetic](../language/operator_arithmetic.html#Additive_operators "cpp/language/operator arithmetic")), returns a pointer to x[i + (j - i) / 2] (or, equivalently x[std::midpoint(i, j)]) where the division rounds towards zero. If a and b do not point to elements of the same array object, the behavior is undefined.

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/midpoint&action=edit&section=3 "Edit section: Exceptions")] Exceptions 

Throws no exceptions. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/midpoint&action=edit&section=4 "Edit section: Notes")] Notes

Overload (2) can be simply implemented as return a + (b - a) / 2; on common platforms. However, such implementation is not guaranteed to be portable, because there may be some platforms where creating an array with number of elements greater than [PTRDIFF_MAX](../types/climits.html "cpp/types/climits") is possible, and b - a may result in undefined behavior even if both b and a point to elements in the same array. 

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_interpolate`](../experimental/feature_test.html#cpp_lib_interpolate "cpp/feature test") | [`201902L`](../compiler_support/20.html#cpp_lib_interpolate_201902L "cpp/compiler support/20") | (C++20) | [std::lerp](lerp.html "cpp/numeric/lerp"), `std::midpoint`  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/midpoint&action=edit&section=5 "Edit section: Example")] Example

Run this code
    
    
    #include <cstdint>
    #include <iostream>
    #include <limits>
    #include <numeric>
     
    int main()
    {
        [std::uint32_t](../types/integer.html) a = [std::numeric_limits](../types/numeric_limits.html)<[std::uint32_t](../types/integer.html)>::max();
        [std::uint32_t](../types/integer.html) b = [std::numeric_limits](../types/numeric_limits.html)<[std::uint32_t](../types/integer.html)>::max() - 2;
     
        [std::cout](../io/cout.html) << "a: " << a << '\n'
                  << "b: " << b << '\n'
                  << "Incorrect (overflow and wrapping): " << (a + b) / 2 << '\n'
                  << "Correct: " << std::midpoint(a, b) << "\n\n";
     
        auto on_pointers = [](int i, int j)
        {
            char const* text = "0123456789";
            char const* p = text + i;
            char const* q = text + j;
            [std::cout](../io/cout.html) << "std::midpoint('" << *p << "', '" << *q << "'): '"
                      << *std::midpoint(p, q) << "'\n";
        };
     
        on_pointers(2, 4);
        on_pointers(2, 5);
        on_pointers(5, 2);
        on_pointers(2, 6);
    }

Output: 
    
    
    a: 4294967295
    b: 4294967293
    Incorrect (overflow and wrapping): 2147483646
    Correct: 4294967294
     
    std::midpoint('2', '4'): '3'
    std::midpoint('2', '5'): '3'
    std::midpoint('5', '2'): '4'
    std::midpoint('2', '6'): '4'

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/midpoint&action=edit&section=6 "Edit section: References")] References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 27.10.16 Midpoint [numeric.ops.midpoint] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 25.10.15 Midpoint [numeric.ops.midpoint] 



### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/midpoint&action=edit&section=7 "Edit section: See also")] See also

[ lerp](lerp.html "cpp/numeric/lerp")(C++20) |  linear interpolation function   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/dsc_lerp&action=edit)  
---|---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
