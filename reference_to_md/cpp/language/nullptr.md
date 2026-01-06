

  
  
  
  
  

  
  
  
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
[Boolean](bool_literal.html "cpp/language/bool literal") \- [Integer](integer_literal.html "cpp/language/integer literal") \- [Floating-point](floating_literal.html "cpp/language/floating literal")  
[Character](character_literal.html "cpp/language/character literal") \- [String](string_literal.html "cpp/language/string literal") \- **`nullptr`** (C++11)  
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
**Null pointer literal** (C++11)  
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
  


## Contents

  * [1 Syntax](nullptr.html#Syntax)
  * [2 Explanation](nullptr.html#Explanation)
  * [3 Keywords](nullptr.html#Keywords)
  * [4 Example](nullptr.html#Example)
  * [5 References](nullptr.html#References)
  * [6 See also](nullptr.html#See_also)

  
---  
  
### Syntax  
  
---  
`**nullptr**` |  |   
  
### Explanation

The keyword `nullptr` denotes the pointer literal. It is a [prvalue](value_category.html "cpp/language/value category") of type [std::nullptr_t](../types/nullptr_t.html "cpp/types/nullptr t"). There exist [implicit conversions](implicit_cast.html "cpp/language/implicit conversion") from `nullptr` to null pointer value of any pointer type and any pointer to member type. Similar conversions exist for any null pointer constant, which includes values of type [std::nullptr_t](../types/nullptr_t.html "cpp/types/nullptr t") as well as the macro [NULL](../types/NULL.html "cpp/types/NULL"). 

### Keywords

[`nullptr`](../keyword/nullptr.html "cpp/keyword/nullptr")

### Example

Demonstrates that `nullptr` retains the meaning of null pointer constant even if it is no longer a literal.

Run this code
    
    
    #include <cstddef>
    #include <iostream>
     
    template<class T>
    constexpr T clone(const T& t)
    {
        return t;
    }
     
    void g(int*)
    {
        [std::cout](../io/cout.html) << "Function g called\n";
    }
     
    int main()
    {
        g(nullptr);        // Fine
        g([NULL](../types/NULL.html));           // Fine
        g(0);              // Fine
     
        g(clone(nullptr)); // Fine
    //  g(clone(NULL));    // ERROR: non-literal zero cannot be a null pointer constant
    //  g(clone(0));       // ERROR: non-literal zero cannot be a null pointer constant
    }

Output: 
    
    
    Function g called
    Function g called
    Function g called
    Function g called

### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 7.3.12 Pointer conversions [conv.ptr] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 7.3.12 Pointer conversions [conv.ptr] 



  * C++17 standard (ISO/IEC 14882:2017): 



    

  * 7.11 Pointer conversions [conv.ptr] 



  * C++14 standard (ISO/IEC 14882:2014): 



    

  * 4.10 Pointer conversions [conv.ptr] 



  * C++11 standard (ISO/IEC 14882:2011): 



    

  * 4.10 Pointer conversions [conv.ptr] 



### See also

[ NULL](../types/NULL.html "cpp/types/NULL") |  implementation-defined null pointer constant   
(macro constant)   
---|---  
[ nullptr_t](../types/nullptr_t.html "cpp/types/nullptr t")(C++11) |  the type of the null pointer literal **`nullptr`**   
(typedef)   
[C documentation](../../c/language/nullptr.html "c/language/nullptr") for nullptr
