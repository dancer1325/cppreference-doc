
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
  
| **`switch`**  
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
**`switch`**  
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
  


Transfers control to one of several statements, depending on the value of a condition. 

## Contents

  * [1 Syntax](switch.html#Syntax)
  * [2 Condition](switch.html#Condition)
    * [2.1 Expression](switch.html#Expression)
    * [2.2 Declaration](switch.html#Declaration)
      * [2.2.1 Non-structured binding declaration](switch.html#Non-structured_binding_declaration)
      * [2.2.2 Structured binding declaration](switch.html#Structured_binding_declaration)
    * [2.3 Type](switch.html#Type)
  * [3 Labels](switch.html#Labels)
  * [4 Control flow transfer](switch.html#Control_flow_transfer)
  * [5 switch statements with initializer](switch.html#switch_statements_with_initializer)
  * [6 Notes](switch.html#Notes)
  * [7 Keywords](switch.html#Keywords)
  * [8 Example](switch.html#Example)
  * [9 Defect reports](switch.html#Defect_reports)
  * [10 See also](switch.html#See_also)
  * [11 External links](switch.html#External_links)

  
---  
  
### Syntax  
  
---  
attr ﻿(optional) `**switch**` `**(**` init-statement ﻿(optional) condition `**)**` statement |  |   
attr |  \-  |  (since C++11) any number of [attributes](attributes.html "cpp/language/attributes")  
---|---|---  
init-statement |  \-  |  (since C++17) any of the following: 

  * an [expression statement](statements.html#Expression_statements "cpp/language/statements") (which may be a null statement ;) 
  * a [simple declaration](declarations.html#Simple_declaration "cpp/language/declarations"), typically a declaration of a variable with initializer, but it may declare arbitrarily many variables or [structured bindings](structured_binding.html "cpp/language/structured binding")

| 

  * an [alias declaration](type_alias.html "cpp/language/type alias")

| (since C++23)  
---|---  
  
Note that any init-statement must end with a semicolon. This is why it is often described informally as an expression or a declaration followed by a semicolon.   
  
condition |  \-  |  a [condition](switch.html#Condition)  
statement |  \-  |  a statement (typically a compound statement)   
  
### Condition

A condition can either be an [expression](expressions.html "cpp/language/expressions") or a [simple declaration](declarations.html#Simple_declaration "cpp/language/declarations"). 

  * If it can be syntactically resolved as a [structured binding](structured_binding.html "cpp/language/structured binding") declaration, it is interpreted as a structured binding declaration. 

| (since C++26)  
---|---  
  
  * If it can be syntactically resolved as an expression, it is treated as an expression. Otherwise, it is treated as a declaration that is not a structured binding declaration(since C++26). 



When control reaches condition, the condition will yield a value, which is used to determine which label the control will go to. 

#### Expression

If condition is an expression, the value it yields is the the value of the expression. 

#### Declaration

If condition is a simple declaration, the value it yields is the value of the decision variable (see below). 

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
  
#### Type

condition can only yield the following types: 

  * integral types 
  * enumeration types 
  * class types 



If the yielded value is of a class type, it is contextually implicitly converted to an integral or enumeration type. 

If the (possibly converted) type is subject to [integral promotions](implicit_cast.html#Integral_promotion "cpp/language/implicit conversion") , the yielded value is converted to the promoted type. 

### Labels

Any statement within the switch statement can be labeled with one or more following labels:   
  
---  
attr ﻿(optional) `**case**` constant-expression `**:**` |  (1)  |   
attr ﻿(optional) `**default:**` |  (2)  |   
attr |  \-  |  (since C++11) any number of [attributes](attributes.html "cpp/language/attributes")  
---|---|---  
constant-expression |  \-  |  a [converted constant expression](constant_expression.html#Converted_constant_expression "cpp/language/constant expression") of the adjusted type of the switch condition   
  
  
A case or default label is associated with the innermost switch statement enclosing it. 

If any of the following conditions is satisfied, the program is ill-formed: 

  * A switch statement is associated with multiple case labels whose constant-expression ﻿s have the same value after conversions. 
  * A switch statement is associated with multiple default labels. 



### Control flow transfer

When the condition of a switch statement yields a (possibly converted) value: 

  * If one of the associated case label constants has the same value, control is passed to the statement labeled by the matched case label. 
  * Otherwise, if there is an associated default label, control is passed to the statement labeled by the default label. 
  * Otherwise, none of the statements in the switch statement will be executed. 



case and default labels in themselves do not alter the flow of control. To exit from a switch statement from the middle, see [break statements](break.html "cpp/language/break"). 

Compilers may issue warnings on fallthrough (reaching the next case or default label without a break) unless the attribute `[[[fallthrough](attributes/fallthrough.html "cpp/language/attributes/fallthrough")]]` appears immediately before the case label to indicate that the fallthrough is intentional(since C++17). 
    
    
    switch (1)
    {
        case 1:
            [std::cout](../io/cout.html) << '1'; // prints "1",
        case 2:
            [std::cout](../io/cout.html) << '2'; // then prints "2"
    }
    
    
    switch (1)
    {
        case 1:
            [std::cout](../io/cout.html) << '1'; // prints "1"
            break;            // and exits the switch
        case 2:
            [std::cout](../io/cout.html) << '2';
            break;
    }

###  switch statements with initializer

If init-statement is used, the switch statement is equivalent to  |   
---  
`**{**`  


    init-statement  

    `**switch**` `**(**` condition `**)**` statement  

``}  |  |   
  
Except that names declared by the init-statement (if init-statement is a declaration) and names declared by condition (if condition is a declaration) are in the same scope, which is also the scope of statement. 

(since C++17)  
  
### Notes

Because transfer of control is [not permitted to enter the scope](goto.html "cpp/language/goto") of a variable, if a declaration statement is encountered inside the statement, it has to be scoped in its own compound statement: 
    
    
    switch (1)
    {
        case 1:
            int x = 0; // initialization
            [std::cout](../io/cout.html) << x << '\n';
            break;
        default:
            // compilation error: jump to default:
            // would enter the scope of 'x' without initializing it
            [std::cout](../io/cout.html) << "default\n";
            break;
    }
    
    
    switch (1)
    {
        case 1:
            {
                int x = 0;
                [std::cout](../io/cout.html) << x << '\n';
                break;
            } // scope of 'x' ends here
        default:
            [std::cout](../io/cout.html) << "default\n"; // no error
            break;
    }

### Keywords

[`switch`](../keyword/switch.html "cpp/keyword/switch"), [`case`](../keyword/case.html "cpp/keyword/case"), [`default`](../keyword/default.html "cpp/keyword/default")

### Example

The following code shows several usage cases of the switch statement:

Run this code
    
    
    #include <iostream>
     
    int main()
    {
        const int i = 2;
        switch (i)
        {
            case 1:
                [std::cout](../io/cout.html) << '1';
            case 2:              // execution starts at this case label
                [std::cout](../io/cout.html) << '2';
            case 3:
                [std::cout](../io/cout.html) << '3';
                [[fallthrough]]; // C++17 attribute to silent the warning on fallthrough
            case 5:
                [std::cout](../io/cout.html) << "45";
                break;           // execution of subsequent statements is terminated
            case 6:
                [std::cout](../io/cout.html) << '6';
        }
     
        [std::cout](../io/cout.html) << '\n';
     
        switch (i)
        {
            case 4:
                [std::cout](../io/cout.html) << 'a';
            default:
                [std::cout](../io/cout.html) << 'd'; // there are no applicable constant expressions 
                                  // therefore default is executed
        }
     
        [std::cout](../io/cout.html) << '\n';
     
        switch (i)
        {
            case 4:
                [std::cout](../io/cout.html) << 'a'; // nothing is executed
        }
     
        // when enumerations are used in a switch statement, many compilers
        // issue warnings if one of the enumerators is not handled
        enum color { RED, GREEN, BLUE };
        switch (RED)
        {
            case RED:
                [std::cout](../io/cout.html) << "red\n";
                break;
            case GREEN:
                [std::cout](../io/cout.html) << "green\n";
                break;
            case BLUE:
                [std::cout](../io/cout.html) << "blue\n";
                break;
        }
     
        // the C++17 init-statement syntax can be helpful when there is
        // no implicit conversion to integral or enumeration type
        struct Device
        {
            enum State { SLEEP, READY, BAD };
            auto state() const { return m_state; }
     
            /* ... */
     
        private:
            State m_state{};
        };
     
        switch (auto dev = Device{}; dev.state())
        {
            case Device::SLEEP:
                /* ... */
                break;
            case Device::READY:
                /* ... */
                break;
            case Device::BAD:
                /* ... */
                break;
        }
     
        // pathological examples
     
        // the statement does not have to be a compound statement
        switch (0)
            [std::cout](../io/cout.html) << "this does nothing\n";
     
        // labels do not require a compound statement either
        switch (int n = 1)
            case 0:
            case 1:
                [std::cout](../io/cout.html) << n << '\n';
    }

Output: 
    
    
    2345
    d
    red
    1

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 1767](https://cplusplus.github.io/CWG/issues/1767.html) | C++98  | condition ﻿s of types that are not subject to  
integral promotion could not be promoted  | do not promote  
condition ﻿s of these types   
[CWG 2629](https://cplusplus.github.io/CWG/issues/2629.html) | C++98  | condition could be a declaration of a floating-point variable  | prohibited   
  
### See also

[C documentation](../../c/language/switch.html "c/language/switch") for switch  
---  
  
### External links

1\.  | [Loop unrolling using Duff's Device](https://en.wikipedia.org/wiki/Duff%27s_device "enwiki:Duff's device")  
---|---  
2\.  | [Duff's device can be used to implement coroutines in C/C++](https://en.wikipedia.org/wiki/Coroutine#C "enwiki:Coroutine")
