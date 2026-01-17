(C++20)(C++20) |  indicates that the compiler should optimize for the case where a path of execution through a statement is more or less likely than any other path of execution  
(attribute specifier)
Allow the compiler to optimize for the case where paths of execution including that statement are more or less likely than any alternative path of execution that does not include such a statement. 

## Contents

  * [1 Syntax](likely.html#Syntax)
  * [2 Explanation](likely.html#Explanation)
  * [3 Example](likely.html#Example)
  * [4 References](likely.html#References)

  
---  
  
### Syntax  
  
---  
`**[[likely]]**` |  (1)  |   
`**[[unlikely]]**` |  (2)  |   
  
### Explanation

These attributes may be applied to labels and statements (other than declaration-statements). They may not be simultaneously applied to the same label or statement. 

1) Applies to a statement to allow the compiler to optimize for the case where paths of execution including that statement are more likely than any alternative path of execution that does not include such a statement.

2) Applies to a statement to allow the compiler to optimize for the case where paths of execution including that statement are less likely than any alternative path of execution that does not include such a statement.

A path of execution is deemed to include a label if and only if it contains a jump to that label: 
    
    
    int f(int i)
    {
        switch (i)
        {
            case 1: [[fallthrough]];
            [[likely]] case 2: return 1;
        }
        return 2;
    }

i == 2 is considered more likely than any other value of `i`, but the [[likely]] has no effect on the i == 1 case even though it falls through the case 2: label.

### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 9.12.7 Likelihood attributes [dcl.attr.likelihood] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 9.12.6 Likelihood attributes [dcl.attr.likelihood] 


