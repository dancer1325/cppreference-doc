 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
**raise**  
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
  


Defined in header `[<csignal>](../../header/csignal.html "cpp/header/csignal")` |  |   
---|---|---  
int raise( int sig ); |  |   
| |   
  
Sends signal sig to the program. The signal handler (specified using the [std::signal()](signal.html "cpp/utility/program/signal") function) is invoked. 

If the user-defined signal handling strategy is not set using [std::signal()](signal.html "cpp/utility/program/signal") yet, it is implementation-defined whether the signal will be ignored or default handler will be invoked. 

## Contents

  * [1 Parameters](raise.html#Parameters)
  * [2 Return value](raise.html#Return_value)
  * [3 Example](raise.html#Example)
  * [4 See also](raise.html#See_also)

  
---  
  
### Parameters

sig  |  \-  |  the signal to be sent. It can be an implementation-defined value or one of the following values:  |  [ SIGABRTSIGFPESIGILLSIGINTSIGSEGVSIGTERM](SIG_types.html "cpp/utility/program/SIG types") |  defines signal types   
(macro constant)   
---|---  
  
  
  
  
### Return value

​0​ upon success, non-zero value on failure. 

### Example

Run this code
    
    
    #include <csignal>
    #include <iostream>
     
    void signal_handler(int signal)
    {
        [std::cout](../../io/cout.html) << "Received signal " << signal << '\n';
    }
     
    int main()
    {
        // Install a signal handler
        [std::signal](signal.html)([SIGTERM](SIG_types.html), signal_handler);
     
        [std::cout](../../io/cout.html) << "Sending signal " << [SIGTERM](SIG_types.html) << '\n';
        std::raise([SIGTERM](SIG_types.html));
    }

Possible output: 
    
    
    Sending signal 15
    Received signal 15

### See also

[ signal](signal.html "cpp/utility/program/signal") |  sets a signal handler for particular signal   
(function)   
---|---  
[C documentation](../../../c/program/raise.html "c/program/raise") for raise
