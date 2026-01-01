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
**Numeric array (`valarray`)**  
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

**`std::valarray`**

[Member functions](valarray.html#Member_functions "cpp/numeric/valarray")  
---  
| [valarray::valarray](valarray/valarray.html "cpp/numeric/valarray/valarray")  
---  
[valarray::~valarray](valarray/~valarray.html "cpp/numeric/valarray/~valarray")  
[valarray::operator=](valarray/operator=.html "cpp/numeric/valarray/operator=")  
[valarray::operator[]](valarray/operator_at.html "cpp/numeric/valarray/operator at")  
[valarray::swap](valarray/swap.html "cpp/numeric/valarray/swap")  
[valarray::size](valarray/size.html "cpp/numeric/valarray/size")  
[valarray::resize](valarray/resize.html "cpp/numeric/valarray/resize")  
[valarray::sum](valarray/sum.html "cpp/numeric/valarray/sum")  
[valarray::min](valarray/min.html "cpp/numeric/valarray/min")  
[valarray::max](valarray/max.html "cpp/numeric/valarray/max")  
[valarray::shift](valarray/shift.html "cpp/numeric/valarray/shift")  
[valarray::cshift](valarray/cshift.html "cpp/numeric/valarray/cshift")  
[valarray::apply](valarray/apply.html "cpp/numeric/valarray/apply")  
  
  
  
| [valarray::operator+valarray::operator-valarray::operator~valarray::operator!](valarray/operator_arith.html "cpp/numeric/valarray/operator arith")  
---  
[valarray::operator+=valarray::operator-=valarray::operator*=valarray::operator/=valarray::operator%=valarray::operator&=valarray::operator|=valarray::operator^=valarray::operator<<=valarray::operator>>=](valarray/operator_arith2.html "cpp/numeric/valarray/operator arith2")  
  
[Non-member functions](valarray.html#Non-member_functions "cpp/numeric/valarray")  
| [swap(std::valarray)](valarray/swap2.html "cpp/numeric/valarray/swap2")(C++11)  
---  
[begin(std::valarray)](valarray/begin2.html "cpp/numeric/valarray/begin2")(C++11)` `  
[end(std::valarray)](valarray/end2.html "cpp/numeric/valarray/end2")(C++11)  
[abs](valarray/abs.html "cpp/numeric/valarray/abs")  
[exp](valarray/exp.html "cpp/numeric/valarray/exp")  
[log](valarray/log.html "cpp/numeric/valarray/log")  
[log10](valarray/log10.html "cpp/numeric/valarray/log10")  
[pow](valarray/pow.html "cpp/numeric/valarray/pow")  
[sqrt](valarray/sqrt.html "cpp/numeric/valarray/sqrt")  
[sin](valarray/sin.html "cpp/numeric/valarray/sin")  
[cos](valarray/cos.html "cpp/numeric/valarray/cos")  
[tan](valarray/tan.html "cpp/numeric/valarray/tan")  
[asin](valarray/asin.html "cpp/numeric/valarray/asin")  
[acos](valarray/acos.html "cpp/numeric/valarray/acos")  
[atan](valarray/atan.html "cpp/numeric/valarray/atan")  
[atan2](valarray/atan2.html "cpp/numeric/valarray/atan2")  
[sinh](valarray/sinh.html "cpp/numeric/valarray/sinh")  
[cosh](valarray/cosh.html "cpp/numeric/valarray/cosh")  
[tanh](valarray/tanh.html "cpp/numeric/valarray/tanh")  
  
| [operator*operator/operator%operator+operator-operator^operator&operator|operator<<operator>>operator&&operator||](valarray/operator_arith3.html "cpp/numeric/valarray/operator arith3")  
---  
[operator==operator!=operator<operator>operator<=operator>=](valarray/operator_cmp.html "cpp/numeric/valarray/operator cmp")  
  
  
  
[Helper classes](valarray.html#Helper_classes "cpp/numeric/valarray")  
| [slice_array](valarray/slice_array.html "cpp/numeric/valarray/slice array")  
---  
[gslice_array](valarray/gslice_array.html "cpp/numeric/valarray/gslice array")  
[indirect_array](valarray/indirect_array.html "cpp/numeric/valarray/indirect array")  
  
| [slice](valarray/slice.html "cpp/numeric/valarray/slice")  
---  
[gslice](valarray/gslice.html "cpp/numeric/valarray/gslice")  
[mask_array](valarray/mask_array.html "cpp/numeric/valarray/mask array")  
  
[Deduction guides](valarray/deduction_guides.html "cpp/numeric/valarray/deduction guides") (C++17)  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/valarray/navbar_content&action=edit)

Defined in header `[<valarray>](../header/valarray.html "cpp/header/valarray")` |  |   
---|---|---  
template< class T >  
class valarray; |  |   
| |   
  
`std::valarray` is the class for representing and manipulating arrays of values. It supports element-wise mathematical operations and various forms of generalized subscript operators, slicing and indirect access. 

## Contents

  * [1 Notes](valarray.html#Notes)
  * [2 Template parameters](valarray.html#Template_parameters)
  * [3 Member types](valarray.html#Member_types)
  * [4 Member functions](valarray.html#Member_functions)
  * [5 Non-member functions](valarray.html#Non-member_functions)
    * [5.1 Exponential functions](valarray.html#Exponential_functions)
    * [5.2 Power functions](valarray.html#Power_functions)
    * [5.3 Trigonometric functions](valarray.html#Trigonometric_functions)
    * [5.4 Hyperbolic functions](valarray.html#Hyperbolic_functions)
  * [6 Helper classes](valarray.html#Helper_classes)
  * [7 Deduction guides(since C++17)](valarray.html#Deduction_guides.28since_C.2B.2B17.29)
  * [8 See also](valarray.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/valarray&action=edit&section=1 "Edit section: Notes")] Notes

`std::valarray` and helper classes are defined to be free of certain forms of aliasing, thus allowing operations on these classes to be optimized similar to the effect of the keyword [`restrict`](../../c/language/restrict.html "c/language/restrict") in the C programming language. In addition, functions and operators that take `valarray` arguments are allowed to return proxy objects to make it possible for the compiler to optimize an expression such as v1 = a * v2 + v3; as a single loop that executes v1[i] = a * v2[i] + v3[i]; avoiding any temporaries or multiple passes. However, [expression templates](https://en.wikipedia.org/wiki/expression_templates "enwiki:expression templates") make the same optimization technique available for any C++ container, and the majority of numeric libraries prefer expression templates to valarrays for flexibility. Some C++ standard library implementations use expression templates to implement efficient operations on `std::valarray` (e.g. GNU libstdc++ and LLVM libc++). Only rarely are valarrays optimized any further, as in e.g. [Intel Integrated Performance Primitives](https://software.intel.com/en-us/node/684140). 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/valarray&action=edit&section=2 "Edit section: Template parameters")] Template parameters

T  |  \-  |  the type of the elements. The type must meet the [NumericType](../named_req/NumericType.html "cpp/named req/NumericType") requirements   
---|---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/valarray&action=edit&section=3 "Edit section: Member types")] Member types

Member type  |  Definition   
---|---  
`value_type` |  `T`  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/valarray&action=edit&section=4 "Edit section: Member functions")] Member functions

[ (constructor)](valarray/valarray.html "cpp/numeric/valarray/valarray") |  constructs new numeric array   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/valarray/dsc_valarray&action=edit)  
---|---  
[ (destructor)](valarray/~valarray.html "cpp/numeric/valarray/~valarray") |  destructs the numeric array   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/valarray/dsc_%7Evalarray&action=edit)  
[ operator=](valarray/operator=.html "cpp/numeric/valarray/operator=") |  assigns the contents   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/valarray/dsc_operator%3D&action=edit)  
[ operator[]](valarray/operator_at.html "cpp/numeric/valarray/operator at") |  get/set valarray element, slice, or mask   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/valarray/dsc_operator_at&action=edit)  
[ operator+operator-operator~operator!](valarray/operator_arith.html "cpp/numeric/valarray/operator arith") |  applies a unary arithmetic operator to each element of the valarray   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/valarray/dsc_operator_arith&action=edit)  
[ operator+=operator-=operator*=operator/=operator%=operator&=operator|=operator^=operator<<=operator>>=](valarray/operator_arith2.html "cpp/numeric/valarray/operator arith2") |  applies compound assignment operator to each element of the valarray   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/valarray/dsc_operator_arith2&action=edit)  
[ swap](valarray/swap.html "cpp/numeric/valarray/swap") |  swaps with another valarray   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/valarray/dsc_swap&action=edit)  
[ size](valarray/size.html "cpp/numeric/valarray/size") |  returns the size of valarray   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/valarray/dsc_size&action=edit)  
[ resize](valarray/resize.html "cpp/numeric/valarray/resize") |  changes the size of valarray   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/valarray/dsc_resize&action=edit)  
[ sum](valarray/sum.html "cpp/numeric/valarray/sum") |  calculates the sum of all elements   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/valarray/dsc_sum&action=edit)  
[ min](valarray/min.html "cpp/numeric/valarray/min") |  returns the smallest element   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/valarray/dsc_min&action=edit)  
[ max](valarray/max.html "cpp/numeric/valarray/max") |  returns the largest element   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/valarray/dsc_max&action=edit)  
[ shift](valarray/shift.html "cpp/numeric/valarray/shift") |  zero-filling shift the elements of the valarray   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/valarray/dsc_shift&action=edit)  
[ cshift](valarray/cshift.html "cpp/numeric/valarray/cshift") |  circular shift of the elements of the valarray   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/valarray/dsc_cshift&action=edit)  
[ apply](valarray/apply.html "cpp/numeric/valarray/apply") |  applies a function to every element of a valarray   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/valarray/dsc_apply&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/valarray&action=edit&section=5 "Edit section: Non-member functions")] Non-member functions

[ std::swap(std::valarray)](valarray/swap2.html "cpp/numeric/valarray/swap2")(C++11) |  specializes the [std::swap](../utility/swap.html "cpp/algorithm/swap") algorithm   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/valarray/dsc_swap2&action=edit)  
---|---  
[ std::begin(std::valarray)](valarray/begin2.html "cpp/numeric/valarray/begin2")(C++11) |  overloads [std::begin](../iterator/begin.html "cpp/iterator/begin")   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/valarray/dsc_begin2&action=edit)  
[ std::end(std::valarray)](valarray/end2.html "cpp/numeric/valarray/end2")(C++11) |  specializes [std::end](../iterator/end.html "cpp/iterator/end")   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/valarray/dsc_end2&action=edit)  
[ operator+operator-operator*operator/operator%operator&operator|operator^operator<<operator>>operator&&operator||](valarray/operator_arith3.html "cpp/numeric/valarray/operator arith3") |  applies binary operators to each element of two valarrays, or a valarray and a value   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/valarray/dsc_operator_arith3&action=edit)  
[ operator==operator!=operator<operator<=operator>operator>=](valarray/operator_cmp.html "cpp/numeric/valarray/operator cmp") |  compares two valarrays or a valarray with a value   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/valarray/dsc_operator_cmp&action=edit)  
[ abs(std::valarray)](valarray/abs.html "cpp/numeric/valarray/abs") |  applies the function abs to each element of valarray   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/valarray/dsc_abs&action=edit)  
  
#####  Exponential functions   
  
[ exp(std::valarray)](valarray/exp.html "cpp/numeric/valarray/exp") |  applies the function [std::exp](math/exp.html "cpp/numeric/math/exp") to each element of valarray   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/valarray/dsc_exp&action=edit)  
[ log(std::valarray)](valarray/log.html "cpp/numeric/valarray/log") |  applies the function [std::log](math/log.html "cpp/numeric/math/log") to each element of valarray   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/valarray/dsc_log&action=edit)  
[ log10(std::valarray)](valarray/log10.html "cpp/numeric/valarray/log10") |  applies the function [std::log10](math/log10.html "cpp/numeric/math/log10") to each element of valarray   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/valarray/dsc_log10&action=edit)  
  
#####  Power functions   
  
[ pow(std::valarray)](valarray/pow.html "cpp/numeric/valarray/pow") |  applies the function [std::pow](math/pow.html "cpp/numeric/math/pow") to two valarrays or a valarray and a value   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/valarray/dsc_pow&action=edit)  
[ sqrt(std::valarray)](valarray/sqrt.html "cpp/numeric/valarray/sqrt") |  applies the function [std::sqrt](math/sqrt.html "cpp/numeric/math/sqrt") to each element of valarray   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/valarray/dsc_sqrt&action=edit)  
  
#####  Trigonometric functions   
  
[ sin(std::valarray)](valarray/sin.html "cpp/numeric/valarray/sin") |  applies the function [std::sin](math/sin.html "cpp/numeric/math/sin") to each element of valarray   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/valarray/dsc_sin&action=edit)  
[ cos(std::valarray)](valarray/cos.html "cpp/numeric/valarray/cos") |  applies the function [std::cos](math/cos.html "cpp/numeric/math/cos") to each element of valarray   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/valarray/dsc_cos&action=edit)  
[ tan(std::valarray)](valarray/tan.html "cpp/numeric/valarray/tan") |  applies the function [std::tan](math/tan.html "cpp/numeric/math/tan") to each element of valarray   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/valarray/dsc_tan&action=edit)  
[ asin(std::valarray)](valarray/asin.html "cpp/numeric/valarray/asin") |  applies the function [std::asin](math/asin.html "cpp/numeric/math/asin") to each element of valarray   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/valarray/dsc_asin&action=edit)  
[ acos(std::valarray)](valarray/acos.html "cpp/numeric/valarray/acos") |  applies the function [std::acos](math/acos.html "cpp/numeric/math/acos") to each element of valarray   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/valarray/dsc_acos&action=edit)  
[ atan(std::valarray)](valarray/atan.html "cpp/numeric/valarray/atan") |  applies the function [std::atan](math/atan.html "cpp/numeric/math/atan") to each element of valarray   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/valarray/dsc_atan&action=edit)  
[ atan2(std::valarray)](valarray/atan2.html "cpp/numeric/valarray/atan2") |  applies the function [std::atan2](math/atan2.html "cpp/numeric/math/atan2") to a valarray and a value   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/valarray/dsc_atan2&action=edit)  
  
#####  Hyperbolic functions   
  
[ sinh(std::valarray)](valarray/sinh.html "cpp/numeric/valarray/sinh") |  applies the function [std::sinh](math/sinh.html "cpp/numeric/math/sinh") to each element of valarray   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/valarray/dsc_sinh&action=edit)  
[ cosh(std::valarray)](valarray/cosh.html "cpp/numeric/valarray/cosh") |  applies the function [std::cosh](math/cosh.html "cpp/numeric/math/cosh") to each element of valarray   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/valarray/dsc_cosh&action=edit)  
[ tanh(std::valarray)](valarray/tanh.html "cpp/numeric/valarray/tanh") |  applies the function [std::tanh](math/tanh.html "cpp/numeric/math/tanh") to each element of valarray   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/valarray/dsc_tanh&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/valarray&action=edit&section=6 "Edit section: Helper classes")] Helper classes

[ slice](valarray/slice.html "cpp/numeric/valarray/slice") |  BLAS-like slice of a valarray: starting index, length, stride   
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/valarray/dsc_slice&action=edit)  
---|---  
[ slice_array](valarray/slice_array.html "cpp/numeric/valarray/slice array") |  proxy to a subset of a valarray after applying a slice   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/valarray/dsc_slice_array&action=edit)  
[ gslice](valarray/gslice.html "cpp/numeric/valarray/gslice") |  generalized slice of a valarray: starting index, set of lengths, set of strides   
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/valarray/dsc_gslice&action=edit)  
[ gslice_array](valarray/gslice_array.html "cpp/numeric/valarray/gslice array") |  proxy to a subset of a valarray after applying a gslice   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/valarray/dsc_gslice_array&action=edit)  
[ mask_array](valarray/mask_array.html "cpp/numeric/valarray/mask array") |  proxy to a subset of a valarray after applying a boolean mask `operator[]`   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/valarray/dsc_mask_array&action=edit)  
[ indirect_array](valarray/indirect_array.html "cpp/numeric/valarray/indirect array") |  proxy to a subset of a valarray after applying indirect `operator[]`   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/valarray/dsc_indirect_array&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/valarray&action=edit&section=7 "Edit section: Deduction guides\(since C++17\)")] [Deduction guides](valarray/deduction_guides.html "cpp/numeric/valarray/deduction guides")(since C++17)

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/valarray&action=edit&section=8 "Edit section: See also")] See also

[ datapar::simd](simd/basic_simd.html "cpp/numeric/simd/basic simd")(C++26) |  convenience alias template for `basic_simd` that can specify its width  
(alias template)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/simd/dsc_simd&action=edit)  
---|---  
[ datapar::simd_mask](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/simd/basic_simd_mask&action=edit&redlink=1 "cpp/numeric/simd/basic simd mask \(page does not exist\)")(C++26) |  convenience alias template for `basic_simd_mask` that can specify its width  
(alias template)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/simd/dsc_simd_mask&action=edit)  
[ simd](../experimental/simd/simd.html "cpp/experimental/simd/simd")(parallelism TS v2) |  data-parallel vector type   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/simd/dsc_simd&action=edit)  
[ simd_mask](../experimental/simd/simd_mask.html "cpp/experimental/simd/simd mask")(parallelism TS v2) |  data-parallel type with the element type bool   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/simd/dsc_simd_mask&action=edit)
