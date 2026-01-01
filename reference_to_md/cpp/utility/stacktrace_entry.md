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
**stacktrace_entry**(C++23)  
[basic_stacktrace](basic_stacktrace.html "cpp/utility/basic stacktrace")(C++23)  
[Debugging support](../error.html#Debugging_support "cpp/error")  
[is_debugger_present](is_debugger_present.html "cpp/utility/is debugger present")(C++26)  
[breakpoint_if_debugging](breakpoint_if_debugging.html "cpp/utility/breakpoint if debugging")(C++26)  
[breakpoint](breakpoint.html "cpp/utility/breakpoint")(C++26)  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/error/navbar_content&action=edit)

**`std::stacktrace_entry`**

[Member functions](stacktrace_entry.html#Member_functions "cpp/utility/stacktrace entry")  
---  
[stacktrace_entry::stacktrace_entry](stacktrace_entry/stacktrace_entry.html "cpp/utility/stacktrace entry/stacktrace entry")  
[stacktrace_entry::operator=](stacktrace_entry/operator=.html "cpp/utility/stacktrace entry/operator=")  
[Observers](stacktrace_entry.html#Observers "cpp/utility/stacktrace entry")  
[stacktrace_entry::native_handle](stacktrace_entry/native_handle.html "cpp/utility/stacktrace entry/native handle")  
[stacktrace_entry::operator bool](stacktrace_entry/operator_bool.html "cpp/utility/stacktrace entry/operator bool")  
[Query](stacktrace_entry.html#Query "cpp/utility/stacktrace entry")  
[stacktrace_entry::description](stacktrace_entry/description.html "cpp/utility/stacktrace entry/description")  
[stacktrace_entry::source_file](stacktrace_entry/source_file.html "cpp/utility/stacktrace entry/source file")  
[stacktrace_entry::source_line](stacktrace_entry/source_line.html "cpp/utility/stacktrace entry/source line")  
[Non-member functions](stacktrace_entry.html#Non-member_functions "cpp/utility/stacktrace entry")  
[operator==  
operator<=>](stacktrace_entry/operator_cmp.html "cpp/utility/stacktrace entry/operator cmp")  
[to_string(std::stacktrace_entry)](stacktrace_entry/to_string.html "cpp/utility/stacktrace entry/to string")  
[operator<<](stacktrace_entry/operator_ltlt.html "cpp/utility/stacktrace entry/operator ltlt")  
[Helper classes](stacktrace_entry.html#Helper_classes "cpp/utility/stacktrace entry")  
[hash<std::stacktrace_entry>](stacktrace_entry/hash.html "cpp/utility/stacktrace entry/hash")  
[formatter<std::stacktrace_entry>](stacktrace_entry/formatter.html "cpp/utility/stacktrace entry/formatter")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/utility/stacktrace_entry/navbar_content&action=edit)

Defined in header `[<stacktrace>](../header/stacktrace.html "cpp/header/stacktrace")` |  |   
---|---|---  
class stacktrace_entry; |  |  (since C++23)  
| |   
  
The `stacktrace_entry` class provides operations for querying information about an evaluation in a stacktrace. Each `stacktrace_entry` object is either empty, or represents an evaluation in a stacktrace. 

`stacktrace_entry` models [std::regular](../concepts/regular.html) and [std::three_way_comparable](compare/three_way_comparable.html)<[std::strong_ordering](compare/strong_ordering.html)>. 

## Contents

  * [1 Member types](stacktrace_entry.html#Member_types)
  * [2 Member functions](stacktrace_entry.html#Member_functions)
    * [2.1 Observers](stacktrace_entry.html#Observers)
    * [2.2 Query](stacktrace_entry.html#Query)
  * [3 Non-member functions](stacktrace_entry.html#Non-member_functions)
  * [4 Helper classes](stacktrace_entry.html#Helper_classes)
  * [5 Notes](stacktrace_entry.html#Notes)
  * [6 Example](stacktrace_entry.html#Example)
  * [7 See also](stacktrace_entry.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/stacktrace_entry&action=edit&section=1 "Edit section: Member types")] Member types

`native_handle_type` |  implementation-defined native handle type   
---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/stacktrace_entry&action=edit&section=2 "Edit section: Member functions")] Member functions

[ (constructor)](stacktrace_entry/stacktrace_entry.html "cpp/utility/stacktrace entry/stacktrace entry") |  constructs a new `stacktrace_entry`   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/utility/stacktrace_entry/dsc_constructor&action=edit)  
---|---  
(destructor) |  destroys the `stacktrace_entry`   
(public member function)  
[ operator=](stacktrace_entry/operator=.html "cpp/utility/stacktrace entry/operator=") |  assigns the contents of one `stacktrace_entry` to another   
(public member function)  
  
#####  Observers   
  
[ native_handle](stacktrace_entry/native_handle.html "cpp/utility/stacktrace entry/native handle") |  gets the implementation-defined native handle of the `stacktrace_entry`   
(public member function)  
[ operator bool](stacktrace_entry/operator_bool.html "cpp/utility/stacktrace entry/operator bool") |  checks whether the `stacktrace_entry` is empty   
(public member function)  
  
#####  Query   
  
[ description](stacktrace_entry/description.html "cpp/utility/stacktrace entry/description") |  gets the description of the evaluation represented by the `stacktrace_entry`   
(public member function)  
[ source_file](stacktrace_entry/source_file.html "cpp/utility/stacktrace entry/source file") |  gets the name of the source file that lexically contains the expression or statement whose evaluation is represented by the `stacktrace_entry`   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/utility/stacktrace_entry/dsc_source_file&action=edit)  
[ source_line](stacktrace_entry/source_line.html "cpp/utility/stacktrace entry/source line") |  gets the line number that lexically relates the evaluation represented by the `stacktrace_entry`   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/utility/stacktrace_entry/dsc_source_line&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/stacktrace_entry&action=edit&section=3 "Edit section: Non-member functions")] Non-member functions

[ operator==operator<=>](stacktrace_entry/operator_cmp.html "cpp/utility/stacktrace entry/operator cmp")(C++23) |  compares two `stacktrace_entry` values   
(function)  
---|---  
[ to_string](stacktrace_entry/to_string.html "cpp/utility/stacktrace entry/to string")(C++23) |  returns a string with a description of the `stacktrace_entry`   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/utility/stacktrace_entry/dsc_to_string&action=edit)  
[ operator<<](stacktrace_entry/operator_ltlt.html "cpp/utility/stacktrace entry/operator ltlt")(C++23) |  performs stream output of `stacktrace_entry`   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/utility/stacktrace_entry/dsc_operator_ltlt&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/stacktrace_entry&action=edit&section=4 "Edit section: Helper classes")] Helper classes

[ std::hash<std::stacktrace_entry>](stacktrace_entry/hash.html "cpp/utility/stacktrace entry/hash")(C++23) |  hash support for **`std::stacktrace_entry`**   
(class template specialization) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/utility/stacktrace_entry/dsc_hash&action=edit)  
---|---  
[ std::formatter<std::stacktrace_entry>](stacktrace_entry/formatter.html "cpp/utility/stacktrace entry/formatter")(C++23) |  formatting support for `stacktrace_entry`   
(class template specialization) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/utility/stacktrace_entry/dsc_formatter&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/stacktrace_entry&action=edit&section=5 "Edit section: Notes")] Notes

`boost::stacktrace::frame` (available in [Boost.Stacktrace](https://www.boost.org/doc/libs/release/doc/html/stacktrace.html)) can be used instead when `std::stacktrace_entry` is not available. 

[Feature-test](feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_stacktrace`](../experimental/feature_test.html#cpp_lib_stacktrace "cpp/feature test") | [`202011L`](../compiler_support/23.html#cpp_lib_stacktrace_202011L "cpp/compiler support/23") | (C++23) | [Stacktrace library](../error.html#Stacktrace "cpp/error")  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/stacktrace_entry&action=edit&section=6 "Edit section: Example")] Example

| This section is incomplete  
Reason: no example   
---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/utility/stacktrace_entry&action=edit&section=7 "Edit section: See also")] See also

[ basic_stacktrace](basic_stacktrace.html "cpp/utility/basic stacktrace")(C++23) |  approximate representation of an invocation sequence consists of stacktrace entries   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/utility/dsc_basic_stacktrace&action=edit)  
---|---  
[ source_location](source_location.html "cpp/utility/source location")(C++20) |  a class representing information about the source code, such as file names, line numbers, and function names   
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/utility/dsc_source_location&action=edit)
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
