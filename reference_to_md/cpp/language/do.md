
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
**`do-while`**  
  
Jump statements  
| [`continue`](continue.html "cpp/language/continue") \- [`break`](break.html "cpp/language/break")  
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
**`do while`**  
[`for`](for.html "cpp/language/for")  
[range for](range-for.html "cpp/language/range-for") (C++11)  
[Jump statements](statements.html#Jump_statements "cpp/language/statements")  
[`break`](break.html "cpp/language/break")  
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
  


Conditionally executes a statement repeatedly (at least once). 

## Contents

  * [1 Syntax](do.html#Syntax)
  * [2 Explanation](do.html#Explanation)
  * [3 Notes](do.html#Notes)
  * [4 Keywords](do.html#Keywords)
  * [5 Example](do.html#Example)
  * [6 See also](do.html#See_also)

  
---  
  
### Syntax  
  
---  
attr ﻿(optional) `**do**` statement `**while (**` expression `**);**` |  |   
attr |  \-  |  (since C++11) any number of [attributes](attributes.html "cpp/language/attributes")  
---|---|---  
expression |  \-  |  an [expression](expressions.html "cpp/language/expressions")  
statement |  \-  |  a [statement](statements.html "cpp/language/statements") (typically a compound statement)   
  
### Explanation

When control reaches a do statement, its statement will be executed unconditionally. 

Every time statement finishes its execution, expression will be evaluated and contextually converted to bool. If the result is true, statement will be executed again. 

If the loop needs to be terminated within statement, a [break statement](break.html "cpp/language/break") can be used as terminating statement. 

If the current iteration needs to be terminated within statement, a [continue statement](continue.html "cpp/language/continue") can be used as shortcut. 

### Notes

As part of the C++ [forward progress guarantee](multithread.html#Progress_guarantee "cpp/language/multithread"), the behavior is [undefined](ub.html "cpp/language/ub") if a loop that is not a [trivial infinite loop](multithread.html#Trivial_infinite_loops "cpp/language/multithread")(since C++26) without [observable behavior](as_if.html "cpp/language/as if") does not terminate. Compilers are permitted to remove such loops. 

### Keywords

[`do`](../keyword/do.html "cpp/keyword/do"), [`while`](../keyword/while.html "cpp/keyword/while")

### Example

Run this code
    
    
    #include <algorithm>
    #include <iostream>
    #include <string>
     
    int main()
    {
        int j = 2;
        do // compound statement is the loop body
        {
            j += 2;
            [std::cout](../io/cout.html) << j << ' ';
        }
        while (j < 9);
        [std::cout](../io/cout.html) << '\n';
     
        // common situation where do-while loop is used
        [std::string](../string/basic_string.html) s = "aba";
        [std::sort](../algorithm/sort.html)(s.begin(), s.end());
     
        do [std::cout](../io/cout.html) << s << '\n'; // expression statement is the loop body
        while ([std::next_permutation](../algorithm/next_permutation.html)(s.begin(), s.end()));
    }

Output: 
    
    
    4 6 8 10
    aab
    aba
    baa

### See also

[C documentation](../../c/language/do.html "c/language/do") for do-while  
---
