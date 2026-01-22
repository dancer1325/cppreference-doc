 
  


  
  
  
  
  
  
  
  
  
  
  


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
  


[`std::errc`](../errc.html "cpp/error/errc")

Non-member functions  
---  
[make_error_code](make_error_code.html "cpp/error/errc/make error code")  
[make_error_condition](make_error_condition.html "cpp/error/errc/make error condition")  
Helper classes  
**is_error_condition_enum**  
  


Defined in header `[<system_error>](../../header/system_error.html "cpp/header/system error")` |  |   
---|---|---  
template<>  
struct is_error_condition_enum<[std::errc](../errc.html)> : [std::true_type](../../types/integral_constant.html); |  |  (since C++11)  
| |   
  
Specifies that [std::errc](../errc.html "cpp/error/errc") is an error condition enum. This enables implicit conversion to [std::error_condition](../error_condition.html "cpp/error/error condition"). 

## Contents

  * [1 Inherited from std::integral_constant](is_error_condition_enum.html#Inherited_from_std::integral_constant)
    * [1.1 Member constants](is_error_condition_enum.html#Member_constants)
    * [1.2 Member functions](is_error_condition_enum.html#Member_functions)
    * [1.3 Member types](is_error_condition_enum.html#Member_types)
    * [1.4 See also](is_error_condition_enum.html#See_also)

  
---  
  
##  Inherited from [ std::integral_constant](../../types/integral_constant.html "cpp/types/integral constant")

###  Member constants

value[static] |  true   
(public static member constant)  
---|---  
  
###  Member functions

operator bool |  converts the object to bool, returns value   
(public member function)  
---|---  
operator()(C++14) |  returns value   
(public member function)  
  
###  Member types

Type  |  Definition   
---|---  
`value_type` |  bool  
`type` |  [std::integral_constant](../../types/integral_constant.html)<bool, value>  
  
### See also

[ is_error_condition_enum](../error_condition/is_error_condition_enum.html "cpp/error/error condition/is error condition enum")(C++11) |  identifies an enumeration as an [std::error_condition](../error_condition.html "cpp/error/error condition")   
(class template)   
---|---
