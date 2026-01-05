

  
| [`goto`](goto.html "cpp/language/goto") \- [`return`](return.html "cpp/language/return")  
---  
  
[Functions](functions.html "cpp/language/functions")  
[Function declaration](function.html "cpp/language/function")  
[Lambda function expression](lambda.html "cpp/language/lambda")  
[`inline` specifier](inline.html "cpp/language/inline")  
**Dynamic exception specifications** (until C++17*)  
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
  


[ Exceptions](exceptions.html "cpp/language/exceptions")

[try block](try.html "cpp/language/try")  
---  
[Throwing exceptions](throw.html "cpp/language/throw")  
[Handling exceptions](catch.html "cpp/language/catch")  
Exception specification  
[noexcept specification](noexcept_spec.html "cpp/language/noexcept spec") (C++11)  
**dynamic specification** (until C++17*)  
[noexcept operator](noexcept.html "cpp/language/noexcept") (C++11)  
  


Lists the exceptions that a function might directly or indirectly throw. 

## Contents

  * [1 Syntax](except_spec.html#Syntax)
  * [2 Explanation](except_spec.html#Explanation)
    * [2.1 Instantiation](except_spec.html#Instantiation)
  * [3 Potential exceptions](except_spec.html#Potential_exceptions)
  * [4 Notes](except_spec.html#Notes)
  * [5 Keywords](except_spec.html#Keywords)
  * [6 Example](except_spec.html#Example)
  * [7 Defect reports](except_spec.html#Defect_reports)
  * [8 See also](except_spec.html#See_also)

  
---  
  
### Syntax  
  
---  
`**throw(**` type-id-list ﻿(optional)`**)**` |  (1)  |  (deprecated in C++11)  
(removed in C++17)  
  
1) Explicit dynamic exception specification.

type-id-list |  \-  |  comma-separated list of [type-ids](type-id.html#Type_naming "cpp/language/type"), a type-id representing a [pack expansion](parameter_pack.html#Pack_expansion "cpp/language/parameter pack") is followed by an ellipsis (...)(since C++11)  
---|---|---  
  
An explicit dynamic exception specification shall appear only on a function declarator for a function type, pointer to function type, reference to function type, or pointer to member function type that is the top-level type of a declaration or definition, or on such a type appearing as a parameter or return type in a function declarator. 
    
    
    void f() throw(int);            // OK: function declaration
    void (*pf)() throw (int);       // OK: pointer to function declaration
    void g(void pfa() throw(int));  // OK: pointer to function parameter declaration
    typedef int (*pf)() throw(int); // Error: typedef declaration

### Explanation

If a function is declared with type `T` listed in its dynamic exception specification, the function may throw exceptions of that type or a type derived from it. 

[Incomplete types](incomplete_type.html "cpp/language/incomplete type"), pointers or references to incomplete types other than cv `void*`, and rvalue reference types(since C++11) are not allowed in the exception specification. Array and function types, if used, are adjusted to corresponding pointer types, top level cv-qualifications are also dropped. [parameter packs](parameter_pack.html "cpp/language/parameter pack") are allowed(since C++11). 

A dynamic exception specification whose set of adjusted types is empty (after any packs are expanded)(since C++11) is non-throwing. A function with a non-throwing dynamic exception specification does not allow any exceptions. 

A dynamic exception specification is not considered part of a function’s type. 

If the function throws an exception of the type not listed in its exception specification, the function [std::unexpected](../error/unexpected.html "cpp/error/unexpected") is called. The default function calls [std::terminate](../error/terminate.html "cpp/error/terminate"), but it may be replaced by a user-provided function (via [std::set_unexpected](../error/exception/set_unexpected.html "cpp/error/set unexpected")) which may call [std::terminate](../error/terminate.html "cpp/error/terminate") or throw an exception. If the exception thrown from [std::unexpected](../error/unexpected.html "cpp/error/unexpected") is accepted by the exception specification, stack unwinding continues as usual. If it isn't, but [std::bad_exception](../error/bad_exception.html "cpp/error/bad exception") is allowed by the exception specification, [std::bad_exception](../error/bad_exception.html "cpp/error/bad exception") is thrown. Otherwise, [std::terminate](../error/terminate.html "cpp/error/terminate") is called. 

#### Instantiation

The dynamic exception specification of a function template specialization is not instantiated along with the function declaration; it is instantiated only when _needed_ (as defined below). 

The dynamic exception specification of an implicitly-declared special member function is also evaluated only when needed (in particular, implicit declaration of a member function of a derived class does not require the exception-specification of a base member function to be instantiated). 

When the dynamic exception specification of a function template specialization is _needed_ , but has not yet been instantiated, the dependent names are looked up and any templates used in the expression are instantiated as if for the declaration of the specialization. 

A dynamic exception specification of a function is considered to be _needed_ in the following contexts: 

  * in an expression, where the function is selected by overload resolution 
  * the function is [odr-used](definition.html#ODR-use "cpp/language/definition")
  * the function would be odr-used but appears in an unevaluated operand 


    
    
    template<class T>
    T f() throw([std::array](../container/array.html)<char, sizeof(T)>);
     
    int main()
    {
        decltype(f<void>()) *p; // f unevaluated, but exception specification is needed
                                // error because instantiation of the exception specification
                                // calculates sizeof(void)
    }

  * the specification is needed to compare to another function declaration (e.g. on a virtual function overrider or on an explicit specialization of a function template) 
  * in a function definition 
  * the specification is needed because a defaulted special member function needs to check it in order to decide its own exception specification (this takes place only when the specification of the defaulted special member function is, itself, needed). 



### Potential exceptions

Each function `f`, pointer to function `pf`, and pointer to member function `pmf` has a _set of potential exceptions_ , which consists of types that might be thrown. Set of all types indicates that any exception may be thrown. This set is defined as follows: 

1) If the declaration of `f`, `pf`, or `pmf` uses a dynamic exception specification that does not allow all exceptions(until C++11), the set consists of the types listed in that specification.

2) Otherwise, if the declaration of `f`, `pf`, or `pmf` uses [`noexcept(true)`](noexcept.html "cpp/language/noexcept"), the set is empty.  | (since C++11)  
---|---  
  
3) Otherwise, the set is the set of all types.

Note: for implicitly-declared special member functions (constructors, assignment operators, and destructors) and for the inheriting constructors(since C++11), the set of potential exceptions is a combination of the sets of the potential exceptions of everything they would call: constructors/assignment operators/destructors of non-variant non-static data members, direct bases, and, where appropriate, virtual bases (including default argument expressions, as always). 

Each expression `e` has a _set of potential exceptions_. The set is empty if `e` is a [core constant expression](constant_expression.html "cpp/language/constant expression"), otherwise, it is the union of the sets of potential exceptions of all immediate subexpressions of `e` (including [default argument expressions](default_arguments.html "cpp/language/default arguments")), combined with another set that depends on the form of `e`, as follows: 

1) If `e` is a function call expression, let `g` denote the function, function pointer, or pointer to member function that is that is called, then 

    

  * if the declaration of `g` uses a dynamic exception specification, the set of potential exceptions of `g` is added to the set; 



    

  * if the declaration of `g` uses [`noexcept(true)`](noexcept.html "cpp/language/noexcept"), the set is empty; 


| (since C++11)  
---|---  
  
    

  * otherwise, the set is the set of all types.



2) If `e` calls a function implicitly (it's an operator expression and the operator is overloaded, it is a [new-expression](new.html "cpp/language/new") and the allocation function is overloaded, or it is a full expression and the destructor of a temporary is called), then the set is the set of that function.

3) If `e` is a [throw-expression](throw.html "cpp/language/throw"), the set is the exception that would be initialized by its operand, or the set of all types for the re-throwing throw-expression (with no operand).

4) If `e` is a [`dynamic_cast`](dynamic_cast.html "cpp/language/dynamic cast") to a reference to a polymorphic type, the set consists of [std::bad_cast](../types/bad_cast.html "cpp/types/bad cast").

5) If `e` is a [`typeid`](typeid.html "cpp/language/typeid") applied to a dereferenced pointer to a polymorphic type, the set consists of [std::bad_typeid](../types/bad_typeid.html "cpp/types/bad typeid").

6) If `e` is a [new-expression](new.html "cpp/language/new") with a non-constant array size, and the selected allocation function has a non-empty set of potential exceptions, the set consists of [std::bad_array_new_length](../memory/new/bad_array_new_length.html "cpp/memory/new/bad array new length").  | (since C++11)  
---|---  
      
    
    void f() throw(int); // f()'s set is "int"
    void g();            // g()'s set is the set of all types
     
    struct A { A(); };                  // "new A"'s set is the set of all types
    struct B { B() noexcept; };         // "B()"'s set is empty
    struct D() { D() throw (double); }; // new D's set is the set of all types

All implicitly-declared member functions and inheriting constructors (since C++11)have exception specifications, selected as follows: 

  * If the set of potential exceptions is the set of all types, the implicit exception specification allows all exceptions (the exception specification is considered present, even though it is inexpressible in code and behaves as if there is no exception specification)(until C++11)is noexcept(false)(since C++11). 
  * Otherwise, If the set of potential exceptions is not empty, the implicit exception specification lists every type from the set. 
  * Otherwise, the implicit exception specification is throw()(until C++11)noexcept(true)(since C++11). 


    
    
    struct A
    {
        A(int = (A(5), 0)) noexcept;
        A(const A&) throw();
        A(A&&) throw();
        ~A() throw(X);
    };
     
    struct B
    {
        B() throw();
        B(const B&) = default; // exception specification is "noexcept(true)"
        B(B&&, int = (throw Y(), 0)) noexcept;
        ~B() throw(Y);
    };
     
    int n = 7;
    struct D : public A, public B
    {
        // May throw an exception of a type that would match a handler of type
        // std​::​bad_array_new_length, but does not throw a bad allocation exception
        (void*) new ([std::nothrow](../memory/new/nothrow.html)) int[n];
     
        // D may have the following implicitly-declared members:
        // D::D() throw(X, std::bad_array_new_length);
        // D::D(const D&) noexcept(true);
        // D::D(D&&) throw(Y);
        // D::~D() throw(X, Y);
    };

### Notes

Clang considers the rule of instantiation of dynamic exception specification is changed in C++11 by [CWG1330](https://cplusplus.github.io/CWG/issues/1330.html), see [LLVM #56349](https://github.com/llvm/llvm-project/issues/56439). 

### Keywords

[`throw`](../keyword/throw.html "cpp/keyword/throw")

### Example

Note: best be compiled in C++98 mode to avoid warnings. Incompatible with C++17 and newer revisions.

Run this code
    
    
    #include <cstdlib>
    #include <exception>
    #include <iostream>
     
    class X {};
    class Y {};
    class Z : public X {};
    class W {};
     
    void f() throw(X, Y) 
    {
        bool n = false;
     
        if (n)
            throw X(); // OK, would call std::terminate()
        if (n)
            throw Z(); // also OK
     
        throw W(); // will call std::unexpected()
    }
     
    void handler()
    {
        [std::cerr](../io/cerr.html) << "That was unexpected!\n"; // flush needed
        [std::abort](../utility/program/abort.html)();
    }
     
    int main()
    {
        [std::set_unexpected](../error/set_unexpected.html)(handler);
        f();
    }

Output: 
    
    
    That was unexpected!

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 25](https://cplusplus.github.io/CWG/issues/25.html) | C++98  | the behavior of assignment and initialization  
between pointers to members with different  
exception specifications was unspecified  | apply the restriction  
for function pointers  
and references   
[CWG 973](https://cplusplus.github.io/CWG/issues/973.html) | C++98  | exception specification may contain functions types, but the  
corresponding function pointer conversion was not specified  | specified   
[CWG 1330](https://cplusplus.github.io/CWG/issues/1330.html) | C++98  | an exception specification might be eagerly instantiated  | it is only instantiated only if needed   
[CWG 1267](https://cplusplus.github.io/CWG/issues/1267.html) | C++11  | rvalue reference types were allowed in exception specifications  | not allowed   
[CWG 1351](https://cplusplus.github.io/CWG/issues/1351.html) | C++98  
C++11  | default argument (C++98) and default member initializer  
(C++11) were ignored in implicit exception specification  | made considered   
[CWG 1777](https://cplusplus.github.io/CWG/issues/1777.html) | C++11  | throw(T...) was not a non-throwing  
specification even if T is an empty pack  | it is non-throwing  
if the pack is empty   
[CWG 2191](https://cplusplus.github.io/CWG/issues/2191.html) | C++98  | the set of potential exceptions of a `typeid` expression  
might contain `bad_typeid` even if it cannot be thrown  | contains `bad_typeid`  
only if it can be thrown   
  
### See also

[ `noexcept` specifier](noexcept_spec.html "cpp/language/noexcept spec")(C++11) |  specifies whether a function could throw exceptions  
---|---
