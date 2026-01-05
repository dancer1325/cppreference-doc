
  


[Numerics library](../numeric.html "cpp/numeric")

[Common mathematical functions](math.html "cpp/numeric/math")  
---  
[Mathematical special functions](special_math.html "cpp/numeric/special functions") (C++17)  
[Mathematical constants](constants.html "cpp/numeric/constants") (C++20)  
[Basic linear algebra algorithms](linalg.html "cpp/numeric/linalg") (C++26)  
**Data-parallel types (SIMD)** (C++26)  
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
  
  
  


**Data-parallel types (SIMD)**

| [Main classes](simd.html#Main_classes "cpp/numeric/simd")  
---  
[basic_simdsimd](simd/basic_simd.html "cpp/numeric/simd/basic simd")  
[basic_simd_masksimd_mask](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/simd/basic_simd_mask&action=edit&redlink=1 "cpp/numeric/simd/basic simd mask \(page does not exist\)")  
[Load and store flags](simd.html#Load_and_store_flags "cpp/numeric/simd")  
[flagsflag_defaultflag_convertflag_alignedflag_overaligned](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/simd/flags&action=edit&redlink=1 "cpp/numeric/simd/flags \(page does not exist\)")` `  
[Load and store](simd.html#Load_and_store_operations "cpp/numeric/simd")  
[unchecked_loadpartial_load](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/simd/load&action=edit&redlink=1 "cpp/numeric/simd/load \(page does not exist\)")  
[unchecked_storepartial_store](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/simd/simd_store&action=edit&redlink=1 "cpp/numeric/simd/simd store \(page does not exist\)")  
[Casts](simd.html#Casts "cpp/numeric/simd")  
[chunk](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/simd/chunk&action=edit&redlink=1 "cpp/numeric/simd/chunk \(page does not exist\)")  
[cat](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/simd/cat&action=edit&redlink=1 "cpp/numeric/simd/cat \(page does not exist\)")  
  
| [Algorithms](simd.html#Algorithms "cpp/numeric/simd")  
---  
[minmaxminmax](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/simd/min_max&action=edit&redlink=1 "cpp/numeric/simd/min max \(page does not exist\)")  
[clamp](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/simd/clamp&action=edit&redlink=1 "cpp/numeric/simd/clamp \(page does not exist\)")  
[select](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/simd/select&action=edit&redlink=1 "cpp/numeric/simd/select \(page does not exist\)")  
[Reductions](simd.html#Reductions "cpp/numeric/simd")  
[all_ofany_ofnone_of](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/simd/all_any_none_of&action=edit&redlink=1 "cpp/numeric/simd/all any none of \(page does not exist\)")  
[reducereduce_minreduce_max](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/simd/reduce&action=edit&redlink=1 "cpp/numeric/simd/reduce \(page does not exist\)")  
[reduce_min_indexreduce_max_index](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/simd/reduce_min_max_index&action=edit&redlink=1 "cpp/numeric/simd/reduce min max index \(page does not exist\)")  
[reduce_count](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/simd/reduce_count&action=edit&redlink=1 "cpp/numeric/simd/reduce count \(page does not exist\)")  
[Traits](simd.html#Traits "cpp/numeric/simd")  
[alignment](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/simd/alignment&action=edit&redlink=1 "cpp/numeric/simd/alignment \(page does not exist\)")  
[rebind](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/simd/rebind&action=edit&redlink=1 "cpp/numeric/simd/rebind \(page does not exist\)")  
[resize](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/simd/resize&action=edit&redlink=1 "cpp/numeric/simd/resize \(page does not exist\)")  
  


The library provides data-parallel types and operations on these types: portable types for explicitly stating data-parallelism and structuring data through data-parallel execution resources where available, such as [SIMD](https://en.wikipedia.org/wiki/Single_instruction,_multiple_data "enwiki:Single instruction, multiple data") registers and instructions or execution units that are driven by a common instruction decoder. 

The set of _vectorizable types_ comprises: 

  * all standard integers and character types; 
  * most floating-point types including float, double, and the selected extended floating-point types: [std::float16_t](../types/floating-point.html), [std::float32_t](../types/floating-point.html), and [std::float64_t](../types/floating-point.html) if defined; and 
  * [std::complex](complex.html)<T> where `T` is a vectorizable floating-point type. 



A _data-parallel type_ consists of one or more elements of an underlying vectorizable type, called the _element type ﻿_. The number of elements, called the _width ﻿_ , is constant for each data-parallel type. 

The data-parallel type refers to all enabled specializations of the class templates `basic_simd` and `basic_simd_mask`. 

A _data-parallel object_ of data-parallel type behaves analogously to objects of type `T`. But while `T` stores and manipulates a single value, the data-parallel type with the element type `T` stores and manipulates multiple values. 

Every operation on a data-parallel object acts _element-wise_ (except for horizontal operations, such as reductions, which are clearly marked as such) applying to each element of the object or to corresponding elements of two objects. Each such application is unsequenced with respect to the others. This simple rule expresses data-parallelism and will be used by the compiler to generate SIMD instructions and/or independent execution streams. 

All operations (except non-constexpr math function overloads) on data-parallel objects are constexpr: it is possible to create and use data-parallel objects in the evaluation of a constant expression. 

Alias templates `simd` and `simd_mask` are defined to allow users to specify the width to a certain size. The default width is determined by the implementation at compile-time. 

Defined in header `[<simd>](../header/simd.html "cpp/header/simd")`  
---  
Defined in namespace `std::datapar`  
  
## Contents

  * [1 Main classes](simd.html#Main_classes)
  * [2 Load and store flags](simd.html#Load_and_store_flags)
  * [3 Load and store operations](simd.html#Load_and_store_operations)
  * [4 Casts](simd.html#Casts)
  * [5 Algorithms](simd.html#Algorithms)
  * [6 Reductions](simd.html#Reductions)
  * [7 Traits](simd.html#Traits)
  * [8 Math functions](simd.html#Math_functions)
  * [9 Bit manipulation functions](simd.html#Bit_manipulation_functions)
  * [10 Implementation details](simd.html#Implementation_details)
    * [10.1 ABI tags](simd.html#ABI_tags)
    * [10.2 Exposition-only entities](simd.html#Exposition-only_entities)
  * [11 Notes](simd.html#Notes)
  * [12 Example](simd.html#Example)
  * [13 See also](simd.html#See_also)
  * [14 External links](simd.html#External_links)

  
---  
  
### Main classes

[ datapar::basic_simd](simd/basic_simd.html "cpp/numeric/simd/basic simd")(C++26) |  data-parallel vector type   
(class template)   
---|---  
[ datapar::simd](simd/basic_simd.html "cpp/numeric/simd/basic simd")(C++26) |  convenience alias template for `basic_simd` that can specify its width  
(alias template)  
[ datapar::basic_simd_mask](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/simd/basic_simd_mask&action=edit&redlink=1 "cpp/numeric/simd/basic simd mask \(page does not exist\)")(C++26) |  data-parallel type with the element type bool   
(class template)   
[ datapar::simd_mask](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/simd/basic_simd_mask&action=edit&redlink=1 "cpp/numeric/simd/basic simd mask \(page does not exist\)")(C++26) |  convenience alias template for `basic_simd_mask` that can specify its width  
(alias template)  
  
### Load and store flags

[ datapar::flags](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/simd/flags&action=edit&redlink=1 "cpp/numeric/simd/flags \(page does not exist\)")(C++26) |  load and store flags for data-parallel types   
(class template)   
---|---  
[ datapar::flag_default](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/simd/flags&action=edit&redlink=1 "cpp/numeric/simd/flags \(page does not exist\)")(C++26) |  default flag used on load and store operations   
(constant)   
[ datapar::flag_convert](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/simd/flags&action=edit&redlink=1 "cpp/numeric/simd/flags \(page does not exist\)")(C++26) |  flag enabling conversions that are not value-preserving on load and store operations   
(constant)   
[ datapar::flag_aligned](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/simd/flags&action=edit&redlink=1 "cpp/numeric/simd/flags \(page does not exist\)")(C++26) |  flag indicating alignment of the load-store address to some specified storage to the value of `datapar::alignment`   
(constant)   
[ datapar::flag_overaligned](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/simd/flags&action=edit&redlink=1 "cpp/numeric/simd/flags \(page does not exist\)")(C++26) |  flag indicating alignment of the load-store address to some specified storage to the specified alignment  
(variable template)  
  
### Load and store operations

[ datapar::unchecked_loaddatapar::partial_load](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/simd/load&action=edit&redlink=1 "cpp/numeric/simd/load \(page does not exist\)")(C++26) |  loads elements from a contiguous range to `basic_simd`   
(function template)   
---|---  
[ datapar::unchecked_storedatapar::partial_store](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/simd/store&action=edit&redlink=1 "cpp/numeric/simd/store \(page does not exist\)")(C++26) |  stores elements from `basic_simd` to a contiguous range   
(function template)   
  
### Casts

[ datapar::chunk](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/simd/chunk&action=edit&redlink=1 "cpp/numeric/simd/chunk \(page does not exist\)")(C++26) |  splits single data-parallel object to multiple ones   
(function template)   
---|---  
[ datapar::cat](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/simd/cat&action=edit&redlink=1 "cpp/numeric/simd/cat \(page does not exist\)")(C++26) |  concatenates multiple data-parallel objects into a single one   
(function template)   
  
### Algorithms

[ datapar::mindatapar::maxdatapar::minmax](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/simd/min_max&action=edit&redlink=1 "cpp/numeric/simd/min max \(page does not exist\)")(C++26) |  element-wise min/max operations for `basic_simd`   
(function template)   
---|---  
[ datapar::clamp](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/simd/clamp&action=edit&redlink=1 "cpp/numeric/simd/clamp \(page does not exist\)")(C++26) |  element-wise clamp operation for `basic_simd`   
(function template)   
[ datapar::select](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/simd/select&action=edit&redlink=1 "cpp/numeric/simd/select \(page does not exist\)")(C++26) |  element-wise selection using conditional operator   
(function template)   
  
### Reductions

[ datapar::reducedatapar::reduce_mindatapar::reduce_max](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/simd/reduce&action=edit&redlink=1 "cpp/numeric/simd/reduce \(page does not exist\)")(C++26) |  reduces all values in `basic_simd` over a specified binary operation to a single value   
(function template)   
---|---  
[ datapar::all_ofdatapar::any_ofdatapar::none_of](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/simd/all_any_none_of&action=edit&redlink=1 "cpp/numeric/simd/all any none of \(page does not exist\)")(C++26) |  reductions of `basic_simd_mask` to bool   
(function template)   
[ datapar::reduce_count](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/simd/reduce_count&action=edit&redlink=1 "cpp/numeric/simd/reduce count \(page does not exist\)")(C++26) |  reduction of `basic_simd_mask` to number of true values   
(function template)   
[ datapar::reduce_min_indexdatapar::reduce_max_index](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/simd/reduce_min_max_index&action=edit&redlink=1 "cpp/numeric/simd/reduce min max index \(page does not exist\)")(C++26) |  reductions of `basic_simd_mask` to the index of first or last true value   
(function template)   
  
### Traits

[ datapar::alignment](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/simd/alignment&action=edit&redlink=1 "cpp/numeric/simd/alignment \(page does not exist\)")(C++26) |  obtains an appropriate alignment for `datapar::flag_aligned`   
(class template)   
---|---  
[ datapar::rebind](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/simd/rebind&action=edit&redlink=1 "cpp/numeric/simd/rebind \(page does not exist\)")(C++26) |  changes element type of the data-parallel type   
(class template)   
[ datapar::resize](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/simd/resize&action=edit&redlink=1 "cpp/numeric/simd/resize \(page does not exist\)")(C++26) |  changes the width of the data-parallel type   
(class template)   
  
### Math functions

All functions in [`<cmath>`](../header/cmath.html "cpp/header/cmath") and [`<complex>`](../header/complex.html "cpp/header/complex") are overloaded for `basic_simd`. 

| This section is incomplete  
Reason: description   
---|---  
  
### Bit manipulation functions

All bit manipulation functions in [`<bit>`](../header/bit.html "cpp/header/bit") are overloaded for `basic_simd`. 

| This section is incomplete  
Reason: description   
---|---  
  
### Implementation details

#### ABI tags

The data-parallel types `basic_simd` and `basic_simd_mask` are associated with _ABI tags ﻿_. These tags are types that specify the size and binary representation of data-parallel objects. The design intends the size and binary representation to vary based on target architecture and compiler flags. The ABI tag, together with the element type, determines the width. 

The ABI tag remains independent of machine instruction set selection. The chosen machine instruction set limits the usable ABI tag types. The ABI tags enable users to safely pass objects of data-parallel type across translation unit boundaries. 

| This section is incomplete   
---|---  
  
#### Exposition-only entities

| This section is incomplete  
Reason: needs update   
---|---  
using /*simd-size-type*/ = /* see description */; |  (1) | (exposition only*)  
---|---|---  
template< [std::size_t](../types/size_t.html) Bytes >  
using /*integer-from*/ = /* see description */; |  (2) | (exposition only*)  
template< class T, class Abi >  
constexpr /*simd-size-type*/ /*simd-size-v*/ = /* see description */; |  (3) | (exposition only*)  
template< class T >  
constexpr [std::size_t](../types/size_t.html) /*mask-element-size*/ = /* see description */; |  (4) | (exposition only*)  
template< class T >  
concept /*constexpr-wrapper-like*/ = /* see description */; |  (5) | (exposition only*)  
template< class T >  
using /*deduced-simd-t*/ = /* see description */; |  (6) | (exposition only*)  
template< class V, class T >  
using /*make-compatible-simd-t*/ = /* see description */; |  (7) | (exposition only*)  
| |   
  
1) /*simd-size-type*/ is an alias for for a signed integer type. The implementation is free to choose any signed integer type.

2) /*integer-from*/<Bytes> is an alias for a signed integer type `T` such that sizeof(T) equals Bytes.

3) /*simd-size-v*/<T, Abi> denotes the width of the enabled specialization `basic_simd<T, Abi>`, or ​0​ otherwise.

4) If `T` denotes std::datapar::basic_simd_mask<Bytes, Abi>, /*mask-element-size*/<T> equals Bytes.

5) The concept /*constexpr-wrapper-like*/ is defined as: 
    
    
    template< class T >
    concept /*constexpr-wrapper-like*/ =
        [std::convertible_to](../concepts/convertible_to.html)<T, decltype(T::value)> &&
        [std::equality_comparable_with](../concepts/equality_comparable.html)<T, decltype(T::value)> &&
        [std::bool_constant](../types/integral_constant.html)<T() == T::value>::value &&
        [std::bool_constant](../types/integral_constant.html)<static_cast<decltype(T::value)>(T()) == T::value>::value;

6) Let x be an lvalue of type const T. /*deduced-simd-t*/<T> is an alias equivalent to: 

  * decltype(x + x), if the type of x + x is an enabled specialization of `basic_simd`; otherwise 
  * void.



7) Let x be an lvalue of type const T. /*make-compatible-simd-t*/<V, T> is an alias equivalent to: 

  * /*deduced-simd-t*/<T>, if that type is not void, otherwise 
  * std::datapar::simd<decltype(x + x), V​::​size()>.



Math functions requirements |  |   
---|---|---  
template< class V >  
concept /*simd-floating-point*/ = /* see description */; |  (8) | (exposition only*)  
template< class... Ts >  
concept /*math-floating-point*/ = /* see description */; |  (9) | (exposition only*)  
template< class... Ts >  
requires /*math-floating-point*/<Ts...>  
using /*math-common-simd-t*/ = /* see description */; |  (10) | (exposition only*)  
template< class BinaryOp, class T >  
concept /*reduction-binary-operation*/ = /* see description */; |  (11) | (exposition only*)  
| |   
  
8) The concept /*simd-floating-point*/ is defined as: 
    
    
    template< class V >
    concept /*simd-floating-point*/ =
        [std::same_as](../concepts/same_as.html)<V,
                     std::datapar::basic_simd<typename V::value_type,
                     typename V::abi_type>> &&
        [std::is_default_constructible_v](../types/is_default_constructible.html)<V> && 
        [std::floating_point](../concepts/floating_point.html)<typename V::value_type>;

9) The concept /*math-floating-point*/ is defined as: 
    
    
    template< class... Ts >
    concept /*math-floating-point*/ =
        (/*simd-floating-point*/</*deduced-simd-t*/<Ts>> || ...);

10) Let `T0` denote Ts...[0], `T1` denote Ts...[1], and `TRest` denote a pack such that T0, T1, TRest... is equivalent to Ts.... Then, /*math-common-simd-t*/<Ts...> is an alias equivalent to: 

  * /*deduced-simd-t*/<T0>, if sizeof...(Ts) == 1 is true
  * otherwise, [std::common_type_t](../types/common_type.html)</*deduced-simd-t*/<T0>, /*deduced-simd-t*/<T1>>, if sizeof...(Ts) == 2 is true and /*math-floating-point*/<T0> && /*math-floating-point*/<T1> is true, 
  * otherwise, [std::common_type_t](../types/common_type.html)</*deduced-simd-t*/<T0>, T1> if sizeof...(Ts) == 2 is true and /*math-floating-point*/<T0> is true, 
  * otherwise, [std::common_type_t](../types/common_type.html)<T0, /*deduced-simd-t*/<T1>> if sizeof...(Ts) == 2 is true, 
  * otherwise, [std::common_type_t](../types/common_type.html)</*math-common-simd-t*/<T0, T1>, TRest...>, if /*math-common-simd-t*/<T0, T1> is a valid type, 
  * otherwise, [std::common_type_t](../types/common_type.html)</*math-common-simd-t*/<TRest...>, T0, T1>.



11) The concept /*reduction-binary-operation*/ is defined as: 
    
    
    template< class BinaryOp, class T >
    concept /*reduction-binary-operation*/ =
        requires (const BinaryOp binary_op, const std::datapar::simd<T, 1> v) {
            { binary_op(v, v) } -> [std::same_as](../concepts/same_as.html)<std::datapar::simd<T, 1>>;
        };

/*reduction-binary-operation*/<BinaryOp, T> is modeled only if: 

    

  * `BinaryOp` is a binary element-wise operation that is commutative, and 
  * An object of type `BinaryOp` is invocable with two arguments of type std::datapar::basic_simd<T, Abi> for unspecified ABI tag `Abi` that returns a std::datapar::basic_simd<T, Abi>.



SIMD ABI tags |  |   
---|---|---  
template< class T >  
using /*native-abi*/ = /* see description */; |  (12) | (exposition only*)  
template< class T, /*simd-size-type*/ N >  
using /*deduce-abi-t*/ = /* see description */; |  (13) | (exposition only*)  
| |   
  
12) /*native-abi*/<T> is an implementation-defined alias for an ABI tag. This is the primary ABI tag to use for efficient explicit vectorization. As a result, basic_simd<T, /*native-abi*/<T>> is an enabled specialization.

13) /*deduce-abi-t*/<T, N> is an alias that names an ABI tag type such that: 

  * /*simd-size-v*/<T, /*deduce-abi-t*/<T, N>> equals N, 
  * std::datapar::basic_simd<T, /*deduce-abi-t*/<T, N>> is an enabled specialization, and 
  * std::datapar::basic_simd_mask<sizeof(T), /*deduce-abi-t*/</*integer-from*/<sizeof(T)>, N>> is an enabled specialization. 

It is defined only if `T` is a vectorizable type, and N > 0 && N <= M is true, where M is an implementation-defined maximum that is at least 64 and can differ depending on `T`.

Load and store flags |  |   
---|---|---  
struct /*convert-flag*/; |  (14) | (exposition only*)  
struct /*aligned-flag*/; |  (15) | (exposition only*)  
template< [std::size_t](../types/size_t.html) N >  
struct /*overaligned-flag*/; |  (16) | (exposition only*)  
| |   
  
14-16) These tag types are used as a template argument of `std::datapar::flags`. See [load and store flags](https://en.cppreference.com/mwiki/index.php?title=cpp/numeric/simd/flags&action=edit&redlink=1 "cpp/numeric/simd/flags \(page does not exist\)") for their corresponding uses.

### Notes

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_simd`](../experimental/feature_test.html#cpp_lib_simd "cpp/feature test") | [`202411L`](../compiler_support/26.html#cpp_lib_simd_202411L "cpp/compiler support/26") | (C++26) | Data-parallel types and operations   
[`__cpp_lib_simd_complex`](../experimental/feature_test.html#cpp_lib_simd_complex "cpp/feature test") | [`202502L`](../compiler_support/26.html#cpp_lib_simd_complex_202502L "cpp/compiler support/26") | (C++26) | Support of interleaved complex values in `std::datapar::simd`  
  
### Example

Run this code
    
    
    #include <iostream>
    #include <simd>
    #include <string_view>
     
    void println([std::string_view](../string/basic_string_view.html) name, auto const& a)
    {
        [std::cout](../io/cout.html) << name << ": ";
        for ([std::size_t](../types/size_t.html) i{}; i != a.size(); ++i)
            [std::cout](../io/cout.html) << a[i] << ' ';
        [std::cout](../io/cout.html) << '\n';
    }
     
    template<class A>
    constexpr std::datapar::basic_simd<int, A> my_abs(std::datapar::basic_simd<int, A> x)
    {
        return std::datapar::select(x < 0, -x, x);
    }
     
    int main()
    {
        constexpr std::datapar::simd<int> a = 1;
        println("a", a);
     
        constexpr std::datapar::simd<int> b([](int i) { return i - 2; });
        println("b", b);
     
        constexpr auto c = a + b;
        println("c", c);
     
        constexpr auto d = my_abs(c);
        println("d", d);
     
        constexpr auto e = d * d;
        println("e", e);
     
        constexpr auto inner_product = std::datapar::reduce(e);
        [std::cout](../io/cout.html) << "inner product: " << inner_product << '\n';
     
        constexpr std::datapar::simd<double, 16> x([](int i) { return i; });
        println("x", x);
        // overloaded math functions are defined in <simd>
        println("cos²(x) + sin²(x)", [std::pow](math/pow.html)([std::cos](math/cos.html)(x), 2) + [std::pow](math/pow.html)([std::sin](math/sin.html)(x), 2));
    }

Output: 
    
    
    a: 1 1 1 1 
    b: -2 -1 0 1 
    c: -1 0 1 2 
    d: 1 0 1 2 
    e: 1 0 1 4 
    inner product: 6
    x: 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 
    cos²(x) + sin²(x): 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1

### See also

[ valarray](valarray.html "cpp/numeric/valarray") |  numeric arrays, array masks and array slices   
(class template)   
---|---  
  
### External links

1\.  | [The implementation of ISO/IEC TS 19570:2018 Section 9 "Data-Parallel Types"](https://github.com/VcDevel/std-simd) — github.com   
---|---  
2\.  | TS implementation reach for [GCC/libstdc++](https://gcc.gnu.org/git/?p=gcc.git;a=blob;f=libstdc%2B%2B-v3/include/experimental/simd;hb=HEAD) (`std::experimental::simd` is shipping with GCC-11) — gcc.gnu.org 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
