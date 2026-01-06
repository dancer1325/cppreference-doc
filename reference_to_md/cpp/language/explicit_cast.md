

  
  
  
  
  

  
  
  
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
  
| **Explicit conversions**  
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
[Alternative representations of operators](operator_alternative.html "cpp/language/operator alternative")  
[Precedence and associativity](operator_precedence.html "cpp/language/operator precedence")  
[Operator overloading](operators.html "cpp/language/operators")  
[Default comparisons](default_comparisons.html "cpp/language/default comparisons") (C++20)  
  
Conversions  
| [Implicit conversions](implicit_cast.html "cpp/language/implicit conversion")  
---  
**Explicit conversions**  
[Usual arithmetic conversions](usual_arithmetic_conversions.html "cpp/language/usual arithmetic conversions")  
[User-defined conversion](cast_operator.html "cpp/language/cast operator")  
  
| [`const_cast`](const_cast.html "cpp/language/const cast")  
---  
[`static_cast`](static_cast.html "cpp/language/static cast")  
[`dynamic_cast`](dynamic_cast.html "cpp/language/dynamic cast")  
[`reinterpret_cast`](reinterpret_cast.html "cpp/language/reinterpret cast")  
  


Converts between types using a combination of explicit and implicit conversions. 

## Contents

  * [1 Syntax](explicit_cast.html#Syntax)
  * [2 Explanation](explicit_cast.html#Explanation)
  * [3 Ambiguity Resolution](explicit_cast.html#Ambiguity_Resolution)
    * [3.1 Ambiguous declaration statement](explicit_cast.html#Ambiguous_declaration_statement)
    * [3.2 Ambiguous function parameter](explicit_cast.html#Ambiguous_function_parameter)
    * [3.3 Ambiguous type-id](explicit_cast.html#Ambiguous_type-id)
  * [4 Notes](explicit_cast.html#Notes)
  * [5 Example](explicit_cast.html#Example)
  * [6 Defect reports](explicit_cast.html#Defect_reports)
  * [7 References](explicit_cast.html#References)
  * [8 See also](explicit_cast.html#See_also)

  
---  
  
### Syntax  
  
---  
`**(**` type-id `**)**` unary-expression |  (1)  |   
simple-type-specifier `**(**` expression-list ﻿(optional) `**)**`  
simple-type-specifier `**(**` initializer-list ﻿(optional) `**)**` |  (2)  |  (until C++11)  
(since C++11)  
simple-type-specifier `**{**` initializer-list ﻿(optional) `**}**` |  (3)  |  (since C++11)  
simple-type-specifier `**{**` designated-initializer-list `**}**` |  (4)  |  (since C++20)  
`**typename**` identifier `**(**` initializer-list ﻿(optional) `**)**` |  (5)  |  (since C++11)  
`**typename**` identifier `**{**` initializer-list ﻿(optional) `**}**` |  (6)  |  (since C++11)  
`**typename**` identifier `**{**` designated-initializer-list `**}**` |  (7)  |  (since C++20)  
  
Explicitly converts any number of values to a value of the target type. 

1) Explicit type conversion (cast notation), also called _C-style cast_.

2-7) Explicit type conversion (functional notation), also called _function-style cast_.

type-id |  \-  |  a [type-id](type-id.html#Type_naming "cpp/language/type")  
---|---|---  
unary-expression |  \-  |  an unary expression (whose top-level operator does not have a [precedence](operator_precedence.html "cpp/language/operator precedence") higher than that of C-style cast)   
simple-type-specifier |  \-  |  a [simple type specifier](declarations.html#Specifiers "cpp/language/declarations")  
expression-list |  \-  |  a comma-separated list of expressions (except unparenthesized [comma expressions](operator_other.html#Built-in_comma_operator "cpp/language/operator other"))   
initializer-list |  \-  |  a comma-separated list of [initializer clauses](initialization.html "cpp/language/initialization")  
designated-initializer-list |  \-  |  a comma-separated list of [designated initializer clauses](aggregate_initialization.html#Designated_initializers "cpp/language/aggregate initialization")  
identifier |  \-  |  a (possibly qualified) identifier (including [template identifiers](templates.html#Template_identifiers "cpp/language/templates"))   
  
### Explanation

1) When the C-style cast is encountered, the compiler attempts to interpret it as the following cast expressions, in this order:

a) [`const_cast`](const_cast.html "cpp/language/const cast")<type-id ﻿>(unary-expression ﻿);

b) [`static_cast`](static_cast.html "cpp/language/static cast")<type-id ﻿>(unary-expression ﻿), with extensions: pointer or reference to a [derived class](derived_class.html "cpp/language/derived class") is additionally allowed to be cast to pointer or reference to unambiguous base class (and vice versa) even if the base class is [inaccessible](access.html "cpp/language/access") (that is, this cast ignores the private inheritance specifier). Same applies to casting [pointer to member](pointer.html "cpp/language/pointer") to pointer to member of unambiguous non-virtual base;

c) a static_cast (with extensions) followed by const_cast;

d) [`reinterpret_cast`](reinterpret_cast.html "cpp/language/reinterpret cast")<type-id ﻿>(unary-expression ﻿);

e) a reinterpret_cast followed by const_cast.

The first choice that satisfies the requirements of the respective cast operator is selected, even if it is ill-formed (see example). If a static_cast followed by a const_cast is used and the conversion can be interpreted in more than one way as such, the conversion is ill-formed.

In addition, C-style casts can cast from, to, and between pointers to incomplete class type. If both type-id and the type of unary-expression are pointers to incomplete class types, it is unspecified whether static_cast or reinterpret_cast gets selected.

2-7) A function-style cast specifies a **type** (simple-type-specifier ﻿ or identifier ﻿(since C++11)) and an **initializer** (the remaining parts), it constructs a value of the target type `T`, which is determined from the specified type and initializer(since C++17):  `T` is the specified type.  | (until C++17)  
---|---  
`T` is determined as follows: 

  * If the specified type is a placeholder for a deduced class type, `T` is the return type of the function selected by overload resolution for [class template deduction](ctad.html "cpp/language/class template argument deduction"). 

| 

  * Otherwise, if the specified type contains a [placeholder type](auto.html "cpp/language/auto"), `T` is the deduced type. 

| (since C++23)  
---|---  
  
  * Otherwise, `T` is the specified type. 

(since C++17)  
  
The conversion result is determined as follows: 

  * If the function-style cast is of syntax (2), and there is exactly one expression in parentheses, this cast is equivalent to the corresponding C-style cast. 
  * Otherwise, if `T` is (possibly cv-qualified) void, the result is an rvalue(until C++11)a prvalue(since C++11) of type void that performs no initialization. 



    

  * If the initializer is not (), the program is ill-formed. 


| (until C++11)  
---|---  
  
    

  * If the initializer is not () or {} after [pack expansion](parameter_pack.html "cpp/language/pack") (if any), the program is ill-formed. 


| (since C++11)  
  
  * Otherwise, if `T` is a reference type, the function-style cast has the same effect as [direct-initializing](direct_initialization.html "cpp/language/direct initialization") an invented variable t of type `T` from the specified initializer, and the result is the initialized t. 



    

  * The result is an lvalue. 


| (until C++11)  
---|---  
  
    

  * If `T` is an lvalue reference type or an rvalue reference to function type, the result is an lvalue. 
  * Otherwise, the result is an xvalue. 


| (since C++11)  
  
  * Otherwise, the result is an rvalue(until C++11)a prvalue(since C++11) of of type `T` designating a temporary(until C++17)whose result object is(since C++17) [direct-initialized](direct_initialization.html "cpp/language/direct initialization") with the specified initializer.



### Ambiguity Resolution

#### Ambiguous declaration statement

In the case of an ambiguity between an expression statement with a function-style cast expression as its leftmost subexpression and a declaration statement, the ambiguity is resolved by treating it as a declaration. This disambiguation is purely syntactic: it does not consider the meaning of names occurring in the statement other than whether they are type names: 
    
    
    struct M {};
    struct L { L(M&); };
     
    M n;
    void f()
    {
        M(m);    // declaration, equivalent to M m;
        L(n);    // ill-formed declaration, equivalent to L n;
        L(l)(m); // still a declaration, equivalent to L l((m));
    }

However, if the outermost declarator in the ambiguous declaration statement has a [trailing return type](function.html "cpp/language/function"), the statement will only be treated as a declaration statement if the trailing return type starts with auto: 
    
    
    struct M;
     
    struct S
    {
        S* operator()();
        int N;
        int M;
     
        void mem(S s)
        {
            auto(s)()->M; // expression (S::M hides ::M), invalid before C++23
        }
    };
     
    void f(S s)
    {
        {
            auto(s)()->N; // expression, invalid before C++23
            auto(s)()->M; // function declaration, equivalent to M s();
        }
        {
            S(s)()->N;    // expression
            S(s)()->M;    // expression
        }
    }

| (since C++11)  
---|---  
  
#### Ambiguous function parameter

The ambiguity above can also occur in the context of a declaration. In that context, the choice is between an object declaration with a function-style cast as the initializer and a declaration involving a function declarator with a redundant set of parentheses around a parameter name. The resolution is also to consider any construct, such as the potential parameter declaration, that could possibly be a declaration to be a declaration: 
    
    
    struct S
    {
        S(int);
    };
     
    void foo(double a)
    {
        S w(int(a)); // function declaration: has a parameter `a` of type int
        S x(int());  // function declaration: has an unnamed parameter of type int(*)() 
                     // that is adjusted from int()
     
        // Ways to avoid ambiguity:
        S y((int(a))); // object declaration: extra pair of parentheses
        S y((int)a);   // object declaration: C-style cast
        S z = int(a);  // object declaration: no ambiguity for this syntax
    }

However, if the outermost declarator in the ambiguous parameter declaration has a [trailing return type](function.html "cpp/language/function"), the ambiguity will only be resolved by treating it as a declaration if it starts with auto: 
    
    
    typedef struct BB { int C[2]; } *B, C;
     
    void foo()
    {
        S a(B()->C);    // object declaration: B()->C cannot declare a parameter
        S b(auto()->C); // function declaration: has an unnamed parameter of type C(*)()
                        // that is adjusted from C()
    }

| (since C++11)  
---|---  
  
#### Ambiguous type-id

An ambiguity can arise from the similarity between a function-style cast and a [type-id](type-id.html#Type_naming "cpp/language/type"). The resolution is that any construct that could possibly be a type-id in its syntactic context shall be considered a type-id: 
    
    
    // `int()` and `int(unsigned(a))` can both be parsed as type-id:
    // `int()`            represents a function returning int
    //                    and taking no argument
    // `int(unsigned(a))` represents a function returning int
    //                    and taking an argument of type unsigned
    void foo(signed char a)
    {
        sizeof(int());            // type-id (ill-formed)
        sizeof(int(a));           // expression
        sizeof(int(unsigned(a))); // type-id (ill-formed)
     
        (int()) + 1;            // type-id (ill-formed)
        (int(a)) + 1;           // expression
        (int(unsigned(a))) + 1; // type-id (ill-formed)
    }

However, if the outermost abstract-declarator in the ambiguous [type-id](type-id.html#Type_naming "cpp/language/type") has a [trailing return type](function.html "cpp/language/function"), the ambiguity will only be resolved by treating it as a type-id if it starts with auto: 
    
    
    typedef struct BB { int C[2]; } *B, C;
     
    void foo()
    {
        sizeof(B()->C[1]);    // OK, sizeof(expression)
        sizeof(auto()->C[1]); // error: sizeof of a function returning an array
    }

| (since C++11)  
---|---  
  
### Notes

Feature-test macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_auto_cast`](../experimental/feature_test.html#cpp_auto_cast "cpp/feature test") | [`202110L`](../compiler_support/23.html#cpp_auto_cast_202110L "cpp/compiler support/23") | (C++23) | auto(x) and auto{x}  
  
### Example

Run this code
    
    
    #include <cassert>
    #include <iostream>
     
    double f = 3.14;
    unsigned int n1 = (unsigned int)f; // C-style cast
    unsigned int n2 = unsigned(f);     // function-style cast
     
    class C1;
    class C2;
    C2* foo(C1* p)
    {
        return (C2*)p; // casts incomplete type to incomplete type
    }
     
    void cpp23_decay_copy_demo()
    {
        auto inc_print = [](int& x, const int& y)
        {
            ++x;
            [std::cout](../io/cout.html) << "x:" << x << ", y:" << y << '\n';
        };
     
        int p{1};
        inc_print(p, p); // prints x:2 y:2, because param y here is an alias of p
        int q{1};
        inc_print(q, auto{q}); // prints x:2 y:1, auto{q} (C++23) casts to prvalue,
                               // so the param y is a copy of q (not an alias of q)
    }
     
    // In this example, C-style cast is interpreted as static_cast
    // even though it would work as reinterpret_cast
    struct A {};
    struct I1 : A {};
    struct I2 : A {};
    struct D : I1, I2 {};
     
    int main()
    {
        D* d = nullptr;
    //  A* a = (A*)d;                   // compile-time error
        A* a = reinterpret_cast<A*>(d); // this compiles
        [assert](../error/assert.html)(a == nullptr);
     
        cpp23_decay_copy_demo();
    }

Output: 
    
    
    x:2 y:2
    x:2 y:1

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 1223](https://cplusplus.github.io/CWG/issues/1223.html)  
([P2915R0](https://wg21.link/P2915R0))  | C++11  | the addition of trailing return type introduced more ambiguities  | resolves them   
[CWG 1893](https://cplusplus.github.io/CWG/issues/1893.html) | C++11  | function-style cast did not consider pack expansions  | considers them   
[CWG 2351](https://cplusplus.github.io/CWG/issues/2351.html) | C++11  | void{} was ill-formed  | made well-formed   
[CWG 2620](https://cplusplus.github.io/CWG/issues/2620.html) | C++98  | the resolution of ambiguous function  
parameters might be misinterpreted  | improved the wording   
[CWG 2828](https://cplusplus.github.io/CWG/issues/2828.html) | C++98  | a C-style cast was ill-formed if multiple interpretations  
of a static_cast followed by a const_cast exist,  
regardless of whether these conversions are actually used  | only considers the  
conversions  
possibly being used   
[CWG 2894](https://cplusplus.github.io/CWG/issues/2894.html) | C++98  | function-style casts could create reference rvalues  | can only create reference lvalues   
  
### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 7.6.1.4 Explicit type conversion (functional notation) [expr.type.conv] 



    

  * 7.6.3 Explicit type conversion (cast notation) [expr.cast] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 7.6.1.4 Explicit type conversion (functional notation) [expr.type.conv] 



    

  * 7.6.3 Explicit type conversion (cast notation) [expr.cast] 



  * C++17 standard (ISO/IEC 14882:2017): 



    

  * 8.2.3 Explicit type conversion (functional notation) [expr.type.conv] 



    

  * 8.4 Explicit type conversion (cast notation) [expr.cast] 



  * C++14 standard (ISO/IEC 14882:2014): 



    

  * 5.2.3 Explicit type conversion (functional notation) [expr.type.conv] 



    

  * 5.4 Explicit type conversion (cast notation) [expr.cast] 



  * C++11 standard (ISO/IEC 14882:2011): 



    

  * 5.2.3 Explicit type conversion (functional notation) [expr.type.conv] 



    

  * 5.4 Explicit type conversion (cast notation) [expr.cast] 



  * C++03 standard (ISO/IEC 14882:2003): 



    

  * 5.2.3 Explicit type conversion (functional notation) [expr.type.conv] 



    

  * 5.4 Explicit type conversion (cast notation) [expr.cast] 



  * C++98 standard (ISO/IEC 14882:1998): 



    

  * 5.2.3 Explicit type conversion (functional notation) [expr.type.conv] 



    

  * 5.4 Explicit type conversion (cast notation) [expr.cast] 



### See also

[ `const_cast` conversion ](const_cast.html "cpp/language/const cast") |  adds or removes const  
---|---  
[ `static_cast` conversion ](static_cast.html "cpp/language/static cast") |  performs basic conversions  
[ `dynamic_cast` conversion ](dynamic_cast.html "cpp/language/dynamic cast") |  performs checked polymorphic conversions  
[ `reinterpret_cast` conversion ](reinterpret_cast.html "cpp/language/reinterpret cast") |  performs general low-level conversions  
[ standard conversions ](implicit_cast.html "cpp/language/implicit cast") |  implicit conversions from one type to another  
[C documentation](../../c/language/cast.html "c/language/cast") for cast operator
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
