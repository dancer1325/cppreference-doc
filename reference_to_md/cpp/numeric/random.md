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
**Pseudo-random number generation**  
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
  
  
  


**Pseudo-random number generation**

| [Uniform random bit generators](random.html#Uniform_random_bit_generators "cpp/numeric/random")` `  
---  
[uniform_random_bit_generator](random/UniformRandomBitGenerator.html "cpp/numeric/random/uniform random bit generator")(C++20)  
[Random number engines](random.html#Random_number_engines "cpp/numeric/random")  
[linear_congruential_engine](random/linear_congruential_engine.html "cpp/numeric/random/linear congruential engine")(C++11)  
[mersenne_twister_engine](random/mersenne_twister_engine.html "cpp/numeric/random/mersenne twister engine")(C++11)  
[subtract_with_carry_engine](random/subtract_with_carry_engine.html "cpp/numeric/random/subtract with carry engine")(C++11)  
[philox_engine](random/philox_engine.html "cpp/numeric/random/philox engine")(C++26)  
[Random number engine adaptors](random.html#Random_number_engine_adaptors "cpp/numeric/random")  
[discard_block_engine](random/discard_block_engine.html "cpp/numeric/random/discard block engine")(C++11)  
[independent_bits_engine](random/independent_bits_engine.html "cpp/numeric/random/independent bits engine")(C++11)  
[shuffle_order_engine](random/shuffle_order_engine.html "cpp/numeric/random/shuffle order engine")(C++11)  
[Predefined random number generators](random.html#Predefined_random_number_generators "cpp/numeric/random")  
[Non-deterministic random numbers](random.html#Non-deterministic_random_numbers "cpp/numeric/random")  
[random_device](random/random_device.html "cpp/numeric/random/random device")(C++11)  
  
  
[Utilities](random.html#Utilities "cpp/numeric/random")  
[generate_canonical](random/generate_canonical.html "cpp/numeric/random/generate canonical")(C++11)  
[seed_seq](random/seed_seq.html "cpp/numeric/random/seed seq")(C++11)  
  
  
[Random number algorithms](random.html#Random_number_algorithms "cpp/numeric/random")  
[ranges::generate_random](../algorithm/ranges/generate_random.html "cpp/algorithm/ranges/generate random")(C++26)  
  
  
[C random library](random.html#C_random_library "cpp/numeric/random")  
|  | [rand](random/rand.html "cpp/numeric/random/rand")` `  
---  
  
| [srand](random/srand.html "cpp/numeric/random/srand")` `  
---  
  
| [RAND_MAX](random/RAND_MAX.html "cpp/numeric/random/RAND MAX")  
---  
  
  
  
  
  
  
| [Random number distributions](random.html#Random_number_distributions "cpp/numeric/random")  
---  
[Uniform distributions](random.html#Uniform_distributions "cpp/numeric/random")  
[uniform_int_distribution](random/uniform_int_distribution.html "cpp/numeric/random/uniform int distribution")(C++11)  
[uniform_real_distribution](random/uniform_real_distribution.html "cpp/numeric/random/uniform real distribution")(C++11)  
[generate_canonical](random/generate_canonical.html "cpp/numeric/random/generate canonical")(C++11)  
[Bernoulli distributions](random.html#Bernoulli_distributions "cpp/numeric/random")  
[bernoulli_distribution](random/bernoulli_distribution.html "cpp/numeric/random/bernoulli distribution")(C++11)  
[binomial_distribution](random/binomial_distribution.html "cpp/numeric/random/binomial distribution")(C++11)  
[negative_binomial_distribution](random/negative_binomial_distribution.html "cpp/numeric/random/negative binomial distribution")(C++11)  
[geometric_distribution](random/geometric_distribution.html "cpp/numeric/random/geometric distribution")(C++11)  
[Poisson distributions](random.html#Poisson_distributions "cpp/numeric/random")  
[poisson_distribution](random/poisson_distribution.html "cpp/numeric/random/poisson distribution")(C++11)  
[exponential_distribution](random/exponential_distribution.html "cpp/numeric/random/exponential distribution")(C++11)  
[gamma_distribution](random/gamma_distribution.html "cpp/numeric/random/gamma distribution")(C++11)  
[weibull_distribution](random/weibull_distribution.html "cpp/numeric/random/weibull distribution")(C++11)  
[extreme_value_distribution](random/extreme_value_distribution.html "cpp/numeric/random/extreme value distribution")(C++11)  
[Normal distributions](random.html#Normal_distributions "cpp/numeric/random")  
[normal_distribution](random/normal_distribution.html "cpp/numeric/random/normal distribution")(C++11)  
[lognormal_distribution](random/lognormal_distribution.html "cpp/numeric/random/lognormal distribution")(C++11)  
[chi_squared_distribution](random/chi_squared_distribution.html "cpp/numeric/random/chi squared distribution")(C++11)  
[cauchy_distribution](random/cauchy_distribution.html "cpp/numeric/random/cauchy distribution")(C++11)  
[fisher_f_distribution](random/fisher_f_distribution.html "cpp/numeric/random/fisher f distribution")(C++11)  
[student_t_distribution](random/student_t_distribution.html "cpp/numeric/random/student t distribution")(C++11)  
[Sampling distributions](random.html#Sampling_distributions "cpp/numeric/random")  
[discrete_distribution](random/discrete_distribution.html "cpp/numeric/random/discrete distribution")(C++11)  
[piecewise_constant_distribution](random/piecewise_constant_distribution.html "cpp/numeric/random/piecewise constant distribution")(C++11)  
[piecewise_linear_distribution](random/piecewise_linear_distribution.html "cpp/numeric/random/piecewise linear distribution")(C++11)  
  


The random number library provides classes that generate random and pseudo-random numbers. These classes include: 

  * Uniform random bit generators (URBGs), which include both random number engines, which are pseudo-random number generators that generate integer sequences with a uniform distribution, and true random number generators (if available). 
  * Random number distributions (e.g. [uniform](random/uniform_int_distribution.html "cpp/numeric/random/uniform int distribution"), [normal](random/normal_distribution.html "cpp/numeric/random/normal distribution"), or [poisson distributions](random/poisson_distribution.html "cpp/numeric/random/poisson distribution")) which convert the output of URBGs into various statistical distributions. 



URBGs and distributions are designed to be used together to produce random values. All of the random number engines may be specifically seeded, serialized, and de-serialized for use with repeatable simulators. 

## Contents

  * [1 Uniform random bit generators](random.html#Uniform_random_bit_generators)
  * [2 Random number engines](random.html#Random_number_engines)
  * [3 Random number engine adaptors](random.html#Random_number_engine_adaptors)
  * [4 Predefined random number generators](random.html#Predefined_random_number_generators)
  * [5 Non-deterministic random numbers](random.html#Non-deterministic_random_numbers)
  * [6 Random number distributions](random.html#Random_number_distributions)
    * [6.1 Uniform distributions](random.html#Uniform_distributions)
    * [6.2 Bernoulli distributions](random.html#Bernoulli_distributions)
    * [6.3 Poisson distributions](random.html#Poisson_distributions)
    * [6.4 Normal distributions](random.html#Normal_distributions)
    * [6.5 Sampling distributions](random.html#Sampling_distributions)
  * [7 Utilities](random.html#Utilities)
  * [8 Random number algorithms](random.html#Random_number_algorithms)
  * [9 C random library](random.html#C_random_library)
  * [10 Example](random.html#Example)
  * [11 See also](random.html#See_also)

  
---  
  
### Uniform random bit generators

A _uniform random bit generator_ is a function object returning unsigned integer values such that each value in the range of possible results has (ideally) equal probability of being returned. 

All uniform random bit generators meet the [UniformRandomBitGenerator](../named_req/UniformRandomBitGenerator.html "cpp/named req/UniformRandomBitGenerator") requirements. C++20 also defines a [`uniform_random_bit_generator`](random/UniformRandomBitGenerator.html "cpp/numeric/random/uniform random bit generator") concept. 

Defined in header `[<random>](../header/random.html "cpp/header/random")`  
---  
[ uniform_random_bit_generator](random/UniformRandomBitGenerator.html "cpp/numeric/random/uniform random bit generator")(C++20) |  specifies that a type qualifies as a uniform random bit generator   
(concept)   
  
### Random number engines

A _random number engine_ (commonly shortened to _engine_ ﻿) is a uniform random bit generator which generates pseudo-random numbers using seed data as entropy source. 

At any given time, an engine e of type `E` has a state e`i` for some non-negative integer i. Upon construction, e has an initial state e`0`, which is determined by engine parameters and an initial seed (or seed sequence). 

The following properties are always defined for any engine type `E`: 

  * The _size_ of `E`’s state in multiples of the size of `E::result_type` (i.e. (sizeof e`i`) / sizeof(E::result_type)). 
  * The _transition algorithm_ TA by which e’s state e`i` is advanced to its successor state e`i+1` (i.e. TA(e`i`) == e`i+1`). 
  * The _generation algorithm_ GA by which e’s state is mapped to a value of type `E::result_type`, the result is a pseudo-random number. 



A pseudo-random number sequence can be generated by calling TA and GA alternatively. 

The standard library provides the implementations of three different classes of pseudo-random number generation algorithms as class templates, so that the algorithms can be customized. The choice of which engine to use involves a number of trade-offs: 

  * The [linear congruential engine](random/linear_congruential_engine.html "cpp/numeric/random/linear congruential engine") is moderately fast and has a very small storage requirement for state. 
  * The [Mersenne twister engine](random/mersenne_twister_engine.html "cpp/numeric/random/mersenne twister engine") is slower and has greater state storage requirements but with the right parameters has the longest non-repeating sequence with the most desirable spectral characteristics (for a given definition of desirable). 
  * The [subtract with carry engine](random/subtract_with_carry_engine.html "cpp/numeric/random/subtract with carry engine") is very fast even on processors without advanced arithmetic instruction sets, at the expense of greater state storage and sometimes less desirable spectral characteristics. 



  * The [Philox engine](random/philox_engine.html "cpp/numeric/random/philox engine") is a [counter-based random number generator](https://en.wikipedia.org/wiki/counter-based_random_number_generator "enwiki:counter-based random number generator"). It has a small state and a long period (not less than 2^130) and is intended for use in Monte-Carlo simulations which require massively parallel random number generation. It is easily vectorized and parallelized and is implemented in GPU-optimized libraries. 

| (since C++26)  
---|---  
  
None of these random number engines are [cryptographically secure](https://en.wikipedia.org/wiki/Cryptographically_secure_pseudorandom_number_generator "enwiki:Cryptographically secure pseudorandom number generator"). As with any secure operation, a crypto library should be used for the purpose (e.g. [OpenSSL `RAND_bytes`](https://www.openssl.org/docs/manmaster/man3/RAND_bytes.html)). 

All types instantiated from these templates meet the [RandomNumberEngine](../named_req/RandomNumberEngine.html "cpp/named req/RandomNumberEngine") requirements. 

Defined in header `[<random>](../header/random.html "cpp/header/random")`  
---  
[ linear_congruential_engine](random/linear_congruential_engine.html "cpp/numeric/random/linear congruential engine")(C++11) |  implements [linear congruential](https://en.wikipedia.org/wiki/Linear_congruential_generator "enwiki:Linear congruential generator") algorithm   
(class template)   
[ mersenne_twister_engine](random/mersenne_twister_engine.html "cpp/numeric/random/mersenne twister engine")(C++11) |  implements [Mersenne twister](https://en.wikipedia.org/wiki/Mersenne_twister "enwiki:Mersenne twister") algorithm   
(class template)   
[ subtract_with_carry_engine](random/subtract_with_carry_engine.html "cpp/numeric/random/subtract with carry engine")(C++11) |  implements a subtract-with-carry ([lagged Fibonacci](https://en.wikipedia.org/wiki/Lagged_Fibonacci_generator "enwiki:Lagged Fibonacci generator")) algorithm   
(class template)   
[ philox_engine](random/philox_engine.html "cpp/numeric/random/philox engine")(C++26) |  a counter-based parallelizable generator   
(class template)   
  
### Random number engine adaptors

Random number engine adaptors generate pseudo-random numbers using another random number engine as entropy source. They are generally used to alter the spectral characteristics of the underlying engine. 

Defined in header `[<random>](../header/random.html "cpp/header/random")`  
---  
[ discard_block_engine](random/discard_block_engine.html "cpp/numeric/random/discard block engine")(C++11) |  discards some output of a random number engine   
(class template)   
[ independent_bits_engine](random/independent_bits_engine.html "cpp/numeric/random/independent bits engine")(C++11) |  packs the output of a random number engine into blocks of a specified number of bits   
(class template)   
[ shuffle_order_engine](random/shuffle_order_engine.html "cpp/numeric/random/shuffle order engine")(C++11) |  delivers the output of a random number engine in a different order   
(class template)   
  
### Predefined random number generators

Several specific popular algorithms are predefined. 

Defined in header `[<random>](../header/random.html "cpp/header/random")`  
---  
Type  |  Definition   
`minstd_rand0` (C++11) |  [std::linear_congruential_engine](random/linear_congruential_engine.html)<[std::uint_fast32_t](../types/integer.html),  
` `16807, 0, 2147483647>  
Discovered in 1969 by Lewis, Goodman and Miller, adopted as "Minimal standard" in 1988 by Park and Miller  
`minstd_rand` (C++11) |  [std::linear_congruential_engine](random/linear_congruential_engine.html)<[std::uint_fast32_t](../types/integer.html),  
` `48271, 0, 2147483647>  
Newer "Minimum standard", recommended by Park, Miller, and Stockmeyer in 1993  
`mt19937` (C++11) |  [std::mersenne_twister_engine](random/mersenne_twister_engine.html)<[std::uint_fast32_t](../types/integer.html),  
` `32, 624, 397, 31,  
` `0x9908b0df, 11,  
` `0xffffffff, 7,  
` `0x9d2c5680, 15,  
` `0xefc60000, 18, 1812433253>  
32-bit Mersenne Twister by Matsumoto and Nishimura, 1998  
`mt19937_64` (C++11) |  [std::mersenne_twister_engine](random/mersenne_twister_engine.html)<[std::uint_fast64_t](../types/integer.html),  
` `64, 312, 156, 31,  
` `0xb5026f5aa96619e9, 29,  
` `0x5555555555555555, 17,  
` `0x71d67fffeda60000, 37,  
` `0xfff7eee000000000, 43,  
` `6364136223846793005>  
64-bit Mersenne Twister by Matsumoto and Nishimura, 2000  
`ranlux24_base` (C++11) |  [std::subtract_with_carry_engine](random/subtract_with_carry_engine.html)<[std::uint_fast32_t](../types/integer.html), 24, 10, 24>  
`ranlux48_base` (C++11) |  [std::subtract_with_carry_engine](random/subtract_with_carry_engine.html)<[std::uint_fast64_t](../types/integer.html), 48, 5, 12>  
`ranlux24` (C++11) |  [std::discard_block_engine](random/discard_block_engine.html)<[std::ranlux24_base](random/subtract_with_carry_engine.html), 223, 23>  
24-bit RANLUX generator by Martin Lüscher and Fred James, 1994  
`ranlux48` (C++11) |  [std::discard_block_engine](random/discard_block_engine.html)<[std::ranlux48_base](random/subtract_with_carry_engine.html), 389, 11>  
48-bit RANLUX generator by Martin Lüscher and Fred James, 1994  
`knuth_b` (C++11) |  [std::shuffle_order_engine](random/shuffle_order_engine.html)<[std::minstd_rand0](random/linear_congruential_engine.html), 256>  
`philox4x32` (C++26) |  [std::philox_engine](random/philox_engine.html)<[std::uint_fast32_t](../types/integer.html), 32, 4, 10,  
` `0xCD9E8D57, 0x9E3779B9,  
` `0xD2511F53, 0xBB67AE85>  
`philox4x64` (C++26) |  [std::philox_engine](random/philox_engine.html)<[std::uint_fast64_t](../types/integer.html), 64, 4, 10,  
` `0xCA5A826395121157, 0x9E3779B97F4A7C15,  
` `0xD2E7470EE14C6C93, 0xBB67AE8584CAA73B>  
`default_random_engine` (C++11) |  an implementation-defined [RandomNumberEngine](../named_req/RandomNumberEngine.html "cpp/named req/RandomNumberEngine") type   
  
### Non-deterministic random numbers

[std::random_device](random/random_device.html "cpp/numeric/random/random device") is a non-deterministic uniform random bit generator, although implementations are allowed to implement [std::random_device](random/random_device.html "cpp/numeric/random/random device") using a pseudo-random number engine if there is no support for non-deterministic random number generation. 

[ random_device](random/random_device.html "cpp/numeric/random/random device")(C++11) |  non-deterministic random number generator using hardware entropy source   
(class)   
---|---  
  
### Random number distributions

A random number distribution post-processes the output of a URBG in such a way that resulting output is distributed according to a defined statistical probability density function. 

Random number distributions satisfy [RandomNumberDistribution](../named_req/RandomNumberDistribution.html "cpp/named req/RandomNumberDistribution"). 

Defined in header `[<random>](../header/random.html "cpp/header/random")`  
---  
  
#####  Uniform distributions   
  
[ uniform_int_distribution](random/uniform_int_distribution.html "cpp/numeric/random/uniform int distribution")(C++11) |  produces integer values evenly distributed across a range   
(class template)   
[ uniform_real_distribution](random/uniform_real_distribution.html "cpp/numeric/random/uniform real distribution")(C++11) |  produces real values evenly distributed across a range   
(class template)   
  
#####  Bernoulli distributions   
  
[ bernoulli_distribution](random/bernoulli_distribution.html "cpp/numeric/random/bernoulli distribution")(C++11) |  produces bool values on a [Bernoulli distribution](https://en.wikipedia.org/wiki/Bernoulli_distribution "enwiki:Bernoulli distribution")   
(class)   
[ binomial_distribution](random/binomial_distribution.html "cpp/numeric/random/binomial distribution")(C++11) |  produces integer values on a [binomial distribution](https://en.wikipedia.org/wiki/Binomial_distribution "enwiki:Binomial distribution")   
(class template)   
[ negative_binomial_distribution](random/negative_binomial_distribution.html "cpp/numeric/random/negative binomial distribution")(C++11) |  produces integer values on a [negative binomial distribution](https://en.wikipedia.org/wiki/Negative_binomial_distribution "enwiki:Negative binomial distribution")   
(class template)   
[ geometric_distribution](random/geometric_distribution.html "cpp/numeric/random/geometric distribution")(C++11) |  produces integer values on a [geometric distribution](https://en.wikipedia.org/wiki/Geometric_distribution "enwiki:Geometric distribution")   
(class template)   
  
#####  Poisson distributions   
  
[ poisson_distribution](random/poisson_distribution.html "cpp/numeric/random/poisson distribution")(C++11) |  produces integer values on a [Poisson distribution](https://en.wikipedia.org/wiki/Poisson_distribution "enwiki:Poisson distribution")   
(class template)   
[ exponential_distribution](random/exponential_distribution.html "cpp/numeric/random/exponential distribution")(C++11) |  produces real values on an [exponential distribution](https://en.wikipedia.org/wiki/Exponential_distribution "enwiki:Exponential distribution")   
(class template)   
[ gamma_distribution](random/gamma_distribution.html "cpp/numeric/random/gamma distribution")(C++11) |  produces real values on a [gamma distribution](https://en.wikipedia.org/wiki/Gamma_distribution "enwiki:Gamma distribution")   
(class template)   
[ weibull_distribution](random/weibull_distribution.html "cpp/numeric/random/weibull distribution")(C++11) |  produces real values on a [Weibull distribution](https://en.wikipedia.org/wiki/Weibull_distribution "enwiki:Weibull distribution")   
(class template)   
[ extreme_value_distribution](random/extreme_value_distribution.html "cpp/numeric/random/extreme value distribution")(C++11) |  produces real values on an [extreme value distribution](https://en.wikipedia.org/wiki/Generalized_extreme_value_distribution "enwiki:Generalized extreme value distribution")   
(class template)   
  
#####  Normal distributions   
  
[ normal_distribution](random/normal_distribution.html "cpp/numeric/random/normal distribution")(C++11) |  produces real values on a [standard normal (Gaussian) distribution](https://en.wikipedia.org/wiki/Normal_distribution "enwiki:Normal distribution")   
(class template)   
[ lognormal_distribution](random/lognormal_distribution.html "cpp/numeric/random/lognormal distribution")(C++11) |  produces real values on a [lognormal distribution](https://en.wikipedia.org/wiki/Lognormal_distribution "enwiki:Lognormal distribution")   
(class template)   
[ chi_squared_distribution](random/chi_squared_distribution.html "cpp/numeric/random/chi squared distribution")(C++11) |  produces real values on a [chi-squared distribution](https://en.wikipedia.org/wiki/Chi-squared_distribution "enwiki:Chi-squared distribution")   
(class template)   
[ cauchy_distribution](random/cauchy_distribution.html "cpp/numeric/random/cauchy distribution")(C++11) |  produces real values on a [Cauchy distribution](https://en.wikipedia.org/wiki/Cauchy_distribution "enwiki:Cauchy distribution")   
(class template)   
[ fisher_f_distribution](random/fisher_f_distribution.html "cpp/numeric/random/fisher f distribution")(C++11) |  produces real values on a [Fisher's F-distribution](https://en.wikipedia.org/wiki/F-distribution "enwiki:F-distribution")   
(class template)   
[ student_t_distribution](random/student_t_distribution.html "cpp/numeric/random/student t distribution")(C++11) |  produces real values on a [Student's t-distribution](https://en.wikipedia.org/wiki/Student%27s_t-distribution "enwiki:Student's t-distribution")   
(class template)   
  
#####  Sampling distributions   
  
[ discrete_distribution](random/discrete_distribution.html "cpp/numeric/random/discrete distribution")(C++11) |  produces integer values on a discrete distribution   
(class template)   
[ piecewise_constant_distribution](random/piecewise_constant_distribution.html "cpp/numeric/random/piecewise constant distribution")(C++11) |  produces real values distributed on constant subintervals   
(class template)   
[ piecewise_linear_distribution](random/piecewise_linear_distribution.html "cpp/numeric/random/piecewise linear distribution")(C++11) |  produces real values distributed on defined subintervals   
(class template)   
  
### Utilities

Defined in header `[<random>](../header/random.html "cpp/header/random")`  
---  
[ generate_canonical](random/generate_canonical.html "cpp/numeric/random/generate canonical")(C++11) |  evenly distributes real values of given precision across `[`​0​`, `1`)`   
(function template)   
[ seed_seq](random/seed_seq.html "cpp/numeric/random/seed seq")(C++11) |  general-purpose bias-eliminating scrambled seed sequence generator   
(class)   
  
### Random number algorithms

Defined in header `[<random>](../header/random.html "cpp/header/random")`  
---  
[ ranges::generate_random](../algorithm/ranges/generate_random.html "cpp/algorithm/ranges/generate random")(C++26) |  fills a range with random numbers from a uniform random bit generator  
(algorithm function object)  
  
### C random library

In addition to the engines and distributions described above, the functions and constants from the C random library are also available though not recommended: 

Defined in header `[<cstdlib>](../header/cstdlib.html "cpp/header/cstdlib")`  
---  
[ rand](random/rand.html "cpp/numeric/random/rand") |  generates a pseudo-random number   
(function)   
[ srand](random/srand.html "cpp/numeric/random/srand") |  seeds pseudo-random number generator   
(function)   
[ RAND_MAX](random/RAND_MAX.html "cpp/numeric/random/RAND MAX") |  maximum possible value generated by [std::rand](random/rand.html "cpp/numeric/random/rand")   
(macro constant)   
  
### Example

Run this code
    
    
    #include <cmath>
    #include <iomanip>
    #include <iostream>
    #include <map>
    #include <random>
    #include <string>
     
    int main()
    {
        // Seed with a real random value, if available
        [std::random_device](random/random_device.html) r;
     
        // Choose a random mean between 1 and 6
        std::default_random_engine e1(r());
        [std::uniform_int_distribution](random/uniform_int_distribution.html)<int> uniform_dist(1, 6);
        int mean = uniform_dist(e1);
        [std::cout](../io/cout.html) << "Randomly-chosen mean: " << mean << '\n';
     
        // Generate a normal distribution around that mean
        [std::seed_seq](random/seed_seq.html) seed2{r(), r(), r(), r(), r(), r(), r(), r()};
        [std::mt19937](random/mersenne_twister_engine.html) e2(seed2);
        [std::normal_distribution](random/normal_distribution.html)<> normal_dist(mean, 2);
     
        [std::map](../container/map.html)<int, int> hist;
        for (int n = 0; n != 10000; ++n)
            ++hist[[std::round](math/round.html)(normal_dist(e2))];
     
        [std::cout](../io/cout.html) << "Normal distribution around " << mean << ":\n"
                  << [std::fixed](../io/manip/fixed.html) << [std::setprecision](../io/manip/setprecision.html)(1);
        for (auto [x, y] : hist)
            [std::cout](../io/cout.html) << [std::setw](../io/manip/setw.html)(2) << x << ' ' << [std::string](../string/basic_string.html)(y / 200, '*') << '\n';
    }

Possible output: 
    
    
    Randomly-chosen mean: 4
    Normal distribution around 4:
    -4
    -3
    -2
    -1
     0 *
     1 ***
     2 ******
     3 ********
     4 *********
     5 ********
     6 ******
     7 ***
     8 *
     9
    10
    11
    12

### See also

[C documentation](../../c/numeric/random.html "c/numeric/random") for Pseudo-random number generation  
---
