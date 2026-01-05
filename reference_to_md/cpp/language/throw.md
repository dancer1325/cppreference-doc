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
| **`throw`-expression**  
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
  
| [Lambda expressions](lambda.html "cpp/language/lambda") (C++11)  
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
**`throw`-expression**  
  
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
  


[ Exceptions](exceptions.html "cpp/language/exceptions")

[try block](try.html "cpp/language/try")  
---  
**Throwing exceptions**  
[Handling exceptions](catch.html "cpp/language/catch")  
Exception specification  
[noexcept specification](noexcept_spec.html "cpp/language/noexcept spec") (C++11)  
[dynamic specification](except_spec.html "cpp/language/except spec") (until C++17*)  
[noexcept operator](noexcept.html "cpp/language/noexcept") (C++11)  
  


Throwing an [exception](exceptions.html "cpp/language/exceptions") transfers control to a [handler](catch.html "cpp/language/catch"). 

An exception can be thrown from [throw expressions](throw.html#throw_expressions), the following contexts may also throw exceptions: 

  * [allocation functions](../memory/new/operator_new.html "cpp/memory/new/operator new")
  * [`dynamic_cast`](dynamic_cast.html "cpp/language/dynamic cast")
  * [`typeid`](typeid.html "cpp/language/typeid")
  * [new expressions](new.html "cpp/language/new")
  * [standard library](../standard_library.html "cpp/standard library") functions 



## Contents

  * [1 Exception object](throw.html#Exception_object)
    * [1.1 Constructing and destructing exception objects](throw.html#Constructing_and_destructing_exception_objects)
  * [2 throw expressions](throw.html#throw_expressions)
  * [3 Stack unwinding](throw.html#Stack_unwinding)
  * [4 Notes](throw.html#Notes)
  * [5 Keywords](throw.html#Keywords)
  * [6 Example](throw.html#Example)
  * [7 Defect reports](throw.html#Defect_reports)
  * [8 References](throw.html#References)
  * [9 See also](throw.html#See_also)

  
---  
  
### Exception object

Throwing an exception initializes an object with dynamic [storage duration](storage_duration.html "cpp/language/storage duration"), called the _exception object_. 

If the type of the exception object would be one of the following types, the program is ill-formed: 

  * an [incomplete type](type-id.html#Incomplete_type "cpp/language/type")
  * an [abstract class type](abstract_class.html "cpp/language/abstract class")
  * a pointer to an incomplete type other than (possibly cv-qualified) void



#### Constructing and destructing exception objects

Given the type of the exception object as `T`: 

  * Let obj be an lvalue of type const T, the [copy-initialization](copy_initialization.html "cpp/language/copy initialization") of an object of type `T` from obj must be well-formed. 
  * If `T` is a class type: 



    

  * The selected [constructor](initializer_list.html "cpp/language/constructor") is [odr-used](definition.html#ODR-use "cpp/language/definition"). 
  * The [destructor](destructor.html "cpp/language/destructor") of `T` is [potentially invoked](destructor.html#Potentially-invoked_constructor "cpp/language/destructor"). 



The memory for the exception object is allocated in an unspecified way. The only guarantee is that the storage will never be allocated by global [allocation functions](../memory/new/operator_new.html "cpp/memory/new/operator new"). 

If a [handler](catch.html "cpp/language/catch") exits by [rethrowing](throw.html#throw_expressions), control is passed to another handler for the same exception object. The exception object is not destructed in this case. 

When the last remaining active handler for the exception exits by any means other than rethrowing, the exception object is destroyed and the implementation may deallocate the memory for the temporary object in an unspecified way. The destruction occurs immediately after the destruction of the object declared in the “parameter list” in the handler.  | (until C++11)  
---|---  
The points of potential destruction for the exception object are: 

  * When an active handler for the exception exits by any means other than rethrowing, immediately after the destruction of the object (if any) declared in the “parameter list” in the handler. 
  * When an object of type [std::exception_ptr](../error/exception_ptr.html "cpp/error/exception ptr") that refers to the exception object is destroyed, before the destructor of [std::exception_ptr](../error/exception_ptr.html "cpp/error/exception ptr") returns. 

Among all points of potential destruction for the exception object, there is an unspecified last one where the exception object is destroyed. All other points [happen before](multithread.html "cpp/language/multithread") that last one. The implementation may then deallocate the memory for the exception object in an unspecified way.  | (since C++11)  
  
### throw expressions  
  
---  
`**throw**` expression |  (1)  |   
`**throw**` |  (2)  |   
  
1) Throws a new exception.

2) Rethrows the exception currently being handled.

expression |  \-  |  the expression used to construct the exception object   
---|---|---  
  
  
When a new exception is thrown, its exception object is determined as follows: 

  1. The [array-to-pointer](implicit_cast.html#Array-to-pointer_conversion "cpp/language/implicit conversion") and [function-to-pointer](implicit_cast.html#Function-to-pointer_conversion "cpp/language/implicit conversion") standard conversions are performed on expression ﻿. 
  2. Let ex be the conversion result: 



    

    

  * The type of the exception object is determined by removing any top-level cv-qualifiers from the type of ex. 
  * The exception object is [copy-initialized](copy_initialization.html "cpp/language/copy initialization") from ex. 



If a program attempts to rethrow an exception when no exception is presently being handled, [std::terminate](../error/terminate.html "cpp/error/terminate") will be invoked. Otherwise, the exception is reactivated with the existing exception object (no new exception object is created), and the exception is no longer considered to be caught. 
    
    
    try
    {
        // throwing a new exception 123
        throw 123;
    }
    catch (...) // catch all exceptions
    {
        // respond (partially) to exception 123
        throw; // pass the exception to some other handler
    }

### Stack unwinding

Once the exception object is constructed, the control flow works backwards (up the call stack) until it reaches the start of a [try block](try.html "cpp/language/try"), at which point the parameters of all associated handlers are compared, in order of appearance, with the type of the exception object to find a [match](catch.html#Matching_exceptions "cpp/language/catch"). If no match is found, the control flow continues to unwind the stack until the next try block, and so on. If a match is found, the control flow jumps to the matching handler. 

As the control flow moves up the call stack, destructors are invoked for all objects with [automatic storage duration](storage_duration.html "cpp/language/storage duration") that are constructed, but not yet destroyed, since the corresponding try block was entered, in reverse order of completion of their constructors. If an exception is thrown from a destructor of a local variable or of a temporary used in a [return](return.html "cpp/language/return") statement, the destructor for the object returned from the function is also invoked. 

If an exception is thrown from a constructor or (rare) from a destructor of an object (regardless of the object's storage duration), destructors are called for all fully-constructed non-static non-variant members and base classes, in reverse order of completion of their constructors. Variant members of [union-like classes](union.html#Union-like_classes "cpp/language/union") are only destroyed in the case of unwinding from constructor, and if the active member changed between initialization and destruction, the behavior is undefined. 

If a delegating constructor exits with an exception after the non-delegating constructor successfully completed, the destructor for this object is called.  | (since C++11)  
---|---  
  
If the exception is thrown from a constructor that is invoked by a [new-expression](new.html "cpp/language/new"), the matching [deallocation function](../memory/new/operator_delete.html "cpp/memory/new/operator delete") is called, if available. 

This process is called _stack unwinding_. 

If any function that is called directly by the stack unwinding mechanism, after initialization of the exception object and before the start of the exception handler, exits with an exception, [std::terminate](../error/terminate.html "cpp/error/terminate") is called. Such functions include [destructors](destructor.html "cpp/language/destructor") of objects with automatic storage duration whose scopes are exited, and the copy constructor of the exception object that is called (if not [elided](copy_elision.html "cpp/language/copy elision")) to initialize catch-by-value arguments. 

If an exception is thrown and not caught, including exceptions that escape the initial function of [std::thread](../thread/thread.html "cpp/thread/thread"), the main function, and the constructor or destructor of any static or thread-local objects, then [std::terminate](../error/terminate.html "cpp/error/terminate") is called. It is implementation-defined whether any stack unwinding takes place for uncaught exceptions. 

### Notes

When rethrowing exceptions, the second form must be used to avoid object slicing in the (typical) case where exception objects use inheritance: 
    
    
    try
    {
        [std::string](../string/basic_string.html)("abc").substr(10); // throws std::out_of_range
    }
    catch (const [std::exception](../error/exception.html)& e)
    {
        [std::cout](../io/cout.html) << e.what() << '\n';
    //  throw e; // copy-initializes a new exception object of type std::exception
        throw;   // rethrows the exception object of type std::out_of_range
    }

The throw-expression is classified as [prvalue expression](value_category.html "cpp/language/value category") of type void. Like any other expression, it may be a sub-expression in another expression, most commonly in the [conditional operator](operator_other.html#Conditional_operator "cpp/language/operator other"): 
    
    
    double f(double d)
    {
        return d > 1e7 ? throw [std::overflow_error](../error/overflow_error.html)("too big") : d;
    }
     
    int main()
    {
        try
        {
            [std::cout](../io/cout.html) << f(1e10) << '\n';
        }
        catch (const [std::overflow_error](../error/overflow_error.html)& e)
        {
            [std::cout](../io/cout.html) << e.what() << '\n';
        }
    }

### Keywords

[`throw`](../keyword/throw.html "cpp/keyword/throw")

### Example

Run this code
    
    
    #include <iostream>
    #include <stdexcept>
     
    struct A
    {
        int n;
     
        A(int n = 0): n(n) { [std::cout](../io/cout.html) << "A(" << n << ") constructed successfully\n"; }
        ~A() { [std::cout](../io/cout.html) << "A(" << n << ") destroyed\n"; }
    };
     
    int foo()
    {
        throw [std::runtime_error](../error/runtime_error.html)("error");
    }
     
    struct B
    {
        A a1, a2, a3;
     
        B() try : a1(1), a2(foo()), a3(3)
        {
            [std::cout](../io/cout.html) << "B constructed successfully\n";
        }
        catch(...)
        {
            [std::cout](../io/cout.html) << "B::B() exiting with exception\n";
        }
     
        ~B() { [std::cout](../io/cout.html) << "B destroyed\n"; }
    };
     
    struct C : A, B
    {
        C() try
        {
            [std::cout](../io/cout.html) << "C::C() completed successfully\n";
        }
        catch(...)
        {
            [std::cout](../io/cout.html) << "C::C() exiting with exception\n";
        }
     
        ~C() { [std::cout](../io/cout.html) << "C destroyed\n"; }
    };
     
    int main () try
    {
        // creates the A base subobject
        // creates the a1 member of B
        // fails to create the a2 member of B
        // unwinding destroys the a1 member of B
        // unwinding destroys the A base subobject
        C c;
    }
    catch (const [std::exception](../error/exception.html)& e)
    {
        [std::cout](../io/cout.html) << "main() failed to create C with: " << e.what();
    }

Output: 
    
    
    A(0) constructed successfully
    A(1) constructed successfully
    A(1) destroyed
    B::B() exiting with exception
    A(0) destroyed
    C::C() exiting with exception
    main() failed to create C with: error

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[CWG 499](https://cplusplus.github.io/CWG/issues/499.html) | C++98  | an array with unknown bound could not be thrown because  
its type is incomplete, but an exception object can be  
created from the decayed pointer without any problem  | apply the type completion  
requirement to the  
exception object instead   
[CWG 668](https://cplusplus.github.io/CWG/issues/668.html) | C++98  | [std::terminate](../error/terminate.html "cpp/error/terminate") was not called if an exception is thrown  
from the destructor of a local non-automatic object  | call [std::terminate](../error/terminate.html "cpp/error/terminate")  
in this case   
[CWG 1863](https://cplusplus.github.io/CWG/issues/1863.html) | C++11  | copy constructor was not required for move-only  
exception objects when thrown, but copying allowed later  | copy constructor required   
[CWG 1866](https://cplusplus.github.io/CWG/issues/1866.html) | C++98  | variant members were leaked on stack unwinding from constructor  | variant members destroyed   
[CWG 2176](https://cplusplus.github.io/CWG/issues/2176.html) | C++98  | throw from a local variable destructor  
could skip return value destructor  | function return value  
added to unwinding   
[CWG 2699](https://cplusplus.github.io/CWG/issues/2699.html) | C++98  | throw "EX" would actually throw char* rather than const char* | corrected   
[CWG 2711](https://cplusplus.github.io/CWG/issues/2711.html) | C++98  | the source of the copy-initialization of  
the exception object was not specified  | copy-initialized  
from expression  
[CWG 2775](https://cplusplus.github.io/CWG/issues/2775.html) | C++98  | the exception object copy-initialization requirement was unclear  | made clear   
[CWG 2854](https://cplusplus.github.io/CWG/issues/2854.html) | C++98  | the storage duration of exception objects was unclear  | made clear   
[P1825R0](https://wg21.link/P1825R0) | C++11  | implicit move from parameters was forbidden in `throw` | allowed   
  
### References

  * C++23 standard (ISO/IEC 14882:2024): 



    

  * 7.6.18 Throwing an exception [expr.throw] 



    

  * 14.2 Throwing an exception [except.throw] 



  * C++20 standard (ISO/IEC 14882:2020): 



    

  * 7.6.18 Throwing an exception [expr.throw] 



    

  * 14.2 Throwing an exception [except.throw] 



  * C++17 standard (ISO/IEC 14882:2017): 



    

  * 8.17 Throwing an exception [expr.throw] 



    

  * 18.1 Throwing an exception [except.throw] 



  * C++14 standard (ISO/IEC 14882:2014): 



    

  * 15.1 Throwing an exception [except.throw] 



  * C++11 standard (ISO/IEC 14882:2011): 



    

  * 15.1 Throwing an exception [except.throw] 



  * C++03 standard (ISO/IEC 14882:2003): 



    

  * 15.1 Throwing an exception [except.throw] 



  * C++98 standard (ISO/IEC 14882:1998): 



    

  * 15.1 Throwing an exception [except.throw] 



### See also

  * [copy elision](copy_elision.html "cpp/language/copy elision")
  * [try block](try.html "cpp/language/try")
  * [handler](catch.html "cpp/language/catch")
  * [noexcept specifier](noexcept_spec.html "cpp/language/noexcept spec")
  * [Exception handling](../error.html#Exception_handling "cpp/error")



  * [dynamic exception specifications](except_spec.html "cpp/language/except spec")

| (until C++17)  
---|---
