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
[invalid_argument](invalid_argument.html "cpp/error/invalid argument")  
[domain_error](domain_error.html "cpp/error/domain error")  
[length_error](length_error.html "cpp/error/length error")  
[out_of_range](out_of_range.html "cpp/error/out of range")  
[runtime_error](runtime_error.html "cpp/error/runtime error")  
[range_error](range_error.html "cpp/error/range error")  
[overflow_error](overflow_error.html "cpp/error/overflow error")  
[underflow_error](underflow_error.html "cpp/error/underflow error")  
**tx_exception**(TM TS)  
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
template< class T >  
class tx_exception : public [std::runtime_error](runtime_error.html); |  |  (TM TS)  
| |   
  
Defines an exception type that can be used to cancel and roll back an atomic transaction initiated by the keyword [`atomic_cancel`](../language/transactional_memory.html "cpp/language/transactional memory"). 

If `T` is not [TriviallyCopyable](../named_req/TriviallyCopyable.html "cpp/named req/TriviallyCopyable"), the program that specializes `std::tx_exception<T>` is ill-formed. 

## Contents

  * [1 Member functions](tx_exception.html#Member_functions)
  * [2 std::tx_exception::tx_exception](tx_exception.html#std::tx_exception::tx_exception)
    * [2.1 Parameters](tx_exception.html#Parameters)
    * [2.2 Exceptions](tx_exception.html#Exceptions)
  * [3 std::tx_exception::operator=](tx_exception.html#std::tx_exception::operator.3D)
    * [3.1 Parameters](tx_exception.html#Parameters_2)
    * [3.2 Return value](tx_exception.html#Return_value)
  * [4 std::tx_exception::get](tx_exception.html#std::tx_exception::get)
    * [4.1 Exceptions](tx_exception.html#Exceptions_2)
  * [5 std::tx_exception::what](tx_exception.html#std::tx_exception::what)
    * [5.1 Parameters](tx_exception.html#Parameters_3)
    * [5.2 Return value](tx_exception.html#Return_value_2)
  * [6 Inherited from std::runtime_error](tx_exception.html#Inherited_from_std::runtime_error)
  * [7 Inherited from std::exception](tx_exception.html#Inherited_from_std::exception)
    * [7.1 Member functions](tx_exception.html#Member_functions_2)

  
---  
  
### Member functions

##  std::tx_exception::tx_exception

explicit tx_exception( T value ) transaction_safe; |  (1)  |  (TM TS)  
---|---|---  
tx_exception( T value, const [std::string](../string/basic_string.html)& what_arg ) transaction_safe; |  (2)  |  (TM TS)  
tx_exception( T value, const char* what_arg ) transaction_safe; |  (3)  |  (TM TS)  
tx_exception( const tx_exception& other ) transaction_safe noexcept; |  (4)  |  (TM TS)  
| |   
  
1-3) Constructs the exception object with what_arg as explanatory string that can be accessed through what() and value as the object that can be accessed through get().

4) Copy constructor. If *this and other both have dynamic type `std::tx_exception<T>` then [std::strcmp](../string/byte/strcmp.html)(what(), other.what()) == 0.

###  Parameters

value  |  \-  |  payload object   
---|---|---  
what_arg  |  \-  |  explanatory string   
other  |  \-  |  another exception object to copy   
  
###  Exceptions

1-3) May throw implementation-defined exceptions. 

##  std::tx_exception::operator=

tx_exception& operator=( const tx_exception& other ) transaction_safe noexcept; |  |  (TM TS)  
---|---|---  
| |   
  
Assigns the contents with those of other. If *this and other both have dynamic type `std::tx_exception<T>` then [std::strcmp](../string/byte/strcmp.html)(what(), other.what()) == 0 after assignment. 

###  Parameters

other  |  \-  |  another exception object to assign with   
---|---|---  
  
###  Return value

*this

##  std::tx_exception::get

T get() const transaction_safe; |  |  (TM TS)  
---|---|---  
| |   
  
Returns the payload object held by the exception object. 

###  Exceptions

May throw implementation-defined exceptions. 

##  std::tx_exception::what

virtual const char* what() const transaction_safe_dynamic noexcept; |  |  (TM TS)  
---|---|---  
| |   
  
Returns the explanatory string. 

###  Parameters

(none) 

###  Return value

Pointer to a null-terminated string with explanatory information. 

##  Inherited from [std::runtime_error](runtime_error.html "cpp/error/runtime error")

  


##  Inherited from [std::exception](exception.html "cpp/error/exception")

###  Member functions

[ (destructor)](exception/~exception.html "cpp/error/exception/~exception")[virtual] |  destroys the exception object   
(virtual public member function of `std::exception`)   
---|---  
[ what](exception/what.html "cpp/error/exception/what")[virtual] |  returns an explanatory string   
(virtual public member function of `std::exception`) 
