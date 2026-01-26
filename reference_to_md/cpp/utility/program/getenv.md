 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
  
| **getenv**  
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
char* getenv( const char* env_var ); |  |   
| |   
  
Searches the _environment list_ provided by the host environment (the OS), for a string that matches the C string pointed to by `env_var` and returns a pointer to the C string that is associated with the matched environment list member. 

This function is not required to be thread-safe. Another call to `getenv`, as well as a call to the POSIX functions [`setenv()`](https://pubs.opengroup.org/onlinepubs/9699919799/functions/setenv.html), [`unsetenv()`](https://pubs.opengroup.org/onlinepubs/9699919799/functions/unsetenv.html), and [`putenv()`](https://pubs.opengroup.org/onlinepubs/9699919799/functions/putenv.html) may invalidate the pointer returned by a previous call or modify the string obtained from a previous call.  | (until C++11)  
---|---  
This function is thread-safe (calling it from multiple threads does not introduce a data race) as long as no other function modifies the host environment. In particular, the POSIX functions [`setenv()`](https://pubs.opengroup.org/onlinepubs/9699919799/functions/setenv.html), [`unsetenv()`](https://pubs.opengroup.org/onlinepubs/9699919799/functions/unsetenv.html), and [`putenv()`](https://pubs.opengroup.org/onlinepubs/9699919799/functions/putenv.html) would introduce a data race if called without synchronization.  | (since C++11)  
  
Modifying the string returned by `getenv` invokes undefined behavior. 

## Contents

  * [1 Parameters](getenv.html#Parameters)
  * [2 Return value](getenv.html#Return_value)
  * [3 Notes](getenv.html#Notes)
  * [4 Example](getenv.html#Example)
  * [5 See also](getenv.html#See_also)

  
---  
  
### Parameters

env_var  |  \-  |  null-terminated character string identifying the name of the environmental variable to look for   
---|---|---  
  
### Return value

Character string identifying the value of the environmental variable or null pointer if such variable is not found. 

### Notes

On POSIX systems, the [environment variables](https://pubs.opengroup.org/onlinepubs/9699919799/basedefs/V1_chap08.html#tag_08) are also accessible through the global variable `environ`, declared as extern char** environ; in [`<unistd.h>`](https://en.cppreference.com/mwiki/index.php?title=c/header/unistd&action=edit&redlink=1 "c/header/unistd \(page does not exist\)"), and through the optional third argument, `envp`, of [the main function](../../language/main_function.html "cpp/language/main function"). 

### Example

Run this code
    
    
    #include <cstdlib>
    #include <iostream>
     
    int main()
    {
        if (const char* env_p = std::getenv("PATH"))
            [std::cout](../../io/cout.html) << "Your PATH is: " << env_p << '\n';
    }

Possible output: 
    
    
    Your PATH is: /usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games

### See also

[C documentation](../../../c/program/getenv.html "c/program/getenv") for getenv  
---
