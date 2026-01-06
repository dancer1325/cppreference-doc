* EACH [template](templates.md)
  * 👀is parameterized -- by -- >=1 template parameters👀 

* template parameter categories
  * constant template parameter 
  * type template parameter 
  * template template parameter 

## Contents

  * [1 Constant template parameter](template_parameters.html#Constant_template_parameter)
  * [2 Type template parameter](template_parameters.html#Type_template_parameter)
  * [3 Template template parameter](template_parameters.html#Template_template_parameter)
  * [4 Name resolution for template parameters](template_parameters.html#Name_resolution_for_template_parameters)
  * [5 Default template arguments](template_parameters.html#Default_template_arguments)
  * [6 Notes](template_parameters.html#Notes)
  * [8 Defect reports](template_parameters.html#Defect_reports)

### Constant template parameter OR NON-type template parameter   
  
* ALLOWED syntaxes
  * `type name`
    * `name`
      * OPTIONAL
  * `type name = default`
    * `name`
      * OPTIONAL
  * `type ... name`
    * `name`
      * OPTIONAL
    * requirements
      * C++11  

* `type`
  * ALLOWED types
    * structural type
    * type / contains a [placeholder type](auto.md)
      * requirements
        * C++17
    * [placeholder -- for a -- deduced class type](ctad.md)
      * requirements
        * C++20

* `name`
  * == constant template parameter name
  * if it's used | class template's body's expression -> it's an unmodifiable [prvalue](value_category.md)
    * EXCEPT TO, its type ==
      * `lvalue` reference type OR
      * class type
        * requirements
          * C++20

* `default`
  * [default template argument](#default-template-arguments)
  * ALLOWED
    1) constant template parameter
    2) constant template parameter / has a default template argument
    3) constant template [parameter pack](parameter_pack.md)
  
* _structural type_
  * ALLOWED types (OPTIONAL cv-qualified -- qualifiers are ignored--)
    * [lvalue reference type](reference.md#lvalue-references) (-- to -- object OR function) 
    * [integral type](type-id.md) 
    * [pointer type](pointer.md) (-- to -- object OR function)
    * [pointer -- to -- member type](pointer.md#pointers-to-members) (-- to -- member object OR member function) 
    * [enumeration type](enum.md)
    * [`std::nullptr_t`](../types/nullptr_t.md) 
      * requirements
        * C++11
    * [floating-point type](type-id.md)
      * requirements
        * C++20
    * [lambda closure type](lambda.md#closure-type) / lambda expression has NO capture
      * requirements
        * C++20
    * NON-closure [literal class type](../named_req/LiteralType.md)
      * requirements
        * C++20
      * ALL base classes & non-static data members
        * public
        * non-mutable
        * 's ALLOWED types
          * structural types
          * array thereof
            * POSSIBLE multi-dimensional 
  
* array & function types 
  * may be written | template declaration
    * BUT 
      * array is AUTOMATICALLY replaced -- by -- pointer to object
      * function is AUTOMATICALLY replaced -- by -- pointer to function

A template parameter of the form class Foo is not an unnamed constant template parameter of type `Foo`, 
even if otherwise class Foo is an [elaborated type specifier](elaborated_type_specifier.html "cpp/language/elaborated type specifier") and class Foo x; declares x to be of type `Foo`. 

An [identifier](name.html "cpp/language/identifiers") that names a constant template parameter of class type `T` 
denotes a static storage duration object of type const T, called a _template parameter object_ , 
which is [Template argument equivalence](template_arguments.html#Template_argument_equivalence "cpp/language/template arguments") to the corresponding template argument 
after it has been converted to the type of the template parameter. No two template parameter objects are template-argument-equivalent. 
    
    
    struct A
    {
        friend bool operator==(const A&, const A&) = default;
    };
     
    template<A a>
    void f()
    {
        &a;                       // OK
        const A& ra = a, &rb = a; // Both bound to the same template parameter object
        [assert](../error/assert.html)(&ra == &rb);       // passes
    }

| (since C++20)  
---|---  
  
### Type template parameter  
  

type-parameter-key name ﻿(optional) |  (1)  |   
type-parameter-key name ﻿(optional) `**=**` default |  (2)  |   
type-parameter-key `**...**` name ﻿(optional) |  (3)  |  (since C++11)  
type-constraint name ﻿(optional) |  (4)  |  (since C++20)  
type-constraint name ﻿(optional) `**=**` default |  (5)  |  (since C++20)  
type-constraint `**...**` name ﻿(optional) |  (6)  |  (since C++20)  
type-parameter-key |  \-  |  either `**typename**` or `**class**`. There is no difference between these keywords in a type template parameter declaration   
---|---|---  
type-constraint |  \-  |  either the name of a [concept](constraints.html "cpp/language/constraints") or the name of a concept followed by a list of template arguments (in angle brackets). Either way, the concept name may be optionally qualified   
name |  \-  |  the name of the type template parameter   
default |  \-  |  the [default template argument](template_parameters.html#Default_template_arguments)  
  
1) A type template parameter without a default. 
    
    
    template<class T>
    class My_vector { /* ... */ };

2) A type template parameter with a default. 
    
    
    template<class T = void>
    struct My_op_functor { /* ... */ };

3) A type template [parameter pack](parameter_pack.html "cpp/language/parameter pack"). 
    
    
    template<typename... Ts>
    class My_tuple { /* ... */ };

4) A constrained type template parameter without a default. 
    
    
    template<My_concept T>
    class My_constrained_vector { /* ... */ };

5) A constrained type template parameter with a default. 
    
    
    template<My_concept T = void>
    class My_constrained_op_functor { /* ... */ };

6) A constrained type template [parameter pack](parameter_pack.html "cpp/language/parameter pack"). 
    
    
    template<My_concept... Ts>
    class My_constrained_tuple { /* ... */ };

  
The name of the parameter is optional: 
    
    
    // Declarations of the templates shown above:
    template<class>
    class My_vector;
    template<class = void>
    struct My_op_functor;
    template<typename...>
    class My_tuple;

In the body of the template declaration, the name of a type parameter is a typedef-name which aliases the type supplied when the template is instantiated. 

Each constrained parameter `P` whose type-constraint is Q designating the concept `C` introduces a [constraint-expression](constraints.html "cpp/language/constraints") `E` according to the following rules: 

  * if `Q` is `C` (without an argument list), 



    

  * if `P` is not a parameter pack, `E` is simply `C<P>`
  * otherwise, `P` is a parameter pack, `E` is a fold-expression `(C<P> && ...)`



  * if `Q` is `C<A1,A2...,AN>`, then `E` is `C<P,A1,A2,...AN>` or `(C<P,A1,A2,...AN> && ...)`, respectively. 


    
    
    template<typename T>
    concept C1 = true;
    template<typename... Ts> // variadic concept
    concept C2 = true;
    template<typename T, typename U>
    concept C3 = true;
     
    template<C1 T>         struct s1; // constraint-expression is C1<T>
    template<C1... T>      struct s2; // constraint-expression is (C1<T> && ...)
    template<C2... T>      struct s3; // constraint-expression is (C2<T> && ...)
    template<C3<int> T>    struct s4; // constraint-expression is C3<T, int>
    template<C3<int>... T> struct s5; // constraint-expression is (C3<T, int> && ...)

| (since C++20)  
---|---  
  
### Template template parameter  
  

`**template**` `**<**` parameter-list `**>**` type-parameter-key name ﻿(optional) |  (1)  |   
`**template**` `**<**` parameter-list `**>**` type-parameter-key name ﻿(optional) `**=**` default |  (2)  |   
`**template**` `**<**` parameter-list `**>**` type-parameter-key `**...**` name ﻿(optional) |  (3)  |  (since C++11)  
type-parameter-key |  \-  |  `**class**` or `**typename**`(since C++17)  
---|---|---  
  
1) A template template parameter with an optional name.

2) A template template parameter with an optional name and a default.

3) A template template [parameter pack](parameter_pack.html "cpp/language/parameter pack") with an optional name.

  
In the body of the template declaration, the name of this parameter is a template-name (and needs arguments to be instantiated). 
    
    
    template<typename T>
    class my_array {};
     
    // two type template parameters and one template template parameter:
    template<typename K, typename V, template<typename> typename C = my_array>
    class Map
    {
        C<K> key;
        C<V> value;
    };

### Name resolution for template parameters

The name of a template parameter is not allowed to be redeclared within its scope (including nested scopes). A template parameter is not allowed to have the same name as the template name. 
    
    
    template<class T, int N>
    class Y
    {
        int T;      // error: template parameter redeclared
        void f()
        {
            char T; // error: template parameter redeclared
        }
    };
     
    template<class X>
    class X; // error: template parameter redeclared

In the definition of a member of a class template that appears outside of the class template definition, the name of a member of the class template hides the name of a template parameter of any enclosing class templates, but not a template parameter of the member if the member is a class or function template. 
    
    
    template<class T>
    struct A
    {
        struct B {};
        typedef void C;
        void f();
     
        template<class U>
        void g(U);
    };
     
    template<class B>
    void A<B>::f()
    {
        B b; // A's B, not the template parameter
    }
     
    template<class B>
    template<class C>
    void A<B>::g(C)
    {
        B b; // A's B, not the template parameter
        C c; // the template parameter C, not A's C
    }

In the definition of a member of a class template that appears outside of the namespace containing the class template definition, the name of a template parameter hides the name of a member of this namespace. 
    
    
    namespace N
    {
        class C {};
     
        template<class T>
        class B
        {
            void f(T);
        };
    }
     
    template<class C>
    void N::B<C>::f(C)
    {
        C b; // C is the template parameter, not N::C
    }

In the definition of a class template or in the definition of a member of such a template that appears outside of the template definition, for each non-[dependent](dependent_name.html#Dependent_types "cpp/language/dependent name") base class, if the name of the base class or the name of a member of the base class is the same as the name of a template parameter, the base class name or member name hides the template parameter name. 
    
    
    struct A
    {
        struct B {};
        int C;
        int Y;
    };
     
    template<class B, class C>
    struct X : A
    {
        B b; // A's B
        C b; // error: A's C isn't a type name
    };

### Default template arguments

Default template arguments are specified in the parameter lists after the = sign. Defaults can be specified for any kind of template parameter (type, constant, or template), but not to parameter packs(since C++11). 

If the default is specified for a template parameter of a primary class template, primary variable template,(since C++14) or alias template, each subsequent template parameter must have a default argument, except the very last one may be a template parameter pack(since C++11). In a function template, there are no restrictions on the parameters that follow a default, and a parameter pack may be followed by more type parameters only if they have defaults or can be deduced from the function arguments(since C++11). 

Default parameters are not allowed 

  * in the out-of-class definition of a member of a [class template](class_template.html "cpp/language/class template") (they have to be provided in the declaration inside the class body). Note that [member templates](member_template.html "cpp/language/member template") of non-template classes can use default parameters in their out-of-class definitions (see [GCC bug 53856](https://gcc.gnu.org/bugzilla/show_bug.cgi?id=53856)) 
  * in [friend class template](friend.html#Template_friends "cpp/language/friend") declarations 



  * in any [function template](function_template.html "cpp/language/function template") declaration or definition 

| (until C++11)  
---|---  
On a friend function template declaration, default template arguments are allowed only if the declaration is a definition, and no other declarations of this function appear in this translation unit.  | (since C++11)  
---|---  
  
Default template arguments that appear in the declarations are merged similarly to default function arguments: 
    
    
    template<typename T1, typename T2 = int> class A;
    template<typename T1 = int, typename T2> class A;
     
    // the above is the same as the following:
    template<typename T1 = int, typename T2 = int> class A;

But the same parameter cannot be given default arguments twice in the same scope: 
    
    
    template<typename T = int> class X;
    template<typename T = int> class X {}; // error

When parsing a default template argument for a constant template parameter, the first non-nested > is taken as the end of the template parameter list rather than a greater-than operator: 
    
    
    template<int i = 3 > 4>   // syntax error
    class X { /* ... */ };
     
    template<int i = (3 > 4)> // OK
    class Y { /* ... */ };

The template parameter lists of template template parameters can have their own default arguments, which are only in effect where the template template parameter itself is in scope: 
    
    
    // class template, with a type template parameter with a default
    template<typename T = float>
    struct B {};
     
    // template template parameter T has a parameter list, which
    // consists of one type template parameter with a default
    template<template<typename = float> typename T>
    struct A
    {
        void f();
        void g();
    };
     
    // out-of-body member function template definitions
     
    template<template<typename TT> class T>
    void A<T>::f()
    {
        T<> t; // error: TT has no default in scope
    }
     
    template<template<typename TT = char> class T>
    void A<T>::g()
    {
        T<> t; // OK: t is T<char>
    }

[Member access](access.html "cpp/language/access") for the names used in a default template parameter is checked at the declaration, not at the point of use: 
    
    
    class B {};
     
    template<typename T>
    class C
    {
    protected:
        typedef T TT;
    };
     
    template<typename U, typename V = typename U::TT>
    class D: public U {};
     
    D<C<B>>* d; // error: C::TT is protected

The default template argument is implicitly instantiated when the value of that default argument is needed, except if the template is used to name a function: 
    
    
    template<typename T, typename U = int>
    struct S {};
     
    S<bool>* p; // The default argument for U is instantiated at this point
                // the type of p is S<bool, int>*

| (since C++14)  
---|---  
  
### Notes

Before C++26, constant template parameter were called non-type template parameter in the standard wording. The terminology was changed by [P2841R6](https://wg21.link/P2841R6) / [PR#7587](https://wg21.link/EDIT7587). 

In template parameters, type constraints could be used for both type and constant parameters, depending on whether auto is present. 
    
    
    template<typename>
    concept C = true;
     
    template<C,     // type parameter 
             C auto // constant parameter
            >
    struct S{};
     
    S<int, 0> s;

  
| (since C++20)  
---|---  
Feature-test macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_nontype_template_parameter_auto`](../experimental/feature_test.html#cpp_nontype_template_parameter_auto "cpp/feature test") | [`201606L`](../compiler_support/17.html#cpp_nontype_template_parameter_auto_201606L "cpp/compiler support/17") | (C++17) | Declaring [constant template parameters](template_parameters.html#Constant_template_parameter) with auto  
[`__cpp_nontype_template_args`](../experimental/feature_test.html#cpp_nontype_template_args "cpp/feature test") | [`201411L`](../compiler_support/17.html#cpp_nontype_template_args_201411L "cpp/compiler support/17") | (C++17) | Allow constant evaluation for all [constant template arguments](template_arguments.html#Constant_template_arguments "cpp/language/template arguments")  
[`201911L`](../compiler_support/20.html#cpp_nontype_template_args_201911L "cpp/compiler support/20") | (C++20) | Class types and floating-point types in [constant template parameters](template_parameters.html#Constant_template_parameter)
  
### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 184](https://cplusplus.github.io/CWG/issues/184.html) | C++98  | whether the template parameters of template template  
parameters are allowed to have default arguments is unspecified  | specification added   
[CWG 1922](https://cplusplus.github.io/CWG/issues/1922.html) | C++98  | it was unclear whether a class template whose name is an  
injected-class-name can use the default arguments in prior declarations  | allowed   
[CWG 2032](https://cplusplus.github.io/CWG/issues/2032.html) | C++14  | for variable templates, there was no restriction on the template  
parameters after a template parameter with a default argument  | apply the same restriction  
as on class templates  
and alias templates   
[CWG 2542](https://cplusplus.github.io/CWG/issues/2542.html) | C++20  | it was unclear whether the closure type is structural  | it is not structural   
[CWG 2845](https://cplusplus.github.io/CWG/issues/2845.html) | C++20  | the closure type was not structural  | it is structural  
if capture-less 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
