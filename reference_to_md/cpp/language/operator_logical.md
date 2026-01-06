

  
  
  
  
  

  
  
  

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
**Logical operators**  
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
  


Returns the result of a boolean operation. 

Operator name  | Syntax  | [Over​load​able](operators.html "cpp/language/operators") | Prototype examples (for class T)   
---|---|---|---  
Inside class definition  | Outside class definition   
negation  | not a !a | Yes  | bool T::operator!() const; | bool operator!(const T &a);  
AND  | a and b a && b | Yes  | bool T::operator&&(const T2 &b) const; | bool operator&&(const T &a, const T2 &b);  
inclusive OR  | a or b a || b | Yes  | bool T::operator||(const T2 &b) const; | bool operator||(const T &a, const T2 &b);  
  
    **Notes**  


  * The keyword-like forms (and,or,not) and the symbol-like forms (&&,||,!) can be used interchangeably (see [alternative representations](operator_alternative.html "cpp/language/operator alternative")). 
  * All built-in operators return bool, and most [user-defined overloads](operators.html "cpp/language/operators") also return bool so that the user-defined operators can be used in the same manner as the built-ins. However, in a user-defined operator overload, any type can be used as return type (including void). 
  * Builtin operators `**& &**` and `**||**` perform short-circuit evaluation (do not evaluate the second operand if the result is known after evaluating the first), but overloaded operators behave like regular function calls and always evaluate both operands. 

  
  
## Contents

  * [1 Explanation](operator_logical.html#Explanation)
  * [2 Results](operator_logical.html#Results)
  * [3 Example](operator_logical.html#Example)
  * [4 Standard library](operator_logical.html#Standard_library)
  * [5 See also](operator_logical.html#See_also)

  
---  
  
### Explanation

The logic operator expressions have the form   
  
---  
`**!**` rhs |  (1)  |   
lhs `**& &**` rhs |  (2)  |   
lhs `**||**` rhs |  (3)  |   
  
1) Logical NOT

2) Logical AND

3) Logical inclusive OR

If the operand is not bool, it is converted to bool using [contextual conversion to bool](implicit_cast.html "cpp/language/implicit conversion"): it is only well-formed if the declaration `bool t(arg)` is well-formed, for some invented temporary `t`. 

The result is a bool prvalue. 

For the built-in logical NOT operator, the result is true if the operand is false. Otherwise, the result is false. 

For the built-in logical AND operator, the result is true if both operands are true. Otherwise, the result is false. This operator is [short-circuiting](https://en.wikipedia.org/wiki/Short-circuit_evaluation "enwiki:Short-circuit evaluation"): if the first operand is false, the second operand is not evaluated. 

For the built-in logical OR operator, the result is true if either the first or the second operand (or both) is true. This operator is short-circuiting: if the first operand is true, the second operand is not evaluated. 

Note that [bitwise logic operators](operator_arithmetic.html "cpp/language/operator arithmetic") do not perform short-circuiting. 

### Results

a | true | false  
---|---|---  
!a | false | true  
and | a  
---|---  
true | false  
b | true | true | false  
false | false | false  
or | a  
---|---  
true | false  
b | true | true | true  
false | true | false  
  
In [overload resolution against user-defined operators](overload_resolution.html#Call_to_an_overloaded_operator "cpp/language/overload resolution"), the following built-in function signatures participate in overload resolution: 

bool operator!(bool) |  |   
---|---|---  
bool operator&&(bool, bool) |  |   
bool operator||(bool, bool) |  |   
| |   
  
### Example

Run this code
    
    
    #include <iostream>
    #include <sstream>
    #include <string>
     
    int main()
    {
        int n = 2;
        int* p = &n;
        // pointers are convertible to bool
        if (    p && *p == 2  // "*p" is safe to use after "p &&"
            || !p &&  n != 2) // || has lower precedence than &&
            [std::cout](../io/cout.html) << "true\n";
     
        // streams are also convertible to bool
        [std::stringstream](../io/basic_stringstream.html) cin;
        cin << "3...\n" << "2...\n" << "1...\n" << "quit";
        [std::cout](../io/cout.html) << "Enter 'quit' to quit.\n";
        for ([std::string](../string/basic_string.html) line;    [std::cout](../io/cout.html) << "> "
                               && [std::getline](../string/basic_string/getline.html)(cin, line)
                               && line != "quit";)
            [std::cout](../io/cout.html) << line << '\n';
    }

Output: 
    
    
    true
    Enter 'quit' to quit.
    > 3...
    > 2...
    > 1...
    >

### Standard library

Because the short-circuiting properties of `operator&&` and `operator||` do not apply to overloads, and because types with boolean semantics are uncommon, only two standard library classes overload these operators: 

[ operator!](../numeric/valarray/operator_arith.html "cpp/numeric/valarray/operator arith") |  applies a unary arithmetic operator to each element of the valarray   
(public member function of `std::valarray<T>`)  
---|---  
[ operator&&operator||](../numeric/valarray/operator_arith3.html "cpp/numeric/valarray/operator arith3") |  applies binary operators to each element of two valarrays, or a valarray and a value   
(function template)  
[ operator!](../io/basic_ios/operator!.html "cpp/io/basic ios/operator!") |  checks if an error has occurred (synonym of [fail()](../io/basic_ios/fail.html "cpp/io/basic ios/fail"))   
(public member function of `std::basic_ios<CharT,Traits>`)   
  
### See also

[Operator precedence](operator_precedence.html "cpp/language/operator precedence")

[Operator overloading](operators.html "cpp/language/operators")

[ logical_and](../utility/functional/logical_and.html "cpp/utility/functional/logical and") |  function object implementing x && y   
(class template)   
---|---  
[ logical_or](../utility/functional/logical_or.html "cpp/utility/functional/logical or") |  function object implementing x || y   
(class template)   
[ logical_not](../utility/functional/logical_not.html "cpp/utility/functional/logical not") |  function object implementing !x   
(class template)   
Common operators   
---  
[assignment](operator_assignment.html "cpp/language/operator assignment") | [increment  
decrement](operator_incdec.html "cpp/language/operator incdec") | [arithmetic](operator_arithmetic.html "cpp/language/operator arithmetic") | **logical** | [comparison](operator_comparison.html "cpp/language/operator comparison") | [member  
access](operator_member_access.html "cpp/language/operator member access") | [other](operator_other.html "cpp/language/operator other")  
a = b  
a += b  
a -= b  
a *= b  
a /= b  
a %= b  
a &= b  
a |= b  
a ^= b  
a <<= b  
a >>= b |  ++a  
\--a  
a++  
a\-- |  +a  
-a  
a + b  
a - b  
a * b  
a / b  
a % b  
~a  
a & b  
a | b  
a ^ b  
a << b  
a >> b |  !a  
a && b  
a || b |  a == b  
a != b  
a < b  
a > b  
a <= b  
a >= b  
a <=> b |  a[...]  
*a  
&a  
a->b  
a.b  
a->*b  
a.*b | function call  
  
a(...)  
comma  
  
a, b  
conditional  
  
a ? b : c  
Special operators   
[`static_cast`](static_cast.html "cpp/language/static cast") converts one type to another related type  
[`dynamic_cast`](dynamic_cast.html "cpp/language/dynamic cast") converts within inheritance hierarchies  
[`const_cast`](const_cast.html "cpp/language/const cast") adds or removes [cv](cv.html "cpp/language/cv")-qualifiers  
[`reinterpret_cast`](reinterpret_cast.html "cpp/language/reinterpret cast") converts type to unrelated type  
[C-style cast](explicit_cast.html "cpp/language/explicit cast") converts one type to another by a mix of static_cast, const_cast, and reinterpret_cast  
[`new`](new.html "cpp/language/new") creates objects with dynamic storage duration  
[`delete`](delete.html "cpp/language/delete") destructs objects previously created by the new expression and releases obtained memory area  
[`sizeof`](sizeof.html "cpp/language/sizeof") queries the size of a type  
[`sizeof...`](sizeof....html "cpp/language/sizeof...") queries the size of a [pack](parameter_pack.html "cpp/language/pack") (since C++11)  
[`typeid`](typeid.html "cpp/language/typeid") queries the type information of a type  
[`noexcept`](noexcept.html "cpp/language/noexcept") checks if an expression can throw an exception (since C++11)  
[`alignof`](alignof.html "cpp/language/alignof") queries alignment requirements of a type (since C++11)  
[C documentation](../../c/language/operator_logical.html "c/language/operator logical") for Logical operators  
---
