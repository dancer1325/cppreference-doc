

  
| [`goto`](goto.html "cpp/language/goto") \- [`return`](return.html "cpp/language/return")  
---  
  
[Functions](functions.html "cpp/language/functions")  
[Function declaration](function.html "cpp/language/function")  
[Lambda function expression](lambda.html "cpp/language/lambda")  
[`inline` specifier](inline.html "cpp/language/inline")  
[Dynamic exception specifications](except_spec.html "cpp/language/except spec") (until C++17*)  
[`noexcept` specifier](noexcept_spec.html "cpp/language/noexcept spec") (C++11)  
Exceptions  
| [`throw`-expression](throw.html "cpp/language/throw")  
---  
**`try` block**  
  
|   
  
---  
[`catch` handler](catch.html "cpp/language/catch")  
  
Namespaces  
| [Namespace declaration](namespace.html "cpp/language/namespace")` `  
---  
  
| [Namespace aliases](namespace_alias.html "cpp/language/namespace alias")  
---  
  
Types  
| [Fundamental types](types.html "cpp/language/types")  
---  
[Enumeration types](enum.html "cpp/language/enum")  
[Function types](function.html "cpp/language/function")  
  
| [Class/struct types](class.html "cpp/language/class")  
---  
[Union types](union.html "cpp/language/union")  
  
  
  

  
  
  

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
[`contract_assert`](contract_assert.html "cpp/language/contract assert") (C++26)  
[Declaration statements](statements.html#Declaration_statements "cpp/language/statements")  
[declaration ; ](declarations.html "cpp/language/declarations")  
[Try blocks](statements.html#Try_blocks "cpp/language/statements")  
**try block**  
[Transactional memory](transactional_memory.html "cpp/language/transactional memory")  
[`synchronized`](transactional_memory.html#Synchronized_blocks "cpp/language/transactional memory"), [`atomic_commit`](transactional_memory.html#Atomic_blocks "cpp/language/transactional memory"), etc (TM TS)  
  


[ Exceptions](exceptions.html "cpp/language/exceptions")

**try block**  
---  
[Throwing exceptions](throw.html "cpp/language/throw")  
[Handling exceptions](catch.html "cpp/language/catch")  
Exception specification  
[noexcept specification](noexcept_spec.html "cpp/language/noexcept spec") (C++11)  
[dynamic specification](except_spec.html "cpp/language/except spec") (until C++17*)  
[noexcept operator](noexcept.html "cpp/language/noexcept") (C++11)  
  


An [exception](exceptions.html "cpp/language/exceptions") thrown in a try block can possibly be handled by an associated handler. 

## Contents

  * [1 Syntax](try.html#Syntax)
  * [2 Ordinary try block](try.html#Ordinary_try_block)
  * [3 Function try block](try.html#Function_try_block)
    * [3.1 Constructor and destructor try block](try.html#Constructor_and_destructor_try_block)
  * [4 Control flow](try.html#Control_flow)
  * [5 Keywords](try.html#Keywords)
  * [6 Defect reports](try.html#Defect_reports)
  * [7 See also](try.html#See_also)

  
---  
  
### Syntax  
  
---  
`**try**` compound-statement handler-seq |  (1)  |   
`**try**` ctor-initializer ﻿(optional) compound-statement handler-seq |  (2)  |   
  
1) An [ordinary try block](try.html#Ordinary_try_block).

2) A [function try block](try.html#Function_try_block). compound-statement must be the compound statement component of a function body.

compound-statement |  \-  |  a [compound statement](statements.html#Compound_statements "cpp/language/statements")  
---|---|---  
handler-seq |  \-  |  a non-empty sequence of [handlers](catch.html "cpp/language/catch")  
ctor-initializer |  \-  |  member initializer list (for [constructors](initializer_list.html#Member_initializer_list "cpp/language/constructor") only)   
  
### Ordinary try block

An ordinary try block is a [statement](statements.html "cpp/language/statements"). 

If an exception is thrown from its compound-statement, the exception will be matched against the [handlers](catch.html "cpp/language/catch") in its handler-seq ﻿: 
    
    
    void f()
    {
        throw 1;     // NOT handled by the handler below
        try
        {
            throw 2; // handled by the associated handler
        }
        catch (...)
        {
            // handles the exception 2
        }
        throw 3;     // NOT handled by the handler above
    }

### Function try block

A function try block is a special kind of [function body](function.html#Function_definition "cpp/language/function"). 

If an exception is thrown from its compound-statement or ctor-initializer (if any), the exception will be matched against the [handlers](catch.html "cpp/language/catch") in its handler-seq ﻿: 
    
    
    int f(bool cond)
    {
        if (cond)
            throw 1;
        return 0;
    }
     
    struct X
    {
        int mem;
     
        X() try : mem(f(true)) {}
        catch (...)
        {
            // handles the exception 1
        }
     
        X(int) try
        {
            throw 2;
        }
        catch (...)
        {
            // handles the exception 2
        }
    };

Exceptions thrown in destructors of objects with static [storage duration](storage_duration.html "cpp/language/storage duration") or in constructors of objects associated with [non-block variables](scope.html#Block_scope "cpp/language/scope") with static storage duration are not caught by a function try block on the [main function](main_function.html "cpp/language/main function"). 

Exceptions thrown in destructors of objects with thread storage duration or in constructors of objects associated with non-block variables with thread storage duration are not caught by a function try block on the initial function of the thread.  | (since C++11)  
---|---  
  
Flowing off the end of the compound-statement of a [handler](catch.html "cpp/language/catch") of a function try block is equivalent to flowing off the end of the compound-statement of that function try block, unless the function is a constructor or destructor (see below). 

#### Constructor and destructor try block

For a class `C`, if the function body of its constuctor or destructor definition is a function try block, and an exception is thrown during the initialization or destruction, respectively, of `C`’s subobjects, the exception will also be matched against the [handlers](catch.html "cpp/language/catch") in the handler-seq ﻿ of the function try block: 
    
    
    int f(bool cond = true)
    {
        if (cond)
            throw 1;
        return 0;
    }
     
    struct X
    {
        int mem = f();
     
        ~X()
        {
            throw 2;
        }
    };
     
    struct Y
    {
        X mem;
     
        Y() try {}
        catch (...)
        {
            // handles the exception 1
        }
     
        ~Y() try {}
        catch (...)
        {
            // handles the exception 2
        }
    };

Referring to any non-static member or base class of an object in the handler for a function try block of a constructor or destructor for that object results in undefined behavior. 

If a [return statement](return.html "cpp/language/return") appears in a handler of the function try block of a constructor, the program is ill-formed. 

The [currently handled exception](catch.html#Activating_the_handler "cpp/language/catch") is rethrown if control reaches the end of a handler of the function try block of a constructor or destructor. 

### Control flow

The compound-statement of a try block is a [control-flow-limited statement](statements.html#Control-flow-limited_statements "cpp/language/statements"): 
    
    
    void f()
    {
        goto label;     // error
        try
        {
            goto label; // OK
            label: ;
        }
        catch (...)
        {
            goto label; // error
        }
    }

A [jump statement](statements.html#Jump_statements "cpp/language/statements") ([`goto`](goto.html "cpp/language/goto"), [`break`](break.html "cpp/language/break"), [`return`](return.html "cpp/language/return"), [`continue`](continue.html "cpp/language/continue")) can be used to transfer control out of a try block (including its handlers). When this happens, each variable declared in the try block will be destroyed in the context that directly contains its declaration: 
    
    
    try
    {
        T1 t1;
        try
        {
            T2 t2;
            goto label; // destroy t2 first, then t1
        }
        catch(...)
        {
            // executed if an exception is thrown while destroying t2
        }
    }
    catch(...)
    {
        // executed if an exception is thrown while destroying t1
    }
    label: ;

### Keywords

[`try`](../keyword/try.html "cpp/keyword/try")

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 98](https://cplusplus.github.io/CWG/issues/98.html) | C++98  | a switch statement can transfer control  
into the compound-statement of a try block  | prohibited   
[CWG 1167](https://cplusplus.github.io/CWG/issues/1167.html) | C++98  | it was unspecified whether a function try block on a destructor  
will catch exceptions from a base or member destructor  | such exceptions  
are caught   
  
### See also

  * [Throwing exceptions](throw.html "cpp/language/throw")
  * [Handling exceptions](catch.html "cpp/language/catch")


