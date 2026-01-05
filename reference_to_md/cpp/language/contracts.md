[C++](../../cpp.html "cpp")

[Compiler support](../compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](../freestanding.html "cpp/freestanding")  
[Language](../language.html "cpp/language")  
[Standard library](../standard_library.html "cpp/standard library")  
[Standard library headers](../headers.html "cpp/header")  
[Named requirements](../iterator/concepts.html "cpp/named req")  
[Feature test macros](../experimental/feature_test.html "cpp/feature test") (C++20)  
[Language support library](../utility.html#Language_support "cpp/utility")  
[Concepts library](../concepts.html "cpp/concepts") (C++20)  
[Diagnostics library](../error.html "cpp/error")  
[Memory management library](../memory.html "cpp/memory")  
[Metaprogramming library](../meta.html "cpp/meta") (C++11)  
[General utilities library](../utility.html "cpp/utility")  
[Containers library](../container.html "cpp/container")  
[Iterators library](../iterator.html "cpp/iterator")  
[Ranges library](../ranges.html "cpp/ranges") (C++20)  
[Algorithms library](../algorithm.html "cpp/algorithm")  
[Strings library](../string.html "cpp/string")  
[Text processing library](../text.html "cpp/text")  
[Numerics library](../numeric.html "cpp/numeric")  
[Date and time library](../chrono.html "cpp/chrono")  
[Input/output library](../io.html "cpp/io")  
[Filesystem library](../filesystem.html "cpp/filesystem") (C++17)  
[Concurrency support library](../atomic.html "cpp/thread") (C++11)  
[Execution control library](../experimental/execution.html "cpp/execution") (C++26)  
[Technical specifications](../experimental.html "cpp/experimental")  
[Symbols index](../symbol_index.html "cpp/symbol index")  
[External libraries](../links/libs.html "cpp/links/libs")  
  


[C++ language](../language.html "cpp/language")

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
  
  
  
Specifiers  
| [`const`/`volatile`](cv.html "cpp/language/cv")  
---  
[`decltype`](decltype.html "cpp/language/decltype") (C++11)  
[`auto`](auto.html "cpp/language/auto") (C++11)  
  
| [`constexpr`](constexpr.html "cpp/language/constexpr") (C++11)  
---  
[`consteval`](consteval.html "cpp/language/consteval") (C++20)  
[`constinit`](constinit.html "cpp/language/constinit") (C++20)  
  
[Storage duration specifiers](storage_duration.html "cpp/language/storage duration")  
[Initialization](initialization.html "cpp/language/initialization")  
| [Default-initialization](default_initialization.html "cpp/language/default initialization")  
---  
[Value-initialization](value_initialization.html "cpp/language/value initialization")  
[Zero-initialization](zero_initialization.html "cpp/language/zero initialization")  
[Copy-initialization](copy_initialization.html "cpp/language/copy initialization")  
[Direct-initialization](direct_initialization.html "cpp/language/direct initialization")  
  
| [Aggregate initialization](aggregate_initialization.html "cpp/language/aggregate initialization")  
---  
[List-initialization](list_initialization.html "cpp/language/list initialization") (C++11)` `  
[Constant initialization](constant_initialization.html "cpp/language/constant initialization")  
[Reference initialization](reference_initialization.html "cpp/language/reference initialization")  
  
  
  
[Expressions](expressions.html "cpp/language/expressions")  
---  
| [Value categories](value_category.html "cpp/language/value category")  
---  
[Order of evaluation](eval_order.html "cpp/language/eval order")  
  
| [Operators](operators.html "cpp/language/operators")  
---  
[Operator precedence](operator_precedence.html "cpp/language/operator precedence")  
  
[Alternative representations](operator_alternative.html "cpp/language/operator alternative")  
[Literals](expressions.html#Literals "cpp/language/expressions")  
[Boolean](bool_literal.html "cpp/language/bool literal") \- [Integer](integer_literal.html "cpp/language/integer literal") \- [Floating-point](floating_literal.html "cpp/language/floating literal")  
[Character](character_literal.html "cpp/language/character literal") \- [String](string_literal.html "cpp/language/string literal") \- [`nullptr`](nullptr.html "cpp/language/nullptr") (C++11)  
[User-defined](user_literal.html "cpp/language/user literal") (C++11)  
Utilities  
[Attributes](attributes.html "cpp/language/attributes") (C++11)  
Types  
[`typedef` declaration](typedef.html "cpp/language/typedef")  
[Type alias declaration](type_alias.html "cpp/language/type alias") (C++11)  
Casts  
| [Implicit conversions](implicit_cast.html "cpp/language/implicit conversion")  
---  
[`static_cast`](static_cast.html "cpp/language/static cast")  
[`const_cast`](const_cast.html "cpp/language/const cast")  
  
| [Explicit conversions](explicit_cast.html "cpp/language/explicit cast")  
---  
[`dynamic_cast`](dynamic_cast.html "cpp/language/dynamic cast")  
[`reinterpret_cast`](reinterpret_cast.html "cpp/language/reinterpret cast")  
  
Memory allocation  
| [`new` expression](new.html "cpp/language/new")  
---  
  
| [`delete` expression](delete.html "cpp/language/delete")  
---  
  
[Classes](classes.html "cpp/language/classes")  
| [Class declaration](class.html "cpp/language/class")  
---  
[Constructors](initializer_list.html "cpp/language/constructor")  
[`this` pointer](this.html "cpp/language/this")  
  
| [Access specifiers](access.html "cpp/language/access")  
---  
[`friend` specifier](friend.html "cpp/language/friend")  
  
  
  
Class-specific function properties  
| [Virtual function](virtual.html "cpp/language/virtual")  
---  
[`override` specifier](override.html "cpp/language/override") (C++11)` `  
[`final` specifier](final.html "cpp/language/final") (C++11)  
  
| [`explicit`](explicit.html "cpp/language/explicit") (C++11)  
---  
[`static`](static.html "cpp/language/static")  
  
  
  
Special member functions  
| [Default constructor](default_constructor.html "cpp/language/default constructor")  
---  
[Copy constructor](copy_constructor.html "cpp/language/copy constructor")  
[Move constructor](move_constructor.html "cpp/language/move constructor") (C++11)  
  
| [Copy assignment](as_operator.html "cpp/language/as operator")  
---  
[Move assignment](move_operator.html "cpp/language/move operator") (C++11)  
[Destructor](destructor.html "cpp/language/destructor")  
  
[Templates](templates.html "cpp/language/templates")  
| [Class template](class_template.html "cpp/language/class template")  
---  
[Function template](function_template.html "cpp/language/function template")  
  
| [Template specialization](template_specialization.html "cpp/language/template specialization")  
---  
[Parameter packs](parameter_pack.html "cpp/language/pack") (C++11)  
  
Miscellaneous  
| [Inline assembly](asm.html "cpp/language/asm")  
---  
  
| [History of C++](history.html "cpp/language/history")  
---  
  


[ Basic Concepts](basics.html "cpp/language/basic concepts")

[Comments](../comments.html "cpp/comment")  
---  
[ASCII](ascii.html "cpp/language/ascii")  
[Punctuation](punctuators.html "cpp/language/punctuators")  
[Names and identifiers](name.html "cpp/language/identifiers")  
[Types](type-id.html "cpp/language/type")  
[Fundamental types](types.html "cpp/language/types")  
[Objects](objects.html "cpp/language/object")  
[Scope](scope.html "cpp/language/scope")  
[Object lifetime](lifetime.html "cpp/language/lifetime")  
[Storage duration and linkage](storage_duration.html "cpp/language/storage duration")  
[Definitions and ODR](definition.html "cpp/language/definition")  
[Name lookup](lookup.html "cpp/language/lookup")  
[ Qualified name lookup](qualified_lookup.html "cpp/language/qualified lookup")  
[ Unqualified name lookup](unqualified_lookup.html "cpp/language/unqualified lookup")  
[The as-if rule](as_if.html "cpp/language/as if")  
[Undefined behavior](ub.html "cpp/language/ub")  
[Memory model](memory_model.html "cpp/language/memory model")  
[Multi-threaded executions and data races](multithread.html "cpp/language/multithread") (C++11)  
[Character sets and encodings](charset.html "cpp/language/charset")  
[Phases of translation](translation_phases.html "cpp/language/translation phases")  
[The `main` function](main_function.html "cpp/language/main function")  
[Modules](modules.html "cpp/language/modules") (C++20)  
**Contracts** (C++26)  
  


Contract assertions allow the programmer to specify properties of the state of the program that are expected to hold at certain points during execution. 

## Contents

  * [1 Explanation](contracts.html#Explanation)
  * [2 Evaluating contract assertions](contracts.html#Evaluating_contract_assertions)
  * [3 Handling contract violations](contracts.html#Handling_contract_violations)
    * [3.1 Contract-terminated programs](contracts.html#Contract-terminated_programs)
    * [3.2 Contract-violation handler](contracts.html#Contract-violation_handler)
    * [3.3 Handling exceptions from assertions](contracts.html#Handling_exceptions_from_assertions)
  * [4 Evaluate in sequence](contracts.html#Evaluate_in_sequence)
  * [5 Notes](contracts.html#Notes)
  * [6 Keywords](contracts.html#Keywords)
  * [7 Support status](contracts.html#Support_status)
  * [8 See also](contracts.html#See_also)

  
---  
  
### Explanation

_Contract assertions_ are introduced by [function contract specifiers](function.html#Function_contract_specifiers "cpp/language/function") and [`contract_assert`](contract_assert.html "cpp/language/contract assert") statements. Each contract assertion has a _predicate ﻿_ , which is an expression of type bool. 

### Evaluating contract assertions

An evaluation of a contract assertion uses one of the following evaluation semantics: 

Evaluation semantic  |  Is a checking semantic  |  Is a terminating semantic   
---|---|---  
ignore  |  |   
observe  | Yes  |   
enforce  | Yes  | Yes   
quick-enforce  | Yes  | Yes   
  
It is implementation-defined which evaluation semantic is used for any given evaluation of a contract assertion. The evaluation semantics can differ for different evaluations of the same contract assertion, including evaluations during constant evaluation. 

If the “ignore” semantic is used, the evaluation of a contract assertion has no effect. 

If a checking semantic is used, the evaluation `E` of a contract assertion determines the value of the predicate. It is unspecified whether the predicate is evaluated. If any of the following conditions is satisfied, a _contract violation_ occurs: 

  * The value that would result from evaluating the predicate is false. 
  * The evaluation of the predicate exits via an exception. 
  * The evaluation of the predicate is performed in a context that is [manifestly constant-evaluated](constant_expression.html#Manifestly_constant-evaluated_expressions "cpp/language/constant expression") and the predicate is not a [core constant expression](constant_expression.html#Core_constant_expression "cpp/language/constant expression"). 



There is an [observable checkpoint](as_if.html "cpp/language/as if") `CP` that happens before `E` such that any other operation `OP` that happens before `A` also happens before `CP`. 
    
    
    int num = 0;
    void f() pre((num++, false));
     
    f(); // Increment of “num” might not occur, even if a checking semantic is used

### Handling contract violations

If a contract violation occurs in a context that is manifestly constant-evaluated: 

  * If the evaluation semantic is “observe”, a diagnostic is produced. 
  * If the evaluation semantic is a terminating semantic, the program is ill-formed. 



If a contract violation occurs in a context that is not manifestly constant-evaluated: 

  * If the evaluation semantic is “quick-enforce”, the program is contract-terminated. 
  * If the evaluation semantic is “enforce” or “observe”, the contract-violation handler is invoked with an lvalue referring to an object obj of type const std::contracts::contract_violation containing information about the contract violation. 
    * Storage for obj is allocated in an unspecified manner, but no global [allocation function](../memory/new/operator_new.html "cpp/memory/new/operator new") will be invoked. 
    * The lifetime of obj persists for the duration of the invocation of the contract-violation handler. 



#### Contract-terminated programs

When the program is _contract-terminated ﻿_ , it is implementation-defined (depending on context) whether 

  * [std::terminate](../error/terminate.html "cpp/error/terminate") is called, 
  * [std::abort](../utility/program/abort.html "cpp/utility/program/abort") is called, or 
  * execution is terminated (no further [execution steps](multithread.html#Progress_guarantee "cpp/language/multithread") occur). 



#### Contract-violation handler

The _contract-violation handler_ of a program is a function named ::handle_contract_violation: 

void handle_contract_violation( std::contracts::contract_violation ); |  |  (since C++26)   
(optionally noexcept)  
---|---|---  
| |   
  
A definition of the contract-violation handler, called the _default contract-violation handler ﻿_ , is provided by the implemenation (instead of a standard library header). 

It is implementation-defined whether the contract-violation handler is [replaceable](replacement_function.html "cpp/language/replacement function"). If the contract-violation handler is not replaceable, a declaration of a replacement function for the contract-violation handler is ill-formed, no diagnostic required. 

When the contract-violation handler returns normally: 

  * If the evaluation semantic is “observe”, control flow continues normally after the point of evaluation of the contract assertion. 
  * If the evaluation semantic is “enforce”, the program is contract-terminated. 



There is an [observable checkpoint](as_if.html "cpp/language/as if") `CP` that happens after the contract-violation handler returns normally such that any other operation `OP` that happens after the contract-violation handler returns also happens after `CP`. 

#### Handling exceptions from assertions

If the contract violation occurred because the evaluation of the predicate exited via an exception and the evaluation semantic is “observe” or “enforce”, the contract-violation handler is invoked from within an active implicit [handler](catch.html "cpp/language/catch") for that exception. 

When the contract-violation handler returns normally: 

  * If the evaluation semantic is “observe”, the implicit handler is no longer considered active. 
  * If the evaluation semantic is “enforce”, the implicit handler remains active when contract termination occurs. 



The current exception can be inspected or rethrown within the contract-violation handler using [std::current_exception()](../error/current_exception.html "cpp/error/current exception"). 

### Evaluate in sequence

To _evaluate in sequence_ a list `R` of contract assertions: 

1) Construct a list of contract assertions `S` such that all following conditions are satisfied: 

  * All elements of `R` are in `S`. 
  * Each element of `R` may be repeated an implementation-defined number of times within `S`. 
  * If a contract assertion `A` precedes another contract assertion `B` in `R`, then the first occurrence of `A` precedes the first occurrence of `B` in `S`.



2) Evaluate each element of `S` such that, if a contract assertion `A` precedes a contract assertion `B` in `S`, then the evaluation of `A` is [sequenced before](eval_order.html "cpp/language/eval order") the evaluation of `B`.
    
    
    void f(int i)
    {
        contract_assert(i > 0);  // #1
        contract_assert(i < 10); // #2
        // valid sequence of evaluations:   #1 #2       (no repeat)
        // valid sequence of evaluations:   #1 #1 #2 #2 (repeat in sequence)
        // valid sequence of evaluations:   #1 #2 #1 #2 (repeat alternatively)
        // valid sequence of evaluations:   #1 #2 #2 #1 (second occurences can switch order)
        // invalid sequence of evaluations: #2 #1       (first occurences cannot switch)
    }

### Notes

The range and flexibility of available choices of evaluation semantics depends on the implementation, and need not allow all four evaluation semantics as possibilities. 

Different evaluation semantics chosen for the same contract assertion in different translation units can result in violations of the [one-definition rule](definition.html#ODR "cpp/language/definition") when a contract assertion has side effects that alter the value produced by a constant expression: 
    
    
    constexpr int f(int i)
    {
        contract_assert((++const_cast<int&>(i), true));
        return i;
    }
     
    inline void g()
    {
        int a[f(1)]; // size dependent on the evaluation semantic of contract_assert above
    }

If the value that would result from evaluating the predicate is true, no contract violation occurs and control flow continues normally after the point of evaluation of the contract assertion. 

If the evaluation of the predicate exits by means of [non-local jumps](../utility/program.html#Non-local_jumps "cpp/utility/program") or terminating the program, no contract violation occurs either. 

It is recommended by the C++ standard that the default contract-violation handler should produce diagnostic output that suitably formats the most relevant contents of the argument (rate-limited for potentially repeated violations of observed contract assertions), and then return normally. 

Feature-test macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_contracts`](../experimental/feature_test.html#cpp_contracts "cpp/feature test") | [`202502L`](../compiler_support/26.html#cpp_contracts_202502L "cpp/compiler support/26") | (C++26) | Contracts   
  
### Keywords

[`contract_assert`](../keyword/contract_assert.html "cpp/keyword/contract assert"), [`pre`](../identifier_with_special_meaning/pre.html "cpp/identifier with special meaning/pre"), [`post`](../identifier_with_special_meaning/post.html "cpp/identifier with special meaning/post")

### Support status

C++26 feature  
  
| Paper(s)  
  
| GCC | Clang | MSVC | Apple Clang | EDG eccp | Intel C++ | Nvidia HPC C++ (ex PGI)* | Nvidia nvcc | Cray   
  
---|---|---|---|---|---|---|---|---|---|---  
**Contracts** ([FTM](../experimental/feature_test.html#cpp_contracts "cpp/feature test"))* | [P2900R14](https://wg21.link/P2900R14) |  |  |  |  |  |  |  |  |   
  
### See also

[`contract_assert` statement](contract_assert.html "cpp/language/contract assert") (C++26) |  verifies an internal condition during execution  
---|---  
[function contract specifiers](functions.html#Function_contract_specifiers "cpp/language/functions") (C++26) |  specifies preconditions (pre) and postconditions (post)
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
