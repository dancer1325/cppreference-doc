* Classes
  * == user-defined types
  * defined -- by -- class-specifier
  * appears | [`decl-specifier-seq`](declarations.md) 

## Contents

  * [1 Syntax](class.html#Syntax)
  * [2 Forward declaration](class.html#Forward_declaration)
  * [3 Member specification](class.html#Member_specification)
  * [4 Local classes](class.html#Local_classes)
  * [5 Keywords](class.html#Keywords)
  * [6 Defect reports](class.html#Defect_reports)
  * [7 See also](class.html#See_also)
  
### Syntax

The class specifier has the following syntax:   

class-key attr ﻿(optional) class-head-name class-property-specs ﻿(optional) base-clause ﻿(optional)  
`**{**` member-specification `**}**` |  (1)  |   
class-key attr ﻿(optional) base-clause ﻿(optional)  
`**{**` member-specification `**}**` |  (2)  |   
  
1) Named class definition

2) Unnamed class definition

class-key |  \-  |  one of [`class`](../keyword/class.html "cpp/keyword/class"), [`struct`](../keyword/struct.html "cpp/keyword/struct") and [`union`](../keyword/union.html "cpp/keyword/union"). The keywords class and struct are identical except for the default [member access](access.html "cpp/language/access") and the default [base class access](derived_class.html "cpp/language/derived class"). If it is union, the declaration introduces a [union type](union.html "cpp/language/union").   
---|---|---  
attr |  \-  |  (since C++11) any number of [attributes](attributes.html "cpp/language/attributes"), may include [`alignas`](alignas.html "cpp/language/alignas") specifier   
class-head-name |  \-  |  the name of the class that's being defined, optionally [qualified](name.html#Qualified_identifiers "cpp/language/identifiers")  
class-property-specs |  \-  |  A list of the following specifiers, each specifier is allowed at most once in each sequence.  | Specifier  | Effect   
---|---  
final  
(since C++11) | Specifies that the class [cannot be derived](final.html "cpp/language/final")  
trivially_relocatable_if_eligible   
(since C++26) | Marks the class to be trivially relocatable if eligible   
replaceable_if_eligible   
(since C++26) | Marks the class to be replaceable if eligible   
base-clause |  \-  |  list of one or more base classes and the model of inheritance used for each (see [derived class](derived_class.html "cpp/language/derived class"))   
member-specification |  \-  |  list of access specifiers, member object and member function declarations and definitions ([see below](class.html#Member_specification))   
  
### Forward declaration

`class-key attr identifier ;`   

* == declare the class WITHOUT define  
  * [declaration](declarations.md)
    * != [definition](definition.md)
  * ⚠️TILL appears the definition,
    * class name has [incomplete type](incomplete_type.md) ⚠️
      * -> classes refer to each other 
    
    

* TODO: 
and if a particular source file only uses pointers and references to the class,
this makes it possible to reduce #include dependencies: 
    
    
    // In MyStruct.h
    #include <iosfwd> // contains forward declaration of std::ostream
     
    struct MyStruct
    {
        int value;
        friend [std::ostream](../io/basic_ostream.html)& operator<<([std::ostream](../io/basic_ostream.html)& os, const S& s);
        // definition provided in MyStruct.cpp file which uses #include <ostream>
    };

If forward declaration appears in local scope, it _hides_ previously declared class, variable, function, and all other declarations of the same name that may appear in enclosing scopes: 
    
    
    struct s { int a; };
    struct s; // does nothing (s already defined in this scope)
     
    void g()
    {
        struct s; // forward declaration of a new, local struct "s"
                  // this hides global struct s until the end of this block
     
        s* p; // pointer to local struct s
     
        struct s { char* p; }; // definitions of the local struct s
    }

Note that a new class name may also be introduced by an [elaborated type specifier](elaborated_type_specifier.html "cpp/language/elaborated type specifier") which appears as part of another declaration, but only if [name lookup](lookup.html "cpp/language/lookup") can't find a previously declared class with the same name. 
    
    
    class U;
     
    namespace ns
    {
        class Y f(class T p); // declares function ns::f and declares ns::T and ns::Y
     
        class U f(); // U refers to ::U
     
        // can use pointers and references to T and Y
        Y* p;
        T* q;
    }

### Member specification

The member specification, or the _body_ of a class definition, is a brace-enclosed sequence of any number of the following: 

1) Member declarations of the form   
---  
attr ﻿(optional) decl-specifier-seq ﻿(optional) member-declarator-list ﻿(optional) `**;**` |  |   
attr |  \-  |  (since C++11) any number of [attributes](attributes.html "cpp/language/attributes")  
---|---|---  
decl-specifier-seq |  \-  |  sequence of [specifiers](declarations.html#Specifiers "cpp/language/declarations"). It is only optional in the declarations of constructors, destructors, and user-defined type [conversion functions](cast_operator.html "cpp/language/cast operator")  
member-declarator-list |  \-  |  similar to an [init-declarator-list](declarations.html "cpp/language/declarations"), but additionally allows [bit-field declaration](bit_field.html "cpp/language/bit field"), [pure-specifier](abstract_class.html "cpp/language/abstract class"), and virt-specifier (`[override](override.html "cpp/language/override")` or `[final](final.html "cpp/language/final")`)(since C++11), and does not allow [direct-non-list-initialization syntax](direct_initialization.html "cpp/language/direct initialization").   
  
This declaration may declare [static](static.html "cpp/language/static") and non-static [data members](data_members.html "cpp/language/data members") and [member functions](member_functions.html "cpp/language/member functions"), member [typedefs](typedef.html "cpp/language/typedef"), member [enumerations](enum.html "cpp/language/enum"), and [nested classes](nested_classes.html "cpp/language/nested classes"). It may also be a [friend declaration](friend.html "cpp/language/friend"). 
    
    
    class S
    {
        int d1;             // non-static data member
        int a[10] = {1, 2}; // non-static data member with initializer (C++11)
     
        static const int d2 = 1; // static data member with initializer
     
        virtual void f1(int) = 0; // pure virtual member function
     
        [std::string](../string/basic_string.html) d3, *d4, f2(int); // two data members and a member function
     
        enum { NORTH, SOUTH, EAST, WEST };
     
        struct NestedS
        {
            [std::string](../string/basic_string.html) s;
        } d5, *d6;
     
        typedef NestedS value_type, *pointer_type;
    };

2) Function definitions, which both declare and define [member functions](member_functions.html "cpp/language/member functions") or [friend functions](friend.html "cpp/language/friend"). A semicolon after a member function definition is optional. All functions that are defined inside a class body are automatically [inline](inline.html "cpp/language/inline"), unless they are attached to a [named module](modules.html "cpp/language/modules")(since C++20). 
    
    
    class M
    {
        [std::size_t](../types/size_t.html) C;
        [std::vector](../container/vector.html)<int> data;
    public:
        M([std::size_t](../types/size_t.html) R, [std::size_t](../types/size_t.html) C) : C(C), data(R*C) {} // constructor definition
     
        int operator()([std::size_t](../types/size_t.html) r, [std::size_t](../types/size_t.html) c) const // member function definition
        {
            return data[r * C + c];
        }
     
        int& operator()([std::size_t](../types/size_t.html) r, [std::size_t](../types/size_t.html) c) // another member function definition
        {
            return data[r * C + c];
        }
    };

3) [Access specifiers](access.html "cpp/language/access") `public:`, `protected:`, and `private:`
    
    
    class S
    {
    public:
        S();          // public constructor
        S(const S&);  // public copy constructor
        virtual ~S(); // public virtual destructor
    private:
        int* ptr; // private data member
    };

4) [Using-declarations](using_declaration.html "cpp/language/using declaration"): 
    
    
    class Base
    {
    protected:
        int d;
    };
     
    class Derived : public Base
    {
    public:
        using Base::d;    // make Base's protected member d a public member of Derived
        using Base::Base; // inherit all bases' constructors (C++11)
    };

5) [`static_assert`](static_assert.html "cpp/language/static assert") declarations: 
    
    
    template<typename T>
    struct Foo
    {
        static_assert([std::is_floating_point](../types/is_floating_point.html)<T>::value, "Foo<T>: T must be floating point");
    };

6) [member template declarations](member_template.html "cpp/language/member template"): 
    
    
    struct S
    {
        template<typename T>
        void f(T&& n);
     
        template<class CharT>
        struct NestedS
        {
            [std::basic_string](../string/basic_string.html)<CharT> s;
        };
    };

7) [alias declarations](type_alias.html "cpp/language/type alias"): 
    
    
    template<typename T>
    struct identity
    {
        using type = T;
    };

| (since C++11)  
---|---  
8) [deduction guides](deduction_guide.html "cpp/language/deduction guide") of member class templates: 
    
    
    struct S
    {
        template<class CharT>
        struct NestedS
        {
            [std::basic_string](../string/basic_string.html)<CharT> s;
        };
     
        template<class CharT>
        NestedS([std::basic_string](../string/basic_string.html)<CharT>) -> NestedS<CharT>;
    };

| (since C++17)  
---|---  
9) [Using-enum-declarations](enum.html#Using-enum-declaration "cpp/language/enum"): 
    
    
    enum class color { red, orange, yellow };
     
    struct highlight
    {
        using enum color;
    };

| (since C++20)  
---|---  
  
### Local classes

A class declaration can appear inside the body of a function, in which case it defines a _local class_. The name of such a class only exists within the function scope, and is not accessible outside. 

  * Members of a local class can only be declared in the definition of that class, except that members that are [nested classes](nested_classes.html "cpp/language/nested types") can also be declared in the nearest enclosing [block scope](scope.html#Block_scope "cpp/language/scope") of that class. 
  * A class nested within a local class is also a local class. 
  * A local class cannot have static data members. 
  * Member functions of a local class have no linkage. 
  * Member functions of a local class have to be defined entirely inside the class body. 
  * Local classes other than [closure types](lambda.html "cpp/language/lambda")(since C++14) cannot have member templates. 
  * Local classes cannot have [friend templates](friend.html#Template_friends "cpp/language/friend"). 
  * Local classes cannot define [friend functions](friend.html "cpp/language/friend") inside the class definition. 
  * A local class inside a function (including member function) can access the same names that the enclosing function can access. 



  * Local classes could not be used as template arguments. 

| (until C++11)  
---|---  
  
Run this code
    
    
    #include <algorithm>
    #include <iostream>
    #include <vector>
     
    int main()
    {
        [std::vector](../container/vector.html)<int> v{1, 2, 3};
     
        struct Local
        {
            bool operator()(int n, int m)
            {
                return n > m;
            }
        };
     
        [std::sort](../algorithm/sort.html)(v.begin(), v.end(), Local()); // since C++11
     
        for (int n : v)
            [std::cout](../io/cout.html) << n << ' ';
        [std::cout](../io/cout.html) << '\n';
    }

Output: 
    
    
    3 2 1

### Keywords

* [`class`](../keyword/class.md)
* [`struct`](../keyword/struct.md)
* [`union`](../keyword/union.md)

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 1693](https://cplusplus.github.io/CWG/issues/1693.html) | C++98  | member declarations could not be empty  | empty declaration allowed   
[CWG 1930](https://cplusplus.github.io/CWG/issues/1930.html) | C++98  | member-declarator-list could be empty when decl-specifier-seq  
contains a storage class specifier or cv qualifier  | the list must not be empty   
[CWG 2890](https://cplusplus.github.io/CWG/issues/2890.html) | C++98  | it was unclear where the members of nested classes can be declared  | made clear   

### See also

* [C's `struct` declaration](../../c/language/struct.md)
