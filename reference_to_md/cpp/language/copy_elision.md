

  
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
  


[ Initialization](initialization.html "cpp/language/initialization")

[Initializer](initialization.html "cpp/language/initialization")  
---  
[Default initialization](default_initialization.html "cpp/language/default initialization")  
[Value initialization](value_initialization.html "cpp/language/value initialization")  
[Direct initialization](direct_initialization.html "cpp/language/direct initialization")  
[Copy-initialization](copy_initialization.html "cpp/language/copy initialization")  
[List initialization](list_initialization.html "cpp/language/list initialization") (C++11)  
[Aggregate initialization](aggregate_initialization.html "cpp/language/aggregate initialization")  
[Reference initialization](reference_initialization.html "cpp/language/reference initialization")  
**Copy elision**  
[Static initialization](initialization.html#Static_initialization "cpp/language/initialization")  
[Zero initialization](zero_initialization.html "cpp/language/zero initialization")  
[Constant initialization](constant_initialization.html "cpp/language/constant initialization")  
[Dynamic non-local initialization](initialization.html#Dynamic_initialization "cpp/language/initialization")  
[Ordered dynamic initialization](initialization.html#Dynamic_initialization "cpp/language/initialization")  
[Unordered dynamic initialization](initialization.html#Dynamic_initialization "cpp/language/initialization")  
[Class member initialization](initialization.html#Class_member_initialization "cpp/language/initialization")  
[Member initializer list](initializer_list.html "cpp/language/initializer list")  
[Default member initializer](data_members.html#Member_initialization "cpp/language/data members") (C++11)  
  


When certain criteria are met, the creation of a class object from a source object of the same type (ignoring cv-qualification) can be omitted, even if the selected constructor and/or the destructor for the object have side effects. This elision of object creation is called _copy elision_ ﻿. 

## Contents

  * [1 Explanation](copy_elision.html#Explanation)
  * [2 Prvalue semantics ("guaranteed copy elision")](copy_elision.html#Prvalue_semantics_.28.22guaranteed_copy_elision.22.29)
  * [3 Notes](copy_elision.html#Notes)
  * [4 Example](copy_elision.html#Example)
  * [5 Defect reports](copy_elision.html#Defect_reports)
  * [6 See also](copy_elision.html#See_also)

  
---  
  
### Explanation

Copy elision is permitted in the following circumstances (which may be combined to eliminate multiple copies): 

  * In a [return statement](return.html "cpp/language/return") in a function with a class return type, when the operand is the name of a non-volatile object obj with [automatic storage duration](storage_duration.html#Automatic_storage_duration "cpp/language/storage duration") (other than a function parameter or a [handler](catch.html "cpp/language/catch") parameter), the [copy-initialization](copy_initialization.html "cpp/language/copy initialization") of the result object can be omitted by constructing obj directly into the function call’s result object. This variant of copy elision is known as _named return value optimization_ (NRVO). 



  * When a class object target is copy-initialized with a temporary class object obj that has not been bound to a reference, the copy-initialization can be omitted by constructing obj directly into target. This variant of copy elision is known as _unnamed return value optimization_ (URVO). Since C++17, URVO is mandatory and no longer considered a form of copy elision; see below. 

| (until C++17)  
---|---  
  
  * In a [throw expression](throw.html "cpp/language/throw"), when the operand is the name of a non-volatile object obj with automatic storage duration (other than a function parameter or a handler parameter) that belongs to a [scope](scope.html "cpp/language/scope") that does not contain the innermost enclosing [try block](try.html "cpp/language/try") (if exists), the copy-initialization of the exception object can be omitted by constructing obj directly into the exception object. 
  * In a [handler](catch.html "cpp/language/catch"), the copy-initialization of the handler argument can be omitted by treating the handler parameter as an alias for the exception object if the meaning of the program will be unchanged except for the execution of constructors and destructors for the handler argument. 

| (since C++11)  
  
  * In [coroutines](coroutines.html "cpp/language/coroutines"), a copy of a coroutine parameter can be omitted. In this case, references to that copy are replaced with references to the corresponding parameter if the meaning of the program will be unchanged except for the execution of a constructor and destructor for the parameter copy object. 

| (since C++20)  
  
When copy elision occurs, the implementation treats the source and target of the omitted initialization as simply two different ways of referring to the same object. 

The destruction occurs at the later of the times when the two objects would have been destroyed without the optimization.  | (until C++11)  
---|---  
If the first parameter of the selected constructor is an rvalue reference to the object’s type, the destruction of that object occurs when the target would have been destroyed. Otherwise, the destruction occurs at the later of the times when the two objects would have been destroyed without the optimization.  | (since C++11)  
  
  


###  Prvalue semantics ("guaranteed copy elision")

Since C++17, a prvalue is not materialized until needed, and then it is constructed directly into the storage of its final destination. This sometimes means that even when the language syntax visually suggests a copy/move (e.g. [copy initialization](copy_initialization.html "cpp/language/copy initialization")), no copy/move is performed — which means the type need not have an accessible copy/move constructor at all. Examples include: 

  * Initializing the returned object in a [return statement](return.html "cpp/language/return"), when the operand is a [prvalue](value_category.html "cpp/language/value category") of the same class type (ignoring [cv-qualification](cv.html "cpp/language/cv")) as the function return type: 


    
    
    T f()
    {
        return U(); // constructs a temporary of type U,
                    // then initializes the returned T from the temporary
    }
    T g()
    {
        return T(); // constructs the returned T directly; no move
    }

     The destructor of the type returned must be accessible at the point of the return statement and non-deleted, even though no T object is destroyed. 

  * In the initialization of an object, when the initializer expression is a [prvalue](value_category.html "cpp/language/value category") of the same class type (ignoring [cv-qualification](cv.html "cpp/language/cv")) as the variable type: 


    
    
    T x = T(T(f())); // x is initialized by the result of f() directly; no move

    This can only apply when the object being initialized is known not to be a potentially-overlapping subobject: 
    
    
    struct C { /* ... */ };
    C f();
     
    struct D;
    D g();
     
    struct D : C
    {
        D() : C(f()) {}    // no elision when initializing a base class subobject
        D(int) : D(g()) {} // no elision because the D object being initialized might
                           // be a base-class subobject of some other class
    };

Note: This rule does not specify an optimization, and the Standard does not formally describe it as "copy elision" (because nothing is being elided). Instead, the C++17 core language specification of [prvalues](value_category.html "cpp/language/value category") and [temporaries](implicit_cast.html#Temporary_materialization "cpp/language/implicit conversion") is fundamentally different from that of earlier C++ revisions: there is no longer a temporary to copy/move from. Another way to describe C++17 mechanics is "unmaterialized value passing" or "deferred temporary materialization": prvalues are returned and used without ever materializing a temporary.  | (since C++17)  
---|---  
  
### Notes

Copy elision is the only allowed form of optimization(until C++14) one of the two allowed forms of optimization, alongside [allocation elision and extension](new.html#Allocation "cpp/language/new"),(since C++14) that can change observable side-effects. Because some compilers do not perform copy elision in every situation where it is allowed (e.g., in debug mode), programs that rely on the side-effects of copy/move constructors and destructors are not portable. 

In a return statement or a throw expression, if the compiler cannot perform copy elision but the conditions for copy elision are met, or would be met except that the source is a function parameter, the compiler will attempt to use the move constructor even if the source operand is designated by an lvalue(until C++23) the source operand will be treated as an rvalue(since C++23); see [return statement](return.html#Notes "cpp/language/return") for details. In [constant expression](constant_expression.html "cpp/language/constant expression") and [constant initialization](constant_initialization.html "cpp/language/constant initialization"), copy elision is never performed. 
    
    
    struct A
    {
        void* p;
        constexpr A() : p(this) {}
        A(const A&); // Disable trivial copyability
    };
     
    constexpr A a;  // OK: a.p points to a
     
    constexpr A f()
    {
        A x;
        return x;
    }
    constexpr A b = f(); // error: b.p would be dangling and point to the x inside f
     
    constexpr A c = A(); // (until C++17) error: c.p would be dangling and point to a temporary
                         // (since C++17) OK: c.p points to c; no temporary is involved

| (since C++11)  
---|---  
Feature-test macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_guaranteed_copy_elision`](../experimental/feature_test.html#cpp_guaranteed_copy_elision "cpp/feature test") | [`201606L`](../compiler_support/17.html#cpp_guaranteed_copy_elision_201606L "cpp/compiler support/17") | (C++17) | Guaranteed copy elision through simplified [value categories](value_category.html "cpp/language/value category")  
  
### Example

Run this code
    
    
    #include <iostream>
     
    struct Noisy
    {
        Noisy() { [std::cout](../io/cout.html) << "constructed at " << this << '\n'; }
        Noisy(const Noisy&) { [std::cout](../io/cout.html) << "copy-constructed\n"; }
        Noisy(Noisy&&) { [std::cout](../io/cout.html) << "move-constructed\n"; }
        ~Noisy() { [std::cout](../io/cout.html) << "destructed at " << this << '\n'; }
    };
     
    Noisy f()
    {
        Noisy v = Noisy(); // (until C++17) copy elision initializing v from a temporary;
                           //               the move constructor may be called
                           // (since C++17) "guaranteed copy elision"
        return v; // copy elision ("NRVO") from v to the result object;
                  // the move constructor may be called
    }
     
    void g(Noisy arg)
    {
        [std::cout](../io/cout.html) << "&arg = " << &arg << '\n';
    }
     
    int main()
    {
        Noisy v = f(); // (until C++17) copy elision initializing v from the result of f()
                       // (since C++17) "guaranteed copy elision"
     
        [std::cout](../io/cout.html) << "&v = " << &v << '\n';
     
        g(f()); // (until C++17) copy elision initializing arg from the result of f()
                // (since C++17) "guaranteed copy elision"
    }

Possible output: 
    
    
    constructed at 0x7fffd635fd4e
    &v = 0x7fffd635fd4e
    constructed at 0x7fffd635fd4f
    &arg = 0x7fffd635fd4f
    destructed at 0x7fffd635fd4f
    destructed at 0x7fffd635fd4e

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 1967](https://cplusplus.github.io/CWG/issues/1967.html) | C++11  | when copy elision is done using a move constructor, the  
lifetime of the moved-from object was still considered  | not considered   
[CWG 2426](https://cplusplus.github.io/CWG/issues/2426.html) | C++17  | destructor was not required when returning a prvalue  | destructor is potentially invoked   
[CWG 2930](https://cplusplus.github.io/CWG/issues/2930.html) | C++98  | only copy(/move) operations could be elided, but a  
non-copy(/move) constructor can be selected by copy-initialization  | elides any object construction  
of related copy-initializations   
  
### See also

  * [copy initialization](copy_initialization.html "cpp/language/copy initialization")
  * [copy constructor](copy_constructor.html "cpp/language/copy constructor")
  * [move constructor](move_constructor.html "cpp/language/move constructor")


  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
