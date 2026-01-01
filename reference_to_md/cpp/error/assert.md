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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/navbar_content&action=edit)

[Diagnostics library](../error.html "cpp/error")

| [Exception handling](../error.html#Exception_handling "cpp/error")  
---  
[exception](exception.html "cpp/error/exception")  
[uncaught_exceptionuncaught_exceptions](exception/uncaught_exception.html "cpp/error/uncaught exception")(until C++20*)` `(C++17)  
[exception_ptr](exception_ptr.html "cpp/error/exception ptr")(C++11)  
[make_exception_ptr](make_exception_ptr.html "cpp/error/make exception ptr")(C++11)  
[current_exception](current_exception.html "cpp/error/current exception")(C++11)  
[rethrow_exception](rethrow_exception.html "cpp/error/rethrow exception")(C++11)  
[nested_exception](nested_exception.html "cpp/error/nested exception")(C++11)  
[throw_with_nested](throw_with_nested.html "cpp/error/throw with nested")(C++11)  
[rethrow_if_nested](rethrow_if_nested.html "cpp/error/rethrow if nested")(C++11)  
Exception handling failures  
[terminate](terminate.html "cpp/error/terminate")  
[terminate_handler](terminate_handler.html "cpp/error/terminate handler")  
[get_terminate](get_terminate.html "cpp/error/get terminate")(C++11)  
[set_terminate](set_terminate.html "cpp/error/set terminate")  
[bad_exception](bad_exception.html "cpp/error/bad exception")  
[unexpected](unexpected.html "cpp/error/unexpected")(until C++17*)  
[unexpected_handler](exception/unexpected_handler.html "cpp/error/unexpected handler")(until C++17*)  
[get_unexpected](exception/get_unexpected.html "cpp/error/get unexpected")(until C++17*)  
[set_unexpected](exception/set_unexpected.html "cpp/error/set unexpected")(until C++17*)  
[Error numbers](../error.html#Error_numbers "cpp/error")  
[Error codes](errno_macros.html "cpp/error/errno macros")  
[errno](errno.html "cpp/error/errno")  
[Assertions](../error.html#Assertions "cpp/error")  
**assert**  
  
| [Exception categories](../error.html#Exception_categories "cpp/error")  
---  
[logic_error](logic_error.html "cpp/error/logic error")  
[invalid_argument](invalid_argument.html "cpp/error/invalid argument")  
[domain_error](domain_error.html "cpp/error/domain error")  
[length_error](length_error.html "cpp/error/length error")  
[out_of_range](out_of_range.html "cpp/error/out of range")  
[runtime_error](runtime_error.html "cpp/error/runtime error")  
[range_error](range_error.html "cpp/error/range error")  
[overflow_error](overflow_error.html "cpp/error/overflow error")  
[underflow_error](underflow_error.html "cpp/error/underflow error")  
[tx_exception](tx_exception.html "cpp/error/tx exception")(TM TS)  
[System error](../error.html#System_error "cpp/error")  
[error_category](error_category.html "cpp/error/error category")(C++11)  
[generic_category](generic_category.html "cpp/error/generic category")(C++11)  
[system_category](system_category.html "cpp/error/system category")(C++11)  
[error_condition](error_condition.html "cpp/error/error condition")(C++11)  
[errc](errc.html "cpp/error/errc")(C++11)  
[error_code](error_code.html "cpp/error/error code")(C++11)  
[system_error](system_error.html "cpp/error/system error")(C++11)  
[Stacktrace](../error.html#Stacktrace "cpp/error")  
[stacktrace_entry](../utility/stacktrace_entry.html "cpp/utility/stacktrace entry")(C++23)  
[basic_stacktrace](../utility/basic_stacktrace.html "cpp/utility/basic stacktrace")(C++23)  
[Debugging support](../error.html#Debugging_support "cpp/error")  
[is_debugger_present](../utility/is_debugger_present.html "cpp/utility/is debugger present")(C++26)  
[breakpoint_if_debugging](../utility/breakpoint_if_debugging.html "cpp/utility/breakpoint if debugging")(C++26)  
[breakpoint](../utility/breakpoint.html "cpp/utility/breakpoint")(C++26)  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/error/navbar_content&action=edit)

Defined in header `[<cassert>](../header/cassert.html "cpp/header/cassert")` |  |   
---|---|---  
Disabled assertion |  |   
| (1) |   
#define assert(condition) ((void)0) |  |  (until C++26)  
#define assert(...) ((void)0) |  |  (since C++26)  
Enabled assertion |  |   
| (2) |   
#define assert(condition) /* unspecified */ |  |  (until C++26)  
#define assert(...) /* unspecified */ |  |  (since C++26)  
| |   
  
The definition of the macro `assert` depends on another macro, NDEBUG, which is not defined by the standard library. 

1) If NDEBUG is defined as a macro name at the point in the source code where [`<cassert>`](../header/cassert.html "cpp/header/cassert") or [`<assert.h>`](../header/cassert.html "cpp/header/cassert") is included, the assertion is disabled: `assert` does nothing.

2) Otherwise, the assertion is enabled:  `assert` checks if its argument (which must have scalar type): 

  * If the argument compares unequal to zero, there are no further effects. 
  * Otherwise, `assert` creates a diagnostic on the standard error stream and calls [std::abort()](../utility/program/abort.html "cpp/utility/program/abort"). 

| (until C++26)  
---|---  
`assert` puts a diagnostic test into programs and expands to an expression of type void. __VA_ARGS__ is evaluated and [contextually converted to bool](../language/implicit_cast.html#Contextual_conversions "cpp/language/implicit conversion"): 

  * If the evaluation yields true, there are no further effects. 
  * Otherwise, `assert` creates a diagnostic on the standard error stream and calls [std::abort()](../utility/program/abort.html "cpp/utility/program/abort"). 

| (since C++26)  
  
The diagnostic information has an implementation-defined format, but it always includes the following information: 

  * the text of condition

| (until C++26)  
---|---  
  
  * #__VA_ARGS__

| (since C++26)  
  
  * the source file name (i.e., [`__FILE__`](../preprocessor/replace.html#Predefined_macros "cpp/preprocessor/replace")) 
  * the source line number (i.e., [`__LINE__`](../preprocessor/replace.html#Predefined_macros "cpp/preprocessor/replace")) 
  * the name of the enclosing function (i.e., [`__func__`](../language/function.html#func "cpp/language/function")) 

The expression assert(E) is guaranteed to be a [constant subexpression](../language/constant_expression.html#Constant_subexpression "cpp/language/constant expression"), if either 

  * NDEBUG is defined at the point where `assert` is last defined or redefined, or 
  * E, [contextually converted to bool](../language/implicit_cast.html#Contextual_conversions "cpp/language/implicit conversion"), is a constant subexpression that evaluates to true. 

| (since C++11)  
---|---  
  
## Contents

  * [1 Parameters](assert.html#Parameters)
  * [2 Notes](assert.html#Notes)
  * [3 Example](assert.html#Example)
  * [4 Defect reports](assert.html#Defect_reports)
  * [5 See also](assert.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/error/assert&action=edit&section=1 "Edit section: Parameters")] Parameters

condition  |  \-  |  expression of scalar type   
---|---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/error/assert&action=edit&section=2 "Edit section: Notes")] Notes

Because `assert` is a [function-like macro](../preprocessor/replace.html "cpp/preprocessor/replace"), commas anywhere in the argument that are not protected by parentheses are interpreted as macro argument separators. Such commas are often found in template argument lists and list-initialization: 
    
    
    assert([std::is_same_v](../types/is_same.html)<int, int>);        // error: assert does not take two arguments
    assert(([std::is_same_v](../types/is_same.html)<int, int>));      // OK: one argument
    static_assert([std::is_same_v](../types/is_same.html)<int, int>); // OK: not a macro
     
    [std::complex](../numeric/complex.html)<double> c;
    assert(c == [std::complex](../numeric/complex.html)<double>{0, 0});   // error
    assert((c == [std::complex](../numeric/complex.html)<double>{0, 0})); // OK

| (until C++26)  
---|---  
  
There is no standardized interface to add an additional message to `assert` errors. A portable way to include one is to use a [comma operator](../language/operator_other.html#Built-in_comma_operator "cpp/language/operator other") provided it has not been [overloaded](../language/operators.html "cpp/language/operators"), or use `&&` with a string literal: 
    
    
    assert(("There are five lights", 2 + 2 == 5));
    assert(2 + 2 == 5 && "There are five lights");

The implementation of `assert` in [Microsoft CRT](https://learn.microsoft.com/en-us/cpp/c-runtime-library/reference/assert-macro-assert-wassert) does not conform to C++11 and later revisions, because its underlying function (`_wassert`) takes neither __func__ nor an equivalent replacement. 

Since C++20, the values needed for the diagnostic message can also be obtained from [`std::source_location::current()`](../utility/source_location/current.html "cpp/utility/source location/current"). 

Even though the change of `assert` in C23/C++26 is not formally a defect report, the C committee [recommends](https://www.open-std.org/jtc1/sc22/wg14/www/previous.html) implementations to backport the change to old modes. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/error/assert&action=edit&section=3 "Edit section: Example")] Example

Run this code
    
    
    #include <iostream>
    // uncomment to disable assert()
    // #define NDEBUG
    #include <cassert>
     
    // Use (void) to silence unused warnings.
    #define assertm(exp, msg) assert((void(msg), exp))
     
    int main()
    {
        assert(2 + 2 == 4);
        [std::cout](../io/cout.html) << "Checkpoint #1\n";
     
        assert((void("void helps to avoid 'unused value' warning"), 2 * 2 == 4));
        [std::cout](../io/cout.html) << "Checkpoint #2\n";
     
        assert((010 + 010 == 16) && "Yet another way to add an assert message");
        [std::cout](../io/cout.html) << "Checkpoint #3\n";
     
        assertm((2 + 2) % 3 == 1, "Success");
        [std::cout](../io/cout.html) << "Checkpoint #4\n";
     
        assertm(2 + 2 == 5, "Failed"); // assertion fails
        [std::cout](../io/cout.html) << "Execution continues past the last assert\n"; // No output
    }

Possible output: 
    
    
    Checkpoint #1
    Checkpoint #2
    Checkpoint #3
    Checkpoint #4
    main.cpp:23: int main(): Assertion `((void)"Failed", 2 + 2 == 5)' failed.
    Aborted

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/error/assert&action=edit&section=4 "Edit section: Defect reports")] Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2234](https://cplusplus.github.io/LWG/issue2234) | C++11  | `assert` could not be used in constant expression  | can be used   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/error/assert&action=edit&section=5 "Edit section: See also")] See also

[`contract_assert` statement](../language/contract_assert.html "cpp/language/contract assert") (C++26) |  verifies an internal condition during execution[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/language/dsc_contract_assert&action=edit)  
---|---  
[`static_assert` declaration](../language/static_assert.html "cpp/language/static assert") (C++11) |  performs compile-time assertion checking[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/language/dsc_static_assert&action=edit)  
[ abort](../utility/program/abort.html "cpp/utility/program/abort") |  causes abnormal program termination (without cleaning up)   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/utility/program/dsc_abort&action=edit)  
[C documentation](../../c/error/assert.html "c/error/assert") for assert
