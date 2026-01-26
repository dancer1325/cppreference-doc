 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
**at_quick_exit**(C++11)  
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
int at_quick_exit( /*atexit-handler*/* func ) noexcept;  
int at_quick_exit( /*c-atexit-handler*/* func ) noexcept; |  (1)  |  (since C++11)  
extern "C++" using /*atexit-handler*/ = void();  
extern "C" using /*c-atexit-handler*/ = void(); |  (2)  |  (exposition only*)  
| |   
  
Registers the function pointed to by `func` to be called on quick program termination (via [std::quick_exit](quick_exit.html "cpp/utility/program/quick exit")). 

Calling the function from several threads does not induce a data race. The implementation is guaranteed to support the registration of at least 32 functions. The exact limit is implementation-defined. 

The registered functions will not be called on [normal program termination](exit.html "cpp/utility/program/exit"). If a function need to be called in that case, [std::atexit](atexit.html "cpp/utility/program/atexit") must be used. 

## Contents

  * [1 Parameters](at_quick_exit.html#Parameters)
  * [2 Return value](at_quick_exit.html#Return_value)
  * [3 Notes](at_quick_exit.html#Notes)
  * [4 Example](at_quick_exit.html#Example)
  * [5 See also](at_quick_exit.html#See_also)

  
---  
  
### Parameters

func  |  \-  |  pointer to a function to be called on quick program termination   
---|---|---  
  
### Return value

​0​ if the registration succeeds, nonzero value otherwise. 

### Notes

The two overloads are distinct because the types of the parameter `func` are distinct ([language linkage](../../language/language_linkage.html "cpp/language/language linkage") is part of its type). 

### Example

Run this code
    
    
    #include <cstdlib>
    #include <iostream>
     
    void f1()
    {
        [std::cout](../../io/cout.html) << "pushed first" << [std::endl](../../io/manip/endl.html); // flush is intentional
    }
     
    extern "C" void f2()
    {
        [std::cout](../../io/cout.html) << "pushed second\n";
    }
     
    int main()
    {
        auto f3 = []
        {
            [std::cout](../../io/cout.html) << "pushed third\n";
        };
     
        std::at_quick_exit(f1);
        std::at_quick_exit(f2);
        std::at_quick_exit(f3);
        [std::quick_exit](quick_exit.html)(0);
    }

Output: 
    
    
    pushed third
    pushed second
    pushed first

### See also

[ abort](abort.html "cpp/utility/program/abort") |  causes abnormal program termination (without cleaning up)   
(function)   
---|---  
[ exit](exit.html "cpp/utility/program/exit") |  causes normal program termination with cleaning up   
(function)   
[ atexit](atexit.html "cpp/utility/program/atexit") |  registers a function to be called on [std::exit()](exit.html "cpp/utility/program/exit") invocation   
(function)   
[ quick_exit](quick_exit.html "cpp/utility/program/quick exit")(C++11) |  causes quick program termination without completely cleaning up   
(function)   
[C documentation](../../../c/program/at_quick_exit.html "c/program/at quick exit") for at_quick_exit
