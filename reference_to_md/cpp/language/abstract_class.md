

  
| [`goto`](goto.html "cpp/language/goto") \- [`return`](return.html "cpp/language/return")  
---  
  
[Functions](functions.html "cpp/language/functions")  
[Function declaration](function.html "cpp/language/function")  
[Lambda function expression](lambda.html "cpp/language/lambda")  
[`inline` specifier](inline.html "cpp/language/inline")  
[Dynamic exception specifications](except_spec.html "cpp/language/except spec") (until C++17*)  
[`noexcept` specifier](noexcept_spec.html "cpp/language/noexcept spec") (C++11)  
Exceptions  
| [`throw`-expression](throw.html "cpp/language/throw")  
---  
[`try` block](try.html "cpp/language/try")  
  
|   
  
---  
[`catch` handler](catch.html "cpp/language/catch")  
  
Namespaces  
| [Namespace declaration](namespace.html "cpp/language/namespace")` `  
---  
  
| [Namespace aliases](namespace_alias.html "cpp/language/namespace alias")  
---  
  
Types  
| [Fundamental types](types.html "cpp/language/types")  
---  
[Enumeration types](enum.html "cpp/language/enum")  
[Function types](function.html "cpp/language/function")  
  
| [Class/struct types](class.html "cpp/language/class")  
---  
[Union types](union.html "cpp/language/union")  
  
  
  

  
  
  

---  
  

---  
  


[ Classes](classes.html "cpp/language/classes")

General  
---  
[Overview](classes.html "cpp/language/classes")  
[`class`/`struct` types](class.html "cpp/language/class")  
[`union` types](union.html "cpp/language/union")  
[Injected-class-name](injected-class-name.html "cpp/language/injected-class-name")  
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
**Pure virtual functions and abstract classes**  
[`override` specifier](override.html "cpp/language/override") (C++11)  
[`final` specifier](final.html "cpp/language/final") (C++11)  
  


Defines an abstract type which cannot be instantiated, but can be used as a base class. 

## Contents

  * [1 Syntax](abstract_class.html#Syntax)
  * [2 Explanation](abstract_class.html#Explanation)
  * [3 Defect reports](abstract_class.html#Defect_reports)
  * [4 See also](abstract_class.html#See_also)

  
---  
  
### Syntax

A _pure virtual_ function is a [virtual function](virtual.html "cpp/language/virtual") whose [declarator](function.html "cpp/language/function") has the following syntax:   
  
---  
declarator virt-specifier ﻿(optional) `**=**` `**0**` |  |   
  
Here the sequence `**= 0**` is known as pure-specifier, and appears either immediately after the declarator or after the optional virt-specifier ([`override`](override.html "cpp/language/override") or [`final`](final.html "cpp/language/final")). 

pure-specifier cannot appear in a member function definition or [friend](friend.html "cpp/language/friend") declaration. 
    
    
    struct Base
    {
        virtual int g();
        virtual ~Base() {}
    };
     
    struct A : Base
    {
        // OK: declares three member virtual functions, two of them pure
        virtual int f() = 0, g() override = 0, h();
     
        // OK: destructor can be pure too
        ~A() = 0;
     
        // Error: pure-specifier on a function definition
        virtual int b() = 0 {}
    };

An _abstract class_ is a class that either defines or inherits at least one function for which [the final overrider](virtual.html "cpp/language/virtual") is _pure virtual_. 

### Explanation

Abstract classes are used to represent general concepts (for example, Shape, Animal), which can be used as base classes for concrete classes (for example, Circle, Dog). 

No objects of an abstract class can be created (except for base subobjects of a class derived from it) and no non-static data members whose type is an abstract class can be declared. 

Abstract types cannot be used as parameter types, as function return types, or as the type of an explicit conversion (note this is checked at the point of definition and function call, since at the point of function declaration parameter and return type may be incomplete). 

Pointers and references to an abstract class can be declared. 

Run this code
    
    
    struct Abstract
    {
        virtual void f() = 0;  // pure virtual
    }; // "Abstract" is abstract
     
    struct Concrete : Abstract
    {
        void f() override {}   // non-pure virtual
        virtual void g();      // non-pure virtual
    }; // "Concrete" is non-abstract
     
    struct Abstract2 : Concrete
    {
        void g() override = 0; // pure virtual overrider
    }; // "Abstract2" is abstract
     
    int main()
    {
        // Abstract a;   // Error: abstract class
        Concrete b;      // OK
        Abstract& a = b; // OK to reference abstract base
        a.f();           // virtual dispatch to Concrete::f()
        // Abstract2 a2; // Error: abstract class (final overrider of g() is pure)
    }

The definition of a pure virtual function may be provided (and must be provided if the pure virtual is the [destructor](destructor.html "cpp/language/destructor")): the member functions of the derived class are free to call the abstract base's pure virtual function using qualified function id. This definition must be provided outside of the class body (the syntax of a function declaration doesn't allow both the pure specifier `**= 0**` and a function body). 

Making a virtual call to a pure virtual function from a constructor or the destructor of the abstract class is undefined behavior (regardless of whether it has a definition or not). 
    
    
    struct Abstract
    {
        virtual void f() = 0; // pure virtual
        virtual void g() {}   // non-pure virtual
     
        ~Abstract()
        {
            g();           // OK: calls Abstract::g()
            // f();        // undefined behavior
            Abstract::f(); // OK: non-virtual call
        }
    };
     
    // definition of the pure virtual function
    void Abstract::f()
    {
        [std::cout](../io/cout.html) << "A::f()\n";
    }
     
    struct Concrete : Abstract
    {
        void f() override
        {
            Abstract::f(); // OK: calls pure virtual function
        }
     
        void g() override {}
     
        ~Concrete()
        {
            g(); // OK: calls Concrete::g()
            f(); // OK: calls Concrete::f()
        }
    };

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 390](https://cplusplus.github.io/CWG/issues/390.html) | C++98  | an undefined pure virtual destructor might be called  | a definition is required in this case   
[CWG 2153](https://cplusplus.github.io/CWG/issues/2153.html) | C++98  | pure-specifier could appear in friend declarations  | prohibited   
  
### See also

  * [`virtual`](virtual.html "cpp/language/virtual")


