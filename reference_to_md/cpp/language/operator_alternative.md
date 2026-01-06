

  
  
  
  
  

  
  
  
[Expressions](expressions.html "cpp/language/expressions")  
---  
| [Value categories](value_category.html "cpp/language/value category")  
---  
[Order of evaluation](eval_order.html "cpp/language/eval order")  
  
| [Operators](operators.html "cpp/language/operators")  
---  
[Operator precedence](operator_precedence.html "cpp/language/operator precedence")  
  
**Alternative representations**  
[Literals](expressions.html#Literals "cpp/language/expressions")  
[Boolean](bool_literal.html "cpp/language/bool literal") \- [Integer](integer_literal.html "cpp/language/integer literal") \- [Floating-point](floating_literal.html "cpp/language/floating literal")  
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
**Alternative representations of operators**  
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
  


C++ (and C) source code may be written in any non-ASCII 7-bit character set that includes the [ISO 646:1983](https://en.wikipedia.org/wiki/ISO_646 "enwiki:ISO 646") invariant character set. However, several C++ operators and punctuators require characters that are outside of the ISO 646 codeset: `{, }, [, ], #, \, ^, |, ~`. To be able to use character encodings where some or all of these symbols do not exist (such as the German [DIN 66003](https://en.wikipedia.org/wiki/DIN_66003 "enwiki:DIN 66003")), C++ defines the following alternatives composed of ISO 646 compatible characters. 

## Contents

  * [1 Alternative tokens](operator_alternative.html#Alternative_tokens)
  * [2 Trigraphs (removed in C++17)](operator_alternative.html#Trigraphs_.28removed_in_C.2B.2B17.29)
  * [3 Notes](operator_alternative.html#Notes)
  * [4 Compatibility with C](operator_alternative.html#Compatibility_with_C)
  * [5 Keywords](operator_alternative.html#Keywords)
  * [6 Example](operator_alternative.html#Example)
  * [7 References](operator_alternative.html#References)
  * [8 See also](operator_alternative.html#See_also)

  
---  
  
### Alternative tokens

There are alternative spellings for several operators and other tokens that use non-ISO646 characters. In all respects of the language, each alternative token behaves exactly the same as its primary token, except for its spelling (the [stringification operator](../preprocessor/replace.html "cpp/preprocessor/replace") can make the spelling visible). The two-letter alternative tokens are sometimes called "digraphs". Despite being four-letters long, %:%: is also considered a digraph. 

Primary  | Alternative   
---|---  
`&&` | [`and`](../keyword/and.html "cpp/keyword/and")  
`&=` | [`and_eq`](../keyword/and_eq.html "cpp/keyword/and eq")  
`&` | [`bitand`](../keyword/bitand.html "cpp/keyword/bitand")  
`|` | [`bitor`](../keyword/bitor.html "cpp/keyword/bitor")  
`~` | [`compl`](../keyword/compl.html "cpp/keyword/compl")  
`!` | [`not`](../keyword/not.html "cpp/keyword/not")  
`!=` | [`not_eq`](../keyword/not_eq.html "cpp/keyword/not eq")  
`||` | [`or`](../keyword/or.html "cpp/keyword/or")  
`|=` | [`or_eq`](../keyword/or_eq.html "cpp/keyword/or eq")  
`^` | [`xor`](../keyword/xor.html "cpp/keyword/xor")  
`^=` | [`xor_eq`](../keyword/xor_eq.html "cpp/keyword/xor eq")  
`{` | `<%`  
`}` | `%>`  
`[` | `<:`  
`]` | `:>`  
`#` | `%:`  
`##` | `%:%:`  
  
### Trigraphs (removed in C++17)

The following three-character groups (trigraphs) are [parsed before comments and string literals are recognized](translation_phases.html "cpp/language/translation phases"), and each appearance of a trigraph is replaced by the corresponding primary character: 

Primary  | Trigraph   
---|---  
`{` | `??<`  
``} | `??>`  
`[` | `??(`  
`]` | `??)`  
`#` | `??=`  
`\` | `??/`  
`^` | `??'`  
`|` | `??!`  
`~` | `??-`  
  
Because trigraphs are processed early, a comment such as // Will the next line be executed?????/ will effectively comment out the following line, and the string literal such as "Enter date ??/??/??" is parsed as "Enter date \\\??". 

### Notes

The characters & and ! are invariant under ISO-646, but alternatives are provided for the tokens that use these characters anyway to accommodate even more restrictive historical charsets. 

There is no alternative spelling (such as eq) for the equality operator == because the character = was present in all supported charsets. 

### Compatibility with C

The same words are defined in the C programming language in the include file [`<iso646.h>`](../../c/header/iso646.html "c/header/iso646") as macros. Because in C++ these are built into the language, the C++ version of [`<iso646.h>`](../header/ciso646.html "cpp/header/ciso646"), as well as [`<ciso646>`](../header/ciso646.html "cpp/header/ciso646"), does not define anything. The non-word digraphs (e.g <%), however, are part of the core language and can be used without including any header (otherwise, they would be unusable on any charset that lacks #). 

### Keywords

[`and`](../keyword/and.html "cpp/keyword/and"), [`and_eq`](../keyword/and_eq.html "cpp/keyword/and eq"), [`bitand`](../keyword/bitand.html "cpp/keyword/bitand"), [`bitor`](../keyword/bitor.html "cpp/keyword/bitor"), [`compl`](../keyword/compl.html "cpp/keyword/compl"), [`not`](../keyword/not.html "cpp/keyword/not"), [`not_eq`](../keyword/not_eq.html "cpp/keyword/not eq"), [`or`](../keyword/or.html "cpp/keyword/or"), [`or_eq`](../keyword/or_eq.html "cpp/keyword/or eq"), [`xor`](../keyword/xor.html "cpp/keyword/xor"), [`xor_eq`](../keyword/xor_eq.html "cpp/keyword/xor eq")

### Example

The following example demonstrates the use of several alternative tokens.

Run this code
    
    
    %:include <iostream>
     
    struct X
    <%
        compl X() <%%> // destructor
        X() <%%>
        X(const X bitand) = delete; // copy constructor
        // X(X and) = delete; // move constructor
     
        bool operator not_eq(const X bitand other)
        <%
           return this not_eq bitand other;
        %>
    %>;
     
    int main(int argc, char* argv<::>) 
    <%
        // lambda with reference-capture:
        auto greet = <:bitand:>(const char* name)
        <%
            [std::cout](../io/cout.html) << "Hello " << name
                      << " from " << argv<:0:> << '\n';
        %>;
     
        if (argc > 1 and argv<:1:> not_eq nullptr)
            greet(argv<:1:>);
        else
            greet("Anon");
    %>

Possible output: 
    
    
    Hello Anon from ./a.out

### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 5.5 Alternative tokens [lex.digraph] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 5.5 Alternative tokens [lex.digraph] 



  * C++17 standard (ISO/IEC 14882:2017): 



    

  * 5.5 Alternative tokens [lex.digraph] 



  * C++14 standard (ISO/IEC 14882:2014): 



    

  * 2.4 Trigraph sequences [lex.trigraph] 



    

  * 2.6 Alternative tokens [lex.digraph] 



  * C++11 standard (ISO/IEC 14882:2011): 



    

  * 2.4 Trigraph sequences [lex.trigraph] 



    

  * 2.6 Alternative tokens [lex.digraph] 



  * C++03 standard (ISO/IEC 14882:2003): 



    

  * 2.3 Trigraph sequences [lex.trigraph] 



    

  * 2.5 Alternative tokens [lex.digraph] 



  * C++98 standard (ISO/IEC 14882:1998): 



    

  * 2.3 Trigraph sequences [lex.trigraph] 



    

  * 2.5 Alternative tokens [lex.digraph] 



### See also

[C documentation](../../c/language/operator_alternative.html "c/language/operator alternative") for Alternative operators and tokens  
---
