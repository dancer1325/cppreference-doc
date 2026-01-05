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
  


**Exceptions**

[try block](try.html "cpp/language/try")  
---  
[Throwing exceptions](throw.html "cpp/language/throw")  
[Handling exceptions](catch.html "cpp/language/catch")  
Exception specification  
[noexcept specification](noexcept_spec.html "cpp/language/noexcept spec") (C++11)  
[dynamic specification](except_spec.html "cpp/language/except spec") (until C++17*)  
[noexcept operator](noexcept.html "cpp/language/noexcept") (C++11)  
  


Exception handling provides a way of transferring control and information from some point in the execution of a program to a handler associated with a point previously passed by the execution (in other words, exception handling transfers control up the call stack). 

Evaluating a [throw expression](throw.html#throw_expressions "cpp/language/throw") will throw an exception. Exceptions can also be thrown in [other contexts](throw.html "cpp/language/throw"). 

In order for an exception to be caught, the throw expression has to be inside a [try block](try.html "cpp/language/try"), and the try block has to contain a [handler](catch.html "cpp/language/catch") that matches the type of the exception object. 

When declaring a function, the following specification(s) may be provided to limit the types of the exceptions a function may throw: 

  * [dynamic exception specifications](except_spec.html "cpp/language/except spec")

| (until C++17)  
---|---  
  
  * [noexcept specifications](noexcept_spec.html "cpp/language/noexcept spec")

| (since C++11)  
---|---  
  
Errors that arise during exception handling are handled by [std::terminate](../error/terminate.html "cpp/error/terminate") and [std::unexpected](../error/unexpected.html "cpp/error/unexpected")(until C++17). 

## Contents

  * [1 Usage](exceptions.html#Usage)
    * [1.1 Error handling](exceptions.html#Error_handling)
    * [1.2 Exception safety](exceptions.html#Exception_safety)
  * [2 Exception objects](exceptions.html#Exception_objects)
  * [3 Notes](exceptions.html#Notes)
  * [4 External links](exceptions.html#External_links)

  
---  
  
### Usage

While throw expression can be used to transfer control to an arbitrary block of code up the execution stack, for arbitrary reasons (similar to [std::longjmp](../utility/program/longjmp.html "cpp/utility/program/longjmp")), its intended usage is error handling. 

#### Error handling

Throwing an exception is used to signal errors from functions, where "errors" are typically limited to only the following[[1]](exceptions.html#cite_note-1)[[2]](exceptions.html#cite_note-2)[[3]](exceptions.html#cite_note-3): 

  1. Failures to meet the postconditions, such as failing to produce a valid return value object. 
  2. Failures to meet the preconditions of another function that must be called. 
  3. (for non-private member functions) Failures to (re)establish a class invariant. 



In particular, this implies that the failures of constructors (see also [RAII](raii.html "cpp/language/raii")) and most operators should be reported by throwing exceptions. 

In addition, so-called _wide contract_ functions use exceptions to indicate unacceptable inputs, for example, [std::basic_string::at](../string/basic_string/at.html "cpp/string/basic string/at") has no preconditions, but throws an exception to indicate index out of range. 

#### Exception safety

After the error condition is reported by a function, additional guarantees may be provided with regards to the state of the program. The following four levels of exception guarantee are generally recognized[[4]](exceptions.html#cite_note-4)[[5]](exceptions.html#cite_note-5)[[6]](exceptions.html#cite_note-6), which are strict supersets of each other: 

  1. _Nothrow (or nofail) exception guarantee_ — the function never throws exceptions. Nothrow (errors are reported by other means or concealed) is expected of [destructors](destructor.html "cpp/language/destructor") and other functions that may be called during stack unwinding. The [destructors](destructor.html "cpp/language/destructor") are [`noexcept`](noexcept.html "cpp/language/noexcept") by default.(since C++11) Nofail (the function always succeeds) is expected of swaps, [move constructors](move_constructor.html "cpp/language/move constructor"), and other functions used by those that provide strong exception guarantee. 
  2. _Strong exception guarantee_ — If the function throws an exception, the state of the program is rolled back to the state just before the function call (for example, [std::vector::push_back](../container/vector/push_back.html "cpp/container/vector/push back")). 
  3. _Basic exception guarantee_ — If the function throws an exception, the program is in a valid state. No resources are leaked, and all objects' invariants are intact. 
  4. _No exception guarantee_ — If the function throws an exception, the program may not be in a valid state: resource leaks, memory corruption, or other invariant-destroying errors may have occurred. 



Generic components may, in addition, offer _exception-neutral guarantee_ : if an exception is thrown from a template parameter (e.g. from the `Compare` function object of [std::sort](../algorithm/sort.html "cpp/algorithm/sort") or from the constructor of `T` in [std::make_shared](../memory/shared_ptr/make_shared.html "cpp/memory/shared ptr/make shared")), it is propagated, unchanged, to the caller. 

### Exception objects

While objects of any complete type and cv pointers to void may be thrown as exception objects, all standard library functions throw unnamed objects by value, and the types of those objects are derived (directly or indirectly) from [std::exception](../error/exception.html "cpp/error/exception"). User-defined exceptions usually follow this pattern.[[7]](exceptions.html#cite_note-7)[[8]](exceptions.html#cite_note-8)[[9]](exceptions.html#cite_note-9)

To avoid unnecessary copying of the exception object and object slicing, the best practice for handlers is to catch by reference.[[10]](exceptions.html#cite_note-10)[[11]](exceptions.html#cite_note-11)[[12]](exceptions.html#cite_note-12)[[13]](exceptions.html#cite_note-13)

### Notes

Feature-test macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_constexpr_exceptions`](../experimental/feature_test.html#cpp_constexpr_exceptions "cpp/feature test") | [`202411L`](../compiler_support/26.html#cpp_constexpr_exceptions_202411L "cpp/compiler support/26") | (C++26) | constexpr exceptions   
  
### External links

  1. [↑](exceptions.html#cite_ref-1) H. Sutter (2004) ["When and How to Use Exceptions"](https://www.drdobbs.com/when-and-how-to-use-exceptions/184401836) in Dr. Dobb's
  2. [↑](exceptions.html#cite_ref-2) H. Sutter, A. Alexandrescu (2004), "C++ Coding Standards", Item 70
  3. [↑](exceptions.html#cite_ref-3) C++ Core Guidelines [I.10: Use exceptions to signal a failure to perform a required task](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#Ri-except)
  4. [↑](exceptions.html#cite_ref-4) B. Stroustrup (2000), "The C++ Programming Language" [Appendix E](https://stroustrup.com/3rd_safe.pdf)
  5. [↑](exceptions.html#cite_ref-5) H. Sutter (2000) "Exceptional C++"
  6. [↑](exceptions.html#cite_ref-6) D. Abrahams (2001) ["Exception Safety in Generic Components"](https://www.boost.org/community/exception_safety.html)
  7. [↑](exceptions.html#cite_ref-7) D. Abrahams (2001) ["Error and Exception Handling"](https://www.boost.org/community/error_handling.html)
  8. [↑](exceptions.html#cite_ref-8) isocpp.org Super-FAQ ["What should I throw?"](https://isocpp.org/wiki/faq/exceptions#what-to-throw)
  9. [↑](exceptions.html#cite_ref-9) C++ Core Guidelines [E.14: Use purpose-designed user-defined types as exceptions (not built-in types)](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#Re-exception-types)
  10. [↑](exceptions.html#cite_ref-10) C++ Core Guidelines [E.15: Throw by value, catch exceptions from a hierarchy by reference](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#Re-exception-ref)
  11. [↑](exceptions.html#cite_ref-11) S. Meyers (1996) "More Effective C++" Item 13
  12. [↑](exceptions.html#cite_ref-12) isocpp.org Super-FAQ ["What should I catch?"](https://isocpp.org/wiki/faq/exceptions#what-to-catch)
  13. [↑](exceptions.html#cite_ref-13) H. Sutter, A. Alexandrescu (2004) "C++ Coding Standards" Item 73

  
---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
