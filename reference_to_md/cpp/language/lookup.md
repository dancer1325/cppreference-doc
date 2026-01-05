
[Object lifetime](lifetime.html "cpp/language/lifetime")  
[Storage duration and linkage](storage_duration.html "cpp/language/storage duration")  
[Definitions and ODR](definition.html "cpp/language/definition")  
**Name lookup**  
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
  


Name lookup is the procedure by which a [name](name.html "cpp/language/name"), when encountered in a program, is associated with the [declaration](declarations.html "cpp/language/declarations") that introduced it. 

For example, to compile [std::cout](../io/cout.html) << [std::endl](../io/manip/endl.html);, the compiler performs: 

  * unqualified name lookup for the name `std`, which finds the declaration of namespace std in the header [`<iostream>`](../header/iostream.html "cpp/header/iostream")
  * qualified name lookup for the name `cout`, which finds a variable declaration in the namespace `std`
  * qualified name lookup for the name `endl`, which finds a function template declaration in the namespace `std`
  * both [argument-dependent lookup](adl.html "cpp/language/adl") for the name `operator<<`, which finds multiple function template declarations in the namespace `std`, and qualified name lookup for the name std::ostream::operator<<, which finds multiple member function declarations in class [std::ostream](../io/basic_ostream.html "cpp/io/basic ostream"). 



For function and function template names, name lookup can associate multiple declarations with the same name, and may obtain additional declarations from [argument-dependent lookup](adl.html "cpp/language/adl"). [Template argument deduction](function_template.html "cpp/language/function template") may also apply, and the set of declarations is passed to [overload resolution](overload_resolution.html "cpp/language/overload resolution"), which selects the declaration that will be used. [Member access](access.html "cpp/language/access") rules, if applicable, are considered only after name lookup and overload resolution. 

For all other names (variables, namespaces, classes, etc), name lookup can associate multiple declarations only if they declare the same [entity](basics.html "cpp/language/basic concepts"), otherwise it must produce a single declaration in order for the program to compile. Lookup for a name in a scope finds all declarations of that name, with one exception, known as the "struct hack" or "type/non-type hiding": Within the same scope, some occurrences of a name may refer to a declaration of a class/struct/union/enum that is not a typedef, while all other occurrences of the same name either all refer to the same variable, non-static data member, or enumerator, or they all refer to possibly overloaded function or function template names. In this case, there is no error, but the type name is hidden from lookup (the code must use [elaborated type specifier](elaborated_type_specifier.html "cpp/language/elaborated type specifier") to access it). 

### Types of lookup

If the name appears immediately to the right of the scope resolution operator `**::**` or possibly after `**::**` followed by the disambiguating keyword `template`, see 

  * [Qualified name lookup](qualified_lookup.html "cpp/language/qualified lookup")



Otherwise, see 

  * [Unqualified name lookup](unqualified_lookup.html "cpp/language/unqualified lookup")



    

  * (which, for function names, includes [Argument-dependent lookup](adl.html "cpp/language/adl")) 



### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 2063](https://cplusplus.github.io/CWG/issues/2063.html) | C++98  | "struct hack" did not apply in class scope (breaks C compatibility)  | applied   
[CWG 2218](https://cplusplus.github.io/CWG/issues/2218.html) | C++98  | lookup for non-function (template) names could not associate  
multiple declarations, even if they declare the same entity  | allowed   
  
### See also

  * [Scope](scope.html "cpp/language/scope")
  * [Argument-dependent lookup](adl.html "cpp/language/adl") (ADL) 
  * [Template argument deduction](function_template.html#Template_argument_deduction "cpp/language/function template")
  * [Overload resolution](overload_resolution.html "cpp/language/overload resolution")

[C documentation](../../c/language/name_space.html "c/language/name space") for Lookup and name spaces  
---
