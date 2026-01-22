 
  


  
  
  
  
  
  
  
  
  
  
  


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
  


[`std::system_error`](../system_error.html "cpp/error/system error")

Member functions  
---  
**system_error::system_error**  
[system_error::operator=](operator=.html "cpp/error/system error/operator=")  
[system_error::code](code.html "cpp/error/system error/code")  
[system_error::what](what.html "cpp/error/system error/what")  
  


system_error( [std::error_code](../error_code.html) ec ); |  (1)  |  (since C++11)  
---|---|---  
system_error( [std::error_code](../error_code.html) ec, const [std::string](../../string/basic_string.html)& what_arg ); |  (2)  |  (since C++11)  
system_error( [std::error_code](../error_code.html) ec, const char* what_arg ); |  (2)  |  (since C++11)  
system_error( int ev, const [std::error_category](../error_category.html)& ecat ); |  (3)  |  (since C++11)  
system_error( int ev, const [std::error_category](../error_category.html)& ecat,  
const [std::string](../../string/basic_string.html)& what_arg ); |  (4)  |  (since C++11)  
system_error( int ev, const [std::error_category](../error_category.html)& ecat,  
const char* what_arg ); |  (4)  |  (since C++11)  
system_error( const system_error& other ) noexcept; |  (5)  |  (since C++11)  
| |   
  
Constructs new system error object. 

1) Constructs with error code ec.

2) Constructs with error code ec and explanation string what_arg. The string returned by [what()](what.html "cpp/error/system error/what") is guaranteed to contain what_arg as a substring.

3) Constructs with underlying error code ev and associated error category ecat.

4) Constructs with underlying error code ev, associated error category ecat and explanatory string what_arg. The string returned by [what()](what.html "cpp/error/system error/what") is guaranteed to contain what_arg as a substring (assuming that it doesn't contain an embedded null character).

5) Copy constructor. Initializes the contents with those of other. If *this and other both have dynamic type `std::system_error` then [std::strcmp](../../string/byte/strcmp.html)(what(), other.what()) == 0.

### Parameters

ec  |  \-  |  error code   
---|---|---  
ev  |  \-  |  underlying error code in the enumeration associated with ecat  
ecat  |  \-  |  the category of error   
what_arg  |  \-  |  explanatory string   
other  |  \-  |  another `system_error` to copy   
  
### Example

Demonstrates how to create a `system_error` exception from an [errno](../errno.html "cpp/error/errno") value.

Run this code
    
    
    #include <iostream>
    #include <system_error>
     
    int main()
    {
        try
        {
            throw [std::system_error](../system_error.html)([EDOM](../errno_macros.html), [std::generic_category](../generic_category.html)(), "FIX ME");
        }
        catch (const [std::system_error](../system_error.html)& ex)
        {
            [std::cout](../../io/cout.html) << "code:    [" << ex.code() << "]\n"
                         "message: [" << ex.code().message() << "]\n"
                         "what:    [" << ex.what() << "]\n";
        }
    }

Possible output: 
    
    
    code:    [generic:33]
    message: [Numerical argument out of domain]
    what:    [FIX ME: Numerical argument out of domain]
