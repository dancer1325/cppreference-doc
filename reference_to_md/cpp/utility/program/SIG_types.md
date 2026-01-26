 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
| **SIGABRT SIGFPESIGILL**  
---  
  
| **SIGINT SIGSEGVSIGTERM**  
---  
  
[Non-local jumps](../program.html#Non-local_jumps "cpp/utility/program")  
| [setjmp](setjmp.html "cpp/utility/program/setjmp")  
---  
  
| [longjmp](longjmp.html "cpp/utility/program/longjmp")  
---  
  
[Types](../program.html#Types "cpp/utility/program")  
[jmp_buf](jmp_buf.html "cpp/utility/program/jmp buf")  
  


Defined in header `[<csignal>](../../header/csignal.html "cpp/header/csignal")` |  |   
---|---|---  
#define SIGTERM /*implementation defined*/ |  |   
#define SIGSEGV /*implementation defined*/ |  |   
#define SIGINT /*implementation defined*/ |  |   
#define SIGILL /*implementation defined*/ |  |   
#define SIGABRT /*implementation defined*/ |  |   
#define SIGFPE /*implementation defined*/ |  |   
| |   
  
Each of the above macro constants expands to an integer constant expression with distinct values, which represent different signals sent to the program. 

Constant  |  Explanation   
---|---  
`SIGTERM` |  termination request, sent to the program   
`SIGSEGV` |  invalid memory access (segmentation fault)   
`SIGINT` |  external interrupt, usually initiated by the user   
`SIGILL` |  invalid program image, such as invalid instruction   
`SIGABRT` |  abnormal termination condition, as is e.g. initiated by [std::abort()](abort.html "cpp/utility/program/abort")  
`SIGFPE` |  erroneous arithmetic operation such as divide by zero   
  
### Notes

Additional signal names [are specified by POSIX](https://pubs.opengroup.org/onlinepubs/9699919799/basedefs/signal.h.html). 

### See also

[ signal](signal.html "cpp/utility/program/signal") |  sets a signal handler for particular signal   
(function)   
---|---  
[ raise](raise.html "cpp/utility/program/raise") |  runs the signal handler for particular signal   
(function)   
[C documentation](../../../c/program/SIG_types.html "c/program/SIG types") for signal types
