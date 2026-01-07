* _qualified_ name
  * := 💡name / appears | right hand side of the scope resolution operator (`::`)💡 
    * 👀may refer to👀
      * class member 
        * _Examples:_ static and non-static functions, types, templates, etc 
      * namespace member 
        * EVEN another namespace
      * enumerator

* [qualified identifiers](name.md#qualified-identifiers)

* TODO: If there is nothing on the left hand side of the `**::**`, 
the lookup considers only declarations in [the global namespace scope](qualified_lookup.html#Namespace_members)
This makes it possible to refer to such names even if they were hidden by a local declaration: 
    
    
    #include <iostream>
     
    namespace M {
        const char* fail = "fail\n";
    }
     
    using M::fail;
     
    namespace N {
        const char* ok = "ok\n";
    }
     
    using namespace N;
     
    int main()
    {
        struct std {};
     
        [std::cout](../io/cout.html) << ::fail; // Error: unqualified lookup for 'std' finds the struct
        ::[std::cout](../io/cout.html) << ::ok; // OK: ::std finds the namespace std
    }

Before name lookup can be performed for the name on the right hand side of `**::**`, lookup must be completed for the name on its left hand side (unless a [decltype](decltype.html "cpp/language/decltype") expression is used, or there is nothing on the left). This lookup, which may be qualified or unqualified, depending on whether there's another `**::**` to the left of that name, considers only namespaces, class types, enumerations, and templates whose specializations are types. If the name found on the left does not designate a namespace or a class, enumeration, or dependent type, the program is ill-formed: 
    
    
    struct A
    {
        static int n;
    };
     
    int main()
    {
        int A;
        A::n = 42; // OK: unqualified lookup of A to the left of :: ignores the variable
        A b;       // Error: unqualified lookup of A finds the variable A
    }
     
    template<int>
    struct B : A {};
     
    namespace N
    {
        template<int>
        void B();
     
        int f()
        {
            return B<0>::n; // Error: N::B<0> is not a type
        }
    }

When a qualified name is used as a [declarator](declarations.html "cpp/language/declarations"), then [unqualified lookup](unqualified_lookup.html "cpp/language/unqualified lookup") of the names used in the same declarator that follow that qualified name, but not the names that precede it, is performed in the scope of the member's class or namespace: 
    
    
    class X {};
     
    constexpr int number = 100;
     
    struct C
    {
        class X {};
        static const int number = 50;
        static X arr[number];
    };
     
    X C::arr[number], brr[number];    // Error: look up for X finds ::X, not C::X
    C::X C::arr[number], brr[number]; // OK: size of arr is 50, size of brr is 100

If `**::**` is followed by the character `**~**` that is in turn followed by an identifier (that is, it specifies a destructor or pseudo-destructor), that identifier is looked up in the same scope as the name on the left hand side of `**::**`
    
    
    struct C { typedef int I; };
     
    typedef int I1, I2;
     
    extern int *p, *q;
     
    struct A { ~A(); };
     
    typedef A AB;
     
    int main()
    {
        p->C::I::~I(); // The name I after ~ is looked up in the same scope as I before ::
                       // (that is, within the scope of C, so it finds C::I)
     
        q->I1::~I2();  // The name I2 is looked up in the same scope as I1
                       // (that is, from the current scope, so it finds ::I2)
     
        AB x;
        x.AB::~AB();   // The name AB after ~ is looked up in the same scope as AB before ::
                       // (that is, from the current scope, so it finds ::AB)
    }

| 

## Contents

  * [1 Enumerators](qualified_lookup.html#Enumerators)
  * [2 Class members](qualified_lookup.html#Class_members)
  * [3 Namespace members](qualified_lookup.html#Namespace_members)
  * [4 Defect reports](qualified_lookup.html#Defect_reports)
  * [5 See also](qualified_lookup.html#See_also)

  
####  Enumerators

If the lookup of the left-hand side name comes up with an [enumeration](enum.html "cpp/language/enum") (either scoped or unscoped), the lookup of the right-hand side must result in an enumerator that belongs that enumeration, otherwise the program is ill-formed. 

(since C++11)  
  
#### Class members

If the lookup of the left hand side name comes up with a class/struct or union name, the name on the right hand side of `**::**` is looked up in the scope of that class (and so may find a declaration of a member of that class or of its base), with the following exceptions: 

  * A destructor is looked up as described above (in the scope of the name to the left of ::). 
  * A conversion-type-id in a [user-defined conversion](cast_operator.html "cpp/language/cast operator") function name is first looked up in the scope of the class. If not found, the name is then looked up in the current scope. 
  * Names used in template arguments are looked up in the current scope (not in the scope of the template name). 
  * Names in [using-declarations](namespace.html "cpp/language/namespace") also consider class/enum names that are hidden by the name of a variable, data member, function, or enumerator declared in the same scope. 

| This section is incomplete  
Reason: micro-examples for the above   
---|---  
  
If the right hand side of `**::**` names the same class as the left hand side, the name designates the [constructor](initializer_list.html "cpp/language/constructor") of that class. Such qualified name can only be used in a declaration of a constructor and in the [using-declaration](using_declaration.html "cpp/language/using declaration") for an [inheriting constructor](using_declaration.html#Inheriting_constructors "cpp/language/using declaration"). In those lookups where function names are ignored (that is, when looking up a name on the left of `**::**`, when looking up a name in [elaborated type specifier](elaborated_type_specifier.html "cpp/language/elaborated type specifier"), or [base specifier](derived_class.html "cpp/language/derived class")), the same syntax resolves to the injected-class-name: 
    
    
    struct A { A(); };
     
    struct B : A { B(); };
     
    A::A() {} // A::A names a constructor, used in a declaration
    B::B() {} // B::B names a constructor, used in a declaration
     
    B::A ba;  // B::A names the type A (looked up in the scope of B)
    A::A a;   // Error: A::A does not name a type
     
    struct A::A a2; // OK: lookup in elaborated type specifier ignores functions
                    // so A::A simply names the class A as seen from within the scope of A
                    // (that is, the injected-class-name)

Qualified name lookup can be used to access a class member that is hidden by a nested declaration or by a derived class. A call to a qualified member function is never virtual: 
    
    
    struct B { virtual void foo(); };
     
    struct D : B { void foo() override; };
     
    int main()
    {
        D x;
        B& b = x;
     
        b.foo();    // Calls D::foo (virtual dispatch)
        b.B::foo(); // Calls B::foo (static dispatch)
    }

#### Namespace members

If the name on the left of `**::**` refers to a namespace or if there is nothing on the left of `**::**` (in which case it refers to the global namespace), the name that appears on the right hand side of `**::**` is looked up in the scope of that namespace, except that 

  * names used in template arguments are looked up in the current scope: 


    
    
    namespace N
    {
        template<typename T>
        struct foo {};
     
        struct X {};
    }
     
    N::foo<X> x; // Error: X is looked up as ::X, not as N::X

Qualified lookup within the scope of a [namespace](namespace.html "cpp/language/namespace") `N` first considers all declarations that are located in `N` and all declarations that are located in the [inline namespace members](namespace.html#Inline_namespaces "cpp/language/namespace") of `N` (and, transitively, in their inline namespace members). If there are no declarations in that set then it considers declarations in all namespaces named by [using-directives](namespace.html#Using-directives "cpp/language/namespace") found in `N` and in all transitive inline namespace members of `N`. The rules are applied recursively: 
    
    
    int x;
     
    namespace Y
    {
        void f(float);
        void h(int);
    }
     
    namespace Z
    {
        void h(double);
    }
     
    namespace A
    {
        using namespace Y;
        void f(int);
        void g(int);
        int i;
    }
     
    namespace B
    {
        using namespace Z;
        void f(char);
        int i;
    }
     
    namespace AB
    {
        using namespace A;
        using namespace B;
        void g();
    }
     
    void h()
    {
        AB::g();  // AB is searched, AB::g found by lookup and is chosen AB::g(void)
                  // (A and B are not searched)
     
        AB::f(1); // First, AB is searched. There is no f
                  // Then, A, B are searched
                  // A::f, B::f found by lookup
                  // (but Y is not searched so Y::f is not considered)
                  // Overload resolution picks A::f(int)
     
        AB::x++;  // First, AB is searched. There is no x
                  // Then A, B are searched. There is no x
                  // Then Y and Z are searched. There is still no x: this is an error
     
        AB::i++;  // AB is searched. There is no i
                  // Then A, B are searched. A::i and B::i found by lookup: this is an error
     
        AB::h(16.8); // First, AB is searched. There is no h
                     // Then A, B are searched. There is no h
                     // Then Y and Z are searched
                     // Lookup finds Y::h and Z::h. Overload resolution picks Z::h(double)
    }

It is allowed for the same declaration to be found more than once: 
    
    
    namespace A { int a; }
     
    namespace B { using namespace A; }
     
    namespace D { using A::a; }
     
    namespace BD
    {
        using namespace B;
        using namespace D;
    }
     
    void g()
    {
        BD::a++; // OK: finds the same A::a through B and through D
    }

| This section is incomplete  
Reason: the rest of N4861 6.5.3.2[namespace.qual], try to shorten their examples   
---|---  
  
### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 215](https://cplusplus.github.io/CWG/issues/215.html) | C++98  | the name preceding `**::**` must be a class name or namespace  
name, so template parameters were not allowed there  | the name must designate a class,  
namespace or dependent type   
[CWG 318](https://cplusplus.github.io/CWG/issues/318.html) | C++98  | if the right hand side of `**::**` names the same class  
as the left hand side, the qualified name was always  
considered to name the constructor of that class  | only name the constructor  
when acceptable (e.g. not in  
an elaborated type specifier)   
  
### See also

  * [Unqualified name lookup](unqualified_lookup.html "cpp/language/unqualified lookup")
  * [Scope](scope.html "cpp/language/scope")
  * [Argument-dependent lookup](adl.html "cpp/language/adl")
  * [Template argument deduction](function_template.html "cpp/language/function template")
  * [Overload resolution](overload_resolution.html "cpp/language/overload resolution")


