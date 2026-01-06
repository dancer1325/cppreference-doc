

  
  
  
  
  

  
  
  
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
[Boolean](bool_literal.html "cpp/language/bool literal") \- **Integer** \- [Floating-point](floating_literal.html "cpp/language/floating literal")  
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
| **Integer literals**  
---  
[Floating-point literals](floating_literal.html "cpp/language/floating literal")  
[Boolean literals](bool_literal.html "cpp/language/bool literal")  
[Character literals](character_literal.html "cpp/language/character literal")  
  
| [Escape sequences](escape.html "cpp/language/escape")  
---  
[String literals](string_literal.html "cpp/language/string literal")  
[Null pointer literal](nullptr.html "cpp/language/nullptr") (C++11)  
[User-defined literal](user_literal.html "cpp/language/user literal") (C++11)  
  
Operators  
| [Assignment operators](operator_assignment.html "cpp/language/operator assignment")  
---  
[Increment and decrement](operator_incdec.html "cpp/language/operator incdec")  
[Arithmetic operators](operator_arithmetic.html "cpp/language/operator arithmetic")  
[Logical operators](operator_logical.html "cpp/language/operator logical")  
[Comparison operators](operator_comparison.html "cpp/language/operator comparison")  
[Member access operators](operator_member_access.html "cpp/language/operator member access")  
[Other operators](operator_other.html "cpp/language/operator other")  
[`new`-expression](new.html "cpp/language/new")  
[`delete`-expression](delete.html "cpp/language/delete")  
[`throw`-expression](throw.html "cpp/language/throw")  
  
| [`alignof`](alignof.html "cpp/language/alignof")  
---  
[`sizeof`](sizeof.html "cpp/language/sizeof")  
[`sizeof...`](sizeof....html "cpp/language/sizeof...") (C++11)  
[`typeid`](typeid.html "cpp/language/typeid")  
[`noexcept`](noexcept.html "cpp/language/noexcept") (C++11)  
[Fold expressions](fold.html "cpp/language/fold") (C++17)  
[Alternative representations of operators](operator_alternative.html "cpp/language/operator alternative")  
[Precedence and associativity](operator_precedence.html "cpp/language/operator precedence")  
[Operator overloading](operators.html "cpp/language/operators")  
[Default comparisons](default_comparisons.html "cpp/language/default comparisons") (C++20)  
  
Conversions  
| [Implicit conversions](implicit_cast.html "cpp/language/implicit conversion")  
---  
[Explicit conversions](explicit_cast.html "cpp/language/explicit cast")  
[Usual arithmetic conversions](usual_arithmetic_conversions.html "cpp/language/usual arithmetic conversions")  
[User-defined conversion](cast_operator.html "cpp/language/cast operator")  
  
| [`const_cast`](const_cast.html "cpp/language/const cast")  
---  
[`static_cast`](static_cast.html "cpp/language/static cast")  
[`dynamic_cast`](dynamic_cast.html "cpp/language/dynamic cast")  
[`reinterpret_cast`](reinterpret_cast.html "cpp/language/reinterpret cast")  
  


Allows values of integer type to be used in expressions directly. 

## Contents

  * [1 Syntax](integer_literal.html#Syntax)
  * [2 Explanation](integer_literal.html#Explanation)
  * [3 The type of the literal](integer_literal.html#The_type_of_the_literal)
  * [4 Notes](integer_literal.html#Notes)
  * [5 Example](integer_literal.html#Example)
  * [6 Defect reports](integer_literal.html#Defect_reports)
  * [7 References](integer_literal.html#References)
  * [8 See also](integer_literal.html#See_also)

  
---  
  
### Syntax

An integer literal has the form   
  
---  
decimal-literal integer-suffix ﻿(optional) |  (1)  |   
octal-literal integer-suffix ﻿(optional) |  (2)  |   
hex-literal integer-suffix ﻿(optional) |  (3)  |   
binary-literal integer-suffix ﻿(optional) |  (4)  |  (since C++14)  
  
where 

  * decimal-literal is a non-zero decimal digit (`1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`), followed by zero or more decimal digits (`0`, `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`) 
  * octal-literal is the digit zero (`0`) followed by zero or more octal digits (`0`, `1`, `2`, `3`, `4`, `5`, `6`, `7`) 
  * hex-literal is the character sequence `0x` or the character sequence `0X` followed by one or more hexadecimal digits (`0`, `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `a`, `A`, `b`, `B`, `c`, `C`, `d`, `D`, `e`, `E`, `f`, `F`) 
  * binary-literal is the character sequence `0b` or the character sequence `0B` followed by one or more binary digits (`0`, `1`) 
  * integer-suffix, if provided, may contain one or both of the following (if both are provided, they may appear in any order: 



    

  * unsigned-suffix (the character `u` or the character `U`) 
  * one of 



    

  * long-suffix (the character `l` or the character `L`) 



    

    

  * long-long-suffix (the character sequence `ll` or the character sequence `LL`) 


| (since C++11)  
---|---  
  
    

    

  * size-suffix (the character `z` or the character `Z`) 


| (since C++23)  
---|---  
  
Optional single quotes (') may be inserted between the digits as a separator; they are ignored when determining the value of the literal.  | (since C++14)  
---|---  
  
An integer literal (as any literal) is a [primary expression](expressions.html#Primary_expressions "cpp/language/expressions"). 

### Explanation

1) Decimal integer literal (base 10).

2) Octal integer literal (base 8).

3) Hexadecimal integer literal (base 16, the letters 'a' through 'f' represent values (decimal) 10 through 15).

4) Binary integer literal (base 2).

The first digit of an integer literal is the most significant. 

Example. The following variables are initialized to the same value: 
    
    
    int d = 42;
    int o = 052;
    int x = 0x2a;
    int X = 0X2A;
    int b = 0b101010; // C++14

Example. The following variables are also initialized to the same value: 
    
    
    unsigned long long l1 = 18446744073709550592ull;       // C++11
    unsigned long long l2 = 18'446'744'073'709'550'592llu; // C++14
    unsigned long long l3 = 1844'6744'0737'0955'0592uLL;   // C++14
    unsigned long long l4 = 184467'440737'0'95505'92LLU;   // C++14

### The type of the literal

The type of the integer literal is the first type in which the value can fit, from the list of types which depends on which numeric base and which integer-suffix was used: 

Suffix  | Decimal bases  | Binary, octal, or hexadecimal bases   
---|---|---  
(no suffix)  | 

  * int
  * long int
  * long long int (since C++11)

| 

  * int
  * unsigned int
  * long int
  * unsigned long int
  * long long int (since C++11)
  * unsigned long long int (since C++11)

  
`u` or `U` | 

  * unsigned int
  * unsigned long int
  * unsigned long long int (since C++11)

| 

  * unsigned int
  * unsigned long int
  * unsigned long long int (since C++11)

  
`l` or `L` | 

  * long int
  * unsigned long int (until C++11)
  * long long int (since C++11)

| 

  * long int
  * unsigned long int
  * long long int (since C++11)
  * unsigned long long int (since C++11)

  
both `l`/`L`  
and `u`/`U` | 

  * unsigned long int
  * unsigned long long int (since C++11)

| 

  * unsigned long int
  * unsigned long long int (since C++11)

  
`ll` or `LL` | 

  * long long int (since C++11)

| 

  * long long int (since C++11)
  * unsigned long long int (since C++11)

  
both `ll`/`LL`  
and `u`/`U` | 

  * unsigned long long int (since C++11)

| 

  * unsigned long long int (since C++11)

  
`z` or `Z` | 

  * the signed version of [std::size_t](../types/size_t.html "cpp/types/size t") (since C++23)

| 

  * the signed version of [std::size_t](../types/size_t.html "cpp/types/size t") (since C++23)
  * [std::size_t](../types/size_t.html "cpp/types/size t") (since C++23)

  
both `z`/`Z`  
and `u`/`U` | 

  * [std::size_t](../types/size_t.html "cpp/types/size t") (since C++23)

| 

  * [std::size_t](../types/size_t.html "cpp/types/size t") (since C++23)

  
  
If the value of the integer literal that does not have size-suffix(since C++23) is too big to fit in any of the types allowed by suffix/base combination and the compiler supports an extended integer type (such as __int128) which can represent the value of the literal, the literal may be given that extended integer type — otherwise the program is ill-formed. 

### Notes

Letters in the integer literals are case-insensitive: `0xDeAdBeEfU` and `0XdeadBEEFu` represent the same number (one exception is the long-long-suffix, which is either `ll` or `LL`, never `lL` or `Ll`)(since C++11). 

There are no negative integer literals. Expressions such as -1 apply the [unary minus operator](operator_arithmetic.html "cpp/language/operator arithmetic") to the value represented by the literal, which may involve implicit type conversions. 

In C prior to C99 (but not in C++), unsuffixed decimal values that do not fit in long int are allowed to have the type unsigned long int. 

When used in a controlling expression of [` #if`](../preprocessor/conditional.html "cpp/preprocessor/conditional") or [` #elif`](../preprocessor/conditional.html "cpp/preprocessor/conditional"), all signed integer constants act as if they have type [std::intmax_t](../types/integer.html "cpp/types/integer") and all unsigned integer constants act as if they have type [std::uintmax_t](../types/integer.html "cpp/types/integer").  | (since C++11)  
---|---  
  
Due to [maximal munch](translation_phases.html#maximal_munch "cpp/language/translation phases"), hexadecimal integer literals ending in `**e**` and `**E**`, when followed by the operators `**+**` or `**-**`, must be separated from the operator with whitespace or parentheses in the source: 
    
    
    auto x = 0xE+2.0;   // error
    auto y = 0xa+2.0;   // OK
    auto z = 0xE +2.0;  // OK
    auto q = (0xE)+2.0; // OK

Otherwise, a single invalid preprocessing number token is formed, which causes further analysis to fail. 

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_binary_literals`](../experimental/feature_test.html#cpp_binary_literals "cpp/feature test") | [`201304L`](../compiler_support/14.html#cpp_binary_literals_201304L "cpp/compiler support/14") | (C++14) | [Binary literals](integer_literal.html#Syntax)  
[`__cpp_size_t_suffix`](../experimental/feature_test.html#cpp_size_t_suffix "cpp/feature test") | [`202011L`](../compiler_support/23.html#cpp_size_t_suffix_202011L "cpp/compiler support/23") | (C++23) | Literal suffixes for [std::size_t](../types/size_t.html "cpp/types/size t") and its signed version   
  
### Example

Run this code
    
    
    #include <cstddef>
    #include <iostream>
    #include <type_traits>
     
    int main()
    {
        [std::cout](../io/cout.html) << 123 << '\n'
                  << 0123 << '\n'
                  << 0x123 << '\n'
                  << 0b10 << '\n'
                  << 12345678901234567890ull << '\n'
                  << 12345678901234567890u << '\n'; // the type is unsigned long long
                                                    // even without a long long suffix
     
    //  std::cout << -9223372036854775808 << '\n'; // error: the value
                   // 9223372036854775808 cannot fit in signed long long, which is the
                   // biggest type allowed for unsuffixed decimal integer literal
        [std::cout](../io/cout.html) << -9223372036854775808u << '\n'; // unary minus applied to unsigned
                   // value subtracts it from 2^64, this gives 9223372036854775808
        [std::cout](../io/cout.html) << -9223372036854775807 - 1 << '\n'; // correct way to calculate
                                                       // the value -9223372036854775808
     
    #if __cpp_size_t_suffix >= 202011L // C++23
        static_assert([std::is_same_v](../types/is_same.html)<decltype(0UZ), [std::size_t](../types/size_t.html)>);
        static_assert([std::is_same_v](../types/is_same.html)<decltype(0Z), [std::make_signed_t](../types/make_signed.html)<[std::size_t](../types/size_t.html)>>);
    #endif
    }

Output: 
    
    
    123
    83
    291
    2
    12345678901234567890
    12345678901234567890
    9223372036854775808
    -9223372036854775808

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 2698](https://cplusplus.github.io/CWG/issues/2698.html) | C++23  | an integer literal with size-suffix could have an extended integer type  | ill-formed if too large   
  
### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 5.13.2 Integer literals [lex.icon] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 5.13.2 Integer literals [lex.icon] 



  * C++17 standard (ISO/IEC 14882:2017): 



    

  * 5.13.2 Integer literals [lex.icon] 



  * C++14 standard (ISO/IEC 14882:2014): 



    

  * 2.14.2 Integer literals [lex.icon] 



  * C++11 standard (ISO/IEC 14882:2011): 



    

  * 2.14.2 Integer literals [lex.icon] 



  * C++98 standard (ISO/IEC 14882:1998): 



    

  * 2.13.1 Integer literals [lex.icon] 



### See also

[ user-defined literals](user_literal.html "cpp/language/user literal")(C++11) |  literals with user-defined suffix  
---|---  
[C documentation](../../c/language/integer_constant.html "c/language/integer constant") for integer constant
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
