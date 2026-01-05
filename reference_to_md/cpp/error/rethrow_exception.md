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
  


[Diagnostics library](../error.html "cpp/error")

| [Exception handling](../error.html#Exception_handling "cpp/error")  
---  
[exception](exception.html "cpp/error/exception")  
[uncaught_exceptionuncaught_exceptions](exception/uncaught_exception.html "cpp/error/uncaught exception")(until C++20*)` `(C++17)  
[exception_ptr](exception_ptr.html "cpp/error/exception ptr")(C++11)  
[make_exception_ptr](make_exception_ptr.html "cpp/error/make exception ptr")(C++11)  
[current_exception](current_exception.html "cpp/error/current exception")(C++11)  
**rethrow_exception**(C++11)  
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
  


Defined in header `[<exception>](../header/exception.html "cpp/header/exception")` |  |   
---|---|---  
[[noreturn]] void rethrow_exception( [std::exception_ptr](exception_ptr.html) p ); |  | (since C++11)   
(constexpr since C++26)  
| |   
  
Throws the previously captured exception object referred-to by the exception pointer p, or a copy of that object. 

It is unspecified whether a copy is made. If a copy is made, the storage for it is allocated in an unspecified way. 

The behavior is undefined if p is null. 

## Contents

  * [1 Parameters](rethrow_exception.html#Parameters)
  * [2 Exceptions](rethrow_exception.html#Exceptions)
  * [3 Notes](rethrow_exception.html#Notes)
  * [4 Example](rethrow_exception.html#Example)
  * [5 See also](rethrow_exception.html#See_also)

  
---  
  
### Parameters

p  |  \-  |  non-null [std::exception_ptr](exception_ptr.html "cpp/error/exception ptr")  
---|---|---  
  
### Exceptions

The exception object referred-to by p if no copy is made. 

Otherwise, a copy of such exception object if the implementation successfully copied the exception object. 

Otherwise, [std::bad_alloc](../memory/new/bad_alloc.html "cpp/memory/new/bad alloc") or the exception thrown when copying the exception object, if allocation or copying fails, respectively. 

### Notes

Before [P1675R2](https://wg21.link/P1675R2), `rethrow_exception` was not allowed to copy the exception object, which is unimplementable on some platforms where exception objects are allocated on the stack. 

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_constexpr_exceptions`](../experimental/feature_test.html#cpp_lib_constexpr_exceptions "cpp/feature test") | [`202411L`](../compiler_support/26.html#cpp_lib_constexpr_exceptions_202411L "cpp/compiler support/26") | (C++26) | constexpr for exception types   
  
### Example



Run this code
    
    
    #include <exception>
    #include <iostream>
    #include <stdexcept>
    #include <string>
     
    void handle_eptr([std::exception_ptr](exception_ptr.html) eptr) // passing by value is OK
    {
        try
        {
            if (eptr)
                std::rethrow_exception(eptr);
        }
        catch(const [std::exception](exception.html)& e)
        {
            [std::cout](../io/cout.html) << "Caught exception: '" << e.what() << "'\n";
        }
    }
     
    int main()
    {
        [std::exception_ptr](exception_ptr.html) eptr;
     
        try
        {
            [[maybe_unused]]
            char ch = [std::string](../string/basic_string.html)().at(1); // this generates a std::out_of_range
        }
        catch(...)
        {
            eptr = [std::current_exception](current_exception.html)(); // capture
        }
     
        handle_eptr(eptr);
     
    } // destructor for std::out_of_range called here, when the eptr is destructed

Possible output: 
    
    
    Caught exception: 'basic_string::at: __n (which is 1) >= this->size() (which is 0)'

### See also

[ exception_ptr](exception_ptr.html "cpp/error/exception ptr")(C++11) |  shared pointer type for handling exception objects   
(typedef)   
---|---  
[ current_exception](current_exception.html "cpp/error/current exception")(C++11) |  captures the current exception in a [std::exception_ptr](exception_ptr.html "cpp/error/exception ptr")   
(function) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
