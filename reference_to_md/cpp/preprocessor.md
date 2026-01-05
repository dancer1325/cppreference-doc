[C++](../cpp.html "cpp")

[Compiler support](compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](freestanding.html "cpp/freestanding")  
[Language](language.html "cpp/language")  
[Standard library](standard_library.html "cpp/standard library")  
[Standard library headers](headers.html "cpp/header")  
[Named requirements](iterator/concepts.html "cpp/named req")  
[Feature test macros](experimental/feature_test.html "cpp/feature test") (C++20)  
[Language support library](utility.html#Language_support "cpp/utility")  
[Concepts library](concepts.html "cpp/concepts") (C++20)  
[Diagnostics library](error.html "cpp/error")  
[Memory management library](memory.html "cpp/memory")  
[Metaprogramming library](meta.html "cpp/meta") (C++11)  
[General utilities library](utility.html "cpp/utility")  
[Containers library](container.html "cpp/container")  
[Iterators library](iterator.html "cpp/iterator")  
[Ranges library](ranges.html "cpp/ranges") (C++20)  
[Algorithms library](algorithm.html "cpp/algorithm")  
[Strings library](string.html "cpp/string")  
[Text processing library](text.html "cpp/text")  
[Numerics library](numeric.html "cpp/numeric")  
[Date and time library](chrono.html "cpp/chrono")  
[Input/output library](io.html "cpp/io")  
[Filesystem library](filesystem.html "cpp/filesystem") (C++17)  
[Concurrency support library](atomic.html "cpp/thread") (C++11)  
[Execution control library](experimental/execution.html "cpp/execution") (C++26)  
[Technical specifications](experimental.html "cpp/experimental")  
[Symbols index](symbol_index.html "cpp/symbol index")  
[External libraries](links/libs.html "cpp/links/libs")  
  


[C++ language](language.html "cpp/language")

General topics  
---  
| **Preprocessor**  
---  
[Comments](comments.html "cpp/comment")  
  
| [Keywords](keywords.html "cpp/keyword")  
---  
[Escape sequences](language/escape.html "cpp/language/escape")  
  
[Flow control](language/statements.html "cpp/language/statements")  
Conditional execution statements  
| [`if`](language/if.html "cpp/language/if")  
---  
  
| [`switch`](language/switch.html "cpp/language/switch")  
---  
  
Iteration statements (loops)  
| [`for`](language/for.html "cpp/language/for")  
---  
[range-`for`](language/range-for.html "cpp/language/range-for") (C++11)  
  
| [`while`](language/while.html "cpp/language/while")  
---  
[`do-while`](language/do.html "cpp/language/do")  
  
Jump statements  
| [`continue`](language/continue.html "cpp/language/continue") \- [`break`](language/break.html "cpp/language/break")  
---  
  
| [`goto`](language/goto.html "cpp/language/goto") \- [`return`](language/return.html "cpp/language/return")  
---  
  
[Functions](language/functions.html "cpp/language/functions")  
[Function declaration](language/function.html "cpp/language/function")  
[Lambda function expression](language/lambda.html "cpp/language/lambda")  
[`inline` specifier](language/inline.html "cpp/language/inline")  
[Dynamic exception specifications](language/except_spec.html "cpp/language/except spec") (until C++17*)  
[`noexcept` specifier](language/noexcept_spec.html "cpp/language/noexcept spec") (C++11)  
Exceptions  
| [`throw`-expression](language/throw.html "cpp/language/throw")  
---  
[`try` block](language/try.html "cpp/language/try")  
  
|   
  
---  
[`catch` handler](language/catch.html "cpp/language/catch")  
  
Namespaces  
| [Namespace declaration](language/namespace.html "cpp/language/namespace")` `  
---  
  
| [Namespace aliases](language/namespace_alias.html "cpp/language/namespace alias")  
---  
  
Types  
| [Fundamental types](language/types.html "cpp/language/types")  
---  
[Enumeration types](language/enum.html "cpp/language/enum")  
[Function types](language/function.html "cpp/language/function")  
  
| [Class/struct types](language/class.html "cpp/language/class")  
---  
[Union types](language/union.html "cpp/language/union")  
  
  
  
Specifiers  
| [`const`/`volatile`](language/cv.html "cpp/language/cv")  
---  
[`decltype`](language/decltype.html "cpp/language/decltype") (C++11)  
[`auto`](language/auto.html "cpp/language/auto") (C++11)  
  
| [`constexpr`](language/constexpr.html "cpp/language/constexpr") (C++11)  
---  
[`consteval`](language/consteval.html "cpp/language/consteval") (C++20)  
[`constinit`](language/constinit.html "cpp/language/constinit") (C++20)  
  
[Storage duration specifiers](language/storage_duration.html "cpp/language/storage duration")  
[Initialization](language/initialization.html "cpp/language/initialization")  
| [Default-initialization](language/default_initialization.html "cpp/language/default initialization")  
---  
[Value-initialization](language/value_initialization.html "cpp/language/value initialization")  
[Zero-initialization](language/zero_initialization.html "cpp/language/zero initialization")  
[Copy-initialization](language/copy_initialization.html "cpp/language/copy initialization")  
[Direct-initialization](language/direct_initialization.html "cpp/language/direct initialization")  
  
| [Aggregate initialization](language/aggregate_initialization.html "cpp/language/aggregate initialization")  
---  
[List-initialization](language/list_initialization.html "cpp/language/list initialization") (C++11)` `  
[Constant initialization](language/constant_initialization.html "cpp/language/constant initialization")  
[Reference initialization](language/reference_initialization.html "cpp/language/reference initialization")  
  
  
  
[Expressions](language/expressions.html "cpp/language/expressions")  
---  
| [Value categories](language/value_category.html "cpp/language/value category")  
---  
[Order of evaluation](language/eval_order.html "cpp/language/eval order")  
  
| [Operators](language/operators.html "cpp/language/operators")  
---  
[Operator precedence](language/operator_precedence.html "cpp/language/operator precedence")  
  
[Alternative representations](language/operator_alternative.html "cpp/language/operator alternative")  
[Literals](language/expressions.html#Literals "cpp/language/expressions")  
[Boolean](language/bool_literal.html "cpp/language/bool literal") \- [Integer](language/integer_literal.html "cpp/language/integer literal") \- [Floating-point](language/floating_literal.html "cpp/language/floating literal")  
[Character](language/character_literal.html "cpp/language/character literal") \- [String](language/string_literal.html "cpp/language/string literal") \- [`nullptr`](language/nullptr.html "cpp/language/nullptr") (C++11)  
[User-defined](language/user_literal.html "cpp/language/user literal") (C++11)  
Utilities  
[Attributes](language/attributes.html "cpp/language/attributes") (C++11)  
Types  
[`typedef` declaration](language/typedef.html "cpp/language/typedef")  
[Type alias declaration](language/type_alias.html "cpp/language/type alias") (C++11)  
Casts  
| [Implicit conversions](language/implicit_cast.html "cpp/language/implicit conversion")  
---  
[`static_cast`](language/static_cast.html "cpp/language/static cast")  
[`const_cast`](language/const_cast.html "cpp/language/const cast")  
  
| [Explicit conversions](language/explicit_cast.html "cpp/language/explicit cast")  
---  
[`dynamic_cast`](language/dynamic_cast.html "cpp/language/dynamic cast")  
[`reinterpret_cast`](language/reinterpret_cast.html "cpp/language/reinterpret cast")  
  
Memory allocation  
| [`new` expression](language/new.html "cpp/language/new")  
---  
  
| [`delete` expression](language/delete.html "cpp/language/delete")  
---  
  
[Classes](language/classes.html "cpp/language/classes")  
| [Class declaration](language/class.html "cpp/language/class")  
---  
[Constructors](language/initializer_list.html "cpp/language/constructor")  
[`this` pointer](language/this.html "cpp/language/this")  
  
| [Access specifiers](language/access.html "cpp/language/access")  
---  
[`friend` specifier](language/friend.html "cpp/language/friend")  
  
  
  
Class-specific function properties  
| [Virtual function](language/virtual.html "cpp/language/virtual")  
---  
[`override` specifier](language/override.html "cpp/language/override") (C++11)` `  
[`final` specifier](language/final.html "cpp/language/final") (C++11)  
  
| [`explicit`](language/explicit.html "cpp/language/explicit") (C++11)  
---  
[`static`](language/static.html "cpp/language/static")  
  
  
  
Special member functions  
| [Default constructor](language/default_constructor.html "cpp/language/default constructor")  
---  
[Copy constructor](language/copy_constructor.html "cpp/language/copy constructor")  
[Move constructor](language/move_constructor.html "cpp/language/move constructor") (C++11)  
  
| [Copy assignment](language/as_operator.html "cpp/language/as operator")  
---  
[Move assignment](language/move_operator.html "cpp/language/move operator") (C++11)  
[Destructor](language/destructor.html "cpp/language/destructor")  
  
[Templates](language/templates.html "cpp/language/templates")  
| [Class template](language/class_template.html "cpp/language/class template")  
---  
[Function template](language/function_template.html "cpp/language/function template")  
  
| [Template specialization](language/template_specialization.html "cpp/language/template specialization")  
---  
[Parameter packs](language/parameter_pack.html "cpp/language/pack") (C++11)  
  
Miscellaneous  
| [Inline assembly](language/asm.html "cpp/language/asm")  
---  
  
| [History of C++](language/history.html "cpp/language/history")  
---  
  


**Preprocessor**

[#if#ifdef#ifndef#else#elif#elifdef#elifndef#endif](preprocessor/conditional.html "cpp/preprocessor/conditional")(C++23)(C++23)  
---  
[#define#undef#,## operators](preprocessor/replace.html "cpp/preprocessor/replace")  
[#include__has_include](preprocessor/include.html "cpp/preprocessor/include")(C++17)  
[#error#warning](preprocessor/warning.html "cpp/preprocessor/error")(C++23)  
[#pragma_Pragma](preprocessor/impl.html "cpp/preprocessor/impl")(C++11)  
[#line](preprocessor/line.html "cpp/preprocessor/line")  
[#embed](preprocessor/embed.html "cpp/preprocessor/embed")(C++26)  
  


The preprocessor is executed at [translation phase 4](language/translation_phases.html#Phase_4 "cpp/language/translation phases"), before the compilation. The result of preprocessing is a single file which is then passed to the actual compiler. 

## Contents

  * [1 Directives](preprocessor.html#Directives)
  * [2 Capabilities](preprocessor.html#Capabilities)
  * [3 Defect reports](preprocessor.html#Defect_reports)
  * [4 See also](preprocessor.html#See_also)

  
---  
  
### Directives

The preprocessing directives control the behavior of the preprocessor. Each directive occupies one line and has the following format: 

  * the # character. 
  * a sequence of: 



    

  * a standard-defined directive name (listed [below](preprocessor.html#Capabilities)) followed by the corresponding arguments, or 
  * one or more [preprocessing tokens](language/translation_phases.html#Phase_3 "cpp/language/translation phases") where the beginning token is not a standard-defined directive name, in this case the directive is conditionally-supported with implementation-defined semantics (e.g. a common non-standard extension is the directive #warning which emits a user-defined message during compilation)(until C++23), or 
  * nothing, in this case the directive has no effect. 



  * a line break. 

The [module and import directives](language/modules.html "cpp/language/modules") are also preprocessing directives.  | (since C++20)  
---|---  
  
Preprocessing directives must not come from macro expansion. 
    
    
    #define EMPTY
    EMPTY   #   include <file.h> // not a preprocessing directive

### Capabilities

The preprocessor has the source file translation capabilities: 

  * **[conditionally](preprocessor/conditional.html "cpp/preprocessor/conditional")** compile parts of source file (controlled by directive #if, #ifdef, #ifndef, #else, #elif, #elifdef, #elifndef(since C++23), and #endif). 
  * **[replace](preprocessor/replace.html "cpp/preprocessor/replace")** text macros while possibly concatenating or quoting identifiers (controlled by directives #define and #undef, and operators # and ##). 
  * **[include](preprocessor/include.html "cpp/preprocessor/include")** other files (controlled by directive #include and checked with __has_include(since C++17)). 
  * cause an **[error](preprocessor/warning.html "cpp/preprocessor/error")** or **[warning](preprocessor/warning.html "cpp/preprocessor/error")**(since C++23) (controlled by directive #error or #warning respectively(since C++23)). 



The following aspects of the preprocessor can be controlled: 

  * **[implementation-defined](preprocessor/impl.html "cpp/preprocessor/impl")** behavior (controlled by directive #pragma and operator _Pragma(since C++11)). In addition, some compilers support (to varying degrees) the operator __pragma as a _non-standard_ extension. 
  * **[file name and line information](preprocessor/line.html "cpp/preprocessor/line")** available to the preprocessor (controlled by directive #line). 



### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 2001](https://cplusplus.github.io/CWG/issues/2001.html) | C++98  | the behavior of using non-standard-defined directives was not clear  | made conditionally-supported   
  
### See also

[C++ documentation](preprocessor/replace.html#Predefined_macros "cpp/preprocessor/replace") for Predefined Macro Symbols  
---  
[C++ documentation](symbol_index/macro.html "cpp/symbol index/macro") for Macro Symbol Index  
[C documentation](../c/preprocessor.html "c/preprocessor") for preprocessor
