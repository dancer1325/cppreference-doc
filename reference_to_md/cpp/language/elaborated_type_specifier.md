* Elaborated type specifiers
  * uses
    * refer -- to a -- 
      * PREVIOUSLY-declared class name (class, struct, or union)
      * PREVIOUSLY-declared enum name
        * EVEN if the name was [hidden -- by a -- non-type declaration](lookup.md)
    * declare new class names 

## Contents

  * [1 Syntax](elaborated_type_specifier.html#Syntax)
  * [2 Explanation](elaborated_type_specifier.html#Explanation)
  * [3 Keywords](elaborated_type_specifier.html#Keywords)
  * [4 References](elaborated_type_specifier.html#References)

### Syntax  

* `class-key`
  * one of
    * [class](../keyword/class.md)
    * [struct](../keyword/struct.md)
    * [union](../keyword/union.md)

* `class-name`
  * one of
    * name of a previously-declared class type /
      * optionally [qualified](name.md#qualified-identifiers)
    * identifier / NOT previously declared -- as a -- type name
  * ALLOWED values
    * simple identifier
    * [qualified-id](name.md#qualified-identifiers)
  * is looked up , depending on their appearance, -- via --
    * [unqualified name lookup](unqualified_lookup.md) OR
    * [qualified name lookup](qualified_lookup.md) 
  * ❌NOT ALLOWED ❌
    * non-type names

* `enum-name`
  * name of a previously-declared enumeration type /
    * optionally [qualified](name.md#qualified-identifiers)
  * ALLOWED values
    * simple identifier
    * [qualified-id](name.md#qualified-identifiers)
  * is looked up , depending on their appearance, -- via --
    * [unqualified name lookup](unqualified_lookup.md) OR
    * [qualified name lookup](qualified_lookup.md)
  * ❌NOT ALLOWED ❌
    * non-type names

* `attr`
  * | C++11
  * any number of [attributes](attributes.md)

#### (1)

* `class-key class-name`       
  * elaborated type specifier -- for a -- class type    

#### (2)

* `enum enum-name`
  * elaborated type specifier -- for an -- enumeration type

#### (3)

* `class-key attr identifier`
  * `attr`
    * OPTIONAL
  * declaration / consists SOLELY of an elaborated type specifier -> ALWAYS declares a class type / named by identifier in the [scope](scope.md) / contains the declaration
  * vs [Opaque enum declaration](enum.md)
    * enum type / AFTER opaque enum declaration: complete type  
  * special case / named -- as -- [_forward declaration_ of classes](class.md#forward-declaration)

### Explanation
    

TODO: 
If the name lookup does not find a previously declared type name, 
the elaborated-type-specifier is introduced by `**class**`, `**struct**`, or `**union**` (i.e. not by `**enum**`), and 
class-name is an unqualified identifier, then the elaborated-type-specifier is a class declaration of the class-name, and
the target scope is the nearest enclosing namespace or block scope.  
    
    template<typename T>
    struct Node
    {
        struct Node* Next; // OK: lookup of Node finds the injected-class-name
        struct Data* Data; // OK: declares type Data at global scope
                           // and also declares the data member Data
        friend class ::List; // error: cannot introduce a qualified name
        enum Kind* kind; // error: cannot introduce an enum
    };
     
    Data* p; // OK: struct Data has been declared

If the name refers to a [typedef name](typedef.html "cpp/language/typedef"), 
a [type alias](type_alias.html "cpp/language/type alias"), 
a [template type parameter](template_parameters.html#Type_template_parameter "cpp/language/template parameters"), or
an [alias template specialization](type_alias.html "cpp/language/type alias"), 
the program is ill-formed, 
otherwise the elaborated type specifier introduces the name into the declaration the same way a [simple type specifier](declarations.html#Specifiers "cpp/language/declarations") 
introduces its type-name. 
    
    
    template<typename T>
    class Node
    {
        friend class T; // error: type parameter cannot appear in an elaborated type specifier;
                        // note that similar declaration `friend T;` is OK.
    };
     
    class A {};
    enum b { f, t };
     
    int main()
    {
        class A a; // OK: equivalent to 'A a;'
        enum b flag; // OK: equivalent to 'b flag;'
    }

The class-key or `**enum**` keyword present in the elaborated-type-specifier must agree in kind with the declaration to which the name in the elaborated-type-specifier refers. 

  * the `**enum**` keyword must be used to refer to an [enumeration type](enum.html "cpp/language/enum") (whether scoped or unscoped) 
  * the `**union**` class-key must be used to refer to a [union](union.html "cpp/language/union")
  * either the `**class**` or `**struct**` class-key must be used to refer to a non-union class type (the keywords `**class**` and `**struct**` are interchangeable here).
    
    enum class E { a, b };
    enum E x = E::a; // OK
    enum class E y = E::b; // error: 'enum class' cannot introduce an elaborated type specifier
     
    struct A {};
    class A a; // OK

When used as a [template argument](template_parameters.html#Template_arguments "cpp/language/template parameters"), class T is a type template parameter named `T`,
not an unnamed constant parameter whose type `T` is introduced by elaborated type specifier. 

### Keywords

* [`class`](../keyword/class.md)
* [`struct`](../keyword/struct.md)
* [`union`](../keyword/union.md)
* [`enum`](../keyword/enum.md)

### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 6.5.6 Elaborated type specifiers [basic.lookup.elab] 



    

  * 9.2.9.4 Elaborated type specifiers [dcl.type.elab] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 6.5.4 Elaborated type specifiers [basic.lookup.elab] 



    

  * 9.2.8.3 Elaborated type specifiers [dcl.type.elab] 



  * C++17 standard (ISO/IEC 14882:2017): 



    

  * 6.4.4 Elaborated type specifiers [basic.lookup.elab] 



    

  * 10.1.7.3 Elaborated type specifiers [dcl.type.elab] 



  * C++14 standard (ISO/IEC 14882:2014): 



    

  * 3.4.4 Elaborated type specifiers [basic.lookup.elab] 



    

  * 7.1.6.3 Elaborated type specifiers [dcl.type.elab] 



  * C++11 standard (ISO/IEC 14882:2011): 



    

  * 3.4.4 Elaborated type specifiers [basic.lookup.elab] 



    

  * 7.1.6.3 Elaborated type specifiers [dcl.type.elab] 



  * C++98 standard (ISO/IEC 14882:1998): 



    

  * 3.4.4 Elaborated type specifiers [basic.lookup.elab] 



    

  * 7.1.5.3 Elaborated type specifiers [dcl.type.elab] 



| This section is incomplete  
Reason: probably pull most of 9.1[class.name]/2-3 out of cpp/language/class   
---|---
