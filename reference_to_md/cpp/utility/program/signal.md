 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
| **signal**  
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
  


Defined in header `[<csignal>](../../header/csignal.html "cpp/header/csignal")` |  |   
---|---|---  
/* signal-handler */* signal( int sig, /* signal-handler */* handler ); |  (1)  |   
extern "C" using /* signal-handler */ = void(int); |  (2)  |  (exposition only*)  
| |   
  
Changes handling of the signal sig. Depending on handler, the signal can be ignored, set to default, or handled by a user-defined function. 

When signal handler is set to a function and a signal occurs, it is implementation defined whether std::signal(sig, [SIG_DFL](SIG_strategies.html)) will be executed immediately before the start of signal handler. Also, the implementation can prevent some implementation-defined set of signals from occurring while the signal handler runs. 

For some of the signals, the implementation may call std::signal(sig, [SIG_IGN](SIG_strategies.html)) at the startup of the program. For the rest, the implementation must call std::signal(sig, [SIG_DFL](SIG_strategies.html)). 

(Note: POSIX introduced [`sigaction`](https://pubs.opengroup.org/onlinepubs/9699919799/functions/sigaction.html) to standardize these implementation-defined behaviors) 

## Contents

  * [1 Parameters](signal.html#Parameters)
  * [2 Return value](signal.html#Return_value)
  * [3 Signal handler](signal.html#Signal_handler)
  * [4 Notes](signal.html#Notes)
  * [5 Example](signal.html#Example)
  * [6 References](signal.html#References)
  * [7 Defect reports](signal.html#Defect_reports)
  * [8 See also](signal.html#See_also)

  
---  
  
### Parameters

sig  |  \-  |  the signal to set the signal handler to. It can be an implementation-defined value or one of the following values:  |  [ SIGABRTSIGFPESIGILLSIGINTSIGSEGVSIGTERM](SIG_types.html "cpp/utility/program/SIG types") |  defines signal types   
(macro constant)   
---|---  
handler  |  \-  |  the signal handler. This must be one of the following: 

  * [SIG_DFL](SIG_strategies.html "cpp/utility/program/SIG strategies") macro. The signal handler is set to default signal handler. 
  * [SIG_IGN](SIG_strategies.html "cpp/utility/program/SIG strategies") macro. The signal is ignored. 
  * A pointer to a function. The signature of the function must be equivalent to the following: 

|  extern "C" void fun(int sig); |  |   
---|---|---  
| |   
  
  
  
  
### Return value

Previous signal handler on success or [SIG_ERR](SIG_ERR.html "cpp/utility/program/SIG ERR") on failure (setting a signal handler can be disabled on some implementations). 

### Signal handler

The following limitations are imposed on the user-defined function that is installed as a signal handler. 

If the signal handler is called NOT as a result of [std::abort](abort.html "cpp/utility/program/abort") or [std::raise](raise.html "cpp/utility/program/raise") (asynchronous signal), the behavior is undefined if 

  * the signal handler calls any function within the standard library, except 



    

  * [std::abort](abort.html "cpp/utility/program/abort")
  * [std::_Exit](_Exit.html "cpp/utility/program/ Exit")
  * [std::quick_exit](quick_exit.html "cpp/utility/program/quick exit")
  * `std::signal` with the first argument being the number of the signal currently handled (async handler can re-register itself, but not other signals). 



  * the signal handler refers to any object with static storage duration that is not [std::atomic](../../atomic/atomic.html "cpp/atomic/atomic") or (since C++11)volatile [std::sig_atomic_t](sig_atomic_t.html). 

| (until C++17)  
---|---  
A _plain lock-free atomic operation_ is an invocation of a function f from [`<atomic>`](../../header/atomic.html "cpp/header/atomic") or [`<stdatomic.h>`](../../header/stdatomic.h.html "cpp/header/stdatomic.h")(since C++23), such that: 

  * f is the function [std::atomic_is_lock_free](../../atomic/atomic_is_lock_free.html "cpp/atomic/atomic is lock free"), 
  * f is the member function `is_lock_free` (e.g. [`std::atomic::is_lock_free()`](../../atomic/atomic/is_lock_free.html "cpp/atomic/atomic/is lock free")), 
  * f is a non-static member function of [std::atomic_flag](../../atomic/atomic_flag.html "cpp/atomic/atomic flag"), 
  * f is a non-member function, and the first parameter of f has type _cv_ [std::atomic_flag](../../atomic/atomic_flag.html)*, 
  * f is a non-static member function invoked on an object obj, such that obj.is_lock_free() yields true, or 
  * f is a non-member function, and for every pointer-to-atomic argument arg passed to f, [std::atomic_is_lock_free](../../atomic/atomic_is_lock_free.html)(arg) yields true. 

The behavior is undefined if any signal handler performs any of the following: 

  * call to any library function, except for plain lock-free atomic operations and the following _signal-safe_ functions (note, in particular, dynamic allocation is not signal-safe): 



    

  * `std::signal` with the first argument being the number of the signal currently handled (signal handler can re-register itself, but not other signals). 
  * member functions of [std::numeric_limits](../../types/numeric_limits.html "cpp/types/numeric limits")
  * [std::_Exit](_Exit.html "cpp/utility/program/ Exit")
  * [std::abort](abort.html "cpp/utility/program/abort")
  * [std::quick_exit](quick_exit.html "cpp/utility/program/quick exit")
  * The member functions of [std::initializer_list](../initializer_list.html "cpp/utility/initializer list") and the `std::initializer_list` overloads of [std::begin](../../iterator/begin.html "cpp/iterator/begin") and [std::end](../../iterator/end.html "cpp/iterator/end")
  * [std::forward](../forward.html "cpp/utility/forward"), std::move, [std::move_if_noexcept](../move_if_noexcept.html "cpp/utility/move if noexcept")
  * All functions from [`<type_traits>`](../../header/type_traits.html "cpp/header/type traits")
  * [std::memcpy](../../string/byte/memcpy.html "cpp/string/byte/memcpy") and [std::memmove](../../string/byte/memmove.html "cpp/string/byte/memmove")



  * access to an object with thread storage duration 
  * a [`dynamic_cast`](../../language/dynamic_cast.html "cpp/language/dynamic cast") expression 
  * a [`throw`](../../language/throw.html "cpp/language/throw") expression 
  * entry to a [`try block`](../../language/try.html "cpp/language/try")
  * initialization of a static variable that performs [dynamic non-local initialization](../../language/initialization.html#Non-local_variables "cpp/language/initialization") (including delayed until first ODR-use) 
  * waits for completion of initialization of any variable with static storage duration due to another thread concurrently initializing it 

| (since C++17)  
  
If the user defined function returns when handling [SIGFPE](SIG_types.html "cpp/utility/program/SIG types"), [SIGILL](SIG_types.html "cpp/utility/program/SIG types"), [SIGSEGV](SIG_types.html "cpp/utility/program/SIG types") or any other implementation-defined signal specifying a computational exception, the behavior is undefined. 

If the signal handler is called as a result of [std::abort](abort.html "cpp/utility/program/abort") or [std::raise](raise.html "cpp/utility/program/raise") (synchronous signal), the behavior is undefined if the signal handler calls [std::raise](raise.html "cpp/utility/program/raise"). 

On entry to the signal handler, the state of the [floating-point environment](../../numeric/fenv.html "cpp/numeric/fenv") and the values of all objects is unspecified, except for 

  * objects of type volatile [std::sig_atomic_t](sig_atomic_t.html)

| 

  * objects of lock-free [std::atomic](../../atomic/atomic.html "cpp/atomic/atomic") types 
  * side effects made visible through [std::atomic_signal_fence](../../atomic/atomic_signal_fence.html "cpp/atomic/atomic signal fence")

| (since C++11)  
---|---  
  
On return from a signal handler, the value of any object modified by the signal handler that is not volatile [std::sig_atomic_t](sig_atomic_t.html) or lock-free [std::atomic](../../atomic/atomic.html "cpp/atomic/atomic") is indeterminate. 

(until C++14)  
A call to the function `signal()` [synchronizes-with](../../atomic/memory_order.html "cpp/atomic/memory order") any resulting invocation of the signal handler. If a signal handler is executed as a result of a call to [std::raise](raise.html "cpp/utility/program/raise") (synchronously), then the execution of the handler is _sequenced-after_ the invocation of `std::raise` and _sequenced-before_ the return from it and runs on the same thread as std::raise. Execution of the handlers for other signals is _unsequenced_ with respect to the rest of the program and runs on an unspecified thread. Two accesses to the same object of type volatile [std::sig_atomic_t](sig_atomic_t.html) do not result in a data race if both occur in the same thread, even if one or more occurs in a signal handler. For each signal handler invocation, evaluations performed by the thread invoking a signal handler can be divided into two groups A and B, such that no evaluations in B _happen-before_ evaluations in A, and the evaluations of such volatile [std::sig_atomic_t](sig_atomic_t.html) objects take values as though all evaluations in A [happened-before](../../atomic/memory_order.html "cpp/atomic/memory order") the execution of the signal handler and the execution of the signal handler _happened-before_ all evaluations in B.  | (since C++14)  
  
### Notes

POSIX requires that `signal` is thread-safe, and [specifies a list of async-signal-safe library functions](https://pubs.opengroup.org/onlinepubs/9699919799/functions/V2_chap02.html#tag_15_04) that may be called from any signal handler. 

Signal handlers are expected to have [C linkage](../../language/language_linkage.html "cpp/language/language linkage") and, in general, only use the features from the common subset of C and C++. However, common implementations allow a function with C++ linkage to be used as a signal handler. 

### Example

Run this code
    
    
    #include <csignal>
    #include <iostream>
     
    namespace
    {
        volatile [std::sig_atomic_t](sig_atomic_t.html) gSignalStatus;
    }
     
    void signal_handler(int signal)
    {
        gSignalStatus = signal;
    }
     
    int main()
    {
        // Install a signal handler
        std::signal([SIGINT](SIG_types.html), signal_handler);
     
        [std::cout](../../io/cout.html) << "SignalValue: " << gSignalStatus << '\n';
        [std::cout](../../io/cout.html) << "Sending signal: " << [SIGINT](SIG_types.html) << '\n';
        [std::raise](raise.html)([SIGINT](SIG_types.html));
        [std::cout](../../io/cout.html) << "SignalValue: " << gSignalStatus << '\n';
    }

Possible output: 
    
    
    SignalValue: 0
    Sending signal: 2
    SignalValue: 2

### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 17.13.5 Signal handlers [support.signal] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 17.13.5 Signal handlers [support.signal] 



  * C++17 standard (ISO/IEC 14882:2017): 



    

  * 21.10.4 Signal handlers [support.signal] 



### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3756](https://cplusplus.github.io/LWG/issue3756) | C++17  | it was unclear whether [std::atomic_flag](../../atomic/atomic_flag.html "cpp/atomic/atomic flag") is signal-safe  | it is   
  
### See also

[ raise](raise.html "cpp/utility/program/raise") |  runs the signal handler for particular signal   
(function)   
---|---  
[ atomic_signal_fence](../../atomic/atomic_signal_fence.html "cpp/atomic/atomic signal fence")(C++11) |  fence between a thread and a signal handler executed in the same thread   
(function)   
[C documentation](../../../c/program/signal.html "c/program/signal") for signal
