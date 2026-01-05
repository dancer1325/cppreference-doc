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
**The`main` function**  
[Modules](modules.html "cpp/language/modules") (C++20)  
[Contracts](contracts.html "cpp/language/contracts") (C++26)  
  


A program shall contain a global namespace function named main, which is the designated start of the program in hosted environment. It shall have one of the following forms:   
  
---  
int`**main() {**` body `**}**` |  (1)  |   
int`**main(**` int argc`**,**` char* argv`[]``**) {**` body `**}**` |  (2)  |   
int`**main(**` /* implementation-defined */`**) {**` body `**}**` |  (3)  |   
  
1) A `main` function running independently of environment-provided arguments.

2) A `main` function accepting environment-provided arguments.

The names of argc and argv are arbitrary, as well as the representation of the types of the parameters: int main(int ac, char** av) is equally valid.

3) A `main` function of implement-defined type, returning int.

The C++ standard recommends implementation-defined `main` functions to place the extra (optional) parameters after argv.

argc |  \-  |  Non-negative value representing the number of arguments passed to the program from the environment in which the program is run.   
---|---|---  
argv |  \-  |  Pointer to the first element of an array of argc + 1 pointers, of which the last one is null and the previous ones, if any, point to [null-terminated multibyte strings](../string/multibyte.html "cpp/string/multibyte") that represent the arguments passed to the program from the execution environment. If argv[0] is not a null pointer (or, equivalently, if argc > 0), it points to a string that represents the name used to invoke the program, or to an empty string.   
body |  \-  |  The body of the `main` function.   
  
## Contents

  * [1 Explanation](main_function.html#Explanation)
  * [2 Notes](main_function.html#Notes)
  * [3 Example](main_function.html#Example)
  * [4 References](main_function.html#References)
  * [5 Defect reports](main_function.html#Defect_reports)
  * [6 See also](main_function.html#See_also)

  
---  
  
### Explanation

The `main` function is called at program startup after [initialization](initialization.html "cpp/language/initialization") of the non-local objects with static [storage duration](storage_duration.html "cpp/language/storage duration"). It is the designated entry point to a program that is executed in [hosted](../freestanding.html "cpp/freestanding") environment (that is, with an operating system). The entry points to [freestanding](../freestanding.html "cpp/freestanding") programs (boot loaders, OS kernels, etc) are implementation-defined. 

The parameters of the two-parameter form of the `main` function allow arbitrary multibyte character strings to be passed from the execution environment (these are typically known as _command line arguments_), the pointers `[`argv[1]`, `argv[argc - 1]`]` point at the first characters in each of these strings. argv[0] (if non-null) is the pointer to the initial character of a null-terminated multibyte string that represents the name used to invoke the program itself (or an empty string "" if this is not supported by the execution environment). The strings are modifiable, although these modifications do not propagate back to the execution environment: they can be used, for example, with [std::strtok](../string/byte/strtok.html "cpp/string/byte/strtok"). The size of the array pointed to by argv is at least argc + 1, and the last element, argv[argc], is guaranteed to be a null pointer. 

The `main` function has the following several special properties: 

1) The body of the `main` function does not need to contain the [return statement](return.html "cpp/language/return"): if control reaches the end of `main` without encountering a return statement, the effect is that of executing return 0;.

2) Execution of the return (or the implicit return upon reaching the end of `main`) is equivalent to first leaving the function normally (which destroys the objects with automatic storage duration and evaluates any [postcondition assertions](function.html#Postcondition_assertions "cpp/language/function") of `main`(since C++26)) and then calling [std::exit](../utility/program/exit.html "cpp/utility/program/exit") with the same argument as the argument of the [return](return.html "cpp/language/return") ([std::exit](../utility/program/exit.html "cpp/utility/program/exit") then destroys static objects and terminates the program).

The `main` function has several restrictions (violation of which renders the program ill-formed): 

1) It cannot be [named](definition.html#Naming_a_function "cpp/language/definition") anywhere in the program

a) in particular, it cannot be called recursively

b) its address cannot be taken

c) it cannot be used in a [`typeid`](typeid.html "cpp/language/typeid") expression or a [`decltype`](decltype.html "cpp/language/decltype") specifier(since C++11)

2) It cannot be predefined and cannot be overloaded: effectively, the name `main` in the global namespace is reserved for functions (although it can be used to name classes, namespaces, enumerations, and any entity in a non-global namespace, except that an entity named `main` cannot be declared with C [language linkage](language_linkage.html "cpp/language/language linkage") in any namespace).

3) It cannot be defined as deleted or(since C++11) declared with any language linkage, [`constexpr`](constexpr.html "cpp/language/constexpr")(since C++11), [`consteval`](consteval.html "cpp/language/consteval")(since C++20), [`inline`](inline.html "cpp/language/inline"), or [`static`](static.html "cpp/language/static").

4) The return type of the `main` function cannot be deduced (auto main() {...} is not allowed).  | (since C++14)  
---|---  
5) The `main` function cannot be a [coroutine](coroutines.html "cpp/language/coroutines"). 6) The `main` function cannot attach to a named [module](modules.html "cpp/language/modules").  | (since C++20)  
  
### Notes

If the `main` function is defined with a [function try block](try.html#Function_try_block "cpp/language/try"), the exceptions thrown by the destructors of static objects (which are destroyed by the implied [std::exit](../utility/program/exit.html "cpp/utility/program/exit")) are not [caught](catch.html "cpp/language/catch") by it. 

The manner in which the arguments given at the OS command line are converted into the multibyte character arrays referenced by argv may involve implementation-defined processing: 

  * [Parsing C++ Command-Line Arguments](https://docs.microsoft.com/en-us/cpp/cpp/main-function-command-line-args) MSDN 
  * [Shell Introduction](https://pubs.opengroup.org/onlinepubs/9699919799/utilities/V3_chap02.html#tag_18_01) POSIX 



A very common implementation-defined form of main() has a third argument (in addition to argc and argv), of type char**, pointing at [an array of pointers to the execution environment variables](https://pubs.opengroup.org/onlinepubs/9699919799/functions/exec.html). 

### Example

Demonstrates how to inform a program about where to find its input and where to write its results.  
A possible invocation: ./convert table_in.dat table_out.dat

Run this code
    
    
    #include <cstdlib>
    #include <iomanip>
    #include <iostream>
     
    int main(int argc, char *argv[])
    {
        [std::cout](../io/cout.html) << "argc == " << argc << '\n';
     
        for (int ndx{}; ndx != argc; ++ndx)
            [std::cout](../io/cout.html) << "argv[" << ndx << "] == " << [std::quoted](../io/manip/quoted.html)(argv[ndx]) << '\n';
        [std::cout](../io/cout.html) << "argv[" << argc << "] == "
                  << static_cast<void*>(argv[argc]) << '\n';
     
        /* ... */
     
        return argc == 3 ? [EXIT_SUCCESS](../utility/program/EXIT_status.html) : [EXIT_FAILURE](../utility/program/EXIT_status.html); // optional return value
    }

Possible output: 
    
    
    argc == 3
    argv[0] == "./convert"
    argv[1] == "table_in.dat"
    argv[2] == "table_out.dat"
    argv[3] == 0

### References

Extended content  
---  
  
  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 6.9.3.1 main function [basic.start.main] 

  
  
### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 1003](https://cplusplus.github.io/CWG/issues/1003.html) | C++98  | supported parameter names of `main` were overly restricted  | all valid parameter  
names are supported   
[CWG 1886](https://cplusplus.github.io/CWG/issues/1886.html) | C++98  | the `main` function could be declared with a language linkage  | prohibited   
[CWG 2479](https://cplusplus.github.io/CWG/issues/2479.html) | C++20  | the `main` function could be declared consteval | prohibited   
[CWG 2811](https://cplusplus.github.io/CWG/issues/2811.html) | C++98  | whether the `main` function is used after [N3214](https://wg21.link/N3214) was unclear  | it is considered used when named   
  
### See also

[C documentation](../../c/language/main_function.html "c/language/main function") for `main` function  
---
