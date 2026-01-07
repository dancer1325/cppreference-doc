

  
  
  
  
  

  
  
  
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
**Boolean** \- [Integer](integer_literal.html "cpp/language/integer literal") \- [Floating-point](floating_literal.html "cpp/language/floating literal")  
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
**Boolean literals**  
[Character literals](character_literal.html "cpp/language/character literal")  
  
| [Escape sequences](escape.html "cpp/language/escape")  
---  
[String literals](string_literal.html "cpp/language/string literal")  
[Null pointer literal](nullptr.html "cpp/language/nullptr") (C++11)  
[User-defined literal](user_literal.html "cpp/language/user literal") (C++11)  
  

  
  


## Contents

  * [1 Syntax](bool_literal.html#Syntax)
  * [2 Explanation](bool_literal.html#Explanation)
  * [3 Notes](bool_literal.html#Notes)
  * [4 Keywords](bool_literal.html#Keywords)
  * [5 Example](bool_literal.html#Example)
  * [6 References](bool_literal.html#References)
  * [7 See also](bool_literal.html#See_also)

  
---  
  
### Syntax  
  
---  
`**true**` |  (1)  |   
`**false**` |  (2)  |   
  
### Explanation

The Boolean literals are the keywords true and false. They are [prvalues](value_category.html#prvalue "cpp/language/value category") of type [`bool`](types.html#Boolean_type "cpp/language/types"). 

### Notes

See [Integral conversions](implicit_cast.html#Integral_conversions "cpp/language/implicit cast") for implicit conversions from `bool` to other types and [boolean conversions](implicit_cast.html#Boolean_conversions "cpp/language/implicit cast") for the implicit conversions from other types to `bool`. 

### Keywords

[`false`](../keyword/false.html "cpp/keyword/false"), [`true`](../keyword/true.html "cpp/keyword/true")

### Example

Run this code
    
    
    #include <iostream>
     
    int main()
    {
        [std::cout](../io/cout.html) << [std::boolalpha](../io/manip/boolalpha.html)
                  << true << '\n'
                  << false << '\n'
                  << [std::noboolalpha](../io/manip/boolalpha.html)
                  << true << '\n'
                  << false << '\n';
    }

Output: 
    
    
    true
    false
    1
    0

### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 5.13.6 Boolean literals [lex.bool] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 5.13.6 Boolean literals [lex.bool] 



  * C++17 standard (ISO/IEC 14882:2017): 



    

  * 5.13.6 Boolean literals [lex.bool] 



  * C++14 standard (ISO/IEC 14882:2014): 



    

  * 2.13.6 Boolean literals [lex.bool] 



  * C++11 standard (ISO/IEC 14882:2011): 



    

  * 2.13.6 Boolean literals [lex.bool] 



  * C++98 standard (ISO/IEC 14882:1998): 



    

  * 2.13.5 Boolean literals [lex.bool] 



### See also

[C documentation](../../c/language/bool_constant.html "c/language/bool constant") for Predefined Boolean constants  
---
