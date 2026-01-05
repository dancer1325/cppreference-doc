
[Object lifetime](lifetime.html "cpp/language/lifetime")  
[Storage duration and linkage](storage_duration.html "cpp/language/storage duration")  
**Definitions and ODR**  
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
  


_Definitions_ are [declarations](declarations.html "cpp/language/declarations") that fully define the entity introduced by the declaration. Every declaration is a definition, except for the following: 

  * A function declaration without a function body: 


    
    
    int f(int); // declares, but does not define f

  * Any declaration with an extern [storage class specifier](storage_duration.html "cpp/language/storage duration") or with a [language linkage](language_linkage.html "cpp/language/language linkage") specifier (such as extern "C") without an initializer: 


    
    
    extern const int a;     // declares, but does not define a
    extern const int b = 1; // defines b

  * Declaration of a non-inline(since C++17) [static data member](static.html "cpp/language/static") inside a class definition: 


    
    
    struct S
    {
        int n;               // defines S::n
        static int i;        // declares, but does not define S::i
        inline static int x; // defines S::x
    };                       // defines S
     
    int S::i;                // defines S::i

  * (deprecated) Namespace scope declaration of a static data member that was defined within the class with the [`constexpr`](constexpr.html "cpp/language/constexpr") specifier: 


    
    
    struct S
    {
        static constexpr int x = 42; // implicitly inline, defines S::x
    };
     
    constexpr int S::x; // declares S::x, not a redefinition

| (since C++17)  
---|---  
  
  * Declaration of a class name (by [forward declaration](class.html#Forward_declaration "cpp/language/class") or by the use of the elaborated type specifier in another declaration): 


    
    
    struct S;             // declares, but does not define S
     
    class Y f(class T p); // declares, but does not define Y and T (and also f and p)

  * An [opaque declaration](enum.html "cpp/language/enum") of an enumeration: 


    
    
    enum Color : int; // declares, but does not define Color

| (since C++11)  
---|---  
  
  * Declaration of a [template parameter](template_parameters.html "cpp/language/template parameters"): 


    
    
    template<typename T> // declares, but does not define T

  * A parameter declaration in a function declaration that isn't a definition: 


    
    
    int f(int x); // declares, but does not define f and x
     
    int f(int x)  // defines f and x
    {
        return x + a;
    }

  * A [typedef](typedef.html "cpp/language/typedef") declaration: 


    
    
    typedef S S2; // declares, but does not define S2 (S may be incomplete)

  * An [alias-declaration](type_alias.html "cpp/language/type alias"): 


    
    
    using S2 = S; // declares, but does not define S2 (S may be incomplete)

| (since C++11)  
---|---  
  
  * A [using-declaration](using_declaration.html "cpp/language/using declaration"): 


    
    
    using N::d; // declares, but does not define d

  * Declaration of a [deduction guide](ctad.html#Explicit_deduction_guides "cpp/language/class template argument deduction") (does not define any entities) 

| (since C++17)  
---|---  
  
  * A [static_assert](static_assert.html "cpp/language/static assert") declaration (does not define any entities) 
  * An [attribute declaration](declarations.html "cpp/language/declarations") (does not define any entities) 

| (since C++11)  
  
  * An [empty declaration](declarations.html "cpp/language/declarations") (does not define any entities) 
  * A [using-directive](namespace.html#Using-directives "cpp/language/namespace") (does not define any entities) 



  * An [explicit instantiation declaration](class_template.html#Class_template_instantiation "cpp/language/class template") (an "extern template"): 


    
    
    extern template
    f<int, char>; // declares, but does not define f<int, char>

| (since C++11)  
---|---  
  
  * An [explicit specialization](template_specialization.html "cpp/language/template specialization") whose declaration is not a definition: 


    
    
    template<>
    struct A<int>; // declares, but does not define A<int>

An [asm declaration](asm.html "cpp/language/asm") does not define any entities, but it is classified as a definition. 

Where necessary, the compiler may implicitly define the [default constructor](default_constructor.html "cpp/language/default constructor"), [copy constructor](copy_constructor.html "cpp/language/copy constructor"), [move constructor](move_constructor.html "cpp/language/move constructor"), [copy assignment operator](as_operator.html "cpp/language/as operator"), [move assignment operator](move_operator.html "cpp/language/move operator"), and the [destructor](destructor.html "cpp/language/destructor"). 

If the definition of any object results in an object of [incomplete type](incomplete_type.html "cpp/language/incomplete type") or [abstract class type](abstract_class.html "cpp/language/abstract class"), the program is ill-formed. 

## Contents

  * [1 One Definition Rule](definition.html#One_Definition_Rule)
    * [1.1 Naming an entity](definition.html#Naming_an_entity)
    * [1.2 Potential results](definition.html#Potential_results)
    * [1.3 ODR-use (informal definition)](definition.html#ODR-use_.28informal_definition.29)
    * [1.4 ODR-use (formal definition)](definition.html#ODR-use_.28formal_definition.29)
  * [2 Defect reports](definition.html#Defect_reports)
  * [3 References](definition.html#References)

  
---  
  
### One Definition Rule

Only one definition of any variable, function, class type, enumeration type[, concept](constraints.html "cpp/language/constraints")(since C++20) or template is allowed in any one translation unit (some of these may have multiple declarations, but only one definition is allowed). 

One and only one definition of every non-[inline](inline.html "cpp/language/inline") function or variable that is _odr-used_ (see below) is required to appear in the entire program (including any standard and user-defined libraries). The compiler is not required to diagnose this violation, but the behavior of the program that violates it is undefined. 

For an inline function or inline variable(since C++17), a definition is required in every translation unit where it is _odr-used_ ﻿. 

For a class, a definition is required wherever the class is used in a way that requires it to be [complete](incomplete_type.html "cpp/language/incomplete type"). 

There can be more than one definition in a program of each of the following: class type, enumeration type, inline function, inline variable(since C++17), [templated entity](templates.html#Templated_entity "cpp/language/templates") (template or member of template, but not full [template specialization](template_specialization.html "cpp/language/template specialization")), as long as all following conditions are satisfied: 

  * Each definition appears in a different translation unit. 



  * The definitions are not [attached to a named module](modules.html "cpp/language/modules"). 

| (since C++20)  
---|---  
  
  * Each definition consists of the same sequence of [tokens](translation_phases.html#Tokens "cpp/language/translation phases") (typically, appears in the same header). 
  * Name lookup from within each definition finds the same entities (after [overload resolution](overload_resolution.html "cpp/language/overload resolution")), except that: 



    

  * Constants with internal or no linkage may refer to different objects as long as they are not odr-used and have the same values in every definition. 



    

  * [Lambda expressions](lambda.html "cpp/language/lambda") that are not in a default argument or a default template argument(since C++20) are uniquely identified by the sequence of tokens used to define them. 


| (since C++11)  
---|---  
  
  * Overloaded operators, including conversion, allocation, and deallocation functions refer to the same function from each definition (unless referring to one defined within the definition). 
  * Corresponding entities have the same language linkage in each definition (e.g. the include file is not inside an extern "C" block). 
  * If a `const` object is [constant-initialized](constant_initialization.html "cpp/language/constant initialization") in any of the definitions, it is constant-initialized in each definition. 
  * The rules above apply to every default argument used in each definition. 
  * If the definition is for a class with an implicitly-declared constructor, every translation unit where it is odr-used must call the same constructor for the base and members. 



  * If the definition is for a class with a defaulted [three-way comparison](default_comparisons.html "cpp/language/default comparisons"), every translation unit where it is odr-used must call the same comparison operator for the base and members. 

| (since C++20)  
---|---  
  
  * If the definition is for a template, then all these requirements apply to both names at the point of definition and dependent names at the point of instantiation. 



If all these requirements are satisfied, the program behaves as if there is only one definition in the entire program. Otherwise, the program is ill-formed, no diagnostic required. 

Note: in C, there is no program-wide ODR for types, and even extern declarations of the same variable in different translation units may have different types [as long as they are compatible](../../c/language/compatible_type.html#Compatible_types "c/language/type"). In C++, the source-code tokens used in declarations of the same type must be the same as described above: if one .cpp file defines struct S { int x; }; and the other .cpp file defines struct S { int y; };, the behavior of the program that links them together is undefined. This is usually resolved with [unnamed namespaces](namespace.html "cpp/language/namespace"). 

#### Naming an entity

A variable is _named_ by an expression if the expression is an identifier expression that denotes it. 

A function is _named_ by an expression or conversion in following cases: 

  * A function whose name appears as an expression or conversion (including named function, overloaded operator, [user-defined conversion](cast_operator.html "cpp/language/cast operator"), user-defined placement forms of [`operator new`](../memory/new/operator_new.html "cpp/memory/new/operator new"), non-default initialization) is named by that expression if it is selected by overload resolution, except when it is an unqualified pure virtual member function or a pointer-to-member to a pure virtual function. 
  * An [allocation](../memory/new/operator_new.html "cpp/memory/new/operator new") or [deallocation](../memory/new/operator_delete.html "cpp/memory/new/operator delete") function for a class is named by a [new expression](new.html "cpp/language/new") appearing in an expression. 
  * A deallocation function for a class is named by a [delete expression](delete.html "cpp/language/delete") appearing in an expression. 
  * A constructor selected to copy or move an object is considered to be named by the expression or conversion even if [copy elision](copy_elision.html "cpp/language/copy elision") takes place. Using a prvalue in some contexts does not copy or move an object, see [mandatory elision](copy_elision.html#Mandatory_elision_of_copy.2Fmove_operations "cpp/language/copy elision").(since C++17)



A potentially evaluated expression or conversion odr-uses a function if it names it. 

A potentially constant evaluated expression or conversion that names a constexpr function makes it [needed for constant evaluation](constant_expression.html#Functions_and_variables_needed_for_constant_evaluation "cpp/language/constant expression"), which triggers definition of a defaulted function or instantiation of a function template specialization, even if the expression is unevaluated.  | (since C++11)  
---|---  
  
#### Potential results

The set of _potential results_ of an expression E is a (possibly empty) set of identifier expressions that appear within E, combined as follows: 

  * If E is an [identifier expression](expressions.html#Primary_expressions "cpp/language/expressions"), the expression E is its only potential result. 
  * If E is a subscript expression (E1[E2]) where one of the operands is an array, the potential results of that operand is included in the set. 
  * If E is a class member access expression of the form E1.E2 or E1.template E2 naming a non-static data member, the potential results of E1 is included in the set. 
  * If E is a class member access expression naming a static data member, the identifier expression designating the data member is included in the set. 
  * If E is a pointer-to-member access expression of the form E1.*E2 or E1.*template E2 whose second operand is a constant expression, the potential results of E1 are included in the set. 
  * If E is an expression in parentheses ((E1)), the potential results of E1 are included in the set. 
  * If E is a glvalue conditional expression (E1 ? E2 : E3, where E2 and E3 are glvalues), the union of the potential results of E2 and E3 are both included in the set. 
  * If E is a comma expression (E1, E2), the potential results of E2 are in the set of potential results. 
  * Otherwise, the set is empty. 



#### ODR-use (informal definition)

An object is odr-used if its value is read (unless it is a compile time constant) or written, its address is taken, or a reference is bound to it, 

A reference is odr-used if it is used and its referent is not known at compile time, 

A function is odr-used if a function call to it is made or its address is taken. 

If an entity is odr-used, its definition must exist somewhere in the program; a violation of that is usually a link-time error. 
    
    
    struct S
    {
        static const int x = 0; // static data member
        // a definition outside of class is required if it is odr-used
    };
     
    const int& f(const int& r);
     
    int n = b ? (1, S::x) // S::x is not odr-used here
              : f(S::x);  // S::x is odr-used here: a definition is required

#### ODR-use (formal definition)

A variable x that is named by a [potentially-evaluated expression](expressions.html#Potentially-evaluated_expressions "cpp/language/expressions") expr that appears at a point `P` is odr-used by expr, unless any of the following conditions is satisfied: 

  * x is a reference that is [usable in constant expressions](constant_expression.html#Usable_in_constant_expressions "cpp/language/constant expression") at `P`. 
  * x is not a reference and (until C++26)expr is an element of the set of potential results of an expression E, and any of the following conditions is satisfied: 
    * E is a [discarded-value expression](expressions.html#Discarded-value_expressions "cpp/language/expressions"), and no lvalue-to-rvalue conversion is applied to it. 
    * x is a non-volatile(since C++26) object that is usable in constant expressions at `P` and has no mutable subobjects, and any of the following conditions is satisfied: 



    

    

  * E is a [class member access expression](operator_member_access.html "cpp/language/operator member access") naming a [non-static data member](data_members.html "cpp/language/data members") of reference type and whose object expression has non-volatile-qualified type. 


| (since C++26)  
---|---  
  
    

    

  * E has non-volatile-qualified non-class type, and the lvalue-to-rvalue conversion is applied to it. 


    
    
    struct S { static const int x = 1; }; // applying lvalue-to-rvalue conversion
                                          // to S::x yields a constant expression
     
    int f()
    {
        S::x;        // discarded-value expression does not odr-use S::x
     
        return S::x; // expression where lvalue-to-rvalue conversion
                     // applies does not odr-use S::x
    }

*this is odr-used if this appears as a potentially-evaluated expression (including the implicit this in a non-static member function call expression). 

A [structured binding](structured_binding.html "cpp/language/structured binding") is odr-used if it appears as a potentially-evaluated expression.  | (since C++17)  
---|---  
  
A function is odr-used in following cases: 

  * A function is odr-used if it is named by (see below) a potentially-evaluated expression or conversion. 
  * A [virtual member function](virtual.html "cpp/language/virtual") is odr-used if it is not a pure virtual member function (addresses of virtual member functions are required to construct the vtable). 
  * A non-placement allocation or deallocation function for a class is odr-used by the definition of a constructor of that class. 
  * A non-placement deallocation function for a class is odr-used by the definition of the destructor of that class, or by being selected by the lookup at the point of definition of a virtual destructor. 
  * An assignment operator in a class `T` that is a member or base of another class `U` is odr-used by an implicitly-defined copy-assignment or move-assignment functions of `U`. 
  * A constructor (including default constructors) for a class is odr-used by the [initialization](initialization.html "cpp/language/initialization") that selects it. 
  * A destructor for a class is odr-used if it is [potentially invoked](destructor.html#Potentially-invoked_destructor "cpp/language/destructor"). 

| This section is incomplete  
Reason: list of all situations where odr-use makes a difference   
---|---  
  
### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 261](https://cplusplus.github.io/CWG/issues/261.html) | C++98  | a deallocation function for a polymorphic class  
might be odr-used even if there were no relevant  
new or delete expressions in the program  | supplemented the  
odr-use cases to cover  
constructors and destructors   
[CWG 678](https://cplusplus.github.io/CWG/issues/678.html) | C++98  | an entity could have definitions  
with different language linkages  | the behavior is  
undefined in this case   
[CWG 1472](https://cplusplus.github.io/CWG/issues/1472.html) | C++98  | reference variables which satisfy the requirements for  
appearing in a constant expression were odr-used even  
if the lvalue-to-rvalue conversion is immediately applied  | they are not  
odr-used in this case   
[CWG 1614](https://cplusplus.github.io/CWG/issues/1614.html) | C++98  | taking address of a pure virtual function odr-used it  | the function is not odr-used   
[CWG 1741](https://cplusplus.github.io/CWG/issues/1741.html) | C++98  | constant objects that are immediately lvalue-to-rvalue  
converted in potentially-evaluated expressions were odr-used  | they are not odr-used   
[CWG 1926](https://cplusplus.github.io/CWG/issues/1926.html) | C++98  | array subscript expressions did not propagate potential results  | they propagate   
[CWG 2242](https://cplusplus.github.io/CWG/issues/2242.html) | C++98  | it was unclear whether a `const` object that is only  
constant-initialized in part of its definitions violates ODR  | ODR is not violated; the object is  
constant-initialized in this case   
[CWG 2300](https://cplusplus.github.io/CWG/issues/2300.html) | C++11  | lambda expressions in different translation  
units could never have the same closure type  | the closure type can be the  
same under one definition rule   
[CWG 2353](https://cplusplus.github.io/CWG/issues/2353.html) | C++98  | a static data member was not a potential result  
of a member access expression accessing it  | it is   
[CWG 2433](https://cplusplus.github.io/CWG/issues/2433.html) | C++14  | a variable template could not have  
multiple definitions in a program  | it can   
  
### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 6.3 One definition rule [basic.def.odr] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 6.3 One definition rule [basic.def.odr] 



  * C++17 standard (ISO/IEC 14882:2017): 



    

  * 6.2 One definition rule [basic.def.odr] 



  * C++14 standard (ISO/IEC 14882:2014): 



    

  * 3.2 One definition rule [basic.def.odr] 



  * C++11 standard (ISO/IEC 14882:2011): 



    

  * 3.2 One definition rule [basic.def.odr] 



  * C++03 standard (ISO/IEC 14882:2003): 



    

  * 3.2 One definition rule [basic.def.odr] 



  * C++98 standard (ISO/IEC 14882:1998): 



    

  * 3.2 One definition rule [basic.def.odr] 


