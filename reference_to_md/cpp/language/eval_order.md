* evaluation order
  * := order | intermediate results are obtained -- by the -- compiler
    * == | any part of any expression (EVEN function arguments)
  * ⚠️_unspecified_⚠️ 
    * can change / EACH evaluation 
    * == ❌NOT exist "left-to-right" nor "right-to-left" evaluation❌
      * ⚠️!= "left-to-right" & "right-to-left" associativity of operators⚠️

## Contents

  * [1 "Sequenced before" rules (since C++11)](eval_order.html#.22Sequenced_before.22_rules_.28since_C.2B.2B11.29)
    * [1.1 Evaluation of Expressions](eval_order.html#Evaluation_of_Expressions)
    * [1.2 Ordering](eval_order.html#Ordering)
    * [1.3 Rules](eval_order.html#Rules)
    * [1.4 Undefined behavior](eval_order.html#Undefined_behavior)
  * [2 Sequence point rules (until C++11)](eval_order.html#Sequence_point_rules_.28until_C.2B.2B11.29)
    * [2.1 Pre-C++11 Definitions](eval_order.html#Pre-C.2B.2B11_Definitions)
    * [2.2 Pre-C++11 Rules](eval_order.html#Pre-C.2B.2B11_Rules)
    * [2.3 Pre-C++11 Undefined behavior](eval_order.html#Pre-C.2B.2B11_Undefined_behavior)
  * [3 Defect reports](eval_order.html#Defect_reports)
  * [4 References](eval_order.html#References)
  * [5 See also](eval_order.html#See_also)
  
### "Sequenced before" rules (| C++11)

#### Evaluation of Expressions

Evaluation of each expression includes: 

  * _Value computations_ : calculation of the value that is returned by the expression
* This may involve determination of the identity of the object (glvalue evaluation, e.g. if the expression returns a reference to some object) or reading the value previously assigned to an object (prvalue evaluation, e.g. if the expression returns a number, or some other value). 
  * Initiation of _side effects_ : access (read or write) to an object designated by a volatile glvalue, modification (writing) to an object, calling a library I/O function, or calling a function that does any of those operations. 

#### Ordering

_Sequenced before_ is an asymmetric, transitive, pair-wise relationship between evaluations `A` and `B` within the same thread. 

  * If `A` is sequenced before `B` (or, equivalently, `B` is _sequenced after_ `A`), then evaluation of `A` will be complete before evaluation of `B` begins. 
  * If `A` is not sequenced before `B` and `B` is sequenced before `A`, then evaluation of `B` will be complete before evaluation of `A` begins. 
  * If `A` is not sequenced before `B` and `B` is not sequenced before `A`, then two possibilities exist: 
    * Evaluations of `A` and `B` are _unsequenced ﻿_ : they may be performed in any order and may overlap (within a single thread of execution, the compiler may interleave the CPU instructions that comprise `A` and `B`). 
    * Evaluations of `A` and B are _indeterminately sequenced ﻿_ : they may be performed in any order but may not overlap: either `A` will be complete before `B`, or `B` will be complete before `A`. The order may be the opposite the next time the same expression is evaluated. 

An expression X is said to be _sequenced before_ an expression Y if every value computation and every side effect associated with X is sequenced before every value computation and every side effect associated with the expression Y. 

#### Rules

1) Each [full-expression](expressions.html#Full-expressions "cpp/language/expressions") is sequenced before the next full-expression.

2) The value computations (but not the side effects) of the operands to any [operator](expressions.html#Operators "cpp/language/expressions") are sequenced before the value computation of the result of the operator (but not its side effects).

3) When calling a function func (whether or not the function is inline, and whether or not explicit function call syntax is used), each item in the following list is sequenced before the next item: 

  * every argument expression and the postfix expression designating func



  * every [precondition assertion](function.html#Precondition_assertions "cpp/language/function") of func

| (since C++26)  
---|---  
  
  * every expression or statement in the body of func



  * every [postcondition assertion](function.html#Postcondition_assertions "cpp/language/function") of func

| (since C++26)  
---|---  
  
4) The value computation of the built-in [post-increment and post-decrement](operator_incdec.html#Built-in_postfix_operators "cpp/language/operator incdec") operators is sequenced before its side effect.

5) The side effect of the built-in [pre-increment and pre-decrement](operator_incdec.html#Built-in_prefix_operators "cpp/language/operator incdec") operators is sequenced before its value computation (implicit rule due to definition as compound assignment).

6) The first (left) operand of the built-in [logical](operator_logical.html "cpp/language/operator logical") AND operator &&, the built-in logical OR operator || and the built-in [comma operator](operator_other.html#Built-in_comma_operator "cpp/language/operator other") , is sequenced before the second (right) operand.

7) The first operand in the [conditional operator](operator_other.html#Conditional_operator "cpp/language/operator other") ?: is sequenced before the second or third operand.

8) The side effect (modification of the left argument) of the built-in [assignment](operator_assignment.html#Builtin_direct_assignment "cpp/language/operator assignment") operator and of all built-in [compound](operator_assignment.html#Builtin_compound_assignment "cpp/language/operator assignment") assignment operators is sequenced after the value computation (but not the side effects) of both left and right arguments, and is sequenced before the value computation of the assignment expression (that is, before returning the reference to the modified object).

9) In [list-initialization](list_initialization.html "cpp/language/list initialization"), every value computation and side effect of a given initializer clause is sequenced before every value computation and side effect associated with any initializer clause that follows it in the brace-enclosed comma-separated list of initializers.

10) A function call that is not sequenced before or sequenced after another expression evaluation outside of the function (possibly another function call) is indeterminately sequenced with respect to that evaluation (the program must behave [as if](as_if.html "cpp/language/as if") the CPU instructions that constitute a function call were not interleaved with instructions constituting evaluations of other expressions, including other function calls, even if the function was inlined).  The rule 10 has one exception: function calls made by a standard library algorithm executing under [`std::execution::par_unseq`](../algorithm/execution_policy_tag_t.html "cpp/algorithm/execution policy tag t") execution policy are unsequenced and may be arbitrarily interleaved with each other. | (since C++17)  
---|---  
  
11) The call to the allocation function ([`operator new`](../memory/new/operator_new.html "cpp/memory/new/operator new")) is indeterminately sequenced with respect to(until C++17)sequenced before(since C++17) the evaluation of the constructor arguments in a [new expression](new.html "cpp/language/new").

12) When returning from a function, copy-initialization of the temporary that is the result of evaluating the function call is sequenced before the destruction of all temporaries at the end of the operand of the [return statement](return.html "cpp/language/return"), which, in turn, is sequenced before the destruction of local variables of the block enclosing the return statement.

13) In a function-call expression, the expression that names the function is sequenced before every argument expression and every default argument. 14) In a function call, value computations and side effects of the initialization of every parameter are indeterminately sequenced with respect to value computations and side effects of any other parameter. 15) Every overloaded operator obeys the sequencing rules of the built-in operator it overloads when called using operator notation. 16) In a subscript expression E1[E2], E1 is sequenced before E2. 17) In a pointer-to-member expression E1.*E2 or E1->*E2, E1 is sequenced before E2 (unless the dynamic type of E1 does not contain the member to which E2 refers). 18) In a shift operator expression E1 << E2 and E1 >> E2, E1 is sequenced before E2. 19) In every simple assignment expression E1 = E2 and every compound assignment expression E1 @= E2, E2 is sequenced before E1. 20) Every expression in a comma-separated list of expressions in a parenthesized initializer is evaluated as if for a function call (indeterminately-sequenced).  | (since C++17)  
---|---  
  
#### Undefined behavior

The behavior is [undefined](ub.html "cpp/language/ub") in the following cases: 

1) A side effect on a [memory location](memory_model.html#Memory_location "cpp/language/memory model") is unsequenced relative to another side effect on the same memory location: 
    
    
    i = ++i + 2;       // well-defined
    i = i++ + 2;       // undefined behavior until C++17
    f(i = -2, i = -2); // undefined behavior until C++17
    f(++i, ++i);       // undefined behavior until C++17, unspecified after C++17
    i = ++i + i++;     // undefined behavior

2) A side effect on a memory location is unsequenced relative to a value computation using the value of any object in the same memory location: 
    
    
    cout << i << i++; // undefined behavior until C++17
    a[i] = i++;       // undefined behavior until C++17
    n = ++i + i;      // undefined behavior

3) Starting or ending the [lifetime](lifetime.html "cpp/language/lifetime") of an object in a memory location is unsequenced relative to any of the following operations: 

  * a side effect on the same memory location 
  * a value computation using the value of any object in the same memory location 
  * starting or ending the lifetime of an object occupying storage that overlaps with the memory location 


    
    
    union U { int x, y; } u;
    (u.x = 1, 0) + (u.y = 2, 0); // undefined behavior

### Sequence point rules (| C++11-)

* _sequence point_
  * := point | execution sequence /
    * ALL side effects FROM previous evaluations | sequence: are complete
    * NO side effects of the subsequent evaluations started

#### Pre-C++11 Definitions

* side effects / evaluate an expression, might produce
  * accessing an object / designated -- by a -- volatile lvalue,
  * modifying an object,
  * calling a library I/O function, or
  * calling a function / does any of those operations  

#### Pre-C++11 Rules

1) | end of EACH [full-expression](expressions.md#full-expressions),
    * _Example:_ AFTER `;`
    * there is a sequence point 

2) When calling a function (whether or not the function is inline and whether or not function call syntax was used), there is a sequence point after the evaluation of all function arguments (if any) which takes place before execution of any expressions or statements in the function body.

3) When returning from a function, there is a sequence point after the copy-initialization of the result of the function call, and before the destruction of all temporary objects at the end of expression in the [return statement](return.html "cpp/language/return") (if any).

4) There is a sequence point after the copying of a returned value of a function and before the execution of any expressions outside the function.

5) Once the execution of a function begins, no expressions from the calling function are evaluated until execution of the called function has completed (functions cannot be interleaved).

6) In the evaluation of each of the following four expressions, using the built-in (non-overloaded) operators, there is a sequence point after the evaluation of the expression a.
    
    
    a && b
    a || b
    a ? b : c
    a , b

#### Pre-C++11 Undefined behavior

The behavior is [undefined](ub.html "cpp/language/ub") in the following cases: 

1) Between the previous and next sequence point, the value of any object in a memory location is modified more than once by the evaluation of an expression: 
    
    
    i = ++i + i++;     // undefined behavior
    i = i++ + 1;       // undefined behavior
    i = ++i + 1;       // undefined behavior
    ++ ++i;            // undefined behavior
    f(++i, ++i);       // undefined behavior
    f(i = -1, i = -1); // undefined behavior

2) Between the previous and next sequence point, for an object whose value is modified by the evaluation of an expression, its prior value is accessed in a way other than to determine the value to be stored: 
    
    
    cout << i << i++; // undefined behavior
    a[i] = i++;       // undefined behavior

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 1885](https://cplusplus.github.io/CWG/issues/1885.html) | C++11  | sequencing of the destruction of automatic  
variables on function return was not explicit  | sequencing rules added   
[CWG 1949](https://cplusplus.github.io/CWG/issues/1949.html) | C++11  | “sequenced after” was used but not defined in the C++ standard  | defined as the inverse  
of “sequenced before”   
[CWG 1953](https://cplusplus.github.io/CWG/issues/1953.html) | C++11  | side effects and value computations involving a memory  
location could be unsequenced relative to starting or ending  
the lifetime of an object in the same memory location  | the behavior is  
undefined in this case   
[CWG 2146](https://cplusplus.github.io/CWG/issues/2146.html) | C++98  | the cases involving undefined behaviors did not consider bit-fields  | considered   
  
### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 6.9.1 Program execution [intro.execution] 



    

  * 7.6.1.6 Increment and decrement [expr.post.incr] 



    

  * 7.6.2.8 New [expr.new] 



    

  * 7.6.14 Logical AND operator [expr.log.and] 



    

  * 7.6.15 Logical OR operator [expr.log.or] 



    

  * 7.6.16 Conditional operator [expr.cond] 



    

  * 7.6.19 Assignment and compound assignment operators [expr.ass] 



    

  * 7.6.20 Comma operator [expr.comma] 



    

  * 9.4.5 List-initialization [dcl.init.list] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 6.9.1 Program execution [intro.execution] 



    

  * 7.6.1.5 Increment and decrement [expr.post.incr] 



    

  * 7.6.2.7 New [expr.new] 



    

  * 7.6.14 Logical AND operator [expr.log.and] 



    

  * 7.6.15 Logical OR operator [expr.log.or] 



    

  * 7.6.16 Conditional operator [expr.cond] 



    

  * 7.6.19 Assignment and compound assignment operators [expr.ass] 



    

  * 7.6.20 Comma operator [expr.comma] 



    

  * 9.4.4 List-initialization [dcl.init.list] 



  * C++17 standard (ISO/IEC 14882:2017): 



    

  * 4.6 Program execution [intro.execution] 



    

  * 8.2.6 Increment and decrement [expr.post.incr] 



    

  * 8.3.4 New [expr.new] 



    

  * 8.14 Logical AND operator [expr.log.and] 



    

  * 8.15 Logical OR operator [expr.log.or] 



    

  * 8.16 Conditional operator [expr.cond] 



    

  * 8.18 Assignment and compound assignment operators [expr.ass] 



    

  * 8.19 Comma operator [expr.comma] 



    

  * 11.6.4 List-initialization [dcl.init.list] 



  * C++14 standard (ISO/IEC 14882:2014): 



    

  * 1.9 Program execution [intro.execution] 



    

  * 5.2.6 Increment and decrement [expr.post.incr] 



    

  * 5.3.4 New [expr.new] 



    

  * 5.14 Logical AND operator [expr.log.and] 



    

  * 5.15 Logical OR operator [expr.log.or] 



    

  * 5.16 Conditional operator [expr.cond] 



    

  * 5.17 Assignment and compound assignment operators [expr.ass] 



    

  * 5.18 Comma operator [expr.comma] 



    

  * 8.5.4 List-initialization [dcl.init.list] 



  * C++11 standard (ISO/IEC 14882:2011): 



    

  * 1.9 Program execution [intro.execution] 



    

  * 5.2.6 Increment and decrement [expr.post.incr] 



    

  * 5.3.4 New [expr.new] 



    

  * 5.14 Logical AND operator [expr.log.and] 



    

  * 5.15 Logical OR operator [expr.log.or] 



    

  * 5.16 Conditional operator [expr.cond] 



    

  * 5.17 Assignment and compound assignment operators [expr.ass] 



    

  * 5.18 Comma operator [expr.comma] 



    

  * 8.5.4 List-initialization [dcl.init.list] 



### See also

  * [Operator precedence](operator_precedence.html "cpp/language/operator precedence") which defines how expressions are built from their source code representation. 

[C documentation](../../c/language/eval_order.html "c/language/eval order") for Order of evaluation  
---
