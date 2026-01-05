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
[rethrow_exception](rethrow_exception.html "cpp/error/rethrow exception")(C++11)  
[nested_exception](nested_exception.html "cpp/error/nested exception")(C++11)  
[throw_with_nested](throw_with_nested.html "cpp/error/throw with nested")(C++11)  
**rethrow_if_nested**(C++11)  
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
template< class E >  
void rethrow_if_nested( const E& e ); |  | (since C++11)   
(constexpr since C++26)  
| |   
  
If `E` is not a polymorphic class type, or if [std::nested_exception](nested_exception.html "cpp/error/nested exception") is an inaccessible or ambiguous base class of `E`, there is no effect. 

Otherwise, performs 
    
    
    if (auto p = dynamic_cast<const [std::nested_exception](nested_exception.html)*>([std::addressof](../memory/addressof.html)(e)))
        p->rethrow_nested();

## Contents

  * [1 Parameters](rethrow_if_nested.html#Parameters)
  * [2 Notes](rethrow_if_nested.html#Notes)
  * [3 Possible implementation](rethrow_if_nested.html#Possible_implementation)
  * [4 Example](rethrow_if_nested.html#Example)
  * [5 See also](rethrow_if_nested.html#See_also)

  
---  
  
### Parameters

e  |  \-  |  the exception object to rethrow   
---|---|---  
  
### Notes

Unlike many related functions, this function is _not_ intended to be called with a [std::exception_ptr](exception_ptr.html) but rather an actual exception reference. 

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_constexpr_exceptions`](../experimental/feature_test.html#cpp_lib_constexpr_exceptions "cpp/feature test") | [`202411L`](../compiler_support/26.html#cpp_lib_constexpr_exceptions_202411L "cpp/compiler support/26") | (C++26) | constexpr for exception types   
  
### Possible implementation
    
    
    namespace details
    {
        template<class E>
        struct can_dynamic_cast
            : [std::integral_constant](../types/integral_constant.html)<bool,
                  [std::is_polymorphic](../types/is_polymorphic.html)<E>::value &&
                  (![std::is_base_of](../types/is_base_of.html)<[std::nested_exception](nested_exception.html), E>::value || 
                    [std::is_convertible](../types/is_convertible.html)<E*, [std::nested_exception](nested_exception.html)*>::value)
              > {};
     
        template<class T>
        void rethrow_if_nested_impl(const T& e, [std::true_type](../types/integral_constant.html))
        {
            if (auto nep = dynamic_cast<const [std::nested_exception](nested_exception.html)*>([std::addressof](../memory/addressof.html)(e)))
                nep->rethrow_nested();
        }
     
        template<class T>
        void rethrow_if_nested_impl(const T&, [std::false_type](../types/integral_constant.html)) {}
    }
     
    template<class T>
    void rethrow_if_nested(const T& t)
    {
        details::rethrow_if_nested_impl(t, details::can_dynamic_cast<T>());
    }  
  
---  
  
### Example



Demonstrates construction and recursion through a nested exception object.

Run this code
    
    
    #include <exception>
    #include <fstream>
    #include <iostream>
    #include <stdexcept>
    #include <string>
     
    // prints the explanatory string of an exception. If the exception is nested,
    // recurses to print the explanatory string of the exception it holds
    void print_exception(const [std::exception](exception.html)& e, int level =  0)
    {
        [std::cerr](../io/cerr.html) << [std::string](../string/basic_string.html)(level, ' ') << "exception: " << e.what() << '\n';
        try
        {
            std::rethrow_if_nested(e);
        }
        catch (const [std::exception](exception.html)& nestedException)
        {
            print_exception(nestedException, level + 1);
        }
        catch (...) {}
    }
     
    // sample function that catches an exception and wraps it in a nested exception
    void open_file(const [std::string](../string/basic_string.html)& s)
    {
        try
        {
            [std::ifstream](../io/basic_ifstream.html) file(s);
            file.exceptions([std::ios_base::failbit](../io/ios_base/iostate.html));
        }
        catch (...)
        {
            [std::throw_with_nested](throw_with_nested.html)([std::runtime_error](runtime_error.html)("Couldn't open " + s));
        }
    }
     
    // sample function that catches an exception and wraps it in a nested exception
    void run()
    {
        try
        {
            open_file("nonexistent.file");
        }
        catch (...)
        {
            [std::throw_with_nested](throw_with_nested.html)([std::runtime_error](runtime_error.html)("run() failed"));
        }
    }
     
    // runs the sample function above and prints the caught exception
    int main()
    {
        try
        {
            run();
        }
        catch (const [std::exception](exception.html)& e)
        {
            print_exception(e);
        }
    }

Possible output: 
    
    
    exception: run() failed
     exception: Couldn't open nonexistent.file
      exception: basic_ios::clear

### See also

[ nested_exception](nested_exception.html "cpp/error/nested exception")(C++11) |  a mixin type to capture and store current exceptions   
(class)   
---|---  
[ throw_with_nested](throw_with_nested.html "cpp/error/throw with nested")(C++11) |  throws its argument with [std::nested_exception](nested_exception.html "cpp/error/nested exception") mixed in   
(function template) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
