 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
**sig_atomic_t**  
  
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
  


Defined in header `[<csignal>](../../header/csignal.html "cpp/header/csignal")` |  |   
---|---|---  
typedef /* unspecified */ sig_atomic_t; |  |   
| |   
  
An integer type which can be accessed as an atomic entity even in the presence of asynchronous interrupts made by signals. 

### Notes

Until C++11, which introduced [std::atomic](../../atomic/atomic.html "cpp/atomic/atomic") and [std::atomic_signal_fence](../../atomic/atomic_signal_fence.html "cpp/atomic/atomic signal fence"), about the only thing a strictly conforming program could do in a signal handler was to assign a value to a volatile static std::sig_atomic_t variable and promptly return. 

### See also

[ signal](signal.html "cpp/utility/program/signal") |  sets a signal handler for particular signal   
(function)   
---|---  
[ atomic_signal_fence](../../atomic/atomic_signal_fence.html "cpp/atomic/atomic signal fence")(C++11) |  fence between a thread and a signal handler executed in the same thread   
(function)   
[C documentation](../../../c/program/sig_atomic_t.html "c/program/sig atomic t") for sig_atomic_t
