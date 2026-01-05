
[Object lifetime](lifetime.html "cpp/language/lifetime")  
[Storage duration and linkage](storage_duration.html "cpp/language/storage duration")  
[Definitions and ODR](definition.html "cpp/language/definition")  
[Name lookup](lookup.html "cpp/language/lookup")  
[ Qualified name lookup](qualified_lookup.html "cpp/language/qualified lookup")  
[ Unqualified name lookup](unqualified_lookup.html "cpp/language/unqualified lookup")  
[The as-if rule](as_if.html "cpp/language/as if")  
[Undefined behavior](ub.html "cpp/language/ub")  
[Memory model](memory_model.html "cpp/language/memory model")  
[Multi-threaded executions and data races](multithread.html "cpp/language/multithread") (C++11)  
[Character sets and encodings](charset.html "cpp/language/charset")  
[Phases of translation](translation_phases.html "cpp/language/translation phases")  
[The `main` function](main_function.html "cpp/language/main function")  
[Modules](modules.html "cpp/language/modules") (C++20)  
**Contracts** (C++26)  
  


Contract assertions allow the programmer to specify properties of the state of the program that are expected to hold at certain points during execution. 

## Contents

  * [1 Explanation](contracts.html#Explanation)
  * [2 Evaluating contract assertions](contracts.html#Evaluating_contract_assertions)
  * [3 Handling contract violations](contracts.html#Handling_contract_violations)
    * [3.1 Contract-terminated programs](contracts.html#Contract-terminated_programs)
    * [3.2 Contract-violation handler](contracts.html#Contract-violation_handler)
    * [3.3 Handling exceptions from assertions](contracts.html#Handling_exceptions_from_assertions)
  * [4 Evaluate in sequence](contracts.html#Evaluate_in_sequence)
  * [5 Notes](contracts.html#Notes)
  * [6 Keywords](contracts.html#Keywords)
  * [7 Support status](contracts.html#Support_status)
  * [8 See also](contracts.html#See_also)

  
---  
  
### Explanation

_Contract assertions_ are introduced by [function contract specifiers](function.html#Function_contract_specifiers "cpp/language/function") and [`contract_assert`](contract_assert.html "cpp/language/contract assert") statements. Each contract assertion has a _predicate ﻿_ , which is an expression of type bool. 

### Evaluating contract assertions

An evaluation of a contract assertion uses one of the following evaluation semantics: 

Evaluation semantic  |  Is a checking semantic  |  Is a terminating semantic   
---|---|---  
ignore  |  |   
observe  | Yes  |   
enforce  | Yes  | Yes   
quick-enforce  | Yes  | Yes   
  
It is implementation-defined which evaluation semantic is used for any given evaluation of a contract assertion. The evaluation semantics can differ for different evaluations of the same contract assertion, including evaluations during constant evaluation. 

If the “ignore” semantic is used, the evaluation of a contract assertion has no effect. 

If a checking semantic is used, the evaluation `E` of a contract assertion determines the value of the predicate. It is unspecified whether the predicate is evaluated. If any of the following conditions is satisfied, a _contract violation_ occurs: 

  * The value that would result from evaluating the predicate is false. 
  * The evaluation of the predicate exits via an exception. 
  * The evaluation of the predicate is performed in a context that is [manifestly constant-evaluated](constant_expression.html#Manifestly_constant-evaluated_expressions "cpp/language/constant expression") and the predicate is not a [core constant expression](constant_expression.html#Core_constant_expression "cpp/language/constant expression"). 



There is an [observable checkpoint](as_if.html "cpp/language/as if") `CP` that happens before `E` such that any other operation `OP` that happens before `A` also happens before `CP`. 
    
    
    int num = 0;
    void f() pre((num++, false));
     
    f(); // Increment of “num” might not occur, even if a checking semantic is used

### Handling contract violations

If a contract violation occurs in a context that is manifestly constant-evaluated: 

  * If the evaluation semantic is “observe”, a diagnostic is produced. 
  * If the evaluation semantic is a terminating semantic, the program is ill-formed. 



If a contract violation occurs in a context that is not manifestly constant-evaluated: 

  * If the evaluation semantic is “quick-enforce”, the program is contract-terminated. 
  * If the evaluation semantic is “enforce” or “observe”, the contract-violation handler is invoked with an lvalue referring to an object obj of type const std::contracts::contract_violation containing information about the contract violation. 
    * Storage for obj is allocated in an unspecified manner, but no global [allocation function](../memory/new/operator_new.html "cpp/memory/new/operator new") will be invoked. 
    * The lifetime of obj persists for the duration of the invocation of the contract-violation handler. 



#### Contract-terminated programs

When the program is _contract-terminated ﻿_ , it is implementation-defined (depending on context) whether 

  * [std::terminate](../error/terminate.html "cpp/error/terminate") is called, 
  * [std::abort](../utility/program/abort.html "cpp/utility/program/abort") is called, or 
  * execution is terminated (no further [execution steps](multithread.html#Progress_guarantee "cpp/language/multithread") occur). 



#### Contract-violation handler

The _contract-violation handler_ of a program is a function named ::handle_contract_violation: 

void handle_contract_violation( std::contracts::contract_violation ); |  |  (since C++26)   
(optionally noexcept)  
---|---|---  
| |   
  
A definition of the contract-violation handler, called the _default contract-violation handler ﻿_ , is provided by the implemenation (instead of a standard library header). 

It is implementation-defined whether the contract-violation handler is [replaceable](replacement_function.html "cpp/language/replacement function"). If the contract-violation handler is not replaceable, a declaration of a replacement function for the contract-violation handler is ill-formed, no diagnostic required. 

When the contract-violation handler returns normally: 

  * If the evaluation semantic is “observe”, control flow continues normally after the point of evaluation of the contract assertion. 
  * If the evaluation semantic is “enforce”, the program is contract-terminated. 



There is an [observable checkpoint](as_if.html "cpp/language/as if") `CP` that happens after the contract-violation handler returns normally such that any other operation `OP` that happens after the contract-violation handler returns also happens after `CP`. 

#### Handling exceptions from assertions

If the contract violation occurred because the evaluation of the predicate exited via an exception and the evaluation semantic is “observe” or “enforce”, the contract-violation handler is invoked from within an active implicit [handler](catch.html "cpp/language/catch") for that exception. 

When the contract-violation handler returns normally: 

  * If the evaluation semantic is “observe”, the implicit handler is no longer considered active. 
  * If the evaluation semantic is “enforce”, the implicit handler remains active when contract termination occurs. 



The current exception can be inspected or rethrown within the contract-violation handler using [std::current_exception()](../error/current_exception.html "cpp/error/current exception"). 

### Evaluate in sequence

To _evaluate in sequence_ a list `R` of contract assertions: 

1) Construct a list of contract assertions `S` such that all following conditions are satisfied: 

  * All elements of `R` are in `S`. 
  * Each element of `R` may be repeated an implementation-defined number of times within `S`. 
  * If a contract assertion `A` precedes another contract assertion `B` in `R`, then the first occurrence of `A` precedes the first occurrence of `B` in `S`.



2) Evaluate each element of `S` such that, if a contract assertion `A` precedes a contract assertion `B` in `S`, then the evaluation of `A` is [sequenced before](eval_order.html "cpp/language/eval order") the evaluation of `B`.
    
    
    void f(int i)
    {
        contract_assert(i > 0);  // #1
        contract_assert(i < 10); // #2
        // valid sequence of evaluations:   #1 #2       (no repeat)
        // valid sequence of evaluations:   #1 #1 #2 #2 (repeat in sequence)
        // valid sequence of evaluations:   #1 #2 #1 #2 (repeat alternatively)
        // valid sequence of evaluations:   #1 #2 #2 #1 (second occurences can switch order)
        // invalid sequence of evaluations: #2 #1       (first occurences cannot switch)
    }

### Notes

The range and flexibility of available choices of evaluation semantics depends on the implementation, and need not allow all four evaluation semantics as possibilities. 

Different evaluation semantics chosen for the same contract assertion in different translation units can result in violations of the [one-definition rule](definition.html#ODR "cpp/language/definition") when a contract assertion has side effects that alter the value produced by a constant expression: 
    
    
    constexpr int f(int i)
    {
        contract_assert((++const_cast<int&>(i), true));
        return i;
    }
     
    inline void g()
    {
        int a[f(1)]; // size dependent on the evaluation semantic of contract_assert above
    }

If the value that would result from evaluating the predicate is true, no contract violation occurs and control flow continues normally after the point of evaluation of the contract assertion. 

If the evaluation of the predicate exits by means of [non-local jumps](../utility/program.html#Non-local_jumps "cpp/utility/program") or terminating the program, no contract violation occurs either. 

It is recommended by the C++ standard that the default contract-violation handler should produce diagnostic output that suitably formats the most relevant contents of the argument (rate-limited for potentially repeated violations of observed contract assertions), and then return normally. 

Feature-test macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_contracts`](../experimental/feature_test.html#cpp_contracts "cpp/feature test") | [`202502L`](../compiler_support/26.html#cpp_contracts_202502L "cpp/compiler support/26") | (C++26) | Contracts   
  
### Keywords

[`contract_assert`](../keyword/contract_assert.html "cpp/keyword/contract assert"), [`pre`](../identifier_with_special_meaning/pre.html "cpp/identifier with special meaning/pre"), [`post`](../identifier_with_special_meaning/post.html "cpp/identifier with special meaning/post")

### Support status

C++26 feature  
  
| Paper(s)  
  
| GCC | Clang | MSVC | Apple Clang | EDG eccp | Intel C++ | Nvidia HPC C++ (ex PGI)* | Nvidia nvcc | Cray   
  
---|---|---|---|---|---|---|---|---|---|---  
**Contracts** ([FTM](../experimental/feature_test.html#cpp_contracts "cpp/feature test"))* | [P2900R14](https://wg21.link/P2900R14) |  |  |  |  |  |  |  |  |   
  
### See also

[`contract_assert` statement](contract_assert.html "cpp/language/contract assert") (C++26) |  verifies an internal condition during execution  
---|---  
[function contract specifiers](functions.html#Function_contract_specifiers "cpp/language/functions") (C++26) |  specifies preconditions (pre) and postconditions (post)
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
