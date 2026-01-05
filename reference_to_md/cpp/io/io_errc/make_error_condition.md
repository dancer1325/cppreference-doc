[C++](../../../cpp.html "cpp")

[Compiler support](../../compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](../../freestanding.html "cpp/freestanding")  
[Language](../../language.html "cpp/language")  
[Standard library](../../standard_library.html "cpp/standard library")  
[Standard library headers](../../headers.html "cpp/header")  
[Named requirements](../../iterator/concepts.html "cpp/named req")  
[Feature test macros](../../experimental/feature_test.html "cpp/feature test") (C++20)  
[Language support library](../../utility.html#Language_support "cpp/utility")  
[Concepts library](../../concepts.html "cpp/concepts") (C++20)  
[Diagnostics library](../../error.html "cpp/error")  
[Memory management library](../../memory.html "cpp/memory")  
[Metaprogramming library](../../meta.html "cpp/meta") (C++11)  
[General utilities library](../../utility.html "cpp/utility")  
[Containers library](../../container.html "cpp/container")  
[Iterators library](../../iterator.html "cpp/iterator")  
[Ranges library](../../ranges.html "cpp/ranges") (C++20)  
[Algorithms library](../../algorithm.html "cpp/algorithm")  
[Strings library](../../string.html "cpp/string")  
[Text processing library](../../text.html "cpp/text")  
[Numerics library](../../numeric.html "cpp/numeric")  
[Date and time library](../../chrono.html "cpp/chrono")  
[Input/output library](../../io.html "cpp/io")  
[Filesystem library](../../filesystem.html "cpp/filesystem") (C++17)  
[Concurrency support library](../../atomic.html "cpp/thread") (C++11)  
[Execution control library](../../experimental/execution.html "cpp/execution") (C++26)  
[Technical specifications](../../experimental.html "cpp/experimental")  
[Symbols index](../../symbol_index.html "cpp/symbol index")  
[External libraries](../../links/libs.html "cpp/links/libs")  
  


[Input/output library](../../io.html "cpp/io")

[I/O manipulators](../manip.html "cpp/io/manip")  
---  
[Print functions](../../io.html#Print_functions_.28since_C.2B.2B23.29 "cpp/io") (C++23)  
[C-style I/O](../c.html "cpp/io/c")  
Buffers  
[basic_streambuf](../basic_streambuf.html "cpp/io/basic streambuf")  
[basic_filebuf](../basic_filebuf.html "cpp/io/basic filebuf")  
[basic_stringbuf](../basic_stringbuf.html "cpp/io/basic stringbuf")  
[basic_spanbuf](../basic_spanbuf.html "cpp/io/basic spanbuf")(C++23)  
[strstreambuf](../strstreambuf.html "cpp/io/strstreambuf")(C++98/26*)  
[basic_syncbuf](../basic_syncbuf.html "cpp/io/basic syncbuf")(C++20)  
Streams  
Abstractions  
[ios_base](../ios_base.html "cpp/io/ios base")  
[basic_ios](../basic_ios.html "cpp/io/basic ios")  
[basic_istream](../basic_istream.html "cpp/io/basic istream")  
[basic_ostream](../basic_ostream.html "cpp/io/basic ostream")  
[basic_iostream](../basic_iostream.html "cpp/io/basic iostream")  
File I/O  
[basic_ifstream](../basic_ifstream.html "cpp/io/basic ifstream")  
[basic_ofstream](../basic_ofstream.html "cpp/io/basic ofstream")  
[basic_fstream](../basic_fstream.html "cpp/io/basic fstream")  
String I/O  
[basic_istringstream](../basic_istringstream.html "cpp/io/basic istringstream")  
[basic_ostringstream](../basic_ostringstream.html "cpp/io/basic ostringstream")  
[basic_stringstream](../basic_stringstream.html "cpp/io/basic stringstream")  
Array I/O  
[basic_ispanstream](../basic_ispanstream.html "cpp/io/basic ispanstream")(C++23)  
[basic_ospanstream](../basic_ospanstream.html "cpp/io/basic ospanstream")(C++23)  
[basic_spanstream](../basic_spanstream.html "cpp/io/basic spanstream")(C++23)  
[istrstream](../istrstream.html "cpp/io/istrstream")(C++98/26*)  
[ostrstream](../ostrstream.html "cpp/io/ostrstream")(C++98/26*)  
[strstream](../strstream.html "cpp/io/strstream")(C++98/26*)  
Synchronized Output  
[basic_osyncstream](../basic_osyncstream.html "cpp/io/basic osyncstream")(C++20)  
Types  
[streamoff](../streamoff.html "cpp/io/streamoff")  
[streamsize](../streamsize.html "cpp/io/streamsize")  
[fpos](../fpos.html "cpp/io/fpos")  
Error category interface  
[iostream_category](../iostream_category.html "cpp/io/iostream category")(C++11)  
[io_errc](../io_errc.html "cpp/io/io errc")(C++11)  
  


[`std::io_errc`](../io_errc.html "cpp/io/io errc")

Non-member functions  
---  
[make_error_code(std::io_errc)](make_error_code.html "cpp/io/io errc/make error code")(C++11)  
**make_error_condition(std::io_errc)**(C++11)  
Helper classes  
[is_error_code_enum<std::io_errc>](is_error_code_enum.html "cpp/io/io errc/is error code enum")(C++11)  
  


Defined in header `[<ios>](../../header/ios.html "cpp/header/ios")` |  |   
---|---|---  
[std::error_condition](../../error/error_condition.html) make_error_condition( [std::io_errc](../io_errc.html) e ) noexcept; |  |  (since C++11)  
| |   
  
Constructs an [std::error_condition](../../error/error_condition.html "cpp/error/error condition") object from a value of type [std::io_errc](../io_errc.html "cpp/io/io errc") as if by return [std::error_condition](../../error/error_condition.html)(static_cast<int>(e), [std::iostream_category](../iostream_category.html)()). 

## Contents

  * [1 Parameters](make_error_condition.html#Parameters)
  * [2 Return value](make_error_condition.html#Return_value)
  * [3 Example](make_error_condition.html#Example)
  * [4 Defect reports](make_error_condition.html#Defect_reports)
  * [5 See also](make_error_condition.html#See_also)

  
---  
  
### Parameters

e  |  \-  |  error code number   
---|---|---  
  
### Return value

A value of type [std::error_condition](../../error/error_condition.html "cpp/error/error condition") that holds the error code number from e associated with the error category "iostream". 

### Example

Run this code
    
    
    #include <iostream>
    #include <system_error>
     
    int main()
    {
        [std::error_condition](../../error/error_condition.html) ec = [std::make_error_condition](../../error/errc/make_error_condition.html)([std::io_errc::stream](../io_errc.html));
        [std::cout](../cout.html) << "error condition for io_errc::stream has value " << ec.value()
                  << "\nand message \"" << ec.message() << "\"\n";
    }

Output: 
    
    
    error condition for io_errc::stream has value 1
    and message "unspecified iostream_category error"

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2087](https://cplusplus.github.io/LWG/issue2087) | C++11  | `make_error_condition(io_errc)` was not declared noexcept | declared noexcept  
  
### See also

[ error_condition](../../error/error_condition.html "cpp/error/error condition")(C++11) |  holds a portable error code   
(class)   
---|---  
[ io_errc](../io_errc.html "cpp/io/io errc")(C++11) |  the IO stream error codes   
(enum) 
