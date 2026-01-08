* expression
  * == sequence of _operators_ + _operands_ /
    * may
      * specifies a computation
      * modify program's state (variables, memory, I/O, ...)
  * 👀characterized -- by -- 2 independent properties👀
    * [type](type-id.md)
    * [value category](value_category.md)

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

#### General

* [value categories](value_category.md) 
* [order of evaluation of arguments & subexpressions](eval_order.md) 

### Operators

* [operator precedence](operator_precedence.md)
* [alternative representations](operator_alternative.md)
* [operator overloading](operators.md)

#### Common operators   
##### [assignment](operator_assignment.md)

```c++
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
a >>= b
```

##### [increment & decrement](operator_incdec.md)

```c++
++a  
--a  
a++  
a--
```

##### [arithmetic](operator_arithmetic.md)

```c++
+a  
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
a >> b
```

##### [logical](operator_logical.md)

```c++
!a  
a && b  
a || b 
```

##### [comparison](operator_comparison.md) 

```c++
a == b  
a != b  
a < b  
a > b  
a <= b  
a >= b  
a <=> b 
```

##### [member access](operator_member_access.md)

```c++
a[...]  
*a  
&a  
a->b  
a.b  
a->*b  
a.*b 
```

##### [other](operator_other.md "cpp/language/operator other")  

* function call
    ```c++
    a(...)  
    ```
 
* comma
    ```c++
    a, b
    ```    

* conditional
    ```c++
    a ? b : c 
    ```

#### Special operators   
* [`static_cast`](static_cast.md)  
* [`dynamic_cast`](dynamic_cast.md)  
* [`const_cast`](const_cast.md)  
* [`reinterpret_cast`](reinterpret_cast.html "cpp/language/reinterpret cast") converts type to unrelated type  
* [C-style cast](explicit_cast.html "cpp/language/explicit cast") converts one type to another by a mix of static_cast, const_cast, and reinterpret_cast  
* [`new`](new.html "cpp/language/new") creates objects with dynamic storage duration  
* [`delete`](delete.html "cpp/language/delete") destructs objects previously created by the new expression and releases obtained memory area  
* [`sizeof`](sizeof.html "cpp/language/sizeof") queries the size of a type  
* [`sizeof...`](sizeof....html "cpp/language/sizeof...") queries the size of a [pack](parameter_pack.html "cpp/language/pack") (since C++11)  
* [`typeid`](typeid.html "cpp/language/typeid") queries the type information of a type  
* [`noexcept`](noexcept.html "cpp/language/noexcept") checks if an expression can throw an exception (since C++11)  
* [`alignof`](alignof.html "cpp/language/alignof") queries alignment requirements of a type (since C++11)  

#### Conversions

* [standard conversions](implicit_cast.md)
* [`const_cast` conversion](const_cast.md)
* [`static_cast` conversion](static_cast.html "cpp/language/static cast")
* [`dynamic_cast` conversion](dynamic_cast.html "cpp/language/dynamic cast")
* [`reinterpret_cast` conversion](reinterpret_cast.html "cpp/language/reinterpret cast")
* [explicit cast](explicit_cast.html "cpp/language/explicit cast") conversion using C-style cast notation and function-style notation 
* [user-defined conversion](cast_operator.html "cpp/language/cast operator") makes it possible to specify conversion from user-defined classes 

#### Memory allocation

* [`new` expression](new.md) 
* [delete expression](delete.html "cpp/language/delete") deallocates memory dynamically 

#### Other

  * [constant expressions](constant_expression.html "cpp/language/constant expression") can be evaluated at compile time and used in compile-time context (template arguments, array sizes, etc) 
  * [`sizeof`](sizeof.html "cpp/language/sizeof")
  * [`alignof`](alignof.html "cpp/language/alignof")
  * [`typeid`](typeid.html "cpp/language/typeid")
  * [throw-expression](throw.html "cpp/language/throw")



### Primary expressions

The operands of any operator may be other expressions or primary expressions (e.g
* in 1 + 2 * 3, the operands of operator+ are the [subexpression](expressions.html#Full-expressions) 2 * 3 and the primary expression 1)
* 

Primary expressions are any of the following: 

  * [`this`](this.html "cpp/language/this")
  * literals (e.g
* 2 or "Hello, world") 
  * identifier expressions, including 
    * suitably declared [unqualified identifiers](name.html#Unqualified_identifiers "cpp/language/identifiers") (e.g
* n or cout), 
    * suitably declared [qualified identifiers](name.html#Qualified_identifiers "cpp/language/identifiers") (e.g
* [std::string::npos](../string/basic_string/npos.html "cpp/string/basic string/npos")), and 
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
  
Any expression in parentheses is also classified as a primary expression: this guarantees that the parentheses have higher precedence than any operator
* Parentheses preserve value, type, and value category
* 

#### Literals

Literals are the tokens of a C++ program that represent constant values embedded in the source code
* 

  * [integer literals](integer_literal.html "cpp/language/integer literal") are decimal, octal, hexadecimal or binary numbers of integer type
* 
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

* _constituent expression_
  * expression's constituent expression == that expression
  * The constituent expressions of a [brace-enclosed initializer list](initialization.md) or of a (possibly parenthesized) expression list are the constituent expressions of the elements of the respective list
  * of an [initializer](initialization.md) / begins with `=`
    * == constituent expressions of the `initializer-clause`

* expression's (E) _immediate subexpressions_
  * constituent expressions of E’s operands
  * if E creates an [aggregate](aggregate_initialization.md#definitions) object -> the constituent expressions of each [default member initializer](data_members.html#Member_initialization "cpp/language/data members") used in the initialization
    * | C++14
  * if E is a [lambda expression](lambda.md) -> the initialization of the entities captured by copy and the constituent expressions of the initializer of the captures,
    * | C++11  
  
  * any function call that E implicitly invokes, or 
  * if E is a function call or implicitly invokes a function, the constituent expressions of each [default argument](default_arguments.html "cpp/language/default arguments") used in the call

* expression's (E) _subexpression_
  * == immediate subexpression of E or a subexpression of an immediate subexpression of E
* Note that expressions appearing in the “function body” of lambda expressions are not subexpressions of the lambda expression.(since C++11)

* _full-expressions_
  * == following expressions
    * [unevaluated operands](expressions.md#potentially-evaluated-expressions)
    * [constant expressions](constant_expression.md)
    * [immediate invocations](consteval.md)
      * requirements
        * C++20
    * declarators of [simple declarations](declarations.md#simple-declaration) OR [member initializers](initializer_list.html "cpp/language/constructor"), including the constituent expressions of the initializers 
    * invocations of [destructors](destructor.html "cpp/language/destructor") generated at the end of the [lifetime](lifetime.html "cpp/language/lifetime") of objects other than temporary objects whose lifetime have not been extended 
    * the predicates of [contract assertions](contracts.html "cpp/language/contracts")
      * | C++26
    * expressions / are not a subexpression of any another expression and that are not otherwise part of any full-expression 



If a language construct is defined to produce an implicit call of a function, a use of the language construct is considered to be an expression for the purposes of this definition
* Conversions applied to the result of an expression in order to satisfy the requirements of the language construct in which the expression appears are also considered to be part of the full-expression
* 

For an initializer, performing the initialization of the entity (including evaluating default member initializers of an aggregate)(since C++14) is also considered part of the full-expression
* 

### Potentially-evaluated expressions

An expression is _potentially evaluated_ unless 

  * it is the operand of the [`sizeof`](sizeof.html "cpp/language/sizeof") operator, or 
  * it is the operand of the [`typeid`](typeid.html "cpp/language/typeid") operator and does not designate an lvalue of [polymorphic](objects.html#Polymorphic_objects "cpp/language/object") class type
* 

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
  * it is a subexpression of an unevaluated operand
* 

(since C++11)  
  
Potentially-evaluated expressions are [ODR-use](definition.html#ODR-use "cpp/language/definition")
* 

| This section is incomplete  
Reason: example of unevaluated operands   
---|---  
  
### Discarded-value expressions

* _discarded-value expression_
  * == expression / used 💡ONLY for side-effects💡
    * == ⚠️calculated value is discarded ⚠️
  * use cases
    * full-expression of any [expression statement](statements.md#expression-statements)
    * built-in comma operator's left-hand operand is discarded
      * == ONLY use right-hand operand
    * cast-expression's operand / casts -- to the -- type `void`

* TODO:
Array-to-pointer and function-to-pointer conversions are never applied to the value calculated by a discarded-value expression
* The lvalue-to-rvalue conversion is applied if and only if the expression is a [volatile-qualified](cv.md) glvalue and
has one of the following forms (built-in meaning required, possibly parenthesized): 

  * id-expression, 
  * array subscript expression, 
  * class member access expression, 
  * indirection, 
  * pointer-to-member operation, 
  * conditional expression where both the second and the third operands are one of these expressions, 
  * comma expression where the right operand is one of these expressions


In addition, if the lvalue is of volatile-qualified class type, a volatile copy constructor is required to initialize the resulting rvalue temporary
* 

If the expression is a non-void prvalue (after any lvalue-to-rvalue conversion that might have taken place), [temporary materialization](implicit_cast.html#Temporary_materialization "cpp/language/implicit conversion") occurs
* Compilers may issue warnings when an expression other than cast to void discards a value declared `[[[nodiscard](attributes/nodiscard.html "cpp/language/attributes/nodiscard")]]`
*  | (since C++17)  
---|---  
  


###  Expression-equivalence

A number of expressions e1, e2, ..., eN are _expression-equivalent_ if all following conditions are satisfied: 

  1
* They have the same effects
* 
  2
* Either they are all [constant subexpressions](constant_expression.html#Constant_subexpression "cpp/language/constant expression") or neither is
* 
  3
* Either they are all [noexcept](noexcept_spec.html "cpp/language/noexcept spec") or else neither is
* 

e1 is _expression-equivalent to_ e2 if and only if e1 and e2 are expression-equivalent (which means e2 is also expression-equivalent to e1)
*  | (since C++20)  
---|---  
  
### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards
* 

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
