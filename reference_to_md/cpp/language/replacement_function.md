

  
  
  
  
  

  
  
  

---  
  

---  
  


[ Functions](functions.html "cpp/language/functions")

Declarations  
---  
[Function declaration](function.html "cpp/language/function")  
[Function parameter list](function.html#Parameter_list "cpp/language/function")  
[Function definition](function.html#Function_definition "cpp/language/function")  
[Function contract specifiers](function.html#Function_contract_specifiers "cpp/language/function") (C++26)  
[Default arguments](default_arguments.html "cpp/language/default arguments")  
[Variadic arguments](variadic_arguments.html "cpp/language/variadic arguments")  
[`inline` specifier](inline.html "cpp/language/inline")  
[Lambda expressions](lambda.html "cpp/language/lambda") (C++11)  
[Coroutines](coroutines.html "cpp/language/coroutines") (C++20)  
**Replacement functions**  
Function calls  
[Argument-Dependent Lookup (ADL)](adl.html "cpp/language/adl")  
[Function-call operator](operator_other.html#Built-in_function_call_operator "cpp/language/operator other")  
[Function objects](../named_req/FunctionObject.html "cpp/named req/FunctionObject")  
Overloading  
[Overload resolution](overload_resolution.html "cpp/language/overload resolution")  
[Operator overloading](operators.html "cpp/language/operators")  
[Address of an overload set](overloaded_address.html "cpp/language/overloaded address")  
  


Certain functions for which a definition is supplied by the implementation are _replaceable ﻿_. A C++ program may provide a definition with the [signature](function.html#Function_signature "cpp/language/function") of a replaceable function, called a _replacement function ﻿_. The replacement function, if provided, is used instead of the default version supplied by the implementation. Such replacement occurs prior to program startup. 

If a declaration of the replacement function does not satisfy any of the following conditions, the program is ill-formed, no diagnostic is required: 

  * It is not [inline](inline.html "cpp/language/inline"). 
  * It is [attached](modules.html#Module_ownership "cpp/language/modules") to the global module. 
  * It has C++ [language linkage](language_linkage.html "cpp/language/language linkage"). 
  * It has the same return type as the replaceable function. 
  * If the replaceable function is declared in a [standard library header](../headers.html "cpp/header"), it would be valid as a redeclaration of the declaration in that header. 



###  Core language

It is implementation-defined whether the [contract-violation handler](contracts.html#Contract-violation_handler "cpp/language/contracts") ::handle_contract_violation is replaceable.  | (since C++26)  
---|---  
  
### Standard library

The following standard library functions are replaceable, and the description of function semantics apply to both the default version defined by the C++ standard library and the replacement function defined by the program: 

[ operator newoperator new[]](../memory/new/operator_new.html "cpp/memory/new/operator new") |  allocation functions   
(function)   
---|---  
[ operator deleteoperator delete[]](../memory/new/operator_delete.html "cpp/memory/new/operator delete") |  deallocation functions   
(function)   
[ is_debugger_present](../utility/is_debugger_present.html "cpp/utility/is debugger present")(C++26) |  checks whether a program is running under the control of a debugger   
(function)   
  
### Example

Uses a replacement allocation function:

Run this code
    
    
    #include <cstddef>
    #include <new>
    #include <print>
     
    // replacement function
    void* [operator new](../memory/new/operator_new.html)([std::size_t](../types/size_t.html) count)
    {
        [std::print](../io/print.html)("Replaced!");
        return nullptr;
    }
     
    int main()
    {
        int* ptr = new int; // invokes the replacement version defined by the program
    }

Output: 
    
    
    Replaced!
