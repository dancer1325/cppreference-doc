* == attribute specifier
  * | C++11
  * | C++26,
    * removed
* allows
  * indicating that the function does NOT return 

## Contents

  * [1 Syntax](noreturn.html#Syntax)
  * [2 Explanation](noreturn.html#Explanation)
  * [3 Example](noreturn.html#Example)
  * [4 Standard library](noreturn.html#Standard_library)
    * [4.1 Terminating functions](noreturn.html#Terminating_functions)
    * [4.2 Compiler hints](noreturn.html#Compiler_hints)
    * [4.3 Always-throwing functions](noreturn.html#Always-throwing_functions)
    * [4.4 Non-local jumps (since C++17)](noreturn.html#Non-local_jumps_.28since_C.2B.2B17.29)
  * [5 Defect reports](noreturn.html#Defect_reports)
  * [6 References](noreturn.html#References)
  * [7 See also](noreturn.html#See_also)

### Syntax  

`[[noreturn]]` 
  
### Explanation

Indicates that the function will not return control flow to the calling function after it finishes (e.g. functions that terminate the application, throw exceptions, loop indefinitely, etc.)
* This attribute applies to the name of the function being declared in function declarations only. 

If a function previously declared with [[noreturn]] is invoked and that invocation eventually returns, the behavior is [runtime-undefined](../ub.html "cpp/language/ub"). 

The first declaration of the function must specify this attribute if any declaration specifies it
* If a function is declared with [[noreturn]] in one translation unit, and the same function is declared without [[noreturn]] in another translation unit, the program is ill-formed; no diagnostic required. 

### Standard library

The following standard functions are declared with `noreturn` attribute: 

#####  Terminating functions   

[ _Exit](../../utility/program/_Exit.html "cpp/utility/program/ Exit")(C++11) |  causes normal program termination without cleaning up   
(function)   
[ abort](../../utility/program/abort.html "cpp/utility/program/abort") |  causes abnormal program termination (without cleaning up)   
(function)   
[ exit](../../utility/program/exit.html "cpp/utility/program/exit") |  causes normal program termination with cleaning up   
(function)   
[ quick_exit](../../utility/program/quick_exit.html "cpp/utility/program/quick exit")(C++11) |  causes quick program termination without completely cleaning up   
(function)   
[ terminate](../../error/terminate.html "cpp/error/terminate") |  function called when exception handling fails   
(function)   
[ unexpected](../../error/unexpected.html "cpp/error/unexpected")(deprecated in C++11)(removed in C++17) |  function called when dynamic exception specification is violated   
(function)   
  
#####  Compiler hints   
  
[ unreachable](../../utility/unreachable.html "cpp/utility/unreachable")(C++23) |  marks unreachable point of execution   
(function)   
  
#####  Always-throwing functions   
  
[ rethrow_exception](../../error/rethrow_exception.html "cpp/error/rethrow exception")(C++11) |  throws the exception from an [std::exception_ptr](../../error/exception_ptr.html "cpp/error/exception ptr")   
(function)   
[ rethrow_nested](../../error/nested_exception/rethrow_nested.html "cpp/error/nested exception/rethrow nested") |  throws the stored exception   
(public member function of `std::nested_exception`)  
[ throw_with_nested](../../error/throw_with_nested.html "cpp/error/throw with nested")(C++11) |  throws its argument with [std::nested_exception](../../error/nested_exception.html "cpp/error/nested exception") mixed in   
(function template)   
  
#####  Non-local jumps (since C++17)  
  
[ longjmp](../../utility/program/longjmp.html "cpp/utility/program/longjmp") |  jumps to specified location   
(function)   
  
### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 2924](https://cplusplus.github.io/CWG/issues/2924.html) | C++11  | returning from a [[noreturn]] function  
would result in undefined behavior  | results in runtime-  
undefined behavior   
  
### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 9.12.10 Noreturn attribute [dcl.attr.noreturn] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 9.12.9 Noreturn attribute [dcl.attr.noreturn] 



  * C++17 standard (ISO/IEC 14882:2017): 



    

  * 10.6.8 Noreturn attribute [dcl.attr.noreturn] 



  * C++14 standard (ISO/IEC 14882:2014): 



    

  * 7.6.3 Noreturn attribute [dcl.attr.noreturn] 



  * C++11 standard (ISO/IEC 14882:2011): 



    

  * 7.6.3 Noreturn attribute [dcl.attr.noreturn] 



### See also

[C documentation](../../../c/language/noreturn.html "c/language/ Noreturn") for _Noreturn  
---  
[C documentation](../../../c/language/attributes/noreturn.html "c/language/attributes/noreturn") for `[[noreturn]]`
