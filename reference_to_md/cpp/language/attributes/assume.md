* (C++23) |  specifies that the _expression_ will always evaluate to true at a given point  
  (attribute specifier)  
Specifies that the given expression is assumed to always evaluate to true at a given point in order to allow compiler optimizations based on the information given. 

## Contents

  * [1 Syntax](assume.html#Syntax)
  * [2 Explanation](assume.html#Explanation)
  * [3 Notes](assume.html#Notes)
  * [4 Example](assume.html#Example)
  * [5 Defect reports](assume.html#Defect_reports)
  * [6 References](assume.html#References)
  * [7 See also](assume.html#See_also)
  * [8 External links](assume.html#External_links)

  

### Syntax  

`**[[assume(**` expression `**)]]**` |  |   
expression |  \-  |  any expression (except unparenthesized [comma expressions](../operator_other.html#Built-in_comma_operator "cpp/language/operator other"))   
---|---|---  
  
### Explanation

[[assume]] an only be applied to a [null statement](../statements.html#Expression_statements "cpp/language/statements"), as in [[assume(x > 0)]];. This statement is called an _assumption_. 

expression is [contextually converted to bool](../implicit_cast.html#Contextual_conversions "cpp/language/implicit conversion"), but it is not evaluated (it is still [potentially evaluated](../expressions.html#Potentially-evaluated_expressions "cpp/language/expressions")). 

  * If the converted expression would evaluate to true at the point where the assumption appears, the assumption has no effect. 
  * Otherwise, evaluation of the assumption has [runtime-undefined behavior](../ub.html "cpp/language/ub"). 



### Notes

Since assumptions cause runtime-undefined behavior if they do not hold, they should be used sparingly. 

One correct way to use them is to follow assertions with assumptions: 
    
    
    [assert](../../error/assert.html)(x > 0);     // trigger an assertion when NDEBUG is not defined and x > 0 is false
    [[assume(x > 0)]]; // provide optimization opportunities when NDEBUG is defined

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 2924](https://cplusplus.github.io/CWG/issues/2924.html) | C++23  | violating an assumption would result in undefined behavior  | results in runtime-undefined behavior   
  
### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 9.12.3 Assumption attribute [dcl.attr.assume] 



### See also

[ unreachable](../../utility/unreachable.html "cpp/utility/unreachable")(C++23) |  marks unreachable point of execution   
(function)   
---|---  
[`contract_assert` statement](../contract_assert.html "cpp/language/contract assert") (C++26) |  verifies an internal condition during execution  
  
### External links

1\.  | Clang language extensions doc: [`__builtin_assume`](https://clang.llvm.org/docs/LanguageExtensions.html#langext-builtin-assume).   
---|---  
2\.  | Clang attribute reference doc: [`assume`](https://clang.llvm.org/docs/AttributeReference.html#assume).   
3\.  | MSVC doc: [`__assume`](https://learn.microsoft.com/en-us/cpp/intrinsics/assume) built-in.   
4\.  | GCC doc: [`__attribute__((assume(...)))`](https://gcc.gnu.org/onlinedocs/gcc/Statement-Attributes.html#index-assume-statement-attribute). 
