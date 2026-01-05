

  
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
  
  
  

  
  
  
**Expressions**  
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
  


**Expressions**

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
  


An expression is a sequence of _operators_ and their _operands_ , that specifies a computation. 

Expression evaluation may produce a result (e.g., evaluation of 2 + 2 produces the result 4) and may generate side-effects (e.g. evaluation of [std::printf](../io/c/fprintf.html)("%d", 4) prints the character '4' on the standard output). 

Each C++ expression is characterized by two independent properties: A type and a value category. 

## Contents

  * [1 General](expressions.html#General)
  * [2 Operators](expressions.html#Operators)
    * [2.1 Conversions](expressions.html#Conversions)
    * [2.2 Memory allocation](expressions.html#Memory_allocation)
    * [2.3 Other](expressions.html#Other)
  * [3 Primary expressions](expressions.html#Primary_expressions)
    * [3.1 Literals](expressions.html#Literals)
  * [4 Full-expressions](expressions.html#Full-expressions)
  * [5 Potentially-evaluated expressions](expressions.html#Potentially-evaluated_expressions)
  * [6 Discarded-value expressions](expressions.html#Discarded-value_expressions)
  * [7 Expression-equivalence](expressions.html#Expression-equivalence)
  * [8 Defect reports](expressions.html#Defect_reports)
  * [9 See also](expressions.html#See_also)

  
---  
  
#### General

  * [value categories](value_category.html "cpp/language/value category") (lvalue, rvalue, glvalue, prvalue, xvalue(since C++11)) classify expressions by their values 
  * [order of evaluation](eval_order.html "cpp/language/eval order") of arguments and subexpressions specify the order in which intermediate results are obtained 



### Operators

Common operators   
---  
[assignment](operator_assignment.html "cpp/language/operator assignment") | [increment  
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
  
  * [operator precedence](operator_precedence.html "cpp/language/operator precedence") defines the order in which operators are bound to their arguments 
  * [alternative representations](operator_alternative.html "cpp/language/operator alternative") are alternative spellings for some operators 
  * [operator overloading](operators.html "cpp/language/operators") makes it possible to specify the behavior of the operators with user-defined classes. 



#### Conversions

  * [standard conversions](implicit_cast.html "cpp/language/implicit conversion") implicit conversions from one type to another 
  * [`const_cast` conversion](const_cast.html "cpp/language/const cast")
  * [`static_cast` conversion](static_cast.html "cpp/language/static cast")
  * [`dynamic_cast` conversion](dynamic_cast.html "cpp/language/dynamic cast")
  * [`reinterpret_cast` conversion](reinterpret_cast.html "cpp/language/reinterpret cast")
  * [explicit cast](explicit_cast.html "cpp/language/explicit cast") conversion using C-style cast notation and function-style notation 
  * [user-defined conversion](cast_operator.html "cpp/language/cast operator") makes it possible to specify conversion from user-defined classes 



#### Memory allocation

  * [new expression](new.html "cpp/language/new") allocates memory dynamically 
  * [delete expression](delete.html "cpp/language/delete") deallocates memory dynamically 



#### Other

  * [constant expressions](constant_expression.html "cpp/language/constant expression") can be evaluated at compile time and used in compile-time context (template arguments, array sizes, etc) 
  * [`sizeof`](sizeof.html "cpp/language/sizeof")
  * [`alignof`](alignof.html "cpp/language/alignof")
  * [`typeid`](typeid.html "cpp/language/typeid")
  * [throw-expression](throw.html "cpp/language/throw")



### Primary expressions

The operands of any operator may be other expressions or primary expressions (e.g. in 1 + 2 * 3, the operands of operator+ are the [subexpression](expressions.html#Full-expressions) 2 * 3 and the primary expression 1). 

Primary expressions are any of the following: 

  * [`this`](this.html "cpp/language/this")
  * literals (e.g. 2 or "Hello, world") 
  * identifier expressions, including 
    * suitably declared [unqualified identifiers](name.html#Unqualified_identifiers "cpp/language/identifiers") (e.g. n or cout), 
    * suitably declared [qualified identifiers](name.html#Qualified_identifiers "cpp/language/identifiers") (e.g. [std::string::npos](../string/basic_string/npos.html "cpp/string/basic string/npos")), and 
    * identifiers to be declared in [declarators](declarations.html#Declarators "cpp/language/declarations")



    

  * [pack indexing expression](pack_indexing.html#Pack_indexing_expression "cpp/language/pack indexing")


| (since C++26)  
---|---  
  
  * [lambda expressions](lambda.html "cpp/language/lambda")

| (since C++11)  
---|---  
  
  * [fold expressions](fold.html "cpp/language/fold")

| (since C++17)  
  
  * [requires expressions](requires.html "cpp/language/requires")

| (since C++20)  
  
Any expression in parentheses is also classified as a primary expression: this guarantees that the parentheses have higher precedence than any operator. Parentheses preserve value, type, and value category. 

#### Literals

Literals are the tokens of a C++ program that represent constant values embedded in the source code. 

  * [integer literals](integer_literal.html "cpp/language/integer literal") are decimal, octal, hexadecimal or binary numbers of integer type. 
  * [character literals](character_literal.html "cpp/language/character literal") are individual characters of type 



    

  * char or wchar_t



    

  * char16_t or char32_t


| (since C++11)  
---|---  
  
    

  * char8_t


| (since C++20)  
  
  * [floating-point literals](floating_literal.html "cpp/language/floating literal") are values of type float, double, or long double
  * [string literals](string_literal.html "cpp/language/string literal") are sequences of characters of type 



    

  * const char[] or const wchar_t[]



    

  * const char16_t[] or const char32_t[]


| (since C++11)  
---|---  
  
    

  * const char8_t[]


| (since C++20)  
  
  * [boolean literals](bool_literal.html "cpp/language/bool literal") are values of type bool, that is true and false



  * [`nullptr`](nullptr.html "cpp/language/nullptr") is the pointer literal which specifies a null pointer value 
  * [user-defined literals](user_literal.html "cpp/language/user literal") are constant values of user-specified type 

| (since C++11)  
---|---  
  
### Full-expressions

A _constituent expression_ is defined as follows: 

  * The constituent expression of an expression is that expression. 
  * The constituent expressions of a [brace-enclosed initializer list](initialization.html "cpp/language/initialization") or of a (possibly parenthesized) expression list are the constituent expressions of the elements of the respective list. 
  * The constituent expressions of an [initializer](initialization.html "cpp/language/initialization") that begins with `**=**` are the constituent expressions of the initializer-clause. 


    
    
    int num1 = 0;
    num1 += 1; // Case 1: the constituent expression of “num += 1” is “num += 1”
     
    int arr2[2] = {2, 22} // Case 2: the constituent expressions
                          //         of “{2, 22}” are “2” and “22”
                          // Case 3: the constituent expressions of “= {2, 22}”
                          //         are the constituent expressions of “{2, 22}”
                          //         (i.e. also “2” and “22”)

The _immediate subexpressions_ of an expression E are 

  * the constituent expressions of E’s operands, 



  * if E creates an [aggregate](aggregate_initialization.html#Definitions "cpp/language/aggregate initialization") object, the constituent expressions of each [default member initializer](data_members.html#Member_initialization "cpp/language/data members") used in the initialization, 

| (since C++14)  
---|---  
  
  * if E is a [lambda expression](lambda.html "cpp/language/lambda"), the initialization of the entities captured by copy and the constituent expressions of the initializer of the captures, 

| (since C++11)  
  
  * any function call that E implicitly invokes, or 
  * if E is a function call or implicitly invokes a function, the constituent expressions of each [default argument](default_arguments.html "cpp/language/default arguments") used in the call. 



A _subexpression_ of an expression E is an immediate subexpression of E or a subexpression of an immediate subexpression of E. Note that expressions appearing in the “function body” of lambda expressions are not subexpressions of the lambda expression.(since C++11)

The following expressions are _full-expressions ﻿_ : 

  * [unevaluated operands](expressions.html#Potentially-evaluated_expressions)
  * [constant expressions](constant_expression.html "cpp/language/constant expression")



  * [immediate invocations](consteval.html "cpp/language/consteval")

| (since C++20)  
---|---  
  
  * declarators of [simple declarations](declarations.html#Simple_declaration "cpp/language/declarations") or [member initializers](initializer_list.html "cpp/language/constructor"), including the constituent expressions of the initializers 
  * invocations of [destructors](destructor.html "cpp/language/destructor") generated at the end of the [lifetime](lifetime.html "cpp/language/lifetime") of objects other than temporary objects whose lifetime have not been extended 



  * the predicates of [contract assertions](contracts.html "cpp/language/contracts")

| (since C++26)  
---|---  
  
  * expressions that are not a subexpression of any another expression and that are not otherwise part of any full-expression 



If a language construct is defined to produce an implicit call of a function, a use of the language construct is considered to be an expression for the purposes of this definition. Conversions applied to the result of an expression in order to satisfy the requirements of the language construct in which the expression appears are also considered to be part of the full-expression. 

For an initializer, performing the initialization of the entity (including evaluating default member initializers of an aggregate)(since C++14) is also considered part of the full-expression. 

### Potentially-evaluated expressions

An expression is _potentially evaluated_ unless 

  * it is the operand of the [`sizeof`](sizeof.html "cpp/language/sizeof") operator, or 
  * it is the operand of the [`typeid`](typeid.html "cpp/language/typeid") operator and does not designate an lvalue of [polymorphic](objects.html#Polymorphic_objects "cpp/language/object") class type. 

| (until C++11)  
---|---  
The following operands are _unevaluated operands_ , they are not evaluated: 

  * expressions which the [`typeid`](typeid.html "cpp/language/typeid") operator applies to, except glvalues of [polymorphic](objects.html#Polymorphic_objects "cpp/language/object") class types 
  * expressions which are operands of the [`sizeof`](sizeof.html "cpp/language/sizeof") operator 
  * operands of the [`noexcept`](noexcept.html "cpp/language/noexcept") operator 
  * operands of the [`decltype`](decltype.html "cpp/language/decltype") specifier 

| 

  * constraint-expression of [concept](constraints.html#Concepts "cpp/language/constraints") definitions 
  * expressions following the requires keyword of [requires clauses](constraints.html#Requires_clauses "cpp/language/constraints")
  * expressions appearing in requirement-seq of [requires expressions](requires.html "cpp/language/requires")

| (since C++20)  
---|---  
  
An expression is _potentially evaluated_ unless 

  * it is an unevaluated operand, or 
  * it is a subexpression of an unevaluated operand. 

(since C++11)  
  
Potentially-evaluated expressions are [ODR-use](definition.html#ODR-use "cpp/language/definition"). 

| This section is incomplete  
Reason: example of unevaluated operands   
---|---  
  
### Discarded-value expressions

A _discarded-value expression_ is an expression that is used for its side-effects only. The value calculated from such expression is discarded. Such expressions include the full-expression of any [expression statement](statements.html#Expression_statements "cpp/language/statements"), the left-hand operand of the built-in comma operator, or the operand of a cast-expression that casts to the type void. 

Array-to-pointer and function-to-pointer conversions are never applied to the value calculated by a discarded-value expression. The lvalue-to-rvalue conversion is applied if and only if the expression is a [volatile-qualified](cv.html "cpp/language/cv") glvalue and has one of the following forms (built-in meaning required, possibly parenthesized): 

  * id-expression, 
  * array subscript expression, 
  * class member access expression, 
  * indirection, 
  * pointer-to-member operation, 
  * conditional expression where both the second and the third operands are one of these expressions, 
  * comma expression where the right operand is one of these expressions. 



In addition, if the lvalue is of volatile-qualified class type, a volatile copy constructor is required to initialize the resulting rvalue temporary. 

If the expression is a non-void prvalue (after any lvalue-to-rvalue conversion that might have taken place), [temporary materialization](implicit_cast.html#Temporary_materialization "cpp/language/implicit conversion") occurs. Compilers may issue warnings when an expression other than cast to void discards a value declared `[[[nodiscard](attributes/nodiscard.html "cpp/language/attributes/nodiscard")]]`.  | (since C++17)  
---|---  
  


###  Expression-equivalence

A number of expressions e1, e2, ..., eN are _expression-equivalent_ if all following conditions are satisfied: 

  1. They have the same effects. 
  2. Either they are all [constant subexpressions](constant_expression.html#Constant_subexpression "cpp/language/constant expression") or neither is. 
  3. Either they are all [noexcept](noexcept_spec.html "cpp/language/noexcept spec") or else neither is. 

e1 is _expression-equivalent to_ e2 if and only if e1 and e2 are expression-equivalent (which means e2 is also expression-equivalent to e1).  | (since C++20)  
---|---  
  
### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 1054](https://cplusplus.github.io/CWG/issues/1054.html) | C++98  | assigning a value to a volatile variable might  
result in an unnecessary read due to the lvalue-to-  
rvalue conversion applied to the assignment result  | introduce discarded-value expressions  
and exclude this case from the list  
of cases that require the conversion   
[CWG 1343](https://cplusplus.github.io/CWG/issues/1343.html) | C++98  | sequencing of destructor calls in  
aggregate initialization was underspecified  | full-expressions in aggregate initialization  
are well-specified   
[CWG 1383](https://cplusplus.github.io/CWG/issues/1383.html) | C++98  | the list of expressions where lvalue-to-rvalue  
conversion is applied to discarded-value  
expressions also covered overloaded operators  | only cover operators  
with built-in meaning   
[CWG 1576](https://cplusplus.github.io/CWG/issues/1576.html) | C++11  | lvalue-to-rvalue conversions were not applied  
to discarded-value volatile xvalue expressions  | apply the conversion  
in this case   
[CWG 2249](https://cplusplus.github.io/CWG/issues/2249.html) | C++98  | identifiers to be declared in declarators  
were not id-expressions  | they are   
[CWG 2431](https://cplusplus.github.io/CWG/issues/2431.html) | C++11  | the invocations of the destructors of temporaries that  
are bound to references were not full-expressions  | they are   
  
### See also

[C documentation](../../c/language/operators.html "c/language/expressions") for Expressions  
---
