

  
  
  
  
  

  
  
  

---  
  

---  
  


  
  

  
Conversions  
| [Implicit conversions](implicit_cast.html "cpp/language/implicit conversion")  
---  
[Explicit conversions](explicit_cast.html "cpp/language/explicit cast")  
[Usual arithmetic conversions](usual_arithmetic_conversions.html "cpp/language/usual arithmetic conversions")  
**User-defined conversion**  
  
  


Enables [implicit conversion](implicit_cast.html "cpp/language/implicit cast") or [explicit conversion](explicit_cast.html "cpp/language/explicit cast") from a [class type](class.html "cpp/language/class") to another type. 

## Contents

  * [1 Syntax](cast_operator.html#Syntax)
  * [2 Explanation](cast_operator.html#Explanation)
  * [3 Keywords](cast_operator.html#Keywords)
  * [4 Defect reports](cast_operator.html#Defect_reports)

  
---  
  
### Syntax

Conversion function is declared like a [non-static member function](member_functions.html "cpp/language/member functions") or member [function template](function_template.html "cpp/language/function template") with no parameters, no explicit return type, and with the name of the form:   
  
---  
`**operator**` conversion-type-id |  (1)  |   
`**explicit**` `**operator**` conversion-type-id |  (2)  |  (since C++11)  
`**explicit (**` expression `**)**` `**operator**` conversion-type-id |  (3)  |  (since C++20)  
  
1) Declares a user-defined conversion function that participates in all [implicit](implicit_cast.html "cpp/language/implicit cast") and [explicit conversions](explicit_cast.html "cpp/language/explicit cast").

2) Declares a user-defined conversion function that participates in [direct-initialization](direct_initialization.html "cpp/language/direct initialization") and [explicit conversions](explicit_cast.html "cpp/language/explicit cast") only.

3) Declares a user-defined conversion function that is [conditionally explicit](explicit.html "cpp/language/explicit").

conversion-type-id is a [type-id](type-id.html#Type_naming "cpp/language/type") except that function and array operators `**[]**` or `**()**` are not allowed in its declarator (thus conversion to types such as pointer to array requires a type alias/typedef or an identity template: see below). Regardless of typedef, conversion-type-id cannot represent an array or a function type. 

Although the return type is not allowed in the declaration of a user-defined conversion function, the decl-specifier-seq of [the declaration grammar](declarations.html#Specifiers "cpp/language/declarations") may be present and may include any specifier other than type-specifier or the keyword `static`, In particular, besides [`explicit`](explicit.html "cpp/language/explicit"), the specifiers [`inline`](inline.html "cpp/language/inline"), [`virtual`](virtual.html "cpp/language/virtual"), [`constexpr`](constexpr.html "cpp/language/constexpr")(since C++11), [`consteval`](consteval.html "cpp/language/consteval")(since C++20), and [`friend`](friend.html "cpp/language/friend") are also allowed (note that `friend` requires a qualified name: friend A::operator B();). 

When such member function is declared in class X, it performs conversion from X to conversion-type-id: 
    
    
    struct X
    {
        // implicit conversion
        operator int() const { return 7; }
     
        // explicit conversion
        explicit operator int*() const { return nullptr; }
     
        // Error: array operator not allowed in conversion-type-id
    //  operator int(*)[3]() const { return nullptr; }
     
        using arr_t = int[3];
        operator arr_t*() const { return nullptr; } // OK if done through typedef
    //  operator arr_t () const; // Error: conversion to array not allowed in any case
    };
     
    int main()
    {
        X x;
     
        int n = static_cast<int>(x);   // OK: sets n to 7
        int m = x;                     // OK: sets m to 7
     
        int* p = static_cast<int*>(x); // OK: sets p to null
    //  int* q = x; // Error: no implicit conversion
     
        int (*pa)[3] = x;  // OK
    }

### Explanation

User-defined conversion function is invoked in the second stage of the [implicit conversion](implicit_cast.html "cpp/language/implicit cast"), which consists of zero or one [converting constructor](converting_constructor.html "cpp/language/converting constructor") or zero or one user-defined conversion function. 

If both conversion functions and converting constructors can be used to perform some user-defined conversion, the conversion functions and constructors are both considered by [overload resolution](overload_resolution.html "cpp/language/overload resolution") in [copy-initialization](copy_initialization.html "cpp/language/copy initialization") and [reference-initialization](reference_initialization.html "cpp/language/reference initialization") contexts, but only the constructors are considered in [direct-initialization](direct_initialization.html "cpp/language/direct initialization") contexts. 
    
    
    struct To
    {
        To() = default;
        To(const struct From&) {} // converting constructor
    };
     
    struct From
    {
        operator To() const {return To();} // conversion function
    };
     
    int main()
    {
        From f;
        To t1(f);  // direct-initialization: calls the constructor
        // Note: if converting constructor is not available, implicit copy constructor
        // will be selected, and conversion function will be called to prepare its argument
     
    //  To t2 = f; // copy-initialization: ambiguous
        // Note: if conversion function is from a non-const type, e.g.
        // From::operator To();, it will be selected instead of the ctor in this case
     
        To t3 = static_cast<To>(f); // direct-initialization: calls the constructor
        const To& r = f;            // reference-initialization: ambiguous
    }

Conversion function to its own (possibly cv-qualified) class (or to a reference to it), to the base of its own class (or to a reference to it), and to the type void can be defined, but can not be executed as part of the conversion sequence, except, in some cases, through [virtual](virtual.html "cpp/language/virtual") dispatch: 
    
    
    struct D;
     
    struct B
    {
        virtual operator D() = 0;
    };
     
    struct D : B
    {
        operator D() override { return D(); }
    };
     
    int main()
    {
        D obj;
        D obj2 = obj; // does not call D::operator D()
        B& br = obj;
        D obj3 = br;  // calls D::operator D() through virtual dispatch
    }

It can also be called using member function call syntax: 
    
    
    struct B {};
     
    struct X : B
    {
        operator B&() { return *this; };
    };
     
    int main()
    {
        X x;
        B& b1 = x;                  // does not call X::operatorB&()
        B& b2 = static_cast<B&>(x); // does not call X::operatorB&
        B& b3 = x.operator B&();    // calls X::operatorB&
    }

When making an explicit call to the conversion function, conversion-type-id is greedy: it is the longest sequence of tokens that could possibly form a conversion-type-id (including attributes, if any)(since C++11): 
    
    
    & x.operator int * a; // error: parsed as & (x.operator int*) a,
                          //           not as & (x.operator int) * a
     
    operator int [[noreturn]] (); // error: noreturn attribute applied to a type

The placeholder [auto](auto.html "cpp/language/auto") can be used in conversion-type-id, indicating a [deduced return type](function.html#Return_type_deduction "cpp/language/function"): 
    
    
    struct X
    {
        operator int(); // OK
        operator auto() -> short; // error: trailing return type not part of syntax
        operator auto() const { return 10; } // OK: deduced return type
        operator decltype(auto)() const { return 10l; } // OK: deduced return type
    };

Note: a [conversion function template](member_template.html#Conversion_function_templates "cpp/language/member template") is not allowed to have a deduced return type.  | (since C++14)  
---|---  
  
Conversion functions can be inherited and can be [virtual](virtual.html "cpp/language/virtual"), but cannot be [static](static.html "cpp/language/static"). A conversion function in the derived class does not hide a conversion function in the base class unless they are converting to the same type. 

Conversion function can be a template member function, for example, [`std::auto_ptr<T>::operator auto_ptr<Y>`](../memory/auto_ptr/operator_auto_ptr.html "cpp/memory/auto ptr/operator auto ptr"). See [member template](member_template.html#Conversion_function_templates "cpp/language/member template") and [template argument deduction](template_argument_deduction.html#Conversion_function_template "cpp/language/template argument deduction") for applicable special rules. 

### Keywords

[`operator`](../keyword/operator.html "cpp/keyword/operator")

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 296](https://cplusplus.github.io/CWG/issues/296.html) | C++98  | conversion functions could be static  | they cannot be declared static   
[CWG 2016](https://cplusplus.github.io/CWG/issues/2016.html) | C++98  | conversion functions could not specify return types,  
but the types are present in conversion-type-id | return types cannot be specified in the  
declaration specifiers of conversion functions   
[CWG 2175](https://cplusplus.github.io/CWG/issues/2175.html) | C++11  | it was unclear whether the [[noreturn]] in  
operator int [[noreturn]] (); is parsed as a part of  
noptr-declarator (of function declarator) or conversion-type-id | it is parsed as a part of  
conversion-type-id
