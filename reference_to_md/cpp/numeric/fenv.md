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
**Floating-point environment** (C++11)  
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

**Floating-point environment**

Functions  
---  
[feclearexcept](fenv/feclearexcept.html "cpp/numeric/fenv/feclearexcept")(C++11)  
[fetestexcept](fenv/fetestexcept.html "cpp/numeric/fenv/fetestexcept")(C++11)  
[feraiseexcept](fenv/feraiseexcept.html "cpp/numeric/fenv/feraiseexcept")(C++11)  
[fegetexceptflagfesetexceptflag](fenv/feexceptflag.html "cpp/numeric/fenv/feexceptflag")(C++11)(C++11)  
[fegetroundfesetround](fenv/feround.html "cpp/numeric/fenv/feround")(C++11)(C++11)  
[fegetenvfesetenv](fenv/feenv.html "cpp/numeric/fenv/feenv")(C++11)(C++11)  
[feholdexcept](fenv/feholdexcept.html "cpp/numeric/fenv/feholdexcept")(C++11)  
[feupdateenv](fenv/feupdateenv.html "cpp/numeric/fenv/feupdateenv")(C++11)  
Macro constants  
[FE_ALL_EXCEPTFE_DIVBYZEROFE_INEXACTFE_INVALIDFE_OVERFLOWFE_UNDERFLOW](fenv/FE_exceptions.html "cpp/numeric/fenv/FE exceptions")(C++11)(C++11)(C++11)(C++11)(C++11)(C++11)  
[FE_DOWNWARDFE_TONEARESTFE_TOWARDZEROFE_UPWARD](fenv/FE_round.html "cpp/numeric/fenv/FE round")(C++11)(C++11)(C++11)(C++11)  
[FE_DFL_ENV](fenv/FE_DFL_ENV.html "cpp/numeric/fenv/FE DFL ENV")(C++11)  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/fenv/navbar_content&action=edit)

The floating-point environment is the set of floating-point status flags and control modes supported by the implementation. It is thread-local. Each thread inherits the initial state of its floating-point environment from the parent thread. Floating-point operations modify the floating-point status flags to indicate abnormal results or auxiliary information. The state of floating-point control modes affects the outcomes of some floating-point operations. 

The floating-point environment access and modification is only meaningful when [` #pragma STDC FENV_ACCESS`](../preprocessor/impl.html "cpp/preprocessor/impl") is supported and is set to `ON`. Otherwise the implementation is free to assume that floating-point control modes are always the default ones and that floating-point status flags are never tested or modified. In practice, few current compilers, such as HP aCC, Oracle Studio, or IBM XL, support the `#pragma` explicitly, but most compilers allow meaningful access to the floating-point environment anyway. 

## Contents

  * [1 Types](fenv.html#Types)
  * [2 Functions](fenv.html#Functions)
  * [3 Macros](fenv.html#Macros)
  * [4 Notes](fenv.html#Notes)
  * [5 See also](fenv.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/fenv&action=edit&section=1 "Edit section: Types")] Types

Defined in header `[<cfenv>](../header/cfenv.html "cpp/header/cfenv")`  
---  
fenv_t(C++11) |  the type representing the entire floating-point environment   
(typedef) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/fenv/dsc_fenv_t&action=edit)  
fexcept_t(C++11) |  the type representing all floating-point status flags collectively   
(typedef) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/fenv/dsc_fexcept_t&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/fenv&action=edit&section=2 "Edit section: Functions")] Functions

[ feclearexcept](fenv/feclearexcept.html "cpp/numeric/fenv/feclearexcept")(C++11) |  clears the specified floating-point status flags   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/fenv/dsc_feclearexcept&action=edit)  
---|---  
[ fetestexcept](fenv/fetestexcept.html "cpp/numeric/fenv/fetestexcept")(C++11) |  determines which of the specified floating-point status flags are set   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/fenv/dsc_fetestexcept&action=edit)  
[ feraiseexcept](fenv/feraiseexcept.html "cpp/numeric/fenv/feraiseexcept")(C++11) |  raises the specified floating-point exceptions   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/fenv/dsc_feraiseexcept&action=edit)  
[ fegetexceptflagfesetexceptflag](fenv/feexceptflag.html "cpp/numeric/fenv/feexceptflag")(C++11)(C++11) |  copies the state of the specified floating-point status flags from or to the floating-point environment   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/fenv/dsc_feexceptflag&action=edit)  
[ fegetroundfesetround](fenv/feround.html "cpp/numeric/fenv/feround")(C++11)(C++11) |  gets or sets rounding direction   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/fenv/dsc_feround&action=edit)  
[ fegetenvfesetenv](fenv/feenv.html "cpp/numeric/fenv/feenv")(C++11) |  saves or restores the current floating-point environment   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/fenv/dsc_feenv&action=edit)  
[ feholdexcept](fenv/feholdexcept.html "cpp/numeric/fenv/feholdexcept")(C++11) |  saves the environment, clears all status flags and ignores all future errors   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/fenv/dsc_feholdexcept&action=edit)  
[ feupdateenv](fenv/feupdateenv.html "cpp/numeric/fenv/feupdateenv")(C++11) |  restores the floating-point environment and raises the previously raised exceptions   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/fenv/dsc_feupdateenv&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/fenv&action=edit&section=3 "Edit section: Macros")] Macros

[ FE_ALL_EXCEPTFE_DIVBYZEROFE_INEXACTFE_INVALIDFE_OVERFLOWFE_UNDERFLOW](fenv/FE_exceptions.html "cpp/numeric/fenv/FE exceptions")(C++11) |  floating-point exceptions   
(macro constant) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/fenv/dsc_FE_exceptions&action=edit)  
---|---  
[ FE_DOWNWARDFE_TONEARESTFE_TOWARDZEROFE_UPWARD](fenv/FE_round.html "cpp/numeric/fenv/FE round")(C++11) |  floating-point rounding direction   
(macro constant) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/fenv/dsc_FE_round&action=edit)  
[ FE_DFL_ENV](fenv/FE_DFL_ENV.html "cpp/numeric/fenv/FE DFL ENV")(C++11) |  default floating-point environment   
(macro constant) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/fenv/dsc_FE_DFL_ENV&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/fenv&action=edit&section=4 "Edit section: Notes")] Notes

The floating-point exceptions are not related to the C++ exceptions. When a floating-point operation raises a floating-point exception, the status of the floating-point environment changes, which can be tested with [std::fetestexcept](fenv/fetestexcept.html "cpp/numeric/fenv/fetestexcept"), but the execution of a C++ program on most implementations continues uninterrupted. 

There are compiler extensions that may be used to generate C++ exceptions automatically whenever a floating-point exception is raised: 

  * GNU libc function [`feenableexcept()`](https://www.gnu.org/savannah-checkouts/gnu/libc/manual/html_node/Control-Functions.html) enables trapping of the floating-point exceptions, which generates the signal `SIGFPE`. If the compiler option `-fnon-call-exceptions` was used, the handler for that signal may throw a user-defined C++ exception. 
  * MSVC function [`_control87()`](https://learn.microsoft.com/en-us/cpp/c-runtime-library/reference/control87-controlfp-control87-2) enables trapping of the floating-point exceptions, which generates a hardware exception, which can be converted to C++ exceptions with [`_set_se_translator`](https://learn.microsoft.com/en-us/cpp/c-runtime-library/reference/set-se-translator). 



### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/fenv&action=edit&section=5 "Edit section: See also")] See also

[C documentation](../../c/numeric/fenv.html "c/numeric/fenv") for Floating-point environment  
---
