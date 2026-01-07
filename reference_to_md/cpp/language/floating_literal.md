

  
  
  
  
  

  
  
  
[Expressions](expressions.html "cpp/language/expressions")  
---  
| [Value categories](value_category.html "cpp/language/value category")  
---  
[Order of evaluation](eval_order.html "cpp/language/eval order")  
  
| [Operators](operators.html "cpp/language/operators")  
---  
[Operator precedence](operator_precedence.html "cpp/language/operator precedence")  
  
[Alternative representations](operator_alternative.html "cpp/language/operator alternative")  
[Literals](expressions.html#Literals "cpp/language/expressions")  
[Boolean](bool_literal.html "cpp/language/bool literal") \- [Integer](integer_literal.html "cpp/language/integer literal") \- **Floating-point**  
[Character](character_literal.html "cpp/language/character literal") \- [String](string_literal.html "cpp/language/string literal") \- [`nullptr`](nullptr.html "cpp/language/nullptr") (C++11)  
[User-defined](user_literal.html "cpp/language/user literal") (C++11)  
Utilities  
[Attributes](attributes.html "cpp/language/attributes") (C++11)  
Types  
[`typedef` declaration](typedef.html "cpp/language/typedef")  
[Type alias declaration](type_alias.html "cpp/language/type alias") (C++11)  
Casts  
| [Implicit conversions](implicit_cast.html "cpp/language/implicit conversion")  
---  
[`static_cast`](static_cast.html "cpp/language/static cast")  
[`const_cast`](const_cast.html "cpp/language/const cast")  
  
| [Explicit conversions](explicit_cast.html "cpp/language/explicit cast")  
---  
[`dynamic_cast`](dynamic_cast.html "cpp/language/dynamic cast")  
[`reinterpret_cast`](reinterpret_cast.html "cpp/language/reinterpret cast")  
  
Memory allocation  
| [`new` expression](new.html "cpp/language/new")  
---  
  

---  
  


[ Expressions](expressions.html "cpp/language/expressions")

General  
---  
| [Value categories](value_category.html "cpp/language/value category")  
---  
[Order of evaluation](eval_order.html "cpp/language/eval order")  
[Constant expressions](constant_expression.html "cpp/language/constant expression")  
[Primary expressions](expressions.html#Primary_expressions "cpp/language/expressions")  
  
| [Lambda expressions](lambda.html "cpp/language/lambda") (C++11)  
---  
[Requires expressions](requires.html "cpp/language/requires") (C++20)  
[Pack indexing expression](pack_indexing.html#Pack_indexing_expression "cpp/language/pack indexing") (C++26)  
[Potentially-evaluated expressions](expressions.html#Potentially-evaluated_expressions "cpp/language/expressions")  
  
Literals  
| [Integer literals](integer_literal.html "cpp/language/integer literal")  
---  
**Floating-point literals**  
[Boolean literals](bool_literal.html "cpp/language/bool literal")  
[Character literals](character_literal.html "cpp/language/character literal")  
  
| [Escape sequences](escape.html "cpp/language/escape")  
---  
[String literals](string_literal.html "cpp/language/string literal")  
[Null pointer literal](nullptr.html "cpp/language/nullptr") (C++11)  
[User-defined literal](user_literal.html "cpp/language/user literal") (C++11)  
  

  
  


Floating-point literal defines a compile-time constant whose value is specified in the source file. 

## Contents

  * [1 Syntax](floating_literal.html#Syntax)
  * [2 Explanation](floating_literal.html#Explanation)
  * [3 Notes](floating_literal.html#Notes)
  * [4 Example](floating_literal.html#Example)
  * [5 References](floating_literal.html#References)
  * [6 See also](floating_literal.html#See_also)

  
---  
  
### Syntax  
  
---  
digit-sequence decimal-exponent suffix ﻿(optional) |  (1)  |   
digit-sequence `**.**` decimal-exponent ﻿(optional) suffix ﻿(optional) |  (2)  |   
digit-sequence ﻿(optional) `**.**` digit-sequence decimal-exponent ﻿(optional) suffix ﻿(optional) |  (3)  |   
`**0x**` | `**0X**` hex-digit-sequence hex-exponent suffix ﻿(optional) |  (4)  |  (since C++17)  
`**0x**` | `**0X**` hex-digit-sequence `**.**` hex-exponent suffix ﻿(optional) |  (5)  |  (since C++17)  
`**0x**` | `**0X**` hex-digit-sequence ﻿(optional) `**.**` hex-digit-sequence hex-exponent suffix ﻿(optional) |  (6)  |  (since C++17)  
  
1) digit-sequence representing a whole number without a decimal separator, in this case the exponent is not optional: 1e10, 1e-5L.

2) digit-sequence representing a whole number with a decimal separator, in this case the exponent is optional: 1., 1.e-2.

3) digit-sequence representing a fractional number. The exponent is optional: 3.14, .1f, 0.1e-1L.

4) Hexadecimal digit-sequence representing a whole number without a radix separator. The exponent is never optional for hexadecimal floating-point literals: 0x1ffp10, 0X0p-1.

5) Hexadecimal digit-sequence representing a whole number with a radix separator. The exponent is never optional for hexadecimal floating-point literals: 0x1.p0, 0xf.p-1.

6) Hexadecimal digit-sequence representing a fractional number with a radix separator. The exponent is never optional for hexadecimal floating-point literals: 0x0.123p-1, 0xa.bp10l.

decimal-exponent has the form   
  
---  
`**e**` | `**E**` exponent-sign ﻿(optional) digit-sequence |  |   
  
hex-exponent has the form   
  
---  
`**p**` | `**P**` exponent-sign ﻿(optional) digit-sequence |  |  (since C++17)  
  
exponent-sign, if present, is either `**+**` or `**-**`

suffix, if present, is one of `**f**`, `**l**`, `**F**`, `**L**` , `**f16**`, `**f32**`, `**f64**`, `**f128**`, `**bf16**`, `**F16**`, `**F32**`, `**F64**`, `**F128**`, `**BF16**`(since C++23). The suffix determines the type of the floating-point literal: 

    

  * (no suffix) defines double
  * `**f F**` defines float
  * `**l L**` defines long double



    

  * `**f16 F16**` defines std::float16_t
  * `**f32 F32**` defines std::float32_t
  * `**f64 F64**` defines std::float64_t
  * `**f128 F128**` defines std::float128_t
  * `**bf16 BF16**` defines std::bfloat16_t


| (since C++23)  
---|---  
  
Optional single quotes (') may be inserted between the digits as a separator; they are ignored when determining the value of the literal.  | (since C++14)  
---|---  
  
### Explanation

Decimal scientific notation is used, meaning that the value of the floating-point literal is the significand multiplied by the number 10 raised to the power of decimal-exponent. E.g. the mathematical meaning of 123e4 is _123×10 4_. 

If the floating literal begins with the character sequence `0x` or `0X`, the floating literal is a _hexadecimal floating literal_. Otherwise, it is a _decimal floating literal_. For a _hexadecimal floating literal_ , the significand is interpreted as a hexadecimal rational number, and the digit-sequence of the exponent is interpreted as the (decimal) integer power of 2 by which the significand has to be scaled. double d = 0x1.4p3;`// hex fraction 1.4 (decimal 1.25) scaled by 23, that is 10.0` | (since C++17)  
---|---  
  
### Notes

The hexadecimal floating-point literals were not part of C++ until C++17, although they can be parsed and printed by the I/O functions since C++11: both C++ I/O streams when [std::hexfloat](../io/manip/fixed.html "cpp/io/manip/fixed") is enabled and the C I/O streams: [std::printf](../io/c/printf.html "cpp/io/c/fprintf"), [std::scanf](../io/c/scanf.html "cpp/io/c/fscanf"), etc. See [std::strtof](../string/byte/strtof.html "cpp/string/byte/strtof") for the format description. 

Feature-test macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_hex_float`](../experimental/feature_test.html#cpp_hex_float "cpp/feature test") | [`201603L`](../compiler_support/17.html#cpp_hex_float_201603L "cpp/compiler support/17") | (C++17) | Hexadecimal floating literals   
  
### Example

Run this code
    
    
    #include <iomanip>
    #include <iostream>
    #include <limits>
    #include <typeinfo>
     
    #define OUT(x) '\n' << std::setw(16) << #x << x
     
    int main()
    {
        [std::cout](../io/cout.html)
            << "Literal" "\t" "Printed value" << [std::left](../io/manip/left.html)
            << OUT( 58.            ) // double
            << OUT( 4e2            ) // double
            << OUT( 123.456e-67    ) // double
            << OUT( 123.456e-67f   ) // float, truncated to zero
            << OUT( .1E4f          ) // float
            << OUT( 0x10.1p0       ) // double
            << OUT( 0x1p5          ) // double
            << OUT( 0x1e5          ) // integer literal, not floating-point
            << OUT( 3.14'15'92     ) // double, single quotes ignored (C++14)
            << OUT( 1.18e-4932l    ) // long double
            << [std::setprecision](../io/manip/setprecision.html)(39)
            << OUT( 3.4028234e38f  ) // float
            << OUT( 3.4028234e38   ) // double
            << OUT( 3.4028234e38l  ) // long double
            << '\n';
     
        static_assert(3.4028234e38f == [std::numeric_limits](../types/numeric_limits.html)<float>::max());
     
        static_assert(3.4028234e38f ==  // ends with 4
                      3.4028235e38f);   // ends with 5
     
        static_assert(3.4028234e38 !=   // ends with 4
                      3.4028235e38);    // ends with 5
     
        // Both floating-point constants below are 3.4028234e38
        static_assert(3.4028234e38f !=  // a float (then promoted to double)
                      3.4028234e38);    // a double
    }

Possible output: 
    
    
    Literal         Printed value
    58.             58
    4e2             400
    123.456e-67     1.23456e-65
    123.456e-67f    0
    .1E4f           1000
    0x10.1p0        16.0625
    0x1p5           32
    0x1e5           485
    3.14'15'92      3.14159
    1.18e-4932l     1.18e-4932
    3.4028234e38f   340282346638528859811704183484516925440
    3.4028234e38    340282339999999992395853996843190976512
    3.4028234e38l   340282339999999999995912555211526242304

### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 5.13.4 Floating-point literals [lex.fcon] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 5.13.4 Floating-point literals [lex.fcon] 



  * C++17 standard (ISO/IEC 14882:2017): 



    

  * 5.13.4 Floating literals [lex.fcon] 



  * C++14 standard (ISO/IEC 14882:2014): 



    

  * 2.14.4 Floating literals [lex.fcon] 



  * C++11 standard (ISO/IEC 14882:2011): 



    

  * 2.14.4 Floating literals [lex.fcon] 



  * C++98 standard (ISO/IEC 14882:1998): 



    

  * 2.13.3 Floating literals [lex.fcon] 



### See also

[ user-defined literals](user_literal.html "cpp/language/user literal")(C++11) |  literals with user-defined suffix  
---|---  
[C documentation](../../c/language/floating_constant.html "c/language/floating constant") for Floating constant
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
