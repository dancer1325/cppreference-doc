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
**unexpected**(until C++17*)  
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
void unexpected(); |  |  (until C++11)  
[[noreturn]] void unexpected(); |  |  (deprecated in C++11)   
(removed in C++17)  
| |   
  
`std::unexpected()` is called by the C++ runtime when a [dynamic exception specification](../language/except_spec.html "cpp/language/except spec") is violated: an exception is thrown from a function whose exception specification forbids exceptions of this type. 

`std::unexpected()` may also be called directly from the program. 

In either case, `std::unexpected` calls the currently installed [std::unexpected_handler](exception/unexpected_handler.html "cpp/error/unexpected handler"). The default [std::unexpected_handler](exception/unexpected_handler.html "cpp/error/unexpected handler") calls [std::terminate](terminate.html "cpp/error/terminate"). 

If a destructor reset the unexpected handler during stack unwinding and the unwinding later led to `unexpected` being called, the handler that was installed at the end of the throw expression is the one that will be called (note: it was ambiguous whether re-throwing applied the new handlers).  | (until C++11)  
---|---  
If a destructor reset the unexpected handler during stack unwinding, it is unspecified which handler is called if the unwinding later led to `unexpected` being called.  | (since C++11)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/error/unexpected&action=edit&section=1 "Edit section: Exceptions")] Exceptions

Throw any exception thrown by the currently installed [std::unexpected_handler](exception/unexpected_handler.html "cpp/error/unexpected handler"). 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/error/unexpected&action=edit&section=2 "Edit section: Defect reports")] Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2111](https://cplusplus.github.io/LWG/issue2111) | C++11  | effect of calling [std::set_unexpected](exception/set_unexpected.html "cpp/error/set unexpected") during stack  
unwinding differs from C++98 and breaks some ABIs  | made unspecified   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/error/unexpected&action=edit&section=3 "Edit section: See also")] See also

[ unexpected](../utility/expected/unexpected.html "cpp/utility/expected/unexpected")(C++23) |  represented as an unexpected value   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/utility/expected/dsc_unexpected&action=edit)  
---|---  
[ unexpected_handler](exception/unexpected_handler.html "cpp/error/unexpected handler")(deprecated in C++11)(removed in C++17) |  the type of the function called by **std::unexpected**   
(typedef) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/error/dsc_unexpected_handler&action=edit)
