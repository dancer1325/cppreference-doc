 
  


[Utilities library](../../utility.html "cpp/utility")

| [Language support](../../utility.html#Language_support "cpp/utility")  
---  
[Type support](../../utility/rtti.html "cpp/types") (basic types, RTTI)  
[Library feature-test macros](../../utility/feature_test.html "cpp/utility/feature test") (C++20)  
[Program utilities](../../utility/program.html "cpp/utility/program")  
[Variadic functions](../../utility/variadic.html "cpp/utility/variadic")  
[initializer_list](../../utility/initializer_list.html "cpp/utility/initializer list")(C++11)  
[is_constant_evaluated](../is_constant_evaluated.html "cpp/types/is constant evaluated")(C++20)  
[is_within_lifetime](../is_within_lifetime.html "cpp/types/is within lifetime")(C++26)  
[source_location](../../utility/source_location.html "cpp/utility/source location")(C++20)  
[Coroutine support](../../coroutine.html "cpp/coroutine") (C++20)  
[Contract support](../../contract.html "cpp/contract") (C++26)  
[Three-way comparison](../../utility.html#Three-way_comparison "cpp/utility")  
[three_way_comparablethree_way_comparable_with](../../utility/compare/three_way_comparable.html "cpp/utility/compare/three way comparable")(C++20)(C++20)  
[strong_ordering](../../utility/compare/strong_ordering.html "cpp/utility/compare/strong ordering")(C++20)  
[weak_ordering](../../utility/compare/weak_ordering.html "cpp/utility/compare/weak ordering")(C++20)  
[partial_ordering](../../utility/compare/partial_ordering.html "cpp/utility/compare/partial ordering")(C++20)  
[common_comparison_category](../../utility/compare/common_comparison_category.html "cpp/utility/compare/common comparison category")(C++20)  
[compare_three_way_result](../../utility/compare/compare_three_way_result.html "cpp/utility/compare/compare three way result")(C++20)  
[compare_three_way](../../utility/compare/compare_three_way.html "cpp/utility/compare/compare three way")(C++20)  
[strong_order](../../utility/compare/strong_order.html "cpp/utility/compare/strong order")(C++20)  
[weak_order](../../utility/compare/weak_order.html "cpp/utility/compare/weak order")(C++20)  
[partial_order](../../utility/compare/partial_order.html "cpp/utility/compare/partial order")(C++20)  
[compare_strong_order_fallback](../../utility/compare/compare_strong_order_fallback.html "cpp/utility/compare/compare strong order fallback")(C++20)  
[compare_weak_order_fallback](../../utility/compare/compare_weak_order_fallback.html "cpp/utility/compare/compare weak order fallback")(C++20)  
[compare_partial_order_fallback](../../utility/compare/compare_partial_order_fallback.html "cpp/utility/compare/compare partial order fallback")(C++20)` `  
|  | [is_eqis_ltis_lteq](../../utility/compare/named_comparison_functions.html "cpp/utility/compare/named comparison functions")(C++20)(C++20)(C++20)` `  
---  
  
| [is_neqis_gtis_gteq](../../utility/compare/named_comparison_functions.html "cpp/utility/compare/named comparison functions")(C++20)(C++20)(C++20)  
---  
  
  
  
  
  
  
  
  
  
  


[Type support](../../utility/rtti.html "cpp/types")

Basic types  
---  
[Fixed width integer types](../integer.html "cpp/types/integer") (C++11)  
[Fixed width floating-point types](../floating-point.html "cpp/types/floating-point") (C++23)  
| [ptrdiff_t](../ptrdiff_t.html "cpp/types/ptrdiff t")  
---  
[size_t](../size_t.html "cpp/types/size t")  
[max_align_t](../max_align_t.html "cpp/types/max align t")(C++11)  
[byte](../byte.html "cpp/types/byte")(C++17)  
  
| [nullptr_t](../nullptr_t.html "cpp/types/nullptr t")(C++11)  
---  
[offsetof](../offsetof.html "cpp/types/offsetof")  
[NULL](../NULL.html "cpp/types/NULL")  
  
  
  
Numeric limits  
[numeric_limits](../numeric_limits.html "cpp/types/numeric limits")  
[C numeric limits interface](../climits.html "cpp/types/climits")  
Runtime type information  
| [type_info](../type_info.html "cpp/types/type info")  
---  
[type_index](../type_index.html "cpp/types/type index")(C++11)  
  
| [bad_typeid](../bad_typeid.html "cpp/types/bad typeid")  
---  
[bad_cast](../bad_cast.html "cpp/types/bad cast")  
  


[`std::numeric_limits`](../numeric_limits.html "cpp/types/numeric limits")

Static constants  
---  
[numeric_limits::is_specialized](is_specialized.html "cpp/types/numeric limits/is specialized")  
[numeric_limits::is_signed](is_signed.html "cpp/types/numeric limits/is signed")  
[numeric_limits::is_integer](is_integer.html "cpp/types/numeric limits/is integer")  
[numeric_limits::is_exact](is_exact.html "cpp/types/numeric limits/is exact")  
[numeric_limits::has_infinity](has_infinity.html "cpp/types/numeric limits/has infinity")  
[numeric_limits::has_quiet_NaN](has_quiet_NaN.html "cpp/types/numeric limits/has quiet NaN")  
[numeric_limits::has_signaling_NaN](has_signaling_NaN.html "cpp/types/numeric limits/has signaling NaN")  
[numeric_limits::has_denorm](has_denorm.html "cpp/types/numeric limits/has denorm")  
[numeric_limits::has_denorm_loss](has_denorm_loss.html "cpp/types/numeric limits/has denorm loss")  
[numeric_limits::round_style](round_style.html "cpp/types/numeric limits/round style")  
[numeric_limits::is_iec559](is_iec559.html "cpp/types/numeric limits/is iec559")  
[numeric_limits::is_bounded](is_bounded.html "cpp/types/numeric limits/is bounded")  
[numeric_limits::is_modulo](is_modulo.html "cpp/types/numeric limits/is modulo")  
[numeric_limits::digits](digits.html "cpp/types/numeric limits/digits")  
[numeric_limits::digits10](digits10.html "cpp/types/numeric limits/digits10")  
[numeric_limits::max_digits10](max_digits10.html "cpp/types/numeric limits/max digits10")(C++11)  
[numeric_limits::radix](radix.html "cpp/types/numeric limits/radix")  
[numeric_limits::min_exponent](min_exponent.html "cpp/types/numeric limits/min exponent")  
[numeric_limits::min_exponent10](min_exponent10.html "cpp/types/numeric limits/min exponent10")  
[numeric_limits::max_exponent](max_exponent.html "cpp/types/numeric limits/max exponent")  
[numeric_limits::max_exponent10](max_exponent10.html "cpp/types/numeric limits/max exponent10")  
[numeric_limits::traps](traps.html "cpp/types/numeric limits/traps")  
[numeric_limits::tinyness_before](tinyness_before.html "cpp/types/numeric limits/tinyness before")  
Static member functions  
[numeric_limits::min](min.html "cpp/types/numeric limits/min")  
[numeric_limits::lowest](lowest.html "cpp/types/numeric limits/lowest")(C++11)  
[numeric_limits::max](max.html "cpp/types/numeric limits/max")  
[numeric_limits::epsilon](epsilon.html "cpp/types/numeric limits/epsilon")  
[numeric_limits::round_error](round_error.html "cpp/types/numeric limits/round error")  
[numeric_limits::infinity](infinity.html "cpp/types/numeric limits/infinity")  
[numeric_limits::quiet_NaN](quiet_NaN.html "cpp/types/numeric limits/quiet NaN")  
[numeric_limits::signaling_NaN](signaling_NaN.html "cpp/types/numeric limits/signaling NaN")  
**numeric_limits::denorm_min**  
Helper types  
[float_round_style](float_round_style.html "cpp/types/numeric limits/float round style")  
[float_denorm_style](float_denorm_style.html "cpp/types/numeric limits/float denorm style")  
  


static T denorm_min() throw(); |  | (until C++11)  
---|---|---  
static constexpr T denorm_min() noexcept; |  |  (since C++11)  
| |   
  
Returns the minimum positive [subnormal value](https://en.wikipedia.org/wiki/Denormal_number "enwiki:Denormal number") of the type `T`, if [std::numeric_limits](../numeric_limits.html)<T>::has_denorm != [std::denorm_absent](float_denorm_style.html), otherwise returns [std::numeric_limits](../numeric_limits.html)<T>::min() for floating point types and T() for all other types. Only meaningful for floating-point types. 

### Return value

`T` |  [std::numeric_limits](../numeric_limits.html)<T>::denorm_min()  
---|---  
/* non-specialized */ |  T()  
bool |  false  
char |  ​0​  
signed char |  ​0​  
unsigned char |  ​0​  
wchar_t |  ​0​  
char8_t (since C++20) |  ​0​  
char16_t (since C++11) |  ​0​  
char32_t (since C++11) |  ​0​  
short |  ​0​  
unsigned short |  ​0​  
int |  ​0​  
unsigned int |  ​0​  
long |  ​0​  
unsigned long |  ​0​  
long long (since C++11) |  ​0​  
unsigned long long since (since C++11) |  ​0​  
float |  [FLT_TRUE_MIN](../climits.html "cpp/types/climits") (\\(\scriptsize 2^{-149}\\)2-149  
if  
[std::numeric_limits](../numeric_limits.html)<float>::is_iec559 is true)   
double |  [DBL_TRUE_MIN](../climits.html "cpp/types/climits") (\\(\scriptsize 2^{-1074}\\)2-1074  
if  
[std::numeric_limits](../numeric_limits.html)<double>::is_iec559 is true)   
long double |  [LDBL_TRUE_MIN](../climits.html "cpp/types/climits")  
  
### Example

Demonstates the underlying bit structure of the `denorm_min()` and prints the values:

Run this code
    
    
    #include <cassert>
    #include <cstdint>
    #include <cstring>
    #include <iostream>
    #include <limits>
     
    int main()
    {
        // the smallest subnormal value has sign bit = 0, exponent = 0
        // and only the least significant bit of the fraction is 1
        [std::uint32_t](../integer.html) denorm_bits = 0x0001;
        float denorm_float;
        [std::memcpy](../../string/byte/memcpy.html)(&denorm_float, &denorm_bits, sizeof(float));
     
        [assert](../../error/assert.html)(denorm_float == [std::numeric_limits](../numeric_limits.html)<float>::denorm_min());
     
        [std::cout](../../io/cout.html) << "float\tmin()\t\tdenorm_min()\n";
        [std::cout](../../io/cout.html) << "\t" << [std::numeric_limits](../numeric_limits.html)<float>::min() << '\t';
        [std::cout](../../io/cout.html) <<         [std::numeric_limits](../numeric_limits.html)<float>::denorm_min() << '\n';
     
        [std::cout](../../io/cout.html) << "double\tmin()\t\tdenorm_min()\n";
        [std::cout](../../io/cout.html) << "\t" << [std::numeric_limits](../numeric_limits.html)<double>::min() << '\t';
        [std::cout](../../io/cout.html) <<         [std::numeric_limits](../numeric_limits.html)<double>::denorm_min() << '\n';
    }

Possible output: 
    
    
    float	min()		denorm_min()
    	1.17549e-38	1.4013e-45
    double	min()		denorm_min()
    	2.22507e-308	4.94066e-324

### See also

[ min](min.html "cpp/types/numeric limits/min")[static] |  returns the smallest finite value of the given non-floating-point type, or the smallest positive normal value of the given floating-point type   
(public static member function)   
---|---  
[ has_denorm](has_denorm.html "cpp/types/numeric limits/has denorm")[static] |  identifies the denormalization style used by the floating-point type   
(public static member constant)   
[ lowest](lowest.html "cpp/types/numeric limits/lowest")[static] (C++11) |  returns the lowest finite value of the given type, i.e. the most negative value for signed types, ​0​ for unsigned types   
(public static member function) 
