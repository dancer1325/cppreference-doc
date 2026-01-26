 
  


  
  
  
  
  
  
  
  
  
  
  
  


[Program support utilities](../program.html "cpp/utility/program")

[Program termination](../program.html#Program_termination "cpp/utility/program")  
---  
| [abort](abort.html "cpp/utility/program/abort")  
---  
[exit](exit.html "cpp/utility/program/exit")  
**quick_exit**(C++11)  
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
[[noreturn]] void quick_exit( int exit_code ) noexcept; |  |  (since C++11)  
| |   
  
Causes normal program termination to occur without completely cleaning the resources. 

Functions passed to [std::at_quick_exit](at_quick_exit.html "cpp/utility/program/at quick exit") are called in reverse order of their registration. If an exception tries to propagate out of any of the functions, [std::terminate](../../error/terminate.html "cpp/error/terminate") is called. After calling the registered functions, calls [std::_Exit](_Exit.html)(exit_code). 

Functions passed to [std::atexit](atexit.html "cpp/utility/program/atexit") are not called. 

## Contents

  * [1 Parameters](quick_exit.html#Parameters)
  * [2 Return value](quick_exit.html#Return_value)
  * [3 Example](quick_exit.html#Example)
  * [4 See also](quick_exit.html#See_also)

  
---  
  
### Parameters

exit_code  |  \-  |  exit status of the program   
---|---|---  
  
### Return value

(none) 

### Example

Run this code
    
    
    #include <cstdlib>
    #include <iostream>
     
    template<int N>
    void quick_exit_handler()
    {
        [std::cout](../../io/cout.html) << "quick_exit handler #" << N << [std::endl](../../io/manip/endl.html); // flush is intended
    }
     
    void at_exit_handler()
    {
        [std::cout](../../io/cout.html) << "at_exit handler\n";
    }
     
    int main()
    {
        if ([std::at_quick_exit](at_quick_exit.html)(quick_exit_handler<1>) ||
            [std::at_quick_exit](at_quick_exit.html)(quick_exit_handler<2>))
        {
            [std::cerr](../../io/cerr.html) << "Registration failed\n";
            return [EXIT_FAILURE](EXIT_status.html);
        }
     
        [std::atexit](atexit.html)(at_exit_handler); // the handler will not be called
     
        struct R { ~R() { [std::cout](../../io/cout.html) << "destructor\n"; } } resource;
     
        /*...*/
     
        std::quick_exit([EXIT_SUCCESS](EXIT_status.html));
     
        [std::cout](../../io/cout.html) << "This statement is unreachable...\n";
    }

Output: 
    
    
    quick_exit handler #2
    quick_exit handler #1

### See also

[ abort](abort.html "cpp/utility/program/abort") |  causes abnormal program termination (without cleaning up)   
(function)   
---|---  
[ exit](exit.html "cpp/utility/program/exit") |  causes normal program termination with cleaning up   
(function)   
[ atexit](atexit.html "cpp/utility/program/atexit") |  registers a function to be called on [std::exit()](exit.html "cpp/utility/program/exit") invocation   
(function)   
[ at_quick_exit](at_quick_exit.html "cpp/utility/program/at quick exit")(C++11) |  registers a function to be called on **std::quick_exit** invocation   
(function)   
[C documentation](../../../c/program/quick_exit.html "c/program/quick exit") for quick_exit
