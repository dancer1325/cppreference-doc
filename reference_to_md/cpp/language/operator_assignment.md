

  
| [`goto`](goto.html "cpp/language/goto") \- [`return`](return.html "cpp/language/return")  
---  
  
[Functions](functions.html "cpp/language/functions")  
[Function declaration](function.html "cpp/language/function")  
[Lambda function expression](lambda.html "cpp/language/lambda")  
[`inline` specifier](inline.html "cpp/language/inline")  
[Dynamic exception specifications](except_spec.html "cpp/language/except spec") (until C++17*)  
[`noexcept` specifier](noexcept_spec.html "cpp/language/noexcept spec") (C++11)  
Exceptions  
| [`throw`-expression](throw.html "cpp/language/throw")  
---  
[`try` block](try.html "cpp/language/try")  
  
|   
  
---  
[`catch` handler](catch.html "cpp/language/catch")  
  
Namespaces  
| [Namespace declaration](namespace.html "cpp/language/namespace")` `  
---  
  
| [Namespace aliases](namespace_alias.html "cpp/language/namespace alias")  
---  
  
Types  
| [Fundamental types](types.html "cpp/language/types")  
---  
[Enumeration types](enum.html "cpp/language/enum")  
[Function types](function.html "cpp/language/function")  
  
| [Class/struct types](class.html "cpp/language/class")  
---  
[Union types](union.html "cpp/language/union")  
  
  
  

  
  
  

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
| **Assignment operators**  
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
  


Assignment operators modify the value of the object. 

Operator name  |  Syntax  | [Over​load​able](operators.html "cpp/language/operators") | Prototype examples (for class T)   
---|---|---|---  
Inside class definition  | Outside class definition   
simple assignment  | `a = b` | Yes  | T& T::operator =(const T2& b); |  N/A  
addition assignment  | `a += b` | Yes  | T& T::operator +=(const T2& b); | T& operator +=(T& a, const T2& b);  
subtraction assignment  | `a -= b` | Yes  | T& T::operator -=(const T2& b); | T& operator -=(T& a, const T2& b);  
multiplication assignment  | `a *= b` | Yes  | T& T::operator *=(const T2& b); | T& operator *=(T& a, const T2& b);  
division assignment  | `a /= b` | Yes  | T& T::operator /=(const T2& b); | T& operator /=(T& a, const T2& b);  
remainder assignment  | `a %= b` | Yes  | T& T::operator %=(const T2& b); | T& operator %=(T& a, const T2& b);  
bitwise AND assignment  | `a &= b` | Yes  | T& T::operator &=(const T2& b); | T& operator &=(T& a, const T2& b);  
bitwise OR assignment  | `a |= b` | Yes  | T& T::operator |=(const T2& b); | T& operator |=(T& a, const T2& b);  
bitwise XOR assignment  | `a ^= b` | Yes  | T& T::operator ^=(const T2& b); | T& operator ^=(T& a, const T2& b);  
bitwise left shift assignment  | `a <<= b` | Yes  | T& T::operator <<=(const T2& b); | T& operator <<=(T& a, const T2& b);  
bitwise right shift assignment  | `a >>= b` | Yes  | T& T::operator >>=(const T2& b); | T& operator >>=(T& a, const T2& b);  
  
    **Notes**  


  * All built-in assignment operators return *this, and most [user-defined overloads](operators.html "cpp/language/operators") also return *this so that the user-defined operators can be used in the same manner as the built-ins. However, in a user-defined operator overload, any type can be used as return type (including void). 
  * `T2` can be any type including `T`. 

  
  
## Contents

  * [1 Definitions](operator_assignment.html#Definitions)
  * [2 Assignment operator syntax](operator_assignment.html#Assignment_operator_syntax)
  * [3 Built-in simple assignment operator](operator_assignment.html#Built-in_simple_assignment_operator)
    * [3.1 Assignment from an expression](operator_assignment.html#Assignment_from_an_expression)
    * [3.2 Assignment from a non-expression initializer clause](operator_assignment.html#Assignment_from_a_non-expression_initializer_clause)
  * [4 Built-in compound assignment operator](operator_assignment.html#Built-in_compound_assignment_operator)
  * [5 Example](operator_assignment.html#Example)
  * [6 Defect reports](operator_assignment.html#Defect_reports)
  * [7 See also](operator_assignment.html#See_also)

  
---  
  
### Definitions

_Copy assignment_ replaces the contents of the object a with a copy of the contents of b (b is not modified). For class types, this is performed in a special member function, described in [copy assignment operator](as_operator.html "cpp/language/copy assignment"). 

_Move assignment_ replaces the contents of the object a with the contents of b, avoiding copying if possible (b may be modified). For class types, this is performed in a special member function, described in [move assignment operator](move_operator.html "cpp/language/move assignment").  | (since C++11)  
---|---  
  
For non-class types, copy and move assignment are indistinguishable and are referred to as _direct assignment_. 

_Compound assignment_ replace the contents of the object a with the result of a binary operation between the previous value of a and the value of b. 

### Assignment operator syntax

The assignment expressions have the form   
  
---  
target-expr `**=**` new-value |  (1)  |   
target-expr op new-value |  (2)  |   
target-expr |  \-  |  the expression[[1]](operator_assignment.html#cite_note-1) to be assigned to   
---|---|---  
op |  \-  |  one of *=, /= %=, += -=, <<=, >>=, &=, ^=, |=  
new-value |  \-  |  the expression[[2]](operator_assignment.html#cite_note-2)(until C++11)[initializer clause](initialization.html#Initializer "cpp/language/initialization")(since C++11) to assign to the target   
  
  1. [↑](operator_assignment.html#cite_ref-1) target-expr must have higher [precedence](operator_precedence.html "cpp/language/operator precedence") than an assignment expression.
  2. [↑](operator_assignment.html#cite_ref-2) new-value cannot be a comma expression, because its [precedence](operator_precedence.html "cpp/language/operator precedence") is lower.



1) Simple assignment expression.

2) Compound assignment expression.

If new-value is not an expression, the assignment expression will never match an overloaded compound assignment operator.  | (since C++11)  
---|---  
  
### Built-in simple assignment operator

For the built-in simple assignment, target-expr must be a modifiable lvalue. 

The object referred to by target-expr is modified by replacing its value with the result of new-value. If the object referred is of an integer type `T`, and the result of new-value is of the corresponding signed/unsigned integer type, the value of the object is replaced with the value of type `T` with the same value representation of the result of new-value. 

The result of a built-in simple assignment is an lvalue of the type of target-expr, referring to target-expr. If target-expr is a [bit-field](bit_field.html "cpp/language/bit field"), the result is also a bit-field. 

#### Assignment from an expression

If new-value is an expression, it is [implicitly converted](implicit_cast.html "cpp/language/implicit conversion") to the cv-unqualified type of target-expr. When target-expr is a bit-field that cannot represent the value of the expression, the resulting value of the bit-field is implementation-defined. 

If target-expr and new-value identify overlapping objects, the behavior is undefined (unless the overlap is exact and the type is the same). 

If the type of target-expr is volatile-qualified, the assignment is deprecated, unless the (possibly parenthesized) assignment expression is a [discarded-value expression](expressions.html#Discarded-value_expressions "cpp/language/expressions") or an [unevaluated operand](expressions.html#Potentially-evaluated_expressions "cpp/language/expressions").  | (since C++20)  
---|---  
  
  


####  Assignment from a non-expression initializer clause

new-value is only allowed not to be an expression in following situations: 

  * target-expr is of a [scalar type](../named_req/ScalarType.html "cpp/named req/ScalarType") `T`, and new-value is empty or has only one element. In this case, given an invented variable t declared and initialized as T t =` `new-value ﻿, the meaning of x =` `new-value ﻿ is x = t. 
  * target-expr is of class type. In this case, new-value is passed as the argument to the assignment operator function selected by [overload resolution](overload_resolution.html "cpp/language/overload resolution"). 


    
    
    #include <complex>
     
    [std::complex](../numeric/complex.html)<double> z;
    z = {1, 2};  // meaning z.operator=({1, 2})
    z += {1, 2}; // meaning z.operator+=({1, 2})
     
    int a, b;
    a = b = {1}; // meaning a = b = 1;
    a = {1} = b; // syntax error

| (since C++11)  
---|---  
  
In [overload resolution against user-defined operators](overload_resolution.html#Call_to_an_overloaded_operator "cpp/language/overload resolution"), for every type `T`, the following function signatures participate in overload resolution: 

T*& operator=(T*&, T*); |  |   
---|---|---  
T*volatile & operator=(T*volatile &, T*); |  |   
| |   
  
For every enumeration or pointer to member type `T`, optionally volatile-qualified, the following function signature participates in overload resolution: 

T& operator=(T&, T); |  |   
---|---|---  
| |   
  
For every pair `A1` and `A2`, where `A1` is an arithmetic type (optionally volatile-qualified) and `A2` is a promoted arithmetic type, the following function signature participates in overload resolution: 

A1& operator=(A1&, A2); |  |   
---|---|---  
| |   
  
### Built-in compound assignment operator

The behavior of every built-in compound-assignment expression target-expr` `` _op_` ﻿=` `new-value is exactly the same as the behavior of the expression target-expr` `=` `target-expr` `` _op_`` `new-value, except that target-expr is evaluated only once. 

The requirements on target-expr and new-value of built-in simple assignment operators also apply. Furthermore: 

  * For += and -=, the type of target-expr must be an [arithmetic type](type-id.html "cpp/language/type") or a pointer to a (possibly cv-qualified) completely-defined [object type](type-id.html "cpp/language/type"). 
  * For all other compound assignment operators, the type of target-expr must be an arithmetic type. 



In [overload resolution against user-defined operators](overload_resolution.html#Call_to_an_overloaded_operator "cpp/language/overload resolution"), for every pair `A1` and `A2`, where `A1` is an arithmetic type (optionally volatile-qualified) and `A2` is a promoted arithmetic type, the following function signatures participate in overload resolution: 

A1& operator*=(A1&, A2); |  |   
---|---|---  
A1& operator/=(A1&, A2); |  |   
A1& operator+=(A1&, A2); |  |   
A1& operator-=(A1&, A2); |  |   
| |   
  
For every pair `I1` and `I2`, where `I1` is an integral type (optionally volatile-qualified) and `I2` is a promoted integral type, the following function signatures participate in overload resolution: 

I1& operator%=(I1&, I2); |  |   
---|---|---  
I1& operator<<=(I1&, I2); |  |   
I1& operator>>=(I1&, I2); |  |   
I1& operator&=(I1&, I2); |  |   
I1& operator^=(I1&, I2); |  |   
I1& operator|=(I1&, I2); |  |   
| |   
  
For every optionally cv-qualified object type `T`, the following function signatures participate in overload resolution: 

T*& operator+=(T*&, [std::ptrdiff_t](../types/ptrdiff_t.html)); |  |   
---|---|---  
T*& operator-=(T*&, [std::ptrdiff_t](../types/ptrdiff_t.html)); |  |   
T*volatile & operator+=(T*volatile &, [std::ptrdiff_t](../types/ptrdiff_t.html)); |  |   
T*volatile & operator-=(T*volatile &, [std::ptrdiff_t](../types/ptrdiff_t.html)); |  |   
| |   
  
### Example

Run this code
    
    
    #include <iostream>
     
    int main()
    {
        int n = 0;        // not an assignment
     
        n = 1;            // direct assignment
        [std::cout](../io/cout.html) << n << ' ';
     
        n = {};           // zero-initialization, then assignment
        [std::cout](../io/cout.html) << n << ' ';
     
        n = 'a';          // integral promotion, then assignment
        [std::cout](../io/cout.html) << n << ' ';
     
        n = {'b'};        // explicit cast, then assignment
        [std::cout](../io/cout.html) << n << ' ';
     
        n = 1.0;          // floating-point conversion, then assignment
        [std::cout](../io/cout.html) << n << ' ';
     
    //  n = {1.0};        // compiler error (narrowing conversion)
     
        int& r = n;       // not an assignment
        r = 2;            // assignment through reference
        [std::cout](../io/cout.html) << n << ' ';
     
        int* p;
        p = &n;           // direct assignment
        p = nullptr;      // null-pointer conversion, then assignment
        [std::cout](../io/cout.html) << p << ' ';
     
        struct { int a; [std::string](../string/basic_string.html) s; } obj;
        obj = {1, "abc"}; // assignment from a braced-init-list
        [std::cout](../io/cout.html) << obj.a << ':' << obj.s << '\n';
    }

Possible output: 
    
    
    1 0 97 98 1 2 (nil) 1:abc

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 1527](https://cplusplus.github.io/CWG/issues/1527.html) | C++11  | for assignments to class type objects, the right operand  
could be an initializer list only when the assignment  
is defined by a user-defined assignment operator  | removed user-defined  
assignment constraint   
[CWG 1538](https://cplusplus.github.io/CWG/issues/1538.html) | C++11  | E1 = {E2} was equivalent to E1 = T(E2)  
(`T` is the type of `E1`), this introduced a C-style cast  | it is equivalent  
to E1 = T{E2}  
[CWG 2654](https://cplusplus.github.io/CWG/issues/2654.html) | C++20  | compound assignment operators for volatile  
-qualified types were inconsistently deprecated  | none of them  
is deprecated   
[CWG 2768](https://cplusplus.github.io/CWG/issues/2768.html) | C++11  | an assignment from a non-expression initializer clause  
to a scalar value would perform direct-list-initialization  | performs copy-list-  
initialization instead   
[CWG 2901](https://cplusplus.github.io/CWG/issues/2901.html) | C++98  | the value assigned to an unsigned int  
object through an int lvalue is unclear  | made clear   
[P2327R1](https://wg21.link/P2327R1) | C++20  | bitwise compound assignment operators for volatile types  
were deprecated while being useful for some platforms  | they are not  
deprecated   
  
### See also

[Operator precedence](operator_precedence.html "cpp/language/operator precedence")

[Operator overloading](operators.html "cpp/language/operators")

Common operators   
---  
**assignment** | [increment  
decrement](operator_incdec.html "cpp/language/operator incdec") | [arithmetic](operator_arithmetic.html "cpp/language/operator arithmetic") | [logical](operator_logical.html "cpp/language/operator logical") | [comparison](operator_comparison.html "cpp/language/operator comparison") | [member  
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
[C documentation](../../c/language/operator_assignment.html "c/language/operator assignment") for Assignment operators  
---
