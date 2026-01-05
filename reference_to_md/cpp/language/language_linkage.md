

  
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
  


[Declarations](declarations.html "cpp/language/declarations")

| Overview  
---  
[Declaration syntax](declarations.html "cpp/language/declarations")  
[_decl-specifier-seq_](declarations.html#Specifiers "cpp/language/declarations")  
[Declarator](declarations.html#Declarators "cpp/language/declarations")  
[Conflicting declarations](conflicting_declarations.html "cpp/language/conflicting declarations")  
Specifiers  
[typedef](typedef.html "cpp/language/typedef")  
[inline](inline.html "cpp/language/inline")  
[virtual function specifier](virtual.html "cpp/language/virtual")  
[explicit function specifier](explicit.html "cpp/language/explicit")  
[friend](friend.html "cpp/language/friend")  
[constexpr](constexpr.html "cpp/language/constexpr")(C++11)  
[consteval](consteval.html "cpp/language/consteval")(C++20)  
[constinit](constinit.html "cpp/language/constinit")(C++20)  
[Storage class specifiers](storage_duration.html "cpp/language/storage duration")  
[Translation-unit-local](tu_local.html "cpp/language/tu local") (C++20)  
[class/struct](class.html "cpp/language/class")  
[union](union.html "cpp/language/union")  
[enum](enum.html "cpp/language/enum")  
[decltype](decltype.html "cpp/language/decltype")(C++11)  
[auto](auto.html "cpp/language/auto")(C++11)  
[alignas](alignas.html "cpp/language/alignas")(C++11)  
[constvolatile](cv.html "cpp/language/cv")  
[Pack indexing specifier](pack_indexing.html#Pack_indexing_specifier "cpp/language/pack indexing") (C++26)  
[Elaborated type specifier](elaborated_type_specifier.html "cpp/language/elaborated type specifier")  
[Attributes](attributes.html "cpp/language/attributes") (C++11)  
  
| Declarators  
---  
[Reference](reference.html "cpp/language/reference")  
[Pointer](pointer.html "cpp/language/pointer")  
[Array](array.html "cpp/language/array")  
Block declarations  
[Simple-declaration](declarations.html "cpp/language/declarations")  
→[Structured binding declaration](structured_binding.html "cpp/language/structured binding") (C++17)  
[Alias declaration](type_alias.html "cpp/language/type alias") (C++11)  
[Namespace alias definition](namespace_alias.html "cpp/language/namespace alias")  
[using declaration](using_declaration.html "cpp/language/using declaration")  
[`using` directive](namespace.html#Using-directives "cpp/language/namespace")  
[static_assert declaration](static_assert.html "cpp/language/static assert") (C++11)  
[asm declaration](asm.html "cpp/language/asm")  
[Opaque enum declaration](enum.html "cpp/language/enum") (C++11)  
Other declarations  
[Namespace definition](namespace.html "cpp/language/namespace")  
[Function declaration](function.html "cpp/language/function")  
[Class template declaration](class_template.html "cpp/language/class template")  
[Function template declaration](function_template.html "cpp/language/function template")  
[Explicit template instantiation](class_template.html#Explicit_instantiation "cpp/language/class template") (C++11)  
[Explicit template specialization](template_specialization.html "cpp/language/template specialization")  
**Linkage specification**  
[Attribute declaration](declarations.html "cpp/language/declarations") (C++11)  
[Empty declaration](declarations.html "cpp/language/declarations")  
  
  
  


Provides for linkage between program units written in different programming languages. 

This can also be used to detach a declaration from its module. See [Module ownership](modules.html#Module_ownership "cpp/language/modules").  | (since C++20)  
---|---  
---  
`**extern**` string-literal `**{**` declaration-seq ﻿(optional) `**}**` |  (1)  |   
`**extern**` string-literal declaration |  (2)  |   
  
1) Applies the language specification string-literal to all function types, function names with external linkage and variables with external linkage declared in declaration-seq.

2) Applies the language specification string-literal to a single declaration or definition.

string-literal |  \-  |  an [unevaluated string literal](string_literal.html#Unevaluated_strings "cpp/language/string literal") that names the required language linkage   
---|---|---  
declaration-seq |  \-  |  a sequence of declarations, which may include nested linkage specifications   
declaration |  \-  |  a declaration   
  
## Contents

  * [1 Explanation](language_linkage.html#Explanation)
    * [1.1 Special rules for "C" linkage](language_linkage.html#Special_rules_for_.22C.22_linkage)
  * [2 Notes](language_linkage.html#Notes)
  * [3 Keywords](language_linkage.html#Keywords)
  * [4 Defect reports](language_linkage.html#Defect_reports)
  * [5 References](language_linkage.html#References)

  
---  
  
### Explanation

Every function type, every function name with [external linkage](storage_duration.html "cpp/language/storage duration"), and every variable name with [external linkage](storage_duration.html "cpp/language/storage duration"), has a property called _language linkage_. Language linkage encapsulates the set of requirements necessary to link with a program unit written in another programming language: [calling convention](https://en.wikipedia.org/wiki/calling_convention "enwiki:calling convention"), [name mangling](https://en.wikipedia.org/wiki/name_mangling "enwiki:name mangling") (name decoration) algorithm, etc. 

Only two language linkages are guaranteed to be supported: 

  1. "C++", the default language linkage. 
  2. "C", which makes it possible to link with functions written in the C programming language, and to define, in a C++ program, functions that can be called from the units written in C. 


    
    
    extern "C"
    {
        int open(const char *path_name, int flags); // C function declaration
    }
     
    int main()
    {
        int fd = open("test.txt", 0); // calls a C function from a C++ program
    }
     
    // This C++ function can be called from C code
    extern "C" void handler(int)
    {
        [std::cout](../io/cout.html) << "Callback invoked\n"; // It can use C++
    }

Since language linkage is part of every function type, pointers to functions maintain language linkage as well. Language linkage of function types (which represents calling convention) and language linkage of function names (which represents name mangling) are independent of each other: 
    
    
    extern "C" void f1(void(*pf)()); // declares a function f1 with C linkage,
                                 // which returns void and takes a pointer to a C function
                                 // which returns void and takes no parameters
     
    extern "C" typedef void FUNC(); // declares FUNC as a C function type that returns void
                                    // and takes no parameters
     
    FUNC f2;            // the name f2 has C++ linkage, but its type is C function
    extern "C" FUNC f3; // the name f3 has C linkage and its type is C function void()
    void (*pf2)(FUNC*); // the name pf2 has C++ linkage, and its type is
                        // "pointer to a C++ function which returns void and takes one
                        // argument of type 'pointer to the C function which returns void
                        // and takes no parameters'"
     
    extern "C"
    {
        static void f4(); // the name of the function f4 has internal linkage (no language)
                          // but the function's type has C language linkage
    }

If [two declarations of an entity](conflicting_declarations.html#Multiple_declarations_of_the_same_entity "cpp/language/conflicting declarations") give it different language linkages, the program is ill-formed; no diagnostic is required if neither declaration is reachable from the other. A redeclaration of an entity without a linkage specification inherits the language linkage of the entity and its type (if exists). 
    
    
    extern "C" int f();
    extern "C++" int f(); // Error: different language linkages
     
    extern "C" int g();
    int g(); // OK, has C language linkage
     
    int h(); // has C++ language linkage by default
    extern "C" int h(); // Error: different language linkages

#### Special rules for "C" linkage

When class members, friend functions with a trailing [requires clause](constraints.html#Requires_clauses "cpp/language/constraints"),(since C++20) or non-static member functions appear in a "C" language block, the linkage of their types remains "C++" (but parameter types, if any, remain "C"): 
    
    
    extern "C"
    {
        class X
        {
            void mf();           // the function mf and its type have C++ language linkage
            void mf2(void(*)()); // the function mf2 has C++ language linkage;
                                 // the parameter has type “pointer to C function”
        };
    }
     
    template<typename T>
    struct A { struct B; };
     
    extern "C"
    {
        template<typename T>
        struct A<T>::B
        {
            friend void f(B*) requires true {} // C language linkage ignored
        };
    }
     
    namespace Q
    {
        extern "C" void f(); // not ill-formed
    }

Let `C` be a declaration that declares a function or variable with "C" language linkage. If another declaration `D` declares an entity with the same name, and it satisfies any of the following conditions, `C` and `D` declare the same entity: 

  * `D` declares a variable that belongs to the global scope. 
  * If `C` declares a variable, `D` also declares a variable. 
  * If `C` declares a function, `D` also declares a function. 



Unlike [regular redeclarations](conflicting_declarations.html#Multiple_declarations_of_the_same_entity "cpp/language/conflicting declarations"), `C` and `D` can have different [target scopes](scope.html "cpp/language/scope"): 
    
    
    extern "C"
    {
        int x;
        int f();
        int g() { return 1; }
    }
     
    namespace A
    {
        int x;                // Error: redefines “x”
        int f();              // OK, redeclares “f”
        int g() { return 1; } // Error: redefines “g”
    }

However, the [restrictions](conflicting_declarations.html#Restrictions "cpp/language/conflicting declarations") of such declarations still apply, which means they should either both declare functions or both declare variables, and the declared entities must have the same type: 
    
    
    namespace A
    {
        extern "C" int x();
        extern "C" int y();
    }
     
    int x; // Error: redeclares “x” as a different kind of entity
     
    namespace B
    {
        void y(); // Error: redeclares “y” with a different type
    }

### Notes

Language specifications can only appear in [namespace scope](scope.html#Namespace_scope "cpp/language/scope"). 

The braces of the language specification do not establish a scope. 

When language specifications nest, the innermost specification is the one that is in effect. 

A declaration directly contained in a language linkage specification is treated as if it contains the [extern specifier](storage_duration.html "cpp/language/storage duration") for the purpose of determining the [linkage](storage_duration.html#Linkage "cpp/language/storage duration") of the declared name and whether it is a [definition](definition.html "cpp/language/definition"). 
    
    
    extern "C" int x; // a declaration and not a definition
    // The above line is equivalent to extern "C" { extern int x; }
     
    extern "C" { int x; } // a declaration and definition
     
    extern "C" double f();
    static double f(); // error: linkage conflict
     
    extern "C" static void g(); // error: linkage conflict

extern "C" makes it possible to include header files containing declarations of C library functions in a C++ program, but if the same header file is shared with a C program, extern "C" (which is not allowed in C) must be hidden with an appropriate [` #ifdef`](../preprocessor/conditional.html "cpp/preprocessor/conditional"), typically [`__cplusplus`](../preprocessor/replace.html#Predefined_macros "cpp/preprocessor/replace"): 
    
    
    #ifdef __cplusplus
    extern "C" int foo(int, int); // C++ compiler sees this
    #else
    int foo(int, int);            // C compiler sees this
    #endif

The only modern compiler that differentiates function types with "C" and "C++" language linkages is Oracle Studio, others do not permit overloads that are only different in language linkage, including the overload sets required by the C++ standard ([std::qsort](../algorithm/qsort.html "cpp/algorithm/qsort"), [std::bsearch](../algorithm/bsearch.html "cpp/algorithm/bsearch"), [std::signal](../utility/program/signal.html "cpp/utility/program/signal"), [std::atexit](../utility/program/atexit.html "cpp/utility/program/atexit"), and [std::at_quick_exit](../utility/program/at_quick_exit.html "cpp/utility/program/at quick exit")): [GCC bug 2316](https://gcc.gnu.org/bugzilla/show_bug.cgi?id=2316), [Clang bug 6277](https://bugs.llvm.org/show_bug.cgi?id=6277), [CWG issue 1555](https://cplusplus.github.io/CWG/issues/1555.html). 
    
    
    extern "C"   using c_predfun   = int(const void*, const void*);
    extern "C++" using cpp_predfun = int(const void*, const void*);
     
    // ill-formed, but accepted by most compilers
    static_assert([std::is_same](../types/is_same.html)<c_predfun, cpp_predfun>::value,
                  "C and C++ language linkages shall not differentiate function types.");
     
    // following declarations do not declare overloads in most compilers
    // because c_predfun and cpp_predfun are considered to be the same type
    void qsort(void* base, [std::size_t](../types/size_t.html) nmemb, [std::size_t](../types/size_t.html) size, c_predfun*   compar);
    void qsort(void* base, [std::size_t](../types/size_t.html) nmemb, [std::size_t](../types/size_t.html) size, cpp_predfun* compar);

### Keywords

[`extern`](../keyword/extern.html "cpp/keyword/extern")

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 4](https://cplusplus.github.io/CWG/issues/4.html) | C++98  | names with internal linkage can have language linkages  | limited to names with external linkage   
[CWG 341](https://cplusplus.github.io/CWG/issues/341.html) | C++98  | a function with "C" language linkage can  
have the same name as a global variable  | the program is ill-formed in this case  
(no diagnostic required if they  
appear in different translation units)   
[CWG 564](https://cplusplus.github.io/CWG/issues/564.html) | C++98  | the program was ill-formed if two declarations  
only differ in language linkage specifications  
(i.e. different string literals following 'extern')  | the actual language linkages given by  
the declarations are compared instead   
[CWG 2460](https://cplusplus.github.io/CWG/issues/2460.html) | C++20  | friend functions with a trailing requires clause  
and "C" language linkage had conflict behaviors  | "C" language linkage  
is ignored in this case   
[CWG 2483](https://cplusplus.github.io/CWG/issues/2483.html) | C++98  | the linkage of the types of static member functions  
appear in "C" language blocks was "C++" | the linkage is "C"  
  
### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 9.11 Linkage specifications [dcl.link] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 9.11 Linkage specifications [dcl.link] 



  * C++17 standard (ISO/IEC 14882:2017): 



    

  * 10.5 Linkage specifications [dcl.link] 



  * C++14 standard (ISO/IEC 14882:2014): 



    

  * 7.5 Linkage specifications [dcl.link] 



  * C++11 standard (ISO/IEC 14882:2011): 



    

  * 7.5 Linkage specifications [dcl.link] 



  * C++03 standard (ISO/IEC 14882:2003): 



    

  * 7.5 Linkage specifications [dcl.link] 



  * C++98 standard (ISO/IEC 14882:1998): 



    

  * 7.5 Linkage specifications [dcl.link] 


