

  
  
  
  
  

  
  
  
[Expressions](expressions.html "cpp/language/expressions")  
---  
| [Value categories](value_category.html "cpp/language/value category")  
---  
[Order of evaluation](eval_order.html "cpp/language/eval order")  
  
| [Operators](operators.html "cpp/language/operators")  
---  
[Operator precedence](operator_precedence.html "cpp/language/operator precedence")  
  
[Alternative representations](operator_alternative.html "cpp/language/operator alternative")  
[Literals](expressions.html#Literals "cpp/language/expressions")  
[Boolean](bool_literal.html "cpp/language/bool literal") \- [Integer](integer_literal.html "cpp/language/integer literal") \- [Floating-point](floating_literal.html "cpp/language/floating literal")  
[Character](character_literal.html "cpp/language/character literal") \- [String](string_literal.html "cpp/language/string literal") \- [`nullptr`](nullptr.html "cpp/language/nullptr") (C++11)  
[User-defined](user_literal.html "cpp/language/user literal") (C++11)  
Utilities  
[Attributes](attributes.html "cpp/language/attributes") (C++11)  
Types  
**`typedef` declaration**  
[Type alias declaration](type_alias.html "cpp/language/type alias") (C++11)  
Casts  
| [Implicit conversions](implicit_cast.html "cpp/language/implicit conversion")  
---  
[`static_cast`](static_cast.html "cpp/language/static cast")  
[`const_cast`](const_cast.html "cpp/language/const cast")  
  
| [Explicit conversions](explicit_cast.html "cpp/language/explicit cast")  
---  
[`dynamic_cast`](dynamic_cast.html "cpp/language/dynamic cast")  
[`reinterpret_cast`](reinterpret_cast.html "cpp/language/reinterpret cast")  
  
Memory allocation  
| [`new` expression](new.html "cpp/language/new")  
---  
  

---  
  


[Declarations](declarations.html "cpp/language/declarations")

| Overview  
---  
[Declaration syntax](declarations.html "cpp/language/declarations")  
[_decl-specifier-seq_](declarations.html#Specifiers "cpp/language/declarations")  
[Declarator](declarations.html#Declarators "cpp/language/declarations")  
[Conflicting declarations](conflicting_declarations.html "cpp/language/conflicting declarations")  
Specifiers  
**typedef**  
[inline](inline.html "cpp/language/inline")  
[virtual function specifier](virtual.html "cpp/language/virtual")  
[explicit function specifier](explicit.html "cpp/language/explicit")  
[friend](friend.html "cpp/language/friend")  
[constexpr](constexpr.html "cpp/language/constexpr")(C++11)  
[consteval](consteval.html "cpp/language/consteval")(C++20)  
[constinit](constinit.html "cpp/language/constinit")(C++20)  
[Storage class specifiers](storage_duration.html "cpp/language/storage duration")  
[Translation-unit-local](tu_local.html "cpp/language/tu local") (C++20)  
[class/struct](class.html "cpp/language/class")  
[union](union.html "cpp/language/union")  
[enum](enum.html "cpp/language/enum")  
[decltype](decltype.html "cpp/language/decltype")(C++11)  
[auto](auto.html "cpp/language/auto")(C++11)  
[alignas](alignas.html "cpp/language/alignas")(C++11)  
[constvolatile](cv.html "cpp/language/cv")  
[Pack indexing specifier](pack_indexing.html#Pack_indexing_specifier "cpp/language/pack indexing") (C++26)  
[Elaborated type specifier](elaborated_type_specifier.html "cpp/language/elaborated type specifier")  
[Attributes](attributes.html "cpp/language/attributes") (C++11)  
  
 
  
  
  


    

  * `**typedef**` \- creates an alias that can be used anywhere in place of a (possibly complex) type name. 



## Contents

  * [1 Explanation](typedef.html#Explanation)
  * [2 typedef name for linkage purposes](typedef.html#typedef_name_for_linkage_purposes)
  * [3 Notes](typedef.html#Notes)
  * [4 Keywords](typedef.html#Keywords)
  * [5 Example](typedef.html#Example)
  * [6 Defect reports](typedef.html#Defect_reports)
  * [7 See also](typedef.html#See_also)

  
---  
  
### Explanation

The typedef specifier, when used in a [declaration](declarations.html "cpp/language/declarations"), specifies that the declaration is a _typedef declaration_ rather than a variable or function declaration. 

Typically, the typedef specifier appears at the start of the declaration, though it is permitted to appear after the [type specifiers](declarations.html#Specifiers "cpp/language/declarations"), or between two type specifiers. The typedef specifier cannot be combined with any other specifier except for type specifiers. 

A typedef declaration may declare one or many identifiers on the same line (e.g. int and a pointer to int), it may declare array and function types, pointers and references, class types, etc. Every identifier introduced in this declaration becomes a _typedef name_ , which is a synonym for the type of the object or function that it would become if the keyword typedef were removed. 

The typedef names are aliases for existing types, and are not declarations of new types. typedef cannot be used to change the meaning of an existing type name (including a typedef name). Once declared, a typedef name may only be redeclared to refer to the same type again. Typedef names are only in effect in the scope where they are visible: different functions or class declarations may define identically-named types with different meaning. 

The typedef specifier may not appear in the declaration of a function parameter nor in the decl-specifier-seq of a [function definition](function.html#Function_definition "cpp/language/function"): 
    
    
    void f1(typedef int param); // ill-formed
    typedef int f2() {}         // ill-formed

The typedef specifier may not appear in a declaration that does not contain a declarator: 
    
    
    typedef struct X {}; // ill-formed

### typedef name for linkage purposes

If a typedef declaration defines an unnamed [class](classes.html "cpp/language/classes") or [enumeration](enum.html "cpp/language/enum"), the first typedef name of the class type or enumeration type declared by the declaration is the _typedef name for linkage purposes_ of that type. 

For example, in typedef struct { /* ... */ } S;, `S` is a typedef name for linkage purposes. The class or enumeration type defined in this way has [external linkage](storage_duration.html#Linkage "cpp/language/storage duration") (unless it is in an unnamed namespace). 

An unnamed class defined in this way should only contain C-compatible constructs. In particular, it must not 

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

### Example
    
    
    // simple typedef
    typedef unsigned long ulong;
     
    // the following two objects have the same type
    unsigned long l1;
    ulong l2;
     
    // more complicated typedef
    typedef int int_t, *intp_t, (&fp)(int, ulong), arr_t[10];
     
    // the following two objects have the same type
    int a1[10];
    arr_t a2;
     
    // beware: the following two objects do not have the same type
    const intp_t p1 = 0; // int *const p1 = 0
    const int *p2;
     
    // common C idiom to avoid having to write "struct S"
    typedef struct { int a; int b; } S, *pS;
     
    // the following two objects have the same type
    pS ps1;
    S* ps2;
     
    // error: storage-class-specifier cannot appear in a typedef declaration
    // typedef static unsigned int uint;
     
    // typedef can be used anywhere in the decl-specifier-seq
    long unsigned typedef int long ullong;
    // more conventionally spelled "typedef unsigned long long int ullong;"
     
    // std::add_const, like many other metafunctions, use member typedefs
    template<class T>
    struct add_const
    {
        typedef const T type;
    };
     
    typedef struct Node
    {
        struct listNode* next; // declares a new (incomplete) struct type named listNode
    } listNode; // error: conflicts with the previously declared struct name
     
    // C++20 error: "struct with typedef name for linkage" has member functions
    typedef struct { void f() {} } C_Incompatible;

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
