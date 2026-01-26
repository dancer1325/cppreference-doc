 
  


  
  
  
  
  
  
  
  
  
  
  
  


[Program support utilities](../program.html "cpp/utility/program")

[Program termination](../program.html#Program_termination "cpp/utility/program")  
---  
| [abort](abort.html "cpp/utility/program/abort")  
---  
[exit](exit.html "cpp/utility/program/exit")  
[quick_exit](quick_exit.html "cpp/utility/program/quick exit")(C++11)  
**_Exit**(C++11)  
  
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
[[noreturn]] void _Exit( int exit_code ) noexcept; |  |  (since C++11)  
| |   
  
Causes normal program termination to occur without completely cleaning the resources. 

Destructors of variables with automatic, thread local and static storage durations are not called. Functions passed to [std::at_quick_exit()](at_quick_exit.html "cpp/utility/program/at quick exit") or [std::atexit()](atexit.html "cpp/utility/program/atexit") are not called. Whether open resources such as files are closed is implementation defined. 

If `exit_code` is 0 or [EXIT_SUCCESS](EXIT_status.html "cpp/utility/program/EXIT status"), an implementation-defined status indicating successful termination is returned to the host environment. If `exit_code` is [EXIT_FAILURE](EXIT_status.html "cpp/utility/program/EXIT status"), an implementation-defined status, indicating _unsuccessful_ termination, is returned. In other cases implementation-defined status value is returned. 

A freestanding implementation is required to provide `std::_Exit`.  | (since C++23)  
---|---  
  
## Contents

  * [1 Parameters](_Exit.html#Parameters)
  * [2 Return value](_Exit.html#Return_value)
  * [3 Notes](_Exit.html#Notes)
  * [4 Example](_Exit.html#Example)
  * [5 See also](_Exit.html#See_also)

  
---  
  
### Parameters

exit_code  |  \-  |  exit status of the program   
---|---|---  
  
### Return value

(none) 

### Notes

Although `_Exit` is required to be freestanding since C++23, it is not required to be available in a freestanding C implementation. 

### Example

Run this code
    
    
    #include <iostream>
     
    class Static
    {
    public:
        ~Static() 
        {
            [std::cout](../../io/cout.html) << "Static dtor\n";
        }
    };
     
    class Local
    {
    public:
        ~Local() 
        {
            [std::cout](../../io/cout.html) << "Local dtor\n";
        }
    };
     
    Static static_variable; // dtor of this object will *not* be called
     
    void atexit_handler()
    {
        [std::cout](../../io/cout.html) << "atexit handler\n";
    }
     
    int main()
    {
        Local local_variable; // dtor of this object will *not* be called
     
        // handler will *not* be called
        const int result = [std::atexit](atexit.html)(atexit_handler);
     
        if (result != 0)
        {
            [std::cerr](../../io/cerr.html) << "atexit registration failed\n";
            return [EXIT_FAILURE](EXIT_status.html);
        }
     
        [std::cout](../../io/cout.html) << "test" << [std::endl](../../io/manip/endl.html); // flush from std::endl
            // needs to be here, otherwise nothing will be printed
        std::_Exit([EXIT_FAILURE](EXIT_status.html));
    }

Output: 
    
    
    test

### See also

[ abort](abort.html "cpp/utility/program/abort") |  causes abnormal program termination (without cleaning up)   
(function)   
---|---  
[ exit](exit.html "cpp/utility/program/exit") |  causes normal program termination with cleaning up   
(function)   
[C documentation](../../../c/program/_Exit.html "c/program/ Exit") for _Exit
