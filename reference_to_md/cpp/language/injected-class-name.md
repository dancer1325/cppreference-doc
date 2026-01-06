

  
  
  
  
  

  
  
  

---  
  

---  
  


[ Classes](classes.html "cpp/language/classes")

General  
---  
[Overview](classes.html "cpp/language/classes")  
[`class`/`struct` types](class.html "cpp/language/class")  
[`union` types](union.html "cpp/language/union")  
**Injected-class-name**  
[Class property specifiers](class_property_specifiers.html "cpp/language/class property specifiers") (C++26)  
Members  
[Data members](data_members.html "cpp/language/data members")  
[Static members](static.html "cpp/language/static")  
[The `this` pointer](this.html "cpp/language/this")  
[Nested classes](nested_classes.html "cpp/language/nested types")  
[Member templates](member_template.html "cpp/language/member template")  
[Bit-fields](bit_field.html "cpp/language/bit field")  
[`using`-declarations](using_declaration.html "cpp/language/using declaration")  
[Member functions](member_functions.html "cpp/language/member functions")  
[Member access specifiers](access.html "cpp/language/access")  
[Constructors and member initializer lists](initializer_list.html "cpp/language/constructor")  
[Default member initializer](data_members.html#Member_initialization "cpp/language/data members") (C++11)  
[`friend` specifier](friend.html "cpp/language/friend")  
[`explicit` specifier](explicit.html "cpp/language/explicit")  
[Converting constructor](converting_constructor.html "cpp/language/converting constructor")  
Special member functions  
[Default constructor](default_constructor.html "cpp/language/default constructor")  
[Copy constructor](copy_constructor.html "cpp/language/copy constructor")  
[Move constructor](move_constructor.html "cpp/language/move constructor") (C++11)  
[Copy assignment operator](as_operator.html "cpp/language/copy assignment")  
[Move assignment operator](move_operator.html "cpp/language/move assignment") (C++11)  
[Destructor](destructor.html "cpp/language/destructor")  
Inheritance  
[Base and derived classes](derived_class.html "cpp/language/derived class")  
[Empty base optimization (EBO)](ebo.html "cpp/language/ebo")  
[Virtual member functions](virtual.html "cpp/language/virtual")  
[Pure virtual functions and abstract classes](abstract_class.html "cpp/language/abstract class")  
[`override` specifier](override.html "cpp/language/override") (C++11)  
[`final` specifier](final.html "cpp/language/final") (C++11)  
  


The injected-class-name is the unqualified name of a class within the scope of said class. 

In a [class template](class_template.html "cpp/language/class template"), the injected-class-name can be used either as a template name that refers to the current template, or as a class name that refers to the current instantiation. 

## Contents

  * [1 Explanation](injected-class-name.html#Explanation)
  * [2 In class template](injected-class-name.html#In_class_template)
  * [3 injected-class-name and constructors](injected-class-name.html#injected-class-name_and_constructors)
  * [4 Defect reports](injected-class-name.html#Defect_reports)

  
---  
  
### Explanation

In a [class scope](scope.html#Class_scope "cpp/language/scope"), the class name of the current class or the template name of the current class template is treated as if it were a public member name; this is called _injected-class-name_. The point of declaration of the name is immediately following the opening brace of the class (template) definition. 
    
    
    int X;
     
    struct X
    {
        void f()
        {
            X* p;   // OK, X is an injected-class-name
            ::X* q; // Error: name lookup finds a variable name, which hides the struct name
        }
    };
     
    template<class T>
    struct Y
    {
        void g()
        {
            Y* p;    // OK, Y is an injected-class-name
            Y<T>* q; // OK, Y is an injected-class-name, but Y<T> is not
        }
    };

Like other members, injected-class-names are inherited. In the presence of private or protected inheritance, the injected-class-name of an indirect base class might end up being inaccessible in a derived class. 
    
    
    struct A {};
    struct B : private A {};
    struct C : public B
    {
        A* p;   // Error: injected-class-name A is inaccessible
        ::A* q; // OK, does not use the injected-class-name
    };

### In class template

The injected-class-name of a class template can be used as a template-name or a type-name. 

In the following cases, the injected-class-name is treated as a template-name of the class template itself: 

  * It is followed by `**<**`. 
  * It is used as a [template template argument](template_parameters.html#Template_template_arguments "cpp/language/template parameters"). 
  * It is the final identifier in the [elaborated class specifier](elaborated_type_specifier.html "cpp/language/elaborated type specifier") of a friend class template declaration. 



Otherwise, it is treated as a type-name, and is equivalent to the template-name followed by the template-parameters of the class template enclosed in `**< >**`. 
    
    
    template<template<class, class> class>
    struct A;
     
    template<class T1, class T2>
    struct X
    {
        X<T1, T2>* p;   // OK, X is treated as a template-name
     
        using a = A<X>; // OK, X is treated as a template-name
     
        template<class U1, class U2>
        friend class X; // OK, X is treated as a template-name
     
        X* q;           // OK, X is treated as a type-name, equivalent to X<T1, T2>
    };

Within the scope of a class [template specialization](template_specialization.html "cpp/language/template specialization") or [partial specialization](partial_specialization.html "cpp/language/partial specialization"), when the injected-class-name is used as a type-name, it is equivalent to the template-name followed by the template-arguments of the class template specialization or partial specialization enclosed in `**< >**`. 
    
    
    template<>
    struct X<void, void>
    {
        X* p; // OK, X is treated as a type-name, equivalent to X<void, void>
     
        template<class, class>
        friend class X; // OK, X is treated as a template-name (same as in primary template)
     
        X<void, void>* q; // OK, X is treated as a template-name
    };
     
    template<class T>
    struct X<char, T>
    {
        X* p, q; // OK, X is treated as a type-name, equivalent to X<char, T>
     
        using r = X<int, int>; // OK, can be used to name another specialization
    };

The injected-class-name of a class template or class template specialization can be used either as a template-name or a type-name wherever it is in scope. 
    
    
    template<>
    class X<int, char>
    {
        class B
        {
            X a;            // meaning X<int, char>
     
            template<class, class>
            friend class X; // meaning ::X
        };
    };
     
    template<class T>
    struct Base
    {
        Base* p; // OK: Base means Base<T>
    };
     
    template<class T>
    struct Derived : public Base<T*>
    {
        typename Derived::Base* p; // OK: Derived::Base means Derived<T>::Base,
                                   // which is Base<T*>
    };
     
    template<class T, template<class> class U = T::template Base>
    struct Third {};
     
    Third<Derived<int>> t; // OK: default argument uses injected-class-name as a template

A lookup that finds an injected-class-name can result in an ambiguity in certain cases (for example, if it is found in more than one base class). If all of the injected-class-names that are found refer to specializations of the same class template, and if the name is used as a template-name, the reference refers to the class template itself and not a specialization thereof, and is not ambiguous. 
    
    
    template<class T>
    struct Base {};
     
    template<class T>
    struct Derived: Base<int>, Base<char>
    {
        typename Derived::Base b;         // error: ambiguous
        typename Derived::Base<double> d; // OK
    };

### injected-class-name and constructors

Constructors do not have names, but the injected-class-name of the enclosing class is considered to name a constructor in constructor declarations and definitions. 

In a qualified name `C::D`, if 

  * name lookup does not ignore function names, and 
  * lookup of `D` in the scope of the class `C` finds its injected-class-name 



the qualified name is always considered to name `C`'s constructor. Such a name can only be used in the declaration of a constructor (e.g. in a friend constructor declaration, a constructor template specialization, constructor template instantiation, or constructor definition) or be used to inherit constructors(since C++11). 
    
    
    struct A
    {
        A();
        A(int);
     
        template<class T>
        A(T) {}
    };
    using A_alias = A;
     
    A::A() {}
    A_alias::A(int) {}
    template A::A(double);
     
    struct B : A
    {
        using A_alias::A;
    };
     
    A::A a;         // Error: A::A is considered to name a constructor, not a type
    struct A::A a2; // OK, same as 'A a2;'
    B::A b;         // OK, same as 'A b;'

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 1004](https://cplusplus.github.io/CWG/issues/1004.html) | C++98  | an injected-class-name could not  
be a template template argument  | allowed, it refers to the class  
template itself in this case   
[CWG 2637](https://cplusplus.github.io/CWG/issues/2637.html) | C++98  | the entire template-id could be an injected-class-name  | only the template name can 
