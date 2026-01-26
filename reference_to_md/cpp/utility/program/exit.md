 
  


  
  
  
  
  
  
  
  
  
  
  
  


[Program support utilities](../program.html "cpp/utility/program")

[Program termination](../program.html#Program_termination "cpp/utility/program")  
---  
| [abort](abort.html "cpp/utility/program/abort")  
---  
**exit**  
[quick_exit](quick_exit.html "cpp/utility/program/quick exit")(C++11)  
[_Exit](_Exit.html "cpp/utility/program/ Exit")(C++11)  
  
| [atexit](atexit.html "cpp/utility/program/atexit")  
---  
[at_quick_exit](at_quick_exit.html "cpp/utility/program/at quick exit")(C++11)  
[EXIT_SUCCESSEXIT_FAILURE](EXIT_status.html "cpp/utility/program/EXIT status")  
  
[Unreachable control flow](../program.html#Unreachable_control_flow "cpp/utility/program")  
[unreachable](../unreachable.html "cpp/utility/unreachable")(C++23)  
[Communicating with the environment](../program.html#Communicating_with_the_environment "cpp/utility/program")  
| [system](system.html "cpp/utility/program/system")  
---  
  
| [getenv](getenv.html "cpp/utility/program/getenv")  
---  
  
[Signals](../program.html#Signals "cpp/utility/program")  
| [signal](signal.html "cpp/utility/program/signal")  
---  
[raise](raise.html "cpp/utility/program/raise")  
[sig_atomic_t](sig_atomic_t.html "cpp/utility/program/sig atomic t")  
  
| [SIG_DFLSIG_IGN](SIG_strategies.html "cpp/utility/program/SIG strategies")  
---  
[SIG_ERR](SIG_ERR.html "cpp/utility/program/SIG ERR")  
  
[Signal types](../program.html#Signal_types "cpp/utility/program")  
| [SIGABRTSIGFPESIGILL](SIG_types.html "cpp/utility/program/SIG types")  
---  
  
| [SIGINTSIGSEGVSIGTERM](SIG_types.html "cpp/utility/program/SIG types")  
---  
  
[Non-local jumps](../program.html#Non-local_jumps "cpp/utility/program")  
| [setjmp](setjmp.html "cpp/utility/program/setjmp")  
---  
  
| [longjmp](longjmp.html "cpp/utility/program/longjmp")  
---  
  
[Types](../program.html#Types "cpp/utility/program")  
[jmp_buf](jmp_buf.html "cpp/utility/program/jmp buf")  
  


Defined in header `[<cstdlib>](../../header/cstdlib.html "cpp/header/cstdlib")` |  |   
---|---|---  
void exit( int exit_code ); |  | (until C++11)  
[[noreturn]] void exit( int exit_code ); |  |  (since C++11)  
| |   
  
Causes normal program termination to occur. 

Several cleanup steps are performed: 

1) Objects with static storage duration are destroyed and functions registered by calling [std::atexit](atexit.html "cpp/utility/program/atexit") are called: a) Non-local objects with static storage duration are destroyed in the reverse order of the completion of their constructor. b) Functions registered with [std::atexit](atexit.html "cpp/utility/program/atexit") are called in the reverse order of their registration, except that a function is called after any previously registered functions that had already been called at the time it was registered. c) For each function f registered with [std::atexit](atexit.html "cpp/utility/program/atexit") and each non-local object obj of static storage duration, 

    

  * if f is registered before the initialization of obj, f will only be called after the destruction of obj; 
  * if f is registered after the initialization of obj, f will only be called before the destruction of obj.


d) For each local object obj with static storage duration, obj is destroyed as if a function calling the destructor of obj were registered with [std::atexit](atexit.html "cpp/utility/program/atexit") at the completion of the constructor of obj.  | (until C++11)  
---|---  
1) The destructors of objects with thread local [storage duration](../../language/storage_duration.html "cpp/language/storage duration") that are associated with the current thread, the destructors of objects with static storage duration, and the functions registered with [std::atexit](atexit.html "cpp/utility/program/atexit") are executed concurrently, while maintaining the following guarantees: a) The last destructor for thread-local objects is [sequenced-before](../../language/eval_order.html "cpp/language/eval order") the first destructor for a static object. b) If the completion of the constructor or [dynamic initialization](../../language/initialization.html#Dynamic_initialization "cpp/language/initialization") for thread-local or static object A was sequenced-before thread-local or static object B, the completion of the destruction of B is sequenced-before the start of the destruction of A. c) If the completion of the initialization of a static object A was sequenced-before the call to [std::atexit](atexit.html "cpp/utility/program/atexit") for some function F, the call to F during termination is sequenced-before the start of the destruction of A. d) If the call to [std::atexit](atexit.html "cpp/utility/program/atexit") for some function F was sequenced-before the completion of initialization of a static object A, the start of the destruction of A is sequenced-before the call to F during termination. e) If a call to [std::atexit](atexit.html "cpp/utility/program/atexit") for some function F1 was sequenced-before the call to [std::atexit](atexit.html "cpp/utility/program/atexit") for some function F2, then the call to F2 during termination is sequenced-before the call to F1.  | (since C++11)  
  
    

  * In the above, 



    

  * If any function registered with `atexit` or any destructor of static/thread-local object throws an exception, [std::terminate](../../error/terminate.html "cpp/error/terminate") is called. 
  * If the compiler opted to lift dynamic initialization of an object to the static initialization phase of [non-local initialization](../../language/initialization.html "cpp/language/initialization"), the sequencing of destruction honors its would-be dynamic initialization. 
  * If a function-local (block-scope) static object was destroyed and then that function is called from the destructor of another static object and the control flow passes through the definition of that object (or if it is used indirectly, via pointer or reference), the behavior is undefined. 
  * If a function-local (block-scope) static object was initialized during construction of a subobject of a class or array, it is only destroyed after all subobjects of that class or all elements of that array were destroyed. 



2) All C streams are flushed and closed.

3) Files created by [std::tmpfile](../../io/c/tmpfile.html "cpp/io/c/tmpfile") are removed.

4) Control is returned to the host environment. If `exit_code` is 0 or [EXIT_SUCCESS](EXIT_status.html "cpp/utility/program/EXIT status"), an implementation-defined status indicating successful termination is returned. If `exit_code` is [EXIT_FAILURE](EXIT_status.html "cpp/utility/program/EXIT status"), an implementation-defined status indicating unsuccessful termination is returned. In other cases implementation-defined status value is returned.

Stack is not unwound: destructors of variables with automatic [storage duration](../../language/storage_duration.html "cpp/language/storage duration") are not called. 

## Contents

  * [1 Relationship with the main function](exit.html#Relationship_with_the_main_function)
  * [2 Parameters](exit.html#Parameters)
  * [3 Return value](exit.html#Return_value)
  * [4 Example](exit.html#Example)
  * [5 Defect reports](exit.html#Defect_reports)
  * [6 See also](exit.html#See_also)

  
---  
  
### Relationship with the main function

Returning from the [main function](../../language/main_function.html "cpp/language/main function"), either by a `return` statement or by reaching the end of the function performs the normal function termination (calls the destructors of the variables with automatic [storage durations](../../language/storage_duration.html "cpp/language/storage duration")) and then executes `std::exit`, passing the argument of the return statement (or ​0​ if implicit return was used) as `exit_code`. 

### Parameters

exit_code  |  \-  |  exit status of the program   
---|---|---  
  
### Return value

(none) 

### Example

Run this code
    
    
    #include <cstdlib>
    #include <iostream>
     
    struct Static
    {
        ~Static() 
        {
            [std::cout](../../io/cout.html) << "Static destructor\n";
        }
    };
     
    struct Local
    {
        ~Local() 
        {
            [std::cout](../../io/cout.html) << "Local destructor\n";
        }
    };
     
    Static static_variable; // Destructor of this object *will* be called
     
    void atexit_handler()
    {
        [std::cout](../../io/cout.html) << "atexit handler\n";
    }
     
    int main()
    {
        Local local_variable; // Destructor of this object will *not* be called
        const int result = [std::atexit](atexit.html)(atexit_handler); // Handler will be called
     
        if (result != 0)
        {
            [std::cerr](../../io/cerr.html) << "atexit registration failed\n";
            return [EXIT_FAILURE](EXIT_status.html);
        }
     
        [std::cout](../../io/cout.html) << "test\n";
        std::exit([EXIT_FAILURE](EXIT_status.html));
     
        [std::cout](../../io/cout.html) << "this line will *not* be executed\n";
    }

Output: 
    
    
    test
    atexit handler
    Static destructor

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3](https://cplusplus.github.io/LWG/issue3) | C++98  | during cleanup, the behavior was unclear when (1) a function is  
registered with [std::atexit](atexit.html "cpp/utility/program/atexit") or (2) a static local object is initialized  | made clear   
  
### See also

[ abort](abort.html "cpp/utility/program/abort") |  causes abnormal program termination (without cleaning up)   
(function)   
---|---  
[ atexit](atexit.html "cpp/utility/program/atexit") |  registers a function to be called on **std::exit()** invocation   
(function)   
[ quick_exit](quick_exit.html "cpp/utility/program/quick exit")(C++11) |  causes quick program termination without completely cleaning up   
(function)   
[ at_quick_exit](at_quick_exit.html "cpp/utility/program/at quick exit")(C++11) |  registers a function to be called on [std::quick_exit](quick_exit.html "cpp/utility/program/quick exit") invocation   
(function)   
[C documentation](../../../c/program/exit.html "c/program/exit") for exit
