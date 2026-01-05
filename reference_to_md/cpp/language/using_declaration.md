

  
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
**`using`-declarations**  
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
  


Introduces a name that is defined elsewhere into the declarative region where this using-declaration appears. See [using enum](enum.html#Using-enum-declaration "cpp/language/enum") and (since C++20)[using namespace](namespace.html#Using-directives "cpp/language/namespace") for other related declarations.   
  
---  
`**using**` `**typename**`(optional) nested-name-specifier unqualified-id `**;**` |  |  (until C++17)  
`**using**` declarator-list `**;**` |  |  (since C++17)  
`**typename**` |  \-  |  the keyword typename may be used as necessary to resolve [dependent names](dependent_name.html "cpp/language/dependent name"), when the using-declaration introduces a member type from a base class into a class template   
---|---|---  
nested-name-specifier |  \-  |  a sequence of names and scope resolution operators `::`, ending with a scope resolution operator. A single `::` refers to the global namespace.   
unqualified-id |  \-  |  an [id-expression](name.html "cpp/language/identifiers")  
declarator-list |  \-  |  comma-separated list of one or more declarators of the `**typename**`(optional) nested-name-specifier unqualified-id. Some or all of the declarators may be followed by an ellipsis ... to indicate [pack expansion](parameter_pack.html "cpp/language/parameter pack")  
  
## Contents

  * [1 Explanation](using_declaration.html#Explanation)
    * [1.1 In namespace and block scope](using_declaration.html#In_namespace_and_block_scope)
    * [1.2 In class definition](using_declaration.html#In_class_definition)
    * [1.3 Inheriting constructors](using_declaration.html#Inheriting_constructors)
    * [1.4 Introducing scoped enumerators](using_declaration.html#Introducing_scoped_enumerators)
  * [2 Notes](using_declaration.html#Notes)
  * [3 Keywords](using_declaration.html#Keywords)
  * [4 Defect reports](using_declaration.html#Defect_reports)
  * [5 References](using_declaration.html#References)

  
---  
  
### Explanation

Using-declarations can be used to introduce namespace members into other namespaces and block scopes, or to introduce base class members into derived class definitions, or to introduce [enumerators](enum.html "cpp/language/enum") into namespaces, block, and class scopes(since C++20). 

A using-declaration with more than one using-declarator is equivalent to a corresponding sequence of using-declarations with one using-declarator.  | (since C++17)  
---|---  
  
#### In namespace and block scope

[Using-declarations](namespace.html#Using-declarations "cpp/language/namespace") introduce a member of another namespace into the current namespace or block scope. 
    
    
    #include <iostream>
    #include <string>
     
    using [std::string](../string/basic_string.html);
     
    int main()
    {
        string str = "Example";
        using [std::cout](../io/cout.html);
        cout << str;
    }

See [namespace](namespace.html "cpp/language/namespace") for details. 

#### In class definition

Using-declaration introduces a member of a base class into the derived class definition, such as to expose a protected member of base as public member of derived. In this case, nested-name-specifier must name a base class of the one being defined. If the name is the name of an overloaded member function of the base class, all base class member functions with that name are introduced. If the derived class already has a member with the same name, parameter list, and qualifications, the derived class member hides or overrides (doesn't conflict with) the member that is introduced from the base class. 

Run this code
    
    
    #include <iostream>
     
    struct B
    {
        virtual void f(int) { [std::cout](../io/cout.html) << "B::f\n"; }
        void g(char)        { [std::cout](../io/cout.html) << "B::g\n"; }
        void h(int)         { [std::cout](../io/cout.html) << "B::h\n"; }
    protected:
        int m; // B::m is protected
        typedef int value_type;
    };
     
    struct D : B
    {
        using B::m;          // D::m is public
        using B::value_type; // D::value_type is public
     
        using B::f;
        void f(int) override { [std::cout](../io/cout.html) << "D::f\n"; } // D::f(int) overrides B::f(int)
     
        using B::g;
        void g(int) { [std::cout](../io/cout.html) << "D::g\n"; } // both g(int) and g(char) are visible
     
        using B::h;
        void h(int) { [std::cout](../io/cout.html) << "D::h\n"; } // D::h(int) hides B::h(int)
    };
     
    int main()
    {
        D d;
        B& b = d;
     
    //  b.m = 2;  // Error: B::m is protected
        d.m = 1;  // protected B::m is accessible as public D::m
     
        b.f(1);   // calls derived f()
        d.f(1);   // calls derived f()
        [std::cout](../io/cout.html) << "----------\n";
     
        d.g(1);   // calls derived g(int)
        d.g('a'); // calls base g(char), exposed via using B::g;
        [std::cout](../io/cout.html) << "----------\n";
     
        b.h(1);   // calls base h()
        d.h(1);   // calls derived h()
    }

Output: 
    
    
    D::f
    D::f
    ----------
    D::g
    B::g
    ----------
    B::h
    D::h

####  Inheriting constructors

If the _using-declaration_ refers to a constructor of a direct base of the class being defined (e.g. using Base::Base;), all constructors of that base (ignoring member access) are made visible to overload resolution when initializing the derived class. If overload resolution selects an inherited constructor, it is accessible if it would be accessible when used to construct an object of the corresponding base class: the accessibility of the using-declaration that introduced it is ignored. If overload resolution selects one of the inherited constructors when initializing an object of such derived class, then the `Base` subobject from which the constructor was inherited is initialized using the inherited constructor, and all other bases and members of `Derived` are initialized as if by the defaulted default constructor (default member initializers are used if provided, otherwise default initialization takes place). The entire initialization is treated as a single function call: initialization of the parameters of the inherited constructor is [sequenced before](eval_order.html "cpp/language/eval order") initialization of any base or member of the derived object. 
    
    
    struct B1 { B1(int, ...) {} };
    struct B2 { B2(double)   {} };
     
    int get();
     
    struct D1 : B1
    {
        using B1::B1; // inherits B1(int, ...)
        int x;
        int y = get();
    };
     
    void test()
    {
        D1 d(2, 3, 4); // OK: B1 is initialized by calling B1(2, 3, 4),
                       // then d.x is default-initialized (no initialization is performed),
                       // then d.y is initialized by calling get()
     
        D1 e;          // Error: D1 has no default constructor
    }
     
    struct D2 : B2
    {
        using B2::B2; // inherits B2(double)
        B1 b;
    };
     
    D2 f(1.0); // error: B1 has no default constructor
    
    
    struct W { W(int); };
     
    struct X : virtual W
    {
        using W::W; // inherits W(int)
        X() = delete;
    };
     
    struct Y : X
    {
        using X::X;
    };
     
    struct Z : Y, virtual W
    {
        using Y::Y;
    };
     
    Z z(0); // OK: initialization of Y does not invoke default constructor of X

If the `Base` base class subobject is not to be initialized as part of the `Derived` object (i.e., `Base` is a [virtual base class](derived_class.html#Virtual_base_classes "cpp/language/derived class") of `Derived`, and the `Derived` object is not the [most derived object](objects.html#Subobjects "cpp/language/object")), the invocation of the inherited constructor, including the evaluation of any arguments, is omitted: 
    
    
    struct V
    {
        V() = default;
        V(int);
    };
     
    struct Q { Q(); };
     
    struct A : virtual V, Q
    {
        using V::V;
        A() = delete;
    };
     
    int bar() { return 42; }
     
    struct B : A
    {
        B() : A(bar()) {} // OK
    };
     
    struct C : B {};
     
    void foo()
    {
        C c; // “bar” is not invoked, because the V subobject
             // is not initialized as part of B
             // (the V subobject is initialized as part of C,
             //  because “c” is the most derived object)
    }

If the constructor was inherited from multiple base class subobjects of type `Base`, the program is ill-formed, similar to multiply-inherited non-static member functions: 
    
    
    struct A { A(int); };
    struct B : A { using A::A; };
    struct C1 : B { using B::B; };
    struct C2 : B { using B::B; };
     
    struct D1 : C1, C2
    {
        using C1::C1;
        using C2::C2;
    };
    D1 d1(0); // ill-formed: constructor inherited from different B base subobjects
     
    struct V1 : virtual B { using B::B; };
    struct V2 : virtual B { using B::B; };
     
    struct D2 : V1, V2
    {
        using V1::V1;
        using V2::V2;
    };
    D2 d2(0); // OK: there is only one B subobject.
              // This initializes the virtual B base class,
              //   which initializes the A base class
              // then initializes the V1 and V2 base classes
              //   as if by a defaulted default constructor

As with using-declarations for any other non-static member functions, if an inherited constructor matches the signature of one of the constructors of `Derived`, it is hidden from lookup by the version found in `Derived`. If one of the inherited constructors of `Base` happens to have the signature that matches a copy/move constructor of the `Derived`, it does not prevent implicit generation of `Derived` copy/move constructor (which then hides the inherited version, similar to `using operator=`). 
    
    
    struct B1 { B1(int); };
    struct B2 { B2(int); };
     
    struct D2 : B1, B2
    {
        using B1::B1;
        using B2::B2;
     
        D2(int); // OK: D2::D2(int) hides both B1::B1(int) and B2::B2(int)
    };
    D2 d2(0);    // calls D2::D2(int)

Within a [templated class](templates.html "cpp/language/templates"), if a using-declaration refers to a [dependent name](dependent_name.html "cpp/language/dependent name"), it is considered to name a constructor if the nested-name-specifier has a terminal name that is the same as the unqualified-id. 
    
    
    template<class T>
    struct A : T
    {
        using T::T; // OK, inherits constructors of T
    };
     
    template<class T, class U>
    struct B : T, A<U>
    {
        using A<U>::A; // OK, inherits constructors of A<U>
        using T::A;    // does not inherit constructor of T
                       // even though T may be a specialization of A<>
    };

| (since C++11)  
---|---  
  
  


####  Introducing scoped enumerators

In addition to members of another namespace and members of base classes, using-declaration can also introduce enumerators of [enumerations](enum.html "cpp/language/enum") into namespace, block, and class scopes. A using-declaration can also be used with unscoped enumerators. 
    
    
    enum class button { up, down };
     
    struct S
    {
        using button::up;
        button b = up; // OK
    };
     
    using button::down;
    constexpr button non_up = down; // OK
     
    constexpr auto get_button(bool is_up)
    {
        using button::up, button::down;
        return is_up ? up : down; // OK
    }
     
    enum unscoped { val };
    using unscoped::val; // OK, though needless

| (since C++20)  
---|---  
  
### Notes

Only the name explicitly mentioned in the using-declaration is transferred into the declarative scope: in particular, enumerators are not transferred when the enumeration type name is using-declared. 

A using-declaration cannot refer to a namespace, to a scoped enumerator(until C++20), to a destructor of a base class or to a specialization of a member template for a user-defined conversion function. 

A using-declaration cannot name a member template specialization ([template-id](templates.html#template-id "cpp/language/templates") is not permitted by the grammar): 
    
    
    struct B
    {
        template<class T>
        void f();
    };
     
    struct D : B
    {
        using B::f;      // OK: names a template
    //  using B::f<int>; // Error: names a template specialization
     
        void g() { f<int>(); }
    };

A using-declaration also can't be used to introduce the name of a dependent member template as a _template-name_ (the `template` disambiguator for [dependent names](dependent_name.html "cpp/language/dependent name") is not permitted). 
    
    
    template<class X>
    struct B
    {
        template<class T>
        void f(T);
    };
     
    template<class Y>
    struct D : B<Y>
    {
    //  using B<Y>::template f; // Error: disambiguator not allowed
        using B<Y>::f;          // compiles, but f is not a template-name
     
        void g()
        {
    //      f<int>(0);          // Error: f is not known to be a template name,
                                // so < does not start a template argument list
            f(0);               // OK
        }   
    };

If a using-declaration brings the base class assignment operator into derived class, whose signature happens to match the derived class's copy-assignment or move-assignment operator, that operator is hidden by the implicitly-declared copy/move assignment operator of the derived class. Same applies to a using-declaration that inherits a base class constructor that happens to match the derived class copy/move constructor(since C++11). 

The semantics of inheriting constructors were retroactively changed by a [defect report against C++11](using_declaration.html#Defect_reports). Previously, an inheriting constructor declaration caused a set of synthesized constructor declarations to be injected into the derived class, which caused redundant argument copies/moves, had problematic interactions with some forms of SFINAE, and in some cases can be unimplementable on major ABIs. Older compilers may still implement the previous semantics.  | Old inheriting constructor semantics  
---  
If the _using-declaration_ refers to a constructor of a direct base of the class being defined (e.g. using Base::Base;), constructors of that base class are inherited, according to the following rules:  1) A set of _candidate inheriting constructors_ is composed of  a) All non-template constructors of the base class (after omitting ellipsis parameters, if any)(since C++14) b) For each constructor with default arguments or the ellipsis parameter, all constructor signatures that are formed by dropping the ellipsis and omitting default arguments from the ends of argument lists one by one c) All constructor templates of the base class (after omitting ellipsis parameters, if any)(since C++14) d) For each constructor template with default arguments or the ellipsis, all constructor signatures that are formed by dropping the ellipsis and omitting default arguments from the ends of argument lists one by one 2) All candidate inherited constructors that aren't the default constructor or the copy/move constructor and whose signatures do not match user-defined constructors in the derived class, are implicitly declared in the derived class. The default parameters are not inherited: 
    
    
    struct B1
    {
        B1(int);
    };
     
    struct D1 : B1
    {
        using B1::B1;
     
        // The set of candidate inherited constructors is 
        // 1. B1(const B1&)
        // 2. B1(B1&&)
        // 3. B1(int)
     
        // D1 has the following constructors:
        // 1. D1() = delete
        // 2. D1(const D1&) 
        // 3. D1(D1&&)
        // 4. D1(int) <- inherited
    };
     
    struct B2
    {
        B2(int = 13, int = 42);
    };
     
    struct D2 : B2
    {
        using B2::B2;
     
        // The set of candidate inherited constructors is
        // 1. B2(const B2&)
        // 2. B2(B2&&)
        // 3. B2(int = 13, int = 42)
        // 4. B2(int = 13)
        // 5. B2()
     
        // D2 has the following constructors:
        // 1. D2()
        // 2. D2(const D2&)
        // 3. D2(D2&&)
        // 4. D2(int, int) <- inherited
        // 5. D2(int) <- inherited
    };

The inherited constructors are equivalent to user-defined constructors with an empty body and with a [member initializer list](initializer_list.html "cpp/language/initializer list") consisting of a single nested-name-specifier, which forwards all of its arguments to the base class constructor. It has the same [access](access.html "cpp/language/access") as the corresponding base constructor. It is `constexpr` if the user-defined constructor would have satisfied `constexpr` constructor requirements. It is deleted if the corresponding base constructor is deleted or if a defaulted default constructor would be deleted (except that the construction of the base whose constructor is being inherited doesn't count). An inheriting constructor cannot be explicitly instantiated or explicitly specialized. If two using-declarations inherit the constructor with the same signature (from two direct base classes), the program is ill-formed. An inheriting constructor template should not be [explicitly instantiated](function_template.html#Explicit_instantiation "cpp/language/function template") or [explicitly specialized](template_specialization.html "cpp/language/template specialization").   
  
(since C++11)  
  
[Pack expansions](parameter_pack.html "cpp/language/parameter pack") in using-declarations make it possible to form a class that exposes overloaded members of variadic bases without recursion: 
    
    
    template<typename... Ts>
    struct Overloader : Ts...
    {
        using Ts::operator()...; // exposes operator() from every base
    };
     
    template<typename... T>
    Overloader(T...) -> Overloader<T...>; // C++17 deduction guide, not needed in C++20
     
    int main()
    {
        auto o = Overloader{ [] (auto const& a) {[std::cout](../io/cout.html) << a;},
                             [] (float f) {[std::cout](../io/cout.html) << [std::setprecision](../io/manip/setprecision.html)(3) << f;} };
    }

| (since C++17)  
---|---  
Feature-test macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_inheriting_constructors`](../experimental/feature_test.html#cpp_inheriting_constructors "cpp/feature test") | [`200802L`](../compiler_support/11.html#cpp_inheriting_constructors_200802L "cpp/compiler support/11") | (C++11) | [Inheriting constructors](using_declaration.html#Inheriting_constructors)  
[`201511L`](../compiler_support/17.html#cpp_inheriting_constructors_201511L "cpp/compiler support/17") | (C++17)  
(DR11) | Rewording inheriting constructors   
[`__cpp_variadic_using`](../experimental/feature_test.html#cpp_variadic_using "cpp/feature test") | [`201611L`](../compiler_support/17.html#cpp_variadic_using_201611L "cpp/compiler support/17") | (C++17) | [Pack expansions](parameter_pack.html "cpp/language/parameter pack") in `using`-declarations   
  
### Keywords

[`using`](../keyword/using.html "cpp/keyword/using")

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 258](https://cplusplus.github.io/CWG/issues/258.html) | C++98  | a non-const member function of a derived class can  
override and/or hide a const member function of its base  | overriding and hiding also require  
cv-qualifications to be the same   
[CWG 1738](https://cplusplus.github.io/CWG/issues/1738.html) | C++11  | it was not clear whether it is permitted to  
explicitly instantiate or explicitly specialize  
specializations of inheriting constructor templates  | prohibited   
[CWG 2504](https://cplusplus.github.io/CWG/issues/2504.html) | C++11  | the behavior of inheriting constructors  
from virtual base classes was unclear  | made clear   
[P0136R1](https://wg21.link/P0136R1) | C++11  | inheriting constructor declaration injects  
additional constructors in the derived class  | causes base class constructors  
to be found by name lookup   
  
### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 9.9 The `using` declaration [namespace.udecl] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 9.9 The `using` declaration [namespace.udecl] 



  * C++17 standard (ISO/IEC 14882:2017): 



    

  * 10.3.3 The `using` declaration [namespace.udecl] 



  * C++14 standard (ISO/IEC 14882:2014): 



    

  * 7.3.3 The `using` declaration [namespace.udecl] 



  * C++11 standard (ISO/IEC 14882:2011): 



    

  * 7.3.3 The `using` declaration [namespace.udecl] 



  * C++03 standard (ISO/IEC 14882:2003): 



    

  * 7.3.3 The `using` declaration [namespace.udecl] 



  * C++98 standard (ISO/IEC 14882:1998): 



    

  * 7.3.3 The `using` declaration [namespace.udecl] 


  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
