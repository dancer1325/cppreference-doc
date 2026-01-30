* inline function
  * := function / `inline` specifier appears | function's [decl-specifier-seq](declarations.md#Specifiers)

* implicit inline function
  * == ❌NOT require mark -- via -- `inline`❌
    * ALTHOUGH you can STILL mark it
  * POSSIBLE cases
    * function defined entirely | [class/struct/union definition](classes.md), OR
      * INDEPENDENTLY whether it's a member function OR non-member friend function
      * ⚠️EXCEPTION⚠️
        * attached | [named module](modules.md#module-declarations)
          * | C++20
    * function / its first declaration is declared 
      * `constexpr` OR
      * `consteval`
        * | C++20 
    * deleted function
      * its (deleted) definition can appear | >=1 translation unit
      * | C++11  

* inline variable
  * := variable / 
    * `inline` specifier appears | variable's [decl-specifier-seq](declarations.md#specifiers)
    * static storage duration (static class member OR namespace-scope variable) 

* implicit inline variable
  * static data member /
    * | first declaration, declared `constexpr`  
  * | C++17  
  
## Contents

  * [1 Explanation](inline.html#Explanation)
  * [2 Notes](inline.html#Notes)
  * [3 Keywords](inline.html#Keywords)
  * [4 Example](inline.html#Example)
  * [5 Defect reports](inline.html#Defect_reports)
  * [6 See also](inline.html#See_also)

### Explanation

* inline function OR inline variable (| C++17) 's properties
  * definition of the inline function OR variable(| C++17) MUST be reachable | translation unit | it is accessed 
    * NOT NECESSARILY BEFORE the point of access 
  * if it has [external linkage](storage_duration.md#external-linkage) 
    * there may be [>1 definition](definition.md#one-definition-rule) of an inline function OR variable | program
      * requirements
        * 1 definition / EACH DIFFERENT translation unit
        * ALL definitions are IDENTICAL 
    * MUST be declared `inline` | every translation unit. 
    * SAME address | every translation unit 

* | inline function,
  * Function-local static objects in all function definitions are shared across all translation units (they all refer to the same object defined in one translation unit). 
  * Types defined in all function definitions are also the same in all translation units. 

Inline const variables at namespace scope have [external linkage](storage_duration.html#external_linkage "cpp/language/storage duration") by default (unlike the non-inline non-volatile const-qualified variables).  | (since C++17)  
---|---  
  
The original intent of the inline keyword was to serve as an indicator to the optimizer that [inline substitution of a function](https://en.wikipedia.org/wiki/inline_expansion "enwiki:inline expansion") is preferred over function call, that is, instead of executing the function call CPU instruction to transfer control to the function body, a copy of the function body is executed without generating the call. This avoids overhead created by the function call (passing the arguments and retrieving the result) but it may result in a larger executable as the code for the function has to be repeated multiple times. 

Since inline substitution is unobservable in the standard semantics, compilers are free to use inline substitution for any function that's not marked inline, and are free to generate function calls to any function marked inline. Those optimization choices do not change the rules regarding multiple definitions and shared statics listed above. 

Because the meaning of the keyword inline for functions came to mean "multiple definitions are permitted" rather than "inlining is preferred" since C++98, that meaning was extended to variables.  | (since C++17)  
---|---  
  
### Notes

If an inline function or variable(since C++17) with external linkage is defined differently in different translation units, the program is ill-formed, no diagnostic required. 

The inline specifier cannot be used with a function or variable(since C++17) declaration at block scope (inside another function). 

The inline specifier cannot re-declare a function or variable(since C++17) that was already defined in the translation unit as non-inline. 

The implicitly-generated member functions and any member function declared as defaulted on its first declaration are inline just like any other function defined inside a class definition. 

If an inline function is declared in different translation units, the accumulated sets of [default arguments](default_arguments.html "cpp/language/default arguments") must be the same at the end of each translation unit. 

In C, inline functions do not have to be declared inline in every translation unit (at most one may be non-inline or extern inline), the function definitions do not have to be identical (but the behavior of the program is unspecified if it depends on which one is called), and the function-local statics are distinct between different definitions of the same function. 

See [static data members](static.html "cpp/language/static") for additional rules about inline static members. Inline variables eliminate the main obstacle to packaging C++ code as header-only libraries.  | (since C++17)  
---|---  
Feature-test macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_inline_variables`](../experimental/feature_test.html#cpp_inline_variables "cpp/feature test") | [`201606L`](../compiler_support/17.html#cpp_inline_variables_201606L "cpp/compiler support/17") | (C++17) | Inline variables   

### Keywords

* [`inline`](../keyword/inline.md)

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 281](https://cplusplus.github.io/CWG/issues/281.html) | C++98  | a friend function declaration could use the inline specifier  
even if the friended function is not an inline function  | prohibit such uses   
[CWG 317](https://cplusplus.github.io/CWG/issues/317.html) | C++98  | a function could be declared inline even if it has a non-inline  
definition in the same translation unit before the declaration  | the program is ill-  
formed in this case   
[CWG 765](https://cplusplus.github.io/CWG/issues/765.html) | C++98  | a type defined in an inline function might  
be different in different translation units  | such types are the same  
in all translation units   
[CWG 1823](https://cplusplus.github.io/CWG/issues/1823.html) | C++98  | string literals in all definitions of an inline  
function were shared across all translation units  | the requirement is removed due to  
consistency and implementations   
[CWG 2531](https://cplusplus.github.io/CWG/issues/2531.html) | C++17  | a static data member could be implicitly inline even if  
it was not declared constexpr on its first declaration  | it is not implicitly  
inline in this case   
  
### See also

[C documentation](../../c/language/inline.html "c/language/inline") for inline  
---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
