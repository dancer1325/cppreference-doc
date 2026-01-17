* allows
  * making any optimization / program's observable behavior does NOT change 

## Contents

  * [1 Explanation](as_if.html#Explanation)
  * [2 Notes](as_if.html#Notes)
  * [3 Example](as_if.html#Example)
  * [4 See also](as_if.html#See_also)
  
### Explanation

* program's observable behavior
  * | C+11-,
    * | every [sequence point](eval_order.md)
      * ALL [volatile](cv.md) objects' values == stable
  * | C++11,
    * accesses (reads & writes) to [volatile](cv.md) objects occur strictly -- according to the -- semantics of the expressions | they occur
    * they are [NOT reordered](../atomic/memory_order.md) -- with respect to -- OTHER volatile accesses | same thread
  * | C++26-,
    * program termination, data written to files == as if the program was executed -- as -- written
  * | C++26,
    * data delivered to the host environment is written | files
  * prompting text / sent to interactive devices 
    * will be shown BEFORE the program waits for input 
  * if the ISO C pragma [` #pragma STDC FENV_ACCESS`](../preprocessor/impl.md#pragma-stdc) is supported & == `ON` -> the changes to the [floating-point environment](../numeric/fenv.md) (floating-point exceptions and rounding modes) are guaranteed to be observed by the floating-point arithmetic operators and function calls as if executed as written, except that 
    * the result of any floating-point expression other than cast and assignment may have range and precision of a floating-point type different from the type of the expression (see [FLT_EVAL_METHOD](../types/climits/FLT_EVAL_METHOD.md)), 
    * notwithstanding the above, intermediate results of any floating-point expression may be calculated as if to infinite range and precision (unless [` #pragma STDC FP_CONTRACT`](../preprocessor/impl.md#pragma-stdc) is `OFF`)

* C++ compiler
  * | C++26-,
    * is permitted to perform any changes to the program as long as given the same input, 
    the observable behavior of the program is one of the possible observable behaviors corresponding to that input
    * However, if certain input will result in [undefined behavior](ub.html "cpp/language/ub"), 
    the compiler cannot guarantee any observable behavior of the program with that input,
    even if any operation of the observable behavior happens before any possible undefined operation

* program
  * may contain _observable checkpoints_ 

* operation `OP` is _undefined-free_
  * if for every undefined operation `U`, there is an observable checkpoint `CP` such that `OP` happens before `CP` and `CP` happens before `U`

* program's _defined prefix_ / given input
  * comprises ALL its undefined-free operations
* The C++ compiler is permitted to perform any changes to the program as long as given the same input, the observable behavior of the defined prefix of the program is one of the possible observable behaviors corresponding to that defined prefix
* If certain input will result in [undefined behavior](ub.md), the compiler cannot guarantee any observable behavior of the program with that input that does not belong to the defined prefix
*  | (since C++26)  

### Notes

* stable
  * PREVIOUS evaluations: complete
  * NEW evaluations: NOT started

Because the compiler is (usually) unable to analyze the code of an external library to determine whether it does or does not perform I/O or volatile access, third-party library calls also aren't affected by optimization. However, standard library calls may be replaced by other calls, eliminated, or added to the program during optimization. Statically-linked third-party library code may be subject to link-time optimization. 

Programs with undefined behavior often change observable behavior when recompiled with different optimization settings
* For example, if a test for signed integer overflow relies on the result of that overflow, e.g. if (n + 1 < n) abort();, [it is removed entirely by some compilers](https://blog.llvm.org/2011/05/what-every-c-programmer-should-know_14.html) because [signed overflow is undefined behavior](operator_arithmetic.html#Overflows "cpp/language/operator arithmetic") and the optimizer is free to assume it never happens and the test is redundant. 

[Copy elision](copy_elision.html "cpp/language/copy elision") is an exception from the as-if rule: the compiler may remove calls to move- and copy-constructors and the matching calls to the destructors of temporary objects even if those calls have observable side effects. 

[new expression](new.html#Allocation "cpp/language/new") has another exception from the as-if rule: the compiler may remove calls to the [replaceable allocation functions](../memory/new/operator_new.html "cpp/memory/new/operator new") even if a user-defined replacement is provided and has observable side-effects.  | (since C++14)  
---|---  
  
* count and order of floating-point exceptions can be changed by optimization as long as the state as observed by the next floating-point operation is as if no optimization took place: 
    
    
    #pragma STDC FENV_ACCESS ON
    for (i = 0; i < n; ++i)
        x + 1; // x + 1 is dead code, but may raise FP exceptions
               // (unless the optimizer can prove otherwise). However, executing it n times
               // will raise the same exception over and over. So this can be optimized to:
    if (0 < n)
        x + 1;

### See also

* [copy elision](copy_elision.md)
* [C's `as_if`](../../c/language/as_if.md)
