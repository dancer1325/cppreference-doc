 
  


  
  
  
  
  
  
  
  
  
  
  


[Diagnostics library](../../error.html "cpp/error")

| [Exception handling](../../error.html#Exception_handling "cpp/error")  
---  
[exception](../exception.html "cpp/error/exception")  
[uncaught_exceptionuncaught_exceptions](../exception/uncaught_exception.html "cpp/error/uncaught exception")(until C++20*)` `(C++17)  
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
[unexpected_handler](../exception/unexpected_handler.html "cpp/error/unexpected handler")(until C++17*)  
[get_unexpected](../exception/get_unexpected.html "cpp/error/get unexpected")(until C++17*)  
[set_unexpected](../exception/set_unexpected.html "cpp/error/set unexpected")(until C++17*)  
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
  


[`std::error_code`](../error_code.html "cpp/error/error code")

Member functions  
---  
**error_code::error_code**  
[error_code::operator=](operator=.html "cpp/error/error code/operator=")  
[error_code::assign](assign.html "cpp/error/error code/assign")  
Modifiers  
[error_code::clear](clear.html "cpp/error/error code/clear")  
Observers  
[error_code::value](value.html "cpp/error/error code/value")  
[error_code::category](category.html "cpp/error/error code/category")  
[error_code::default_error_condition](default_error_condition.html "cpp/error/error code/default error condition")  
[error_code::message](message.html "cpp/error/error code/message")  
[error_code::operator bool](operator_bool.html "cpp/error/error code/operator bool")  
Non-member functions  
[operator==operator!=operator<operator<=>](operator_cmp.html "cpp/error/error code/operator cmp")(until C++20)(until C++20)(C++20)  
[operator<<](operator_ltlt.html "cpp/error/error code/operator ltlt")  
Helper classes  
[is_error_code_enum](is_error_code_enum.html "cpp/error/error code/is error code enum")  
[hash<std::error_code>](hash.html "cpp/error/error code/hash")  
  


error_code() noexcept; |  (1)  |  (since C++11)  
---|---|---  
error_code( int ec, const error_category& ecat ) noexcept; |  (2)  |  (since C++11)  
template< class ErrorCodeEnum >  
error_code( ErrorCodeEnum e ) noexcept; |  (3)  |  (since C++11)  
error_code( const error_code& other ) = default; |  (4)  |  (since C++11)   
(implicitly declared)  
error_code( error_code&& other ) = default; |  (5)  |  (since C++11)   
(implicitly declared)  
| |   
  
Constructs new error code. 

1) Constructs error code with default value. Equivalent to error_code(0, [std::system_category](../system_category.html)()).

2) Constructs error code with ec as the platform-dependent error code and ecat as the corresponding [error category](../error_category.html "cpp/error/error category").

3) Constructs error code from an error code enum e. Equivalent to make_error_code(e), where `make_error_code` is only found by [argument-dependent lookup](../../language/adl.html "cpp/language/adl"). This overload participates in overload resolution only if [std::is_error_code_enum](is_error_code_enum.html)<ErrorCodeEnum>::value is true.

4,5) Implicitly defined copy constructor and move constructor. Initializes the error code with the contents of the other.

### Parameters

other  |  \-  |  another error code to initialize with   
---|---|---  
ec  |  \-  |  platform dependent error code to construct with   
ecat  |  \-  |  error category corresponding to ec  
e  |  \-  |  error code enum to construct with   
  
### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3629](https://cplusplus.github.io/LWG/issue3629) | C++11  | only `std::make_error_code` overloads were used  | ADL-found overloads are used   
  
### See also

[ make_error_code(std::errc)](../errc/make_error_code.html "cpp/error/errc/make error code")(C++11) |  creates error code value for `errc` enum e   
(function)   
---|---  
[ make_error_code(std::io_errc)](../../io/io_errc/make_error_code.html "cpp/io/io errc/make error code")(C++11) |  constructs an iostream error code   
(function)   
[ make_error_code(std::future_errc)](../../thread/future_errc/make_error_code.html "cpp/thread/future errc/make error code")(C++11) |  constructs a future error code   
(function) 
