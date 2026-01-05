
  


[Diagnostics library](../error.html "cpp/error")

| [Exception handling](../error.html#Exception_handling "cpp/error")  
---  
[exception](exception.html "cpp/error/exception")  
[uncaught_exceptionuncaught_exceptions](exception/uncaught_exception.html "cpp/error/uncaught exception")(until C++20*)` `(C++17)  
[exception_ptr](exception_ptr.html "cpp/error/exception ptr")(C++11)  
[make_exception_ptr](make_exception_ptr.html "cpp/error/make exception ptr")(C++11)  
**current_exception**(C++11)  
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
[std::exception_ptr](exception_ptr.html) current_exception() noexcept; |  | (since C++11)   
(constexpr since C++26)  
| |   
  
If called during exception handling (typically, in a catch clause), captures the current exception object and creates an [std::exception_ptr](exception_ptr.html "cpp/error/exception ptr") that holds either a copy or a reference to that exception object (depending on the implementation). The referenced object remains valid at least as long as there is an `exception_ptr` object that refers to it. 

If the implementation of this function requires a call to new and the call fails, the returned pointer will hold a reference to an instance of [std::bad_alloc](../memory/new/bad_alloc.html "cpp/memory/new/bad alloc"). 

If the implementation of this function requires copying the captured exception object and its copy constructor throws an exception, the returned pointer will hold a reference to the exception thrown. If the copy constructor of the thrown exception object also throws, the returned pointer may hold a reference to an instance of [std::bad_exception](bad_exception.html "cpp/error/bad exception") to break the endless loop. 

If the function is called when no exception is being handled, an empty [std::exception_ptr](exception_ptr.html "cpp/error/exception ptr") is returned. 

This function can be called in a [std::terminate_handler](terminate_handler.html "cpp/error/terminate handler") to retrieve the exception which has provoked the invocation of [std::terminate](terminate.html "cpp/error/terminate"). 

## Contents

  * [1 Return value](current_exception.html#Return_value)
  * [2 Notes](current_exception.html#Notes)
  * [3 Example](current_exception.html#Example)
  * [4 See also](current_exception.html#See_also)

  
---  
  
### Return value

An instance of [std::exception_ptr](exception_ptr.html "cpp/error/exception ptr") holding a reference to the exception object, or a copy of the exception object, or to an instance of [std::bad_alloc](../memory/new/bad_alloc.html "cpp/memory/new/bad alloc") or to an instance of [std::bad_exception](bad_exception.html "cpp/error/bad exception"). 

### Notes

On the implementations that follow [Itanium C++ ABI](https://itanium-cxx-abi.github.io/cxx-abi/abi.html) (GCC, Clang, etc), exceptions are allocated on the heap when thrown (except for [std::bad_alloc](../memory/new/bad_alloc.html "cpp/memory/new/bad alloc") in some cases), and this function simply creates the smart pointer referencing the previously-allocated object, On MSVC, exceptions are allocated on stack when thrown, and this function performs the heap allocation and copies the exception object. 

On Windows in managed CLR environments [[1]](https://learn.microsoft.com/en-us/cpp/dotnet/exceptions-in-cpp-cli), the implementation will store a [std::bad_exception](bad_exception.html "cpp/error/bad exception") when the current exception is a managed exception ([[2]](https://github.com/microsoft/STL/blob/65aab97a8e75e7ba409002e518ed799006dfb285/stl/src/excptptr.cpp#L367)). Note that catch(...) catches also managed exceptions: 
    
    
    #include <exception>
     
    int main()
    {
        try
        {
            throw gcnew System::Exception("Managed exception");
        }
        catch (...)
        {
            [std::exception_ptr](exception_ptr.html) ex = std::current_exception();
            try
            {
                [std::rethrow_exception](rethrow_exception.html)(ex);
            }
            catch ([std::bad_exception](bad_exception.html) const &)
            {
                // This will be printed.
                [std::cout](../io/cout.html) << "Bad exception" << [std::endl](../io/manip/endl.html);
            }
        }
    }

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
                [std::rethrow_exception](rethrow_exception.html)(eptr);
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
            eptr = std::current_exception(); // capture
        }
     
        handle_eptr(eptr);
     
    } // destructor for std::out_of_range called here, when the eptr is destructed

Possible output: 
    
    
    Caught exception: 'basic_string::at: __n (which is 1) >= this->size() (which is 0)'

### See also

[ exception_ptr](exception_ptr.html "cpp/error/exception ptr")(C++11) |  shared pointer type for handling exception objects   
(typedef)   
---|---  
[ rethrow_exception](rethrow_exception.html "cpp/error/rethrow exception")(C++11) |  throws the exception from an [std::exception_ptr](exception_ptr.html "cpp/error/exception ptr")   
(function)   
[ make_exception_ptr](make_exception_ptr.html "cpp/error/make exception ptr")(C++11) |  creates an [std::exception_ptr](exception_ptr.html "cpp/error/exception ptr") from an exception object   
(function template)   
[ uncaught_exceptionuncaught_exceptions](exception/uncaught_exception.html "cpp/error/uncaught exception")(removed in C++20*)(C++17) |  checks if exception handling is currently in progress   
(function) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
