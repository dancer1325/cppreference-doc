

  
| [`goto`](goto.html "cpp/language/goto") \- **`return`**  
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
[`for`](for.html "cpp/language/for")  
[range for](range-for.html "cpp/language/range-for") (C++11)  
[Jump statements](statements.html#Jump_statements "cpp/language/statements")  
[`break`](break.html "cpp/language/break")  
[`continue`](continue.html "cpp/language/continue")  
**`return`**  
[`goto`](goto.html "cpp/language/goto")  
[Assertions](statements.html#Assertion_statements "cpp/language/statements")  
[`contract_assert`](contract_assert.html "cpp/language/contract assert") (C++26)  
[Declaration statements](statements.html#Declaration_statements "cpp/language/statements")  
[declaration ; ](declarations.html "cpp/language/declarations")  
[Try blocks](statements.html#Try_blocks "cpp/language/statements")  
[try block](try.html "cpp/language/try")  
[Transactional memory](transactional_memory.html "cpp/language/transactional memory")  
[`synchronized`](transactional_memory.html#Synchronized_blocks "cpp/language/transactional memory"), [`atomic_commit`](transactional_memory.html#Atomic_blocks "cpp/language/transactional memory"), etc (TM TS)  
  


Terminates the current function and returns the specified value (if any) to the caller. 

## Contents

  * [1 Syntax](return.html#Syntax)
  * [2 Explanation](return.html#Explanation)
  * [3 Notes](return.html#Notes)
    * [3.1 Automatic move from local variables and parameters](return.html#Automatic_move_from_local_variables_and_parameters)
    * [3.2 Guaranteed copy elision](return.html#Guaranteed_copy_elision)
  * [4 Keywords](return.html#Keywords)
  * [5 Example](return.html#Example)
  * [6 Defect reports](return.html#Defect_reports)
  * [7 See also](return.html#See_also)

  
---  
  
### Syntax  
  
---  
attr ﻿(optional) `**return**` expression ﻿(optional) `**;**` |  (1)  |   
attr ﻿(optional) `**return**` braced-init-list `**;**` |  (2)  |  (since C++11)  
attr ﻿(optional) `**co_return**` expression ﻿(optional) `**;**` |  (3)  |  (since C++20)  
attr ﻿(optional) `**co_return**` braced-init-list `**;**` |  (4)  |  (since C++20)  
attr |  \-  |  (since C++11) sequence of any number of [attributes](attributes.html "cpp/language/attributes")  
---|---|---  
expression |  \-  |  [expression](expressions.html "cpp/language/expressions"), convertible to the function return type   
braced-init-list |  \-  |  [brace-enclosed initializer list](initialization.html "cpp/language/initialization")  
  
### Explanation

1) Evaluates the expression, terminates the current function and returns the result of the expression to the caller, after [implicit conversion](implicit_cast.html "cpp/language/implicit cast") to the function return type. The expression is optional in functions whose return type is (possibly cv-qualified) void, and disallowed in constructors and in destructors.

2) Uses [copy-list-initialization](list_initialization.html "cpp/language/list initialization") to construct the return value of the function.

3,4) In a coroutine, the keyword co_return must be used instead of return for the final suspension point (see [coroutines](coroutines.html "cpp/language/coroutines") for details).

The expression or braced-init-list(since C++11) (if any) is known as the _operand_ of the return statement. 

There is a [sequence point](eval_order.html#Sequence_point_rules_.28until_C.2B.2B11.29 "cpp/language/eval order") between the copy-initialization of the result of the function call and the destruction of all temporaries at the end of expression.  | (until C++11)  
---|---  
The copy-initialization of the result of the function call is [sequenced-before](eval_order.html "cpp/language/eval order") the destruction of all temporaries at the end of expression, which, in turn, is _sequenced-before_ the destruction of local variables of the block enclosing the return statement.  | (since C++11)  
If the return type of the function is a reference type and a return statement (1,2) binds the returned reference to the result of a [temporary expression](reference_initialization.html#Lifetime_of_a_temporary "cpp/language/reference initialization"), the program is ill-formed.  | (since C++26)  
  
If control reaches the end of 

  * a function with the return type (possibly cv-qualified) void, 
  * a constructor, 
  * a destructor, or 
  * a [function try block](try.html#Function_try_block "cpp/language/try") for a function with the return type (possibly cv-qualified) void



without encountering a return statement, return; is executed. 

If control reaches the end of the [`main` function](main_function.html "cpp/language/main function"), return 0; is executed. 

Flowing off the end of a value-returning function, except the `main` function and specific [coroutines](coroutines.html "cpp/language/coroutines")(since C++20), without a return statement is undefined behavior. 

In a function returning (possibly cv-qualified) void, the return statement with expression can be used, if the expression type is (possibly cv-qualified) void. 

If the return type of a function is specified as a [placeholder type](auto.html "cpp/language/auto"), it will be [deduced](function.html#Return_type_deduction "cpp/language/function") from the return value. If decltype(auto) is used, the type deduction treats an expression that can be an entity as an entity.  | (since C++14)  
---|---  
  
### Notes

Returning by value may involve construction and copy/move of a temporary object, unless [copy elision](copy_elision.html "cpp/language/copy elision") is used. Specifically, the conditions for copy/move are as follows: 

####  Automatic move from local variables and parameters

The expression is _move-eligible_ if it is a (possibly parenthesized) [identifier expression](name.html "cpp/language/identifiers") that names a variable of automatic storage duration whose type is 

  * a non-volatile object type 

| (since C++11)  
---|---  
  
  * or a non-volatile rvalue reference to object type 

| (since C++20)  
and that variable is declared 

  * in the body 
  * or as a parameter 

of the innermost enclosing function or lambda expression.  | (since C++11)  
If the expression is move-eligible, [overload resolution](overload_resolution.html "cpp/language/overload resolution") to select the constructor to use for initialization of the returned value or, for co_return, to select the overload of promise.return_value()(since C++20) is performed _twice_ ﻿: 

  * first as if expression were an rvalue expression (thus it may select the [move constructor](move_constructor.html "cpp/language/move constructor")), and 



    

  * if the first overload resolution failed 


| (since C++11)  
(until C++23)  
  
    

  * or it succeeded, but did not select the [move constructor](move_constructor.html "cpp/language/move constructor") (formally, the first parameter of the selected constructor was not an rvalue reference to the (possibly cv-qualified) type of expression) 


| (since C++11)  
(until C++20)  
  
  * then overload resolution is performed as usual, with expression considered as an lvalue (so it may select the [copy constructor](copy_constructor.html "cpp/language/copy constructor")). 

| (since C++11)  
(until C++23)  
If the expression is move-eligible, it is treated as an xvalue (thus overload resolution may select the [move constructor](move_constructor.html "cpp/language/move constructor")).  | (since C++23)  
  
####  Guaranteed copy elision

If expression is a prvalue, the result object is initialized directly by that expression. This does not involve a copy or move constructor when the types match (see [copy elision](copy_elision.html "cpp/language/copy elision")).  | (since C++17)  
Feature-test macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_implicit_move`](../experimental/feature_test.html#cpp_implicit_move "cpp/feature test") | [`202207L`](../compiler_support/23.html#cpp_implicit_move_202207L "cpp/compiler support/23") | (C++23) | Simpler [implicit move](return.html#Automatic_move_from_local_variables_and_parameters)  
  
### Keywords

[`return`](../keyword/return.html "cpp/keyword/return"), [`co_return`](../keyword/co_return.html "cpp/keyword/co return")

### Example

Run this code
    
    
    #include <iostream>
    #include <string>
    #include <utility>
     
    void fa(int i)
    {
        if (i == 2)
            return;
        [std::cout](../io/cout.html) << "fa("<< i << ")\n";
    } // implied return;
     
    int fb(int i)
    {
        if (i > 4)
            return 4;
        [std::cout](../io/cout.html) << "fb(" << i << ")\n";
        return 2;
    }
     
    [std::pair](../utility/pair.html)<[std::string](../string/basic_string.html), int> fc(const char* p, int x)
    {
        return {p, x};
    }
     
    void fd()
    {
        return fa(10); // fa(10) is a void expression
    }
     
    int main()
    {
        fa(1); // prints its argument, then returns
        fa(2); // does nothing when i == 2, just returns
     
        int i = fb(5); // returns 4
        i = fb(i);     // prints its argument, returns 2
        [std::cout](../io/cout.html) << "i = " << i << '\n'
                  << "fc(~).second = " << fc("Hello", 7).second << '\n';
     
        fd();
    }
     
    struct MoveOnly
    {
        MoveOnly() = default;
        MoveOnly(MoveOnly&&) = default;
    };
     
    MoveOnly move_11(MoveOnly arg)
    {
        return arg; // OK. implicit move
    }
     
    MoveOnly move_11(MoveOnly&& arg)
    {
        return arg; // OK since C++20. implicit move
    }
     
    MoveOnly&& move_23(MoveOnly&& arg)
    {
        return arg; // OK since C++23. implicit move
    }

Output: 
    
    
    fa(1)
    fb(4)
    i = 2
    fc(~).second = 7
    fa(10)

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 1541](https://cplusplus.github.io/CWG/issues/1541.html) | C++98  | expression could not be omitted if the return type is cv-qualified void | it can be omitted   
[CWG 1579](https://cplusplus.github.io/CWG/issues/1579.html) | C++11  | return by converting move constructor was not allowed  | converting move  
constructor lookup enabled   
[CWG 1885](https://cplusplus.github.io/CWG/issues/1885.html) | C++98  | sequencing of the destruction of automatic variables was not explicit  | sequencing rules added   
  
### See also

  * [copy elision](copy_elision.html "cpp/language/copy elision")

[C documentation](../../c/language/return.html "c/language/return") for `return` statement  
---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
