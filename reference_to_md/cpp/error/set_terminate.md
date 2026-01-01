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
**set_terminate**  
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
[std::terminate_handler](terminate_handler.html) set_terminate( [std::terminate_handler](terminate_handler.html) f ) throw(); |  | (until C++11)  
[std::terminate_handler](terminate_handler.html) set_terminate( [std::terminate_handler](terminate_handler.html) f ) noexcept; |  |  (since C++11)  
| |   
  
Makes f the new global terminate handler function and returns the previously installed [std::terminate_handler](terminate_handler.html "cpp/error/terminate handler"). f shall terminate execution of the program without returning to its caller, otherwise the behavior is undefined. 

This function is thread-safe. Every call to `std::set_terminate` _synchronizes-with_ (see [std::memory_order](../atomic/memory_order.html "cpp/atomic/memory order")) subsequent calls to `std::set_terminate` and [std::get_terminate](get_terminate.html "cpp/error/get terminate").  | (since C++11)  
---|---  
  
## Contents

  * [1 Parameters](set_terminate.html#Parameters)
  * [2 Return value](set_terminate.html#Return_value)
  * [3 Example](set_terminate.html#Example)
  * [4 See also](set_terminate.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/error/set_terminate&action=edit&section=1 "Edit section: Parameters")] Parameters

f  |  \-  |  pointer to function of type [std::terminate_handler](terminate_handler.html "cpp/error/terminate handler"), or null pointer   
---|---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/error/set_terminate&action=edit&section=2 "Edit section: Return value")] Return value

The previously-installed terminate handler, or a null pointer value if none was installed. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/error/set_terminate&action=edit&section=3 "Edit section: Example")] Example

Run this code
    
    
    #include <cstdlib>
    #include <exception>
    #include <iostream>
     
    int main()
    {
        std::set_terminate([]()
        {
            [std::cout](../io/cout.html) << "Unhandled exception\n" << [std::flush](../io/manip/flush.html);
            [std::abort](../utility/program/abort.html)();
        });
        throw 1;
    }

Possible output: 
    
    
    Unhandled exception
    bash: line 7:  7743 Aborted                 (core dumped) ./a.out

The terminate handler will also work for launched threads, so it can be used as an alternative to wrapping the thread function with a try/catch block. In the following example, since the exception is unhandled, [std::terminate](terminate.html "cpp/error/terminate") will be called. 

Run this code
    
    
    #include <iostream>
    #include <thread>
     
    void run()
    {
        throw [std::runtime_error](runtime_error.html)("Thread failure");
    }
     
    int main()
    {
        try
        {
            [std::thread](../thread/thread.html) t{run};
            t.join();
            return [EXIT_SUCCESS](../utility/program/EXIT_status.html);
        }
        catch (const [std::exception](exception.html)& ex)
        {
            [std::cerr](../io/cerr.html) << "Exception: " << ex.what() << '\n';
        }
        catch (...)
        {
            [std::cerr](../io/cerr.html) << "Unknown exception caught\n";
        }
        return [EXIT_FAILURE](../utility/program/EXIT_status.html);
    }

Possible output: 
    
    
    terminate called after throwing an instance of 'std::runtime_error'
      what():  Thread failure
    Aborted (core dumped)

With the introduction of the terminate handler, the exception thrown from the non-main thread can be analyzed, and exit can be gracefully performed. 

Run this code
    
    
    #include <iostream>
    #include <thread>
     
    class foo
    {
    public:
        foo() { [std::cerr](../io/cerr.html) << "foo::foo()\n"; }
        ~foo() { [std::cerr](../io/cerr.html) << "foo::~foo()\n"; }
    };
     
    // Static object, expecting destructor on exit
    foo f;
     
    void run()
    {
        throw [std::runtime_error](runtime_error.html)("Thread failure");
    }
     
    int main()
    {
        std::set_terminate([]()
        {
            try
            {
                [std::exception_ptr](exception_ptr.html) eptr{[std::current_exception](current_exception.html)()};
                if (eptr)
                {
                    [std::rethrow_exception](rethrow_exception.html)(eptr);
                }
                else
                {
                    [std::cerr](../io/cerr.html) << "Exiting without exception\n";
                }
            }
            catch (const [std::exception](exception.html)& ex)
            {
                [std::cerr](../io/cerr.html) << "Exception: " << ex.what() << '\n';
            }
            catch (...)
            {
                [std::cerr](../io/cerr.html) << "Unknown exception caught\n";
            }
            [std::exit](../utility/program/exit.html)([EXIT_FAILURE](../utility/program/EXIT_status.html));
        });
     
        [std::thread](../thread/thread.html) t{run};
        t.join();
    }

Output: 
    
    
    foo::foo()
    Exception: Thread failure
    foo::~foo()

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/error/set_terminate&action=edit&section=4 "Edit section: See also")] See also

[ terminate](terminate.html "cpp/error/terminate") |  function called when exception handling fails   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/error/dsc_terminate&action=edit)  
---|---  
[ get_terminate](get_terminate.html "cpp/error/get terminate")(C++11) |  obtains the current terminate_handler   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/error/dsc_get_terminate&action=edit)  
[ terminate_handler](terminate_handler.html "cpp/error/terminate handler") |  the type of the function called by [std::terminate](terminate.html "cpp/error/terminate")   
(typedef) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/error/dsc_terminate_handler&action=edit)
