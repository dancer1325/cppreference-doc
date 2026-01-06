
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
  
| **`while`**  
---  
[`do-while`](do.html "cpp/language/do")  
  
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
**`while`**  
[`do while`](do.html "cpp/language/do")  
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
  


Conditionally executes a statement repeatedly. 

## Contents

  * [1 Syntax](while.html#Syntax)
  * [2 Condition](while.html#Condition)
    * [2.1 Expression](while.html#Expression)
    * [2.2 Declaration](while.html#Declaration)
      * [2.2.1 Non-structured binding declaration](while.html#Non-structured_binding_declaration)
      * [2.2.2 Structured binding declaration](while.html#Structured_binding_declaration)
  * [3 Explanation](while.html#Explanation)
  * [4 Notes](while.html#Notes)
  * [5 Keywords](while.html#Keywords)
  * [6 Example](while.html#Example)
  * [7 See also](while.html#See_also)

  
---  
  
### Syntax  
  
---  
attr ﻿(optional) `**while (**` condition `**)**` statement |  |   
attr |  \-  |  (since C++11) any number of [attributes](attributes.html "cpp/language/attributes")  
---|---|---  
condition |  \-  |  a [condition](while.html#Condition)  
statement |  \-  |  a [statement](statements.html "cpp/language/statements") (typically a compound statement)   
  
### Condition

A condition can either be an [expression](expressions.html "cpp/language/expressions") or a [simple declaration](declarations.html#Simple_declaration "cpp/language/declarations"). 

  * If it can be syntactically resolved as a [structured binding](structured_binding.html "cpp/language/structured binding") declaration, it is interpreted as a structured binding declaration. 

| (since C++26)  
---|---  
  
  * If it can be syntactically resolved as an expression, it is treated as an expression. Otherwise, it is treated as a declaration that is not a structured binding declaration(since C++26). 



When control reaches condition, the condition will yield a value, which is used to determine whether statement will be executed. 

#### Expression

If condition is an expression, the value it yields is the the value of the expression contextually converted to bool. If that conversion is ill-formed, the program is ill-formed. 

#### Declaration

If condition is a simple declaration, the value it yields is the value of the decision variable (see below) contextually converted to bool. If that conversion is ill-formed, the program is ill-formed. 

##### Non-structured binding declaration

The declaration has the following restrictions: 

  * Syntactically conforms to the following form: 



    

  * type-specifier-seq declarator `**=**` assignment-expression


| (until C++11)  
---|---  
  
    

  * attribute-specifier-seq(optional) decl-specifier-seq declarator brace-or-equal-initializer


| (since C++11)  
  
  * The declarator cannot specify a [function](function.html "cpp/language/function") or an [array](array.html "cpp/language/array"). 
  * The [type specifier sequence](declarations.html#Specifiers "cpp/language/declarations")(until C++11)[declaration specifier sequence](declarations.html#Specifiers "cpp/language/declarations") can only contain type specifiers and constexpr, and it(since C++11) cannot define a [class](class.html "cpp/language/class") or [enumeration](enum.html "cpp/language/enum"). 



The decision variable of the declaration is the declared variable. 

#####  Structured binding declaration

The declaration has the following restrictions: 

  * The expression in its [initializer](initialization.html "cpp/language/initialization") cannot be of an array type. 
  * The [declaration specifier sequence](declarations.html#Specifiers "cpp/language/declarations") can only contain type specifiers and constexpr. 

The decision variable of the declaration is the invented variable e [introduced by the declaration](structured_binding.html "cpp/language/structured binding").  | (since C++26)  
---|---  
  
### Explanation

A while statement is equivalent to   
  
---  
/* label */ `**:**`  
`**{**`  


    `**if (**` condition `**)**`  

    `**{**`  


    statement  

    `**goto**` /* label */ `**;**`  

    `**}**`  

`**}**` |  |   
  
If condition is a declaration, the variable it declares is destroyed and created with each iteration of the loop. 

If the loop needs to be terminated within statement, a [break statement](break.html "cpp/language/break") can be used as terminating statement. 

If the current iteration needs to be terminated within statement, a [continue statement](continue.html "cpp/language/continue") can be used as shortcut. 

### Notes

Regardless of whether statement is a compound statement, it always introduces a [block scope](scope.html "cpp/language/scope"). Variables declared in it are only visible in the loop body, in other words, 
    
    
    while (--x >= 0)
        int i;
    // i goes out of scope

is the same as 
    
    
    while (--x >= 0)
    {
        int i;
    } // i goes out of scope

As part of the C++ [forward progress guarantee](multithread.html#Progress_guarantee "cpp/language/multithread"), the behavior is [undefined](ub.html "cpp/language/ub") if a loop that is not a [trivial infinite loop](multithread.html#Trivial_infinite_loops "cpp/language/multithread")(since C++26) without [observable behavior](as_if.html "cpp/language/as if") does not terminate. Compilers are permitted to remove such loops. 

### Keywords

[`while`](../keyword/while.html "cpp/keyword/while")

### Example

Run this code
    
    
    #include <iostream>
     
    int main()
    {
        // while loop with a single statement
        int i = 0;
        while (i < 10)
             i++;
        [std::cout](../io/cout.html) << i << '\n';
     
        // while loop with a compound statement
        int j = 2;
        while (j < 9)
        {
            [std::cout](../io/cout.html) << j << ' ';
            j += 2;
        }
        [std::cout](../io/cout.html) << '\n';
     
        // while loop with a declaration condition
        char cstr[] = "Hello";
        int k = 0;
        while (char c = cstr[k++])
            [std::cout](../io/cout.html) << c;
        [std::cout](../io/cout.html) << '\n';
    }

Output: 
    
    
    10
    2 4 6 8
    Hello

### See also

[C documentation](../../c/language/while.html "c/language/while") for while  
---
