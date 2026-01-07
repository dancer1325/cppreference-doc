* `typedef`
  * creates an alias / replace a type name 

## Contents

  * [1 Explanation](typedef.html#Explanation)
  * [2 typedef name for linkage purposes](typedef.html#typedef_name_for_linkage_purposes)
  * [3 Notes](typedef.html#Notes)
  * [4 Keywords](typedef.html#Keywords)
  * [5 Example](typedef.html#Example)
  * [6 Defect reports](typedef.html#Defect_reports)
  * [7 See also](typedef.html#See_also)
  
### Explanation

* _typedef declaration_
  * == `typedef` | [declaration](declarations.md)
  * != variable OR function declaration 

* uses 
  * |
    * start of the declaration
      * NORMALLY
    * after the [type specifiers](declarations.md#Specifiers)
    * between 2 type specifiers

* ❌NOT uses❌
  * /+ other [specifier](declarations.md#specifiers)
    * ⚠️EXCEPT for: type specifiers ⚠️

A typedef declaration may declare one or many identifiers on the same line (e.g. int and a pointer to int), it may declare array and function types, pointers and references, class types, etc
* Every identifier introduced in this declaration becomes a _typedef name_ , which is a synonym for the type of the object or function that it would become if the keyword typedef were removed. 

The typedef names are aliases for existing types, and are not declarations of new types
* typedef cannot be used to change the meaning of an existing type name (including a typedef name)
* Once declared, a typedef name may only be redeclared to refer to the same type again
* Typedef names are only in effect in the scope where they are visible: different functions or class declarations may define identically-named types with different meaning. 

The typedef specifier may not appear in the declaration of a function parameter nor in the decl-specifier-seq of a [function definition](function.html#Function_definition "cpp/language/function"): 
    
    
    void f1(typedef int param); // ill-formed
    typedef int f2() {}         // ill-formed

The typedef specifier may not appear in a declaration that does not contain a declarator: 
    
    
    typedef struct X {}; // ill-formed

### typedef name for linkage purposes

If a typedef declaration defines an unnamed [class](classes.html "cpp/language/classes") or [enumeration](enum.html "cpp/language/enum"), the first typedef name of the class type or enumeration type declared by the declaration is the _typedef name for linkage purposes_ of that type. 

For example, in typedef struct { /* ... */ } S;, `S` is a typedef name for linkage purposes
* The class or enumeration type defined in this way has [external linkage](storage_duration.html#Linkage "cpp/language/storage duration") (unless it is in an unnamed namespace). 

An unnamed class defined in this way should only contain C-compatible constructs
* In particular, it must not 

  * declare any members other than non-static data members, member enumerations, or member classes, 
  * have any [base classes](derived_class.html "cpp/language/derived class") or [default member initializers](data_members.html#Member_initialization "cpp/language/data members"), or 
  * contain a [lambda expression](lambda.html "cpp/language/lambda"), 

and all member classes must also satisfy these requirements (recursively).  | (since C++20)  
---|---  
  
### Notes

[Type aliases](type_alias.html "cpp/language/type alias") provide the same functionality as typedef declarations using a different syntax, and are also applicable to template names.  | (since C++11)  
---|---  
  
### Keywords

[`typedef`](../keyword/typedef.html "cpp/keyword/typedef")

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 576](https://cplusplus.github.io/CWG/issues/576.html) | C++98  | typedef was not allowed in the entire function definition  | allowed in function body   
[CWG 2071](https://cplusplus.github.io/CWG/issues/2071.html) | C++98  | typedef could appear in a declaration that does not contain a declarator  | now disallowed   
  
### See also

  * [Type alias](type_alias.html "cpp/language/type alias")
  * [Alias template](type_alias.html "cpp/language/type alias")

[C documentation](../../c/language/typedef.html "c/language/typedef") for Typedef declaration  
---
