
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
| **`if`**  
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
  


[ Statements](statements.html "cpp/language/statements")

[Labels](statements.html#Labeled_statements "cpp/language/statements")  
---  
[label : statement](statements.html#Labeled_statements "cpp/language/statements")  
[Expression statements](statements.html#Expression_statements "cpp/language/statements")  
[expression ; ](statements.html#Expression_statements "cpp/language/statements")  
[Compound statements](statements.html#Compound_statements "cpp/language/statements")  
[`{` statement... `}`](statements.html#Compound_statements "cpp/language/statements")  
[Selection statements](statements.html#Selection_statements "cpp/language/statements")  
**`if`**  
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
  


Conditionally executes another statement. 

Used where code needs to be executed based on a condition, or whether the if statement is evaluated in a manifestly constant-evaluated context(since C++23). 

## Contents

  * [1 Syntax](if.html#Syntax)
  * [2 Condition](if.html#Condition)
    * [2.1 Expression](if.html#Expression)
    * [2.2 Declaration](if.html#Declaration)
      * [2.2.1 Non-structured binding declaration](if.html#Non-structured_binding_declaration)
      * [2.2.2 Structured binding declaration](if.html#Structured_binding_declaration)
  * [3 Branch selection](if.html#Branch_selection)
  * [4 if statements with initializer](if.html#if_statements_with_initializer)
  * [5 Constexpr if](if.html#Constexpr_if)
  * [6 Consteval if](if.html#Consteval_if)
  * [7 Notes](if.html#Notes)
  * [8 Keywords](if.html#Keywords)
  * [9 Defect reports](if.html#Defect_reports)
  * [10 See also](if.html#See_also)

  
---  
  
### Syntax  
  
---  
attr ﻿(optional) `**if**` `**constexpr**`(optional)  
`**(**` init-statement ﻿(optional) condition `**)**` statement-true |  (1)  |   
attr ﻿(optional) `**if**` `**constexpr**`(optional)  
`**(**` init-statement ﻿(optional) condition `**)**` statement-true `**else**` statement-false |  (2)  |   
attr ﻿(optional) `**if**` `**!**`(optional) `**consteval**` compound-statement |  (3)  |  (since C++23)  
attr ﻿(optional) `**if**` `**!**`(optional) `**consteval**` compound-statement `**else**` statement |  (4)  |  (since C++23)  
  
1) if statement without an else branch

2) if statement with an else branch

3) consteval if statement without an else branch

4) consteval if statement with an else branch

attr |  \-  |  (since C++11) any number of [attributes](attributes.html "cpp/language/attributes")  
---|---|---  
`**constexpr**` |  \-  |  (since C++17) if present, the statement becomes a [constexpr if statement](if.html#Constexpr_if)  
init-statement |  \-  |  (since C++17) either 

  * an [expression statement](statements.html "cpp/language/statements") (which may be a null statement ;) 
  * a [simple declaration](declarations.html "cpp/language/declarations"), typically a declaration of a variable with initializer, but it may declare arbitrary many variables or be a [structured binding](structured_binding.html "cpp/language/structured binding") declaration 

| 

  * an [alias declaration](type_alias.html "cpp/language/type alias")

| (since C++23)  
---|---  
  
Note that any init-statement must end with a semicolon. This is why it is often described informally as an expression or a declaration followed by a semicolon.   
  
condition |  \-  |  a [condition](if.html#Condition)  
statement-true |  \-  |  the [statement](statements.html "cpp/language/statements") to be executed if condition yields true  
statement-false |  \-  |  the statement to be executed if condition yields false  
compound-statement |  \-  |  the [compound statement](statements.html#Compound_statements "cpp/language/statements") to be executed if the if statement is evaluated in a [manifestly constant-evaluated context](constant_expression.html#Manifestly_constant-evaluated_expressions "cpp/language/constant expression") (or is not evaluated in such a context if `!` is preceding consteval)   
statement |  \-  |  the statement (must be a compound statement, see [below](if.html#Consteval_if "cpp/language/if")) to be executed if the if statement is not evaluated in a manifestly constant-evaluated context (or is evaluated in such a context if `!` is preceding consteval)   
  
### Condition

A condition can either be an [expression](expressions.html "cpp/language/expressions") or a [simple declaration](declarations.html#Simple_declaration "cpp/language/declarations"). 

  * If it can be syntactically resolved as a [structured binding](structured_binding.html "cpp/language/structured binding") declaration, it is interpreted as a structured binding declaration. 

| (since C++26)  
---|---  
  
  * If it can be syntactically resolved as an expression, it is treated as an expression. Otherwise, it is treated as a declaration that is not a structured binding declaration(since C++26). 



When control reaches condition, the condition will yield a value, which is used to determine which branch the control will go to. 

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
  
### Branch selection

If the condition yields true, statement-true is executed. 

If the else part of the if statement is present and condition yields false, statement-false is executed. 

If the else part of the if statement is present and statement-true is also an if statement, then that inner if statement must contain an else part as well (in other words, in nested if statements, the else is associated with the closest if that does not yet have an associated else). 

Run this code
    
    
    #include <iostream>
     
    int main()
    {
        // simple if-statement with an else clause
        int i = 2;
        if (i > 2)
            [std::cout](../io/cout.html) << i << " is greater than 2\n";
        else
            [std::cout](../io/cout.html) << i << " is not greater than 2\n";
     
        // nested if-statement
        int j = 1;
        if (i > 1)
            if (j > 2)
                [std::cout](../io/cout.html) << i << " > 1 and " << j << " > 2\n";
            else // this else is part of if (j > 2), not of if (i > 1)
                [std::cout](../io/cout.html) << i << " > 1 and " << j << " <= 2\n";
     
        // declarations can be used as conditions with dynamic_cast
        struct Base
        {
            virtual ~Base() {}
        };
     
        struct Derived : Base
        {
            void df() { [std::cout](../io/cout.html) << "df()\n"; }
        };
     
        Base* bp1 = new Base;
        Base* bp2 = new Derived;
     
        if (Derived* p = dynamic_cast<Derived*>(bp1)) // cast fails, returns nullptr
            p->df(); // not executed
     
        if (auto p = dynamic_cast<Derived*>(bp2)) // cast succeeds
            p->df(); // executed
    }

Output: 
    
    
    2 is not greater than 2
    2 > 1 and 1 <= 2
    df()

###  if statements with initializer

If init-statement is used, the if statement is equivalent to  |   
---  
`**{**`  


    init-statement  

    attr ﻿(optional) `**if**` `**constexpr**`(optional) `**(**` condition `**)**`  


    statement-true  

`**}**` |  |   
  
or   
  
---  
`**{**`  


    init-statement  

    attr ﻿(optional) `**if**` `**constexpr**`(optional) `**(**` condition `**)**`  


    statement-true  

    `**else**`

    statement-false  

`**}**` |  |   
  
Except that names declared by the init-statement (if init-statement is a declaration) and names declared by condition (if condition is a declaration) are in the same scope, which is also the scope of both statement ﻿s. 
    
    
    [std::map](../container/map.html)<int, [std::string](../string/basic_string.html)> m;
    [std::mutex](../thread/mutex.html) mx;
    extern bool shared_flag; // guarded by mx
     
    int demo()
    {
        if (auto it = m.find(10); it != m.end())
            return it->second.size();
     
        if (char buf[10]; [std::fgets](../io/c/fgets.html)(buf, 10, stdin))
            m[0] += buf;
     
        if ([std::lock_guard](../thread/lock_guard.html) lock(mx); shared_flag)
        {
            unsafe_ping();
            shared_flag = false;
        }
     
        if (int s; int count = ReadBytesWithSignal(&s))
        {
            publish(count);
            raise(s);
        }
     
        if (const auto keywords = {"if", "for", "while"};
            std::[ranges::any_of](http://en.cppreference.com/w/cpp/ranges-algorithm-placeholder/all_any_none_of)(keywords, [&tok](const char* kw) { return tok == kw; }))
        {
            [std::cerr](../io/cerr.html) << "Token must not be a keyword\n";
        }
    }

(since C++17)  
  
  


###  Constexpr if

The statement that begins with if constexpr is known as the _constexpr if statement_. All substatements of a constexpr if statement are [control-flow-limited statements](statements.html#Control-flow-limited_statements "cpp/language/statements"). In a constexpr if statement, condition must be a [contextually converted constant expression of type bool](constant_expression.html#Converted_constant_expression "cpp/language/constant expression")(until C++23)an expression [contextually converted to bool](implicit_cast.html#Contextual_conversions "cpp/language/implicit conversion"), where the conversion is a [constant expression](constant_expression.html "cpp/language/constant expression")(since C++23). If condition yields true, then statement-false is discarded (if present), otherwise, statement-true is discarded. The return statements in a discarded statement do not participate in function return type deduction: 
    
    
    template<typename T>
    auto get_value(T t)
    {
        if constexpr ([std::is_pointer_v](../types/is_pointer.html)<T>)
            return *t; // deduces return type to int for T = int*
        else
            return t;  // deduces return type to int for T = int
    }

The discarded statement can [ODR-use](definition.html#One_Definition_Rule "cpp/language/definition") a variable that is not defined: 
    
    
    extern int x; // no definition of x required
     
    int f()
    {
        if constexpr (true)
            return 0;
        else if (x)
            return x;
        else
            return -x;
    }

Outside a template, a discarded statement is fully checked. if constexpr is not a substitute for the [` #if`](../preprocessor/conditional.html "cpp/preprocessor/conditional") preprocessing directive: 
    
    
    void f()
    {
        if constexpr(false)
        {
            int i = 0;
            int *p = i; // Error even though in discarded statement
        }
    }

If a constexpr if statement appears inside a [templated entity](templates.html#Templated_entity "cpp/language/templates"), and if condition is not [value-dependent](dependent_name.html#Value-dependent_expressions "cpp/language/dependent name") after instantiation, the discarded statement is not instantiated when the enclosing template is instantiated. 
    
    
    template<typename T, typename ... Rest>
    void g(T&& p, Rest&& ...rs)
    {
        // ... handle p
        if constexpr (sizeof...(rs) > 0)
            g(rs...); // never instantiated with an empty argument list
    }

The condition remains value-dependent after instantiation is a nested template: 
    
    
    template<class T>
    void g()
    {
        auto lm = [=](auto p)
        {
            if constexpr (sizeof(T) == 1 && sizeof p == 1)
            {
                // this condition remains value-dependent after instantiation of g<T>,
                // which affects implicit lambda captures
                // this compound statement may be discarded only after
                // instantiation of the lambda body
            }
        };
    }

The discarded statement cannot be ill-formed for every possible specialization: 
    
    
    template<typename T>
    void f()
    {
        if constexpr ([std::is_arithmetic_v](../types/is_arithmetic.html)<T>)
            // ...
        else {
            using invalid_array = int[-1]; // ill-formed: invalid for every T
            static_assert(false, "Must be arithmetic"); // ill-formed before CWG2518
        }
    }

The common workaround before the implementation of [CWG issue 2518](https://cplusplus.github.io/CWG/issues/2518.html) for such a catch-all statement is a type-dependent expression that is always false: 
    
    
    template<typename>
    constexpr bool dependent_false_v = false;
     
    template<typename T>
    void f()
    {
        if constexpr ([std::is_arithmetic_v](../types/is_arithmetic.html)<T>)
            // ...
        else {
            // workaround before CWG2518
            static_assert(dependent_false_v<T>, "Must be arithmetic");
        }
    }

A [typedef declaration](typedef.html "cpp/language/typedef") or [alias declaration](type_alias.html "cpp/language/type alias")(since C++23) can be used as the init-statement of a constexpr if statement to reduce the scope of the type alias.  | | This section is incomplete  
Reason: no example   
---|---  
(since C++17)  
  
  


###  Consteval if

The statement that begins with if consteval is known as the _consteval if statement_. All substatements of a consteval if statement are [control-flow-limited statements](statements.html#Control-flow-limited_statements "cpp/language/statements"). statement must be a compound statement, and it will still be treated as a part of the consteval if statement even if it is not a compound statement (and thus results in a compilation error):  Run this code
    
    
    constexpr void f(bool b)
    {
        if (true)
            if consteval {}
            else ; // error: not a compound-statement
                   // else not associated with outer if
    }

If a consteval if statement is evaluated in a [manifestly constant-evaluated context](constant_expression.html#Manifestly_constant-evaluated_expressions "cpp/language/constant expression"), compound-statement is executed. Otherwise, statement is executed if it is present. If the statement begins with if !consteval, the compound-statement and statement (if any) must both be compound statements. Such statements are not considered consteval if statements, but are equivalent to consteval if statements: 

  * if !consteval {/* stmt */ } is equivalent to  




     if consteval {} else {/* stmt */}. 

  * if !consteval {/* stmt-1 */} else {/* stmt-2 */} is equivalent to  




     if consteval {/* stmt-2 */} else {/* stmt-1 */}. 
compound-statement in a consteval if statement (or statement in the negative form) is in an [immediate function context](consteval.html "cpp/language/consteval"), in which a call to an immediate function needs not to be a constant expression.  Run this code
    
    
    #include <cmath>
    #include <cstdint>
    #include <cstring>
    #include <iostream>
     
    constexpr bool is_constant_evaluated() noexcept
    {
        if consteval { return true; } else { return false; }
    }
     
    constexpr bool is_runtime_evaluated() noexcept
    {
        if not consteval { return true; } else { return false; }
    }
     
    consteval [std::uint64_t](../types/integer.html) ipow_ct([std::uint64_t](../types/integer.html) base, [std::uint8_t](../types/integer.html) exp)
    {
        if (!base) return base;
        [std::uint64_t](../types/integer.html) res{1};
        while (exp)
        {
            if (exp & 1) res *= base;
            exp /= 2;
            base *= base;
        }
        return res;
    }
     
    constexpr [std::uint64_t](../types/integer.html) ipow([std::uint64_t](../types/integer.html) base, [std::uint8_t](../types/integer.html) exp)
    {
        if consteval // use a compile-time friendly algorithm
        {
            return ipow_ct(base, exp);
        }
        else // use runtime evaluation
        {
            return [std::pow](../numeric/math/pow.html)(base, exp);
        }
    }
     
    int main(int, const char* argv[])
    {
        static_assert(ipow(0, 10) == 0 && ipow(2, 10) == 1024);
        [std::cout](../io/cout.html) << ipow([std::strlen](../string/byte/strlen.html)(argv[0]), 3) << '\n';
    }

| (since C++23)  
---|---  
  
### Notes

If statement-true or statement-false is not a compound statement, it is treated as if it were: 
    
    
    if (x)
        int i;
    // i is no longer in scope

is the same as 
    
    
    if (x)
    {
        int i;
    }
    // i is no longer in scope

The scope of the name introduced by condition, if it is a declaration, is the combined scope of both statements' bodies: 
    
    
    if (int x = f())
    {
        int x; // error: redeclaration of x
    }
    else
    {
        int x; // error: redeclaration of x
    }

If statement-true is entered by [`goto`](goto.html "cpp/language/goto") or longjmp, condition is not evaluated and statement-false is not executed. 

Built-in conversions are not allowed in the condition of a constexpr if statement, except for non-[narrowing](list_initialization.html#Narrowing_conversions "cpp/language/list initialization") [integral conversions](implicit_cast.html#Integral_conversions "cpp/language/implicit conversion") to bool.  | (since C++17)  
(until C++23)  
---|---  
Feature-test macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_if_constexpr`](../experimental/feature_test.html#cpp_if_constexpr "cpp/feature test") | [`201606L`](../compiler_support/17.html#cpp_if_constexpr_201606L "cpp/compiler support/17") | (C++17) | constexpr `if`  
[`__cpp_if_consteval`](../experimental/feature_test.html#cpp_if_consteval "cpp/feature test") | [`202106L`](../compiler_support/23.html#cpp_if_consteval_202106L "cpp/compiler support/23") | (C++23) | consteval `if`  
  
### Keywords

[`if`](../keywords/if.html "cpp/keyword/if"), [`else`](../keyword/else.html "cpp/keyword/else"), [`constexpr`](../keyword/constexpr.html "cpp/keyword/constexpr"), [`consteval`](../keyword/consteval.html "cpp/keyword/consteval")

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 631](https://cplusplus.github.io/CWG/issues/631.html) | C++98  | the control flow was unspecified if the  
first substatement is reached via a label  | the condition is not evaluated and the second  
substatement is not executed (same as in C)   
  
### See also

[ is_constant_evaluated](../types/is_constant_evaluated.html "cpp/types/is constant evaluated")(C++20) |  detects whether the call occurs within a constant-evaluated context   
(function)   
---|---  
[C documentation](../../c/language/if.html "c/language/if") for if statement
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
