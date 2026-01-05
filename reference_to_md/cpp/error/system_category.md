
  


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
**system_category**(C++11)  
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
  


Defined in header `[<system_error>](../header/system_error.html "cpp/header/system error")` |  |   
---|---|---  
const [std::error_category](error_category.html)& system_category() noexcept; |  |  (since C++11)  
| |   
  
Obtains a reference to the static error category object for errors reported by the operating system. The object is required to override the virtual function [std::error_category::name()](error_category/name.html "cpp/error/error category/name") to return a pointer to the string "system". It is also required to override the virtual function [std::error_category::default_error_condition()](error_category/default_error_condition.html "cpp/error/error category/default error condition") to map the error codes that match POSIX [errno](errno.html "cpp/error/errno") values to [std::generic_category](generic_category.html "cpp/error/generic category"). 

## Contents

  * [1 Parameters](system_category.html#Parameters)
  * [2 Return value](system_category.html#Return_value)
  * [3 Notes](system_category.html#Notes)
  * [4 Example](system_category.html#Example)
  * [5 See also](system_category.html#See_also)

  
---  
  
### Parameters

(none) 

### Return value

A reference to the static object of unspecified runtime type, derived from [std::error_category](error_category.html "cpp/error/error category"). 

### Notes

On Windows, `system_category()` typically maps some [Windows error codes](https://learn.microsoft.com/en-us/windows/win32/debug/system-error-codes#system-error-codes) to POSIX ones. On POSIX, `system_category()` tends to be equivalent to [std::generic_category()](generic_category.html "cpp/error/generic category") except for the name. 

### Example

Run this code
    
    
    #include <iomanip>
    #include <iostream>
    #include <string>
    #include <system_error>
     
    int main()
    {
        for (int const code : {[EDOM](errno_macros.html), 10001})
        {
            const [std::error_condition](error_condition.html) econd =
                std::system_category().default_error_condition(code);
     
            [std::cout](../io/cout.html) << "Category: " << econd.category().name() << '\n'
                      << "Value:    " << econd.value() << '\n'
                      << "Message:  " << econd.message() << "\n\n";
        }
    }

Possible output: 
    
    
    Category: generic
    Value:    33
    Message:  Numerical argument out of domain
     
    Category: system
    Value:    10001
    Message:  Unknown error 10001

### See also

[ generic_category](generic_category.html "cpp/error/generic category")(C++11) |  identifies the generic error category   
(function)   
---|---  
[ errc](errc.html "cpp/error/errc")(C++11) |  the [std::error_condition](error_condition.html "cpp/error/error condition") enumeration listing all standard [`<cerrno>`](../header/cerrno.html "cpp/header/cerrno") macro constants   
(class) 
