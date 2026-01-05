
[Object lifetime](lifetime.html "cpp/language/lifetime")  
[Storage duration and linkage](storage_duration.html "cpp/language/storage duration")  
[Definitions and ODR](definition.html "cpp/language/definition")  
[Name lookup](lookup.html "cpp/language/lookup")  
[ Qualified name lookup](qualified_lookup.html "cpp/language/qualified lookup")  
[ Unqualified name lookup](unqualified_lookup.html "cpp/language/unqualified lookup")  
**The as-if rule**  
[Undefined behavior](ub.html "cpp/language/ub")  
[Memory model](memory_model.html "cpp/language/memory model")  
[Multi-threaded executions and data races](multithread.html "cpp/language/multithread") (C++11)  
[Character sets and encodings](charset.html "cpp/language/charset")  
[Phases of translation](translation_phases.html "cpp/language/translation phases")  
[The `main` function](main_function.html "cpp/language/main function")  
[Modules](modules.html "cpp/language/modules") (C++20)  
[Contracts](contracts.html "cpp/language/contracts") (C++26)  
  


Allows any and all code transformations that do not change the observable behavior of the program. 

## Contents

  * [1 Explanation](as_if.html#Explanation)
  * [2 Notes](as_if.html#Notes)
  * [3 Example](as_if.html#Example)
  * [4 See also](as_if.html#See_also)

  
---  
  
### Explanation

_Observable behavior_ of a program includes the following: 

  * At every [sequence point](eval_order.html "cpp/language/eval order"), the values of all [volatile](cv.html "cpp/language/cv") objects are stable (previous evaluations are complete, new evaluations not started). 

| (until C++11)  
---|---  
  
  * Accesses (reads and writes) to [volatile](cv.html "cpp/language/cv") objects occur strictly according to the semantics of the expressions in which they occur. In particular, they are [not reordered](../atomic/memory_order.html "cpp/atomic/memory order") with respect to other volatile accesses on the same thread. 

| (since C++11)  
  
  * At program termination, data written to files is exactly as if the program was executed as written. 

| (until C++26)  
---|---  
  
  * Data delivered to the host environment is written into files. 

| (since C++26)  
  
  * Prompting text which is sent to interactive devices will be shown before the program waits for input. 
  * If the ISO C pragma [` #pragma STDC FENV_ACCESS`](../preprocessor/impl.html#.23pragma_STDC "cpp/preprocessor/impl") is supported and is set to `ON`, the changes to the [floating-point environment](../numeric/fenv.html "cpp/numeric/fenv") (floating-point exceptions and rounding modes) are guaranteed to be observed by the floating-point arithmetic operators and function calls as if executed as written, except that 
    * the result of any floating-point expression other than cast and assignment may have range and precision of a floating-point type different from the type of the expression (see [FLT_EVAL_METHOD](../types/climits/FLT_EVAL_METHOD.html "cpp/types/climits/FLT EVAL METHOD")), 
    * notwithstanding the above, intermediate results of any floating-point expression may be calculated as if to infinite range and precision (unless [` #pragma STDC FP_CONTRACT`](../preprocessor/impl.html#.23pragma_STDC "cpp/preprocessor/impl") is `OFF`). 

The C++ compiler is permitted to perform any changes to the program as long as given the same input, the observable behavior of the program is one of the possible observable behaviors corresponding to that input. However, if certain input will result in [undefined behavior](ub.html "cpp/language/ub"), the compiler cannot guarantee any observable behavior of the program with that input, even if any operation of the observable behavior happens before any possible undefined operation.  | (until C++26)  
---|---  
A program may contain _observable checkpoints ﻿_. An operation `OP` is _undefined-free_ if for every undefined operation `U`, there is an observable checkpoint `CP` such that `OP` happens before `CP` and `CP` happens before `U`. The _defined prefix_ of the program with a given input comprises all its undefined-free operations. The C++ compiler is permitted to perform any changes to the program as long as given the same input, the observable behavior of the defined prefix of the program is one of the possible observable behaviors corresponding to that defined prefix. If certain input will result in [undefined behavior](ub.html "cpp/language/ub"), the compiler cannot guarantee any observable behavior of the program with that input that does not belong to the defined prefix.  | (since C++26)  
  
### Notes

Because the compiler is (usually) unable to analyze the code of an external library to determine whether it does or does not perform I/O or volatile access, third-party library calls also aren't affected by optimization. However, standard library calls may be replaced by other calls, eliminated, or added to the program during optimization. Statically-linked third-party library code may be subject to link-time optimization. 

Programs with undefined behavior often change observable behavior when recompiled with different optimization settings. For example, if a test for signed integer overflow relies on the result of that overflow, e.g. if (n + 1 < n) abort();, [it is removed entirely by some compilers](https://blog.llvm.org/2011/05/what-every-c-programmer-should-know_14.html) because [signed overflow is undefined behavior](operator_arithmetic.html#Overflows "cpp/language/operator arithmetic") and the optimizer is free to assume it never happens and the test is redundant. 

[Copy elision](copy_elision.html "cpp/language/copy elision") is an exception from the as-if rule: the compiler may remove calls to move- and copy-constructors and the matching calls to the destructors of temporary objects even if those calls have observable side effects. 

[new expression](new.html#Allocation "cpp/language/new") has another exception from the as-if rule: the compiler may remove calls to the [replaceable allocation functions](../memory/new/operator_new.html "cpp/memory/new/operator new") even if a user-defined replacement is provided and has observable side-effects.  | (since C++14)  
---|---  
  
The count and order of floating-point exceptions can be changed by optimization as long as the state as observed by the next floating-point operation is as if no optimization took place: 
    
    
    #pragma STDC FENV_ACCESS ON
    for (i = 0; i < n; ++i)
        x + 1; // x + 1 is dead code, but may raise FP exceptions
               // (unless the optimizer can prove otherwise). However, executing it n times
               // will raise the same exception over and over. So this can be optimized to:
    if (0 < n)
        x + 1;

### Example

Run this code
    
    
    int& preinc(int& n) { return ++n; }
    int add(int n, int m) { return n + m; }
     
    // volatile input to prevent constant folding
    volatile int input = 7;
     
    // volatile output to make the result a visible side-effect
    volatile int result;
     
    int main()
    {
        int n = input;
    // using built-in operators would invoke undefined behavior
    //  int m = ++n + ++n;
    // but using functions makes sure the code executes as-if 
    // the functions were not overlapped
        int m = add(preinc(n), preinc(n));
        result = m;
    }

Output: 
    
    
    # full code of the main() function as produced by the GCC compiler
    # x86 (Intel) platform:
            movl    input(%rip), %eax   # eax = input
            leal    3(%rax,%rax), %eax  # eax = 3 + eax + eax
            movl    %eax, result(%rip)  # result = eax
            xorl    %eax, %eax          # eax = 0 (the return value of main())
            ret
     
    # PowerPC (IBM) platform:
            lwz 9,LC..1(2)
            li 3,0          # r3 = 0 (the return value of main())
            lwz 11,0(9)     # r11 = input;
            slwi 11,11,1    # r11 = r11 << 1;
            addi 0,11,3     # r0 = r11 + 3;
            stw 0,4(9)      # result = r0;
            blr
     
    # Sparc (Sun) platform:
            sethi   %hi(result), %g2
            sethi   %hi(input), %g1
            mov     0, %o0                 # o0 = 0 (the return value of main)
            ld      [%g1+%lo(input)], %g1  # g1 = input
            add     %g1, %g1, %g1          # g1 = g1 + g1
            add     %g1, 3, %g1            # g1 = 3 + g1
            st      %g1, [%g2+%lo(result)] # result = g1
            jmp     %o7+8
            nop
     
    # in all cases, the side effects of preinc() were eliminated, and the
    # entire main() function was reduced to the equivalent of result = 2 * input + 3;

### See also

  * [copy elision](copy_elision.html "cpp/language/copy elision")

[C documentation](../../c/language/as_if.html "c/language/as if") for as-if rule  
---
