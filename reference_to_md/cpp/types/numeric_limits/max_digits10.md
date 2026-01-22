 
  


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
**numeric_limits::max_digits10**(C++11)  
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
[numeric_limits::denorm_min](denorm_min.html "cpp/types/numeric limits/denorm min")  
Helper types  
[float_round_style](float_round_style.html "cpp/types/numeric limits/float round style")  
[float_denorm_style](float_denorm_style.html "cpp/types/numeric limits/float denorm style")  
  


static constexpr int max_digits10 |  |  (since C++11)  
---|---|---  
| |   
  
The value of [std::numeric_limits](../numeric_limits.html)<T>::max_digits10 is the number of base-10 digits that are necessary to uniquely represent all distinct values of the type `T`, such as necessary for serialization/deserialization to text. This constant is meaningful for all floating-point types. 

## Contents

  * [1 Standard specializations](max_digits10.html#Standard_specializations)
  * [2 Notes](max_digits10.html#Notes)
  * [3 Example](max_digits10.html#Example)
  * [4 See also](max_digits10.html#See_also)

  
---  
  
### Standard specializations

`T` |  Value of [std::numeric_limits](../numeric_limits.html)<T>::max_digits10  
---|---  
/* non-specialized */ |  ​0​  
bool |  ​0​  
char |  ​0​  
signed char |  ​0​  
unsigned char |  ​0​  
wchar_t |  ​0​  
char8_t (since C++20) |  ​0​  
char16_t |  ​0​  
char32_t |  ​0​  
short |  ​0​  
unsigned short |  ​0​  
int |  ​0​  
unsigned int |  ​0​  
long |  ​0​  
unsigned long |  ​0​  
long long |  ​0​  
unsigned long long |  ​0​  
float |  [FLT_DECIMAL_DIG](../climits.html "cpp/types/climits") or [std::ceil](../../numeric/math/ceil.html)([std::numeric_limits](../numeric_limits.html)<float>::digits * [std::log10](../../numeric/math/log10.html)(2) + 1)  
double |  [DBL_DECIMAL_DIG](../climits.html "cpp/types/climits") or [std::ceil](../../numeric/math/ceil.html)([std::numeric_limits](../numeric_limits.html)<double>::digits * [std::log10](../../numeric/math/log10.html)(2) + 1)  
long double |  [DECIMAL_DIG](../climits.html "cpp/types/climits") or [LDBL_DECIMAL_DIG](../climits.html "cpp/types/climits") or [std::ceil](../../numeric/math/ceil.html)([std::numeric_limits](../numeric_limits.html)<long double>::digits * [std::log10](../../numeric/math/log10.html)(2) + 1)  
  
### Notes

Unlike most mathematical operations, the conversion of a floating-point value to text and back is _exact_ as long as at least `max_digits10` were used (9 for float, 17 for double): it is guaranteed to produce the same floating-point value, even though the intermediate text representation is not exact. It may take over a hundred decimal digits to represent the precise value of a float in decimal notation. 

### Example

Run this code
    
    
    #include <cmath>
    #include <iomanip>
    #include <iostream>
    #include <limits>
    #include <sstream>
     
    int main()
    {
        float value = 10.0000086;
     
        constexpr auto digits10 = [std::numeric_limits](../numeric_limits.html)<decltype(value)>::digits10;
        constexpr auto max_digits10 = [std::numeric_limits](../numeric_limits.html)<decltype(value)>::max_digits10;
        constexpr auto submax_digits10 = max_digits10 - 1;
     
        [std::cout](../../io/cout.html) << "float:\n"
                     "       digits10 is " << digits10 << " digits\n"
                     "   max_digits10 is " << max_digits10 << " digits\n"
                     "submax_digits10 is " << submax_digits10 << " digits\n\n";
     
        const auto original_precision = [std::cout](../../io/cout.html).precision();
        for (auto i = 0; i < 5; ++i)
        {
            [std::cout](../../io/cout.html)
                << "   max_digits10: " << [std::setprecision](../../io/manip/setprecision.html)(max_digits10) << value << "\n"
                   "submax_digits10: " << [std::setprecision](../../io/manip/setprecision.html)(submax_digits10) << value
                << "\n\n";
     
            value = [std::nextafter](../../numeric/math/nextafter.html)(value, [std::numeric_limits](../numeric_limits.html)<decltype(value)>::max());
        }
        [std::cout](../../io/cout.html).precision(original_precision);
    }

Output: 
    
    
    float:
           digits10 is 6 digits
       max_digits10 is 9 digits
    submax_digits10 is 8 digits
     
       max_digits10: 10.0000086
    submax_digits10: 10.000009
     
       max_digits10: 10.0000095
    submax_digits10: 10.00001
     
       max_digits10: 10.0000105
    submax_digits10: 10.00001
     
       max_digits10: 10.0000114
    submax_digits10: 10.000011
     
       max_digits10: 10.0000124
    submax_digits10: 10.000012

### See also

[ radix](radix.html "cpp/types/numeric limits/radix")[static] |  the radix or integer base used by the representation of the given type   
(public static member constant)   
---|---  
[ digits](digits.html "cpp/types/numeric limits/digits")[static] |  number of `radix` digits that can be represented without change   
(public static member constant)   
[ digits10](digits10.html "cpp/types/numeric limits/digits10")[static] |  number of decimal digits that can be represented without change   
(public static member constant)   
[ min_exponent](min_exponent.html "cpp/types/numeric limits/min exponent")[static] |  one more than the smallest negative power of the radix that is a valid normalized floating-point value   
(public static member constant)   
[ max_exponent](max_exponent.html "cpp/types/numeric limits/max exponent")[static] |  one more than the largest integer power of the radix that is a valid finite floating-point value   
(public static member constant) 
