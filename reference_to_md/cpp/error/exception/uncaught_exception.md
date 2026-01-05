[C++](../../../cpp.html "cpp")

[Compiler support](../../compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](../../freestanding.html "cpp/freestanding")  
[Language](../../language.html "cpp/language")  
[Standard library](../../standard_library.html "cpp/standard library")  
[Standard library headers](../../headers.html "cpp/header")  
[Named requirements](../../iterator/concepts.html "cpp/named req")  
[Feature test macros](../../experimental/feature_test.html "cpp/feature test") (C++20)  
[Language support library](../../utility.html#Language_support "cpp/utility")  
[Concepts library](../../concepts.html "cpp/concepts") (C++20)  
[Diagnostics library](../../error.html "cpp/error")  
[Memory management library](../../memory.html "cpp/memory")  
[Metaprogramming library](../../meta.html "cpp/meta") (C++11)  
[General utilities library](../../utility.html "cpp/utility")  
[Containers library](../../container.html "cpp/container")  
[Iterators library](../../iterator.html "cpp/iterator")  
[Ranges library](../../ranges.html "cpp/ranges") (C++20)  
[Algorithms library](../../algorithm.html "cpp/algorithm")  
[Strings library](../../string.html "cpp/string")  
[Text processing library](../../text.html "cpp/text")  
[Numerics library](../../numeric.html "cpp/numeric")  
[Date and time library](../../chrono.html "cpp/chrono")  
[Input/output library](../../io.html "cpp/io")  
[Filesystem library](../../filesystem.html "cpp/filesystem") (C++17)  
[Concurrency support library](../../atomic.html "cpp/thread") (C++11)  
[Execution control library](../../experimental/execution.html "cpp/execution") (C++26)  
[Technical specifications](../../experimental.html "cpp/experimental")  
[Symbols index](../../symbol_index.html "cpp/symbol index")  
[External libraries](../../links/libs.html "cpp/links/libs")  
  


[Diagnostics library](../../error.html "cpp/error")

| [Exception handling](../../error.html#Exception_handling "cpp/error")  
---  
[exception](../exception.html "cpp/error/exception")  
**uncaught_exception uncaught_exceptions**(until C++20*)` `(C++17)  
[exception_ptr](../exception_ptr.html "cpp/error/exception ptr")(C++11)  
[make_exception_ptr](../make_exception_ptr.html "cpp/error/make exception ptr")(C++11)  
[current_exception](../current_exception.html "cpp/error/current exception")(C++11)  
[rethrow_exception](../rethrow_exception.html "cpp/error/rethrow exception")(C++11)  
[nested_exception](../nested_exception.html "cpp/error/nested exception")(C++11)  
[throw_with_nested](../throw_with_nested.html "cpp/error/throw with nested")(C++11)  
[rethrow_if_nested](../rethrow_if_nested.html "cpp/error/rethrow if nested")(C++11)  
Exception handling failures  
[terminate](../terminate.html "cpp/error/terminate")  
[terminate_handler](../terminate_handler.html "cpp/error/terminate handler")  
[get_terminate](../get_terminate.html "cpp/error/get terminate")(C++11)  
[set_terminate](../set_terminate.html "cpp/error/set terminate")  
[bad_exception](../bad_exception.html "cpp/error/bad exception")  
[unexpected](../unexpected.html "cpp/error/unexpected")(until C++17*)  
[unexpected_handler](unexpected_handler.html "cpp/error/unexpected handler")(until C++17*)  
[get_unexpected](get_unexpected.html "cpp/error/get unexpected")(until C++17*)  
[set_unexpected](set_unexpected.html "cpp/error/set unexpected")(until C++17*)  
[Error numbers](../../error.html#Error_numbers "cpp/error")  
[Error codes](../errno_macros.html "cpp/error/errno macros")  
[errno](../errno.html "cpp/error/errno")  
[Assertions](../../error.html#Assertions "cpp/error")  
[assert](../assert.html "cpp/error/assert")  
  
| [Exception categories](../../error.html#Exception_categories "cpp/error")  
---  
[logic_error](../logic_error.html "cpp/error/logic error")  
[invalid_argument](../invalid_argument.html "cpp/error/invalid argument")  
[domain_error](../domain_error.html "cpp/error/domain error")  
[length_error](../length_error.html "cpp/error/length error")  
[out_of_range](../out_of_range.html "cpp/error/out of range")  
[runtime_error](../runtime_error.html "cpp/error/runtime error")  
[range_error](../range_error.html "cpp/error/range error")  
[overflow_error](../overflow_error.html "cpp/error/overflow error")  
[underflow_error](../underflow_error.html "cpp/error/underflow error")  
[tx_exception](../tx_exception.html "cpp/error/tx exception")(TM TS)  
[System error](../../error.html#System_error "cpp/error")  
[error_category](../error_category.html "cpp/error/error category")(C++11)  
[generic_category](../generic_category.html "cpp/error/generic category")(C++11)  
[system_category](../system_category.html "cpp/error/system category")(C++11)  
[error_condition](../error_condition.html "cpp/error/error condition")(C++11)  
[errc](../errc.html "cpp/error/errc")(C++11)  
[error_code](../error_code.html "cpp/error/error code")(C++11)  
[system_error](../system_error.html "cpp/error/system error")(C++11)  
[Stacktrace](../../error.html#Stacktrace "cpp/error")  
[stacktrace_entry](../../utility/stacktrace_entry.html "cpp/utility/stacktrace entry")(C++23)  
[basic_stacktrace](../../utility/basic_stacktrace.html "cpp/utility/basic stacktrace")(C++23)  
[Debugging support](../../error.html#Debugging_support "cpp/error")  
[is_debugger_present](../../utility/is_debugger_present.html "cpp/utility/is debugger present")(C++26)  
[breakpoint_if_debugging](../../utility/breakpoint_if_debugging.html "cpp/utility/breakpoint if debugging")(C++26)  
[breakpoint](../../utility/breakpoint.html "cpp/utility/breakpoint")(C++26)  
  


Defined in header `[<exception>](../../header/exception.html "cpp/header/exception")` |  |   
---|---|---  
| (1) |   
bool uncaught_exception() throw(); |  |  (until C++11)  
bool uncaught_exception() noexcept; |  |  (since C++11)   
(deprecated in C++17)   
(removed in C++20)  
int uncaught_exceptions() noexcept; |  (2) | (since C++17)   
(constexpr since C++26)  
| |   
  
1) Detects if the current thread has a live exception object, that is, an exception has been thrown or rethrown and not yet entered a matching catch clause, [std::terminate](../terminate.html "cpp/error/terminate") or [std::unexpected](../unexpected.html "cpp/error/unexpected"). In other words, `std::uncaught_exception` detects if [stack unwinding](../../language/throw.html#Stack_unwinding "cpp/language/throw") is currently in progress.

2) Detects how many exceptions in the current thread have been thrown or rethrown and not yet entered their matching catch clauses.

Sometimes it's safe to throw an exception even while std::uncaught_exception() == true(until C++17) std::uncaught_exceptions() > 0(since C++17). For example, if [stack unwinding](../../language/throw.html#Stack_unwinding "cpp/language/throw") causes an object to be destructed, the destructor for that object could run code that throws an exception as long as the exception is caught by some catch block before escaping the destructor. 

## Contents

  * [1 Parameters](uncaught_exception.html#Parameters)
  * [2 Return value](uncaught_exception.html#Return_value)
  * [3 Notes](uncaught_exception.html#Notes)
  * [4 Example](uncaught_exception.html#Example)
  * [5 Defect reports](uncaught_exception.html#Defect_reports)
  * [6 See also](uncaught_exception.html#See_also)
  * [7 External links](uncaught_exception.html#External_links)

  
---  
  
### Parameters

(none) 

### Return value

1) true if stack unwinding is currently in progress in this thread, false otherwise.

2) The number of uncaught exception objects in the current thread.

### Notes

An example where int-returning `uncaught_exceptions` is used is the [boost.log](https://www.boost.org/doc/libs/release/libs/log/doc/html/index.html) library: the expression BOOST_LOG(logger) << foo(); first creates a guard object and records the number of uncaught exceptions in its constructor. The output is performed by the guard object's destructor unless foo() throws (in which case the number of uncaught exceptions in the destructor is greater than what the constructor observed). 

[`std::experimental::scope_fail`](../../experimental/scope_fail.html "cpp/experimental/scope fail") and [`std::experimental::scope_success`](../../experimental/scope_success.html "cpp/experimental/scope success") in LFTS v3 rely on the functionality of `uncaught_exceptions`, because their destructors need to do different things that depend on whether is called during stack unwinding. 

[Feature-test](../../utility/feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_uncaught_exceptions`](../../experimental/feature_test.html#cpp_lib_uncaught_exceptions "cpp/feature test") | [`201411L`](../../compiler_support/17.html#cpp_lib_uncaught_exceptions_201411L "cpp/compiler support/17") | (C++17) | `std::uncaught_exceptions`  
[`__cpp_lib_constexpr_exceptions`](../../experimental/feature_test.html#cpp_lib_constexpr_exceptions "cpp/feature test") | [`202411L`](../../compiler_support/26.html#cpp_lib_constexpr_exceptions_202411L "cpp/compiler support/26") | (C++26) | constexpr for exception types   
  
### Example

Run this code
    
    
    #include <exception>
    #include <iostream>
    #include <stdexcept>
     
    struct Foo
    {
        char id{'?'};
        int count = std::uncaught_exceptions();
     
        ~Foo()
        {
            count == std::uncaught_exceptions()
                ? [std::cout](../../io/cout.html) << id << ".~Foo() called normally\n"
                : [std::cout](../../io/cout.html) << id << ".~Foo() called during stack unwinding\n";
        }
    };
     
    int main()
    {
        Foo f{'f'};
     
        try
        {
            Foo g{'g'};
            [std::cout](../../io/cout.html) << "Exception thrown\n";
            throw [std::runtime_error](../runtime_error.html)("test exception");
        }
        catch (const [std::exception](../exception.html)& e)
        {
            [std::cout](../../io/cout.html) << "Exception caught: " << e.what() << '\n';
        }
    }

Possible output: 
    
    
    Exception thrown
    g.~Foo() called during stack unwinding
    Exception caught: test exception
    f.~Foo() called normally

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 70](https://cplusplus.github.io/LWG/issue70) | C++98  | the exception specification of `uncaught_exception()` was missing  | specified as `throw()`  
  
### See also

[ terminate](../terminate.html "cpp/error/terminate") |  function called when exception handling fails   
(function)   
---|---  
[ exception_ptr](../exception_ptr.html "cpp/error/exception ptr")(C++11) |  shared pointer type for handling exception objects   
(typedef)   
[ current_exception](../current_exception.html "cpp/error/current exception")(C++11) |  captures the current exception in a [std::exception_ptr](../exception_ptr.html "cpp/error/exception ptr")   
(function)   
  
### External links

1\.  | [GOTW issue 47: Uncaught Exceptions](http://www.gotw.ca/gotw/047.htm)  
---|---  
2\.  | [Rationale for `std::uncaught_exceptions`](https://wg21.link/n4152) (N4125) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
