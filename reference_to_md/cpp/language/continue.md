
General topics  
---  
| [Preprocessor](../preprocessor.html "cpp/preprocessor")  
---  
[Comments](../comments.html "cpp/comment")  
  
| [Keywords](../keywords.html "cpp/keyword")  
---  
[Escape sequences](escape.html "cpp/language/escape")  
  
[Flow control](statements.html "cpp/language/statements")  
Conditional execution statements  
| [`if`](if.html "cpp/language/if")  
---  
  
| [`switch`](switch.html "cpp/language/switch")  
---  
  
Iteration statements (loops)  
| [`for`](for.html "cpp/language/for")  
---  
[range-`for`](range-for.html "cpp/language/range-for") (C++11)  
  
| [`while`](while.html "cpp/language/while")  
---  
[`do-while`](do.html "cpp/language/do")  
  
Jump statements  
| **`continue`** \- [`break`](break.html "cpp/language/break")  
---  
  
  
  
  
  

  
  
  

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
**`continue`**  
[`return`](return.html "cpp/language/return")  
[`goto`](goto.html "cpp/language/goto")  
[Assertions](statements.html#Assertion_statements "cpp/language/statements")  
[`contract_assert`](contract_assert.html "cpp/language/contract assert") (C++26)  
[Declaration statements](statements.html#Declaration_statements "cpp/language/statements")  
[declaration ; ](declarations.html "cpp/language/declarations")  
[Try blocks](statements.html#Try_blocks "cpp/language/statements")  
[try block](try.html "cpp/language/try")  
[Transactional memory](transactional_memory.html "cpp/language/transactional memory")  
[`synchronized`](transactional_memory.html#Synchronized_blocks "cpp/language/transactional memory"), [`atomic_commit`](transactional_memory.html#Atomic_blocks "cpp/language/transactional memory"), etc (TM TS)  
  


Causes the remaining portion of the enclosing [for](for.html "cpp/language/for"), [range-for](range-for.html "cpp/language/range-for"), [while](while.html "cpp/language/while") or [do-while](do.html "cpp/language/do") loop body to be skipped. 

Used when it is otherwise awkward to ignore the remaining portion of the loop using conditional statements. 

## Contents

  * [1 Syntax](continue.html#Syntax)
  * [2 Explanation](continue.html#Explanation)
  * [3 Keywords](continue.html#Keywords)
  * [4 Example](continue.html#Example)
  * [5 See also](continue.html#See_also)

  
---  
  
### Syntax  
  
---  
attr ﻿(optional) `**continue**` `**;**` |  |   
  
### Explanation

The `continue` statement causes a jump, as if by [goto](goto.html "cpp/language/goto") to the end of the loop body (it may only appear within the loop body of [for](for.html "cpp/language/for"), [range-for](range-for.html "cpp/language/range-for"), [while](while.html "cpp/language/while"), and [do-while](do.html "cpp/language/do") loops). 

More precisely, 

For [while](while.html "cpp/language/while") loop, it acts as 
    
    
    while (/* ... */)
    {
       // ...
       continue; // acts as goto contin;
       // ...
       contin:;
    }

For [do-while](do.html "cpp/language/do") loop, it acts as: 
    
    
    do
    {
        // ...
        continue; // acts as goto contin;
        // ...
        contin:;
    } while (/* ... */);

For [for](for.html "cpp/language/for") and [range-for](range-for.html "cpp/language/range-for") loop, it acts as: 
    
    
    for (/* ... */)
    {
        // ...
        continue; // acts as goto contin;
        // ...
        contin:;
    }

### Keywords

[`continue`](../keyword/continue.html "cpp/keyword/continue")

### Example

Run this code
    
    
    #include <iostream>
     
    int main()
    {
        for (int i = 0; i < 10; ++i)
        {
            if (i != 5)
                continue;
            [std::cout](../io/cout.html) << i << ' ';      // this statement is skipped each time i != 5
        }
        [std::cout](../io/cout.html) << '\n';
     
        for (int j = 0; 2 != j; ++j)
            for (int k = 0; k < 5; ++k) // only this loop is affected by continue
            {
                if (k == 3)
                    continue;
                // this statement is skipped each time k == 3:
                [std::cout](../io/cout.html) << '(' << j << ',' << k << ") ";
            }
        [std::cout](../io/cout.html) << '\n';
    }

Output: 
    
    
    5
    (0,0) (0,1) (0,2) (0,4) (1,0) (1,1) (1,2) (1,4)

### See also

[C documentation](../../c/language/continue.html "c/language/continue") for continue  
---
