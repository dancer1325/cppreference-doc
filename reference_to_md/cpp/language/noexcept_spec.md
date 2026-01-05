

  
| [`goto`](goto.html "cpp/language/goto") \- [`return`](return.html "cpp/language/return")  
---  
  
[Functions](functions.html "cpp/language/functions")  
[Function declaration](function.html "cpp/language/function")  
[Lambda function expression](lambda.html "cpp/language/lambda")  
[`inline` specifier](inline.html "cpp/language/inline")  
[Dynamic exception specifications](except_spec.html "cpp/language/except spec") (until C++17*)  
**`noexcept` specifier** (C++11)  
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
  


[ Exceptions](exceptions.html "cpp/language/exceptions")

[try block](try.html "cpp/language/try")  
---  
[Throwing exceptions](throw.html "cpp/language/throw")  
[Handling exceptions](catch.html "cpp/language/catch")  
Exception specification  
**noexcept specification** (C++11)  
[dynamic specification](except_spec.html "cpp/language/except spec") (until C++17*)  
[noexcept operator](noexcept.html "cpp/language/noexcept") (C++11)  
  


Specifies whether a function could throw exceptions. 

## Contents

  * [1 Syntax](noexcept_spec.html#Syntax)
  * [2 Explanation](noexcept_spec.html#Explanation)
  * [3 Notes](noexcept_spec.html#Notes)
    * [3.1 Deprecates](noexcept_spec.html#Deprecates)
  * [4 Keywords](noexcept_spec.html#Keywords)
  * [5 Example](noexcept_spec.html#Example)
  * [6 Defect reports](noexcept_spec.html#Defect_reports)
  * [7 See also](noexcept_spec.html#See_also)

  
---  
  
### Syntax  
  
---  
`**noexcept**` |  (1)  |   
`**noexcept(**` expression`**)**` |  (2)  |   
`**throw()**` |  (3)  |  (deprecated in C++17)  
(removed in C++20)  
  
1) Same as `**noexcept(true)**`

2) If expression evaluates to true, the function is declared not to throw any exceptions. A `**(**` following `**noexcept**` is always a part of this form (it can never start an initializer).

3) Same as `**noexcept(true)**` (see [dynamic exception specification](except_spec.html "cpp/language/except spec") for its semantics before C++17)

expression |  \-  |  [contextually converted constant expression of type bool](constant_expression.html#Converted_constant_expression "cpp/language/constant expression")  
---|---|---  
  
### Explanation

The noexcept-specification is not a part of the function type (just like [dynamic exception specification](except_spec.html "cpp/language/except spec")) and can only appear as a part of a [lambda declarator](lambda.html "cpp/language/lambda") or a top-level [function declarator](function.html "cpp/language/function") when declaring functions, variables, non-static data members of type function, pointer to function, reference to function, or pointer to member function, and also when declaring a parameter or a return type in one of those declarations that in turn happens to be a pointer or reference to function. It cannot appear in a [typedef](typedef.html "cpp/language/typedef") or [type alias](type_alias.html "cpp/language/type alias") declaration. 
    
    
    void f() noexcept; // the function f() does not throw
    void (*fp)() noexcept(false); // fp points to a function that may throw
    void g(void pfa() noexcept);  // g takes a pointer to function that doesn't throw
    // typedef int (*pf)() noexcept; // error

| (until C++17)  
---|---  
The noexcept-specification is a part of the function type and may appear as part of any [function declarator](function.html "cpp/language/function").  | (since C++17)  
  
Every function in C++ is either _non-throwing_ or _potentially throwing_ : 

  * _potentially-throwing_ functions are: 



    

  * functions declared with a non-empty [dynamic exception specification](except_spec.html "cpp/language/except spec")


| (until C++17)  
---|---  
  
    

  * functions declared with `noexcept` specifier whose expression evaluates to `false`
  * functions declared without `noexcept` specifier except for 



    

  * [destructors](destructor.html "cpp/language/destructor") unless the destructor of any potentially-constructed base or member is _potentially-throwing_ (see below) 
  * [default constructors](default_constructor.html "cpp/language/default constructor"), [copy constructors](copy_constructor.html "cpp/language/copy constructor"), [move constructors](move_constructor.html "cpp/language/move constructor") that are implicitly-declared or defaulted on their first declaration unless 



    

  * a constructor for a base or member that the implicit definition of the constructor would call is _potentially-throwing_ (see below) 
  * a subexpression of such an initialization, such as a default argument expression, is _potentially-throwing_ (see below) 
  * a default member initializer (for default constructor only) is _potentially-throwing_ (see below) 



  * [copy assignment](as_operator.html "cpp/language/copy assignment") operators, [move assignment](move_operator.html "cpp/language/move assignment") operators that are implicitly-declared or defaulted on their first declaration unless the invocation of any assignment operator in the implicit definition is _potentially-throwing_ (see below) 



    

    

  * [comparison operators](default_comparisons.html "cpp/language/default comparisons") that are defaulted on their first declaration unless the invocation of any comparison operator in the implicit definition is _potentially-throwing_ (see below) 


| (since C++20)  
---|---  
  
    

    

  * [deallocation functions](../memory/new/operator_delete.html "cpp/memory/new/operator delete")



  * non-throwing functions are all others (those with noexcept specifier whose expression evaluates to `true` as well as destructors, defaulted special member functions, and deallocation functions) 



[Explicit instantiations](function_template.html#Explicit_instantiation "cpp/language/function template") may use the noexcept specifier, but it is not required. If used, the exception specification must be the same as for all other declarations. A diagnostic is required only if the exception specifications are not the same within a single translation unit. 

Functions differing only in their exception specification cannot be overloaded (just like the return type, exception specification is part of function type, but not part of the function signature)(since C++17). 
    
    
    void f() noexcept;
    void f(); // error: different exception specification
    void g() noexcept(false);
    void g(); // ok, both declarations for g are potentially-throwing

Pointers (including pointers to member function) to non-throwing functions can be assigned to or used to initialize(until C++17)are [implicitly convertible](implicit_cast.html#Function_pointer_conversions "cpp/language/implicit conversion") to(since C++17) pointers to potentially-throwing functions, but not the other way around. 
    
    
    void ft(); // potentially-throwing
    void (*fn)() noexcept = ft; // error

If a virtual function is non-throwing, all declarations, including the definition, of every overrider must be non-throwing as well, unless the overrider is defined as deleted: 
    
    
    struct B
    {
        virtual void f() noexcept;
        virtual void g();
        virtual void h() noexcept = delete;
    };
     
    struct D: B
    {
        void f();          // ill-formed: D::f is potentially-throwing, B::f is non-throwing
        void g() noexcept; // OK
        void h() = delete; // OK
    };

Non-throwing functions are permitted to call potentially-throwing functions. Whenever an exception is thrown and the search for a handler encounters the outermost block of a non-throwing function, the function [std::terminate](../error/terminate.html "cpp/error/terminate") is called: 
    
    
    extern void f(); // potentially-throwing
     
    void g() noexcept
    {
        f();      // valid, even if f throws
        throw 42; // valid, effectively a call to std::terminate
    }

The exception specification of a function template specialization is not instantiated along with the function declaration; it is instantiated only when _needed_ (as defined below). 

The exception-specification of an implicitly-declared special member function is also evaluated only when needed (in particular, implicit declaration of a member function of a derived class does not require the exception-specification of a base member function to be instantiated). 

When the noexcept-specification of a function template specialization is _needed_ , but hasn't yet been instantiated, the dependent names are looked up and any templates used in the expression are instantiated as if for the declaration of the specialization. 

A noexcept-specification of a function is considered to be _needed_ in the following contexts: 

  * in an expression, where the function is selected by overload resolution 
  * the function is [odr-used](definition.html#ODR-use "cpp/language/definition")
  * the function would be odr-used but appears in an unevaluated operand 


    
    
    template<class T>
    T f() noexcept(sizeof(T) < 4);
     
    int main()
    {
        decltype(f<void>()) *p; // f unevaluated, but noexcept-spec is needed
                                // error because instantiation of the noexcept specification 
                                // calculates sizeof(void)
    }

  * the specification is needed to compare to another function declaration (e.g. on a virtual function overrider or on an explicit specialization of a function template) 
  * in a function definition 
  * the specification is needed because a defaulted special member function needs to check it in order to decide its own exception specification (this takes place only when the specification of the defaulted special member function is, itself, needed). 



Formal definition of _potentially-throwing expression_ (used to determine the default exception specification of destructors, constructors, and assignment operators as described above): 

An expression `e` is _potentially-throwing_ if: 

  * `e` is a function call to a function, pointer to function, or pointer to member function which is _potentially-throwing_ , unless `e` is a [core constant expression](constant_expression.html "cpp/language/constant expression")(until C++17)
  * `e` makes an implicit call to a _potentially-throwing_ function (such as an overloaded operator, an allocation function in a `new`-expression, a constructor for a function argument, or a destructor if `e` is a full-expression) 
  * `e` is a [`throw`-expression](throw.html "cpp/language/throw")
  * `e` is a [`dynamic_cast`](dynamic_cast.html "cpp/language/dynamic cast") that casts a polymorphic reference type 
  * `e` is a [`typeid`](typeid.html "cpp/language/typeid") expression applied to a dereferenced pointer to a polymorphic type 
  * `e` has an immediate subexpression that is potentially-throwing 


    
    
    struct A
    {
        A(int = (A(5), 0)) noexcept;
        A(const A&) noexcept;
        A(A&&) noexcept;
        ~A();
    };
     
    struct B
    {
        B() throw();
        B(const B&) = default; // implicit exception specification is noexcept(true)
        B(B&&, int = (throw Y(), 0)) noexcept;
        ~B() noexcept(false);
    };
     
    int n = 7;
    struct D : public A, public B
    {
        int * p = new int[n];
        // D::D() potentially-throwing because of the new operator
        // D::D(const D&) non-throwing
        // D::D(D&&) potentially-throwing: the default argument for B’s constructor may throw
        // D::~D() potentially-throwing
     
        // note; if A::~A() were virtual, this program would be ill-formed because an overrider
        // of a non-throwing virtual cannot be potentially-throwing
    };

### Notes

One of the uses of the constant expression is (along with the [`noexcept` operator](noexcept.html "cpp/language/noexcept")) to define function templates that declare `**noexcept**` for some types but not others. 

Note that a `**noexcept**` specification on a function is not a compile-time check; it is merely a method for a programmer to inform the compiler whether or not a function should throw exceptions. The compiler can use this information to enable certain optimizations on non-throwing functions as well as enable the [`noexcept` operator](noexcept.html "cpp/language/noexcept"), which can check at compile time if a particular expression is declared to throw any exceptions. For example, containers such as [std::vector](../container/vector.html "cpp/container/vector") will move their elements if the elements' move constructor is `**noexcept**`, and copy otherwise (unless the copy constructor is not accessible, but a potentially throwing move constructor is, in which case the strong exception guarantee is waived). 

#### Deprecates

`**noexcept**` is an improved version of [throw()](except_spec.html "cpp/language/except spec"), which is deprecated in C++11. Unlike pre-C++17 [throw()](except_spec.html "cpp/language/except spec"), `**noexcept**` will not call [std::unexpected](../error/unexpected.html "cpp/error/unexpected"), may or may not unwind the stack, and will call [std::terminate](../error/terminate.html "cpp/error/terminate"), which potentially allows the compiler to implement `**noexcept**` without the runtime overhead of [throw()](except_spec.html "cpp/language/except spec"). As of C++17, throw() is redefined to be an exact equivalent of noexcept(true). 

Feature-test macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_noexcept_function_type`](../experimental/feature_test.html#cpp_noexcept_function_type "cpp/feature test") | [`201510L`](../compiler_support/17.html#cpp_noexcept_function_type_201510L "cpp/compiler support/17") | (C++17) | Make exception specifications be part of the type system   
  
### Keywords

[`noexcept`](../keyword/noexcept.html "cpp/keyword/noexcept"), [`throw`](../keyword/throw.html "cpp/keyword/throw")(since C++17)(until C++20)

### Example

Run this code
    
    
    // whether foo is declared noexcept depends on if the expression
    // T() will throw any exceptions
    template<class T>
    void foo() noexcept(noexcept(T())) {}
     
    void bar() noexcept(true) {}
    void baz() noexcept { throw 42; } // noexcept is the same as noexcept(true)
     
    int main() 
    {
        foo<int>(); // noexcept(noexcept(int())) => noexcept(true), so this is fine
     
        bar(); // fine
        baz(); // compiles, but at runtime this calls std::terminate
    }

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 1330](https://cplusplus.github.io/CWG/issues/1330.html) | C++11  | an exception specification might be eagerly instantiated  | it is only instantiated only if needed   
[CWG 1740](https://cplusplus.github.io/CWG/issues/1740.html) | C++11  | a ( following noexcept might start an initializer  | it can only be a part of  
noexcept specification   
[CWG 2039](https://cplusplus.github.io/CWG/issues/2039.html) | C++11  | only the expression before conversion is required to be constant  | the conversion must also be  
valid in a constant expression   
  
### See also

[ `noexcept` operator](noexcept.html "cpp/language/noexcept")(C++11) |  determines if an expression throws any exceptions  
---|---  
[ Dynamic exception specification](except_spec.html "cpp/language/except spec")(until C++17) |  specifies what exceptions are thrown by a function (deprecated in C++11)   
[ `throw` expression ](throw.html "cpp/language/throw") |  signals an error and transfers control to error handler  
[ move_if_noexcept](../utility/move_if_noexcept.html "cpp/utility/move if noexcept")(C++11) |  converts the argument to an xvalue if the move constructor does not throw   
(function template) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
