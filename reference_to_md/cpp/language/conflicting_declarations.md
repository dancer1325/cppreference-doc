

  
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
**Conflicting declarations**  
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
[Linkage specification](language_linkage.html "cpp/language/language linkage")  
[Attribute declaration](declarations.html "cpp/language/declarations") (C++11)  
[Empty declaration](declarations.html "cpp/language/declarations")  
  
  
  


Unless otherwise specified, two declarations cannot (re)introduce the same entity. The program is ill-formed if such declarations exist. 

## Contents

  * [1 Corresponding declarations](conflicting_declarations.html#Corresponding_declarations)
    * [1.1 Corresponding function overloads](conflicting_declarations.html#Corresponding_function_overloads)
    * [1.2 Corresponding function template overloads](conflicting_declarations.html#Corresponding_function_template_overloads)
  * [2 Multiple declarations of the same entity](conflicting_declarations.html#Multiple_declarations_of_the_same_entity)
    * [2.1 Restrictions](conflicting_declarations.html#Restrictions)
  * [3 Potentially-conflicting declarations](conflicting_declarations.html#Potentially-conflicting_declarations)
  * [4 Defect reports](conflicting_declarations.html#Defect_reports)

  
---  
  
### Corresponding declarations

Two declarations _correspond_ if they (re)introduce the same name, both declare constructors, or both declare destructors, unless 

  * either is a [using declaration](using_declaration.html "cpp/language/using declaration"), 
  * one declares a type (not a [typedef name](typedef.html "cpp/language/typedef")) and the other declares a variable, non-static data member other than of an [anonymous union](union.html#Anonymous_unions "cpp/language/union"), enumerator, function, or function template, or 
  * each declares a function or function template and they do not declare corresponding overloads. 



#### Corresponding function overloads

Two [function declarations](function.html "cpp/language/function") declare _corresponding overloads_ if both declare functions satisfying all following conditions: 

  * They have the same [parameter-type-list](function.html#Parameter-type-list "cpp/language/function"), omitting the types of [explicit object parameters](member_functions.html#Explicit_object_parameter "cpp/language/member functions")(since C++23). 



  * They have [equivalent](function_template.html#Function_template_overloading "cpp/language/function template") trailing [requires clauses](constraints.html#Requires_clauses "cpp/language/constraints") (if any, except [friend declarations](friend.html "cpp/language/friend")). 

| (since C++20)  
---|---  
  
  * If both of them are non-static member functions, they need to additionally satisfy one of the following requirements: 



    

  * Exactly one of them is an [implicit object member function](member_functions.html "cpp/language/member functions") without ref-qualifier and the types of their object parameters, after removing top-level references, are the same. 


| (since C++23)  
---|---  
  
    

  * Their object parameters have the same type. 



#### Corresponding function template overloads

Two [function template declarations](function_template.html "cpp/language/function template") declare _corresponding overloads_ if both declare function templates satisfying all following conditions: 

  * Their template parameter lists have the same length. 
  * Their corresponding template parameters are [equivalent](function_template.html#Function_template_overloading "cpp/language/function template"). 
  * They have equivalent [parameter-type-lists](function.html#Parameter-type-list "cpp/language/function"), omitting the types of [explicit object parameters](member_functions.html#Explicit_object_parameter "cpp/language/member functions")(since C++23). 
  * They have equivalent return types. 



  * Their corresponding template parameters are either both declared without [constraint](constraints.html#Constraints "cpp/language/constraints"), or both declared with equivalent constraints. 
  * They have equivalent trailing [requires clauses](constraints.html#Requires_clauses "cpp/language/constraints") (if any). 

| (since C++20)  
---|---  
  
  * If both are non-static members function templates, they need to additionally satisfy one of the following requirements: 



    

  * Exactly one of them is an [implicit object member function](member_functions.html "cpp/language/member functions") template without ref-qualifier and the types of their object parameters, after removing all references, are equivalent. 


| (since C++23)  
---|---  
  
    

  * Their object parameters have equivalent types. 


    
    
    struct A
    {
        friend void c();   // #1
    };
     
    struct B
    {
        friend void c() {} // corresponds to, and defines, #1
    };
     
    typedef int Int;
     
    enum E : int { a };
     
    void f(int);   // #2
    void f(Int) {} // defines #2
    void f(E) {}   // OK, another overload
     
    struct X
    {
        static void f();
        void f() const;   // error: redeclaration
     
        void g();
        void g() const;   // OK
        void g() &;       // error: redeclaration
     
        void h(this X&, int);
        void h(int) &&;   // OK, another overload
     
        void j(this const X&);
        void j() const &; // error: redeclaration
     
        void k();
        void k(this X&);  // error: redeclaration
    };

### Multiple declarations of the same entity

A declaration is _name-independent_ if its name is _ and it declares 

  * a variable with automatic [storage duration](storage_duration.html "cpp/language/storage duration"), 
  * a [structured binding](structured_binding.html "cpp/language/structured binding") with no [storage class specifier](storage_duration.html "cpp/language/storage duration") and not [inhabiting](scope.html "cpp/language/scope") a namespace scope, 
  * a [result binding](function.html#Postcondition_assertions "cpp/language/function"), 
  * the variable introduced by a [lambda capture](lambda.html#Lambda_capture "cpp/language/lambda") with an initializer, or 
  * a non-static [data member](data_members.html "cpp/language/data members") of other than an [anonymous union](union.html#Anonymous_unions "cpp/language/union"). 

| (since C++26)  
---|---  
  
Unless otherwise specified, two declarations of entities _declare the same entity_ if all following conditions are satisfied, considering declarations of unnamed types to introduce their [typedef names](typedef.html#typedef_name_for_linkage_purposes "cpp/language/typedef") and [enumeration names](enum.html#Enumeration_name_for_linkage_purposes "cpp/language/enum") for linkage purposes (if any exists): 

  * They correspond. 
  * They have the same [target scope](scope.html "cpp/language/scope"), which is not a [function parameter scope](scope.html#Function_parameter_scope "cpp/language/scope") or a [template parameter scope](scope.html#Template_parameter_scope "cpp/language/scope"). 



  * Neither is a name-independent declaration. 

| (since C++26)  
---|---  
  
  * One of the following conditions is satisfied: 



    

  * They appear in the same translation unit. 



    

  * They both declare names with [module linkage](storage_duration.html#Module_linkage "cpp/language/storage duration") and are [attached to the same module](modules.html#Module_ownership "cpp/language/modules"). 


| (since C++20)  
---|---  
  
    

  * They both declare names with [external linkage](storage_duration.html#External_linkage "cpp/language/storage duration"). 



A declaration of an entity or typedef name `X` is a _redeclaration_ of `X` if another declaration of `X` is reachable from it; otherwise, it is a _first declaration ﻿_ of `X`. 

#### Restrictions

If any two declarations of an entity `E` violate the corresponding restriction below, the program is ill-formed: 

  * If one declares `E` to be a variable, the other must also declare `E` as a variable of the same type. 
  * If one declares `E` to be a [function](function.html "cpp/language/function"), the other must also declare `E` as a function of the same type. 
  * If one declares `E` to be an [enumerator](enum.html "cpp/language/enum"), the other must also declare `E` as an enumerator. 
  * If one declares `E` to be a [namespace](namespace.html "cpp/language/namespace"), the other must also declare `E` as a namespace. 
  * If one declares `E` to be a [class type](class.html "cpp/language/class"), the other must also declare `E` as a class type. 
  * If one declares `E` to be an [enumeration type](enum.html "cpp/language/enum"), the other must also declare `E` as an enumeration type. 
  * If one declares `E` to be a [class template](class_template.html "cpp/language/class template"), the other must also declare `E` as a class template with an equivalent template parameter list (see [function template overloading](function_template.html#Function_template_overloading "cpp/language/function template")). 
  * If one declares `E` to be a [function template](function_template.html "cpp/language/function template"), the other must also declare `E` as a function template with an equivalent template parameter list and type. 



  * If one declares `E` to be an [alias template](type_alias.html "cpp/language/type alias"), the other must also declare `E` as an alias template with an equivalent template parameter list and type-id. 

| (since C++11)  
---|---  
  
  * If one declares `E` to be a (partial specialization of a) [variable template](variable_template.html "cpp/language/variable template"), the other must also declare `E` as a (partial specialization of a) variable template with an equivalent template parameter list and type. 

| (since C++14)  
  
  * If one declares `E` to be a [concept](constraints.html "cpp/language/constraints"), the other must also declare `E` as a concept. 

| (since C++20)  
  
Types are compared after all adjustments of types (during which [typedefs](typedef.html "cpp/language/typedef") are replaced by their definitions). Declarations for an array object can specify array types that differ by the presence or absence of a major array bound. No diagnostic is required if neither declaration is reachable from the other. 
    
    
    void g();      // #1
    void g(int);   // OK, different entity from #1 (they do not correspond)
    int g();       // Error: same entity as #1 with different type
     
    void h();      // #2
    namespace h {} // Error: same entity as #2, but not a function

If a declaration `H` that declares a name with [internal linkage](storage_duration.html#Internal_linkage "cpp/language/storage duration") precedes a declaration `D` in another translation unit `U` and would declare the same entity as `D` if it appeared in `U`, the program is ill-formed. 

### Potentially-conflicting declarations

Two declarations _potentially conflict_ if they correspond but declare different entities. 

If, in any scope, a name is bound to two declarations `A` and `B` that potentially conflict, `B` is not name-independent(since C++26), and `A` precedes `B`, the program is ill-formed: 
    
    
    void f()
    {
        int x, y;
        void x(); // Error: different entity for x
        int y;    // Error: redefinition
    }
     
    enum { f };   // Error: different entity for ::f
     
    namespace A {}
    namespace B = A;
    namespace B = A; // OK, no effect
    namespace B = B; // OK, no effect
    namespace A = B; // OK, no effect
    namespace B {}   // Error: different entity for B
     
    void g()
    {
        int _;
        _ = 0; // OK
        int _; // OK since C++26, name-independent declaration
        _ = 0; // Error: two non-function declarations in the lookup set
    }
     
    void h ()
    {
        int _;        // #1
        _ ++;         // OK
        static int _; // Error: conflicts with #1 because
                      // static variables are not name-independent
    }

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 279](https://cplusplus.github.io/CWG/issues/279.html)  
([P1787R6](https://wg21.link/P1787R6))  | C++98  | it was unclear whether an unnamed class or enumeration can  
be redeclared if it has a typedef name for linkage purposes  | it can be redeclared   
[CWG 338](https://cplusplus.github.io/CWG/issues/338.html)  
([P1787R6](https://wg21.link/P1787R6))  | C++98  | it was unclear whether an unnamed enumeration can be  
redeclared if it has an enumerator as a name for linkage purposes  | it can be redeclared   
[CWG 1884](https://cplusplus.github.io/CWG/issues/1884.html)  
([P1787R6](https://wg21.link/P1787R6))  | C++98  | the restrictions applied to multiple  
declarations of the same entity were unclear  | made clear 
