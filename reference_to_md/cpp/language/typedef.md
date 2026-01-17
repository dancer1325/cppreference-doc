* `typedef`
  * 💡creates an alias / replace a type name💡 
    * == 👀add a NEW type name👀

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
    * may declare: array and function types, pointers and references, class types, etc
  * != variable OR function declaration 
  * 👀\>= 1 identifiers / EACH line👀

* uses 
  * |
    * start of the declaration
      * NORMALLY
    * after the [type specifiers](declarations.md#Specifiers)
    * between 2 type specifiers

* ❌NOT uses❌
  * /+ other [specifier](declarations.md#specifiers)
    * ⚠️EXCEPT for: type specifiers ⚠️

* _typedef name_
  * == _typedef declaration_'s EACH identifier
  * == type of the object OR function 
  * == aliases for existing types
  * != declarations of new types
  * | being declared,
    * `typedef name` can be redeclared / refer -- to the -- SAME type AGAIN 
  * impact | scope / they are visible
    * DIFFERENT functions OR class declarations may define identically-named types / 
      * DIFFERENT meaning

* `typedef`
  * ❌NOT uses❌
    * change the meaning of an EXISTING type name
  * may NOT appear | 
    * declaration of a function parameter
    * [function definition's](function.md#function-definition) `decl-specifier-seq`
    * declaration / does NOT contain a declarator 

### typedef name -- for -- linkage purposes

* _typedef name for linkage purposes_
  * := the first _typedef name_ of the class type OR enumeration type declared 
  * requirements
    * typedef declaration / defines an unnamed [class](classes.md) OR [enumeration](enum.md)   
     

For example, in typedef struct { /* ... */ } S;, `S` is a typedef name for linkage purposes
* The class or enumeration type defined in this way has [external linkage](storage_duration.md#Linkage) 
(unless it is in an unnamed namespace). 

An unnamed class defined in this way should only contain C-compatible constructs
* In particular, it must not 

  * declare any members other than non-static data members, member enumerations, or member classes, 
  * have any [base classes](derived_class.html "cpp/language/derived class") or [default member initializers](data_members.html#Member_initialization "cpp/language/data members"), or 
  * contain a [lambda expression](lambda.html "cpp/language/lambda"), 

and all member classes must also satisfy these requirements (recursively).  | (since C++20)  
---|---  
  
### Notes

* [Type aliases](type_alias.md) 
  * | C++11
  * provide the same functionality as typedef declarations using a different syntax, and are also applicable to template names  
  
### Keywords

* [`typedef`](../keyword/typedef.md)

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 576](https://cplusplus.github.io/CWG/issues/576.html) | C++98  | typedef was not allowed in the entire function definition  | allowed in function body   
[CWG 2071](https://cplusplus.github.io/CWG/issues/2071.html) | C++98  | typedef could appear in a declaration that does not contain a declarator  | now disallowed   
  
### See also

* [Type alias](type_alias.md)
* [Alias template](type_alias.md)
* [C's `typedef`](../../c/language/typedef.md)
