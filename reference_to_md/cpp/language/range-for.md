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
**range-`for`** (C++11)  
  
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
**range for** (C++11)  
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
  


Executes a for loop over a range. 

Used as a more readable equivalent to the traditional [for loop](for.html "cpp/language/for") operating over a range of values, such as all elements in a container. 

## Contents

  * [1 Syntax](range-for.html#Syntax)
  * [2 Explanation](range-for.html#Explanation)
  * [3 Temporary range initializer](range-for.html#Temporary_range_initializer)
  * [4 Notes](range-for.html#Notes)
  * [5 Keywords](range-for.html#Keywords)
  * [6 Example](range-for.html#Example)
  * [7 Defect reports](range-for.html#Defect_reports)
  * [8 See also](range-for.html#See_also)

  
---  
  
### Syntax  
  
---  
attr ﻿(optional) `**for (**` init-statement ﻿(optional) item-declaration `**:**` range-initializer `**)**` statement |  |   
attr |  \-  |  any number of [attributes](attributes.html "cpp/language/attributes")  
---|---|---  
init-statement |  \-  |  (since C++20) one of 

  * an [expression statement](statements.html "cpp/language/statements") (which may be a null statement ;) 
  * a [simple declaration](declarations.html "cpp/language/declarations") (typically a declaration of a variable with initializer), it may declare arbitrarily many variables or be a [structured binding declaration](structured_binding.html "cpp/language/structured binding")

| 

  * an [alias declaration](type_alias.html "cpp/language/type alias")

| (since C++23)  
---|---  
  
Note that any init-statement must end with a semicolon. This is why it is often described informally as an expression or a declaration followed by a semicolon.   
  
item-declaration |  \-  |  a declaration for each range item   
range-initializer |  \-  |  an [expression](expressions.html "cpp/language/expressions") or [brace-enclosed initializer list](initialization.html "cpp/language/initialization")  
statement |  \-  |  any [statement](statements.html "cpp/language/statements") (typically a compound statement)   
  
### Explanation

The above syntax produces code equivalent to the following  except for the lifetime expansion of temporaries of range-initializer (see [below](range-for.html#Temporary_range_initializer))(since C++23) (the variables and expressions wrapped in /* */ are for exposition only): 

`**{**`  


    `**auto &&**` /* range */ `**=**` range-initializer ﻿`**;**`  

    `**for (auto**` /* begin */ `**=**` /* begin-expr */`**,**` /* end */ `**=**` /* end-expr */`**;**`  


    

    /* begin */ `**!=**` /* end */`**; ++**` /* begin */`**)**`  

    `**{**`

    item-declaration `**= ***` /* begin */`**;**`  

    statement  

    `**}**`  

`**}**`  
| (until C++17)  
---|---  
`**{**`  


    `**auto &&**` /* range */ `**=**` range-initializer ﻿`**;**`  

    `**auto**` /* begin */ `**=**` /* begin-expr */`**;**`  

    `**auto**` /* end */ `**=**` /* end-expr */`**;**`  

    `**for ( ;**` /* begin */ `**!=**` /* end */`**; ++**` /* begin */`**)**`  

    `**{**`

    item-declaration `**= ***` /* begin */`**;**`  

    statement  

    `**}**`  

`**}**`  
| (since C++17)  
(until C++20)  
`**{**`  


    init-statement  

    `**auto &&**` /* range */ `**=**` range-initializer ﻿`**;**`  

    `**auto**` /* begin */ `**=**` /* begin-expr */`**;**`  

    `**auto**` /* end */ `**=**` /* end-expr */`**;**`  

    `**for ( ;**` /* begin */ `**!=**` /* end */`**; ++**` /* begin */`**)**`  

    `**{**`

    item-declaration `**= ***` /* begin */`**;**`  

    statement  

    `**}**`  

`**}**`  
| (since C++20)  
  
range-initializer is evaluated to initialize the sequence or range to iterate. Each element of the sequence, in turn, is dereferenced and is used to initialize the variable with the type and name given in item-declaration. 

item-declaration can be one of the following: 

  * a [simple declaration](declarations.html#Simple_declaration "cpp/language/declarations") with the following restrictions: 
  * It has only one [declarator](declarations.html#Declarators "cpp/language/declarations"). 
  * The declarator must have no [initializer](initialization.html "cpp/language/initialization"). 
  * The [declaration specifier sequence](declarations.html#Specifiers "cpp/language/declarations") can only contain type specifiers and constexpr, and it cannot define a [class](class.html "cpp/language/class") or [enumeration](enum.html "cpp/language/enum"). 



Exposition-only expressions /* begin-expr */ and /* end-expr */ are defined as follows: 

  * If the type of /* range */ is a reference to an array type `R`: 



    

  * If `R` is of bound N, /* begin-expr */ is /* range */ and /* end-expr */ is /* range */ + N. 
  * If `R` is an array of unknown bound or an array of incomplete type, the program is ill-formed. 



  * If the type of /* range */ is a reference to a class type `C`, and searches in the scope of `C` for the names “`begin`” and “`end`” each find at least one declaration, then /* begin-expr */ is /* range */.begin() and /* end-expr */ is /* range */.end(). 
  * Otherwise, /* begin-expr */ is begin(/* range */) and /* end-expr */ is end(/* range */), where “`begin`” and “`end`” are found via [argument-dependent lookup](adl.html "cpp/language/adl") (non-ADL lookup is not performed). 



If the loop needs to be terminated within statement, a [break statement](break.html "cpp/language/break") can be used as terminating statement. 

If the current iteration needs to be terminated within statement, a [continue statement](continue.html "cpp/language/continue") can be used as shortcut. 

If a name introduced in init-statement is redeclared in the outermost block of statement, the program is ill-formed: 
    
    
    for (int i : {1, 2, 3})
        int i = 1; // error: redeclaration

### Temporary range initializer

If range-initializer returns a temporary, its lifetime is extended until the end of the loop, as indicated by binding to the forwarding reference /* range */. 

Lifetimes of all temporaries within range-initializer are not extended unless they would otherwise be destroyed at the end of range-initializer(since C++23). 
    
    
    // if foo() returns by value
    for (auto& x : foo().items()) { /* ... */ } // until C++23 undefined behavior

This problem may be worked around using init-statement: 
    
    
    for (T thing = foo(); auto& x : thing.items()) { /* ... */ } // OK

| (since C++20)  
---|---  
  
  


Note that even in C++23 non-reference parameters of intermediate function calls do not get a lifetime extension (because in some ABIs they are destroyed in the callee, not in the caller), but that is only a problem for functions that are buggy anyway: 
    
    
    using T = [std::list](../container/list.html)<int>;
    const T& f1(const T& t) { return t; }
    const T& f2(T t)        { return t; } // always returns a dangling reference
    T g();
     
    void foo()
    {
        for (auto e : f1(g())) {} // OK: lifetime of return value of g() extended
        for (auto e : f2(g())) {} // UB: lifetime of f2's value parameter ends early
    }

| (since C++23)  
---|---  
  
### Notes

If the range-initializer is a [braced-enclosed initializer list](initialization.html "cpp/language/initialization"), /* range */ is deduced to be a reference to a [std::initializer_list](../utility/initializer_list.html "cpp/utility/initializer list"). 

It is safe, and in fact, preferable in generic code, to use deduction to forwarding reference, for (auto&& var : sequence). 

The member interpretation is used if the range type has a member named “`begin`” and a member named “`end`”. This is done regardless of whether the member is a type, data member, function, or enumerator, and regardless of its accessibility. Thus a class like class meow { enum { begin = 1, end = 2 }; /* rest of class */ }; cannot be used with the range-based for loop even if the namespace-scope “`begin`”/“`end`” functions are present. 

While the variable declared in the item-declaration is usually used in the statement, doing so is not required. 

As of C++17, the types of the /* begin-expr */ and the /* end-expr */ do not have to be the same, and in fact the type of the /* end-expr */ does not have to be an iterator: it just needs to be able to be compared for inequality with one. This makes it possible to delimit a range by a predicate (e.g. "the iterator points at a null character").  | (since C++17)  
---|---  
  
When used with a (non-const) object that has copy-on-write semantics, the range-based for loop may trigger a deep copy by (implicitly) calling the non-const `begin()` member function. 

If that is undesirable (for instance because the loop is not actually modifying the object), it can be avoided by using [std::as_const](../utility/as_const.html "cpp/utility/as const"): 
    
    
    struct cow_string { /* ... */ }; // a copy-on-write string
    cow_string str = /* ... */;
     
    // for (auto x : str) { /* ... */ } // may cause deep copy
     
    for (auto x : [std::as_const](../utility/as_const.html)(str)) { /* ... */ }

| (since C++17)  
---|---  
Feature-test macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_range_based_for`](../experimental/feature_test.html#cpp_range_based_for "cpp/feature test") | [`200907L`](../compiler_support/11.html#cpp_range_based_for_200907L "cpp/compiler support/11") | (C++11) | [Range-based for loop](range-for.html#top)  
[`201603L`](../compiler_support/17.html#cpp_range_based_for_201603L "cpp/compiler support/17") | (C++17) | Range-based for loop with [different `begin`/`end`](range-for.html#Explanation) types   
[`202211L`](../compiler_support/23.html#cpp_range_based_for_202211L "cpp/compiler support/23") | (C++23) | Lifetime extension for all temporary objects in range-initializer  
  
### Keywords

[`for`](../keyword/for.html "cpp/keyword/for")

### Example

Run this code
    
    
    #include <iostream>
    #include <vector>
     
    int main()
    {
        [std::vector](../container/vector.html)<int> v = {0, 1, 2, 3, 4, 5};
     
        for (const int& i : v) // access by const reference
            [std::cout](../io/cout.html) << i << ' ';
        [std::cout](../io/cout.html) << '\n';
     
        for (auto i : v) // access by value, the type of i is int
            [std::cout](../io/cout.html) << i << ' ';
        [std::cout](../io/cout.html) << '\n';
     
        for (auto&& i : v) // access by forwarding reference, the type of i is int&
            [std::cout](../io/cout.html) << i << ' ';
        [std::cout](../io/cout.html) << '\n';
     
        const auto& cv = v;
     
        for (auto&& i : cv) // access by f-d reference, the type of i is const int&
            [std::cout](../io/cout.html) << i << ' ';
        [std::cout](../io/cout.html) << '\n';
     
        for (int n : {0, 1, 2, 3, 4, 5}) // the initializer may be a
                                         // braced-enclosed initializer list
            [std::cout](../io/cout.html) << n << ' ';
        [std::cout](../io/cout.html) << '\n';
     
        int a[] = {0, 1, 2, 3, 4, 5};
        for (int n : a) // the initializer may be an array
            [std::cout](../io/cout.html) << n << ' ';
        [std::cout](../io/cout.html) << '\n';
     
        for ([[maybe_unused]] int n : a)  
            [std::cout](../io/cout.html) << 1 << ' '; // the loop variable need not be used
        [std::cout](../io/cout.html) << '\n';
     
        for (auto n = v.size(); auto i : v) // the init-statement (C++20)
            [std::cout](../io/cout.html) << --n + i << ' ';
        [std::cout](../io/cout.html) << '\n';
     
        for (typedef decltype(v)::value_type elem_t; elem_t i : v)
        // typedef declaration as init-statement (C++20)
            [std::cout](../io/cout.html) << i << ' ';
        [std::cout](../io/cout.html) << '\n';
     
        for (using elem_t = decltype(v)::value_type; elem_t i : v)
        // alias declaration as init-statement (C++23)
            [std::cout](../io/cout.html) << i << ' ';
        [std::cout](../io/cout.html) << '\n';
    }

Output: 
    
    
    0 1 2 3 4 5 
    0 1 2 3 4 5 
    0 1 2 3 4 5 
    0 1 2 3 4 5 
    0 1 2 3 4 5 
    0 1 2 3 4 5 
    1 1 1 1 1 1 
    5 5 5 5 5 5 
    0 1 2 3 4 5 
    0 1 2 3 4 5

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 1442](https://cplusplus.github.io/CWG/issues/1442.html) | C++11  | it was unspecified whether the lookup of non-member  
“`begin`” and “`end`” includes usual unqualified lookup  | no usual unqualified lookup   
[CWG 2220](https://cplusplus.github.io/CWG/issues/2220.html) | C++11  | the names introduced in init-statement could be redeclared  | the program is ill-formed in this case   
[CWG 2825](https://cplusplus.github.io/CWG/issues/2825.html) | C++11  | if range-initializer is a brace-enclosed initializer list,  
the non-member “`begin`” and “`end`” will be looked up  | will lookup member “`begin`”  
and “`end`” in this case   
[P0962R1](https://wg21.link/P0962R1) | C++11  | member interpretation was used if either  
member “`begin`” and “`end`” is present  | only used if both are present   
  
### See also

[ for_each](../algorithm/for_each.html "cpp/algorithm/for each") |  applies a unary [function object](../named_req/FunctionObject.html "cpp/named req/FunctionObject") to elements from a [range](../iterator.html#Ranges "cpp/iterator")   
(function template)   
---|---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
