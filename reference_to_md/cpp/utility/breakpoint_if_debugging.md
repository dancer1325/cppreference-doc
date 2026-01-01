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
[exception](../error/exception.html "cpp/error/exception")  
[uncaught_exceptionuncaught_exceptions](../error/exception/uncaught_exception.html "cpp/error/uncaught exception")(until C++20*)` `(C++17)  
[exception_ptr](../error/exception_ptr.html "cpp/error/exception ptr")(C++11)  
[make_exception_ptr](../error/make_exception_ptr.html "cpp/error/make exception ptr")(C++11)  
[current_exception](../error/current_exception.html "cpp/error/current exception")(C++11)  
[rethrow_exception](../error/rethrow_exception.html "cpp/error/rethrow exception")(C++11)  
[nested_exception](../error/nested_exception.html "cpp/error/nested exception")(C++11)  
[throw_with_nested](../error/throw_with_nested.html "cpp/error/throw with nested")(C++11)  
[rethrow_if_nested](../error/rethrow_if_nested.html "cpp/error/rethrow if nested")(C++11)  
Exception handling failures  
[terminate](../error/terminate.html "cpp/error/terminate")  
[terminate_handler](../error/terminate_handler.html "cpp/error/terminate handler")  
[get_terminate](../error/get_terminate.html "cpp/error/get terminate")(C++11)  
[set_terminate](../error/set_terminate.html "cpp/error/set terminate")  
[bad_exception](../error/bad_exception.html "cpp/error/bad exception")  
[unexpected](../error/unexpected.html "cpp/error/unexpected")(until C++17*)  
[unexpected_handler](../error/exception/unexpected_handler.html "cpp/error/unexpected handler")(until C++17*)  
[get_unexpected](../error/exception/get_unexpected.html "cpp/error/get unexpected")(until C++17*)  
[set_unexpected](../error/exception/set_unexpected.html "cpp/error/set unexpected")(until C++17*)  
[Error numbers](../error.html#Error_numbers "cpp/error")  
[Error codes](../error/errno_macros.html "cpp/error/errno macros")  
[errno](../error/errno.html "cpp/error/errno")  
[Assertions](../error.html#Assertions "cpp/error")  
[assert](../error/assert.html "cpp/error/assert")  
  
| [Exception categories](../error.html#Exception_categories "cpp/error")  
---  
[logic_error](../error/logic_error.html "cpp/error/logic error")  
[invalid_argument](../error/invalid_argument.html "cpp/error/invalid argument")  
[domain_error](../error/domain_error.html "cpp/error/domain error")  
[length_error](../error/length_error.html "cpp/error/length error")  
[out_of_range](../error/out_of_range.html "cpp/error/out of range")  
[runtime_error](../error/runtime_error.html "cpp/error/runtime error")  
[range_error](../error/range_error.html "cpp/error/range error")  
[overflow_error](../error/overflow_error.html "cpp/error/overflow error")  
[underflow_error](../error/underflow_error.html "cpp/error/underflow error")  
[tx_exception](../error/tx_exception.html "cpp/error/tx exception")(TM TS)  
[System error](../error.html#System_error "cpp/error")  
[error_category](../error/error_category.html "cpp/error/error category")(C++11)  
[generic_category](../error/generic_category.html "cpp/error/generic category")(C++11)  
[system_category](../error/system_category.html "cpp/error/system category")(C++11)  
[error_condition](../error/error_condition.html "cpp/error/error condition")(C++11)  
[errc](../error/errc.html "cpp/error/errc")(C++11)  
[error_code](../error/error_code.html "cpp/error/error code")(C++11)  
[system_error](../error/system_error.html "cpp/error/system error")(C++11)  
[Stacktrace](../error.html#Stacktrace "cpp/error")  
[stacktrace_entry](stacktrace_entry.html "cpp/utility/stacktrace entry")(C++23)  
[basic_stacktrace](basic_stacktrace.html "cpp/utility/basic stacktrace")(C++23)  
[Debugging support](../error.html#Debugging_support "cpp/error")  
[is_debugger_present](is_debugger_present.html "cpp/utility/is debugger present")(C++26)  
**breakpoint_if_debugging**(C++26)  
[breakpoint](breakpoint.html "cpp/utility/breakpoint")(C++26)  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/error/navbar_content&action=edit)

Defined in header `[<debugging>](../header/debugging.html "cpp/header/debugging")` |  |   
---|---|---  
void breakpoint_if_debugging() noexcept; |  |  (since C++26)  
| |   
  
Conditional breakpoint: attempts to temporarily halt the execution of the program and transfer control to the debugger if it were able to determine that the debugger is present. Acts as a no-op otherwise. 

Formally, the behavior of this function is completely implementation-defined. Equivalent to if ([std::is_debugger_present](is_debugger_present.html)())  
[std::breakpoint](breakpoint.html)();. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/breakpoint_if_debugging&action=edit&section=1 "Edit section: Notes")] Notes

[Feature-test](feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_debugging`](../experimental/feature_test.html#cpp_lib_debugging "cpp/feature test") | [`202311L`](../compiler_support/26.html#cpp_lib_debugging_202311L "cpp/compiler support/26") | (C++26) | Debugging support library   
[`202403L`](../compiler_support/26.html#cpp_lib_debugging_202403L "cpp/compiler support/26") | (C++26) | Replaceable `std::is_debugger_present`  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/breakpoint_if_debugging&action=edit&section=2 "Edit section: Example")] Example

| This section is incomplete  
Reason: no example   
---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/breakpoint_if_debugging&action=edit&section=3 "Edit section: See also")] See also

[ is_debugger_present](is_debugger_present.html "cpp/utility/is debugger present")(C++26) |  checks whether a program is running under the control of a debugger   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/utility/dsc_is_debugger_present&action=edit)  
---|---  
[ breakpoint](breakpoint.html "cpp/utility/breakpoint")(C++26) |  pauses the running program when called   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/utility/dsc_breakpoint&action=edit)
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
