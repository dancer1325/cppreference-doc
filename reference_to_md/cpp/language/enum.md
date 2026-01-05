* _enumeration_
  * == type /
    * 's values
      * are restricted -- to a -- range of values
      * may include "enumerators"
      * of the _underlying type_ of the enumeration
    * 's [size](sizeof.md) == _underlying type_'s size
    * 's [value representation](objects.md#object-representation-and-value-representation) == _underlying type_'s value representation 
    * 's [alignment requirements](objects.md#alignment) == _underlying type_'s alignment requirements
  * types 
    * [_unscoped enumeration_](#unscoped-enumerations-) 
    * _scoped enumeration_ (declared with the enum-key `**enum class**` or `**enum struct**`).

* "enumerators"
  * := explicitly named constants
    * ⚠️INDEPENDENTLY to have the specified value⚠️

* _underlying type_ of the enumeration
  * == [integral type](type-id.md)

## syntax

* `enum-key`
  * ==
    * | C++11-
      * `enum`
    * | C++11,
      * `enum` OR `enum class` OR `enum struct`
* `attr`
  * requirements
    * C++11
  * == sequence of [attributes](attributes.md)
* `enum-head-name`
  * == enumeration name
  * | C++11-,
  * | C++11,
    * ⚠️can be preceded -- by -- `nested-name-specifier`⚠️
      * | unscoped non-opaque enumeration declarations,
        * it can be omitted
      * if the enumeration name is present & this declaration is a redeclaration -> may ONLY appear
      * | opaque enumeration declarations,
        * may ONLY appear BEFORE the name of the enumeration | [explicit specialization declarations](template_specialization.md)
      * if it's present ->
        * the _enum-specifier_ can
          * NOT refer -- to an -- enumeration / merely inherited OR introduced -- by a -- [using declaration](using_declaration.md)
          * ONLY appear | namespace / enclose the previous declaration
        * `nested-name-specifier` can NOT begin with a [`decltype`](decltype.md) specifier
* `enum-base`
  * | C++11,
    * `: type-specifier-seq`
    *  that will serve as the fixed underlying type for this enumeration type
* `type-specifier-seq`
  * == integral type (if it is cv-qualified, qualifications are ignored)
* `enumerator-list`
  * == enumerator definitionS /
    * comma-separated
    * ALLOWED each ones
      * unique identifier /
        * becomes the name of the enumerator, OR
        * == `constant-expression` -- through -- `=`
  * | C++17,
    * identifier can be directly followed by an optional [attribute specifier sequence](attributes.html "cpp/language/attributes").(since
* `nested-name-specifier`
  * == sequence of names & [`::`](punctuators.md) / MUST end with `::`

### (1)

```c++
  enum-key attr enum-head-name enum-base
  { enumerator-list }
```
* `attr`
  * OPTIONAL
* `enum-head-name`
  * OPTIONAL
* `enum-base`
  * OPTIONAL  
* `enumerator-list`
  * OPTIONAL   

* `enum-specifier`
  * appears | [declaration's `decl-specifier-seq`](declarations.md)
  * == enumeration type + its enumerators

### (2)

```c++
  enum-key attr enum-head-name enum-base
  { enumerator-list, }
```
* `attr`
  * OPTIONAL
* `enum-head-name`
  * OPTIONAL
* `enum-base`
  * OPTIONAL
* `enumerator-list,`
  * `,`
    * OPTIONAL

### (3)

```c++
  enum-key attr enum-head-name enum-base;
```
* requirements
  * C++11)
* `attr`
  * OPTIONAL
* `enum-base`
  * OPTIONAL
* `enumerator-list`
  * OPTIONAL
* Opaque enum declaration
  * Reason:🧠NOT define its enumerators🧠
  * BUT it's a complete type
    * == define enumeration type & size

## Unscoped enumerations  

* [`enum-key`](#syntax) 
  * ONLY ALLOWED `enum`
* `enumerator`
  * visible | enclosing scope
  * uses
    * constants are required
  * EACH one is associated -- with a -- underlying type's value
* if name is omitted -> declaration ONLY introduces the enumerators | enclosing scope
* if the unscoped enumeration is a class member -> its enumerators may be -- , via class member access operators (`.` & `- >`), -- accessed

### syntax
#### (1)
* `enum name { enumerator = constant-expression , enumerator = constant-expression , ... }`
  * `name`
    * OPTIONAL
* underlying type
  * NOT specified 
  * implementation-defined integral type / can represent ALL enumerator values
    * if NO integral type can represent ALL enumerator values -> the enumeration is ill-formed
  * ⚠️by default,⚠️
    * `int`
      * if there is SOME enumerator / can NOT fit | `int` OR `unsigned int` -> higher numerical value (_Example:_ `long`, `unsigned long`, ...)
      * if the 
        * first enumerator does NOT have `=` -> 's value == 0
        * rest of enumerators do NOT have `=` -> 's value == previous enumerator's value + 1
* if the `enumerator-list` is empty -> enumeration has 1! enumerator / value 0

#### (2)
* `enum name : type { enumerator = constant-expression , enumerator = constant-expression , ... }`
  * `name`
    * OPTIONAL
  * `type`
    * -> fixed type
  * requirements
    * C++11  

#### (3)
* `enum name : type ;`
  * requirements
    * C++11  
  * == enum declaration
    * opaque
    * unscoped
    
    


In the [declaration specifiers](declarations.html#Specifiers "cpp/language/declarations") of a [member declaration](class.html#Member_specification "cpp/language/class"), the sequence 

    `**enum**` enum-head-name `**:**`
is always parsed as a part of enumeration declaration: 
    
    
    struct S
    {
        enum E1 : int {};
        enum E1 : int {}; // error: redeclaration of enumeration,
                          // NOT parsed as a zero-length bit-field of type enum E1
    };
     
    enum E2 { e1 };
     
    void f()
    {
        false ? new enum E2 : int(); // OK: 'int' is NOT parsed as the underlying type
    }

| (since C++11)  
---|---  
  
#### Enumeration name for linkage purposes

An unnamed enumeration that does not have a [typedef name for linkage purposes](typedef.html#typedef_name_for_linkage_purposes "cpp/language/typedef") &
that has an enumerator is denoted, for [linkage purposes](storage_duration.html "cpp/language/storage duration"), 
by its underlying type and its first enumerator; such an enumeration is said to have an enumerator as a _name for linkage purposes_. 

## Scoped enumerations

---  
`**enum struct|class**` name `**{**` enumerator `**=**` constant-expression `**,**` enumerator `**=**` constant-expression `**,**` ... `**}**` |  (1)  |   
`**enum struct|class**` name `**:**` type `**{**` enumerator `**=**` constant-expression `**,**` enumerator `**=**` constant-expression `**,**` ... `**}**` |  (2)  |   
`**enum struct|class**` name `**;**` |  (3)  |   
`**enum struct|class**` name `**:**` type `**;**` |  (4)  |   
  
1) declares a scoped enumeration type whose underlying type is int (the keywords class and struct are exactly equivalent)

2) declares a scoped enumeration type whose underlying type is type

3) opaque enum declaration for a scoped enumeration whose underlying type is int

4) opaque enum declaration for a scoped enumeration whose underlying type is type

Each enumerator becomes a named constant of the enumeration's type (that is, name), which is contained within the scope of the enumeration, and can be accessed using scope resolution operator. There are no implicit conversions from the values of a scoped enumerator to integral types, although [`static_cast`](static_cast.html "cpp/language/static cast") may be used to obtain the numeric value of the enumerator. 

Run this code
    
    
    #include <iostream>
     
    int main()
    {
        enum class Color { red, green = 20, blue };
        Color r = Color::blue;
     
        switch(r)
        {
            case Color::red  : [std::cout](../io/cout.html) << "red\n";   break;
            case Color::green: [std::cout](../io/cout.html) << "green\n"; break;
            case Color::blue : [std::cout](../io/cout.html) << "blue\n";  break;
        }
     
        // int n = r; // error: no implicit conversion from scoped enum to int
        int n = static_cast<int>(r); // OK, n = 21
        [std::cout](../io/cout.html) << n << '\n'; // prints 21
    }

(since C++11)  
  
An enumeration can be initialized from an integer without a cast, using [list initialization](list_initialization.html "cpp/language/list initialization"), if all of the following are true: 

  * The initialization is direct-list-initialization. 
  * The initializer list has only a single element. 
  * The enumeration is either scoped or unscoped with underlying type fixed. 
  * The conversion is non-narrowing. 

This makes it possible to introduce new integer types (e.g. `SafeInt`) that enjoy the same existing calling conventions as their underlying integer types, even on ABIs that penalize passing/returning structures by value. 
    
    
    enum byte : unsigned char {}; // byte is a new integer type; see also std::byte (C++17)
    byte b{42};        // OK as of C++17 (direct-list-initialization)
    byte c = {42};     // error
    byte d = byte{42}; // OK as of C++17; same value as b
    byte e{-1};        // error
     
    struct A { byte b; };
    A a1 = {{42}};     // error (copy-list-initialization of a constructor parameter)
    A a2 = {byte{42}}; // OK as of C++17
     
    void f(byte);
    f({42}); // error (copy-list-initialization of a function parameter)
     
    enum class Handle : [std::uint32_t](../types/integer.html) { Invalid = 0 };
    Handle h{42}; // OK as of C++17

| (since C++17)  
---|---  
  
  


##  using enum declaration

---  
`**using enum**` using-enum-declarator `**;**` |  |  (since C++20)  
declarator |  \-  |  a (possibly qualified) [identifier](name.html "cpp/language/identifiers") or [simple template identifiers](templates.html#Template_identifiers "cpp/language/templates")  
---|---|---  
  
  
declarator must name a non-[dependent](dependent_name.html#Dependent_types "cpp/language/dependent name") enumeration type. The enumeration declarations are found by type-only ordinary [qualified](qualified_lookup.html "cpp/language/qualified lookup") or [unqualified](unqualified_lookup.html "cpp/language/unqualified lookup") lookup, depending on whether declarator is qualified. 
    
    
    enum E { x };
     
    void f()
    {
        int E;
        using enum E; // OK
    }
     
    using F = E;
    using enum F; // OK
     
    template<class T>
    using EE = T;
     
    void g()
    {
        using enum EE<E>; // OK
    }

A using enum declaration introduces the enumerator names of the named enumeration as if by a [using declaration](using_declaration.html "cpp/language/using declaration") for each enumerator. When in class scope, a using enum declaration adds the enumerators of the named enumeration as members to the scope, making them accessible for member lookup. 
    
    
    enum class fruit { orange, apple };
     
    struct S
    {
        using enum fruit; // OK: introduces orange and apple into S
    };
     
    void f()
    {
        S s;
        s.orange;  // OK: names fruit::orange
        S::orange; // OK: names fruit::orange
    }

Two using enum declarations that introduce two enumerators of the same name conflict. 
    
    
    enum class fruit { orange, apple };
    enum class color { red, orange };
     
    void f()
    {
        using enum fruit;    // OK
        // using enum color; // error: color::orange and fruit::orange conflict
    }

(since C++20)  
  
## Notes

Values of unscoped enumeration type can be [promoted](implicit_cast.html#Promotion_from_enumeration_types "cpp/language/implicit conversion") or [converted](implicit_cast.html#Integral_conversions "cpp/language/implicit conversion") to integral types: 
    
    
    enum color { red, yellow, green = 20, blue };
    color col = red;
    int n = blue; // n == 21

Values of integer, floating-point, and enumeration types can be converted to any enumeration type by using [`static_cast`](static_cast.html "cpp/language/static cast"). Note that the value after such conversion may not necessarily equal any of the named enumerators defined for the enumeration: 
    
    
    enum access_t { read = 1, write = 2, exec = 4 }; // enumerators: 1, 2, 4 range: 0..7
    access_t rwe = static_cast<access_t>(7);
    [assert](../error/assert.html)((rwe & read) && (rwe & write) && (rwe & exec));
     
    access_t x = static_cast<access_t>(8.0); // undefined behavior since CWG 1766
    access_t y = static_cast<access_t>(8);   // undefined behavior since CWG 1766
     
    enum foo { a = 0, b = [UINT_MAX](../types/climits.html) }; // range: [0, UINT_MAX]
    foo x = foo(-1); // undefined behavior since CWG 1766,
                     // even if foo's underlying type is unsigned int

Feature-test macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_enumerator_attributes`](../experimental/feature_test.html#cpp_enumerator_attributes "cpp/feature test") | [`201411L`](../compiler_support/17.html#cpp_enumerator_attributes_201411L "cpp/compiler support/17") | (C++17) | [Attributes](attributes.html "cpp/language/attributes") for enumerators   
[`__cpp_using_enum`](../experimental/feature_test.html#cpp_using_enum "cpp/feature test") | [`201907L`](../compiler_support/20.html#cpp_using_enum_201907L "cpp/compiler support/20") | (C++20) | [`using enum`](enum.html#Using-enum-declaration)  
  
## Keywords

[`enum`](../keyword/enum.html "cpp/keyword/enum"), [`struct`](../keyword/struct.html "cpp/keyword/struct"), [`class`](../keyword/class.html "cpp/keyword/class"), [`using`](../keyword/using.html "cpp/keyword/using")

## Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 377](https://cplusplus.github.io/CWG/issues/377.html) | C++98  | the behavior was unspecified when no integral  
type can represent all the enumerator values  | the enumeration is ill-  
formed in this case   
[CWG 518](https://cplusplus.github.io/CWG/issues/518.html) | C++98  | a trailing comma was not allowed after the enumerator list  | allowed   
[CWG 1514](https://cplusplus.github.io/CWG/issues/1514.html) | C++11  | a redefinition of enumeration with fixed underlying type  
could be parsed as a bit-field in a class member declaration  | always parsed as a redefinition   
[CWG 1638](https://cplusplus.github.io/CWG/issues/1638.html) | C++11  | grammar of opaque enumeration declaration  
prohibited use for template specializations  | nested-name-specifier  
permitted   
[CWG 1766](https://cplusplus.github.io/CWG/issues/1766.html) | C++98  | casting an out-of-range value to an enumeration  
without fixed underlying type had an unspecified result  | the behavior is undefined   
[CWG 1966](https://cplusplus.github.io/CWG/issues/1966.html) | C++11  | the resolution of [CWG issue 1514](https://cplusplus.github.io/CWG/issues/1514.html) made the `:`  
of a conditional expression part of enum-base | only apply the resolution to  
member declaration specifiers   
[CWG 2156](https://cplusplus.github.io/CWG/issues/2156.html) | C++11  | enum definitions could define  
enumeration types by using-declarations  | prohibited   
[CWG 2157](https://cplusplus.github.io/CWG/issues/2157.html) | C++11  | the resolution of [CWG issue 1966](https://cplusplus.github.io/CWG/issues/1966.html) did  
not cover qualified enumeration names  | covered   
[CWG 2530](https://cplusplus.github.io/CWG/issues/2530.html) | C++98  | an enumerator list could contain multiple  
enumerators with the same identifier  | prohibited   
[CWG 2590](https://cplusplus.github.io/CWG/issues/2590.html) | C++98  | the size, value representation and alignment requirements  
of an enumeration did not depend on its underlying type  | all of them are identical to  
those of the underlying type   
[CWG 2621](https://cplusplus.github.io/CWG/issues/2621.html) | C++20  | the enumeration name lookup used in  
using enum declarations was unclear  | made clear   
[CWG 2877](https://cplusplus.github.io/CWG/issues/2877.html) | C++20  | the enumeration name lookup used in  
using enum declarations was not type-only  | made type-only   
  
## References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 9.7.1 Enumeration declarations [dcl.enum



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 9.7.1 Enumeration declarations [dcl.enum



  * C++17 standard (ISO/IEC 14882:2017): 



    

  * 10.2 Enumeration declarations [dcl.enum



  * C++14 standard (ISO/IEC 14882:2014): 



    

  * 7.2 Enumeration declarations [dcl.enum



  * C++11 standard (ISO/IEC 14882:2011): 



    

  * 7.2 Enumeration declarations [dcl.enum



  * C++03 standard (ISO/IEC 14882:2003): 



    

  * 7.2 Enumeration declarations [dcl.enum



  * C++98 standard (ISO/IEC 14882:1998): 



    

  * 7.2 Enumeration declarations [dcl.enum



## See also

[ is_enum](../types/is_enum.html "cpp/types/is enum")(C++11) |  checks if a type is an enumeration type   
(class template)   
---|---  
[ is_scoped_enum](../types/is_scoped_enum.html "cpp/types/is scoped enum")(C++23) |  checks if a type is a scoped enumeration type   
(class template)   
[ underlying_type](../types/underlying_type.html "cpp/types/underlying type")(C++11) |  obtains the underlying integer type for a given enumeration type   
(class template)   
[ to_underlying](../utility/to_underlying.html "cpp/utility/to underlying")(C++23) |  converts an enumeration to its underlying type   
(function template)   
[C documentation](../../c/language/enum.html "c/language/enum") for Enumerations
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
