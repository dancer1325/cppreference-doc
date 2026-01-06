

  
  
  
  
  

  
  
  

---  
  

---  
  


[ Basic Concepts](basics.html "cpp/language/basic concepts")

[Comments](../comments.html "cpp/comment")  
---  
[ASCII](ascii.html "cpp/language/ascii")  
[Punctuation](punctuators.html "cpp/language/punctuators")  
[Names and identifiers](name.html "cpp/language/identifiers")  
[Types](type-id.html "cpp/language/type")  
[Fundamental types](types.html "cpp/language/types")  
[Objects](objects.html "cpp/language/object")  
**Scope**  
[Object lifetime](lifetime.html "cpp/language/lifetime")  
[Storage duration and linkage](storage_duration.html "cpp/language/storage duration")  
[Definitions and ODR](definition.html "cpp/language/definition")  
[Name lookup](lookup.html "cpp/language/lookup")  
[ Qualified name lookup](qualified_lookup.html "cpp/language/qualified lookup")  
[ Unqualified name lookup](unqualified_lookup.html "cpp/language/unqualified lookup")  
[The as-if rule](as_if.html "cpp/language/as if")  
[Undefined behavior](ub.html "cpp/language/ub")  
[Memory model](memory_model.html "cpp/language/memory model")  
[Multi-threaded executions and data races](multithread.html "cpp/language/multithread") (C++11)  
[Character sets and encodings](charset.html "cpp/language/charset")  
[Phases of translation](translation_phases.html "cpp/language/translation phases")  
[The `main` function](main_function.html "cpp/language/main function")  
[Modules](modules.html "cpp/language/modules") (C++20)  
[Contracts](contracts.html "cpp/language/contracts") (C++26)  
  


Each [declaration](declarations.html "cpp/language/declarations") that appears in a C++ program is only visible in some possibly discontiguous _scopes ﻿_. 

Within a scope, [unqualified name lookup](lookup.html "cpp/language/lookup") can be used to associate a name with its declaration. 

## Contents

  * [1 General](scope.html#General)
  * [2 Block scope](scope.html#Block_scope)
  * [3 Function parameter scope](scope.html#Function_parameter_scope)
  * [4 Lambda scope](scope.html#Lambda_scope)
  * [5 Namespace scope](scope.html#Namespace_scope)
  * [6 Class scope](scope.html#Class_scope)
  * [7 Enumeration scope](scope.html#Enumeration_scope)
  * [8 Template parameter scope](scope.html#Template_parameter_scope)
  * [9 Contract-assertion scope](scope.html#Contract-assertion_scope)
  * [10 Point of declaration](scope.html#Point_of_declaration)
  * [11 Defect reports](scope.html#Defect_reports)
  * [12 References](scope.html#References)
  * [13 See also](scope.html#See_also)

  
---  
  
### General

Each program has a _global scope ﻿_ , which _contains_ the entire program. 

Every other scope `S` is introduced by one of the following: 

  * a [declaration](declarations.html "cpp/language/declarations")
  * a parameter in [parameter list](function.html#Parameter_list "cpp/language/function")
  * a [statement](statements.html "cpp/language/statements")
  * a [handler](catch.html "cpp/language/catch")



  * a [contract assertion](contracts.html "cpp/language/contracts")

| (since C++26)  
---|---  
  
`S` always appear in another scope, which thereby _contains_ `S`. 

An _enclosing scope_ at a program point is any scope that contains it; the smallest such scope is said to be the _immediate scope_ at that point. 

A scope _intervenes_ between a program point `P` and a scope `S` (that does not contain `P`) if it is or contains `S` but does not contain `P`. 

The _parent scope_ of any scope `S` that is not a [template parameter scope](scope.html#Template_parameter_scope) is the smallest scope that contains `S` and is not a template parameter scope. 

Unless otherwise specified: 

  * A declaration _inhabits_ the immediate scope at its [locus](scope.html#Point_of_declaration). 
  * A declaration’s _target scope_ is the scope it inhabits. 
  * Any names (re)introduced by a declaration are _bound_ to it in its target scope. 



An entity _belongs_ to a scope `S` if `S` is the target scope of a declaration of the entity. 
    
    
    //                global  scope  scope
    //                scope     S      T
    int x;         //   ─┐                 // program point X
                   //    │
    {              //    │     ─┐
        {          //    │      │     ─┐
            int y; //    │      │      │   // program point Y
        }          //    │      │     ─┘
    }              //   ─┘     ─┘

In the program above: 

  * The global scope, scope `S` and scope `T` contains program point `Y`. 



    

  * In other words, these three scopes are all enclosing scopes at program point `Y`. 



  * The global scope contains scopes `S` and `T`, and scope `S` contains scope `T`. 



    

  * Therefore, scope `T` is the smallest scope among all three, which means: 



    

  * Scope `T` is the immediate scope at program point `Y`. 
  * The declaration of the variable y inhabits scope `T` at its locus. 
  * Scope `T` is the target scope of the declaration of y. 
  * The variable y belongs to scope `T`. 



  * Scope `S` is the parent scope of scope `T`, and the global scope is the parent scope of scope `S`. 



  * Scope `S` intervenes between program point `X` and scope `T`. 



### Block scope

Each 

  * [selection statement](statements.html#Selection_statements "cpp/language/statements") ([if](if.html "cpp/language/if"), [switch](switch.html "cpp/language/switch")), 
  * [iteration statement](statements.html#Iteration_statements "cpp/language/statements") ([for](for.html "cpp/language/for"), [range-for](range-for.html "cpp/language/range-for")(since C++11), [while](while.html "cpp/language/while"), [do-while](do.html "cpp/language/do")), 
  * [handler](catch.html "cpp/language/catch"), or 
  * [compound statement](statements.html#Compound_statements "cpp/language/statements") that is not the compound-statement of a handler 



introduces a _block scope_ that includes the statement or handler. 

A variable that belongs to a block scope is a _block variable ﻿_ (also known as local variable). 
    
    
    int i = 42;
    int a[10];
     
    for (int i = 0; i < 10; i++) // inner “i” inhabits the block scope
        a[i] = i;                // introduced by the for-statement
     
    int j = i; // j = 42

If the declaration inhabits a block scope `S` and declares a function or uses the extern specifier, the declaration shall not be attached to a _named module ﻿_(since C++20), its target scope is a larger enclosing scope (the innermost enclosing namespace scope), but the name is bound in their immediate scope `S`. 

If a declaration that is not a [name-independent declaration](conflicting_declarations.html#Potentially-conflict_declarations "cpp/language/conflicting declarations") and(since C++26) that binds a name in the block scope `S` of 

  * the compound-statement of a [function body](function.html#Function_definition "cpp/language/function") or [function try block](try.html#Function_try_block "cpp/language/try"), 



  * the compund statement `**{**` body `**}**` of a [lambda expression](lambda.html "cpp/language/lambda"), 

| (since C++11)  
---|---  
  
  * a substatement of a selection or iteration statement that is not itself a selection or iteration statement, or 
  * a handler of a function try block 



[potentially conflicts](conflicting_declarations.html#Potentially-conflict_declarations "cpp/language/conflicting declarations") with a declaration whose target scope is the parent scope of `S`, the program is ill-formed. 
    
    
    if (int x = f())  // declares “x”
    { // the if-block is a substatement of the if-statement
        int x;        // error: redeclaration of “x”
    }
    else
    { // the else-block is also a substatement of the if-statement
        int x;        // error: redeclaration of “x”
    }
     
    void g(int i)
    {
        extern int i; // error: redeclaration of “i”
    }

### Function parameter scope

Each [parameter declaration](function.html#Parameter_list "cpp/language/function") `P` introduces a _function parameter scope_ that includes `P`. 

  * If the declared parameter is of the parameter list of a [function declaration](function.html "cpp/language/function"): 



    

  * If the function declaration is a [function definition](function.html#Function_definition "cpp/language/function"), the scope introduced is extended to the end of the function definition. 
  * Otherwise (the function declaration is a function prototype), the scope introduced is extended to the end of the function declarator. 
  * In both cases, the scope does not include the [locus](scope.html#Point_of_declaration) of the function declaration. 



  * If the declared parameter is of the parameter list of a [lambda expression](lambda.html "cpp/language/lambda"), the scope introduced is extended to the end of `**{**` body `**}**`. 

| (since C++11)  
---|---  
  
  * If the declared parameter is of the parameter list of a [deduction guide](deduction_guide.html "cpp/language/deduction guide"), the scope introduced is extended to the end of that deduction guide. 

| (since C++17)  
  
  * If the declared parameter is of the parameter list of a [requires expression](requires.html "cpp/language/requires"), the scope introduced is extended to the end of `**{**` requirement-seq `**}**`. 

| (since C++20)  
      
    
    int f(int n) // the declaration of the parameter “n”
    {            // introduces a function parameter scope
        /* ... */
    }            // the function parameter scope ends here

###  Lambda scope

Each [lambda expression](lambda.html "cpp/language/lambda") introduces a _lambda scope_ that starts immediately after `**[**` captures ﻿`**]**` and extends to the end of `**{**` body `**}**`. The [captures](lambda.html#Lambda_captures "cpp/language/lambda") with initializers of a lambda expression E inhabit the lambda scope introduced by E. 
    
    
    auto lambda = [x = 1, y]() // this lambda expression introduces a lambda scope,
    {                          // it is the target scope of capture “x”
        /* ... */
    };                         // the lambda scope ends before the semicolon

| (since C++14)  
---|---  
  
### Namespace scope

Every [namespace definition](namespace.html "cpp/language/namespace") for a namespace `N` introduces a _namespace scope_ `S` that includes the declarations for every namespace definition for `N`. 

For each non-friend redeclaration or specialization whose target scope is `S` or is contained by `S`, the following portions are also included in scope `S`: 

  * For a [class](class.html "cpp/language/class") (template) redeclaration or class template specialization, the portion after its class-head-name. 
  * For a [enumeration](enum.html "cpp/language/enum") redeclaration, the portion after its enum-head-name. 
  * For any other redeclaration or specialization, the portion after the unqualified-id or qualified-id of the [declarator](declarations.html#Declarators "cpp/language/declarations"). 



The [global scope](scope.html#General) is the namespace scope of the [global namespace](namespace.html "cpp/language/namespace"). 
    
    
    namespace V   // the namespace definition of “V”
    {             // introduces a namespace scope “S”
        // the first part of scope “S” begins here
        void f();
        // the first part of scope “S” ends here
    }
     
    void V::f()   // the portion after “f” is also a part of scope “S”
    {
        void h(); // declares V::h
    }             // the second part of scope “S” ends here

### Class scope

Each declaration of a class or class template `C` introduces a _class scope_ `S` that includes the member-specification of the [class definition](class.html "cpp/language/class") of `C`. 

For each non-friend redeclaration or specialization whose target scope is `S` or is contained by `S`, the following portions are also included in scope `S`: 

  * For a [class](class.html "cpp/language/class") (template) redeclaration or class template specialization, the portion after its class-head-name. 
  * For a [enumeration](enum.html "cpp/language/enum") redeclaration, the portion after its enum-head-name. 
  * For any other redeclaration or specialization, the portion after the unqualified-id or qualified-id of the [declarator](declarations.html#Declarators "cpp/language/declarations"). 


    
    
    class C       // the class definition of “C”
    {             // introduces a class scope “S”
        // the first part of scope “S” begins here
        void f();
        // the first part of scope “S” ends here
    }
     
    void C::f()   // the portion after “f” is also a part of scope “S”
    {
        /* ... */
    }             // the second part of scope “S” ends here

### Enumeration scope

Each declaration of an enumeration `E` introduces an _enumeration scope_ that includes the enumerator-list of the non-opaque(since C++11) [enumeration declaration](enum.html "cpp/language/enum") of `E` (if present). 
    
    
    enum class E // the enumeration declaration of “E”
    {            // introduces an enumeration scope “S”
        // scope “S” begins here
        e1, e2, e3
        // scope “S” ends here
    }

### Template parameter scope

Each [template template parameter](template_parameters.html#Template_template_parameter "cpp/language/template parameters") introduces a _template parameter scope_ that includes the entire template parameter list and the [require clauses](constraints.html#Requires_clauses "cpp/language/constraints")(since C++20) of that template template parameter. 

Each template declaration `D` introduces a _template parameter scope_ `S` that extends from the beginning of the template parameter list of `D` to the end of `D`. Any declaration outside the template parameter list that would inhabit `S` instead inhabits the same scope as `D`. 

Only template parameters belong to a template parameter scope, and only template parameter scopes have a template parameter scope as a parent scope. 
    
    
    // the class template declaration of “X”
    // introduces a template parameter scope “S1”
    template
    <
        // scope “S1” begins here
        template // the template template parameter “T”
                 // introduces another template parameter scope “S2”
        <
            typename T1
            typename T2
        > requires std::convertible_from<T1, T2> // scope “S2” ends here
        class T,
        typename U
    >
    class X; // scope “S1” ends before the semicolon
     
    namespace N
    {
        template <typename T>
        using A = struct X; // “X” inhabits the same scope as template
                            // declaration, namely the scope of “N”
    }

###  Contract-assertion scope

Each [contract assertion](contracts.html "cpp/language/contracts") `C` introduces a _contract-assertion scope_ that includes `C`. If a [postcondition assertion](function.html#Postcondition_assertions "cpp/language/function") has an identifier which is not [name-independent](conflicting_declarations.html#Multiple_declarations_of_the_same_entity "cpp/language/conflicting declarations"), and the postcondition assertion is associated with a function func [potentially conflicts](conflicting_declarations.html#Potentially-conflicting_declarations "cpp/language/conflicting declarations") with a declaration `D` whose target scope is one of the following scopes, the program is ill-formed: 

  * The function parameter scope of func. 
  * If `D` is associated with a [lambda expression](lambda.html "cpp/language/lambda"), the nearest enclosing lambda scope of the precondition assertion. 

| (since C++26)  
---|---  
  
### Point of declaration

In general, a name is visible after the _locus_ of its first declaration, which is located as follows. 

The locus of a name declared in a simple declaration is immediately after that name's [declarator](declarations.html#Declarators "cpp/language/declarations") and before its initializer, if any. 
    
    
    int x = 32; // outer x is in scope
     
    {
        int x = x; // inner x is in scope before the initializer (= x)
                   // this does not initialize inner x with the value of outer x (32),
                   // this initializes inner x with its own (indeterminate) value
    }
     
    [std::function](../utility/functional/function.html)<int(int)> f = [&](int n){ return n > 1 ? n * f(n - 1) : n; };
    // the name of the function f is in scope in the lambda and can
    // be correctly captured by reference, giving a recursive function
    
    
    const int x = 2; // outer x is in scope
     
    {
        int x[x] = {}; // inner x is in scope before the initializer (= {}),
                       // but after the declarator (x[x])
                       // in the declarator, outer x is still in scope
                       // this declares an array of 2 int
    }

The locus of a class or class template declaration is immediately after the identifier that names the class (or the [template-id](templates.html#template-id "cpp/language/templates") that names the template specialization) in its [class-head](class.html "cpp/language/class"). The class or class template name is already in scope in the list of base classes. 
    
    
    struct S: [std::enable_shared_from_this](../memory/enable_shared_from_this.html)<S> {}; // S is in scope at the colon

The locus of [enum specifier](enum.html "cpp/language/enum") or opaque enum declaration(since C++11) is immediately after the identifier that names the enumeration. 
    
    
    enum E : int // E is in scope at the colon
    {
        A = sizeof(E)
    };

The locus of a [type alias or alias template](type_alias.html "cpp/language/type alias") declaration is immediately after the type-id to which the alias refers. 
    
    
    using T = int; // outer T is in scope at the semicolon
     
    {
        using T = T*; // inner T is in scope at the semicolon,
                      // outer T is still in scope before the semicolon
                      // same as T = int*
    }

The locus for a declarator in a [using declaration](using_declaration.html "cpp/language/using declaration") that does not name a constructor is immediately after the declarator. 
    
    
    template<int N>
    class Base
    {
    protected:
        static const int next = N + 1;
        static const int value = N;
    };
     
    struct Derived: Base<0>, Base<1>, Base<2>
    {
        using Base<0>::next,     // next is in scope at the comma
              Base<next>::value; // Derived::value is 1
    };

The locus of an enumerator is immediately after its definition (not before the initializer as it is for variables). 
    
    
    const int x = 12;
     
    {
        enum
        {
            x = x + 1, // enumerator x is in scope at the comma,
                       // outer x is in scope before the comma,
                       // enumerator x is initialized to 13
            y = x + 1  // y is initialized to 14
        };
    }

The locus for an [injected-class-name](injected-class-name.html "cpp/language/injected-class-name") is immediately following the opening brace of its class (or class template) definition. 
    
    
    template<typename T>
    struct Array
    //  : std::enable_shared_from_this<Array> // error: the injected class name is not in scope
        : [std::enable_shared_from_this](../memory/enable_shared_from_this.html)< Array<T> > // OK: the template-name Array is in scope
    { // the injected class name Array is now in scope as if a public member name
        Array* p; // pointer to Array<T>
    };

The locus of the implicit declaration for a function-local predefined variable __func__ is immediately before the function body of a function definition.  | (since C++11)  
---|---  
  
  


The locus of a [structured binding declaration](structured_binding.html "cpp/language/structured binding") is immediately after the identifier-list, but structured binding initializers are prohibited from referring to any of the names being declared.  | (since C++17)  
---|---  
  
  


The locus of the variable or the structured bindings(since C++17) declared in the range-declaration of a [range-for loop](range-for.html "cpp/language/range-for") is immediately after the range-expression. 
    
    
    [std::vector](../container/vector.html)<int> x;
     
    for (auto x : x) // vector x is in scope before the closing parenthesis,
                     // auto x is in scope at the closing parenthesis
    {
        // the auto x is in scope
    }

| (since C++11)  
---|---  
  
The locus of a [template parameter](template_parameters.html "cpp/language/template parameters") is immediately after its complete template parameter (including the optional default argument). 
    
    
    typedef unsigned char T;
     
    template<
        class T = T, // template parameter T is in scope at the comma,
                     // typedef name of unsigned char is in scope before the comma
        T // template parameter T is in scope
        N = 0
    >
    struct A
    {
    };

The locus of a [postcondition assertion](function.html#Postcondition_assertions "cpp/language/function") with an identifier is immediately after its `**:**`.  | (since C++26)  
---|---  
  
  


The locus of a [concept definition](constraints.html "cpp/language/constraints") is immediately after the concept name, but concept definitions are prohibited from referring to the concept name being declared.  | (since C++20)  
---|---  
  
The locus of a named [namespace definition](namespace.html "cpp/language/namespace") is immediately after the namespace name. 

| This section is incomplete  
Reason: remainder of [basic.scope.pdecl]   
---|---  
  
### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 2793](https://cplusplus.github.io/CWG/issues/2793.html) | C++98  | an extern declaration in a block scope could  
conflict with another declaration in the parent scope  | prohibited   
  
### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 6.4 Scope [basic.scope] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 6.4 Scope [basic.scope] 



  * C++17 standard (ISO/IEC 14882:2017): 



    

  * 6.3 Scope [basic.scope] 



  * C++14 standard (ISO/IEC 14882:2014): 



    

  * 3.3 Scope [basic.scope] 



  * C++11 standard (ISO/IEC 14882:2011): 



    

  * 3.3 Scope [basic.scope] 



  * C++98 standard (ISO/IEC 14882:1998): 



    

  * 3.3 Declarative regions and scopes [basic.scope] 



### See also

[C documentation](../../c/language/scope.html "c/language/scope") for Scope  
---
