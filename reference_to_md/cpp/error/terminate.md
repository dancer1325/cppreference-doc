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
**terminate**  
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
[assert](assert.html "cpp/error/assert")  
  
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

Defined in header `[<exception>](../header/exception.html "cpp/header/exception")` |  |   
---|---|---  
void terminate(); |  | (until C++11)  
[[noreturn]] void terminate() noexcept; |  |  (since C++11)  
| |   
  
`std::terminate()` is called by the C++ runtime when the program cannot continue for any of the following reasons: 

1) An [exception is thrown](../language/throw.html "cpp/language/throw") and not caught (it is implementation-defined whether any stack unwinding is done in this case).

2) A function directly invoked by the exception handling mechanism while handling an exception that has not yet been caught exits via an exception (e.g. a destructor of some local object, or a copy constructor constructing a catch-clause parameter).

3) The constructor or the destructor of a static or thread-local(since C++11) object throws an exception.

4) A function registered with [std::atexit](../utility/program/atexit.html "cpp/utility/program/atexit") or [std::at_quick_exit](../utility/program/at_quick_exit.html "cpp/utility/program/at quick exit")(since C++11) throws an exception.

5) A [dynamic exception specification](../language/except_spec.html "cpp/language/except spec") is violated and the default handler for [std::unexpected](unexpected.html "cpp/error/unexpected") is executed. 6) A non-default handler for [std::unexpected](unexpected.html "cpp/error/unexpected") throws an exception that violates the previously violated dynamic exception specification, if the specification does not include [std::bad_exception](bad_exception.html "cpp/error/bad exception"). | (until C++17)  
---|---  
7) A [noexcept specification](../language/noexcept_spec.html "cpp/language/noexcept spec") is violated (it is implementation-defined whether any stack unwinding is done in this case). 8) [std::nested_exception::rethrow_nested](nested_exception/rethrow_nested.html "cpp/error/nested exception/rethrow nested") is called for an object that isn't holding a captured exception. 9) An exception is thrown from the initial function of [std::thread](../thread/thread.html "cpp/thread/thread"). 10) A joinable [std::thread](../thread/thread.html "cpp/thread/thread") is destroyed or assigned to. 11) [std::condition_variable::wait](../thread/condition_variable/wait.html "cpp/thread/condition variable/wait"), [std::condition_variable::wait_until](../thread/condition_variable/wait_until.html "cpp/thread/condition variable/wait until"), or [std::condition_variable::wait_for](../thread/condition_variable/wait_for.html "cpp/thread/condition variable/wait for") fails to reach its postcondition (e.g. if relocking the mutex throws). | (since C++11)  
---|---  
12) A function invoked by a [parallel algorithm](../algorithm.html "cpp/algorithm") exits via an uncaught exception and the [execution policy](../algorithm/execution_policy_tag_t.html "cpp/algorithm/execution policy tag t") specifies termination. | (since C++17)  
---|---  
  
`std::terminate()` may also be called directly from the program. 

When `std::terminate` is called due to a thrown exception, an implicit try/catch handler is considered active. Thus, calling [std::current_exception](current_exception.html "cpp/error/current exception") will return the thrown exception. 

In any case, `std::terminate` calls the currently installed [std::terminate_handler](terminate_handler.html "cpp/error/terminate handler"). The default [std::terminate_handler](terminate_handler.html "cpp/error/terminate handler") calls [std::abort](../utility/program/abort.html "cpp/utility/program/abort"). 

If a destructor reset the terminate handler during stack unwinding and the unwinding later led to `terminate` being called, the handler that was installed at the end of the throw expression is the one that will be called. (note: it was ambiguous whether re-throwing applied the new handlers)  | (until C++11)  
---|---  
If a destructor reset the terminate handler during stack unwinding, it is unspecified which handler is called if the unwinding later led to `terminate` being called.  | (since C++11)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/error/terminate&action=edit&section=1 "Edit section: Notes")] Notes

If the handler mechanism is not wanted, e.g. because it requires atomic operations which may bloat binary size, a direct call to [std::abort](../utility/program/abort.html "cpp/utility/program/abort") is preferred when terminating the program abnormally. 

Some compiler intrinsics, e.g. [`__builtin_trap`](https://gcc.gnu.org/onlinedocs/gcc/Other-Builtins.html) (gcc, clang, and icc) or [`__debugbreak`](https://docs.microsoft.com/en-us/cpp/intrinsics/debugbreak?view=msvc-160) (msvc), can be used to terminate the program as fast as possible. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/error/terminate&action=edit&section=2 "Edit section: Defect reports")] Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2111](https://cplusplus.github.io/LWG/issue2111) | C++11  | effect of calling [std::set_terminate](set_terminate.html "cpp/error/set terminate") during stack  
unwinding differs from C++98 and breaks some ABIs  | made unspecified   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/error/terminate&action=edit&section=3 "Edit section: See also")] See also

[ terminate_handler](terminate_handler.html "cpp/error/terminate handler") |  the type of the function called by **std::terminate**   
(typedef) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/error/dsc_terminate_handler&action=edit)  
---|---  
[ abort](../utility/program/abort.html "cpp/utility/program/abort") |  causes abnormal program termination (without cleaning up)   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/utility/program/dsc_abort&action=edit)  
[ breakpoint](../utility/breakpoint.html "cpp/utility/breakpoint")(C++26) |  pauses the running program when called   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/utility/dsc_breakpoint&action=edit)
