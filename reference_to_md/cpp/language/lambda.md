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
**Lambda function expression**  
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
  


[ Expressions](expressions.html "cpp/language/expressions")

General  
---  
| [Value categories](value_category.html "cpp/language/value category")  
---  
[Order of evaluation](eval_order.html "cpp/language/eval order")  
[Constant expressions](constant_expression.html "cpp/language/constant expression")  
[Primary expressions](expressions.html#Primary_expressions "cpp/language/expressions")  
  
| **Lambda expressions** (C++11)  
---  
[Requires expressions](requires.html "cpp/language/requires") (C++20)  
[Pack indexing expression](pack_indexing.html#Pack_indexing_expression "cpp/language/pack indexing") (C++26)  
[Potentially-evaluated expressions](expressions.html#Potentially-evaluated_expressions "cpp/language/expressions")  
  
Literals  
| [Integer literals](integer_literal.html "cpp/language/integer literal")  
---  
[Floating-point literals](floating_literal.html "cpp/language/floating literal")  
[Boolean literals](bool_literal.html "cpp/language/bool literal")  
[Character literals](character_literal.html "cpp/language/character literal")  
  
| [Escape sequences](escape.html "cpp/language/escape")  
---  
[String literals](string_literal.html "cpp/language/string literal")  
[Null pointer literal](nullptr.html "cpp/language/nullptr") (C++11)  
[User-defined literal](user_literal.html "cpp/language/user literal") (C++11)  
  
Operators  
| [Assignment operators](operator_assignment.html "cpp/language/operator assignment")  
---  
[Increment and decrement](operator_incdec.html "cpp/language/operator incdec")  
[Arithmetic operators](operator_arithmetic.html "cpp/language/operator arithmetic")  
[Logical operators](operator_logical.html "cpp/language/operator logical")  
[Comparison operators](operator_comparison.html "cpp/language/operator comparison")  
[Member access operators](operator_member_access.html "cpp/language/operator member access")  
[Other operators](operator_other.html "cpp/language/operator other")  
[`new`-expression](new.html "cpp/language/new")  
[`delete`-expression](delete.html "cpp/language/delete")  
[`throw`-expression](throw.html "cpp/language/throw")  
  
| [`alignof`](alignof.html "cpp/language/alignof")  
---  
[`sizeof`](sizeof.html "cpp/language/sizeof")  
[`sizeof...`](sizeof....html "cpp/language/sizeof...") (C++11)  
[`typeid`](typeid.html "cpp/language/typeid")  
[`noexcept`](noexcept.html "cpp/language/noexcept") (C++11)  
[Fold expressions](fold.html "cpp/language/fold") (C++17)  
[Alternative representations of operators](operator_alternative.html "cpp/language/operator alternative")  
[Precedence and associativity](operator_precedence.html "cpp/language/operator precedence")  
[Operator overloading](operators.html "cpp/language/operators")  
[Default comparisons](default_comparisons.html "cpp/language/default comparisons") (C++20)  
  
Conversions  
| [Implicit conversions](implicit_cast.html "cpp/language/implicit conversion")  
---  
[Explicit conversions](explicit_cast.html "cpp/language/explicit cast")  
[Usual arithmetic conversions](usual_arithmetic_conversions.html "cpp/language/usual arithmetic conversions")  
[User-defined conversion](cast_operator.html "cpp/language/cast operator")  
  
| [`const_cast`](const_cast.html "cpp/language/const cast")  
---  
[`static_cast`](static_cast.html "cpp/language/static cast")  
[`dynamic_cast`](dynamic_cast.html "cpp/language/dynamic cast")  
[`reinterpret_cast`](reinterpret_cast.html "cpp/language/reinterpret cast")  
  


[ Functions](functions.html "cpp/language/functions")

Declarations  
---  
[Function declaration](function.html "cpp/language/function")  
[Function parameter list](function.html#Parameter_list "cpp/language/function")  
[Function definition](function.html#Function_definition "cpp/language/function")  
[Function contract specifiers](function.html#Function_contract_specifiers "cpp/language/function") (C++26)  
[Default arguments](default_arguments.html "cpp/language/default arguments")  
[Variadic arguments](variadic_arguments.html "cpp/language/variadic arguments")  
[`inline` specifier](inline.html "cpp/language/inline")  
**Lambda expressions** (C++11)  
[Coroutines](coroutines.html "cpp/language/coroutines") (C++20)  
[Replacement functions](replacement_function.html "cpp/language/replacement function")  
Function calls  
[Argument-Dependent Lookup (ADL)](adl.html "cpp/language/adl")  
[Function-call operator](operator_other.html#Built-in_function_call_operator "cpp/language/operator other")  
[Function objects](../named_req/FunctionObject.html "cpp/named req/FunctionObject")  
Overloading  
[Overload resolution](overload_resolution.html "cpp/language/overload resolution")  
[Operator overloading](operators.html "cpp/language/operators")  
[Address of an overload set](overloaded_address.html "cpp/language/overloaded address")  
  


Constructs a [closure](https://en.wikipedia.org/wiki/Closure_\(computer_science\) "enwiki:Closure \(computer science\)") (an unnamed function object capable of capturing variables in scope). 

## Contents

  * [1 Syntax](lambda.html#Syntax)
    * [1.1 Lambda expressions without an explicit template parameter list (possibly non-generic)](lambda.html#Lambda_expressions_without_an_explicit_template_parameter_list_.28possibly_non-generic.29)
    * [1.2 Lambda expressions with an explicit template parameter list (always generic) (since C++20)](lambda.html#Lambda_expressions_with_an_explicit_template_parameter_list_.28always_generic.29_.28since_C.2B.2B20.29)
  * [2 Explanation](lambda.html#Explanation)
  * [3 Closure type](lambda.html#Closure_type)
  * [4 ClosureType::operator()(params)](lambda.html#ClosureType::operator.28.29.28params.29)
    * [4.1 Dangling references](lambda.html#Dangling_references)
  * [5 ClosureType::operator ret(*)(params)()](lambda.html#ClosureType::operator_ret.28.2A.29.28params.29.28.29)
  * [6 ClosureType::ClosureType()](lambda.html#ClosureType::ClosureType.28.29)
  * [7 ClosureType::operator=(const ClosureType&)](lambda.html#ClosureType::operator.3D.28const_ClosureType.26.29)
  * [8 ClosureType::~ClosureType()](lambda.html#ClosureType::.7EClosureType.28.29)
  * [9 ClosureType::Captures](lambda.html#ClosureType::Captures)
    * [9.1 Lambda capture](lambda.html#Lambda_capture)
    * [9.2 Notes](lambda.html#Notes)
    * [9.3 Example](lambda.html#Example)
    * [9.4 Defect reports](lambda.html#Defect_reports)
    * [9.5 See also](lambda.html#See_also)
    * [9.6 External links](lambda.html#External_links)

  
---  
  
### Syntax

##### Lambda expressions without an explicit template parameter list (possibly non-generic)  
  
---  
`**[**` captures ﻿`**]**` front-attr ﻿(optional) `**(**` params ﻿`**)**` specs ﻿(optional) except ﻿(optional)  
back-attr ﻿(optional) trailing ﻿(optional) requires ﻿(optional) contract-specs ﻿(optional) `**{**` body `**}**` |  (1)  |   
`**[**` captures ﻿`**] {**` body `**}**` |  (2)  |  (until C++23)  
`**[**` captures ﻿`**]**` front-attr ﻿(optional) trailing ﻿(optional) contract-specs ﻿(optional) `**{**` body `**}**` |  (2)  |  (since C++23)  
`**[**` captures ﻿`**]**` front-attr ﻿(optional) except  
back-attr ﻿(optional) trailing ﻿(optional) contract-specs ﻿(optional) `**{**` body `**}**` |  (3)  |  (since C++23)  
`**[**` captures ﻿`**]**` front-attr ﻿(optional) specs except ﻿(optional)  
back-attr ﻿(optional) trailing ﻿(optional) contract-specs ﻿(optional) `**{**` body `**}**` |  (4)  |  (since C++23)  
  
##### Lambda expressions with an explicit template parameter list (always generic) (since C++20)  
  
---  
`**[**` captures ﻿`**] <**`tparams ﻿`**>**` t-requires ﻿(optional)  
front-attr ﻿(optional) `**(**` params ﻿`**)**` specs ﻿(optional) except ﻿(optional)  
back-attr ﻿(optional) trailing ﻿(optional) requires ﻿(optional) contract-specs ﻿(optional) `**{**` body `**}**` |  (1)  |   
`**[**` captures ﻿`**] <**`tparams ﻿`**>**` t-requires ﻿(optional) `**{**` body `**}**` |  (2)  |  (until C++23)  
`**[**` captures ﻿`**] <**`tparams ﻿`**>**` t-requires ﻿(optional)  
front-attr ﻿(optional) trailing ﻿(optional) contract-specs ﻿(optional) `**{**` body `**}**` |  (2)  |  (since C++23)  
`**[**` captures ﻿`**] <**`tparams ﻿`**>**` t-requires ﻿(optional) front-attr ﻿(optional) except  
back-attr ﻿(optional) trailing ﻿(optional) contract-specs ﻿(optional) `**{**` body `**}**` |  (3)  |  (since C++23)  
`**[**` captures ﻿`**] <**`tparams ﻿`**>**` t-requires ﻿(optional) front-attr ﻿(optional) specs except ﻿(optional)  
back-attr ﻿(optional) trailing ﻿(optional) contract-specs ﻿(optional) `**{**` body `**}**` |  (4)  |  (since C++23)  
  
1) The lambda expression with a parameter list.

2-4) The lambda expression without a parameter list.

2) The simplest syntax. back-attr cannot be applied.

3,4) back-attr can only be applied if any of specs and except is present.

### Explanation

captures |  \-  |  Specifies the entities to be [captured](lambda.html#Lambda_capture).   
---|---|---  
tparams |  \-  |  A non-empty comma-separated list of [template parameters](template_parameters.html "cpp/language/template parameters"), used to provide names to the template parameters of a generic lambda (see `ClosureType::operator()` below).   
t-requires |  \-  |  Adds [constraints](constraints.html "cpp/language/constraints") to tparams.  |  If t-requires ends with an attribute specifier sequence, the attributes in the sequence are treated as attributes in front-attr.  | (since C++23)  
---|---  
front-attr |  \-  |  (since C++23) An [attribute specifier sequence](attributes.html "cpp/language/attributes") applies to operator() of the closure type (and thus the `[[[noreturn](attributes/noreturn.html "cpp/language/attributes/noreturn")]]` attribute can be used).   
params |  \-  |  The [parameter list](function.html#Parameter_list "cpp/language/function") of operator() of the closure type.  |  It can have an [explicit object parameter](function.html#Parameter_list "cpp/language/function").  | (since C++23)  
---|---  
specs |  \-  |  A list of the following specifiers, each specifier is allowed at most once in each sequence.  | Specifier  | Effect   
---|---  
mutable | Allows body to modify the objects captured by copy, and to call their non-const member functions.  | 

  * Cannot be used if an explicit object parameter is present. 

| (since C++23)  
---|---  
constexpr   
(since C++17) | Explicitly specifies that operator() is a [constexpr function](constexpr.html#constexpr_function "cpp/language/constexpr"). 

  * If operator() satisfy all constexpr function requirements, operator() will be constexpr even if constexpr is not present. 

  
consteval  
(since C++20) | Specifies that operator() is an [immediate function](consteval.html "cpp/language/consteval"). 

  * consteval and constexpr cannot be specified at the same time. 

  
static  
(since C++23) | Specifies that operator() is a [static member function](static.html#Static_member_functions "cpp/language/static"). 

  * static and mutable cannot be specified at the same time. 
  * Cannot be used if captures is not empty, or an explicit object parameter is present. 

  
except |  \-  |  Provides the [dynamic exception specification](except_spec.html "cpp/language/except spec") or(until C++20) the [noexcept specifier](noexcept_spec.html "cpp/language/noexcept spec") for operator() of the closure type.   
back-attr |  \-  |  An [attribute specifier sequence](attributes.html "cpp/language/attributes") applies to the type of operator() of the closure type (and thus the `[[[noreturn](attributes/noreturn.html "cpp/language/attributes/noreturn")]]` attribute cannot be used).   
trailing |  \-  |  `**- >**` ret, where ret specifies the return type.   
requires |  \-  |  (since C++20) Adds [constraints](constraints.html "cpp/language/constraints") to operator() of the closure type.   
contract-specs |  \-  |  (since C++26) A list of [function contract specifiers](function.html#Function_contract_specifiers "cpp/language/function") for operator() of the closure type.   
body |  \-  |  The function body.   
  
  


If [`auto`](auto.html "cpp/language/auto") is used as a type of a parameter or an explicit template parameter list is provided(since C++20), the lambda is a _generic lambda_.  | (since C++14)  
---|---  
  
A variable __func__ is implicitly defined at the beginning of body, with semantics as described [here](function.html#func "cpp/language/function"). 

### Closure type

The lambda expression is a prvalue expression of unique unnamed non-[union](union.html "cpp/language/union") non-[aggregate](aggregate_initialization.html "cpp/language/aggregate initialization") class type, known as _closure type_ , which is declared (for the purposes of [ADL](adl.html "cpp/language/adl")) in the smallest block scope, class scope, or namespace scope that contains the lambda expression. 

The closure type is a [structural](template_parameters.html#Non-type_template_parameter "cpp/language/template parameters") type if and only if captures is empty.  | (since C++20)  
---|---  
  
The closure type has the following members, they cannot be [explicitly instantiated](function_template.html#Explicit_instantiation "cpp/language/function template"), [explicitly specialized](template_specialization.html "cpp/language/template specialization"), or(since C++14) named in a [friend declaration](friend.html "cpp/language/friend"): 

##  ClosureType::operator()(params)

ret operator()(params) { body } |  |  (static and const may be present, see below)  
---|---|---  
template<template-params>  
ret operator()(params) { body } |  |  (since C++14)   
(generic lambda, static and const may be present, see below)  
| |   
  
Executes the body of the lambda expression, when invoked. When accessing a variable, accesses its captured copy (for the entities captured by copy), or the original object (for the entities captured by reference). 

The parameter list of operator() is params if it is provided, otherwise the parameter list is empty. 

The return type of operator() is the type specified in trailing ﻿. 

If trailing is not provided, the return type of operator() is automatically [deduced](function.html#Return_type_deduction "cpp/language/function").[[1]](lambda.html#cite_note-1)

Unless the keyword mutable was used in the lambda specifiers, or an explicit object parameter is present(since C++23), the cv-qualifier of operator() is const and the objects that were captured by copy are non-modifiable from inside this operator(). Explicit const qualifier is not allowed. operator() is never virtual and cannot have the volatile qualifier. 

operator() is always constexpr if it satisfies the requirements of a [constexpr function](constexpr.html "cpp/language/constexpr"). It is also constexpr if the keyword constexpr was used in the lambda specifiers.  | (since C++17)  
---|---  
operator() is an [immediate function](consteval.html "cpp/language/consteval") if the keyword consteval was used in the lambda specifiers.  | (since C++20)  
operator() is a [static member function](static.html#Static_member_functions "cpp/language/static") if the keyword static was used in the lambda specifiers. operator() is an [explicit object member function](member_functions.html#Explicit_object_member_functions "cpp/language/member functions") if params contains an explicit object parameter.  | (since C++23)  
  
  


For each parameter in params whose type is specified as auto, an invented template parameter is added to template-params, in order of appearance. The invented template parameter may be a [parameter pack](parameter_pack.html "cpp/language/parameter pack") if the corresponding function member of params is a function parameter pack. 
    
    
    // generic lambda, operator() is a template with two parameters
    auto glambda = [](auto a, auto&& b) { return a < b; };
    bool b = glambda(3, 3.14); // OK
     
    // generic lambda, operator() is a template with one parameter
    auto vglambda = [](auto printer)
    {
        return [=](auto&&... ts) // generic lambda, ts is a parameter pack
        { 
            printer([std::forward](../utility/forward.html)<decltype(ts)>(ts)...);
            // nullary lambda (takes no parameters):
            return [=] { printer(ts...); };
        };
    };
     
    auto p = vglambda([](auto v1, auto v2, auto v3)
    {
        [std::cout](../io/cout.html) << v1 << v2 << v3;
    });
     
    auto q = p(1, 'a', 3.14); // outputs 1a3.14
    q();                      // outputs 1a3.14

| (since C++14)  
---|---  
  
  


If the lambda definition uses an explicit template parameter list, that template parameter list is used with operator(). For each parameter in params whose type is specified as auto, an additional invented template parameter is appended to the end of that template parameter list: 
    
    
    // generic lambda, operator() is a template with two parameters
    auto glambda = []<class T>(T a, auto&& b) { return a < b; };
     
    // generic lambda, operator() is a template with one parameter pack
    auto f = []<typename... Ts>(Ts&&... ts)
    {
        return foo([std::forward](../utility/forward.html)<Ts>(ts)...);
    };

| (since C++20)  
---|---  
  
The exception specification except on the lambda expression applies to operator(). 

For the purpose of [name lookup](lookup.html "cpp/language/lookup"), determining the type and value of the [this pointer](this.html "cpp/language/this") and for accessing non-static class members, the body of the closure type's operator() is considered in the context of the lambda expression. 
    
    
    struct X
    {
        int x, y;
        int operator()(int);
        void f()
        {
            // the context of the following lambda is the member function X::f
            [=]() -> int
            {
                return operator()(this->x + y); // X::operator()(this->x + (*this).y)
                                                // this has type X*
            };
        }
    };

###  Dangling references

If a non-reference entity is captured by reference, implicitly or explicitly, and operator() of the closure object is invoked after the entity's lifetime has ended, undefined behavior occurs. The C++ closures do not extend the lifetimes of objects captured by reference. 

Same applies to the lifetime of the current *this object captured via `**this**`. 

  1. [↑](lambda.html#cite_ref-1) Although function return type deduction is introduced in C++14, its rule is available for lambda return type deduction in C++11.



##  ClosureType::operator ret(*)(params)()

capture-less non-generic lambda |  |   
---|---|---  
using F = ret(*)(params);  
operator F() const noexcept; |  | (until C++17)  
using F = ret(*)(params);  
constexpr operator F() const noexcept; |  |  (since C++17)  
capture-less generic lambda |  |   
template<template-params> using fptr_t = /* see below */;  
template<template-params>  
operator fptr_t<template-params>() const noexcept; |  | (since C++14)   
(until C++17)  
template<template-params> using fptr_t = /* see below */;  
template<template-params>  
constexpr operator fptr_t<template-params>() const noexcept; |  |  (since C++17)  
| |   
  
This [user-defined conversion function](cast_operator.html "cpp/language/cast operator") is only defined if the lambda expression has no captures ﻿ and has no explicit object parameter(since C++23). It is a public, constexpr,(since C++17) non-virtual, non-explicit, const noexcept member function of the closure object. 

This function is an [immediate function](consteval.html "cpp/language/consteval") if the function call operator (or specialization, for generic lambdas) is an immediate function.  | (since C++20)  
---|---  
A generic capture-less lambda has a user-defined conversion function template with the same invented template parameter list as operator(). 
    
    
    void f1(int (*)(int)) {}
    void f2(char (*)(int)) {}
    void h(int (*)(int)) {}  // #1
    void h(char (*)(int)) {} // #2
     
    auto glambda = [](auto a) { return a; };
    f1(glambda); // OK
    f2(glambda); // error: not convertible
    h(glambda);  // OK: calls #1 since #2 is not convertible
     
    int& (*fpi)(int*) = [](auto* a) -> auto& { return *a; }; // OK

| (since C++14)  
---|---  
  
  


The value returned by the conversion function is a pointer to a function with C++ [language linkage](language_linkage.html "cpp/language/language linkage") that, when invoked, has the same effect as invoking the closure type's function call operator on a default-constructed instance of the closure type.  | (until C++14)  
---|---  
The value returned by the conversion function (template) is a pointer to a function with C++ [language linkage](language_linkage.html "cpp/language/language linkage") that, when invoked, has the same effect as: 

  * for non-generic lambdas, invoking the closure type's operator() on a default-constructed instance of the closure type. 
  * for generic lambdas, invoking the generic lambda's corresponding operator() specialization on a default-constructed instance of the closure type. 

| (since C++14)  
(until C++23)  
The value returned by the conversion function (template) is 

  * if operator() is static, a pointer to that operator() with C++ [language linkage](language_linkage.html "cpp/language/language linkage"), 
  * otherwise, a pointer to a function with C++ [language linkage](language_linkage.html "cpp/language/language linkage") that, when invoked, has the same effect as: 
    * for non-generic lambdas, invoking the closure type's operator() on a default-constructed instance of the closure type. 
    * for generic lambdas, invoking the generic lambda's corresponding operator() specialization on a default-constructed instance of the closure type. 

| (since C++23)  
  
  


This function is constexpr if the function call operator (or specialization, for generic lambdas) is constexpr. 
    
    
    auto Fwd = [](int(*fp)(int), auto a) { return fp(a); };
    auto C = [](auto a) { return a; };
    static_assert(Fwd(C, 3) == 3);  // OK
     
    auto NC = [](auto a) { static int s; return a; };
    static_assert(Fwd(NC, 3) == 3); // error: no specialization can be
                                    // constexpr because of static s

If the closure object's operator() has a non-throwing exception specification, then the pointer returned by this function has the type pointer to noexcept function.  | (since C++17)  
---|---  
  
##  ClosureType::ClosureType()

ClosureType() = default; |  |  (since C++20)   
(only if no captures are specified)  
---|---|---  
ClosureType(const ClosureType&) = default; |  |   
ClosureType(ClosureType&&) = default; |  |   
| |   
Closure types are not [DefaultConstructible](../named_req/DefaultConstructible.html "cpp/named req/DefaultConstructible"). Closure types have no default constructor.  | (until C++20)  
---|---  
If no captures are specified, the closure type has a defaulted default constructor. Otherwise, it has no default constructor (this includes the case when there is a capture-default ﻿, even if it does not actually capture anything).  | (since C++20)  
  
The copy constructor and the move constructor are declared as defaulted and may be implicitly-defined according to the usual rules for [copy constructors](copy_constructor.html "cpp/language/copy constructor") and [move constructors](move_constructor.html "cpp/language/move constructor"). 

##  ClosureType::operator=(const ClosureType&)

ClosureType& operator=(const ClosureType&) = delete; |  |  (until C++20)  
---|---|---  
ClosureType& operator=(const ClosureType&) = default;  
ClosureType& operator=(ClosureType&&) = default; |  |  (since C++20)   
(only if no captures are specified)  
ClosureType& operator=(const ClosureType&) = delete; |  |  (since C++20)   
(otherwise)  
| |   
The copy assignment operator is defined as deleted (and the move assignment operator is not declared). Closure types are not [CopyAssignable](../named_req/CopyAssignable.html "cpp/named req/CopyAssignable").  | (until C++20)  
---|---  
If no captures are specified, the closure type has a defaulted copy assignment operator and a defaulted move assignment operator. Otherwise, it has a deleted copy assignment operator (this includes the case when there is a capture-default ﻿, even if it does not actually capture anything).  | (since C++20)  
  
##  ClosureType::~ClosureType()

~ClosureType() = default; |  |   
---|---|---  
| |   
  
The destructor is implicitly-declared. 

##  ClosureType::Captures

T1 a;  
T2 b;  
... |  |   
---|---|---  
| |   
  
If the lambda expression captures anything by copy (either implicitly with capture clause `**[=]**` or explicitly with a capture that does not include the character &, e.g. `**[a, b, c]**`), the closure type includes unnamed non-static data members, declared in unspecified order, that hold copies of all entities that were so captured. 

Those data members that correspond to captures without initializers are [direct-initialized](direct_initialization.html "cpp/language/direct initialization") when the lambda expression is evaluated. Those that correspond to captures with initializers are initialized as the initializer requires (could be copy- or direct-initialization). If an array is captured, array elements are direct-initialized in increasing index order. The order in which the data members are initialized is the order in which they are declared (which is unspecified). 

The type of each data member is the type of the corresponding captured entity, except if the entity has reference type (in that case, references to functions are captured as lvalue references to the referenced functions, and references to objects are captured as copies of the referenced objects). 

For the entities that are captured by reference (with the capture-default `**[ &]**` or when using the character &, e.g. `**[ &a, &b, &c]**`), it is unspecified if additional data members are declared in the closure type, but any such additional members must satisfy [LiteralType](../named_req/LiteralType.html "cpp/named req/LiteralType")(since C++17). 

  


Lambda expressions are not allowed in [unevaluated expressions](expressions.html#Unevaluated_expressions "cpp/language/expressions"), [template arguments](template_parameters.html "cpp/language/template parameters"), [alias declarations](type_alias.html "cpp/language/type alias"), [typedef declarations](typedef.html "cpp/language/typedef"), and anywhere in a function (or function template) declaration except the function body and the function's [default arguments](default_arguments.html "cpp/language/default arguments").  | (until C++20)  
---|---  
  
### Lambda capture

The captures defines the outside variables that are accessible from within the lambda function body. Its syntax is defined as follows:   
  
---  
capture-default |  (1)  |   
capture-list |  (2)  |   
capture-default `**,**` capture-list |  (3)  |   
capture-default |  \-  |  one of `**&**` and `**=**`  
---|---|---  
capture-list |  \-  |  a comma-separated list of capture ﻿s   
  
  
The syntax of capture is defined as follows:   
  
---  
identifier |  (1)  |   
identifier `**...**` |  (2)  |   
identifier initializer |  (3)  |  (since C++14)  
`**&**` identifier |  (4)  |   
`**&**` identifier `**...**` |  (5)  |   
`**&**` identifier initializer |  (6)  |  (since C++14)  
`**this**` |  (7)  |   
`*****` `**this**` |  (8)  |  (since C++17)  
`**...**` identifier initializer |  (9)  |  (since C++20)  
`**&**` `**...**` identifier initializer |  (10)  |  (since C++20)  
  
1) simple by-copy capture

2) simple by-copy capture that is a [pack expansion](parameter_pack.html "cpp/language/parameter pack")

3) by-copy capture with an [initializer](initialization.html "cpp/language/initialization")

4) simple by-reference capture

5) simple by-reference capture that is a [pack expansion](parameter_pack.html "cpp/language/parameter pack")

6) by-reference capture with an initializer

7) simple by-reference capture of the current object

8) simple by-copy capture of the current object

9) by-copy capture with an initializer that is a pack expansion

10) by-reference capture with an initializer that is a pack expansion

If the capture-default is `**&**`, subsequent simple captures must not begin with `**&**`. 
    
    
    struct S2 { void f(int i); };
    void S2::f(int i)
    {
        [&] {};          // OK: by-reference capture default
        [&, i] {};       // OK: by-reference capture, except i is captured by copy
        [&, &i] {};      // Error: by-reference capture when by-reference is the default
        [&, this] {};    // OK, equivalent to [&]
        [&, this, i] {}; // OK, equivalent to [&, i]
    }

If the capture-default is `**=**`, subsequent simple captures must begin with `**&**` or be `***this**`(since C++17) or `**this**`(since C++20). 
    
    
    struct S2 { void f(int i); };
    void S2::f(int i)
    {
        [=] {};        // OK: by-copy capture default
        [=, &i] {};    // OK: by-copy capture, except i is captured by reference
        [=, *this] {}; // until C++17: Error: invalid syntax
                       // since C++17: OK: captures the enclosing S2 by copy
        [=, this] {};  // until C++20: Error: this when = is the default
                       // since C++20: OK, same as [=]
    }

Any capture may appear only once, and its name must be different from any parameter name: 
    
    
    struct S2 { void f(int i); };
    void S2::f(int i)
    {
        [i, i] {};        // Error: i repeated
        [this, *this] {}; // Error: "this" repeated (C++17)
     
        [i] (int i) {};   // Error: parameter and capture have the same name
    }

A lambda expression can use a variable without capturing it if the variable 

  * is a non-local variable or has static or thread local [storage duration](storage_duration.html "cpp/language/storage duration") (in which case the variable cannot be captured), or 
  * is a reference that has been initialized with a [constant expression](constant_expression.html#Constant_expression "cpp/language/constant expression"). 



A lambda expression can read the value of a variable without capturing it if the variable 

  * has const non-volatile integral or enumeration type and has been initialized with a [constant expression](constant_expression.html#Constant_expression "cpp/language/constant expression"), or 
  * is constexpr and has no mutable members. 



The current object (*this) can be implicitly captured if either capture default is present. If implicitly captured, it is always captured by reference, even if the capture default is `**=**`. The implicit capture of *this when the capture default is `**=**` is deprecated.(since C++20)

Only lambda expressions satisfying any of the following conditions may have a capture-default or capture without initializers: 

  * Its innermost [enclosing scope](scope.html "cpp/language/scope") is a [block scope](scope.html#Block_scope "cpp/language/scope"). 
  * It appears within a [default member initializer](data_members.html#Member_initialization "cpp/language/data members"), and its innermost enclosing scope is the corresponding [class scope](scope.html#Class_scope "cpp/language/scope"). 



  * It appears within a [contract assertion](contracts.html "cpp/language/contracts"), and its innermost enclosing scope is the corresponding [contract-assertion scope](scope.html#Contract-assertion_scope "cpp/language/scope"). 

| (since C++26)  
---|---  
  
For such lambda expression, the _reaching scope_ is defined as the set of enclosing scopes up to and including the innermost enclosing function (and its parameters). This includes nested block scopes and the scopes of enclosing lambdas if this lambda is nested. 

The identifier in any capture without an initializer (other than the `this`-capture) is looked up using usual [unqualified name lookup](lookup.html "cpp/language/lookup") in the _reaching scope_ of the lambda. The result of the lookup must be a [variable](objects.html "cpp/language/object") with automatic storage duration declared in the reaching scope, or a [structured binding](structured_binding.html "cpp/language/structured binding") whose corresponding variable satisfies such requirements(since C++20). The entity is _explicitly captured_. 

A capture with an initializer, called _init-capture_ , acts as if it declares and explicitly captures a variable declared with type specifier [`auto`](auto.html "cpp/language/auto") and the same initializer, whose declarative region is the body of the lambda expression (that is, it is not in scope within its initializer), except that: 

  * if the capture is by-copy, the introduced non-static data member of the closure object is another way to refer to that variable; 
    * in other words, the source variable does not actually exist, and the type deduction via auto and the initialization are applied to the non-static data member; 
  * if the capture is by-reference, the reference variable's lifetime ends when the lifetime of the closure object ends. 

This is used to capture move-only types with a capture such as x = std::move(x). This also makes it possible to capture by const reference, with &cr = [std::as_const](../utility/as_const.html)(x) or similar. 
    
    
    int x = 4;
     
    auto y = [&r = x, x = x + 1]() -> int
    {
        r += 2;
        return x * x;
    }(); // updates ::x to 6 and initializes y to 25.

| (since C++14)  
---|---  
  
If captures has a capture-default and does not explicitly capture the enclosing object (as this or *this), or an automatic variable that is [odr-usable](definition.html#ODR-use "cpp/language/definition") in the lambda body, or a [structured binding](structured_binding.html "cpp/language/structured binding") whose corresponding variable has atomic storage duration(since C++20), it captures the entity _implicitly_ if the entity is named in a [potentially-evaluated](expressions.html#Potentially-evaluated_expressions "cpp/language/expressions") expression within an expression (including when the implicit this-> is added before a use of non-static class member). 

For the purpose of determining implicit captures, [`typeid`](typeid.html "cpp/language/typeid") is never considered to make its operands unevaluated. 

Entities might be implicitly captured even if they are only named within a [discarded statement](if.html#Constexpr_if "cpp/language/if") after instantiation of the lambda body.  | (since C++17)  
---|---  
      
    
    void f(int, const int (&)[2] = {}) {}   // #1
    void f(const int&, const int (&)[1]) {} // #2
     
    struct NoncopyableLiteralType
    {
        constexpr explicit NoncopyableLiteralType(int n) : n_(n) {}
        NoncopyableLiteralType(const NoncopyableLiteralType&) = delete;
     
        int n_;
    };
     
    void test()
    {
        const int x = 17;
     
        auto l0 = []{ f(x); };           // OK: calls #1, does not capture x
        auto g0 = [](auto a) { f(x); };  // same as above
     
        auto l1 = [=]{ f(x); };          // OK: captures x (since P0588R1) and calls #1
                                         // the capture can be optimized away
        auto g1 = [=](auto a) { f(x); }; // same as above
     
        auto ltid = [=]{ typeid(x); };   // OK: captures x (since P0588R1)
                                         // even though x is unevaluated
                                         // the capture can be optimized away
     
        auto g2 = [=](auto a)
        {
            int selector[sizeof(a) == 1 ? 1 : 2] = {};
            f(x, selector); // OK: is a dependent expression, so captures x
        };
     
        auto g3 = [=](auto a)
        {
            typeid(a + x);  // captures x regardless of
                            // whether a + x is an unevaluated operand
        };
     
        constexpr NoncopyableLiteralType w{42};
        auto l4 = []{ return w.n_; };      // OK: w is not odr-used, capture is unnecessary
        // auto l5 = [=]{ return w.n_; };  // error: w needs to be captured by copy
    }

If the body of a lambda [odr-uses](definition.html#ODR-use "cpp/language/definition") an entity captured by copy, the member of the closure type is accessed. If it is not odr-using the entity, the access is to the original object: 
    
    
    void f(const int*);
    void g()
    {
        const int N = 10;
        [=]
        { 
            int arr[N]; // not an odr-use: refers to g's const int N
            f(&N); // odr-use: causes N to be captured (by copy)
                   // &N is the address of the closure object's member N, not g's N
        }();
    }

If a lambda odr-uses a reference that is captured by reference, it is using the object referred-to by the original reference, not the captured reference itself: 

Run this code
    
    
    #include <iostream>
     
    auto make_function(int& x)
    {
        return [&] { [std::cout](../io/cout.html) << x << '\n'; };
    }
     
    int main()
    {
        int i = 3;
        auto f = make_function(i); // the use of x in f binds directly to i
        i = 5;
        f(); // OK: prints 5
    }

Within the body of a lambda with capture default `**=**`, the type of any capturable entity is as if it were captured (and thus const-qualification is often added if the lambda is not mutable), even though the entity is in an unevaluated operand and not captured (e.g. in [`decltype`](decltype.html "cpp/language/decltype")): 
    
    
    void f3()
    {
        float x, &r = x;
        [=]
        { // x and r are not captured (appearance in a decltype operand is not an odr-use)
            decltype(x) y1;        // y1 has type float
            decltype((x)) y2 = y1; // y2 has type float const& because this lambda
                                   // is not mutable and x is an lvalue
            decltype(r) r1 = y1;   // r1 has type float& (transformation not considered)
            decltype((r)) r2 = y2; // r2 has type float const&
        };
    }

Any entity captured by a lambda (implicitly or explicitly) is odr-used by the lambda expression (therefore, implicit capture by a nested lambda triggers implicit capture in the enclosing lambda). 

All implicitly-captured variables must be declared within the _reaching scope_ of the lambda. 

If a lambda captures the enclosing object (as this or *this), either the nearest enclosing function must be a non-static member function or the lambda must be in a [default member initializer](data_members.html#Member_initialization "cpp/language/data members"): 
    
    
    struct s2
    {
        double ohseven = .007;
        auto f() // nearest enclosing function for the following two lambdas
        {
            return [this]      // capture the enclosing s2 by reference
            {
                return [*this] // capture the enclosing s2 by copy (C++17)
                {
                    return ohseven; // OK
                }
            }();
        }
     
        auto g()
        {
            return [] // capture nothing
            { 
                return [*this] {}; // error: *this not captured by outer lambda expression
            }();
        }
    };

If a lambda expression (or a specialization of a generic lambda's function call operator)(since C++14) ODR-uses *this or any variable with automatic storage duration, it must be captured by the lambda expression. 
    
    
    void f1(int i)
    {
        int const N = 20;
        auto m1 = [=]
        {
            int const M = 30;
            auto m2 = [i]
            {
                int x[N][M]; // N and M are not odr-used 
                             // (ok that they are not captured)
                x[0][0] = i; // i is explicitly captured by m2
                             // and implicitly captured by m1
            };
        };
     
        struct s1 // local class within f1()
        {
            int f;
            void work(int n) // non-static member function
            {
                int m = n * n;
                int j = 40;
                auto m3 = [this, m]
                {
                    auto m4 = [&, j] // error: j is not captured by m3
                    {
                        int x = n; // error: n is implicitly captured by m4
                                   // but not captured by m3
                        x += m;    // OK: m is implicitly captured by m4
                                   // and explicitly captured by m3
                        x += i;    // error: i is outside of the reaching scope
                                   // (which ends at work())
                        x += f;    // OK: this is captured implicitly by m4
                                   // and explicitly captured by m3
                    };
                };
            }
        };
    }

Class members cannot be captured explicitly by a capture without initializer (as mentioned above, only [variables](objects.html "cpp/language/object") are permitted in the capture-list ﻿): 
    
    
    class S
    {
        int x = 0;
     
        void f()
        {
            int i = 0;
        //  auto l1 = [i, x] { use(i, x); };      // error: x is not a variable
            auto l2 = [i, x = x] { use(i, x); };  // OK, copy capture
            i = 1; x = 1; l2(); // calls use(0,0)
            auto l3 = [i, &x = x] { use(i, x); }; // OK, reference capture
            i = 2; x = 2; l3(); // calls use(1,2)
        }
    };

When a lambda captures a member using implicit by-copy capture, it does not make a copy of that member variable: the use of a member variable `m` is treated as an expression (*this).m, and *this is always implicitly captured by reference: 
    
    
    class S
    {
        int x = 0;
     
        void f()
        {
            int i = 0;
     
            auto l1 = [=] { use(i, x); }; // captures a copy of i and
                                          // a copy of the this pointer
            i = 1; x = 1; l1();           // calls use(0, 1), as if
                                          // i by copy and x by reference
     
            auto l2 = [i, this] { use(i, x); }; // same as above, made explicit
            i = 2; x = 2; l2();           // calls use(1, 2), as if
                                          // i by copy and x by reference
     
            auto l3 = [&] { use(i, x); }; // captures i by reference and
                                          // a copy of the this pointer
            i = 3; x = 2; l3();           // calls use(3, 2), as if
                                          // i and x are both by reference
     
            auto l4 = [i, *this] { use(i, x); }; // makes a copy of *this,
                                                 // including a copy of x
            i = 4; x = 4; l4();           // calls use(3, 2), as if
                                          // i and x are both by copy
        }
    };

If a lambda expression appears in a [default argument](default_arguments.html "cpp/language/default arguments"), it cannot explicitly or implicitly capture anything, unless all captures have initializers which satisfy the constraints of an expression appearing in a default argument(since C++14): 
    
    
    void f2()
    {
        int i = 1;
     
        void g1( int = [i] { return i; }() ); // error: captures something
        void g2( int = [i] { return 0; }() ); // error: captures something
        void g3( int = [=] { return i; }() ); // error: captures something
     
        void g4( int = [=] { return 0; }() );       // OK: capture-less
        void g5( int = [] { return sizeof i; }() ); // OK: capture-less
     
        // C++14
        void g6( int = [x = 1] { return x; }() ); // OK: 1 can appear
                                                  //     in a default argument
        void g7( int = [x = i] { return x; }() ); // error: i cannot appear
                                                  //        in a default argument
    }

Members of [anonymous unions](union.html "cpp/language/union") members cannot be captured. [Bit-fields](bit_field.html "cpp/language/bit field") can only be captured by copy. 

If a nested lambda `m2` captures something that is also captured by the immediately enclosing lambda `m1`, then `m2`'s capture is transformed as follows: 

  * if the enclosing lambda `m1` captures by copy, `m2` is capturing the non-static member of `m1`'s closure type, not the original variable or *this; if `m1` is not mutable, the non-static data member is considered to be const-qualified. 
  * if the enclosing lambda `m1` captures by reference, `m2` is capturing the original variable or *this. 



Run this code
    
    
    #include <iostream>
     
    int main()
    {
        int a = 1, b = 1, c = 1;
     
        auto m1 = [a, &b, &c]() mutable
        {
            auto m2 = [a, b, &c]() mutable
            {
                [std::cout](../io/cout.html) << a << b << c << '\n';
                a = 4; b = 4; c = 4;
            };
            a = 3; b = 3; c = 3;
            m2();
        };
     
        a = 2; b = 2; c = 2;
     
        m1();                             // calls m2() and prints 123
        [std::cout](../io/cout.html) << a << b << c << '\n'; // prints 234
    }

If a lambda captures anything, the type of the explicit object parameter (if any) of the function call operator can only be 

  * the closure type, 
  * a class type publicly and unambiguously derived from the closure type, or 
  * a reference to a possibly cv-qualified such type. 


    
    
    struct C 
    {
        template<typename T>
        C(T);
    };
     
    void func(int i) 
    {
        int x = [=](this auto&&) { return i; }();  // OK
        int y = [=](this C) { return i; }();       // error
        int z = [](this C) { return 42; }();       // OK
     
        auto lambda = [n = 42] (this auto self) { return n; };
        using Closure = decltype(lambda);
        struct D : private Closure {
            D(Closure l) : Closure(l) {}
            using Closure::operator();
            friend Closure;
        };
        D{lambda}(); // error
    }

| (since C++23)  
---|---  
  
### Notes

Feature-test macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lambdas`](../experimental/feature_test.html#cpp_lambdas "cpp/feature test") | [`200907L`](../compiler_support/11.html#cpp_lambdas_200907L "cpp/compiler support/11") | (C++11) | Lambda expressions   
[`__cpp_generic_lambdas`](../experimental/feature_test.html#cpp_generic_lambdas "cpp/feature test") | [`201304L`](../compiler_support/14.html#cpp_generic_lambdas_201304L "cpp/compiler support/14") | (C++14) | Generic lambda expressions   
[`201707L`](../compiler_support/20.html#cpp_generic_lambdas_201707L "cpp/compiler support/20") | (C++20) | Explicit template parameter list for generic lambdas   
[`__cpp_init_captures`](../experimental/feature_test.html#cpp_init_captures "cpp/feature test") | [`201304L`](../compiler_support/14.html#cpp_init_captures_201304L "cpp/compiler support/14") | (C++14) | Lambda init-capture   
[`201803L`](../compiler_support/20.html#cpp_init_captures_201803L "cpp/compiler support/20") | (C++20) | Allow pack expansion in lambda init-capture   
[`__cpp_capture_star_this`](../experimental/feature_test.html#cpp_capture_star_this "cpp/feature test") | [`201603L`](../compiler_support/17.html#cpp_capture_star_this_201603L "cpp/compiler support/17") | (C++17) | Lambda capture of *this by value as [=, *this]  
[`__cpp_constexpr`](../experimental/feature_test.html#cpp_constexpr "cpp/feature test") | [`201603L`](../compiler_support/17.html#cpp_constexpr_201603L "cpp/compiler support/17") | (C++17) | constexpr lambda   
[`__cpp_static_call_operator`](../experimental/feature_test.html#cpp_static_call_operator "cpp/feature test") | [`202207L`](../compiler_support/23.html#cpp_static_call_operator_202207L "cpp/compiler support/23") | (C++23) | static operator() for capture-less lambdas   
  
The rule for implicit lambda capture is slightly changed by defect report [P0588R1](https://wg21.link/P0588R1). As of 2023-10, some major implementations have not completely implemented the DR, and thus the old rule, which detects [odr-using](definition.html#ODR-use "cpp/language/definition"), is still used in some cases. 

Old rule before P0588R1  
---  
If captures has a capture-default and does not explicitly capture the enclosing object (as `**this**` or `***this**`), or an automatic variable that is [odr-usable](definition.html#ODR-use "cpp/language/definition") in the lambda body, or a [structured binding](structured_binding.html "cpp/language/structured binding") whose corresponding variable has atomic storage duration(since C++20), it captures the entity _implicitly_ if the entity is  | 

  * named in a [potentially-evaluated](expressions.html#Potentially-evaluated_expressions "cpp/language/expressions") expression within an expression that depends on a template parameter of a generic lambda, or 

| (since C++14)  
---|---  
  
  * [odr-used](definition.html#ODR-use "cpp/language/definition") by the body of the lambda. 

  
  
### Example

This example shows how to pass a lambda to a generic algorithm and how objects resulting from a lambda expression can be stored in [std::function](../utility/functional/function.html "cpp/utility/functional/function") objects.

Run this code
    
    
    #include <algorithm>
    #include <functional>
    #include <iostream>
    #include <vector>
     
    int main()
    {
        [std::vector](../container/vector.html)<int> c{1, 2, 3, 4, 5, 6, 7};
        int x = 5;
        c.erase([std::remove_if](../algorithm/remove.html)(c.begin(), c.end(), [x](int n) { return n < x; }), c.end());
     
        [std::cout](../io/cout.html) << "c: ";
        [std::for_each](../algorithm/for_each.html)(c.begin(), c.end(), [](int i) { [std::cout](../io/cout.html) << i << ' '; });
        [std::cout](../io/cout.html) << '\n';
     
        // the type of a closure cannot be named, but can be inferred with auto
        // since C++14, lambda could own default arguments
        auto func1 = [](int i = 6) { return i + 4; };
        [std::cout](../io/cout.html) << "func1: " << func1() << '\n';
     
        // like all callable objects, closures can be captured in std::function
        // (this may incur unnecessary overhead)
        [std::function](../utility/functional/function.html)<int(int)> func2 = [](int i) { return i + 4; };
        [std::cout](../io/cout.html) << "func2: " << func2(6) << '\n';
     
        constexpr int fib_max {8};
        [std::cout](../io/cout.html) << "Emulate `recursive lambda` calls:\nFibonacci numbers: ";
        auto nth_fibonacci = [](int n)
        {
            [std::function](../utility/functional/function.html)<int(int, int, int)> fib = [&](int n, int a, int b)
            {
                return n ? fib(n - 1, a + b, a) : b;
            };
            return fib(n, 0, 1);
        };
     
        for (int i{1}; i <= fib_max; ++i)
            [std::cout](../io/cout.html) << nth_fibonacci(i) << (i < fib_max ? ", " : "\n");
     
        [std::cout](../io/cout.html) << "Alternative approach to lambda recursion:\nFibonacci numbers: ";
        auto nth_fibonacci2 = [](auto self, int n, int a = 0, int b = 1) -> int
        {
            return n ? self(self, n - 1, a + b, a) : b;
        };
     
        for (int i{1}; i <= fib_max; ++i)
            [std::cout](../io/cout.html) << nth_fibonacci2(nth_fibonacci2, i) << (i < fib_max ? ", " : "\n");
     
    #ifdef __cpp_explicit_this_parameter
        [std::cout](../io/cout.html) << "C++23 approach to lambda recursion:\n";
        auto nth_fibonacci3 = [](this auto self, int n, int a = 0, int b = 1) -> int
        {
             return n ? self(n - 1, a + b, a) : b;
        };
     
        for (int i{1}; i <= fib_max; ++i)
            [std::cout](../io/cout.html) << nth_fibonacci3(i) << (i < fib_max ? ", " : "\n");
    #endif
    }

Possible output: 
    
    
    c: 5 6 7
    func1: 10
    func2: 10
    Emulate `recursive lambda` calls:
    Fibonacci numbers: 0, 1, 1, 2, 3, 5, 8, 13
    Alternative approach to lambda recursion:
    Fibonacci numbers: 0, 1, 1, 2, 3, 5, 8, 13

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 974](https://cplusplus.github.io/CWG/issues/974.html) | C++11  | default argument was not allowed in the  
parameter list of a lambda expression  | allowed   
[CWG 1048](https://cplusplus.github.io/CWG/issues/1048.html)  
([N3638](https://wg21.link/N3638))  | C++11  | the return type could only be deduced for lambda  
bodies containing only one return statement  | improved the return  
type deduction   
[CWG 1249](https://cplusplus.github.io/CWG/issues/1249.html) | C++11  | it is not clear that whether the captured member of the  
enclosing non-mutable lambda is considered const or not  | considered const  
[CWG 1557](https://cplusplus.github.io/CWG/issues/1557.html) | C++11  | the language linkage of the returned function type of  
the closure type's conversion function was not specified  | it has C++  
language linkage   
[CWG 1607](https://cplusplus.github.io/CWG/issues/1607.html) | C++11  | lambda expressions could appear in  
function and function template signatures  | not allowed   
[CWG 1612](https://cplusplus.github.io/CWG/issues/1612.html) | C++11  | members of anonymous unions could be captured  | not allowed   
[CWG 1722](https://cplusplus.github.io/CWG/issues/1722.html) | C++11  | the conversion function for capture-less lambdas  
had unspecified exception specification  | conversion function  
is noexcept   
[CWG 1772](https://cplusplus.github.io/CWG/issues/1772.html) | C++11  | the semantic of __func__ in lambda body was not clear  | it refers to the closure  
class's operator()   
[CWG 1780](https://cplusplus.github.io/CWG/issues/1780.html) | C++14  | it was unclear whether the members of the closure types of generic  
lambdas can be explicitly instantiated or explicitly specialized  | neither is allowed   
[CWG 1891](https://cplusplus.github.io/CWG/issues/1891.html) | C++11  | closure had a deleted default constructor  
and implicit copy/move constructors  | no default and defaulted  
copy/move constructors   
[CWG 1937](https://cplusplus.github.io/CWG/issues/1937.html) | C++11  | as for the effect of invoking the result of the  
conversion function, it was unspecified on which  
object calling its operator() has the same effect  | on a default-constructed  
instance of the closure type   
[CWG 1973](https://cplusplus.github.io/CWG/issues/1973.html) | C++11  | the parameter list of the closure type's operator()  
could refer to the parameter list given in trailing | can only refer  
to params  
[CWG 2011](https://cplusplus.github.io/CWG/issues/2011.html) | C++11  | for a reference captured by reference, it was unspecified  
which entity the identifier of the capture refers to  | it refers to the originally  
referenced entity   
[CWG 2095](https://cplusplus.github.io/CWG/issues/2095.html) | C++11  | the behavior of capturing rvalue references  
to functions by copy was not clear  | made clear   
[CWG 2211](https://cplusplus.github.io/CWG/issues/2211.html) | C++11  | the behavior was unspecified if a capture  
has the same name as a parameter  | the program is ill-  
formed in this case   
[CWG 2358](https://cplusplus.github.io/CWG/issues/2358.html) | C++14  | lambda expressions appearing in default arguments had  
to be capture-less even if all captures are initialized with  
expressions which can appear in default arguments  | allow such lambda  
expressions with captures   
[CWG 2509](https://cplusplus.github.io/CWG/issues/2509.html) | C++17  | each specifier could have multiple  
occurrences in the specifier sequence  | each specifier can only  
appear at most once in  
the specifier sequence   
[CWG 2561](https://cplusplus.github.io/CWG/issues/2561.html) | C++23  | a lambdas with explicit object parameter could have a  
conversion function to an undesired function pointer type  | it does not have such  
a conversion funtion   
[CWG 2881](https://cplusplus.github.io/CWG/issues/2881.html) | C++23  | operator() with explicit parameter could be instantiated for  
a derived class when the inheritance was not public or ambiguous  | made ill-formed   
[P0588R1](https://wg21.link/P0588R1) | C++11  | the rule for implicit lambda capture detected odr-use  | the detection is simplified   
  
### See also

[ `auto` specifier ](auto.html "cpp/language/auto")(C++11) |  specifies a type deduced from an expression   
---|---  
[ function](../utility/functional/function.html "cpp/utility/functional/function")(C++11) |  copyable wrapper of any copy constructible callable object   
(class template)   
[ move_only_function](../utility/functional/move_only_function.html "cpp/utility/functional/move only function")(C++23) |  move-only wrapper of any callable object that supports qualifiers in a given call signature   
(class template)   
  
### External links

[Nested function](https://en.wikipedia.org/wiki/Nested_function "enwiki:Nested function") \- a function which is defined within another (_enclosing_) function.   
---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
