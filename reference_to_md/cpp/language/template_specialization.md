* allows
  * customizing the template code / given set of template argument 

## Contents

  * [1 Syntax](template_specialization.html#Syntax)
  * [2 In detail](template_specialization.html#In_detail)
  * [3 Explicit specializations of function templates](template_specialization.html#Explicit_specializations_of_function_templates)
  * [4 Members of specializations](template_specialization.html#Members_of_specializations)
  * [5 Defect reports](template_specialization.html#Defect_reports)
  * [6 See also](template_specialization.html#See_also)
  
### Syntax  

`**template <>**` declaration |  |   
  
* ALLOWED |
  1. [function template](function_template.md)
  2. [class template](class_template.md)
  3. [variable template](variable_template.md)
     * requirements
       * | C++14
  4. class template's
     * [ member function](member_functions.md)
     * [static data member](static.md)
     * [member class](nested_classes.md)
     * member [enumeration](enum.md)
  5. class OR class template
     * [member class template](member_template.html "cpp/language/member template") 
     * [member function template](member_template.html#Member_function_templates "cpp/language/member template")
     * [member variable template](member_template.html#Member_variable_templates "cpp/language/member template")
       * requirements
       * | C++14


### In detail

* Explicit specialization may be declared in any scope where its primary template may be defined (which may be different from the scope where the primary template is defined; such as with out-of-class specialization of a [member template](member_template.html "cpp/language/member template"))
* Explicit specialization has to appear after the non-specialized template declaration. 
    
    
    namespace N
    {
        template<class T> // primary template
        class X { /*...*/ };
        template<>        // specialization in same namespace
        class X<int> { /*...*/ };
     
        template<class T> // primary template
        class Y { /*...*/ };
        template<>        // forward declare specialization for double
        class Y<double>;
    }
     
    template<> // OK: specialization in same namespace
    class N::Y<double> { /*...*/ };

Specialization must be declared before the first use that would cause implicit instantiation, in every translation unit where such use occurs: 
    
    
    class String {};
     
    template<class T>
    class Array { /*...*/ };
     
    template<class T> // primary template
    void sort(Array<T>& v) { /*...*/ }
     
    void f(Array<String>& v)
    {
        sort(v); // implicitly instantiates sort(Array<String>&), 
    }            // using the primary template for sort()
     
    template<> // ERROR: explicit specialization of sort(Array<String>)
    void sort<String>(Array<String>& v); // after implicit instantiation

A template specialization that was declared but not defined can be used just like any other [incomplete type](incomplete_type.html "cpp/language/incomplete type") (e.g. pointers and references to it may be used): 
    
    
    template<class T> // primary template
    class X;
    template<>        // specialization (declared, not defined)
    class X<int>;
     
    X<int>* p; // OK: pointer to incomplete type
    X<int> x;  // error: object of incomplete type

Whether an explicit specialization of a function or variable(since C++14) template is [`inline`](inline.html "cpp/language/inline")/[`constexpr`](constexpr.html "cpp/language/constexpr")(since C++11)/[`constinit`](constinit.html "cpp/language/constinit")/[`consteval`](consteval.html "cpp/language/consteval")(since C++20) is determined by the explicit specialization itself, regardless of whether the primary template is declared with that specifier. Similarly, [attributes](attributes.html "cpp/language/attributes") appearing in the declaration of a template have no effect on an explicit specialization of that template:(since C++11)
    
    
    template<class T>
    void f(T) { /* ... */ }
    template<>
    inline void f<>(int) { /* ... */ } // OK, inline
     
    template<class T>
    inline T g(T) { /* ... */ }
    template<>
    int g<>(int) { /* ... */ }         // OK, not inline
     
    template<typename>
    [[noreturn]] void h([[maybe_unused]] int i);
    template<> void h<int>(int i)
    {
        // [[noreturn]] has no effect, but [[maybe_unused]] has
    }

### Explicit specializations of function templates

When specializing a function template, its template arguments can be omitted if [template argument deduction](template_argument_deduction.html "cpp/language/template argument deduction") can provide them from the function arguments: 
    
    
    template<class T>
    class Array { /*...*/ };
     
    template<class T> // primary template
    void sort(Array<T>& v);
    template<>        // specialization for T = int
    void sort(Array<int>&);
     
    // no need to write
    // template<> void sort<int>(Array<int>&);

A function with the same name and the same argument list as a specialization is not a specialization (see template overloading in [function template](function_template.html "cpp/language/function template")). 

[Default function arguments](default_arguments.html "cpp/language/default arguments") cannot be specified in explicit specializations of function templates, member function templates, and member functions of class templates when the class is implicitly instantiated. 

An explicit specialization cannot be a [friend declaration](friend.html "cpp/language/friend"). 

| This section is incomplete  
Reason: review the exception specification requirement across different C++ versions   
---|---  
  
### Members of specializations

When defining a member of an explicitly specialized class template outside the body of the class, the syntax template<> is not used, except if it's a member of an explicitly specialized member class template, which is specialized as a class template, because otherwise, the syntax would require such definition to begin with template<parameters> required by the nested template 
    
    
    template<typename T>
    struct A
    {
        struct B {};      // member class 
     
        template<class U> // member class template
        struct C {};
    };
     
    template<> // specialization
    struct A<int> 
    {
        void f(int); // member function of a specialization
    };
    // template<> not used for a member of a specialization
    void A<int>::f(int) { /* ... */ }
     
    template<> // specialization of a member class
    struct A<char>::B
    {
        void f();
    };
    // template<> not used for a member of a specialized member class either
    void A<char>::B::f() { /* ... */ }
     
    template<> // specialization of a member class template
    template<class U>
    struct A<char>::C
    {
        void f();
    };
     
    // template<> is used when defining a member of an explicitly
    // specialized member class template specialized as a class template
    template<>
    template<class U>
    void A<char>::C<U>::f() { /* ... */ }

  
An explicit specialization of a static data member of a template is a definition if the declaration includes an initializer; otherwise, it is a declaration. These definitions must use braces for default initialization: 
    
    
    template<>
    X Q<int>::x;    // declaration of a static member
    template<>
    X Q<int>::x (); // error: function declaration
    template<>
    X Q<int>::x {}; // definition of a default-initialized static member

A member or a member template of a class template may be explicitly specialized for a given implicit instantiation of the class template, even if the member or member template is defined in the class template definition. 
    
    
    template<typename T>
    struct A
    {
        void f(T);         // member, declared in the primary template
     
        void h(T) {}       // member, defined in the primary template
     
        template<class X1> // member template
        void g1(T, X1);
     
        template<class X2> // member template
        void g2(T, X2);
    };
     
    // specialization of a member
    template<>
    void A<int>::f(int);
     
    // member specialization OK even if defined in-class
    template<>
    void A<int>::h(int) {}
     
    // out of class member template definition
    template<class T>
    template<class X1>
    void A<T>::g1(T, X1) {}
     
    // member template specialization
    template<>
    template<class X1>
    void A<int>::g1(int, X1);
     
    // member template specialization
    template<>
    template<>
    void A<int>::g2<char>(int, char); // for X2 = char
     
    // same, using template argument deduction (X1 = char)
    template<> 
    template<>
    void A<int>::g1(int, char);

A member or a member template may be nested within many enclosing class templates. In an explicit specialization for such a member, there's a template<> for every enclosing class template that is explicitly specialized. 
    
    
    template<class T1>
    struct A
    {
        template<class T2>
        struct B
        {
            template<class T3>
            void mf();
        };
    };
     
    template<>
    struct A<int>;
     
    template<>
    template<>
    struct A<char>::B<double>;
     
    template<>
    template<>
    template<>
    void A<char>::B<char>::mf<double>();

In such a nested declaration, some of the levels may remain unspecialized (except that it can't specialize a class member template in namespace scope if its enclosing class is unspecialized). For each of those levels, the declaration needs template<arguments>, because such specializations are themselves templates: 
    
    
    template<class T1>
    class A
    {
        template<class T2>
        class B
        {
            template<class T3> // member template
            void mf1(T3);
     
            void mf2();        // non-template member
        };
    };
     
    // specialization
    template<>        // for the specialized A
    template<class X> // for the unspecialized B
    class A<int>::B
    {
        template<class T>
        void mf1(T);
    };
     
    // specialization
    template<>        // for the specialized A
    template<>        // for the specialized B
    template<class T> // for the unspecialized mf1
    void A<int>::B<double>::mf1(T t) {}
     
    // ERROR: B<double> is specialized and is a member template, so its enclosing A
    // must be specialized also
    template<class Y>
    template<>
    void A<Y>::B<double>::mf2() {}

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 531](https://cplusplus.github.io/CWG/issues/531.html) | C++98  | the syntax of defining members of explicit  
specializations in namespace scope was not specified  | specified   
[CWG 727](https://cplusplus.github.io/CWG/issues/727.html) | C++98  | partial and full specializations not allowed in  
class scope  | allowed in any scope   
[CWG 730](https://cplusplus.github.io/CWG/issues/730.html) | C++98  | member templates of non-template  
classes could not be fully specialized  | allowed   
[CWG 2478](https://cplusplus.github.io/CWG/issues/2478.html) | C++20  | it was unclear whether the constinit and consteval of the  
primary template are carried over into its explicit specializations  | not carried over   
[CWG 2604](https://cplusplus.github.io/CWG/issues/2604.html) | C++11  | it was unclear whether the attributes of the primary  
template are carried over into its explicit specializations  | not carried over   
  
### See also

  * [templates](templates.html "cpp/language/templates")
  * [class template](class_template.html "cpp/language/class template")
  * [function template](function_template.html "cpp/language/function template")
  * [partial specialization](partial_specialization.html "cpp/language/partial specialization")


