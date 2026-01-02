* _Declarations_
  * allows
    * introduce (OR re-introduce) names | C++ program
  * ❌NOT need to declare something❌ 
  * depends -- on the -- entity
  * 👀ALLOWED ones👀
    * [Function definition](function.html#Function_definition "cpp/language/function")
    * [Template declaration](templates.html "cpp/language/templates") (including [Partial template specialization](partial_specialization.html "cpp/language/partial specialization"))
    * [Explicit template instantiation](class_template.html#Explicit_instantiation "cpp/language/class template")
    * [Explicit template specialization](template_specialization.html "cpp/language/template specialization")
    * [Namespace definition](namespace.html "cpp/language/namespace")
    * [Linkage specification](language_linkage.html "cpp/language/language linkage")
    * [Attribute declaration](attributes.md) -- `attr ;` --
      * requirements
        * C++11
    * Empty declaration -- `;` --
    * function declaration / WITHOUT `decl-specifier-seq`

      ```c++
      attr declarator;
      ```
      * `attr`
        * == sequence of [attributes](attributes.md)
        * OPTIONAL
        * requirements
          * C++11   
      * `declarator`
        * == function declarator
        * ALLOWED ones
          * constructor,
          * destructor, OR
          * user-defined type [conversion function](cast_operator.md)
        * uses
          * part of a 
            * [template declaration](templates.md),
            * [explicit specialization](template_specialization.md), OR
            * explicit instantiation
    * block-declaration
      * == declaration / can appear | [block](statements.md)
      * ALLOWED ones
        * [asm declaration](asm.md)
        * [type alias declaration](type_alias.md)
          * requirements
              * C++11
        * [namespace alias definition](namespace_alias.md)
        * [using-declaration](using_declaration.md)
        * [using directive](namespace.md#using-directives)
        * [using-enum-declaration](enum.md#Using-enum-declaration)
          * requirements
              * C++20
        * [`static_assert`](static_assert.md)
          * requirements
              * C++11
        * [opaque enum declaration](enum.md)
          * requirements
              * C++11
        * simple declaration

* [Definitions](definition.md)
  * == declarations / you can use it directly -- by the -- name 

## Contents

  * [1 Simple declaration](declarations.html#Simple_declaration)
  * [2 Specifiers](declarations.html#Specifiers)
  * [3 Declarators](declarations.html#Declarators)
  * [4 Notes](declarations.html#Notes)
  * [5 Example](declarations.html#Example)
  * [6 Defect reports](declarations.html#Defect_reports)
  * [7 See also](declarations.html#See_also)

### Simple declaration

A simple declaration is a statement that introduces, creates, and optionally initializes one or several identifiers, typically variables.   
  
---  
decl-specifier-seq init-declarator-list ﻿(optional) `**;**` |  (1)  |   
attr decl-specifier-seq init-declarator-list `**;**` |  (2)  |  (since C++11)  
decl-specifier-seq |  \-  |  sequence of [specifiers](declarations.html#Specifiers)  
---|---|---  
init-declarator-list |  \-  |  comma-separated list of init-declarator ﻿s (see below)   
attr |  \-  |  sequence of any number of [attributes](attributes.html "cpp/language/attributes")  
  
  
init-declarator-list can only be omitted when declaring a named class or a named enumeration. 

A [structured binding declaration](structured_binding.html "cpp/language/structured binding") is also a simple declaration.  | (since C++17)  
---|---  
  
  
The syntax of init-declarator is defined as follows:   
  
---  
declarator initializer |  (1)  |   
declarator requires-clause ﻿(optional) contract-specs ﻿(optional) |  (2)  |   
  
1) A declarator with an initializer.

2) A declarator without an initializer.

declarator |  \-  |  a [declarator](declarations.html#Declarator)  
---|---|---  
initializer |  \-  |  an [initializer](initialization.html "cpp/language/initialization")  
requires-clause |  \-  |  (since C++20) a [requires clause](constraints.html#Requires_clauses "cpp/language/constraints")  
contract-specs |  \-  |  (since C++26) a list of [function contract specifiers](function.html#Function_contract_specifiers "cpp/language/function")  
  
  


requires-clause can only appear if declarator declares a [templated function](templates.html#Templated_entity "cpp/language/templates").  | (since C++20)  
---|---  
contract-specs can only appear if declarator declares a function or function template.  | (since C++26)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/language/declarations&action=edit&section=2 "Edit section: Specifiers")] Specifiers

**Declaration specifiers** (decl-specifier-seq) is a sequence of the following whitespace-separated specifiers, in any order: 

  * the [`typedef`](typedef.html "cpp/language/typedef") specifier. If present, the entire declaration is a [typedef declaration](typedef.html "cpp/language/typedef") and each declarator introduces a new type name, not an object or a function. 
  * function specifiers ([`inline`](inline.html "cpp/language/inline"), [`virtual`](virtual.html "cpp/language/virtual"), [`explicit`](explicit.html "cpp/language/explicit")), only allowed in [function declarations](function.html "cpp/language/function"). 



  * the [`inline`](inline.html "cpp/language/inline") specifier is also allowed on variable declarations. 

| (since C++17)  
---|---  
  
  * the [`friend`](friend.html "cpp/language/friend") specifier, allowed in class and function declarations. 



  * the [`constexpr`](constexpr.html "cpp/language/constexpr") specifier, only allowed in variable definitions, function and function template declarations, and the declaration of static data members of literal type. 

| (since C++11)  
---|---  
  
  * the [`consteval`](consteval.html "cpp/language/consteval") specifier, only allowed in function and function template declarations. 
  * the [`constinit`](constinit.html "cpp/language/constinit") specifier, only allowed in declaration of a variable with static or thread storage duration. At most one of the constexpr, consteval, and constinit specifiers is allowed to appear in a decl-specifier-seq. 

| (since C++20)  
  
  * [storage class specifier](storage_duration.html "cpp/language/storage duration") ([`register`](../keyword/register.html "cpp/keyword/register"), (until C++17) [`static`](../keywords/static.html "cpp/keyword/static"), [`thread_local`](../keyword/thread_local.html "cpp/keyword/thread local"), (since C++11) [`extern`](../keyword/extern.html "cpp/keyword/extern"), [`mutable`](../keyword/mutable.html "cpp/keyword/mutable")). Only one storage class specifier is allowed, except that thread_local may appear together with extern or static(since C++11). 
  * **Type specifiers** (type-specifier-seq), a sequence of specifiers that names a type. The type of every entity introduced by the declaration is this type, optionally modified by the declarator (see below). This sequence of specifiers is also used by [type-id](type-id.html#Type_naming "cpp/language/type"). Only the following specifiers are part of type-specifier-seq, in any order: 



    

  * [class specifier](class.html "cpp/language/class")
  * [enum specifier](enum.html "cpp/language/enum")
  * simple type specifier 



    

  * [`char`](../keyword/char.html "cpp/keyword/char"), [`char8_t`](../keyword/char8_t.html "cpp/keyword/char8 t"), (since C++20) [`char16_t`](../keyword/char16_t.html "cpp/keyword/char16 t"), [`char32_t`](../keyword/char32_t.html "cpp/keyword/char32 t"), (since C++11) [`wchar_t`](../keyword/wchar_t.html "cpp/keyword/wchar t"), [`bool`](../keyword/bool.html "cpp/keyword/bool"), [`short`](../keyword/short.html "cpp/keyword/short"), [`int`](../keyword/int.html "cpp/keyword/int"), [`long`](../keyword/long.html "cpp/keyword/long"), [`signed`](../keyword/signed.html "cpp/keyword/signed"), [`unsigned`](../keyword/unsigned.html "cpp/keyword/unsigned"), [`float`](../keyword/float.html "cpp/keyword/float"), [`double`](../keyword/double.html "cpp/keyword/double"), [`void`](../keyword/void.html "cpp/keyword/void")



    

    

  * [`auto`](auto.html "cpp/language/auto")
  * [decltype specifier](decltype.html "cpp/language/decltype")


| (since C++11)  
---|---  
  
    

    

  * [pack indexing specifier](pack_indexing.html "cpp/language/pack indexing")


| (since C++26)  
  
    

    

  * previously declared class name (optionally [qualified](name.html#Qualified_identifiers "cpp/language/identifiers")) 
  * previously declared enum name (optionally [qualified](name.html#Qualified_identifiers "cpp/language/identifiers")) 
  * previously declared [typedef-name](typedef.html "cpp/language/typedef") or [type alias](type_alias.html "cpp/language/type alias")(since C++11) (optionally [qualified](name.html#Qualified_identifiers "cpp/language/identifiers")) 
  * template name with template arguments (optionally [qualified](name.html#Qualified_identifiers "cpp/language/identifiers"), optionally using [template disambiguator](dependent_name.html "cpp/language/dependent name")) 



    

    

  * template name without template arguments (optionally [qualified](name.html#Qualified_identifiers "cpp/language/identifiers")): see [class template argument deduction](ctad.html "cpp/language/class template argument deduction")


| (since C++17)  
---|---  
  
    

  * [elaborated type specifier](elaborated_type_specifier.html "cpp/language/elaborated type specifier")



    

  * the keyword [`class`](../keyword/class.html "cpp/keyword/class"), [`struct`](../keyword/struct.html "cpp/keyword/struct"), or [`union`](../keyword/union.html "cpp/keyword/union"), followed by the identifier (optionally [qualified](name.html#Qualified_identifiers "cpp/language/identifiers")), previously defined as the name of a class. 
  * the keyword [`class`](../keyword/class.html "cpp/keyword/class"), [`struct`](../keyword/struct.html "cpp/keyword/struct"), or [`union`](../keyword/union.html "cpp/keyword/union"), followed by template name with template arguments (optionally [qualified](name.html#Qualified_identifiers "cpp/language/identifiers"), optionally using [template disambiguator](dependent_name.html "cpp/language/dependent name")), previously defined as the name of a class template. 
  * the keyword [`enum`](../keyword/enum.html "cpp/keyword/enum") followed by the identifier (optionally [qualified](name.html#Qualified_identifiers "cpp/language/identifiers")), previously declared as the name of an enumeration. 



  * [typename specifier](dependent_name.html "cpp/language/dependent name")
  * [cv qualifier](cv.html "cpp/language/cv")


    only one type specifier is allowed in a decl-specifier-seq, with the following exceptions: 

  * const can be combined with any type specifier except itself. 
  * volatile can be combined with any type specifier except itself. 
  * signed or unsigned can be combined with char, long, short, or int. 
  * short or long can be combined with int. 
  * long can be combined with double. 



    

  * long can be combined with long. 


| (since C++11)  
---|---  
  
[Attributes](attributes.html "cpp/language/attributes") may appear in decl-specifier-seq, in which case they apply to the type determined by the preceding specifiers. 

Repetitions of any specifier in a decl-specifier-seq, such as const static const, or virtual inline virtual are errors, except that long is allowed to appear twice(since C++11). 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/language/declarations&action=edit&section=3 "Edit section: Declarators")] Declarators

Each init-declarator in an init-declarator-list S D1, D2, D3; is processed as if it were a standalone declaration with the same specifiers: S D1; S D2; S D3;. 

Each declarator introduces exactly one object, reference, function, or (for typedef declarations) type alias, whose type is provided by decl-specifier-seq and optionally modified by operators such as & (reference to) or [] (array of) or () (function returning) in the declarator. These operators can be applied recursively, as shown below. 

A declarator is one of the following:   
  
---  
unqualified-id attr ﻿(optional) |  (1)  |   
qualified-id attr ﻿(optional) |  (2)  |   
`**...**` identifier attr ﻿(optional) |  (3)  |  (since C++11)  
`*****` attr ﻿(optional) cv ﻿(optional) declarator |  (4)  |   
nested-name-specifier `*****` attr ﻿(optional) cv ﻿(optional) declarator |  (5)  |   
`**&**` attr ﻿(optional) declarator |  (6)  |   
`**& &**` attr ﻿(optional) declarator |  (7)  |  (since C++11)  
noptr-declarator `**[**` constant-expression ﻿(optional) `**]**` attr ﻿(optional) |  (8)  |   
noptr-declarator `**(**` parameter-list `**)**` cv ﻿(optional) ref ﻿ ﻿(optional) except ﻿(optional) attr ﻿(optional) |  (9)  |   
`**(**` declarator `**)**` |  (10)  |   
  
1) The [name](name.html "cpp/language/name") that is declared.

2) A declarator that uses a [qualified identifier](name.html#Qualified_identifiers "cpp/language/identifiers") (qualified-id) defines or redeclares a previously declared [namespace member](namespace.html#Namespaces "cpp/language/namespace") or [class member](classes.html "cpp/language/classes").

3) [Parameter pack](parameter_pack.html "cpp/language/parameter pack"), only appears in [parameter declarations](function.html#Parameter_list "cpp/language/function").

4) [Pointer declarator](pointer.html "cpp/language/pointer"): the declaration S * D; declares `D` as a pointer to the type determined by decl-specifier-seq `S`.

5) [Pointer to member declaration](pointer.html "cpp/language/pointer"): the declaration S C::* D; declares `D` as a pointer to member of `C` of type determined by decl-specifier-seq `S`. nested-name-specifier is a [sequence of names and scope resolution operators `**::**`](name.html#Qualified_identifiers "cpp/language/identifiers")

6) [Lvalue reference declarator](reference.html "cpp/language/reference"): the declaration S & D; declares `D` as an lvalue reference to the type determined by decl-specifier-seq `S`.

7) [Rvalue reference declarator](reference.html "cpp/language/reference"): the declaration S && D; declares `D` as an rvalue reference to the type determined by decl-specifier-seq `S`.

8) [Array declarator](array.html "cpp/language/array"). noptr-declarator any valid declarator, but if it begins with *, &, or &&, it has to be surrounded by parentheses.

9) [Function declarator](function.html "cpp/language/function"). noptr-declarator any valid declarator, but if it begins with *, &, or &&, it has to be surrounded by parentheses. It may end with the optional trailing return type.(since C++11)

10) Parenthesized declarator.

In all cases, attr is an optional sequence of [attributes](attributes.html "cpp/language/attributes"). When appearing immediately after the identifier, it applies to the object being declared.  | (since C++11)  
---|---  
  
cv is a sequence of [const and volatile](cv.html "cpp/language/cv") qualifiers, where either qualifier may appear at most once in the sequence. 

| This section is incomplete  
Reason: explain declaration name hiding rules; how a variable/function declaration hides a class (but not a typedef) with the same name   
---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/language/declarations&action=edit&section=4 "Edit section: Notes")] Notes

When a block-declaration appears [inside a block](statements.html#Compound_statements "cpp/language/statements"), and an identifier introduced by a declaration was previously declared in an outer block, the [outer declaration is hidden](scope.html "cpp/language/scope") for the remainder of the block. 

If a declaration introduces a variable with automatic storage duration, it is initialized when its declaration statement is executed. All automatic variables declared in a block are destroyed on exit from the block (regardless how the block is exited: via [exception](exceptions.html "cpp/language/exceptions"), [goto](goto.html "cpp/language/goto"), or by reaching its end), in order opposite to their order of initialization. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/language/declarations&action=edit&section=5 "Edit section: Example")] Example

Note: this example demonstrates how some complex declarations are parsed in terms of the language grammar. Other popular mnemonics are: [the spiral rule](https://c-faq.com/decl/spiral.anderson.html), reading [inside-out](https://stackoverflow.com/a/34560439/273767), and [declaration mirrors use](https://stackoverflow.com/a/34552915/273767). There is also an automated parser at <https://cdecl.org>.

Run this code
    
    
    #include <type_traits>
     
    struct S
    {
        int member;
        // decl-specifier-seq is "int"
        // declarator is "member"
    } obj, *pObj(&obj);
    // decl-specifier-seq is "struct S { int member; }"
    // declarator "obj" declares an object of type S
    // declarator "*pObj" declares a pointer to S,
    //     and initializer "(&obj)" initializes it
     
    int i = 1, *p = nullptr, f(), (*pf)(double);
    // decl-specifier-seq is "int"
    // declarator "i" declares a variable of type int,
    //     and initializer "= 1" initializes it
    // declarator "*p" declares a variable of type int*,
    //     and initializer "= nullptr" initializes it
    // declarator "f()" declares (but doesn't define)
    //     a function taking no arguments and returning int
    // declarator "(*pf)(double)" declares a pointer to function
    //     taking double and returning int
     
    int (*(*var1)(double))[3] = nullptr;
    // decl-specifier-seq is "int"
    // declarator is "(*(*var1)(double))[3]"
    // initializer is "= nullptr"
     
    // 1. declarator "(*(*var1)(double))[3]" is an array declarator:
    //    Type declared is: "(*(*var1)(double))" array of 3 elements
    // 2. declarator "(*(*var1)(double))" is a pointer declarator:
    //    Type declared is: "(*var1)(double)" pointer to array of 3 elements
    // 3. declarator "(*var1)(double)" is a function declarator:
    //    Type declared is: "(*var1)" function taking "(double)",
    //    returning pointer to array of 3 elements.
    // 4. declarator "(*var1)" is a pointer declarator:
    //    Type declared is: "var1" pointer to function taking "(double)",
    //    returning pointer to array of 3 elements.
    // 5. declarator "var1" is an identifier.
    // This declaration declares the object var1 of type "pointer to function
    // taking double and returning pointer to array of 3 elements of type int"
    // The initializer "= nullptr" provides the initial value of this pointer.
     
    // C++11 alternative syntax:
    auto (*var2)(double) -> int (*)[3] = nullptr;
    // decl-specifier-seq is "auto"
    // declarator is "(*var2)(double) -> int (*)[3]"
    // initializer is "= nullptr"
     
    // 1. declarator "(*var2)(double) -> int (*)[3]" is a function declarator:
    //    Type declared is: "(*var2)" function taking "(double)", returning "int (*)[3]"
    // ...
     
    int main()
    {
        static_assert([std::is_same_v](../types/is_same.html)<decltype(var1), decltype(var2)>);
    }

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 482](https://cplusplus.github.io/CWG/issues/482.html) | C++98  | the declarators of redeclarations could not be qualified  | qualified declarators allowed   
[CWG 569](https://cplusplus.github.io/CWG/issues/569.html) | C++98  | a single standalone semicolon was not a valid declaration  | it is an empty declaration,  
which has no effect   
[CWG 1830](https://cplusplus.github.io/CWG/issues/1830.html) | C++98  | repetition of a function specifier in a decl-specifier-seq was allowed  | repetition is forbidden   
  
### See also

[C declarations](../../c/language/declarations.md)  

