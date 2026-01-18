* == placeholder type specifier 
  * == _placeholder type_ / will be replaced later
    * _Example:_ deduct -- from an -- [initializer](initialization.md) 

## Contents

  * [1 Syntax](auto.html#Syntax)
  * [2 Explanation](auto.html#Explanation)
    * [2.1 Parameter declarations](auto.html#Parameter_declarations)
    * [2.2 Function declarations](auto.html#Function_declarations)
    * [2.3 Variable declarations](auto.html#Variable_declarations)
    * [2.4 Structured binding declarations](auto.html#Structured_binding_declarations)
    * [2.5 new expressions](auto.html#new_expressions)
    * [2.6 Function-style cast](auto.html#Function-style_cast)
  * [3 Notes](auto.html#Notes)
  * [4 Keywords](auto.html#Keywords)
  * [5 Example](auto.html#Example)
  * [6 Defect reports](auto.html#Defect_reports)
  * [7 References](auto.html#References)

### Syntax  
   
* `type-constraint auto`
  * `type-constraint`
    * OPTIONAL
* `type-constraint decltype(auto)`
  * `type-constraint`
    * OPTIONAL
  * | C++14


* `type-constraint`
  * | C++20
  * == [concept](constraints.md#Concepts) name /
    * OPTIONALLY qualified,
    * OPTIONALLY followed -- by -- `<templateArgumentList>`
* Type is deduced -- via -- rules for [template argument deduction](template_argument_deduction.md#other-contexts)

2) Type is [`decltype(expr)`](decltype.html "cpp/language/decltype"), where expr is the initializer or the operands used in [return statements](return.html "cpp/language/return").

The placeholder auto may be accompanied by modifiers, such as const or `&`, which will participate in the type deduction. The placeholder decltype(auto) must be the sole constituent of the declared type.(since C++14)

If type-constraint is present, let `T` be the type deduced for the placeholder, the type-constraint introduces a [constraint expression](constraints.html "cpp/language/constraints") as follows: 

  * If type-constraint is `Concept<A1, ..., An>`, then the constraint expression is `Concept<T, A1, ..., An>`; 
  * otherwise (type-constraint is `Concept` without an argument list), the constraint expression is `Concept<T>`. 

Deduction fails if the constraint expression is invalid or returns false.  | (since C++20)  
---|---  
  
### Explanation

A placeholder type specifier may appear in the following contexts: 

####  Parameter declarations

In the following parameter declarations, the type of the parameter declared can be of syntax (1): 

  * If a parameter of a [lambda expression](lambda.html "cpp/language/lambda") has a placeholder type, the lambda expression is a generic lambda. 

| (since C++14)  
---|---  
  
  * If a [constant template parameter](template_parameters.html#Constant_template_arguments "cpp/language/template parameters") has a placeholder type, its type is deduced from the corresponding template argument. 

| (since C++17)  
  
  * If a parameter of a [function declaration](function.html "cpp/language/function") has a placeholder type, an [abbreviated function template](function_template.html#Abbreviated_function_template "cpp/language/function template") is declared. 

| (since C++20)  
  
#### Function declarations

A placeholder type can appear in the [declaration specifiers](declarations.html#Specifiers "cpp/language/declarations") for a [function declarator](function.html "cpp/language/function") that includes a trailing return type. 

A placeholder type can appear in the declaration specifiers or [type specifiers](declarations.html#Specifiers "cpp/language/declarations") in the declared return type of a [function declarator](function.html "cpp/language/function"). [Return type deduction](function.html#Return_type_deduction "cpp/language/function") will be applied in this case.  | (since C++14)  
---|---  
      
    
    auto f() -> int; // OK: f returns int
    auto g() { return 0.0; } // OK since C++14: g returns double
    auto h(); // OK since C++14: h’s return type will be deduced when it is defined

#### Variable declarations

The type of a variable declared using a placeholder type is deduced from its [initializer](initialization.html "cpp/language/initialization"). This use is allowed in an initializing declaration of a variable. 

The placeholder type can only appear as one of the [declaration specifiers](declarations.html#Specifiers "cpp/language/declarations") in the declaration specifier sequence or as one of the type specifiers in a trailing return type that specifies the type that replaces such a declaration specifier. In this case, the declaration must declare at least one variable, and each variable must have a non-empty initializer. 
    
    
    // “auto”s in declaration specifiers
    auto x = 5; // OK: x has type int
    const auto *v = &x, u = 6; // OK: v has type const int*, u has type const int
    static auto y = 0.0; // OK: y has type double
     
    auto f() -> int;
    auto (*fp)() -> auto = f; // OK: the “auto” in the trailing return type
                              // can be deduced from f

####  Structured binding declarations

The auto specifier can be used in a [structured binding](structured_binding.html "cpp/language/structured binding") declaration.  | (since C++17)  
---|---  
  
#### new expressions

A placeholder type can be used in the type specifier sequence of the type-id of a [new expression](new.html "cpp/language/new"). In such a type-id, the placeholder type must appear as one of the type specifiers in the type specifier sequence or a trailing return type that specifies the type that replaces such a type specifier. 

####  Function-style cast

The auto type specifier can be used as the type specifier of a [function-style cast](explicit_cast.html "cpp/language/explicit cast").  | (since C++23)  
---|---  
  
### Notes

Until C++11, auto had the semantic of a [storage duration specifier](storage_duration.html "cpp/language/storage duration"). 

A program that uses a placeholder type in a context not explicitly stated above is ill-formed. 

If a declaration declares multiple entities, and the declaration specifier sequence uses a placeholder type, the program is ill-formed if any of the following conditions is satisfied: 

  * Some of the entities declared are not variables. 
  * The type that replaces the placeholder type is not the same in each deduction. 


    
    
    auto f() -> int, i = 0; // Error: declares a function and a variable with “auto”
    auto a = 5, b = {1, 2}; // Error: different types for “auto”

If a function or variable with an unreplaced placeholder type is referenced by an expression, the program is ill-formed. 
    
    
    auto v = 1;
    auto l = [&]
    {
        v++;
        return l;// Error: The placeholder type for l was not replaced
    };
    [std::function](../utility/functional/function.html)<void()> p = [&]
    {
        v++;
        return p;// OK
    };

The auto keyword may also be used in a nested name specifier. A nested name specifier of the form auto:: is a placeholder that is replaced by a class or enumeration type following the rules for [constrained type](../experimental/constraints.html "cpp/experimental/constraints") placeholder deduction.  | (concepts TS)  
---|---  
Feature-test macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_decltype_auto`](../experimental/feature_test.html#cpp_decltype_auto "cpp/feature test") | [`201304L`](../compiler_support/14.html#cpp_decltype_auto_201304L "cpp/compiler support/14") | (C++14) | decltype(auto)  
  
### Keywords

[`auto`](../keyword/auto.html "cpp/keyword/auto"), [`decltype`](../keywords/decltype.html "cpp/keyword/decltype")

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 1265](https://cplusplus.github.io/CWG/issues/1265.html) | C++11  | the auto specifier could be used to declare a function with a trailing  
return type and define a variable in one declaration statement  | prohibited   
[CWG 1346](https://cplusplus.github.io/CWG/issues/1346.html) | C++11  | a parenthesized expression list could not be assigned to an auto variable  | allowed   
[CWG 1347](https://cplusplus.github.io/CWG/issues/1347.html) | C++11  | a declaration with the auto specifier could define two variables  
with types `T` and [std::initializer_list](../utility/initializer_list.html)<T> respectively  | prohibited   
[CWG 1852](https://cplusplus.github.io/CWG/issues/1852.html) | C++14  | the auto specifier in decltype(auto) was also a placeholder  | not a placeholder  
in this case   
[CWG 1892](https://cplusplus.github.io/CWG/issues/1892.html) | C++11  | the return type of a function pointer type-id could be auto | prohibited   
[CWG 2476](https://cplusplus.github.io/CWG/issues/2476.html) | C++11  | the resolution of [CWG issue 1892](https://cplusplus.github.io/CWG/issues/1892.html) prohibited the deduction  
of the return type of function pointer variables from initializers  | allowed   
[N3922](https://wg21.link/N3922) | C++11  | direct-list-initialization of auto deduces [std::initializer_list](../utility/initializer_list.html "cpp/utility/initializer list") | ill-formed for more than one  
elements, deduce element  
type for single element   
  
### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 9.2.9.6 Placeholder type specifiers [dcl.spec.auto] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 9.2.8.5 Placeholder type specifiers [dcl.spec.auto] 



  * C++17 standard (ISO/IEC 14882:2017): 



    

  * 10.1.7.4 The `auto` specifier [dcl.spec.auto] 



  * C++14 standard (ISO/IEC 14882:2014): 



    

  * 7.1.6.4 `auto` specifier [dcl.spec.auto] 



  * C++11 standard (ISO/IEC 14882:2011): 



    

  * 7.1.6.4 `auto` specifier [dcl.spec.auto] 


  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
