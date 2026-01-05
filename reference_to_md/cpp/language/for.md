
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
| **`for`**  
---  
[range-`for`](range-for.html "cpp/language/range-for") (C++11)  
  
| [`while`](while.html "cpp/language/while")  
---  
[`do-while`](do.html "cpp/language/do")  
  
Jump statements  
| [`continue`](continue.html "cpp/language/continue") \- [`break`](break.html "cpp/language/break")  
---  
  
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
[`try` block](try.html "cpp/language/try")  
  
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
**`for`**  
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
  


Conditionally executes a statement repeatedly, where the statement does not need to manage the loop condition. 

## Contents

  * [1 Syntax](for.html#Syntax)
  * [2 Condition](for.html#Condition)
    * [2.1 Expression](for.html#Expression)
    * [2.2 Declaration](for.html#Declaration)
      * [2.2.1 Non-structured binding declaration](for.html#Non-structured_binding_declaration)
      * [2.2.2 Structured binding declaration](for.html#Structured_binding_declaration)
  * [3 Explanation](for.html#Explanation)
  * [4 Notes](for.html#Notes)
  * [5 Keywords](for.html#Keywords)
  * [6 Example](for.html#Example)
  * [7 See also](for.html#See_also)

  
---  
  
### Syntax  
  
---  
attr ﻿(optional) `**for (**` init-statement condition ﻿(optional) `**;**` expression ﻿(optional) `**)**` statement |  |   
attr |  \-  |  (since C++11) any number of [attributes](attributes.html "cpp/language/attributes")  
---|---|---  
init-statement |  \-  |  one of 

  * an [expression statement](statements.html#Expression_statements "cpp/language/statements") (which may be a null statement ;) 
  * a [simple declaration](declarations.html#Simple_declaration "cpp/language/declarations") (typically a declaration of a loop counter variable with initializer), it may declare arbitrary many variables or [structured bindings](structured_binding.html "cpp/language/structured binding")(since C++17)

| 

  * an [alias declaration](type_alias.html "cpp/language/type alias")

| (since C++23)  
---|---  
  
Note that any init-statement must end with a semicolon. This is why it is often described informally as an expression or a declaration followed by a semicolon.   
  
condition |  \-  |  a [condition](for.html#Condition)  
expression |  \-  |  an [expression](expressions.html "cpp/language/expressions") (typically an expression that increments the loop counter)   
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

A for statement equivalent to:   
  
---  
`**{**`  


    init-statement  

    `**while (**` condition `**)**`  

    `**{**`  


    statement  

    expression `**;**`  

    `**}**`
`**}**` |  |   
  
Except that 

  * The scope of init-statement and the scope of condition are the same. 
  * The scope of statement and the scope of expression are disjoint and nested within the scope of init-statement and condition. 
  * Executing a [continue statement](continue.html "cpp/language/continue") in statement will evaluate expression. 
  * Empty condition is equivalent to true. 



If the loop needs to be terminated within statement, a [break statement](break.html "cpp/language/break") can be used as terminating statement. 

If the current iteration needs to be terminated within statement, a [continue statement](continue.html "cpp/language/continue") can be used as shortcut. 

### Notes

As is the case with [`while`](while.html "cpp/language/while") loop, if statement is not a compound statement, the scope of variables declared in it is limited to the loop body as if it was a compound statement. 
    
    
    for (;;)
        int n;
    // n goes out of scope

As part of the C++ [forward progress guarantee](multithread.html#Progress_guarantee "cpp/language/multithread"), the behavior is [undefined](ub.html "cpp/language/ub") if a loop that is not a [trivial infinite loop](multithread.html#Trivial_infinite_loops "cpp/language/multithread")(since C++26) without [observable behavior](as_if.html "cpp/language/as if") does not terminate. Compilers are permitted to remove such loops. 

While in C names declared in the scope of init-statement and condition can be shadowed in the scope of statement, it is forbidden in C++: 
    
    
    for (int i = 0;;)
    {
        long i = 1;   // valid C, invalid C++
        // ...
    }

### Keywords

[`for`](../keyword/for.html "cpp/keyword/for")

### Example

Run this code
    
    
    #include <iostream>
    #include <vector>
     
    int main()
    {
        [std::cout](../io/cout.html) << "1) typical loop with a single statement as the body:\n";
        for (int i = 0; i < 10; ++i)
            [std::cout](../io/cout.html) << i << ' ';
     
        [std::cout](../io/cout.html) << "\n\n" "2) init-statement can declare multiple names, as\n"
                     "long as they can use the same decl-specifier-seq:\n";
        for (int i = 0, *p = &i; i < 9; i += 2)
            [std::cout](../io/cout.html) << i << ':' << *p << ' ';
     
        [std::cout](../io/cout.html) << "\n\n" "3) condition may be a declaration:\n";
        char cstr[] = "Hello";
        for (int n = 0; char c = cstr[n]; ++n)
            [std::cout](../io/cout.html) << c;
     
        [std::cout](../io/cout.html) << "\n\n" "4) init-statement can use the auto type specifier:\n";
        [std::vector](../container/vector.html)<int> v = {3, 1, 4, 1, 5, 9};
        for (auto iter = v.begin(); iter != v.end(); ++iter)
            [std::cout](../io/cout.html) << *iter << ' ';
     
        [std::cout](../io/cout.html) << "\n\n" "5) init-statement can be an expression:\n";
        int n = 0;
        for ([std::cout](../io/cout.html) << "Loop start\n";
             [std::cout](../io/cout.html) << "Loop test\n";
             [std::cout](../io/cout.html) << "Iteration " << ++n << '\n')
        {
            if (n > 1)
                break;
        }
     
        [std::cout](../io/cout.html) << "\n" "6) constructors and destructors of objects created\n"
                     "in the loop's body are called per each iteration:\n";
        struct S
        {
            S(int x, int y) { [std::cout](../io/cout.html) << "S::S(" << x << ", " << y << "); "; }
            ~S() { [std::cout](../io/cout.html) << "S::~S()\n"; }
        };
        for (int i{0}, j{5}; i < j; ++i, --j)
            S s{i, j};
     
        [std::cout](../io/cout.html) << "\n" "7) init-statement can use structured bindings:\n";
        long arr[]{1, 3, 7};
        for (auto [i, j, k] = arr; i + j < k; ++i)
            [std::cout](../io/cout.html) << i + j << ' ';
        [std::cout](../io/cout.html) << '\n';
    }

Output: 
    
    
    1) typical loop with a single statement as the body:
    0 1 2 3 4 5 6 7 8 9
     
    2) init-statement can declare multiple names, as
    long as they can use the same decl-specifier-seq:
    0:0 2:2 4:4 6:6 8:8
     
    3) condition may be a declaration:
    Hello
     
    4) init-statement can use the auto type specifier:
    3 1 4 1 5 9
     
    5) init-statement can be an expression:
    Loop start
    Loop test
    Iteration 1
    Loop test
    Iteration 2
    Loop test
     
    6) constructors and destructors of objects created
    in the loop's body are called per each iteration:
    S::S(0, 5); S::~S()
    S::S(1, 4); S::~S()
    S::S(2, 3); S::~S()
     
    7) init-statement can use structured bindings:
    4 5 6

### See also

[ range-`for` loop](range-for.html "cpp/language/range-for")(C++11) |  executes loop over range  
---|---  
[C documentation](../../c/language/for.html "c/language/for") for for
