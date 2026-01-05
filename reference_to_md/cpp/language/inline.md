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
**`inline` specifier**  
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
  


[Declarations](declarations.html "cpp/language/declarations")

| Overview  
---  
[Declaration syntax](declarations.html "cpp/language/declarations")  
[_decl-specifier-seq_](declarations.html#Specifiers "cpp/language/declarations")  
[Declarator](declarations.html#Declarators "cpp/language/declarations")  
[Conflicting declarations](conflicting_declarations.html "cpp/language/conflicting declarations")  
Specifiers  
[typedef](typedef.html "cpp/language/typedef")  
**inline**  
[virtual function specifier](virtual.html "cpp/language/virtual")  
[explicit function specifier](explicit.html "cpp/language/explicit")  
[friend](friend.html "cpp/language/friend")  
[constexpr](constexpr.html "cpp/language/constexpr")(C++11)  
[consteval](consteval.html "cpp/language/consteval")(C++20)  
[constinit](constinit.html "cpp/language/constinit")(C++20)  
[Storage class specifiers](storage_duration.html "cpp/language/storage duration")  
[Translation-unit-local](tu_local.html "cpp/language/tu local") (C++20)  
[class/struct](class.html "cpp/language/class")  
[union](union.html "cpp/language/union")  
[enum](enum.html "cpp/language/enum")  
[decltype](decltype.html "cpp/language/decltype")(C++11)  
[auto](auto.html "cpp/language/auto")(C++11)  
[alignas](alignas.html "cpp/language/alignas")(C++11)  
[constvolatile](cv.html "cpp/language/cv")  
[Pack indexing specifier](pack_indexing.html#Pack_indexing_specifier "cpp/language/pack indexing") (C++26)  
[Elaborated type specifier](elaborated_type_specifier.html "cpp/language/elaborated type specifier")  
[Attributes](attributes.html "cpp/language/attributes") (C++11)  
  
| Declarators  
---  
[Reference](reference.html "cpp/language/reference")  
[Pointer](pointer.html "cpp/language/pointer")  
[Array](array.html "cpp/language/array")  
Block declarations  
[Simple-declaration](declarations.html "cpp/language/declarations")  
→[Structured binding declaration](structured_binding.html "cpp/language/structured binding") (C++17)  
[Alias declaration](type_alias.html "cpp/language/type alias") (C++11)  
[Namespace alias definition](namespace_alias.html "cpp/language/namespace alias")  
[using declaration](using_declaration.html "cpp/language/using declaration")  
[`using` directive](namespace.html#Using-directives "cpp/language/namespace")  
[static_assert declaration](static_assert.html "cpp/language/static assert") (C++11)  
[asm declaration](asm.html "cpp/language/asm")  
[Opaque enum declaration](enum.html "cpp/language/enum") (C++11)  
Other declarations  
[Namespace definition](namespace.html "cpp/language/namespace")  
[Function declaration](function.html "cpp/language/function")  
[Class template declaration](class_template.html "cpp/language/class template")  
[Function template declaration](function_template.html "cpp/language/function template")  
[Explicit template instantiation](class_template.html#Explicit_instantiation "cpp/language/class template") (C++11)  
[Explicit template specialization](template_specialization.html "cpp/language/template specialization")  
[Linkage specification](language_linkage.html "cpp/language/language linkage")  
[Attribute declaration](declarations.html "cpp/language/declarations") (C++11)  
[Empty declaration](declarations.html "cpp/language/declarations")  
  
  
  


The inline specifier, when used in a function's [decl-specifier-seq](declarations.html#Specifiers "cpp/language/declarations"), declares the function to be an _inline function_. 

A function defined entirely inside a [class/struct/union definition](classes.html "cpp/language/classes"), whether it's a member function or a non-member friend function, is implicitly an inline function unless it is attached to a [named module](modules.html#Module_declarations "cpp/language/modules")(since C++20). 

A function declared constexpr or consteval(since C++20) on its first declaration is implicitly an inline function. A deleted function is implicitly an inline function: its (deleted) definition can appear in more than one translation unit.  | (since C++11)  
---|---  
The inline specifier, when used in a [decl-specifier-seq](declarations.html#Specifiers "cpp/language/declarations") of a variable with static storage duration (static class member or namespace-scope variable), declares the variable to be an _inline variable_. A static data member declared constexpr on its first declaration is implicitly an inline variable.  | (since C++17)  
  
## Contents

  * [1 Explanation](inline.html#Explanation)
  * [2 Notes](inline.html#Notes)
  * [3 Keywords](inline.html#Keywords)
  * [4 Example](inline.html#Example)
  * [5 Defect reports](inline.html#Defect_reports)
  * [6 See also](inline.html#See_also)

  
---  
  
### Explanation

An inline function or inline variable(since C++17) has the following properties: 

  * The definition of an inline function or variable(since C++17) must be reachable in the translation unit where it is accessed (not necessarily before the point of access). 
  * An inline function or variable(since C++17) with [external linkage](storage_duration.html#external_linkage "cpp/language/storage duration") (e.g. not declared static) has the following additional properties: 



    

  * There may be [more than one definition](definition.html#One_Definition_Rule "cpp/language/definition") of an inline function or variable(since C++17) in the program as long as each definition appears in a different translation unit and (for non-static inline functions and variables(since C++17)) all definitions are identical. For example, an inline function or an inline variable(since C++17) may be defined in a header file that is included in multiple source files. 
  * It must be declared inline in every translation unit. 
  * It has the same address in every translation unit. 



In an inline function, 

  * Function-local static objects in all function definitions are shared across all translation units (they all refer to the same object defined in one translation unit). 
  * Types defined in all function definitions are also the same in all translation units. 

Inline const variables at namespace scope have [external linkage](storage_duration.html#external_linkage "cpp/language/storage duration") by default (unlike the non-inline non-volatile const-qualified variables).  | (since C++17)  
---|---  
  
The original intent of the inline keyword was to serve as an indicator to the optimizer that [inline substitution of a function](https://en.wikipedia.org/wiki/inline_expansion "enwiki:inline expansion") is preferred over function call, that is, instead of executing the function call CPU instruction to transfer control to the function body, a copy of the function body is executed without generating the call. This avoids overhead created by the function call (passing the arguments and retrieving the result) but it may result in a larger executable as the code for the function has to be repeated multiple times. 

Since inline substitution is unobservable in the standard semantics, compilers are free to use inline substitution for any function that's not marked inline, and are free to generate function calls to any function marked inline. Those optimization choices do not change the rules regarding multiple definitions and shared statics listed above. 

Because the meaning of the keyword inline for functions came to mean "multiple definitions are permitted" rather than "inlining is preferred" since C++98, that meaning was extended to variables.  | (since C++17)  
---|---  
  
### Notes

If an inline function or variable(since C++17) with external linkage is defined differently in different translation units, the program is ill-formed, no diagnostic required. 

The inline specifier cannot be used with a function or variable(since C++17) declaration at block scope (inside another function). 

The inline specifier cannot re-declare a function or variable(since C++17) that was already defined in the translation unit as non-inline. 

The implicitly-generated member functions and any member function declared as defaulted on its first declaration are inline just like any other function defined inside a class definition. 

If an inline function is declared in different translation units, the accumulated sets of [default arguments](default_arguments.html "cpp/language/default arguments") must be the same at the end of each translation unit. 

In C, inline functions do not have to be declared inline in every translation unit (at most one may be non-inline or extern inline), the function definitions do not have to be identical (but the behavior of the program is unspecified if it depends on which one is called), and the function-local statics are distinct between different definitions of the same function. 

See [static data members](static.html "cpp/language/static") for additional rules about inline static members. Inline variables eliminate the main obstacle to packaging C++ code as header-only libraries.  | (since C++17)  
---|---  
Feature-test macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_inline_variables`](../experimental/feature_test.html#cpp_inline_variables "cpp/feature test") | [`201606L`](../compiler_support/17.html#cpp_inline_variables_201606L "cpp/compiler support/17") | (C++17) | Inline variables   
  
### Keywords

[`inline`](../keyword/inline.html "cpp/keyword/inline")

### Example

Header "example.h": 
    
    
    #ifndef EXAMPLE_H
    #define EXAMPLE_H
     
    #include <atomic>
     
    // function included in multiple source files must be inline
    inline int sum(int a, int b)
    {
        return a + b;
    }
     
    // variable with external linkage included in multiple source files must be inline
    inline [std::atomic](../atomic/atomic.html)<int> counter(0);
     
    #endif

Source file #1: 
    
    
    #include "example.h"
     
    int a()
    {
        ++counter;
        return sum(1, 2);
    }

Source file #2: 
    
    
    #include "example.h"
     
    int b()
    {
        ++counter;
        return sum(3, 4);
    }

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 281](https://cplusplus.github.io/CWG/issues/281.html) | C++98  | a friend function declaration could use the inline specifier  
even if the friended function is not an inline function  | prohibit such uses   
[CWG 317](https://cplusplus.github.io/CWG/issues/317.html) | C++98  | a function could be declared inline even if it has a non-inline  
definition in the same translation unit before the declaration  | the program is ill-  
formed in this case   
[CWG 765](https://cplusplus.github.io/CWG/issues/765.html) | C++98  | a type defined in an inline function might  
be different in different translation units  | such types are the same  
in all translation units   
[CWG 1823](https://cplusplus.github.io/CWG/issues/1823.html) | C++98  | string literals in all definitions of an inline  
function were shared across all translation units  | the requirement is removed due to  
consistency and implementations   
[CWG 2531](https://cplusplus.github.io/CWG/issues/2531.html) | C++17  | a static data member could be implicitly inline even if  
it was not declared constexpr on its first declaration  | it is not implicitly  
inline in this case   
  
### See also

[C documentation](../../c/language/inline.html "c/language/inline") for inline  
---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
