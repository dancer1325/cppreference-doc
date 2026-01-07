* _Declarations_
  * allows
    * introduce (OR re-introduce) names | C++ program
      * re-introduce == defined ELSEWHERE
  * ❌if name ALREADY exist -> NOT MUST to declare again❌
    * == throw an error
  * depends -- on the -- entity
  * 👀ALLOWED ones👀
    * [Function definition](function.md#function-declaration)
    * [Template declaration](templates.md)
      * ALSO [Partial template specialization](partial_specialization.md)
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
        * [simple declaration](#simple-declaration)

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

* := statement / about identifiers (NORMALLY variables) 
  * introduces,
  * creates,
  * initializes
    * OPTIONALLY

* 👀ALLOWED syntax👀
  * `decl-specifier-seq init-declarator-list`
    * `init-declarator-list`
      * OPTIONAL
  * `attr decl-specifier-seq init-declarator-list`
    * requirements
      * C++11  

* `decl-specifier-seq`
  * == sequence of [specifiers](#Specifiers)
* `init-declarator-list`
  * == comma-separated list of `init-declarator`
* `attr`
  * == sequence of [attributes](attributes.md)  
  
* `init-declarator-list`
  * requirements to be omitted
    * | declare a
      * named class
      * named enumeration 

* _Examples:_
  * [structured binding declaration](structured_binding.md)
    * requirements
      * C++17
  
* `init-declarator` syntax
  * `declarator initializer`
    * [`declarator`](#declarators)
    * [`initializer`](initialization.md)
  * `declarator requires-clause contract-specs`
    * `requires-clause`
      * OPTIONAL
      * | C++20
      * [here](constraints.md#requires-clauses) 
    * `contract-specs`
      * == list of [function contract specifiers](function.md#function-contract-specifiers)
      * OPTIONAL
      * | C++26

requires-clause can only appear if declarator declares a [templated function](templates.html#Templated_entity "cpp/language/templates").  | (since C++20)  
---|---  
contract-specs can only appear if declarator declares a function or function template.  | (since C++26)  
  
### Specifiers

* **Declaration specifiers** (`decl-specifier-seq`)
  * == 💡sequence of the following (⚠️in any order⚠️) whitespace-separated specifiers💡
    * [`typedef`](typedef.md) specifier
    * function specifiers ([`inline`](inline.md), [`virtual`](virtual.md), [`explicit`](explicit.md)
      * ONLY ALLOWED | [function declarations](function.md)
    * [`inline`](inline.md) specifier
      * requirements
        * C++17
      * ALSO ALLOWED | variable declarations
    * [`friend`](friend.md) specifier
      * ALLOWED | 
        * class declarations
        * function declarations 
    * [`constexpr`](constexpr.md) specifier
      * requirements
        * C++11
      * restrictions
        * | 1 `decl-specifier-seq`, ONLY can appear 1 of
          * `constexpr`
          * `consteval`
          * `constinit`
      * ONLY ALLOWED | 
        * variable definitions
        * function
        * function template declarations,
        * declaration of static data members of literal type
    * [`consteval`](consteval.md) specifier
      * requirements
        * C++20
      * restrictions
        * | 1 `decl-specifier-seq`, ONLY can appear 1 of
          * `constexpr`
          * `consteval`
          * `constinit`
      * ONLY ALLOWED |
        * function
        * function template declarations 
    * [`constinit`](constinit.md) specifier
      * requirements
        * C++20
      * restrictions
        * | 1 `decl-specifier-seq`, ONLY can appear 1 of
          * `constexpr`
          * `consteval`
          * `constinit`
      * ONLY ALLOWED |
        * declaration of a variable / static OR thread storage duration
    * [storage class specifier](storage_duration.md)
      * restrictions
        * ONLY ALLOWED 1!
          * EXCEPT TO: | C+11, 
            * `thread_local` & `extern`, OR
            * `thread_local` & `static`
      * ALLOWED ones
        * [`register`](../keyword/register.md)
          * C++17-
        * [`static`](../keywords/static.md)
        * [`thread_local`](../keyword/thread_local.md)
          * C++11+
        * [`extern`](../keyword/extern.md)
        * [`mutable`](../keyword/mutable.md)
  * **Type specifiers** (`type-specifier-seq`)

* **Type specifiers** (`type-specifier-seq`)
  * == 💡sequence of specifiers / make the base type💡
    * base type != final entity type
      * Reason:🧠base type is modified -- by the -- [declarator](#declarators)🧠
  * uses
    * by [type](incomplete_type.md#type-naming)
  * ALLOWED ones 
    * [class specifier](class.md)
    * [enum specifier](enum.md)
    * simple type specifier
      * are
        * [`char`](../keyword/char.md)
        * [`char8_t`](../keyword/char8_t.md)
          * | C++20
        * [`char16_t`](../keyword/char16_t.md), [`char32_t`](../keyword/char32_t.md)
          * | C++11
        * [`wchar_t`](../keyword/wchar_t.md)
        * [`bool`](../keyword/bool.md)
        * [`short`](../keyword/short.md)
        * [`int`](../keyword/int.md)
        * [`long`](../keyword/long.md)
        * [`signed`](../keyword/signed.md)
        * [`unsigned`](../keyword/unsigned.md)
        * [`float`](../keyword/float.md)
        * [`double`](../keyword/double.md)
        * [`void`](../keyword/void.md)
      * [`auto`](auto.md)
        * requirements
          * C++11
      * [decltype specifier](decltype.html "cpp/language/decltype")
        * requirements
          * C++11  
      * [pack indexing specifier](pack_indexing.html "cpp/language/pack indexing")
        * requirements
          * C++26  
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

### Declarators

* `init-declarator-list`
  * == `init-declarator` / SAME specifiers

* EACH declarator
  * introduces 1!
    * object, OR
    * reference, OR
    * function, OR
    * | typedef declarations, type alias, TODO:
    whose type is provided by decl-specifier-seq and optionally modified by operators such as & (reference to) or [] (array of) or () (function returning) in the declarator
* These operators can be applied recursively, as shown below. 

* `noptr-declarator`
  * ANY valid declarator
    * if it begins with `*`, `&,` or `&&` -> it has to be surrounded by `()` 

* ALLOWED ones
#### (1)
* `unqualified-id attr`
  * `attr`
    * OPTIONAL
* [name](name.md) / it's declared

#### (2)
* `qualified-id attr`
  * `attr`
    * OPTIONAL
  * `qualified-id`
    * [qualified identifier](name.md#qualified-identifiers)

#### (3)
* `... identifier attr` 
  * requirements
    * C++11
  * `attr`
    * OPTIONAL
* [Parameter pack](parameter_pack.md)

#### (4)
* `* attr cv declarator`
  * `attr`
    * OPTIONAL
  * `cv`
    * OPTIONAL
* [pointer declarator](pointer.md)

#### (5)
* `nested-name-specifier* attr cv declarator`
  * `attr`
    * OPTIONAL
  * `cv`
    * OPTIONAL 
* [Pointer -- to -- member declaration](pointer.md)
* `nested-name-specifier`
  * == [sequence of names & `::`](name.md#qualified-identifiers)

#### (6)
* `& attr declarator`
  * `attr`
    * OPTIONAL
* [Lvalue reference declarator](reference.md)

#### (7)
* `&& attr declarator`
  * requirements
    * C++11
  * `attr`
    * OPTIONAL
* [Rvalue reference declarator](reference.md)

#### (8)
* `noptr-declarator [ constant-expression] attr`
  * `attr`
    * OPTIONAL
  * `constant-expression`
    * OPTIONAL
* [Array declarator](array.md)

#### (9)
* `noptr-declarator (parameter-list) cv ref except attr`
  * `attr`
    * OPTIONAL
  * `cv`
    * OPTIONAL
  * `ref`
    * OPTIONAL
  * `except`
    * OPTIONAL
* [Function declarator](function.md)
* | C++11,
  * it may (== OPTIONAL) end with the optional trailing return type

#### (10)
* `(declarator)`   
* Parenthesized declarator

In all cases, attr is an optional sequence of [attributes](attributes.html "cpp/language/attributes")
When appearing immediately after the identifier, it applies to the object being declared.  | (since C++11)  
---|---  
  
cv is a sequence of [const and volatile](cv.html "cpp/language/cv") qualifiers, where either qualifier may appear at most once in the sequence. 

| This section is incomplete  
Reason: explain declaration name hiding rules; how a variable/function declaration hides a class (but not a typedef) with the same name   
---|---  
  
### Notes

When a block-declaration appears [inside a block](statements.html#Compound_statements "cpp/language/statements"), and an identifier introduced by a declaration was previously declared in an outer block, the [outer declaration is hidden](scope.html "cpp/language/scope") for the remainder of the block. 

If a declaration introduces a variable with automatic storage duration, it is initialized when its declaration statement is executed. All automatic variables declared in a block are destroyed on exit from the block (regardless how the block is exited: via [exception](exceptions.html "cpp/language/exceptions"), [goto](goto.html "cpp/language/goto"), or by reaching its end), in order opposite to their order of initialization. 

### Parsing

* ways
  * -- based on the -- language grammar
  * [the spiral rule](https://c-faq.com/decl/spiral.anderson.html)
  * reading [inside-out](https://stackoverflow.com/a/34560439/273767) & [declaration mirrors use](https://stackoverflow.com/a/34552915/273767)
  * [automated parser](https://cdecl.org)

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

