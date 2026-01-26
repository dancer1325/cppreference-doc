 
  


  
  
  
  
  
  
  
  
  
  
  
  


[Program support utilities](../program.html "cpp/utility/program")

[Program termination](../program.html#Program_termination "cpp/utility/program")  
---  
| [abort](abort.html "cpp/utility/program/abort")  
---  
[exit](exit.html "cpp/utility/program/exit")  
[quick_exit](quick_exit.html "cpp/utility/program/quick exit")(C++11)  
[_Exit](_Exit.html "cpp/utility/program/ Exit")(C++11)  
  
| **atexit**  
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
| (1) |   
int atexit( /* c-atexit-handler */* func );  
int atexit( /* atexit-handler */* func ); |  | (until C++11)  
int atexit( /* c-atexit-handler */* func ) noexcept;  
int atexit( /* atexit-handler */* func ) noexcept; |  |  (since C++11)  
extern "C" using /* c-atexit-handler */ = void();  
extern "C++" using /* atexit-handler */ = void(); |  (2)  |  (exposition only*)  
| |   
  
Registers the function pointed to by func to be called on normal program termination (via [std::exit()](exit.html "cpp/utility/program/exit") or returning from the [main function](../../language/main_function.html "cpp/language/main function")) 

The functions will be called during the destruction of the static objects, in reverse order: if A was registered before B, then the call to B is made before the call to A. Same applies to the ordering between static object constructors and the calls to `atexit`: see [std::exit](exit.html "cpp/utility/program/exit").  | (until C++11)  
---|---  
The functions may be called concurrently with the destruction of the objects with static storage duration and with each other, maintaining the guarantee that if registration of A was sequenced-before the registration of B, then the call to B is sequenced-before the call to A, same applies to the sequencing between static object constructors and calls to `atexit`: see [std::exit](exit.html "cpp/utility/program/exit").  | (since C++11)  
  
The same function may be registered more than once. 

If a function exits via an exception, [std::terminate](../../error/terminate.html "cpp/error/terminate") is called. 

`atexit` is thread-safe: calling the function from several threads does not induce a data race. 

The implementation is guaranteed to support the registration of at least 32 functions. The exact limit is implementation-defined. 

## Contents

  * [1 Parameters](atexit.html#Parameters)
  * [2 Return value](atexit.html#Return_value)
  * [3 Notes](atexit.html#Notes)
  * [4 Example](atexit.html#Example)
  * [5 See also](atexit.html#See_also)

  
---  
  
### Parameters

func  |  \-  |  pointer to a function to be called on normal program termination   
---|---|---  
  
### Return value

​0​ if the registration succeeds, nonzero value otherwise. 

### Notes

The two overloads are distinct because the types of the parameter func are distinct ([language linkage](../../language/language_linkage.html "cpp/language/language linkage") is part of its type). 

### Example

Run this code
    
    
    #include <cstdlib>
    #include <iostream>
     
    void atexit_handler_1()
    {
        [std::cout](../../io/cout.html) << "At exit #1\n";
    }
     
    void atexit_handler_2()
    {
        [std::cout](../../io/cout.html) << "At exit #2\n";
    }
     
    int main()
    {
        const int result_1 = std::atexit(atexit_handler_1);
        const int result_2 = std::atexit(atexit_handler_2);
     
        if (result_1 || result_2)
        {
            [std::cerr](../../io/cerr.html) << "Registration failed!\n";
            return [EXIT_FAILURE](EXIT_status.html);
        }
     
        [std::cout](../../io/cout.html) << "Returning from main...\n";
        return [EXIT_SUCCESS](EXIT_status.html);
    }

Output: 
    
    
    Returning from main...
    At exit #2
    At exit #1

### See also

[ abort](abort.html "cpp/utility/program/abort") |  causes abnormal program termination (without cleaning up)   
(function)   
---|---  
[ exit](exit.html "cpp/utility/program/exit") |  causes normal program termination with cleaning up   
(function)   
[ quick_exit](quick_exit.html "cpp/utility/program/quick exit")(C++11) |  causes quick program termination without completely cleaning up   
(function)   
[ at_quick_exit](at_quick_exit.html "cpp/utility/program/at quick exit")(C++11) |  registers a function to be called on [std::quick_exit](quick_exit.html "cpp/utility/program/quick exit") invocation   
(function)   
[C documentation](../../../c/program/atexit.html "c/program/atexit") for atexit
