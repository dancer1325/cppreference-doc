

  
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
**`catch` handler**  
  
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
  


  
  

  
| [`const_cast`](const_cast.html "cpp/language/const cast")  
---  
[`static_cast`](static_cast.html "cpp/language/static cast")  
[`dynamic_cast`](dynamic_cast.html "cpp/language/dynamic cast")  
[`reinterpret_cast`](reinterpret_cast.html "cpp/language/reinterpret cast")  
  


[ Exceptions](exceptions.html "cpp/language/exceptions")

[try block](try.html "cpp/language/try")  
---  
[Throwing exceptions](throw.html "cpp/language/throw")  
**Handling exceptions**  
Exception specification  
[noexcept specification](noexcept_spec.html "cpp/language/noexcept spec") (C++11)  
[dynamic specification](except_spec.html "cpp/language/except spec") (until C++17*)  
[noexcept operator](noexcept.html "cpp/language/noexcept") (C++11)  
  


An [exception](exceptions.html "cpp/language/exceptions") can be handled by a handler. 

## Contents

  * [1 Handler](catch.html#Handler)
  * [2 Matching exceptions](catch.html#Matching_exceptions)
  * [3 Handling exceptions](catch.html#Handling_exceptions)
    * [3.1 Initializing the handler parameter](catch.html#Initializing_the_handler_parameter)
    * [3.2 Activating the handler](catch.html#Activating_the_handler)
  * [4 Control flow](catch.html#Control_flow)
  * [5 Notes](catch.html#Notes)
  * [6 Keywords](catch.html#Keywords)
  * [7 Example](catch.html#Example)
  * [8 Defect reports](catch.html#Defect_reports)
  * [9 References](catch.html#References)
  * [10 See also](catch.html#See_also)

  
---  
  
### Handler  
  
---  
`**catch**` `**(**` attr ﻿(optional) type-specifier-seq declarator `**)**` compound-statement |  (1)  |   
`**catch**` `**(**` attr ﻿(optional) type-specifier-seq abstract-declarator ﻿(optional) `**)**` compound-statement |  (2)  |   
`**catch**` `**(**` `**...**` `**)**` compound-statement |  (3)  |   
  
1) A handler with a named parameter.

2) A handler with an unnamed parameter.

3) A handler matching all kinds of exceptions.

attr |  \-  |  (since C++11) any number of [attributes](attributes.html "cpp/language/attributes"), applies to the parameter   
---|---|---  
type-specifier-seq |  \-  |  part of a formal parameter declaration, same as in a function [parameter list](function.html#Parameter_list "cpp/language/function")  
declarator |  \-  |  part of a parameter declaration, same as in a function [parameter list](function.html#Parameter_list "cpp/language/function")  
abstract-declarator |  \-  |  part of an unnamed parameter declaration, same as in function [parameter list](function.html#Parameter_list "cpp/language/function")  
compound-statement |  \-  |  a [compound statement](statements.html#Compound_statements "cpp/language/statements")  
  
  
The parameter declaration in a handler describes the type(s) of exceptions that can cause that handler to be entered. 

If the parameter is declared to have one of the following types, the program is ill-formed: 

  * an [incomplete type](type-id.html#Incomplete_type "cpp/language/type")
  * an [abstract class type](abstract_class.html "cpp/language/abstract class")



  * an [rvalue reference](reference.html#Rvalue_reference "cpp/language/reference") type 

| (since C++11)  
---|---  
  
  * a pointer to an incomplete type other than (possibly cv-qualified) void
  * an lvalue reference to an incomplete type 



If the parameter is declared to have type “array of `T`” or function type `T`, the type is adjusted to “pointer to `T`”. 

A handler with parameter type `T` can be abbreviated as “a handler of type `T`”. 

### Matching exceptions

Each try block associates with a number of handlers, these handlers form a handler sequence. When an exception is thrown from a try block, the handlers in the sequence are tried in order of appearance to match the exception. 

A handler is a match for an [exception object](throw.html#Exception_object "cpp/language/throw") of type `E` if any of the following conditions is satisfied: 

  * The handler is of type “possibly cv-qualified `T`” or “lvalue reference to possibly cv-qualified `T`”, and any of the following conditions is satisfied: 



    

  * `E` and `T` are the same type (ignoring the top-level cv-qualifiers). 
  * `T` is an unambiguous public base class of `E`. 



  * The handler is of type “possibly cv-qualified `T`” or const T& where `T` is a pointer or pointer-to-member type, and any of the following conditions is satisfied: 



    

  * `E` is a pointer or pointer-to-member type that can be converted to `T` by at least one of the following conversions: 



    

  * A [standard pointer conversion](implicit_cast.html#Pointer_conversions "cpp/language/implicit conversion") not involving conversions to pointers to private or protected or ambiguous classes. 



    

    

  * A [function pointer conversion](implicit_cast.html#Function_pointer_conversions "cpp/language/implicit conversion"). 


| (since C++17)  
---|---  
  
    

    

  * A [qualification conversion](implicit_cast.html#Qualification_conversions "cpp/language/implicit conversion"). 



    

  * `E` is [std::nullptr_t](../types/nullptr_t.html "cpp/types/nullptr t"). 


| (since C++11)  
---|---  
  
The catch (...) handler matches exceptions of any type. If present, it can only be the last handler in a handler sequence. This handler may be used to ensure that no uncaught exceptions can possibly escape from a function that offers [nothrow exception guarantee](exceptions.html "cpp/language/exceptions"). 
    
    
    try
    {
        f();
    }
    catch (const [std::overflow_error](../error/overflow_error.html)& e)
    {} // this executes if f() throws std::overflow_error (same type rule)
    catch (const [std::runtime_error](../error/runtime_error.html)& e)
    {} // this executes if f() throws std::underflow_error (base class rule)
    catch (const [std::exception](../error/exception.html)& e)
    {} // this executes if f() throws std::logic_error (base class rule)
    catch (...)
    {} // this executes if f() throws std::string or int or any other unrelated type

If no match is found among the handlers for a try block, the search for a matching handler continues in a dynamically surrounding try block of the same thread(since C++11). 

If no matching handler is found, [std::terminate](../error/terminate.html "cpp/error/terminate") is invoked; whether or not the stack is [unwound](throw.html#Stack_unwinding "cpp/language/throw") before this invocation of [std::terminate](../error/terminate.html "cpp/error/terminate") is implementation-defined. 

### Handling exceptions

When an exception is thrown, control is transferred to the nearest handler with a matching type; “nearest” means the handler for which the compound statement or the member initializer list (if present) following the try keyword was most recently entered by the thread of control and not yet exited. 

#### Initializing the handler parameter

The parameter declared in the parameter list (if any), of type “possibly cv-qualified `T`” or “lvalue reference to possibly cv-qualified `T`”, is initialized from the [exception object](throw.html#Exception_object "cpp/language/throw"), of type `E`, as follows: 

  * If `T` is a base class of `E`, the parameter is [copy-initialized](copy_initialization.html "cpp/language/copy initialization") from an lvalue of type `T` designating the corresponding base class subobject of the exception object. 
  * Otherwise, the parameter is copy-initialized from an lvalue of type `E` designating the exception object. 



The lifetime of the parameter ends when the handler exits, after the destruction of any objects with automatic [storage duration](storage_duration.html "cpp/language/storage duration") initialized within the handler. 

When the parameter is declared as an object, any changes to that object will not affect the exception object. 

When the parameter is declared as a reference to an object, any changes to the referenced object are changes to the exception object and will have effect should that object be rethrown. 

#### Activating the handler

A handler is considered _active_ when initialization is complete for the parameter (if any) of the handler. 

Also, an implicit handler is considered active when [std::terminate](../error/terminate.html "cpp/error/terminate") is entered due to a throw. 

A handler is no longer considered active when the handler exits. 

The exception with the most recently activated handler that is still active is called the _currently handled exception_. Such an exception can be [rethrown](throw.html#throw_expressions "cpp/language/throw"). 

### Control flow

The compound-statement of a handler is a [control-flow-limited statement](statements.html#Control-flow-limited_statements "cpp/language/statements"): 
    
    
    void f()
    {
        goto label;     // error
        try
        {
            goto label; // error
        }
        catch (...)
        {
            goto label: // OK
            label: ;
        }
    }

### Notes

[Stack unwinding](throw.html#Stack_unwinding "cpp/language/throw") occurs while control is transferring to a handler. When a handler becomes active, stack unwinding is already completed. 

The exception thrown by the throw expression throw 0 does not match a handler of pointer or pointer-to-member type. 

  * throw nullptr can be used instead to throw a null pointer that matches such handlers. 

| (since C++11)  
---|---  
  
[Exception objects](throw.html#Exception_object "cpp/language/throw") can never have array or function types, therefore a handler of reference to array or function type is never a match for any exception object. 

It is possible to write handlers that can never be executed, for example by placing a handler for a final derived class after a handler for a corresponding unambiguous public base class: 
    
    
    try
    {
        f();
    }
    catch (const [std::exception](../error/exception.html)& e)
    {} // will be executed if f() throws std::runtime_error
    catch (const [std::runtime_error](../error/runtime_error.html)& e)
    {} // dead code!

Many implementations overly extend the resolution of [CWG issue 388](https://cplusplus.github.io/CWG/issues/388.html) to handlers of reference to non-const pointer types: 
    
    
    int i;
    try
    {
        try
        {
            throw static_cast<float*>(nullptr);
        }
        catch (void*& pv)
        {
            pv = &i;
            throw;
        }
    }
    catch (const float* pf)
    {
        [assert](../error/assert.html)(pf == nullptr); // should pass, but fails on MSVC and Clang
    }

### Keywords

[`catch`](../keyword/catch.html "cpp/keyword/catch")

### Example

The following example demonstrates several usage cases of the handlers:

Run this code
    
    
    #include <iostream>
    #include <vector>
     
    int main()
    {
        try
        {
            [std::cout](../io/cout.html) << "Throwing an integer exception...\n";
            throw 42;
        }
        catch (int i)
        {
            [std::cout](../io/cout.html) << " the integer exception was caught, with value: " << i << '\n';
        }
     
        try
        {
            [std::cout](../io/cout.html) << "Creating a vector of size 5... \n";
            [std::vector](../container/vector.html)<int> v(5);
            [std::cout](../io/cout.html) << "Accessing the 11th element of the vector...\n";
            [std::cout](../io/cout.html) << v.at(10); // vector::at() throws std::out_of_range
        }
        catch (const [std::exception](../error/exception.html)& e) // caught by reference to base
        {
            [std::cout](../io/cout.html) << " a standard exception was caught, with message: '"
                      << e.what() << "'\n";
        }
    }

Possible output: 
    
    
    Throwing an integer exception...
     the integer exception was caught, with value: 42
    Creating a vector of size 5...
    Accessing the 11th element of the vector...
     a standard exception was caught, with message: 'out_of_range'

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 98](https://cplusplus.github.io/CWG/issues/98.html) | C++98  | a switch statement can transfer control into a handler  | prohibited   
[CWG 210](https://cplusplus.github.io/CWG/issues/210.html) | C++98  | throw expressions were matched against the handlers  | exception objects are  
matched against the handlers   
[CWG 388](https://cplusplus.github.io/CWG/issues/388.html) | C++98  | an exception of pointer or pointer to member type could  
not be matched by a const reference to a different type  | made matchable  
when convertible   
[CWG 1166](https://cplusplus.github.io/CWG/issues/1166.html) | C++98  | the behavior was unspecified when a handler whose  
type is a reference to an abstract class type is matched  | abstract class types are  
not allowed for handlers   
[CWG 1769](https://cplusplus.github.io/CWG/issues/1769.html) | C++98  | when the type of the handler is a base of the type of  
the exception object, a converting constructor might  
be used for the initialization of the handler parameter  | the parameter is copy-initialized  
from the corresponding base class  
subobject of the exception object   
[CWG 2093](https://cplusplus.github.io/CWG/issues/2093.html) | C++98  | an exception object of pointer to object type could not match a  
handler of pointer to object type through qualification conversion  | allowed   
  
### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 14.4 Handling an exception [except.handle] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 14.4 Handling an exception [except.handle] 



  * C++17 standard (ISO/IEC 14882:2017): 



    

  * 18.3 Handling an exception [except.handle] 



  * C++14 standard (ISO/IEC 14882:2014): 



    

  * 15.3 Handling an exception [except.handle] 



  * C++11 standard (ISO/IEC 14882:2011): 



    

  * 15.3 Handling an exception [except.handle] 



  * C++03 standard (ISO/IEC 14882:2003): 



    

  * 15.3 Handling an exception [except.handle] 



  * C++98 standard (ISO/IEC 14882:1998): 



    

  * 15.3 Handling an exception [except.handle] 



### See also

  * [try block](try.html "cpp/language/try")
  * [Throwing exceptions](throw.html "cpp/language/throw")
  * [Exception handling](../error.html#Exception_handling "cpp/error")


