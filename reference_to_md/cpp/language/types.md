* _fundamental types_
  * `void`
    * POSSIBLY [cv-qualified](cv.md)
  * [`std::nullptr_t`](../types/nullptr_t.md)
    * POSSIBLY [cv-qualified](cv.md)
    * requirements
      * C++11)
  * [integral types](#integral-types)
  * [floating-point types](#floating-point-types)

## Contents

  * [1 void](#void)
  * [2 std::nullptr_t](types.html#std::nullptr_t)
  * [3 Integral types](types.html#Integral_types)
    * [3.1 Standard integer types](types.html#Standard_integer_types)
      * [3.1.1 Modifiers](types.html#Modifiers)
      * [3.1.2 Properties](types.html#Properties)
    * [3.2 Extended integer types](types.html#Extended_integer_types)
    * [3.3 Boolean type](types.html#Boolean_type)
    * [3.4 Character types](types.html#Character_types)
  * [4 Floating-point types](types.html#Floating-point_types)
    * [4.1 Standard floating-point types](types.html#Standard_floating-point_types)
    * [4.2 Extended floating-point types](types.html#Extended_floating-point_types)
    * [4.3 Properties](types.html#Properties_2)
  * [5 Range of values](types.html#Range_of_values)
  * [6 Data models](types.html#Data_models)
  * [7 Notes](types.html#Notes)
  * [8 Keywords](types.html#Keywords)
  * [9 Defect reports](types.html#Defect_reports)
  * [10 References](types.html#References)
  * [11 See also](types.html#See_also)

### `void`

* == type /
  * empty set of values
  * [incomplete type](incomplete_type.md) /
    * ❌can NOT be completed❌
      * -> objects of type void: NOT ALLOWED
  * ❌NOT POSSIBLE❌
    * array of void
    * [references](reference.md) -- to -- void
  * POSSIBLE
    * [pointers](pointer.md) -- to -- `void`
    * [functions](function.md) / return type `void`
      * == _procedures_ | other languages 

###  `std::nullptr_t`

|  Defined in header `[<cstddef>](../header/cstddef.html "cpp/header/cstddef")` |  |   
---|---|---  
typedef decltype(nullptr) nullptr_t; |  |  (since C++11)  
| |   
  
[std::nullptr_t](../types/nullptr_t.html "cpp/types/nullptr t") is the type of the null pointer literal, [`nullptr`](nullptr.html "cpp/language/nullptr"). It is a distinct type that is not itself a pointer type or a pointer to member type. All Its prvalues are [null pointer constants](pointer.html#Null_pointers "cpp/language/pointer"). 

sizeof([std::nullptr_t](../types/nullptr_t.html)) is equal to sizeof(void*). 

(since C++11)  
  
### Integral types

#### Standard integer types

    int — basic integer type. The keyword int may be omitted if any of the modifiers listed below are used. If no length modifiers are present, it's guaranteed to have a width of at least 16 bits. However, on 32/64 bit systems it is almost exclusively guaranteed to have width of at least 32 bits (see below). 

##### Modifiers

Modifies the basic integer type. Can be mixed in any order. Only one of each group can be present in type name. 

  * Signedness: 



    signed — target type will have signed representation (this is the default if omitted) 
    unsigned — target type will have unsigned representation 

  * Size: 



    short — target type will be optimized for space and will have width of at least 16 bits. 
    long — target type will have width of at least 32 bits. 

    long long — target type will have width of at least 64 bits. 
| (since C++11)  
---|---  
  
Note: as with all type specifiers, any order is permitted: unsigned long long int and long int unsigned long name the same type. 

##### Properties

The following table summarizes all available standard integer types and their properties in various common data models: 

Type specifier  | Equivalent type  | Width in bits by [data model](types.html#Data_models)  
---|---|---  
C++ standard  |  LP32  |  ILP32  |  LLP64  |  LP64   
signed char | signed char | at least  
**8** | **8** | **8** | **8** | **8**  
unsigned char | unsigned char  
short | short int | at least  
**16** | **16** | **16** | **16** | **16**  
short int  
signed short  
signed short int  
unsigned short | unsigned short int  
unsigned short int  
int | int | at least  
**16** | **16** | **32** | **32** | **32**  
signed  
signed int  
unsigned | unsigned int  
unsigned int  
long | long int | at least  
**32** | **32** | **32** | **32** | **64**  
long int  
signed long  
signed long int  
unsigned long | unsigned long int  
unsigned long int  
long long | long long int  
(C++11) | at least  
**64** | **64** | **64** | **64** | **64**  
long long int  
signed long long  
signed long long int  
unsigned long long | unsigned long long int  
(C++11)  
unsigned long long int  
  
Note: integer arithmetic is defined differently for the signed and unsigned integer types. See [arithmetic operators](operator_arithmetic.html "cpp/language/operator arithmetic"), in particular [integer overflows](operator_arithmetic.html#Overflows "cpp/language/operator arithmetic"). 

[std::size_t](../types/size_t.html "cpp/types/size t") is the unsigned integer type of the result of the [`sizeof`](sizeof.html "cpp/language/sizeof") operator as well as the [`sizeof...`](sizeof....html "cpp/language/sizeof...") operator and the [`alignof`](alignof.html "cpp/language/alignof") operator(since C++11). 

####  Extended integer types

The extended integer types are implementation-defined. Note that [fixed width integer types](../types/integer.html "cpp/types/integer") are typically aliases of the standard integer types.  | (since C++11)  
---|---  
  
#### Boolean type

    bool — integer type, capable of holding one of the two values: [`true`](bool_literal.html "cpp/language/bool literal") or [`false`](bool_literal.html "cpp/language/bool literal"). The value of sizeof(bool) is implementation defined and might differ from 1. 

#### Character types

Character types are integer types used for a character representation. 

    signed char — type for signed character representation. 
    unsigned char — type for unsigned character representation. Also used to inspect [object representations](objects.html "cpp/language/object") (raw memory). 
    char — type for character representation which can be most efficiently processed on the target system (has the same representation and alignment as either signed char or unsigned char, but is always a distinct type). [Multibyte characters strings](../string/multibyte.html "cpp/string/multibyte") use this type to represent code units. For every value of type unsigned char in range `[`​0​`, `255`]`, converting the value to char and then back to unsigned char produces the original value.(since C++11) The signedness of char depends on the compiler and the target platform: the defaults for ARM and PowerPC are typically unsigned, the defaults for x86 and x64 are typically signed. 
    wchar_t — type for wide character representation (see [wide strings](../string/wide.html "cpp/string/wide")). It has the same size, signedness, and alignment as one of the integer types, but is a distinct type. In practice, it is 32 bits and holds UTF-32 on Linux and many other non-Windows systems, but 16 bits and holds UTF-16 code units on Windows. The standard used to require wchar_t to be large enough to represent any supported character code point. However, such requirement cannot be fulfilled on Windows, and thus it is considered as a [defect](types.html#Defect_reports) and removed. 

    char16_t — type for UTF-16 character representation, required to be large enough to represent any UTF-16 code unit (16 bits). It has the same size, signedness, and alignment as [std::uint_least16_t](../types/integer.html "cpp/types/integer"), but is a distinct type. 

    char32_t — type for UTF-32 character representation, required to be large enough to represent any UTF-32 code unit (32 bits). It has the same size, signedness, and alignment as [std::uint_least32_t](../types/integer.html "cpp/types/integer"), but is a distinct type. 
| (since C++11)  
---|---  
  
    char8_t — type for UTF-8 character representation, required to be large enough to represent any UTF-8 code unit (8 bits). It has the same size, signedness, and alignment as unsigned char (and therefore, the same size and alignment as char and signed char), but is a distinct type. 
| (since C++20)  
---|---  
  
Besides the minimal bit counts, the C++ Standard guarantees that 

    1 == sizeof(char) `≤` sizeof(short) `≤` sizeof(int) `≤` sizeof(long) `≤` sizeof(long long). 

Note: this allows the extreme case in which [bytes](https://en.wikipedia.org/wiki/Byte "enwiki:Byte") are sized 64 bits, all types (including char) are 64 bits wide, and [`sizeof`](sizeof.html "cpp/language/sizeof") returns 1 for every type. 

### Floating-point types

#### Standard floating-point types

The following three types and their cv-qualified versions are collectively called standard floating-point types. 

    float — single precision floating-point type. Usually [IEEE-754 binary32 format](https://en.wikipedia.org/wiki/Single-precision_floating-point_format "enwiki:Single-precision floating-point format"). 
    double — double precision floating-point type. Usually [IEEE-754 binary64 format](https://en.wikipedia.org/wiki/Double-precision_floating-point_format "enwiki:Double-precision floating-point format"). 
    long double — extended precision floating-point type. Does not necessarily map to types mandated by IEEE-754. 

  * [IEEE-754 binary128 format](https://en.wikipedia.org/wiki/Quadruple-precision_floating-point_format "enwiki:Quadruple-precision floating-point format") is used by some HP-UX, SPARC, MIPS, ARM64, and z/OS implementations. 
  * The most well known [IEEE-754 binary64-extended format](https://en.wikipedia.org/wiki/Extended_precision "enwiki:Extended precision") is [x87 80-bit extended precision format](https://en.wikipedia.org/wiki/Extended_precision#x86_extended_precision_format "enwiki:Extended precision"). It is used by many x86 and x86-64 implementations (a notable exception is MSVC, which implements long double in the same format as double, i.e. binary64). 
  * On PowerPC [double-double](https://en.wikipedia.org/wiki/Quadruple-precision_floating-point_format#Double-double_arithmetic "enwiki:Quadruple-precision floating-point format") can be used. 



####  Extended floating-point types

The extended floating-point types are implementation-defined. They may include [fixed width floating-point types](../types/floating-point.html "cpp/types/floating-point").  | (since C++23)  
---|---  
  
#### Properties

Floating-point types may support [special values](../types/numeric_limits.html "cpp/types/numeric limits"): 

  * _infinity_ (positive and negative), see [INFINITY](../numeric/math/INFINITY.html "cpp/numeric/math/INFINITY")
  * the _negative zero_ , -0.0. It compares equal to the positive zero, but is meaningful in some arithmetic operations, e.g. 1.0 / 0.0 == [INFINITY](../numeric/math/INFINITY.html), but 1.0 / -0.0 == -[INFINITY](../numeric/math/INFINITY.html)), and for some mathematical functions, e.g. [`sqrt(std::complex)`](../numeric/complex/sqrt.html "cpp/numeric/complex/sqrt")
  * _not-a-number_ (NaN), which does not compare equal with anything (including itself). Multiple bit patterns represent NaNs, see [std::nan](../numeric/math/nan.html "cpp/numeric/math/nan"), [NAN](../numeric/math/NAN.html "cpp/numeric/math/NAN"). Note that C++ takes no special notice of signalling NaNs other than detecting their support by [std::numeric_limits::has_signaling_NaN](../types/numeric_limits/has_signaling_NaN.html "cpp/types/numeric limits/has signaling NaN"), and treats all NaNs as quiet. 



Floating-point numbers may be used with [arithmetic operators](operator_arithmetic.html "cpp/language/operator arithmetic") +, -, /, and * as well as various mathematical functions from [`<cmath>`](../header/cmath.html "cpp/header/cmath"). Both built-in operators and library functions may raise floating-point exceptions and set [errno](../error/errno.html "cpp/error/errno") as described in [`math errhandling`](../numeric/math/math_errhandling.html "cpp/numeric/math/math errhandling"). 

Floating-point expressions may have greater range and precision than indicated by their types, see [FLT_EVAL_METHOD](../types/climits/FLT_EVAL_METHOD.html "cpp/types/climits/FLT EVAL METHOD"). Floating-point expressions may also be _contracted_ , that is, calculated as if all intermediate values have infinite range and precision, see [` #pragma STDC FP_CONTRACT`](../preprocessor/impl.html#.23pragma_STDC "cpp/preprocessor/impl"). Standard C++ does not restrict the accuracy of floating-point operations. 

Some operations on floating-point numbers are affected by and modify the state of [the floating-point environment](../numeric/fenv.html "cpp/numeric/fenv") (most notably, the rounding direction). 

[Implicit conversions](implicit_cast.html "cpp/language/implicit conversion") are defined between floating types and integer types. 

See [limits of floating-point types](../types/climits.html#Limits_of_floating-point_types "cpp/types/climits") and [std::numeric_limits](../types/numeric_limits.html "cpp/types/numeric limits") for additional details, limits, and properties of the floating-point types. 

### Range of values

The following table provides a reference for the limits of common numeric representations. 

Prior to C++20, the C++ Standard allowed any signed integer representation, and the minimum guaranteed range of N-bit signed integers was from \\(\scriptsize -(2^{N-1}-1)\\)-(2N-1  
-1) to \\(\scriptsize +2^{N-1}-1\\)+2N-1  
-1 (e.g. **−127** to **127** for a signed 8-bit type), which corresponds to the limits of [ones' complement](https://en.wikipedia.org/wiki/Ones%27_complement "enwiki:Ones' complement") or [sign-and-magnitude](https://en.wikipedia.org/wiki/Signed_number_representations#Sign-and-magnitude_method "enwiki:Signed number representations"). 

However, all C++ compilers use [two's complement](https://en.wikipedia.org/wiki/Two%27s_complement "enwiki:Two's complement") representation, and as of C++20, it is the only representation allowed by the standard, with the guaranteed range from \\(\scriptsize -2^{N-1}\\)-2N-1  
to \\(\scriptsize +2^{N-1}-1\\)+2N-1  
-1 (e.g. **−128** to **127** for a signed 8-bit type). 

8-bit ones' complement and sign-and-magnitude representations for char have been disallowed since C++11 (via the resolution of [CWG issue 1759](https://cplusplus.github.io/CWG/issues/1759.html)), because a UTF-8 code unit of value 0x80 used in a [UTF-8 string literal](string_literal.html "cpp/language/string literal") must be storable in a char type object. 

The range for a floating-point type `T` is defined as follows: 

  * The minimum guaranteed range is the most negative finite floating-point number representable in `T` through the most positive finite floating-point number representable in `T`. 
  * If negative infinity is representable in `T`, the range of `T` is extended to all negative real numbers. 
  * If positive infinity is representable in `T`, the range of `T` is extended to all positive real numbers. 



Since negative and positive infinity are representable in [ISO/IEC/IEEE 60559](https://www.iso.org/standard/80985.html) formats, all real numbers lie within the range of representable values of a floating-point type adhering to ISO/IEC/IEEE 60559. 

Type  | Size in bits  | Format  | Value range   
---|---|---|---  
Approximate  | Exact   
character  | 8  | signed  |  | **−128** to **127**  
unsigned  |  | **0** to **255**  
16  | UTF-16  |  | **0** to **65535**  
32  | UTF-32  |  | **0** to **1114111** (**0x10ffff**)   
integer  | 16  | signed  | **± 3.27 · 10 4** | **−32768** to **32767**  
unsigned  | **0** to **6.55 · 10 4** | **0** to **65535**  
32  | signed  | **± 2.14 · 10 9** | **−2,147,483,648** to **2,147,483,647**  
unsigned  | **0** to **4.29 · 10 9** | **0** to **4,294,967,295**  
64  | signed  | **± 9.22 · 10 18** | **−9,223,372,036,854,775,808** to **9,223,372,036,854,775,807**  
unsigned  | **0** to **1.84 · 10 19** | **0** to **18,446,744,073,709,551,615**  
binary  
floating-  
point  | 32  | [IEEE-754](https://en.wikipedia.org/wiki/Single-precision_floating-point_format "enwiki:Single-precision floating-point format") | 

  * min subnormal:  
**± 1.401,298,4 · 10 −45**
  * min normal:  
**± 1.175,494,3 · 10 −38**
  * max:  
**± 3.402,823,4 · 10 38**

| 

  * min subnormal:  
**±0x1p−149**
  * min normal:  
**±0x1p−126**
  * max:  
**±0x1.fffffep+127**

  
64  | [IEEE-754](https://en.wikipedia.org/wiki/Double-precision_floating-point_format "enwiki:Double-precision floating-point format") | 

  * min subnormal:  
**± 4.940,656,458,412 · 10 −324**
  * min normal:  
**± 2.225,073,858,507,201,4 · 10 −﻿308**
  * max:  
**± 1.797,693,134,862,315,7 · 10 308**

| 

  * min subnormal:  
**±0x1p−1074**
  * min normal:  
**±0x1p−1022**
  * max:  
**±0x1.fffffffffffffp+1023**

  
80[[note 1]](types.html#cite_note-1) | [x86](https://en.wikipedia.org/wiki/Extended_precision "enwiki:Extended precision") | 

  * min subnormal:  
**± 3.645,199,531,882,474,602,528  
· 10−4951**
  * min normal:  
**± 3.362,103,143,112,093,506,263  
· 10−4932**
  * max:  
**± 1.189,731,495,357,231,765,021  
· 104932**

| 

  * min subnormal:  
**±0x1p−16445**
  * min normal:  
**±0x1p−16382**
  * max:  
**±0x1.fffffffffffffffep+16383**

  
128  | [IEEE-754](https://en.wikipedia.org/wiki/Quadruple-precision_floating-point_format "enwiki:Quadruple-precision floating-point format") | 

  * min subnormal:  
**± 6.475,175,119,438,025,110,924,  
438,958,227,646,552,5 · 10−4966**
  * min normal:  
**± 3.362,103,143,112,093,506,262,  
677,817,321,752,602,6 · 10−4932**
  * max:  
**± 1.189,731,495,357,231,765,085,  
759,326,628,007,016,2 · 104932**

| 

  * min subnormal:  
**±0x1p−16494**
  * min normal:  
**±0x1p−16382**
  * max:  
**±0x1.ffffffffffffffffffffffffffff  
p+16383**

  
  
  1. [↑](types.html#cite_ref-1) The object representation usually occupies 96/128 bits on 32/64-bit platforms respectively.



Note: actual (as opposed to guaranteed minimal) limits on the values representable by these types are available in [C numeric limits interface](../types/climits.html "cpp/types/climits") and [std::numeric_limits](../types/numeric_limits.html "cpp/types/numeric limits"). 

### Data models

The choices made by each implementation about the sizes of the fundamental types are collectively known as _data model_. Four data models found wide acceptance: 

32 bit systems: 

    

  * **LP32** or **2/4/4** (int is 16-bit, long and pointer are 32-bit) 



    

  * Win16 API 



  * **ILP32** or **4/4/4** (int, long, and pointer are 32-bit); 



    

  * Win32 API 
  * Unix and Unix-like systems (Linux, macOS) 



64 bit systems: 

    

  * **LLP64** or **4/4/8** (int and long are 32-bit, pointer is 64-bit) 



    

  * [Win32 API](https://learn.microsoft.com/en-us/windows/win32/desktop-programming) (also called the Windows API) with compilation target [64-bit ARM](https://en.wikipedia.org/wiki/AArch64 "enwiki:AArch64") (AArch64) or [x86-64](https://en.wikipedia.org/wiki/x86-64 "enwiki:x86-64") (a.k.a. x64) 



  * **LP64** or **4/8/8** (int is 32-bit, long and pointer are 64-bit) 



    

  * Unix and Unix-like systems (Linux, macOS) 



Other models are very rare. For example, **ILP64** (**8/8/8** : int, long, and pointer are 64-bit) only appeared in some early 64-bit Unix systems (e.g. [UNICOS on Cray](https://en.wikipedia.org/wiki/UNICOS "enwiki:UNICOS")). 

### Notes

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_unicode_characters`](../experimental/feature_test.html#cpp_unicode_characters "cpp/feature test") | [`200704L`](../compiler_support/11.html#cpp_unicode_characters_200704L "cpp/compiler support/11") | (C++11) | New character types (char16_t and char32_t)   
[`__cpp_char8_t`](../experimental/feature_test.html#cpp_char8_t "cpp/feature test") | [`201811L`](../compiler_support/20.html#cpp_char8_t_201811L "cpp/compiler support/20") | (C++20) | char8_t  
[`202207L`](../compiler_support/23.html#cpp_char8_t_202207L "cpp/compiler support/23") | (C++23) | char8_t compatibility and portability fix ([allow initialization of `(unsigned) char` arrays](aggregate_initialization.html#Character_arrays "cpp/language/aggregate initialization") from [UTF-8 string literals](string_literal.html "cpp/language/string literal"))   
  
### Keywords

[`void`](../keyword/void.html "cpp/keyword/void"), [`bool`](../keyword/bool.html "cpp/keyword/bool"), [`true`](../keyword/true.html "cpp/keyword/true"), [`false`](../keyword/false.html "cpp/keyword/false"), [`char`](../keyword/char.html "cpp/keyword/char"), [`char8_t`](../keyword/char8_t.html "cpp/keyword/char8 t"), [`char16_t`](../keyword/char16_t.html "cpp/keyword/char16 t"), [`char32_t`](../keyword/char32_t.html "cpp/keyword/char32 t"), [`wchar_t`](../keyword/wchar_t.html "cpp/keyword/wchar t"), [`int`](../keyword/int.html "cpp/keyword/int"), [`short`](../keyword/short.html "cpp/keyword/short"), [`long`](../keyword/long.html "cpp/keyword/long"), [`signed`](../keyword/signed.html "cpp/keyword/signed"), [`unsigned`](../keyword/unsigned.html "cpp/keyword/unsigned"), [`float`](../keyword/float.html "cpp/keyword/float"), [`double`](../keyword/double.html "cpp/keyword/double")

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 238](https://cplusplus.github.io/CWG/issues/238.html) | C++98  | the constraints placed on a floating-point implementation was unspecified  | specified as  
no constraint   
[CWG 1759](https://cplusplus.github.io/CWG/issues/1759.html) | C++11  | char is not guaranteed to be able to represent UTF-8 code unit 0x80  | guaranteed   
[CWG 2689](https://cplusplus.github.io/CWG/issues/2689.html) | C++11  | cv-qualified [std::nullptr_t](../types/nullptr_t.html "cpp/types/nullptr t") was not a fundemental type  | it is   
[CWG 2723](https://cplusplus.github.io/CWG/issues/2723.html) | C++98  | the ranges of representable values for floating-point types were not specified  | specified   
[P2460R2](https://wg21.link/P2460R2) | C++98  | wchar_t was required to be able to represent distinct codes for all members  
of the largest extended character set specified among the supported locales  | not required   
  
### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 6.8.2 Fundamental types [basic.fundamental] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 6.8.1 Fundamental types [basic.fundamental] 



  * C++17 standard (ISO/IEC 14882:2017): 



    

  * 6.9.1 Fundamental types [basic.fundamental] 



  * C++14 standard (ISO/IEC 14882:2014): 



    

  * 3.9.1 Fundamental types [basic.fundamental] 



  * C++11 standard (ISO/IEC 14882:2011): 



    

  * 3.9.1 Fundamental types [basic.fundamental] 



  * C++03 standard (ISO/IEC 14882:2003): 



    

  * 3.9.1 Fundamental types [basic.fundamental] 



  * C++98 standard (ISO/IEC 14882:1998): 



    

  * 3.9.1 Fundamental types [basic.fundamental] 



### See also

* [C++ type system overview](type-id.md)
* [`const` `volatility` (cv) specifiers and qualifiers](cv.md)
* [Storage duration specifiers](storage_duration.md)
* [C++ library's type-related utilities](../utility/rtti.md) 
* [C's arithmetic types](../../c/language/arithmetic_types.md)
