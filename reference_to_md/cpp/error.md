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
**Diagnostics library**  
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
  


**Diagnostics library**

| [Exception handling](error.html#Exception_handling "cpp/error")  
---  
[exception](error/exception.html "cpp/error/exception")  
[uncaught_exceptionuncaught_exceptions](error/exception/uncaught_exception.html "cpp/error/uncaught exception")(until C++20*)` `(C++17)  
[exception_ptr](error/exception_ptr.html "cpp/error/exception ptr")(C++11)  
[make_exception_ptr](error/make_exception_ptr.html "cpp/error/make exception ptr")(C++11)  
[current_exception](error/current_exception.html "cpp/error/current exception")(C++11)  
[rethrow_exception](error/rethrow_exception.html "cpp/error/rethrow exception")(C++11)  
[nested_exception](error/nested_exception.html "cpp/error/nested exception")(C++11)  
[throw_with_nested](error/throw_with_nested.html "cpp/error/throw with nested")(C++11)  
[rethrow_if_nested](error/rethrow_if_nested.html "cpp/error/rethrow if nested")(C++11)  
Exception handling failures  
[terminate](error/terminate.html "cpp/error/terminate")  
[terminate_handler](error/terminate_handler.html "cpp/error/terminate handler")  
[get_terminate](error/get_terminate.html "cpp/error/get terminate")(C++11)  
[set_terminate](error/set_terminate.html "cpp/error/set terminate")  
[bad_exception](error/bad_exception.html "cpp/error/bad exception")  
[unexpected](error/unexpected.html "cpp/error/unexpected")(until C++17*)  
[unexpected_handler](error/exception/unexpected_handler.html "cpp/error/unexpected handler")(until C++17*)  
[get_unexpected](error/exception/get_unexpected.html "cpp/error/get unexpected")(until C++17*)  
[set_unexpected](error/exception/set_unexpected.html "cpp/error/set unexpected")(until C++17*)  
[Error numbers](error.html#Error_numbers "cpp/error")  
[Error codes](error/errno_macros.html "cpp/error/errno macros")  
[errno](error/errno.html "cpp/error/errno")  
[Assertions](error.html#Assertions "cpp/error")  
[assert](error/assert.html "cpp/error/assert")  
  
| [Exception categories](error.html#Exception_categories "cpp/error")  
---  
[logic_error](error/logic_error.html "cpp/error/logic error")  
[invalid_argument](error/invalid_argument.html "cpp/error/invalid argument")  
[domain_error](error/domain_error.html "cpp/error/domain error")  
[length_error](error/length_error.html "cpp/error/length error")  
[out_of_range](error/out_of_range.html "cpp/error/out of range")  
[runtime_error](error/runtime_error.html "cpp/error/runtime error")  
[range_error](error/range_error.html "cpp/error/range error")  
[overflow_error](error/overflow_error.html "cpp/error/overflow error")  
[underflow_error](error/underflow_error.html "cpp/error/underflow error")  
[tx_exception](error/tx_exception.html "cpp/error/tx exception")(TM TS)  
[System error](error.html#System_error "cpp/error")  
[error_category](error/error_category.html "cpp/error/error category")(C++11)  
[generic_category](error/generic_category.html "cpp/error/generic category")(C++11)  
[system_category](error/system_category.html "cpp/error/system category")(C++11)  
[error_condition](error/error_condition.html "cpp/error/error condition")(C++11)  
[errc](error/errc.html "cpp/error/errc")(C++11)  
[error_code](error/error_code.html "cpp/error/error code")(C++11)  
[system_error](error/system_error.html "cpp/error/system error")(C++11)  
[Stacktrace](error.html#Stacktrace "cpp/error")  
[stacktrace_entry](utility/stacktrace_entry.html "cpp/utility/stacktrace entry")(C++23)  
[basic_stacktrace](utility/basic_stacktrace.html "cpp/utility/basic stacktrace")(C++23)  
[Debugging support](error.html#Debugging_support "cpp/error")  
[is_debugger_present](utility/is_debugger_present.html "cpp/utility/is debugger present")(C++26)  
[breakpoint_if_debugging](utility/breakpoint_if_debugging.html "cpp/utility/breakpoint if debugging")(C++26)  
[breakpoint](utility/breakpoint.html "cpp/utility/breakpoint")(C++26)  
  


## Contents

  * [1 Exception handling](error.html#Exception_handling)
    * [1.1 Capture and storage of exception objects](error.html#Capture_and_storage_of_exception_objects)
    * [1.2 Handling of failures in exception handling](error.html#Handling_of_failures_in_exception_handling)
    * [1.3 Handling of exception specification violations (until C++17)](error.html#Handling_of_exception_specification_violations_.28until_C.2B.2B17.29)
  * [2 Exception categories](error.html#Exception_categories)
  * [3 Error numbers](error.html#Error_numbers)
  * [4 System error (since C++11)](error.html#System_error_.28since_C.2B.2B11.29)
  * [5 Assertions](error.html#Assertions)
  * [6 Stacktrace (since C++23)](error.html#Stacktrace_.28since_C.2B.2B23.29)
  * [7 Debugging support (since C++26)](error.html#Debugging_support_.28since_C.2B.2B26.29)
  * [8 See also](error.html#See_also)

  
---  
  
### Exception handling

The header [`<exception>`](header/exception.html "cpp/header/exception") provides several classes and functions related to exception handling in C++ programs. 

Defined in header `[<exception>](header/exception.html "cpp/header/exception")`  
---  
[ exception](error/exception.html "cpp/error/exception") |  base class for exceptions thrown by the standard library components   
(class)   
  
#####  Capture and storage of exception objects   
  
[ uncaught_exceptionuncaught_exceptions](error/exception/uncaught_exception.html "cpp/error/uncaught exception")(removed in C++20*)(C++17) |  checks if exception handling is currently in progress   
(function)   
[ exception_ptr](error/exception_ptr.html "cpp/error/exception ptr")(C++11) |  shared pointer type for handling exception objects   
(typedef)   
[ make_exception_ptr](error/make_exception_ptr.html "cpp/error/make exception ptr")(C++11) |  creates an [std::exception_ptr](error/exception_ptr.html "cpp/error/exception ptr") from an exception object   
(function template)   
[ current_exception](error/current_exception.html "cpp/error/current exception")(C++11) |  captures the current exception in a [std::exception_ptr](error/exception_ptr.html "cpp/error/exception ptr")   
(function)   
[ rethrow_exception](error/rethrow_exception.html "cpp/error/rethrow exception")(C++11) |  throws the exception from an [std::exception_ptr](error/exception_ptr.html "cpp/error/exception ptr")   
(function)   
[ nested_exception](error/nested_exception.html "cpp/error/nested exception")(C++11) |  a mixin type to capture and store current exceptions   
(class)   
[ throw_with_nested](error/throw_with_nested.html "cpp/error/throw with nested")(C++11) |  throws its argument with [std::nested_exception](error/nested_exception.html "cpp/error/nested exception") mixed in   
(function template)   
[ rethrow_if_nested](error/rethrow_if_nested.html "cpp/error/rethrow if nested")(C++11) |  throws the exception from a [std::nested_exception](error/nested_exception.html "cpp/error/nested exception")   
(function template)   
  
#####  Handling of failures in exception handling   
  
Defined in header `[<exception>](header/exception.html "cpp/header/exception")`  
[ terminate](error/terminate.html "cpp/error/terminate") |  function called when exception handling fails   
(function)   
[ terminate_handler](error/terminate_handler.html "cpp/error/terminate handler") |  the type of the function called by [std::terminate](error/terminate.html "cpp/error/terminate")   
(typedef)   
[ get_terminate](error/get_terminate.html "cpp/error/get terminate")(C++11) |  obtains the current terminate_handler   
(function)   
[ set_terminate](error/set_terminate.html "cpp/error/set terminate") |  changes the function to be called by [std::terminate](error/terminate.html "cpp/error/terminate")   
(function)   
[ bad_exception](error/bad_exception.html "cpp/error/bad exception") |  exception thrown when [std::current_exception](error/current_exception.html "cpp/error/current exception") fails to copy the exception object   
(class)   
  
#####  Handling of exception specification violations (until C++17)  
  
[ unexpected](error/unexpected.html "cpp/error/unexpected")(deprecated in C++11)(removed in C++17) |  function called when dynamic exception specification is violated   
(function)   
[ unexpected_handler](error/exception/unexpected_handler.html "cpp/error/unexpected handler")(deprecated in C++11)(removed in C++17) |  the type of the function called by [std::unexpected](error/unexpected.html "cpp/error/unexpected")   
(typedef)   
[ get_unexpected](error/exception/get_unexpected.html "cpp/error/get unexpected")(deprecated in C++11)(removed in C++17) |  obtains the current `unexpected_handler`   
(function)   
[ set_unexpected](error/exception/set_unexpected.html "cpp/error/set unexpected")(deprecated in C++11)(removed in C++17) |  changes the function to be called by [std::unexpected](error/unexpected.html "cpp/error/unexpected")   
(function)   
  
### Exception categories

Several convenience classes are predefined in the header `<stdexcept>` to report particular error conditions. These classes can be divided into two categories: _logic_ errors and _runtime_ errors. Logic errors are a consequence of faulty logic within the program and may be preventable. Runtime errors are due to events beyond the scope of the program and cannot easily be predicted. 

Defined in header `[<stdexcept>](header/stdexcept.html "cpp/header/stdexcept")`  
---  
[ logic_error](error/logic_error.html "cpp/error/logic error") |  exception class to indicate violations of logical preconditions or class invariants   
(class)   
[ invalid_argument](error/invalid_argument.html "cpp/error/invalid argument") |  exception class to report invalid arguments   
(class)   
[ domain_error](error/domain_error.html "cpp/error/domain error") |  exception class to report domain errors   
(class)   
[ length_error](error/length_error.html "cpp/error/length error") |  exception class to report attempts to exceed maximum allowed size   
(class)   
[ out_of_range](error/out_of_range.html "cpp/error/out of range") |  exception class to report arguments outside of expected range   
(class)   
[ runtime_error](error/runtime_error.html "cpp/error/runtime error") |  exception class to indicate conditions only detectable at run time   
(class)   
[ range_error](error/range_error.html "cpp/error/range error") |  exception class to report range errors in internal computations   
(class)   
[ overflow_error](error/overflow_error.html "cpp/error/overflow error") |  exception class to report arithmetic overflows   
(class)   
[ underflow_error](error/underflow_error.html "cpp/error/underflow error") |  exception class to report arithmetic underflows   
(class)   
[ tx_exception](error/tx_exception.html "cpp/error/tx exception")(TM TS) |  exception class to cancel atomic transactions   
(class template)  
  
### Error numbers

Defined in header `[<cerrno>](header/cerrno.html "cpp/header/cerrno")`  
---  
[ errno](error/errno.html "cpp/error/errno") |  macro which expands to POSIX-compatible thread-local error number variable  
(macro variable)  
[ E2BIG, EACCES, ..., EXDEV](error/errno_macros.html "cpp/error/errno macros") |  macros for standard POSIX-compatible error conditions   
(macro constant)   
  
### System error (since C++11)

The header `<system_error>` defines types and functions used to report error conditions originating from the operating system, streams I/O, [std::future](thread/future.html "cpp/thread/future"), or other low-level APIs. 

Defined in header `[<system_error>](header/system_error.html "cpp/header/system error")`  
---  
[ error_category](error/error_category.html "cpp/error/error category")(C++11) |  base class for error categories   
(class)   
[ generic_category](error/generic_category.html "cpp/error/generic category")(C++11) |  identifies the generic error category   
(function)   
[ system_category](error/system_category.html "cpp/error/system category")(C++11) |  identifies the operating system error category   
(function)   
[ error_condition](error/error_condition.html "cpp/error/error condition")(C++11) |  holds a portable error code   
(class)   
[ errc](error/errc.html "cpp/error/errc")(C++11) |  the [std::error_condition](error/error_condition.html "cpp/error/error condition") enumeration listing all standard [`<cerrno>`](header/cerrno.html "cpp/header/cerrno") macro constants   
(class)   
[ error_code](error/error_code.html "cpp/error/error code")(C++11) |  holds a platform-dependent error code   
(class)   
[ system_error](error/system_error.html "cpp/error/system error")(C++11) |  exception class used to report conditions that have an error_code   
(class)   
  
### Assertions

Assertions help to implement checking of preconditions in programs. 

Defined in header `[<cassert>](header/cassert.html "cpp/header/cassert")`  
---  
[ assert](error/assert.html "cpp/error/assert") |  aborts the program if the user-specified condition is not true. May be disabled for release builds.   
(function macro)   
  
### [Stacktrace](utility/basic_stacktrace.html "cpp/utility/basic stacktrace") (since C++23)

Defined in header `[<stacktrace>](header/stacktrace.html "cpp/header/stacktrace")`  
---  
[ stacktrace_entry](utility/stacktrace_entry.html "cpp/utility/stacktrace entry")(C++23) |  representation of an evaluation in a stacktrace   
(class)   
[ basic_stacktrace](utility/basic_stacktrace.html "cpp/utility/basic stacktrace")(C++23) |  approximate representation of an invocation sequence consists of stacktrace entries   
(class template)   
  
### Debugging support (since C++26)

Defined in header `[<debugging>](header/debugging.html "cpp/header/debugging")`  
---  
[ breakpoint](utility/breakpoint.html "cpp/utility/breakpoint")(C++26) |  pauses the running program when called   
(function)   
[ breakpoint_if_debugging](utility/breakpoint_if_debugging.html "cpp/utility/breakpoint if debugging")(C++26) |  calls std::breakpoint if std::is_debugger_present returns true   
(function)   
[ is_debugger_present](utility/is_debugger_present.html "cpp/utility/is debugger present")(C++26) |  checks whether a program is running under the control of a debugger   
(function)   
  
### See also

[`static_assert` declaration](language/static_assert.html "cpp/language/static assert") (C++11) |  performs compile-time assertion checking  
---|---  
[C documentation](../c/error.html "c/error") for Error handling
