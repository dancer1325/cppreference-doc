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
**invalid_argument**  
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
  


Defined in header `[<stdexcept>](../header/stdexcept.html "cpp/header/stdexcept")` |  |   
---|---|---  
class invalid_argument; |  |   
| |   
  
Defines a type of object to be thrown as exception. It reports errors that arise because an argument value has not been accepted. 

This exception is thrown by [std::bitset::bitset](../utility/bitset/bitset.html "cpp/utility/bitset/bitset"), and the [std::stoi](../string/basic_string/stol.html "cpp/string/basic string/stol") and [std::stof](../string/basic_string/stof.html "cpp/string/basic string/stof") families of functions. 

All member functions of `std::invalid_argument` are constexpr: it is possible to create and use `std::invalid_argument` objects in the evaluation of a constant expression.However, `std::invalid_argument` objects generally cannot be constexpr, because any dynamically allocated storage must be released in the same evaluation of constant expression. | (since C++26)  
---|---  
  
![std-invalid argument-inheritance.svg](https://upload.cppreference.com/mwiki/images/2/2f/std-invalid_argument-inheritance.svg)

Inheritance diagram

## Contents

  * [1 Member functions](invalid_argument.html#Member_functions)
  * [2 std::invalid_argument::invalid_argument](invalid_argument.html#std::invalid_argument::invalid_argument)
    * [2.1 Parameters](invalid_argument.html#Parameters)
    * [2.2 Exceptions](invalid_argument.html#Exceptions)
    * [2.3 Notes](invalid_argument.html#Notes)
  * [3 std::invalid_argument::operator=](invalid_argument.html#std::invalid_argument::operator.3D)
    * [3.1 Parameters](invalid_argument.html#Parameters_2)
    * [3.2 Return value](invalid_argument.html#Return_value)
    * [3.3 Notes](invalid_argument.html#Notes_2)
  * [4 Inherited from std::logic_error](invalid_argument.html#Inherited_from_std::logic_error)
  * [5 Inherited from std::exception](invalid_argument.html#Inherited_from_std::exception)
    * [5.1 Member functions](invalid_argument.html#Member_functions_2)
    * [5.2 Notes](invalid_argument.html#Notes_3)
    * [5.3 Example](invalid_argument.html#Example)
    * [5.4 Defect reports](invalid_argument.html#Defect_reports)

  
---  
  
### Member functions

(constructor) |  constructs a new `invalid_argument` object with the given message   
(public member function)  
---|---  
operator= |  replaces the `invalid_argument` object   
(public member function)  
  
##  std::invalid_argument::invalid_argument

invalid_argument( const [std::string](../string/basic_string.html)& what_arg ); |  (1) | (constexpr since C++26)  
---|---|---  
invalid_argument( const char* what_arg ); |  (2) | (constexpr since C++26)  
invalid_argument( const invalid_argument& other ); |  (3) | (noexcept since C++11)   
(constexpr since C++26)  
| |   
  
1) Constructs the exception object with what_arg as explanatory string. After construction, [std::strcmp](../string/byte/strcmp.html)(what(), what_arg.c_str()) == 0.

2) Constructs the exception object with what_arg as explanatory string. After construction, [std::strcmp](../string/byte/strcmp.html)(what(), what_arg) == 0.

3) Copy constructor. If *this and other both have dynamic type `std::invalid_argument` then [std::strcmp](../string/byte/strcmp.html)(what(), other.what()) == 0. No exception can be thrown from the copy constructor.

###  Parameters

what_arg  |  \-  |  explanatory string   
---|---|---  
other  |  \-  |  another exception object to copy   
  
###  Exceptions

1,2) May throw [std::bad_alloc](../memory/new/bad_alloc.html "cpp/memory/new/bad alloc").

###  Notes

Because copying `std::invalid_argument` is not permitted to throw exceptions, this message is typically stored internally as a separately-allocated reference-counted string. This is also why there is no constructor taking `std::string&&`: it would have to copy the content anyway. 

Before the resolution of [LWG issue 254](https://cplusplus.github.io/LWG/issue254), the non-copy constructor can only accept [std::string](../string/basic_string.html "cpp/string/basic string"). It makes dynamic allocation mandatory in order to construct a [std::string](../string/basic_string.html "cpp/string/basic string") object. 

After the resolution of [LWG issue 471](https://cplusplus.github.io/LWG/issue471), a derived standard exception class must have a publicly accessible copy constructor. It can be implicitly defined as long as the explanatory strings obtained by `what()` are the same for the original object and the copied object. 

##  std::invalid_argument::operator=

invalid_argument& operator=( const invalid_argument& other ); |  | (noexcept since C++11)   
(constexpr since C++26)  
---|---|---  
| |   
  
Assigns the contents with those of other. If *this and other both have dynamic type `std::invalid_argument` then [std::strcmp](../string/byte/strcmp.html)(what(), other.what()) == 0 after assignment. No exception can be thrown from the copy assignment operator. 

###  Parameters

other  |  \-  |  another exception object to assign with   
---|---|---  
  
###  Return value

*this

###  Notes

After the resolution of [LWG issue 471](https://cplusplus.github.io/LWG/issue471), a derived standard exception class must have a publicly accessible copy assignment operator. It can be implicitly defined as long as the explanatory strings obtained by `what()` are the same for the original object and the copied object. 

##  Inherited from [std::logic_error](logic_error.html "cpp/error/logic error")

##  Inherited from [std::exception](exception.html "cpp/error/exception")

###  Member functions

[ (destructor)](exception/~exception.html "cpp/error/exception/~exception")[virtual] |  destroys the exception object   
(virtual public member function of `std::exception`)   
---|---  
[ what](exception/what.html "cpp/error/exception/what")[virtual] |  returns an explanatory string   
(virtual public member function of `std::exception`)   
  
### Notes

The purpose of this exception type is similar to the error condition [std::errc::invalid_argument](errc.html "cpp/error/errc") (thrown in [std::system_error](system_error.html "cpp/error/system error") from member functions of [std::thread](../thread/thread.html "cpp/thread/thread")) and the related errno constant [EINVAL](errno_macros.html "cpp/error/errno macros"). 

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_constexpr_exceptions`](../experimental/feature_test.html#cpp_lib_constexpr_exceptions "cpp/feature test") | [`202502L`](../compiler_support/26.html#cpp_lib_constexpr_exceptions_202502L "cpp/compiler support/26") | (C++26) | constexpr exception types   
  
### Example

Run this code
    
    
    #include <bitset>
    #include <iostream>
    #include <stdexcept>
    #include <string>
     
    int main()
    {
        try
        {
            [std::bitset](../utility/bitset.html)<4>{"012"}; // Throws: only '0' or '1' expected
        }
        catch (std::invalid_argument const& ex)
        {
            [std::cout](../io/cout.html) << "#1: " << ex.what() << '\n';
        }
     
        try
        {
            [[maybe_unused]] int f = [std::stoi](../string/basic_string/stol.html)("ABBA"); // Throws: no conversion
        }
        catch (std::invalid_argument const& ex)
        {
            [std::cout](../io/cout.html) << "#2: " << ex.what() << '\n';
        }
     
        try
        {
            [[maybe_unused]] float f = [std::stof](../string/basic_string/stof.html)("(3.14)"); // Throws: no conversion
        }
        catch (std::invalid_argument const& ex)
        {
            [std::cout](../io/cout.html) << "#3: " << ex.what() << '\n';
        }
    }

Possible output: 
    
    
    #1: bitset string ctor has invalid argument
    #2: stoi: no conversion
    #3: stof: no conversion

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 254](https://cplusplus.github.io/LWG/issue254) | C++98  | the constructor accepting const char* was missing  | added   
[LWG 471](https://cplusplus.github.io/LWG/issue471) | C++98  | the explanatory strings of `std::invalid_argument`'s  
copies were implementation-defined  | they are the same as that of the  
original `std::invalid_argument` object 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
