
  


[Diagnostics library](../error.html "cpp/error")

| [Exception handling](../error.html#Exception_handling "cpp/error")  
---  
[exception](../error/exception.html "cpp/error/exception")  
[uncaught_exceptionuncaught_exceptions](../error/exception/uncaught_exception.html "cpp/error/uncaught exception")(until C++20*)` `(C++17)  
[exception_ptr](../error/exception_ptr.html "cpp/error/exception ptr")(C++11)  
[make_exception_ptr](../error/make_exception_ptr.html "cpp/error/make exception ptr")(C++11)  
[current_exception](../error/current_exception.html "cpp/error/current exception")(C++11)  
[rethrow_exception](../error/rethrow_exception.html "cpp/error/rethrow exception")(C++11)  
[nested_exception](../error/nested_exception.html "cpp/error/nested exception")(C++11)  
[throw_with_nested](../error/throw_with_nested.html "cpp/error/throw with nested")(C++11)  
[rethrow_if_nested](../error/rethrow_if_nested.html "cpp/error/rethrow if nested")(C++11)  
Exception handling failures  
[terminate](../error/terminate.html "cpp/error/terminate")  
[terminate_handler](../error/terminate_handler.html "cpp/error/terminate handler")  
[get_terminate](../error/get_terminate.html "cpp/error/get terminate")(C++11)  
[set_terminate](../error/set_terminate.html "cpp/error/set terminate")  
[bad_exception](../error/bad_exception.html "cpp/error/bad exception")  
[unexpected](../error/unexpected.html "cpp/error/unexpected")(until C++17*)  
[unexpected_handler](../error/exception/unexpected_handler.html "cpp/error/unexpected handler")(until C++17*)  
[get_unexpected](../error/exception/get_unexpected.html "cpp/error/get unexpected")(until C++17*)  
[set_unexpected](../error/exception/set_unexpected.html "cpp/error/set unexpected")(until C++17*)  
[Error numbers](../error.html#Error_numbers "cpp/error")  
[Error codes](../error/errno_macros.html "cpp/error/errno macros")  
[errno](../error/errno.html "cpp/error/errno")  
[Assertions](../error.html#Assertions "cpp/error")  
[assert](../error/assert.html "cpp/error/assert")  
  
| [Exception categories](../error.html#Exception_categories "cpp/error")  
---  
[logic_error](../error/logic_error.html "cpp/error/logic error")  
[invalid_argument](../error/invalid_argument.html "cpp/error/invalid argument")  
[domain_error](../error/domain_error.html "cpp/error/domain error")  
[length_error](../error/length_error.html "cpp/error/length error")  
[out_of_range](../error/out_of_range.html "cpp/error/out of range")  
[runtime_error](../error/runtime_error.html "cpp/error/runtime error")  
[range_error](../error/range_error.html "cpp/error/range error")  
[overflow_error](../error/overflow_error.html "cpp/error/overflow error")  
[underflow_error](../error/underflow_error.html "cpp/error/underflow error")  
[tx_exception](../error/tx_exception.html "cpp/error/tx exception")(TM TS)  
[System error](../error.html#System_error "cpp/error")  
[error_category](../error/error_category.html "cpp/error/error category")(C++11)  
[generic_category](../error/generic_category.html "cpp/error/generic category")(C++11)  
[system_category](../error/system_category.html "cpp/error/system category")(C++11)  
[error_condition](../error/error_condition.html "cpp/error/error condition")(C++11)  
[errc](../error/errc.html "cpp/error/errc")(C++11)  
[error_code](../error/error_code.html "cpp/error/error code")(C++11)  
[system_error](../error/system_error.html "cpp/error/system error")(C++11)  
[Stacktrace](../error.html#Stacktrace "cpp/error")  
[stacktrace_entry](stacktrace_entry.html "cpp/utility/stacktrace entry")(C++23)  
**basic_stacktrace**(C++23)  
[Debugging support](../error.html#Debugging_support "cpp/error")  
[is_debugger_present](is_debugger_present.html "cpp/utility/is debugger present")(C++26)  
[breakpoint_if_debugging](breakpoint_if_debugging.html "cpp/utility/breakpoint if debugging")(C++26)  
[breakpoint](breakpoint.html "cpp/utility/breakpoint")(C++26)  
  


**`std::basic_stacktrace`**

[Member functions](basic_stacktrace.html#Member_functions "cpp/utility/basic stacktrace")  
---  
[basic_stacktrace::basic_stacktrace](basic_stacktrace/basic_stacktrace.html "cpp/utility/basic stacktrace/basic stacktrace")  
[basic_stacktrace::~basic_stacktrace](basic_stacktrace/~basic_stacktrace.html "cpp/utility/basic stacktrace/~basic stacktrace")  
[basic_stacktrace::operator=](basic_stacktrace/operator=.html "cpp/utility/basic stacktrace/operator=")  
[basic_stacktrace::current](basic_stacktrace/current.html "cpp/utility/basic stacktrace/current")  
[basic_stacktrace::get_allocator](basic_stacktrace/get_allocator.html "cpp/utility/basic stacktrace/get allocator")  
[Iterators](basic_stacktrace.html#Iterators "cpp/utility/basic stacktrace")  
[basic_stacktrace::beginbasic_stacktrace::cbegin](basic_stacktrace/begin.html "cpp/utility/basic stacktrace/begin")  
[basic_stacktrace::endbasic_stacktrace::cend](basic_stacktrace/end.html "cpp/utility/basic stacktrace/end")  
[basic_stacktrace::rbeginbasic_stacktrace::crbegin](basic_stacktrace/rbegin.html "cpp/utility/basic stacktrace/rbegin")  
[basic_stacktrace::rendbasic_stacktrace::crend](basic_stacktrace/rend.html "cpp/utility/basic stacktrace/rend")  
[Capacity](basic_stacktrace.html#Capacity "cpp/utility/basic stacktrace")  
[basic_stacktrace::empty](basic_stacktrace/empty.html "cpp/utility/basic stacktrace/empty")  
[basic_stacktrace::size](basic_stacktrace/size.html "cpp/utility/basic stacktrace/size")  
[basic_stacktrace::max_size](basic_stacktrace/max_size.html "cpp/utility/basic stacktrace/max size")  
[Element access](basic_stacktrace.html#Element_access "cpp/utility/basic stacktrace")  
[basic_stacktrace::operator[]](basic_stacktrace/operator_at.html "cpp/utility/basic stacktrace/operator at")  
[basic_stacktrace::at](basic_stacktrace/at.html "cpp/utility/basic stacktrace/at")  
[Modifiers](basic_stacktrace.html#Modifiers "cpp/utility/basic stacktrace")  
[basic_stacktrace::swap](basic_stacktrace/swap.html "cpp/utility/basic stacktrace/swap")  
[Non-member functions](basic_stacktrace.html#Non-member_functions "cpp/utility/basic stacktrace")  
[operator==  
operator<=>](basic_stacktrace/operator_cmp.html "cpp/utility/basic stacktrace/operator cmp")  
[swap(std::basic_stacktrace)](basic_stacktrace/swap2.html "cpp/utility/basic stacktrace/swap2")  
[to_string(std::basic_stacktrace)](basic_stacktrace/to_string.html "cpp/utility/basic stacktrace/to string")  
[operator<<](basic_stacktrace/operator_ltlt.html "cpp/utility/basic stacktrace/operator ltlt")  
[Helper classes](basic_stacktrace.html#Helper_classes "cpp/utility/basic stacktrace")  
[hash<std::basic_stacktrace>](basic_stacktrace/hash.html "cpp/utility/basic stacktrace/hash")  
[formatter<std::basic_stacktrace>](basic_stacktrace/formatter.html "cpp/utility/basic stacktrace/formatter")  
  


Defined in header `[<stacktrace>](../header/stacktrace.html "cpp/header/stacktrace")` |  |   
---|---|---  
template< class Allocator >  
class basic_stacktrace; |  (1)  |  (since C++23)  
using stacktrace =  
std::basic_stacktrace<[std::allocator](../memory/allocator.html)<[std::stacktrace_entry](stacktrace_entry.html)>>; |  (2)  |  (since C++23)  
namespace pmr {  
using stacktrace =  
std::basic_stacktrace<[std::pmr::polymorphic_allocator](../memory/polymorphic_allocator.html)<[std::stacktrace_entry](stacktrace_entry.html)>>;  
} |  (3)  |  (since C++23)  
| |   
  
1) The `basic_stacktrace` class template represents a snapshot of the whole stacktrace or its given part. It satisfies the requirement of [AllocatorAwareContainer](../named_req/AllocatorAwareContainer.html "cpp/named req/AllocatorAwareContainer"), [SequenceContainer](../named_req/SequenceContainer.html "cpp/named req/SequenceContainer"), and [ReversibleContainer](../named_req/ReversibleContainer.html "cpp/named req/ReversibleContainer"), except that only move, assignment, swap, and operations for const-qualified sequence containers are supported, and the semantics of comparison functions are different from those required for a container.

2) Convenience type alias for the `basic_stacktrace` using the default [std::allocator](../memory/allocator.html "cpp/memory/allocator").

3) Convenience type alias for the `basic_stacktrace` using the [polymorphic allocator](../memory/polymorphic_allocator.html "cpp/memory/polymorphic allocator").

The _invocation sequence_ of the current evaluation \\(\small{ {x}_{0} }\\)x0 in the current thread of execution is a sequence \\(\small{ ({x}_{0}, \dots, {x}_{n})}\\)(x0, ..., xn) of evaluations such that, for \\(\small{i \ge 0}\\)i≥0, \\(\small{ {x}_{i} }\\)xi is within the function invocation \\(\small{ {x}_{i+1} }\\)xi+1. 

A _stacktrace_ is an approximate representation of an invocation sequence and consists of stacktrace entries. 

A _stacktrace entry_ represents an evaluation in a stacktrace. It is represented by std::stacktrace_entry in the C++ standard library. 

## Contents

  * [1 Template parameters](basic_stacktrace.html#Template_parameters)
  * [2 Member types](basic_stacktrace.html#Member_types)
  * [3 Member functions](basic_stacktrace.html#Member_functions)
    * [3.1 Iterators](basic_stacktrace.html#Iterators)
    * [3.2 Capacity](basic_stacktrace.html#Capacity)
    * [3.3 Element access](basic_stacktrace.html#Element_access)
    * [3.4 Modifiers](basic_stacktrace.html#Modifiers)
  * [4 Non-member functions](basic_stacktrace.html#Non-member_functions)
  * [5 Helper classes](basic_stacktrace.html#Helper_classes)
  * [6 Notes](basic_stacktrace.html#Notes)
  * [7 Example](basic_stacktrace.html#Example)
  * [8 See also](basic_stacktrace.html#See_also)

  
---  
  
### Template parameters

Allocator  |  \-  |  An allocator that is used to acquire/release memory and to construct/destroy the elements in that memory. The type must meet the requirements of [Allocator](../named_req/Allocator.html "cpp/named req/Allocator"). The program is ill-formed if `Allocator::value_type` is not std::stacktrace_entry.   
---|---|---  
  
### Member types

Member type  |  Definition   
---|---  
`value_type` |  std::stacktrace_entry  
`const_reference` |  const value_type&  
`reference` |  value_type&  
`const_iterator` |  implementation-defined const [LegacyRandomAccessIterator](../named_req/RandomAccessIterator.html "cpp/named req/RandomAccessIterator") type that models [`random_access_iterator`](../iterator/random_access_iterator.html "cpp/iterator/random access iterator")  
`iterator` |  `const_iterator`  
`reverse_iterator` |  [std::reverse_iterator](../iterator/reverse_iterator.html)<iterator>  
`reverse_const_iterator` |  [std::reverse_iterator](../iterator/reverse_iterator.html)<const_iterator>  
`difference_type` |  implementation-defined signed integer type   
`size_type` |  implementation-defined unsigned integer type   
`allocator_type` |  `Allocator`  
  
### Member functions

[ (constructor)](basic_stacktrace/basic_stacktrace.html "cpp/utility/basic stacktrace/basic stacktrace") |  creates a new `basic_stacktrace`   
(public member function)   
---|---  
[ (destructor)](basic_stacktrace/~basic_stacktrace.html "cpp/utility/basic stacktrace/~basic stacktrace") |  destroys the `basic_stacktrace`   
(public member function)   
[ operator=](basic_stacktrace/operator=.html "cpp/utility/basic stacktrace/operator=") |  assigns to the `basic_stacktrace`   
(public member function)   
[ current](basic_stacktrace/current.html "cpp/utility/basic stacktrace/current")[static] |  obtains the current stacktrace or its given part   
(public static member function)   
[ get_allocator](basic_stacktrace/get_allocator.html "cpp/utility/basic stacktrace/get allocator") |  returns the associated allocator   
(public member function)   
  
#####  Iterators   
  
[ begincbegin](basic_stacktrace/begin.html "cpp/utility/basic stacktrace/begin") |  returns an iterator to the beginning   
(public member function)   
[ endcend](basic_stacktrace/end.html "cpp/utility/basic stacktrace/end") |  returns an iterator to the end   
(public member function)   
[ rbegincrbegin](basic_stacktrace/rbegin.html "cpp/utility/basic stacktrace/rbegin") |  returns a reverse iterator to the beginning   
(public member function)   
[ rendcrend](basic_stacktrace/rend.html "cpp/utility/basic stacktrace/rend") |  returns a reverse iterator to the end   
(public member function)   
  
#####  Capacity   
  
[ empty](basic_stacktrace/empty.html "cpp/utility/basic stacktrace/empty") |  checks whether the `basic_stacktrace` is empty   
(public member function)   
[ size](basic_stacktrace/size.html "cpp/utility/basic stacktrace/size") |  returns the number of stacktrace entries   
(public member function)   
[ max_size](basic_stacktrace/max_size.html "cpp/utility/basic stacktrace/max size") |  returns the maximum possible number of stacktrace entries   
(public member function)   
  
#####  Element access   
  
[ operator[]](basic_stacktrace/operator_at.html "cpp/utility/basic stacktrace/operator at") |  access specified stacktrace entry   
(public member function)   
[ at](basic_stacktrace/at.html "cpp/utility/basic stacktrace/at") |  access specified stacktrace entry with bounds checking   
(public member function)   
  
#####  Modifiers   
  
[ swap](basic_stacktrace/swap.html "cpp/utility/basic stacktrace/swap") |  swaps the contents   
(public member function)   
  
### Non-member functions

[ operator==operator<=>](basic_stacktrace/operator_cmp.html "cpp/utility/basic stacktrace/operator cmp")(C++23) |  compares the sizes and the contents of two `basic_stacktrace` values   
(function template)  
---|---  
[ std::swap(std::basic_stacktrace)](basic_stacktrace/swap2.html "cpp/utility/basic stacktrace/swap2")(C++23) |  specializes the [std::swap](swap.html "cpp/algorithm/swap") algorithm   
(function template)   
[ to_string](basic_stacktrace/to_string.html "cpp/utility/basic stacktrace/to string")(C++23) |  returns a string with a description of the `basic_stacktrace`   
(function template)   
[ operator<<](basic_stacktrace/operator_ltlt.html "cpp/utility/basic stacktrace/operator ltlt")(C++23) |  performs stream output of `basic_stracktrace`   
(function template)   
  
### Helper classes

[ std::hash<std::basic_stacktrace>](basic_stacktrace/hash.html "cpp/utility/basic stacktrace/hash")(C++23) |  hash support for **`std::basic_stacktrace`**   
(class template specialization)   
---|---  
[ std::formatter<std::basic_stacktrace>](basic_stacktrace/formatter.html "cpp/utility/basic stacktrace/formatter")(C++23) |  formatting support for `basic_stacktrace`   
(class template specialization)   
  
### Notes

Support for custom allocators is provided for using `basic_stacktrace` on a hot path or in embedded environments. Users can allocate `stacktrace_entry` objects on the stack or in some other place, where appropriate. 

The sequence of std::stacktrace_entry objects owned by a `std::basic_stacktrace` is immutable, and either is empty or represents a contiguous interval of the whole stacktrace. 

boost::stacktrace::basic_stacktrace (available in [Boost.Stacktrace](https://www.boost.org/doc/libs/release/doc/html/stacktrace.html)) can be used instead when `std::basic_stacktrace` is not available. 

[Feature-test](feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_stacktrace`](../experimental/feature_test.html#cpp_lib_stacktrace "cpp/feature test") | [`202011L`](../compiler_support/23.html#cpp_lib_stacktrace_202011L "cpp/compiler support/23") | (C++23) | [Stacktrace](basic_stacktrace.html#top) library   
[`__cpp_lib_formatters`](../experimental/feature_test.html#cpp_lib_formatters "cpp/feature test") | [`202302L`](../compiler_support/23.html#cpp_lib_formatters_202302L "cpp/compiler support/23") | (C++23) | Formatting [std::thread::id](../thread/thread/id.html "cpp/thread/thread/id") and std::stacktrace  
  
### Example

The output obtained using Compiler Explorer: [msvc](https://godbolt.org/z/sjxvc97a7) and [gcc](https://godbolt.org/z/v117ccshs).

Run this code
    
    
    #include <iostream>
    #include <stacktrace>
     
    int nested_func(int c)
    {
        [std::cout](../io/cout.html) << std::stacktrace::current() << '\n';
        return c + 1;
    }
     
    int func(int b)
    {
        return nested_func(b + 1);
    }
     
    int main()
    {
        [std::cout](../io/cout.html) << func(777);
    }

Possible output: 
    
    
    // msvc output (the lines ending with '⤶' arrows are split to fit the width):
    0> C:\Users\ContainerAdministrator\AppData\Local\Temp\compiler-explorer-compiler20221122-⤶
    31624-2ja1sf.8ytzw\example.cpp(6): output_s!nested_func+0x1F
    1> C:\Users\ContainerAdministrator\AppData\Local\Temp\compiler-explorer-compiler20221122-⤶
    31624-2ja1sf.8ytzw\example.cpp(12): output_s!func+0x15
    2> C:\Users\ContainerAdministrator\AppData\Local\Temp\compiler-explorer-compiler20221122-⤶
    31624-2ja1sf.8ytzw\example.cpp(15): output_s!main+0xE
    3> D:\a\_work\1\s\src\vctools\crt\vcstartup\src\startup\exe_common.inl(288): output_s!⤶
    __scrt_common_main_seh+0x10C
    4> KERNEL32!BaseThreadInitThunk+0x14
    5> ntdll!RtlUserThreadStart+0x21
    779
     
    gcc output:
       0# nested_func(int) at /app/example.cpp:7
       1# func(int) at /app/example.cpp:13
       2#      at /app/example.cpp:18
       3#      at :0
       4#      at :0
       5# 
     
    779

### See also

[ stacktrace_entry](stacktrace_entry.html "cpp/utility/stacktrace entry")(C++23) |  representation of an evaluation in a stacktrace   
(class)   
---|---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
