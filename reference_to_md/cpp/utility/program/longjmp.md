 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
  
| **longjmp**  
---  
  
[Types](../program.html#Types "cpp/utility/program")  
[jmp_buf](jmp_buf.html "cpp/utility/program/jmp buf")  
  


Defined in header `[<csetjmp>](../../header/csetjmp.html "cpp/header/csetjmp")` |  |   
---|---|---  
void longjmp( [std::jmp_buf](jmp_buf.html) env, int status ); |  |  (until C++17)  
[[noreturn]] void longjmp( [std::jmp_buf](jmp_buf.html) env, int status ); |  |  (since C++17)  
| |   
  
Loads the execution context env saved by a previous call to [setjmp](setjmp.html "cpp/utility/program/setjmp"). This function does not return. Control is transferred to the call site of the macro [setjmp](setjmp.html "cpp/utility/program/setjmp") that set up env. That [setjmp](setjmp.html "cpp/utility/program/setjmp") then returns the value, passed as the status. 

If the function that called [setjmp](setjmp.html "cpp/utility/program/setjmp") has exited, the behavior is undefined (in other words, only long jumps up the call stack are allowed). 

## Contents

  * [1 Extra restrictions in C++](longjmp.html#Extra_restrictions_in_C.2B.2B)
  * [2 Parameters](longjmp.html#Parameters)
  * [3 Return value](longjmp.html#Return_value)
  * [4 Notes](longjmp.html#Notes)
  * [5 Example](longjmp.html#Example)
  * [6 Defect reports](longjmp.html#Defect_reports)
  * [7 See also](longjmp.html#See_also)

  
---  
  
### Extra restrictions in C++

On top of C [`longjmp`](../../../c/program/longjmp.html "c/program/longjmp"), C++ `std::longjmp` has more restricted behavior. 

If replacing `std::longjmp` with throw and [setjmp](setjmp.html "cpp/utility/program/setjmp") with catch would invoke a [non-trivial destructor](../../language/destructor.html#Trivial_destructor "cpp/language/destructor") for any automatic object, the behavior of such `std::longjmp` is undefined. 

The behavior is undefined if `std::longjmp` is called in a [coroutine](../../language/coroutines.html "cpp/language/coroutines") in a place where the co_await operator may be used.  | (since C++20)  
---|---  
  
### Parameters

env  |  \-  |  variable referring to the execution state of the program saved by [setjmp](setjmp.html "cpp/utility/program/setjmp")  
---|---|---  
status  |  \-  |  the value to return from [setjmp](setjmp.html "cpp/utility/program/setjmp"). If it is equal to ​0​, 1 is used instead   
  
### Return value

(none) 

### Notes

`std::longjmp` is the mechanism used in C to handle unexpected error conditions where the function cannot return meaningfully. C++ generally uses [exception handling](../../language/exceptions.html "cpp/language/exceptions") for this purpose. 

### Example

Run this code
    
    
    #include <array>
    #include <cmath>
    #include <csetjmp>
    #include <cstdlib>
    #include <format>
    #include <iostream>
     
    [std::jmp_buf](jmp_buf.html) solver_error_handler;
     
    [std::array](../../container/array.html)<double, 2> solve_quadratic_equation(double a, double b, double c)
    {
        const double discriminant = b * b - 4.0 * a * c;
        if (discriminant < 0)
            std::longjmp(solver_error_handler, true); // Go to error handler
     
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

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 619](https://cplusplus.github.io/LWG/issue619) | C++98  | the wording of the extra restrictions in C++ was vague  | improved the wording   
[LWG 894](https://cplusplus.github.io/LWG/issue894) | C++98  | the behavior was undefined if replacing  
`std::longjmp` with throw and [setjmp](setjmp.html "cpp/utility/program/setjmp") with  
catch would destroy any automatic object  | the behavior is only undefined  
if a non-trivial destructor for  
any automatic object is invoked   
  
### See also

[ setjmp](setjmp.html "cpp/utility/program/setjmp") |  saves the context   
(function macro)   
---|---  
[C documentation](../../../c/program/longjmp.html "c/program/longjmp") for longjmp
