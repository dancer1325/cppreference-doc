 
  


  
  
  
  
  
  
  
  
  
  
  
  


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
| **setjmp**  
---  
  
| [longjmp](longjmp.html "cpp/utility/program/longjmp")  
---  
  
[Types](../program.html#Types "cpp/utility/program")  
[jmp_buf](jmp_buf.html "cpp/utility/program/jmp buf")  
  


Defined in header `[<csetjmp>](../../header/csetjmp.html "cpp/header/csetjmp")` |  |   
---|---|---  
#define setjmp(env) /* implementation-defined */ |  |   
| |   
  
Saves the current execution context into a variable env of type [std::jmp_buf](jmp_buf.html "cpp/utility/program/jmp buf"). This variable can later be used to restore the current execution context by [std::longjmp](longjmp.html "cpp/utility/program/longjmp") function. That is, when a call to [std::longjmp](longjmp.html "cpp/utility/program/longjmp") function is made, the execution continues at the particular call site that constructed the [std::jmp_buf](jmp_buf.html "cpp/utility/program/jmp buf") variable passed to [std::longjmp](longjmp.html "cpp/utility/program/longjmp"). In that case `setjmp` returns the value passed to [std::longjmp](longjmp.html "cpp/utility/program/longjmp"). 

The invocation of `setjmp` must appear only in one of the following contexts: 

  1. the entire controlling expression of [`if`](../../language/if.html "cpp/language/if"), [`switch`](../../language/switch.html "cpp/language/switch"), [`while`](../../language/while.html "cpp/language/while"), [`do-while`](../../language/do.html "cpp/language/do"), [`for`](../../language/for.html "cpp/language/for").
         
         switch (setjmp(env)) { // ...

  2. one operand of a relational or equality operator with the other operand an integer constant expression, with the resulting expression being the entire controlling expression of [`if`](../../language/if.html "cpp/language/if"), [`switch`](../../language/switch.html "cpp/language/switch"), [`while`](../../language/while.html "cpp/language/while"), [`do-while`](../../language/do.html "cpp/language/do"), [`for`](../../language/for.html "cpp/language/for").
         
         if (setjmp(env) > 0) { // ...

  3. the operand of a unary ! operator with the resulting expression being the entire controlling expression of [`if`](../../language/if.html "cpp/language/if"), [`switch`](../../language/switch.html "cpp/language/switch"), [`while`](../../language/while.html "cpp/language/while"), [`do-while`](../../language/do.html "cpp/language/do"), [`for`](../../language/for.html "cpp/language/for").
         
         while (!setjmp(env)) { // ...

  4. the entire expression of an [expression statement](../../language/statements.html#Expression_statements "cpp/language/statements") (possibly cast to void).
         
         setjmp(env);




If `setjmp` appears in any other context, the behavior is undefined. 

Additionally, the behavior is undefined if `setjmp` is invoked in a [coroutine](../../language/coroutines.html "cpp/language/coroutines") in a place where the co_await operator may be used.  | (since C++20)  
---|---  
  
Upon return to the scope of `setjmp`: 

  * all accessible objects, floating-point status flags, and other components of the abstract machine have the same values as they had when [std::longjmp](longjmp.html "cpp/utility/program/longjmp") was executed, 
  * except for the non-[volatile](../../language/cv.html "cpp/language/cv") local variables in the function containing the invocation of `setjmp`, whose values are indeterminate if they have been changed since the `setjmp` invocation. 



## Contents

  * [1 Parameters](setjmp.html#Parameters)
  * [2 Return value](setjmp.html#Return_value)
  * [3 Notes](setjmp.html#Notes)
  * [4 Example](setjmp.html#Example)
  * [5 See also](setjmp.html#See_also)

  
---  
  
### Parameters

env  |  \-  |  variable to save the execution state of the program to   
---|---|---  
  
### Return value

​0​ if the macro was called by the original code and the execution context was saved to env. 

Non-zero value if a non-local jump was just performed. The return value is the same as passed to [std::longjmp](longjmp.html "cpp/utility/program/longjmp"). 

### Notes

Above requirements forbid using return value of `setjmp` in data flow (e.g. to initialize or assign an object with it). The return value can only be either used in control flow or discarded. 

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
        if (setjmp(solver_error_handler))
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

[ longjmp](longjmp.html "cpp/utility/program/longjmp") |  jumps to specified location   
(function)   
---|---  
[C documentation](../../../c/program/setjmp.html "c/program/setjmp") for setjmp
