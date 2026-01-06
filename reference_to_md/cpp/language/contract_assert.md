

  
  
  
  
  

  
  
  

---  
  

---  
  


[ Statements](statements.html "cpp/language/statements")

[Labels](statements.html#Labeled_statements "cpp/language/statements")  
---  
[label : statement](statements.html#Labeled_statements "cpp/language/statements")  
[Expression statements](statements.html#Expression_statements "cpp/language/statements")  
[expression ; ](statements.html#Expression_statements "cpp/language/statements")  
[Compound statements](statements.html#Compound_statements "cpp/language/statements")  
[`{` statement... `}`](statements.html#Compound_statements "cpp/language/statements")  
[Selection statements](statements.html#Selection_statements "cpp/language/statements")  
[`if`](if.html "cpp/language/if")  
[`switch`](switch.html "cpp/language/switch")  
[Iteration statements](statements.html#Iteration_statements "cpp/language/statements")  
[`while`](while.html "cpp/language/while")  
[`do while`](do.html "cpp/language/do")  
[`for`](for.html "cpp/language/for")  
[range for](range-for.html "cpp/language/range-for") (C++11)  
[Jump statements](statements.html#Jump_statements "cpp/language/statements")  
[`break`](break.html "cpp/language/break")  
[`continue`](continue.html "cpp/language/continue")  
[`return`](return.html "cpp/language/return")  
[`goto`](goto.html "cpp/language/goto")  
[Assertions](statements.html#Assertion_statements "cpp/language/statements")  
**`contract_assert`** (C++26)  
[Declaration statements](statements.html#Declaration_statements "cpp/language/statements")  
[declaration ; ](declarations.html "cpp/language/declarations")  
[Try blocks](statements.html#Try_blocks "cpp/language/statements")  
[try block](try.html "cpp/language/try")  
[Transactional memory](transactional_memory.html "cpp/language/transactional memory")  
[`synchronized`](transactional_memory.html#Synchronized_blocks "cpp/language/transactional memory"), [`atomic_commit`](transactional_memory.html#Atomic_blocks "cpp/language/transactional memory"), etc (TM TS)  
  


A contract_assert statement is a contract assertion that may appear in a function or lambda body to verify an internal condition. It ensures the condition holds during execution, triggering a violation (e.g. termination) in debug builds if the condition evaluates to false or the evaluation exits via an exception, and can be ignored in release builds for performance. 

## Contents

  * [1 Syntax](contract_assert.html#Syntax)
  * [2 Keywords](contract_assert.html#Keywords)
  * [3 Notes](contract_assert.html#Notes)
  * [4 Example](contract_assert.html#Example)
  * [5 Support status](contract_assert.html#Support_status)
  * [6 References](contract_assert.html#References)
  * [7 See also](contract_assert.html#See_also)

  
---  
  
### Syntax  
  
---  
`**contract_assert**` attr ﻿(optional) `**(**` predicate `**)**` `**;**` |  |   
attr |  \-  |  any number of [attributes](attributes.html "cpp/language/attributes")  
---|---|---  
predicate |  \-  |  boolean expression that should evaluate to true  
  
### Keywords

[`contract_assert`](../keyword/contract_assert.html "cpp/keyword/contract assert")

### Notes

Feature-test macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_contracts`](../experimental/feature_test.html#cpp_contracts "cpp/feature test") | [`202502L`](../compiler_support/26.html#cpp_contracts_202502L "cpp/compiler support/26") | (C++26) | [Contracts](contracts.html "cpp/language/contracts")  
  
### Example

The contract_assert ensures that vector's norm is positive and either [normal or subnormal](../numeric/math/FP_categories.html "cpp/numeric/math/FP categories"). 
    
    
    template <[std::floating_point](../concepts/floating_point.html) T>
    constexpr auto normalize([std::array](../container/array.html)<T, 3> vector) noexcept
        pre(/* is_normalizable(vector) */)
        post(/* vector: is_normalized(vector) */)
    {
        auto& [x, y, z]{vector};
        const auto norm{[std::hypot](../numeric/math/hypot.html)(x, y, z)};
     
        // debug check for normalization safety
        contract_assert([std::isfinite](../numeric/math/isfinite.html)(norm) && norm > T(0));
     
        x /= norm, y /= norm, z /= norm;
     
        return vector;
    }

### Support status

C++26 feature  
  
| Paper(s)  
  
| GCC | Clang | MSVC | Apple Clang | EDG eccp | Intel C++ | Nvidia HPC C++ (ex PGI)* | Nvidia nvcc | Cray   
  
---|---|---|---|---|---|---|---|---|---|---  
[Contracts](contracts.html "cpp/language/contracts") ([FTM](../experimental/feature_test.html#cpp_contracts "cpp/feature test"))* | [P2900R14](https://wg21.link/P2900R14) |  |  |  |  |  |  |  |  |   
  
### References

  * C++26 standard (ISO/IEC 14882:2026): 



    

  * 8.(7+_c ﻿_) Assertion statement [stmt.contract.assert] 



### See also

[ assert](../error/assert.html "cpp/error/assert") |  aborts the program if the user-specified condition is not true. May be disabled for release builds.   
(function macro)   
---|---  
[Contract assertions](contracts.html "cpp/language/contracts") (C++26) |  specifies properties that must hold at certain points during execution  
[`static_assert` declaration](static_assert.html "cpp/language/static assert") (C++11) |  performs compile-time assertion checking  
[function contract specifiers](functions.html#Function_contract_specifiers "cpp/language/functions") (C++26) |  specifies preconditions (pre) and postconditions (post)  
`[[[assume](attributes/assume.html "cpp/language/attributes/assume")(_expression_)]]`(C++23) |  specifies that the _expression_ will always evaluate to true at a given point  
(attribute specifier)
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
