* type
  * == property / 
    * exists |
      * [objects](objects.md)
      * [references](reference.md)
      * [functions](functions.md)
        * ALSO | [function template specializations](template_specialization.md)
      * [expressions](expressions.md) 
    * restricts the ALLOWED operations
    * 👀provides semantic meaning👀
      * ⚠️otherwise, generic sequences of bits⚠️ 

## Contents

  * [1 Type classification](type-id.html#Type_classification)
  * [2 Other categories](type-id.html#Other_categories)
    * [2.1 Deprecated categories](type-id.html#Deprecated_categories)
  * [3 Program-defined type](type-id.html#Program-defined_type)
  * [4 Type naming](type-id.html#Type_naming)
  * [5 Elaborated type specifier](type-id.html#Elaborated_type_specifier)
  * [6 Static type](type-id.html#Static_type)
  * [7 Dynamic type](type-id.html#Dynamic_type)
  * [8 Incomplete type](#incomplete-type)
  * [9 Defect reports](type-id.html#Defect_reports)
  * [10 References](type-id.html#References)
  * [11 See also](type-id.html#See_also)
  * [12 External links](type-id.html#External_links)
  
### Type classification

* built-in C++ type
  * [fundamental types](types.md)
    * see ALSO [`std::is_fundamental`](../types/is_fundamental.md):
  * `void`
    * see ALSO [`std::is_void`](../types/is_void.md)
  * [`std::nullptr_t`](../types/nullptr_t.md)
    * see ALSO [`std::is_null_pointer`](../types/is_null_pointer.md) 
    * requirements
      * C++11
  * arithmetic types
    * see ALSO [`std::is_arithmetic`](../types/is_arithmetic.md)
    * integral types OR integer type
      * even ALSO [cv-qualified versions](cv.md)
      * see ALSO [std::is_integral](../types/is_integral.md) 
      * are
        * type `bool` 
        * character types:
          * narrow character types:
            * ordinary character types: `char`, `signed char`, `unsigned char` -- [see](type-id.md#cite_note-1) --
            * the type `char8_t`
              * requirements
                * C++20
          * wide character types: `char16_t`, `char32_t`, `wchar_t` (requirements C++11)
        * signed integer types:
          * standard signed integer types: `signed char`, `short`, `int`, `long`, `long long`
          * extended signed integer types (implementation-defined)
            * requirements
              * C++11
        * unsigned integer types
          * standard unsigned integer types: `unsigned char`, `unsigned short`, `unsigned`, `unsigned long`, `unsigned long long`;
          * extended unsigned integer types (1to1 vs extended signed integer type)
            * requirements
              * C++11  
    * floating-point types
      * see ALSO [`std::is_floating_point`](../types/is_floating_point.md)
      * standard floating-point types: `float`, `double`, `long double` and their [cv-qualified versions](cv.md); 



    

    

    

  * extended floating-point types (including [cv-qualified versions](cv.html "cpp/language/cv")): 



    

  * [fixed width floating-point types](../types/floating-point.html "cpp/types/floating-point"); 
  * other implementation-defined extended floating-point types; 


| (since C++23)  
---|---  
  
  * compound types (see also [std::is_compound](../types/is_compound.html "cpp/types/is compound")): 



    

  * [reference types](reference.html "cpp/language/reference") (see also [std::is_reference](../types/is_reference.html "cpp/types/is reference")): 



    

  * [lvalue reference types](reference.html#Lvalue_references "cpp/language/reference") (see also [std::is_lvalue_reference](../types/is_lvalue_reference.html "cpp/types/is lvalue reference")): 



    

  * lvalue reference to object types; 
  * lvalue reference to function types; 



    

    

  * [rvalue reference types](reference.html#Rvalue_references "cpp/language/reference") (see also [std::is_rvalue_reference](../types/is_rvalue_reference.html "cpp/types/is rvalue reference")): 



    

  * rvalue reference to object types; 
  * rvalue reference to function types; 


| (since C++11)  
---|---  
  
    

  * [pointer types](pointer.html#Pointers "cpp/language/pointer") (see also [std::is_pointer](../types/is_pointer.html "cpp/types/is pointer")): 



    

  * [pointer-to-object types](pointer.html#Pointers_to_objects "cpp/language/pointer"); 
  * [pointer-to-function types](pointer.html#Pointers_to_functions "cpp/language/pointer"); 



  * [pointer-to-member types](pointer.html#Pointers_to_members "cpp/language/pointer") (see also [std::is_member_pointer](../types/is_member_pointer.html "cpp/types/is member pointer")): 



    

  * [pointer-to-data-member](pointer.html#Pointers_to_data_members "cpp/language/pointer") types (see also [std::is_member_object_pointer](../types/is_member_object_pointer.html "cpp/types/is member object pointer")); 
  * [pointer-to-member-function](pointer.html#Pointers_to_member_functions "cpp/language/pointer") types (see also [std::is_member_function_pointer](../types/is_member_function_pointer.html "cpp/types/is member function pointer")); 



  * [array types](array.html "cpp/language/array") (see also [std::is_array](../types/is_array.html "cpp/types/is array")); 
  * [function types](function.html "cpp/language/function") (see also [std::is_function](../types/is_function.html "cpp/types/is function")); 
  * [enumeration types](enum.html "cpp/language/enum") (see also [std::is_enum](../types/is_enum.html "cpp/types/is enum")); 



    

  * [unscoped enumeration types](enum.html#Unscoped_enumerations "cpp/language/enum"); 



    

    

  * [scoped enumeration types](enum.html#Scoped_enumerations "cpp/language/enum") (see also [`std::is_scoped_enum`](../types/is_scoped_enum.html "cpp/types/is scoped enum")); 


| (since C++11)  
---|---  
  
    

  * [class types](class.html "cpp/language/class"): 



    

  * non-union types (see also [std::is_class](../types/is_class.html "cpp/types/is class")); 
  * [union types](union.html "cpp/language/union") (see also [std::is_union](../types/is_union.html "cpp/types/is union")). 



  1. [↑](type-id.html#cite_ref-1) signed char and unsigned char are narrow character types, but they are not character types. In other words, the set of narrow character types is not a subset of the set of character types.



For every non-cv-qualified type other than reference and function, the type system supports three additional [cv-qualified versions](cv.html "cpp/language/cv") of that type (const, volatile, and const volatile). 

### Other categories

An _object type_ (see also [std::is_object](../types/is_object.html "cpp/types/is object")) is a (possibly cv-qualified) type that is not a function type, not a reference type, and not (possibly cv-qualified) void. 

The following types are collectively called _scalar types_ (see also [std::is_scalar](../types/is_scalar.html "cpp/types/is scalar")): 

  * arithmetic types 
  * [enumeration types](enum.html "cpp/language/enum")
  * [pointer types](pointer.html "cpp/language/pointer")
  * [pointer-to-member types](pointer.html#Pointers_to_members "cpp/language/pointer")



  * [std::nullptr_t](../types/nullptr_t.html "cpp/types/nullptr t")

| (since C++11)  
---|---  
  
  * cv-qualified versions of these types 



The following types are collectively called _implicit-lifetime types_ : 

  * scalar types 
  * [implicit-lifetime class types](classes.html#Implicit-lifetime_class "cpp/language/classes")
  * array types 
  * cv-qualified versions of these types 

The following types are collectively called _trivially copyable types_ : 

  * scalar types 
  * [trivially copyable class types](classes.html#Trivially_copyable_class "cpp/language/classes")
  * arrays of such types 
  * cv-qualified versions of these types 

The following types are collectively called _standard-layout types_ : 

  * scalar types 
  * [standard-layout class types](classes.html#Standard-layout_class "cpp/language/classes")
  * arrays of such types 
  * cv-qualified versions of these types 

| (since C++11)  
---|---  
  
* Type traits hierarchy diagram  

* TODO: NOT found ![cpp types v3.svg](https://upload.cppreference.com/mwiki/images/5/55/cpp_types_v3.svg) 
  
#### Deprecated categories

The following types are collectively called _POD types_ (see also [std::is_pod](../types/is_pod.html "cpp/types/is pod")): 

  * scalar types 
  * [POD classes](classes.html#POD_class "cpp/language/classes")
  * arrays of such types 
  * cv-qualified versions of these types 

| (deprecated in C++20)  
---|---  
The following types are collectively called _trivial types_ (see also [std::is_trivial](../types/is_trivial.html "cpp/types/is trivial")): 

  * scalar types 
  * [trivial class types](classes.html#Trivial_class "cpp/language/classes")
  * arrays of such types 
  * cv-qualified versions of these types 

| (since C++11)  
(deprecated in C++26)  
  
### Program-defined type

A _program-defined specialization_ is an [explicit specialization](template_specialization.html "cpp/language/template specialization") or [partial specialization](partial_specialization.html "cpp/language/partial specialization") that is not part of the C++ [standard library](../standard_library.html "cpp/standard library") and not defined by the implementation. 

A _program-defined type_ is one of the following types: 

  * A non-[closure](lambda.html "cpp/language/lambda")(since C++11) [class type](class.html "cpp/language/class") or [enumeration type](enum.html "cpp/language/enum") that is not part of the C++ standard library and not defined by the implementation. 



  * A closure type of a non-implementation-provided [lambda expression](lambda.html "cpp/language/lambda"). 

| (since C++11)  
---|---  
  
  * An [instantiation](templates.html "cpp/language/templates") of a program-defined specialization. 



### Type naming

A [name](name.html "cpp/language/name") can be declared to refer to a type by means of: 

  * [class](class.html "cpp/language/class") declaration; 
  * [union](union.html "cpp/language/union") declaration; 
  * [enum](enum.html "cpp/language/enum") declaration; 
  * [typedef](typedef.html "cpp/language/typedef") declaration; 
  * [type alias](type_alias.html "cpp/language/type alias") declaration. 



Types that do not have names often need to be referred to in C++ programs; the syntax for that is known as type-id. The syntax of the type-id that names type `T` is exactly the syntax of a [declaration](declarations.html "cpp/language/declarations") of a variable or function of type `T`, with the identifier omitted, except that decl-specifier-seq of the declaration grammar is constrained to type-specifier-seq, and that new types may be defined only if the type-id appears on the right-hand side of a non-template type alias declaration. 
    
    
    int* p;               // declaration of a pointer to int
    static_cast<int*>(p); // type-id is "int*"
     
    int a[3];   // declaration of an array of 3 int
    new int[3]; // type-id is "int[3]" (called new-type-id)
     
    int (*(*x[2])())[3];      // declaration of an array of 2 pointers to functions
                              // returning pointer to array of 3 int
    new (int (*(*[2])())[3]); // type-id is "int (*(*[2])())[3]"
     
    void f(int);                    // declaration of a function taking int and returning void
    [std::function](../utility/functional/function.html)<void(int)> x = f; // type template parameter is a type-id "void(int)"
    [std::function](../utility/functional/function.html)<auto(int) -> void> y = f; // same
     
    [std::vector](../container/vector.html)<int> v;       // declaration of a vector of int
    sizeof([std::vector](../container/vector.html)<int>); // type-id is "std::vector<int>"
     
    struct { int x; } b;         // creates a new type and declares an object b of that type
    sizeof(struct { int x; });   // error: cannot define new types in a sizeof expression
    using t = struct { int x; }; // creates a new type and declares t as an alias of that type
     
    sizeof(static int); // error: storage class specifiers not part of type-specifier-seq
    [std::function](../utility/functional/function.html)<inline void(int)> f; // error: neither are function specifiers

The declarator part of the declaration grammar with the name removed is referred to as abstract-declarator. 

Type-id may be used in the following situations: 

  * to specify the target type in [cast expressions](expressions.html#Conversions "cpp/language/expressions"); 
  * as arguments to [`sizeof`](sizeof.html "cpp/language/sizeof"), [`alignof`](alignof.html "cpp/language/alignof"), [`alignas`](alignas.html "cpp/language/alignas"), [`new`](new.html "cpp/language/new"), and [`typeid`](typeid.html "cpp/language/typeid"); 
  * on the right-hand side of a [type alias](type_alias.html "cpp/language/type alias") declaration; 
  * as the trailing return type of a [function](function.html "cpp/language/function") declaration; 
  * as the default argument of a [template type parameter](template_parameters.html#Type_template_parameter "cpp/language/template parameters"); 
  * as the template argument for a [template type parameter](template_parameters.html#Template_type_arguments "cpp/language/template parameters"); 



  * in [dynamic exception specification](except_spec.html "cpp/language/except spec"). 

| (until C++17)  
---|---  
  
Type-id can be used with some modifications in the following situations: 

  * in the parameter list of a [function](function.html#Parameter_list "cpp/language/function") (when the parameter name is omitted), type-id uses decl-specifier-seq instead of type-specifier-seq (in particular, some storage class specifiers are allowed); 
  * in the name of a [user-defined conversion function](cast_operator.html "cpp/language/cast operator"), the abstract declarator cannot include function or array operators. 

| This section is incomplete  
Reason: 8.2[dcl.ambig.res] if it can be compactly summarized   
---|---  
| This section is incomplete  
Reason: mention and link to decltype and auto   
---|---  
  
### Elaborated type specifier

Elaborated type specifiers may be used to refer to a previously-declared class name (class, struct, or union) or to a previously-declared enum name even if the name was [hidden by a non-type declaration](lookup.html "cpp/language/lookup"). They may also be used to declare new class names. 

See [elaborated type specifier](elaborated_type_specifier.html "cpp/language/elaborated type specifier") for details. 

### Static type

The type of an expression that results from the compile-time analysis of the program is known as the _static type_ of the expression. The static type does not change while the program is executing. 

### Dynamic type

If some [glvalue expression](value_category.html "cpp/language/value category") refers to a [polymorphic object](objects.html "cpp/language/object"), the type of its most derived object is known as the dynamic type. 
    
    
    // given
    struct B { virtual ~B() {} }; // polymorphic type
    struct D : B {};               // polymorphic type
     
    D d; // most-derived object
    B* ptr = &d;
     
    // the static type of (*ptr) is B
    // the dynamic type of (*ptr) is D

For prvalue expressions, the dynamic type is always the same as the static type. 

### Incomplete type

* are
  * `void`
    * POSSIBLY [`cv`-qualified](cv.md) 
  * _incompletely-defined object types_
    * class type / has been declared BUT NOT defined
      * _Example:_ =[forward declaration](class.md#forward-declaration)
    * array
      * / [unknown bound](array.md#Arrays_of_unknown_bound) 
      * of elements of incomplete type; 
    * [enumeration type](enum.md) TILL its underlying type is determined

* contexts / requires type `T` is complete
  * about 
    * [functions](function.md)
      * | 
        * define a function's
          * return type
          * argument type
        * call a function's
          * return type
          * argument type 
    * object
      * | [define](definition.md) an object / type `T` 
  * declaration of a [non-static class data member](data_members.html "cpp/language/data members") / type `T`; 
  * [`new` expression](new.html "cpp/language/new") for an object of type `T` or an array whose element type is `T`; 
  * [lvalue-to-rvalue conversion](implicit_cast.html#Lvalue_to_rvalue_conversion "cpp/language/implicit cast") applied to a glvalue of type `T`; 
  * an [implicit](implicit_cast.html "cpp/language/implicit cast") or [explicit](explicit_cast.html "cpp/language/explicit cast") conversion to type `T`; 
  * a [standard conversion](implicit_cast.html "cpp/language/implicit cast"), [`dynamic_cast`](dynamic_cast.html "cpp/language/dynamic cast"), or [`static_cast`](static_cast.html "cpp/language/static cast") to type T* or T&, except when converting from the [null pointer constant](pointer.html#Null_pointers "cpp/language/pointer") or from a [pointer to possibly cv-qualified void](pointer.html#Pointers_to_void "cpp/language/pointer"); 
  * [class member access operator](operator_member_access.html "cpp/language/operator member access") applied to an expression of type `T`; 
  * [`typeid`](typeid.html "cpp/language/typeid"), [`sizeof`](sizeof.html "cpp/language/sizeof"), or [`alignof`](alignof.html "cpp/language/alignof") operator applied to type `T`; 
  * [arithmetic operator](operator_arithmetic.html "cpp/language/operator arithmetic") applied to a pointer to `T`; 
  * definition of a class with base class `T`; 
  * assignment to an lvalue of type `T`; 
  * a [handler](catch.html "cpp/language/catch") of type `T`, T&, or T*. 



(In general, when the size and layout of `T` must be known.) 

If any of these situations occur in a translation unit, the definition of the type must appear in the same translation unit. Otherwise, it is not required. 

An incompletely-defined object type can be completed: 

  * A class type (such as class X) might be regarded as incomplete at one point in a translation unit and regarded as complete later on; the type class X is the same type at both points: 


    
    
    struct X;            // declaration of X, no definition provided yet
    extern X* xp;        // xp is a pointer to an incomplete type:
                         // the definition of X is not reachable
     
    void foo()
    {
        xp++;            // ill-formed: X is incomplete
    }
     
    struct X { int i; }; // definition of X
    X x;                 // OK: the definition of X is reachable
     
    void bar()
    {
        xp = &x;         // OK: type is “pointer to X”
        xp++;            // OK: X is complete
    }

  * The declared type of an array object might be an array of incomplete class type and therefore incomplete; if the class type is completed later on in the translation unit, the array type becomes complete; the array type at those two points is the same type. 
  * The declared type of an array object might be an array of unknown bound and therefore be incomplete at one point in a translation unit and complete later on; the array types at those two points ("array of unknown bound of `T`" and "array of N `T`") are different types. 



The type of a pointer or reference to array of unknown bound permanently points to or refers to an incomplete type. An array of unknown bound named by a [`typedef`](typedef.html "cpp/language/typedef") declaration permanently refers to an incomplete type. In either case, the array type cannot be completed: 
    
    
    extern int arr[];   // the type of arr is incomplete
    typedef int UNKA[]; // UNKA is an incomplete type
     
    UNKA* arrp;         // arrp is a pointer to an incomplete type
    UNKA** arrpp;
     
    void foo()
    {
        arrp++;         // error: UNKA is an incomplete type
        arrpp++;        // OK: sizeof UNKA* is known
    }
     
    int arr[10];        // now the type of arr is complete
     
    void bar()
    {
        arrp = &arr;    // OK: qualification conversion (since C++20)
        arrp++;         // error: UNKA cannot be completed
    }

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 328](https://cplusplus.github.io/CWG/issues/328.html) | C++98  | class members of incomplete type were not prohibited  
if an object of the class type was never created  | non-static class data members  
need to be complete   
[CWG 977](https://cplusplus.github.io/CWG/issues/977.html) | C++98  | the point when an enumeration type becomes  
complete in its definition was unclear  | the type is complete once the  
underlying type is determined   
[CWG 1362](https://cplusplus.github.io/CWG/issues/1362.html) | C++98  | user-defined conversions to type `T*` or `T&` required `T` to be complete  | not required   
[CWG 2006](https://cplusplus.github.io/CWG/issues/2006.html) | C++98  | cv-qualified void types were object type and complete type  | excluded from both categories   
[CWG 2448](https://cplusplus.github.io/CWG/issues/2448.html) | C++98  | only cv-unqualified types could be integral and floating-point types  | allows cv-qualified types   
[CWG 2630](https://cplusplus.github.io/CWG/issues/2630.html) | C++98  | it was unclear whether a class is considered complete outside  
the translation unit where the definition of the class appears  | the class is complete  
if its definition is  
reachable in this case   
[CWG 2643](https://cplusplus.github.io/CWG/issues/2643.html) | C++98  | the type of a pointer to array of unknown bound  
could not be completed (but it is already complete)  | the pointed-to array type  
cannot be completed   
[LWG 2139](https://cplusplus.github.io/LWG/issue2139) | C++98  | the meaning of “user-defined type” was unclear  | defines and uses “program-  
defined type” instead   
[LWG 3119](https://cplusplus.github.io/LWG/issue3119) | C++11  | it was unclear whether closure types are program-defined types  | made clear   
  
### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 6.8.2 Fundamental types [basic.fundamental] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 6.8.2 Fundamental types [basic.fundamental] 



  * C++17 standard (ISO/IEC 14882:2017): 



    

  * 6.9.1 Fundamental types [basic.fundamental] 



  * C++14 standard (ISO/IEC 14882:2014): 



    

  * 3.9.1 Fundamental types [basic.fundamental] 



  * C++11 standard (ISO/IEC 14882:2011): 



    

  * 3.9.1 Fundamental types [basic.fundamental] 



  * C++98 standard (ISO/IEC 14882:1998): 



    

  * 3.9.1 Fundamental types [basic.fundamental] 



### See also

**[Type traits](../meta.html#Type_traits "cpp/meta")** |  A compile-time template-based interfaces to query the properties of types   
---|---  
[C documentation](../../c/language/compatible_type.html "c/language/type") for Type  
  
### External links

1\.  | [Howard Hinnant's C++0x type tree](https://howardhinnant.github.io/TypeHiearchy.pdf)  
---|---
