 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
**jmp_buf**  
  


Defined in header `[<csetjmp>](../../header/csetjmp.html "cpp/header/csetjmp")` |  |   
---|---|---  
typedef /* unspecified */ jmp_buf; |  |   
| |   
  
The `std::jmp_buf` type is an array type suitable for storing information to restore a calling environment. The stored information is sufficient to restore execution at the correct block of the program and invocation of that block. The state of floating-point status flags, or open files, or any other data is not stored in an object of type `std::jmp_buf`. 

### Example

Run this code
    
    
    #include <array>
    #include <cmath>
    #include <csetjmp>
    #include <cstdlib>
    #include <format>
    #include <iostream>
     
    std::jmp_buf solver_error_handler;
     
    [std::array](../../container/array.html)<double, 2> solve_quadratic_equation(double a, double b, double c)
    {
        const double discriminant = b * b - 4.0 * a * c;
        if (discriminant < 0)
            [std::longjmp](longjmp.html)(solver_error_handler, true); // Go to error handler
     
        const double delta = [std::sqrt](../../numeric/math/sqrt.html)(discriminant) / (2.0 * a);
        const double argmin = -b / (2.0 * a);
        return {argmin - delta, argmin + delta};
    }
     
    void show_quadratic_equation_solution(double a, double b, double c)
    {
        [std::cout](../../io/cout.html) << [std::format](../format/format.html)("Solving {}x² + {}x + {} = 0...\n", a, b, c);
        auto [x_0, x_1] = solve_quadratic_equation(a, b, c);
        [std::cout](../../io/cout.html) << [std::format](../format/format.html)("x₁ = {}, x₂ = {}\n\n", x_0, x_1);
    }
     
    int main()
    {
        if ([setjmp](setjmp.html)(solver_error_handler))
        {
            // Error handler for solver
            [std::cout](../../io/cout.html) << "No real solution\n";
            return [EXIT_FAILURE](EXIT_status.html);
        }
     
        for (auto [a, b, c] : {[std::array](../../container/array.html){1, -3, 2}, {2, -3, -2}, {1, 2, 3}})
            show_quadratic_equation_solution(a, b, c);
     
        return [EXIT_SUCCESS](EXIT_status.html);
    }

Output: 
    
    
    Solving 1x² + -3x + 2 = 0...
    x₁ = 1, x₂ = 2
     
    Solving 2x² + -3x + -2 = 0...
    x₁ = -0.5, x₂ = 2
     
    Solving 1x² + 2x + 3 = 0...
    No real solution

### See also

[ setjmp](setjmp.html "cpp/utility/program/setjmp") |  saves the context   
(function macro)   
---|---  
[ longjmp](longjmp.html "cpp/utility/program/longjmp") |  jumps to specified location   
(function)   
[C documentation](../../../c/program/jmp_buf.html "c/program/jmp buf") for jmp_buf
