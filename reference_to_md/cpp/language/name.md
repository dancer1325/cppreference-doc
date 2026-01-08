* _identifier_
  * := 💡sequence of digits + underscores, lowercase and uppercase Latin letters + MOST Unicode characters💡
    * arbitrarily long
    * case-sensitive
      * == lowercase letterS != uppercase letters
    * every character is significant
    * MOST Unicode characters
      * ❌!= ALL Unicode characters❌
      * == limited | MOST implementations
        * _Example:_ [gcc 10-](https://gcc.gnu.org/wiki/FAQ#What_is_the_status_of_adding_the_UTF-8_support_for_identifier_names_in_GCC.3F)
  * ⚠️requirements⚠️
    * MUST conform to [Normalization Form C](https://www.unicode.org/charts/normalization/)
    * first character MUST be one of
      * uppercase Latin letters A-Z 
      * lowercase Latin letters a-z 
      * underscore 
      * any Unicode character / 's property [XID_Start](https://www.unicode.org/reports/tr31/#Table_Lexical_Classes_for_Identifiers)
        * _Example:_ [DerivedCoreProperties.txt](https://www.unicode.org/Public/UCD/latest/ucd/DerivedCoreProperties.txt)
    * any other character MUST be one of
      * digits 0-9 
      * uppercase Latin letters A-Z 
      * lowercase Latin letters a-z 
      * underscore 
      * any Unicode character / 's property [XID_Continue](https://www.unicode.org/reports/tr31/#Table_Lexical_Classes_for_Identifiers)
        * _Example:_ [DerivedCoreProperties.txt](https://www.unicode.org/Public/UCD/latest/ucd/DerivedCoreProperties.txt)

## Contents

  * [1 In declarations](name.html#In_declarations)
    * [1.1 Zombie identifiers](name.html#Zombie_identifiers)
  * [2 In expressions](name.html#In_expressions)
    * [2.1 Type](name.html#Type)
    * [2.2 Unqualified identifiers](name.html#Unqualified_identifiers)
    * [2.3 Qualified identifiers](name.html#Qualified_identifiers)
  * [3 Implicit member access transformation](name.html#Implicit_member_access_transformation)
  * [4 Names](name.html#Names)
  * [5 Defect reports](name.html#Defect_reports)
  * [6 See also](name.html#See_also)

  
### In declarations

An identifier can be used [to name](declarations.md) objects, references, functions, enumerators, types, class members, namespaces, templates, template specializations, parameter packs(since C++11), goto labels, and other entities, with the following exceptions: 

  * The identifiers that are [keywords](../keywords.html "cpp/keyword") cannot be used for other purposes. 



    

  * The only place they can be used as non-keywords is in an attribute-token (e.g. [[private]] is a valid [attribute](attributes.html "cpp/language/attributes")). 


| (since C++11)  
---|---  
  
  * The identifiers that are [alternative representations](operator_alternative.html "cpp/language/operator alternative") for certain operators and punctuators cannot be used for other purposes. 



  * The identifiers with special meaning (final, import, module(since C++20) and override) are used explicitly in a certain context rather than being regular identifiers. 
    * Unless otherwise specified, any ambiguity as to whether a given identifier has a special meaning is resolved to interpret the token as a regular identifier. 

| (since C++11)  
---|---  
  
  * Identifiers that appear as a token or preprocessing token (i.e., not in user-defined-string-literal like operator ""id)(since C++11) of one of the following forms are reserved: 
    * in the global namespace, identifiers that begin with an underscore 
    * identifiers that contain a double underscore or begin with an underscore followed by an uppercase letter, except the following identifiers: 



    

    

  * [predefined macros](../preprocessor/replace.html#Predefined_macros "cpp/preprocessor/replace") (including [language feature test macros](../experimental/feature_test.html#Language_features "cpp/feature test"))(since C++20)



    

    

  * [std::_Exit](../utility/program/_Exit.html "cpp/utility/program/ Exit")
  * [__func__](function.html#func "cpp/language/function")


| (since C++11)  
---|---  
  
    

    

  * the following macros defined in the standard library: 



    

  * the C-style I/O library macros [_IOFBF](../io/c.html), [_IOLBF](../io/c.html) and [_IONBF](../io/c.html)



    

    

    

  * the C compatibility macros __alignas_is_defined and __alignof_is_defined (defined in [`<stdalign.h>`](../header/cstdalign.html "cpp/header/cstdalign")) 
  * the C compatibility macro __bool_true_false_are_defined (defined in [`<stdbool.h>`](../header/cstdbool.html "cpp/header/cstdbool")) 


| (since C++11)  
---|---  
  
    

    

    

  * [library feature test macros](../experimental/feature_test.html#Library_features "cpp/feature test")


| (since C++20)  
  
“Reserved” here means that the standard library headers #define or declare such identifiers for their internal needs, the compiler may predefine non-standard identifiers of that kind, and that name mangling algorithm may assume that some of these identifiers are not in use. If the programmer uses such identifiers, the program is ill-formed, no diagnostic required. 

In addition, it is undefined behavior to #define or #undef certain names in a translation unit, see [reserved macro names](../preprocessor/replace.html "cpp/preprocessor/replace") for more details. 

#### Zombie identifiers

As of C++14, some identifiers are removed from the C++ standard library. They are listed in the [list of zombie names](../symbol_index/zombie_names.html "cpp/symbol index/zombie names"). 

However, these identifiers are still reserved for previous standardization in a certain context. Removed member function names may not be used as a name for function-like macros, and other removed member names may not be used as a name for object-like macros in portable code. 

### In expressions

An identifier that names a variable, a function, specialization of a [concept](constraints.html "cpp/language/constraints"),(since C++20) or an enumerator can be used as an [expression](expressions.html "cpp/language/expressions"). The result of an expression consisting of just the identifier is the entity named by the identifier. The [value category](value_category.html "cpp/language/value category") of the expression is _lvalue_ if the identifier names a function, a variable, a [template parameter object](template_parameters.html#Non-type_template_parameter "cpp/language/template parameters")(since C++20), or a data member, and _rvalue_(until C++11)_prvalue_(since C++11) otherwise (e.g. an [enumerator](enum.html "cpp/language/enum") is an rvalue(until C++11)a prvalue(since C++11) expression, a specialization of a concept is a bool prvalue(since C++20)). 

#### Type

The type of an identifier expression is the same as the type of the entity it names. 

The following exceptions exist: 

  * If the entity named by the (unqualified) identifier is a local entity, and would result in an intervening [lambda expression](lambda.html "cpp/language/lambda") capturing it by copy if it were named outside of an unevaluated operand in the declarative region in which the identifier appears, then the type of the expression is the type of a [class member access expression](operator_member_access.html "cpp/language/operator member access") naming the non-static data member that would be declared for such a capture in the closure object of the innermost such intervening lambda expression. 


    
    
    void f()
    {
        float x, &r = x;
     
        [=]
        {
            decltype(x) y1;        // y1 has type float
            decltype((x)) y2 = y1; // y2 has type float const& because this lambda
                                   // is not mutable and x is an lvalue
            decltype(r) r1 = y1;   // r1 has type float&
            decltype((r)) r2 = y2; // r2 has type float const&
        };
    }

| 

  * If the entity named is a [template parameter object](template_parameters.html#Template_parameter_object "cpp/language/template parameters") for a template parameter of type `T`, the type of the expression is const T. 

| (since C++20)  
---|---  
(since C++11)  
  
#### Unqualified identifiers

Besides suitably declared identifiers, the following can be used in expressions in the same role: 

  * an [overloaded operator](operators.html "cpp/language/operators") name in function notation, such as operator+ or [operator new](../memory/new/operator_new.html); 
  * a [user-defined conversion function](cast_operator.html "cpp/language/cast operator") name, such as operator bool; 



  * a [user-defined literal operator](user_literal.html "cpp/language/user literal") name, such as operator "" _km; 

| (since C++11)  
---|---  
  
  * a [template](templates.html "cpp/language/templates") name followed by its argument list, such as MyTemplate<int>; 
  * the character ~ followed by a class name, such as ~MyClass; 



  * the character ~ followed by a [decltype](decltype.html "cpp/language/decltype") specifier, such as ~decltype(str). 

| (since C++11)  
---|---  
  
  * the character ~ followed by a [pack indexing specifier](pack_indexing.html#Pack_indexing_specifier "cpp/language/pack indexing"), such as ~pack...[0]. 

| (since C++26)  
---|---  
  
Together with identifiers they are known as _unqualified identifier expressions_. 

#### Qualified identifiers

* allows
  * defining OR redeclaring a PREVIOUSLY declared
    * [namespace member](namespace.md#Namespaces) OR
    * [class member](classes.md)
    A _qualified identifier expression_ is an unqualified identifier expression prepended by a scope resolution operator ::, and optionally, a sequence of any of the following separated by scope resolution operators: 

      * a namespace name; 
      * a class name; 



  * an enumeration name; 
  * a [`decltype` specifier](decltype.html "cpp/language/decltype") denoting a class or enumeration type. 

| (since C++11)  
---|---  
  
  * a [pack indexing specifier](pack_indexing.html#Pack_indexing_specifier "cpp/language/pack indexing") denoting a class or enumeration type. 

| (since C++26)  
---|---  
  
For example, the expression [std::string::npos](../string/basic_string/npos.html) is an expression that names the static member npos in the class string in namespace std. The expression ::tolower names the function tolower in the global namespace. The expression ::[std::cout](../io/cout.html) names the global variable cout in namespace std, which is a top-level namespace. The expression boost::signals2::connection names the type connection declared in namespace signals2, which is declared in namespace boost. 

The keyword [`template`](../keyword/template.html "cpp/keyword/template") may appear in qualified identifiers as necessary to disambiguate [dependent template names](dependent_name.html "cpp/language/dependent name"). 

See [qualified lookup](qualified_lookup.html "cpp/language/qualified lookup") for the details of the name lookup for qualified identifiers. 

### Implicit member access transformation

If an identifier expression E denotes a non-static non-type member of some class `C` and all following conditions are satisfied, E is transformed into the class member access expression this->E: 

  * E is not the right operand of a [member access operator](operator_member_access.html#Built-in_member_access_operators "cpp/language/operator member access"). 
  * If E is a qualified identifier expression, E is not the un-parenthesized operand of an [address-of operator](operator_member_access.html#Built-in_address-of_operator "cpp/language/operator member access"). 
  * Any of the following conditions is satisfied: 



    

  * E is [potentially evaluated](expressions.html#Potentially-evaluated_expressions "cpp/language/expressions"). 
  * `C` is the innermost enclosing class at E. 
  * `C` is a base class of the innermost enclosing class at E. 



This transformation does not apply in the template definition context (see [dependent names](dependent_name.html "cpp/language/dependent name")). 
    
    
    struct X
    {
        int x;
    };
     
    struct B
    {
        int b;
    };
     
    struct D : B
    {
        X d;
     
        void func()
        {
            d;   // OK, will be transformed into this->d
            b;   // OK, will be transformed into this->b
            x;   // Error: this->x is ill-formed
     
            d.x; // OK, will be transformed into this->d.x
                 // instead of d.this->x or this->d.this->x
        }
    };

### Names

A _name_ is the use of one of the following to refer to an entity: 

  * an identifier 
  * an overloaded operator name in function notation (operator+, [operator new](../memory/new/operator_new.html)) 
  * a user-defined conversion function name (operator bool) 



  * a user-defined literal operator name (operator ""_km) 

| (since C++11)  
---|---  
  
  * a template name followed by its argument list (MyTemplate<int>) 



Every name is introduced into the program by a [declaration](declarations.html "cpp/language/declarations"). A name used in more than one translation unit may refer to the same or different entities, depending on [linkage](storage_duration.html#Linkage "cpp/language/storage duration"). 

When the compiler encounters an unknown name in a program, it associates it with the declaration that introduced the name by means of [name lookup](lookup.html "cpp/language/lookup"), except for the [dependent names](dependent_name.html "cpp/language/dependent name") in template declarations and definitions (for those names, the compiler determines whether they name a type, a template, or some other entity, which may require [explicit disambiguation](dependent_name.html "cpp/language/dependent name")). 

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 1440](https://cplusplus.github.io/CWG/issues/1440.html) | C++11  | decltype expressions preceding `::` could denote any type  | can only denote class  
or enumeration types   
[CWG 1963](https://cplusplus.github.io/CWG/issues/1963.html) | C++11  | implementation-defined characters other than digits, non-digits  
and universal character names could be used in an identifier  | prohibited   
[CWG 2521](https://cplusplus.github.io/CWG/issues/2521.html) | C++11  | the identifier in user-defined-string-literal of  
a literal operator was reserved as usual  | the rules are different   
[CWG 2771](https://cplusplus.github.io/CWG/issues/2771.html) | C++98  | &a was not transformed into &this->a in class contexts  | it is transformed   
[CWG 2777](https://cplusplus.github.io/CWG/issues/2777.html) | C++20  | the type of an identifier expression was unclear  
if it names a template parameter object  | made clear   
[CWG 2818](https://cplusplus.github.io/CWG/issues/2818.html) | C++98  | predefined macro names are reserved  | they are not reserved   
  
### See also

[C documentation](../../c/language/identifiers.html "c/language/identifier") for Identifiers  
---
