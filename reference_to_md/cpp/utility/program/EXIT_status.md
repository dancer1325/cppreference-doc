 
  


  
  
  
  
  
  
  
  
  
  
  
  


[Program support utilities](../program.html "cpp/utility/program")

[Program termination](../program.html#Program_termination "cpp/utility/program")  
---  
| [abort](abort.html "cpp/utility/program/abort")  
---  
[exit](exit.html "cpp/utility/program/exit")  
[quick_exit](quick_exit.html "cpp/utility/program/quick exit")(C++11)  
[_Exit](_Exit.html "cpp/utility/program/ Exit")(C++11)  
  
| [atexit](atexit.html "cpp/utility/program/atexit")  
---  
[at_quick_exit](at_quick_exit.html "cpp/utility/program/at quick exit")(C++11)  
**EXIT_SUCCESS EXIT_FAILURE**  
  
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
#define EXIT_SUCCESS /*implementation defined*/ |  |   
#define EXIT_FAILURE /*implementation defined*/ |  |   
| |   
  
The `EXIT_SUCCESS` and `EXIT_FAILURE` macros expand into integral constant expressions that can be used as arguments to the [std::exit](exit.html "cpp/utility/program/exit") function (and, therefore, as the values to return from the [main function](../../language/main_function.html "cpp/language/main function")), and indicate program execution status. 

A freestanding implementation is required to provide `EXIT_SUCCESS` and `EXIT_FAILURE`.  | (since C++23)  
---|---  
Constant  |  Description   
---|---  
`EXIT_SUCCESS` |  successful execution of a program   
`EXIT_FAILURE` |  unsuccessful execution of a program   
  
### Notes

Both `EXIT_SUCCESS` and the value zero indicate successful program execution status (see [std::exit](exit.html "cpp/utility/program/exit")), although it is not required that `EXIT_SUCCESS` equals zero. 

Although `EXIT_SUCCESS` and `EXIT_FAILURE` are required to be freestanding since C++23, they are not required to be available in a freestanding C implementation. 

### Example

Run this code
    
    
    #include <cstdlib>
    #include <iostream>
     
    int main(int argc, char* argv[])
    {
        if (argc <= 1)
        {
            [std::cout](../../io/cout.html) << "At least one command-line argument required\n";
            return EXIT_FAILURE;
        }
     
        [std::cout](../../io/cout.html) << argv[1] << '\n';
        return EXIT_SUCCESS;
    }

Possible output: 
    
    
    The quick brown fox jumps over the lazy cat

### See also

[C documentation](../../../c/program/EXIT_status.html "c/program/EXIT status") for EXIT_SUCCESS, EXIT_FAILURE  
---
