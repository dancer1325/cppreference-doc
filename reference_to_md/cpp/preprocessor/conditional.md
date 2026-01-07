* preprocessor 
  * supports
    * conditional compilation of parts of source file
  * provided directives
    * `#if`,
    * `#else`,
    * `#elif`,
    * `#ifdef`,
    * `#ifndef`,
    * `#elifdef`,
      * | C++23,
    * `#elifndef`
      * | C++23,
    * `#endif`  

## Contents

  * [1 Syntax](conditional.html#Syntax)
  * [2 Explanation](conditional.html#Explanation)
  * [3 Condition evaluation](conditional.html#Condition_evaluation)
    * [3.1 #if, #elif](conditional.html#.23if.2C_.23elif)
    * [3.2 Combined directives](conditional.html#Combined_directives)
  * [4 Notes](conditional.html#Notes)
  * [5 Example](conditional.html#Example)
  * [6 Defect reports](conditional.html#Defect_reports)
  * [7 See also](conditional.html#See_also)
  
### Syntax  
   
`**#if**` expression |  |   
`**#ifdef**` identifier |  |   
`**#ifndef**` identifier |  |   
`**#elif**` expression |  |   
`**#elifdef**` identifier |  |  (since C++23)  
`**#elifndef**` identifier |  |  (since C++23)  
`**#else**` |  |   
`**#endif**` |  |   
  
### Explanation

The conditional preprocessing block starts with `#if`, `#ifdef` or `#ifndef` directive, then optionally includes any number of `#elif`, `#elifdef`, or `#elifndef`(since C++23) directives, then optionally includes at most one `#else` directive and is terminated with `#endif` directive. Any inner conditional preprocessing blocks are processed separately. 

Each of `#if`, `#ifdef`, `#ifndef`, `#elif`, `#elifdef`, `#elifndef`(since C++23), and `#else` directives control the code block until the first `#elif`, `#elifdef`, `#elifndef`(since C++23), `#else`, `#endif` directive not belonging to any inner conditional preprocessing blocks. 

`#if`, `#ifdef` and `#ifndef` directives test the specified condition (see below) and if it evaluates to true, compiles the controlled code block. In that case subsequent `#else`, `#elifdef`, `#elifndef`,(since C++23) and `#elif` directives are ignored. Otherwise, if the specified condition evaluates false, the controlled code block is skipped and the subsequent `#else`, `#elifdef`, `#elifndef`,(since C++23) or `#elif` directive (if any) is processed. If the subsequent directive is `#else`, the code block controlled by the `#else` directive is unconditionally compiled. Otherwise, the `#elif`, `#elifdef`, or `#elifndef`(since C++23) directive acts as if it was `#if` directive: checks for condition, compiles or skips the controlled code block based on the result, and in the latter case processes subsequent `#elif`, `#elifdef`, `#elifndef`,(since C++23) and `#else` directives. The conditional preprocessing block is terminated by `#endif` directive. 

### Condition evaluation

#### #if, #elif

expression may contain unary operators in form `**defined**` identifier or `**defined (**` identifier`**)**`. The result is 1 if the identifier was [defined as a macro name](replace.html "cpp/preprocessor/replace"), otherwise the result is ​0​. 

expression may also contain the following expressions: 

  * [`__has_include`](include.html "cpp/preprocessor/include") expressions, which detects whether a header or source file exists. 

| 

  * [`__has_cpp_attribute`](../experimental/feature_test.html#Attributes "cpp/feature test") expressions, which detects whether a given attribute token is supported and its supported version. 

| (since C++20)  
---|---  
  
  * [`__has_embed`](embed.html "cpp/preprocessor/embed") expressions, which detects whether a resource is available to be embedded. 

| (since C++26)  
  
The identifiers mentioned above are treated as if they were the names of defined macros in this context. 

(since C++17)  
  
After all macro expansion and evaluation `defined` and the expressions described above, any identifier which is not a [boolean literal](../language/bool_literal.html "cpp/language/bool literal") is replaced with the number ​0​ (this includes identifiers that are lexically keywords, but not alternative tokens like and). 

Then the expression is evaluated as an [integral constant expression](../language/constant_expression.html#Integral_constant_expression "cpp/language/constant expression"). 

If the expression evaluates to nonzero value, the controlled code block is included and skipped otherwise. 

Note: Until the resolution of [CWG issue 1955](https://cplusplus.github.io/CWG/issues/1955.html), `#if _cond1_` ... `#elif _cond2_` is different from `#if _cond1_` ... `#else` followed by `#if _cond2_` because if `_cond1_` is true, the second `#if` is skipped and `_cond2_` does not need to be well-formed, while `#elif`'s `_cond2_` must be a valid expression. As of CWG 1955, `#elif` that leads the skipped code block is also skipped. 

#### Combined directives

Checks if the identifier was [defined as a macro name](replace.html "cpp/preprocessor/replace"). 

`#ifdef` identifier is essentially equivalent to `#if defined` identifier. 

`#ifndef` identifier is essentially equivalent to `#if !defined` identifier. 

`#elifdef` identifier is essentially equivalent to `#elif defined` identifier. `#elifndef` identifier is essentially equivalent to `#elif !defined` identifier.  | (since C++23)  
---|---  
  
### Notes

While `#elifdef` and `#elifndef` directives target C++23, implementations are encouraged to backport them to the older language modes as conforming extensions.

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 1955](https://cplusplus.github.io/CWG/issues/1955.html) | C++98  | failed #elif's expression was required to be valid  | failed #elif is skipped   
  
### See also

[C documentation](../../c/preprocessor/conditional.html "c/preprocessor/conditional") for Conditional inclusion  
---
