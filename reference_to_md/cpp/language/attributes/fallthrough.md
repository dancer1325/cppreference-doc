* ]]`(C++17) |  indicates that the fall through from the previous case label is intentional and should not be diagnosed by a compiler that warns on fall-through  
  (attribute specifier)  
Indicates that the fall through from the previous case label is intentional and should not be diagnosed by a compiler that warns on fallthrough. 

## Contents

  * [1 Syntax](fallthrough.html#Syntax)
  * [2 Explanation](fallthrough.html#Explanation)
  * [3 Example](fallthrough.html#Example)
  * [4 Defect reports](fallthrough.html#Defect_reports)
  * [5 References](fallthrough.html#References)
  * [6 See also](fallthrough.html#See_also)

### Syntax  
   
`[[fallthrough]]`   
  
### Explanation

May only be applied to a [null statement](../statements.html#Expression_statements "cpp/language/statements") to create a _fallthrough statement_ ([[fallthrough]];). 

A fallthrough statement may only be used in a [switch](../switch.html "cpp/language/switch") statement, where the next statement to be executed is a statement with a case or default label for that switch statement. If the fallthrough statement is inside a loop, the next (labeled) statement must be part of the same iteration of that loop.

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 2406](https://cplusplus.github.io/CWG/issues/2406.html) | C++17  | [[fallthrough]] could appear in a loop  
nested inside the target switch statement  | prohibited   
  
### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 9.12.6 Fallthrough attribute [dcl.attr.fallthrough] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 9.12.5 Fallthrough attribute [dcl.attr.fallthrough] 



  * C++17 standard (ISO/IEC 14882:2017): 



    

  * 10.6.5 Fallthrough attribute [dcl.attr.fallthrough] 



### See also

[C documentation](../../../c/language/attributes/fallthrough.html "c/language/attributes/fallthrough") for fallthrough  
---
