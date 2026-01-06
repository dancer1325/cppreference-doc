
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
| [`continue`](continue.html "cpp/language/continue") \- **`break`**  
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
**`break`**  
[`continue`](continue.html "cpp/language/continue")  
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
  


Causes the enclosing [for](for.html "cpp/language/for"), [range-for](range-for.html "cpp/language/range-for"), [while](while.html "cpp/language/while") or [do-while](do.html "cpp/language/do") loop or [switch statement](switch.html "cpp/language/switch") to terminate. 

Used when it is otherwise awkward to terminate the loop using the condition expression and conditional statements. 

## Contents

  * [1 Syntax](break.html#Syntax)
  * [2 Explanation](break.html#Explanation)
  * [3 Notes](break.html#Notes)
  * [4 Keywords](break.html#Keywords)
  * [5 Example](break.html#Example)
  * [6 See also](break.html#See_also)

  
---  
  
### Syntax  
  
---  
attr ﻿(optional) `**break**` `**;**` |  |   
attr |  \-  |  (since C++11) any number of [attributes](attributes.html "cpp/language/attributes")  
---|---|---  
  
### Explanation

Appears only within the statement of a loop body ([`while`](while.html "cpp/language/while"), [`do-while`](do.html "cpp/language/do"), [`for`](for.html "cpp/language/for")) or within the statement of a [`switch`](switch.html "cpp/language/switch"). After this statement the control is transferred to the statement immediately following the enclosing loop or switch. As with any block exit, all automatic storage objects declared in enclosing compound statement or in the condition of a loop/switch are destroyed, in reverse order of construction, before the execution of the first line following the enclosing loop. 

### Notes

A break statement cannot be used to break out of multiple nested loops. The [goto statement](goto.html "cpp/language/goto") may be used for this purpose. 

### Keywords

[`break`](../keyword/break.html "cpp/keyword/break")

### Example

Run this code
    
    
    #include <iostream>
     
    int main()
    {
        int i = 2;
        switch (i)
        {
            case 1: [std::cout](../io/cout.html) << "1";   // <---- maybe warning: fall through
            case 2: [std::cout](../io/cout.html) << "2";   // execution starts at this case label (+warning)
            case 3: [std::cout](../io/cout.html) << "3";   // <---- maybe warning: fall through
            case 4:                     // <---- maybe warning: fall through
            case 5: [std::cout](../io/cout.html) << "45";  //
                    break;              // execution of subsequent statements is terminated
            case 6: [std::cout](../io/cout.html) << "6";
        }
        [std::cout](../io/cout.html) << '\n';
     
        for (char c = 'a'; c < 'c'; c++)
        {
            for (int i = 0; i < 5; i++)      // only this loop is affected by break
            {                                //
                if (i == 2)                  //
                    break;                   //
                [std::cout](../io/cout.html) << c << i << ' ';  //
            }
        }
        [std::cout](../io/cout.html) << '\n';
    }

Possible output: 
    
    
    2345
    a0 a1 b0 b1

### See also

`[[[fallthrough](attributes/fallthrough.html "cpp/language/attributes/fallthrough")]]`(C++17) |  indicates that the fall through from the previous case label is intentional and should not be diagnosed by a compiler that warns on fall-through  
(attribute specifier)  
---|---  
[C documentation](../../c/language/break.html "c/language/break") for break
