
General topics  
---  
| [Preprocessor](../preprocessor.html "cpp/preprocessor")  
---  
[Comments](../comments.html "cpp/comment")  
  
| [Keywords](../keywords.html "cpp/keyword")  
---  
[Escape sequences](escape.html "cpp/language/escape")  
  
**Flow control**  
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
| [`continue`](continue.html "cpp/language/continue") \- [`break`](break.html "cpp/language/break")  
---  
  
  
  
  
  

  
  
  

---  
  

---  
  


**Statements**

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
[`contract_assert`](contract_assert.html "cpp/language/contract assert") (C++26)  
[Declaration statements](statements.html#Declaration_statements "cpp/language/statements")  
[declaration ; ](declarations.html "cpp/language/declarations")  
[Try blocks](statements.html#Try_blocks "cpp/language/statements")  
[try block](try.html "cpp/language/try")  
[Transactional memory](transactional_memory.html "cpp/language/transactional memory")  
[`synchronized`](transactional_memory.html#Synchronized_blocks "cpp/language/transactional memory"), [`atomic_commit`](transactional_memory.html#Atomic_blocks "cpp/language/transactional memory"), etc (TM TS)  
  


_Statements_ are fragments of the C++ program that are executed in sequence. The body of any function is a sequence of statements. For example: 
    
    
    int main()
    {
        int n = 1;                        // declaration statement
        n = n + 1;                        // expression statement
        [std::cout](../io/cout.html) << "n = " << n << '\n'; // expression statement
        return 0;                         // return statement
    }

C++ includes the following types of statements: 

  * [Labeled statements](statements.html#Labeled_statements)
  * [Expression statements](statements.html#Expression_statements)
  * [Compound statements](statements.html#Compound_statements)
  * [Selection statements](statements.html#Selection_statements)
  * [Iteration statements](statements.html#Iteration_statements)
  * [Jump statements](statements.html#Jump_statements)



  * [Assertion statements](statements.html#Assertion_statements)

| (since C++26)  
---|---  
  
  * [Declaration statements](statements.html#Declaration_statements)
  * [`try` blocks](statements.html#try_blocks)



  * [Atomic and synchronized blocks](statements.html#Atomic_and_synchronized_blocks)

| (TM TS)  
---|---  
  
## Contents

  * [1 Labeled statements](statements.html#Labeled_statements)
    * [1.1 Labels](statements.html#Labels)
    * [1.2 Control-flow-limited statements](statements.html#Control-flow-limited_statements)
  * [2 Expression statements](statements.html#Expression_statements)
  * [3 Compound statements](statements.html#Compound_statements)
  * [4 Selection statements](statements.html#Selection_statements)
  * [5 Iteration statements](statements.html#Iteration_statements)
  * [6 Jump statements](statements.html#Jump_statements)
  * [7 Assertion statements](statements.html#Assertion_statements)
  * [8 Declaration statements](statements.html#Declaration_statements)
  * [9 try blocks](statements.html#try_blocks)
  * [10 Atomic and synchronized blocks](statements.html#Atomic_and_synchronized_blocks)
  * [11 Substatements](statements.html#Substatements)
  * [12 See also](statements.html#See_also)

  
---  
  
### Labeled statements

A labeled statement labels a statement for control flow purposes.   
  
---  
label statement |  |   
label |  \-  |  the label applied to the statement (defined below)   
---|---|---  
statement |  \-  |  the statement which the label applies to, it can be a labeled statement itself, allowing multiple labels   
  
#### Labels

label is defined as   
  
---  
attr ﻿(optional) identifier `**:**` |  (1)  |   
attr ﻿(optional) `**case**` constexpr `**:**` |  (2)  |   
attr ﻿(optional) `**default:**` |  (3)  |   
  
1) target for [goto](goto.html "cpp/language/goto");

2) case label in a [switch](switch.html "cpp/language/switch") statement;

3) default label in a [switch](switch.html "cpp/language/switch") statement.

An [attribute](attributes.html "cpp/language/attributes") sequence attr may appear just at the beginning of the label (in which case it applies to the label), or just before any statement itself, in which case it applies to the entire statement.  | (since C++11)  
---|---  
  
A label with an identifier declared inside a function matches all goto statements with the same identifier in that function, in all nested blocks, before and after its own declaration. 

Two labels in a function must not have the same identifier. 

Besides being added to a statement, labels can also be used anywhere in [compound statements](statements.html#Compound_statements).  | (since C++23)  
---|---  
  
Labels are not found by [unqualified lookup](unqualified_lookup.html "cpp/language/unqualified lookup"): a label can have the same name as any other entity in the program. 
    
    
    void f()
    {
        {
            goto label; // label in scope even though declared later
            label:      // label can appear at the end of a block standalone since C++23
        }
        goto label; // label ignores block scope
    }
     
    void g()
    {
        goto label; // error: label not in scope in g()
    }

#### Control-flow-limited statements

The following statements are _control-flow-limited statements_ ﻿: 

  * The compound-statement of a [try block](try.html "cpp/language/try"). 
  * The compound-statement of a [handler](catch.html "cpp/language/catch"). 



  * All [substatements](statements.html#Substatements) of a [constexpr if statement](if.html#Constexpr_if "cpp/language/if"). 

| (since C++17)  
---|---  
  
  * All substatements of a [consteval if statement](if.html#Consteval_if "cpp/language/if"). 

| (since C++23)  
  
For each control-flow-limited statement `S`: 

  * All goto target labels delcared in `S` can only be referred to by statements in `S`. 
  * Each case or default label appearing within `S` can only be associated with a [switch statement](switch.html "cpp/language/switch") within `S`. 



### Expression statements

An expression statement is an expression followed by a semicolon.   
  
---  
attr ﻿(optional) expression ﻿(optional) `**;**` |  |   
attr |  \-  |  (since C++11) optional sequence of any number of [attributes](attributes.html "cpp/language/attributes")  
---|---|---  
expression |  \-  |  an [expression](expressions.html "cpp/language/expressions")  
  
Most statements in a typical C++ program are expression statements, such as assignments or function calls. 

An expression statement without an expression is called a _null statement_. It is often used to provide an empty body to a [for](for.html "cpp/language/for") or [while](while.html "cpp/language/while") loop. It can also be used to carry a label in the end of a compound statement.(until C++23)

### Compound statements

A compound statement or _block_ groups a sequence of statements into a single statement.   
  
---  
attr ﻿(optional) `**{**` statement... ﻿(optional) label... ﻿(optional)(since C++23) `**}**` |  |   
  
When one statement is expected, but multiple statements need to be executed in sequence (for example, in an [if](if.html "cpp/language/if") statement or a loop), a compound statement may be used: 
    
    
    if (x > 5)          // start of if statement
    {                   // start of block
        int n = 1;      // declaration statement
        [std::cout](../io/cout.html) << n; // expression statement
    }                   // end of block, end of if statement

Each compound statement introduces its own block [scope](scope.html "cpp/language/scope"); variables declared inside a block are destroyed at the closing brace in reverse order: 
    
    
    int main()
    { // start of outer block
        {                                // start of inner block
            [std::ofstream](../io/basic_ofstream.html) f("test.txt"); // declaration statement
            f << "abc\n";                // expression statement
        }                                // end of inner block, f is flushed and closed
        [std::ifstream](../io/basic_ifstream.html) f("test.txt"); // declaration statement
        [std::string](../string/basic_string.html) str;             // declaration statement
        f >> str;                    // expression statement
    } // end of outer block, str is destroyed, f is closed

A [label](statements.html#Labeled_statements) at the end of a compound statement is treated as if it were followed by a null statement.  | (since C++23)  
---|---  
  
### Selection statements

A selection statement chooses between one of several control flows.   
  
---  
attr ﻿(optional) `**if constexpr**`(optional) `**(**` init-statement ﻿(optional) condition `**)**` statement |  (1)  |   
attr ﻿(optional) `**if constexpr**`(optional) `**(**` init-statement ﻿(optional) condition `**)**` statement  
` ``**else**` statement |  (2)  |   
attr ﻿(optional) `**switch (**` init-statement ﻿(optional) condition `**)**` statement |  (3)  |   
attr ﻿(optional) `**if !**`(optional) `**consteval**` compound-statement |  (4)  |  (since C++23)  
attr ﻿(optional) `**if !**`(optional) `**consteval**` compound-statement `**else**` statement |  (5)  |  (since C++23)  
  
1) [if](if.html "cpp/language/if") statement;

2) [if](if.html "cpp/language/if") statement with an else clause;

3) [switch](switch.html "cpp/language/switch") statement;

4) [consteval if](if.html#Consteval_if "cpp/language/if") statement;

5) [consteval if](if.html#Consteval_if "cpp/language/if") statement with an else clause.

### Iteration statements

An iteration statement repeatedly executes some code.   
  
---  
attr ﻿(optional) `**while (**` condition `**)**` statement |  (1)  |   
attr ﻿(optional) `**do**` statement `**while (**` expression `**)**` `**;**` |  (2)  |   
attr ﻿(optional) `**for (**` init-statement condition ﻿(optional) `**;**` expression ﻿(optional) `**)**` statement |  (3)  |   
attr ﻿(optional) `**for**`  
` ``**(**` init-statement ﻿(optional)(since C++20) for-range-decl `**:**` for-range-init `**)**` statement |  (4)  |  (since C++11)  
  
1) [while](while.html "cpp/language/while") loop;

2) [do-while](do.html "cpp/language/do") loop;

3) [for](for.html "cpp/language/for") loop;

4) [range for](range-for.html "cpp/language/range-for") loop.

### Jump statements

A jump statement unconditionally transfers control flow.   
  
---  
attr ﻿(optional) `**break;**` |  (1)  |   
attr ﻿(optional) `**continue;**` |  (2)  |   
attr ﻿(optional) `**return**` expression ﻿(optional) `**;**` |  (3)  |   
attr ﻿(optional) `**return**` braced-init-list `**;**` |  (4)  |  (since C++11)  
attr ﻿(optional) `**goto**` identifier `**;**` |  (5)  |   
  
1) [break](break.html "cpp/language/break") statement;

2) [continue](continue.html "cpp/language/continue") statement;

3) [return](return.html "cpp/language/return") statement with an optional expression;

4) [return](return.html "cpp/language/return") statement using [list initialization](list_initialization.html "cpp/language/list initialization");

5) [goto](goto.html "cpp/language/goto") statement.

Note: for all jump statements, transfer out of a loop, out of a block, or back past an initialized variable with automatic storage duration involves the destruction of objects with automatic storage duration that are in scope at the point transferred from but not at the point transferred to. If multiple objects were initialized, the order of destruction is the opposite of the order of initialization. 

###  Assertion statements

A contract assertion.  |   
---  
`**contract_assert**` attr ﻿(optional) `**(**` predicate `**)**` `**;**` |  |   
  
1) [`contract_assert`](contract_assert.html "cpp/language/contract assert") statement.

(since C++26)  
  
### Declaration statements

A declaration statement introduces one or more identifiers into a block.   
  
---  
block-declaration |  (1)  |   
  
1) See [Declarations](declarations.html "cpp/language/declarations") and [Initialization](initialization.html "cpp/language/initialization") for details.

### try blocks

A try block catches exceptions thrown when executing other statements.   
  
---  
attr ﻿(optional) `**try**` compound-statement handler-sequence |  (1)  |   
  
1) See [try block](try.html "cpp/language/try") for details.

  


###  Atomic and synchronized blocks

An atomic and synchronized block provides [transactional memory](transactional_memory.html "cpp/language/transactional memory").  |   
---  
`**synchronized**` compound-statement |  (1)  |  (TM TS)  
`**atomic_noexcept**` compound-statement |  (2)  |  (TM TS)  
`**atomic_cancel**` compound-statement |  (3)  |  (TM TS)  
`**atomic_commit**` compound-statement |  (4)  |  (TM TS)  
  
1) [synchronized block](transactional_memory.html#Synchronized_blocks "cpp/language/transactional memory"), executed in single total order with all synchronized blocks;

2) [atomic block](transactional_memory.html#Atomic_blocks "cpp/language/transactional memory") that aborts on exceptions;

3) [atomic block](transactional_memory.html#Atomic_blocks "cpp/language/transactional memory") that rolls back on exceptions;

4) [atomic block](transactional_memory.html#Atomic_blocks "cpp/language/transactional memory") that commits on exceptions.

(TM TS)  
  
### Substatements

A _substatement_ of a statement is one of the following: 

  * For a [labeled statement](statements.html#Labeled_statements), its statement ﻿. 
  * For a [compound statement](statements.html#Compound_statements), any statement of its statement... ﻿. 
  * For a [selection statement](statements.html#Selection_statements), any of its statement ﻿ or compound-statement ﻿(since C++23). 
  * For an [iteration statement](statements.html#Iteration_statements), its statement ﻿. 



A statement S1 _encloses_ a statement S2 if any of the following conditions is satisfied: 

  * S2 is a substatement of S1
  * S1 is a selection statement or iteration statement, and S2 is the init-statement of S1. 
  * S1 is a [try block](try.html "cpp/language/try"), and S2 is either its compound-statement or the compound-statement of any [handler](catch.html "cpp/language/catch") in its handler-seq ﻿. 
  * S1 encloses a statement S3 and S3 encloses S2. 



A statement S1 is _enclosed by_ a statement S2 if S2 encloses S1. 

### See also

[C documentation](../../c/language/statements.html "c/language/statements") for Statements  
---
