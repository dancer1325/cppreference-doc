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
**overflow_error**  
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
class overflow_error; |  |   
| |   
  
Defines a type of object to be thrown as exception. It can be used to report arithmetic overflow errors (that is, situations where a result of a computation is too large for the destination type). 

The only standard library component that throws this exception is [std::bitset::to_ulong](../utility/bitset/to_ulong.html "cpp/utility/bitset/to ulong").  | (until C++11)  
---|---  
The only standard library components that throw this exception are [std::bitset::to_ulong](../utility/bitset/to_ulong.html "cpp/utility/bitset/to ulong") and [std::bitset::to_ullong](../utility/bitset/to_ullong.html "cpp/utility/bitset/to ullong").  | (since C++11)  
  
The mathematical functions of the standard library components do not throw this exception (mathematical functions report overflow errors as specified in [math_errhandling](../numeric/math/math_errhandling.html "cpp/numeric/math/math errhandling")). Third-party libraries, however, use this. For example, [boost.math](https://www.boost.org/doc/libs/release/libs/math/doc/html/math_toolkit/error_handling.html) throws `std::overflow_error` if `boost::math::policies::throw_on_error` is enabled (the default setting). 

All member functions of `std::overflow_error` are constexpr: it is possible to create and use `std::overflow_error` objects in the evaluation of a constant expression.However, `std::overflow_error` objects generally cannot be constexpr, because any dynamically allocated storage must be released in the same evaluation of constant expression. | (since C++26)  
---|---  
  
![std-overflow error-inheritance.svg](https://upload.cppreference.com/mwiki/images/b/b6/std-overflow_error-inheritance.svg)

Inheritance diagram

## Contents

  * [1 Member functions](overflow_error.html#Member_functions)
  * [2 std::overflow_error::overflow_error](overflow_error.html#std::overflow_error::overflow_error)
    * [2.1 Parameters](overflow_error.html#Parameters)
    * [2.2 Exceptions](overflow_error.html#Exceptions)
    * [2.3 Notes](overflow_error.html#Notes)
  * [3 std::overflow_error::operator=](overflow_error.html#std::overflow_error::operator.3D)
    * [3.1 Parameters](overflow_error.html#Parameters_2)
    * [3.2 Return value](overflow_error.html#Return_value)
    * [3.3 Notes](overflow_error.html#Notes_2)
  * [4 Inherited from std::runtime_error](overflow_error.html#Inherited_from_std::runtime_error)
  * [5 Inherited from std::exception](overflow_error.html#Inherited_from_std::exception)
    * [5.1 Member functions](overflow_error.html#Member_functions_2)
    * [5.2 Notes](overflow_error.html#Notes_3)
    * [5.3 Example](overflow_error.html#Example)
    * [5.4 Defect reports](overflow_error.html#Defect_reports)

  
---  
  
### Member functions

(constructor) |  constructs a new `overflow_error` object with the given message   
(public member function)  
---|---  
operator= |  replaces the `overflow_error` object   
(public member function)  
  
##  std::overflow_error::overflow_error

overflow_error( const [std::string](../string/basic_string.html)& what_arg ); |  (1) | (constexpr since C++26)  
---|---|---  
overflow_error( const char* what_arg ); |  (2) | (constexpr since C++26)  
overflow_error( const overflow_error& other ); |  (3) | (noexcept since C++11)   
(constexpr since C++26)  
| |   
  
1) Constructs the exception object with what_arg as explanatory string. After construction, [std::strcmp](../string/byte/strcmp.html)(what(), what_arg.c_str()) == 0.

2) Constructs the exception object with what_arg as explanatory string. After construction, [std::strcmp](../string/byte/strcmp.html)(what(), what_arg) == 0.

3) Copy constructor. If *this and other both have dynamic type `std::overflow_error` then [std::strcmp](../string/byte/strcmp.html)(what(), other.what()) == 0. No exception can be thrown from the copy constructor.

###  Parameters

what_arg  |  \-  |  explanatory string   
---|---|---  
other  |  \-  |  another exception object to copy   
  
###  Exceptions

1,2) May throw [std::bad_alloc](../memory/new/bad_alloc.html "cpp/memory/new/bad alloc").

###  Notes

Because copying `std::overflow_error` is not permitted to throw exceptions, this message is typically stored internally as a separately-allocated reference-counted string. This is also why there is no constructor taking `std::string&&`: it would have to copy the content anyway. 

Before the resolution of [LWG issue 254](https://cplusplus.github.io/LWG/issue254), the non-copy constructor can only accept [std::string](../string/basic_string.html "cpp/string/basic string"). It makes dynamic allocation mandatory in order to construct a [std::string](../string/basic_string.html "cpp/string/basic string") object. 

After the resolution of [LWG issue 471](https://cplusplus.github.io/LWG/issue471), a derived standard exception class must have a publicly accessible copy constructor. It can be implicitly defined as long as the explanatory strings obtained by `what()` are the same for the original object and the copied object. 

##  std::overflow_error::operator=

overflow_error& operator=( const overflow_error& other ); |  | (noexcept since C++11)   
(constexpr since C++26)  
---|---|---  
| |   
  
Assigns the contents with those of other. If *this and other both have dynamic type `std::overflow_error` then [std::strcmp](../string/byte/strcmp.html)(what(), other.what()) == 0 after assignment. No exception can be thrown from the copy assignment operator. 

###  Parameters

other  |  \-  |  another exception object to assign with   
---|---|---  
  
###  Return value

*this

###  Notes

After the resolution of [LWG issue 471](https://cplusplus.github.io/LWG/issue471), a derived standard exception class must have a publicly accessible copy assignment operator. It can be implicitly defined as long as the explanatory strings obtained by `what()` are the same for the original object and the copied object. 

##  Inherited from [std::runtime_error](runtime_error.html "cpp/error/runtime error")

  


##  Inherited from [std::exception](exception.html "cpp/error/exception")

###  Member functions

[ (destructor)](exception/~exception.html "cpp/error/exception/~exception")[virtual] |  destroys the exception object   
(virtual public member function of `std::exception`)   
---|---  
[ what](exception/what.html "cpp/error/exception/what")[virtual] |  returns an explanatory string   
(virtual public member function of `std::exception`)   
  
### Notes

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_constexpr_exceptions`](../experimental/feature_test.html#cpp_lib_constexpr_exceptions "cpp/feature test") | [`202502L`](../compiler_support/26.html#cpp_lib_constexpr_exceptions_202502L "cpp/compiler support/26") | (C++26) | constexpr exception types   
  
### Example

Run this code
    
    
    #include <iostream>
    #include <limits>
    #include <stdexcept>
    #include <utility>
     
    template<typename T, int N>
        requires (N > 0) /*...*/
    class Stack
    {
        int top_{-1};
        T data_[N];
     
    public:
        [[nodiscard]] bool empty() const { return top_ == -1; }
     
        void push(T x)
        {
            if (top_ == N - 1)
                throw std::overflow_error("Stack overflow!");
            data_[++top_] = std::move(x);
        }
     
        void pop()
        {
            if (empty())
                throw [std::underflow_error](underflow_error.html)("Stack underflow!");
            --top_;
        }
     
        T const& top() const
        {
            if (empty())
                throw std::overflow_error("Stack is empty!");
            return data_[top_];
        }
    };
     
    int main()
    {
        Stack<int, 4> st;
     
        try
        {
            [[maybe_unused]] auto x = st.top();
        }
        catch (std::overflow_error const& ex)
        {
            [std::cout](../io/cout.html) << "1) Exception: " << ex.what() << '\n';
        }
     
        st.push(1337);
        while (!st.empty())
        	st.pop();
     
        try
        {
            st.pop();
        }
        catch ([std::underflow_error](underflow_error.html) const& ex)
        {
            [std::cout](../io/cout.html) << "2) Exception: " << ex.what() << '\n';
        }
     
        try
        {
            for (int i{}; i != 13; ++i)
                st.push(i);
        }
        catch (std::overflow_error const& ex)
        {
            [std::cout](../io/cout.html) << "3) Exception: " << ex.what() << '\n';
        }
    }

Output: 
    
    
    1) Exception: Stack is empty!
    2) Exception: Stack underflow!
    3) Exception: Stack overflow!

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 254](https://cplusplus.github.io/LWG/issue254) | C++98  | the constructor accepting const char* was missing  | added   
[LWG 471](https://cplusplus.github.io/LWG/issue471) | C++98  | the explanatory strings of `std::overflow_error`'s  
copies were implementation-defined  | they are the same as that of the  
original `std::overflow_error` object 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
