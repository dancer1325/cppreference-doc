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

[Input/output library](../io.html "cpp/io")

[I/O manipulators](manip.html "cpp/io/manip")  
---  
[Print functions](../io.html#Print_functions_.28since_C.2B.2B23.29 "cpp/io") (C++23)  
[C-style I/O](c.html "cpp/io/c")  
Buffers  
[basic_streambuf](basic_streambuf.html "cpp/io/basic streambuf")  
[basic_filebuf](basic_filebuf.html "cpp/io/basic filebuf")  
[basic_stringbuf](basic_stringbuf.html "cpp/io/basic stringbuf")  
[basic_spanbuf](basic_spanbuf.html "cpp/io/basic spanbuf")(C++23)  
[strstreambuf](strstreambuf.html "cpp/io/strstreambuf")(C++98/26*)  
[basic_syncbuf](basic_syncbuf.html "cpp/io/basic syncbuf")(C++20)  
Streams  
Abstractions  
[ios_base](ios_base.html "cpp/io/ios base")  
[basic_ios](basic_ios.html "cpp/io/basic ios")  
[basic_istream](basic_istream.html "cpp/io/basic istream")  
[basic_ostream](basic_ostream.html "cpp/io/basic ostream")  
[basic_iostream](basic_iostream.html "cpp/io/basic iostream")  
File I/O  
[basic_ifstream](basic_ifstream.html "cpp/io/basic ifstream")  
[basic_ofstream](basic_ofstream.html "cpp/io/basic ofstream")  
[basic_fstream](basic_fstream.html "cpp/io/basic fstream")  
String I/O  
[basic_istringstream](basic_istringstream.html "cpp/io/basic istringstream")  
[basic_ostringstream](basic_ostringstream.html "cpp/io/basic ostringstream")  
[basic_stringstream](basic_stringstream.html "cpp/io/basic stringstream")  
Array I/O  
[basic_ispanstream](basic_ispanstream.html "cpp/io/basic ispanstream")(C++23)  
[basic_ospanstream](basic_ospanstream.html "cpp/io/basic ospanstream")(C++23)  
[basic_spanstream](basic_spanstream.html "cpp/io/basic spanstream")(C++23)  
[istrstream](istrstream.html "cpp/io/istrstream")(C++98/26*)  
[ostrstream](ostrstream.html "cpp/io/ostrstream")(C++98/26*)  
[strstream](strstream.html "cpp/io/strstream")(C++98/26*)  
Synchronized Output  
[basic_osyncstream](basic_osyncstream.html "cpp/io/basic osyncstream")(C++20)  
Types  
[streamoff](streamoff.html "cpp/io/streamoff")  
[streamsize](streamsize.html "cpp/io/streamsize")  
[fpos](fpos.html "cpp/io/fpos")  
Error category interface  
**iostream_category**(C++11)  
[io_errc](io_errc.html "cpp/io/io errc")(C++11)  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/navbar_content&action=edit)

Defined in header `[<ios>](../header/ios.html "cpp/header/ios")` |  |   
---|---|---  
const [std::error_category](../error/error_category.html)& iostream_category() noexcept; |  |  (since C++11)  
| |   
  
Obtains a reference to the static error category object for iostream errors. The object is required to override the virtual function error_category::name() to return a pointer to the string "iostream". It is used to identify error codes provided in the exceptions of type [std::ios_base::failure](ios_base/failure.html "cpp/io/ios base/failure"). 

## Contents

  * [1 Parameters](iostream_category.html#Parameters)
  * [2 Return value](iostream_category.html#Return_value)
  * [3 Example](iostream_category.html#Example)
  * [4 Defect reports](iostream_category.html#Defect_reports)
  * [5 See also](iostream_category.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/iostream_category&action=edit&section=1 "Edit section: Parameters")] Parameters

(none) 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/iostream_category&action=edit&section=2 "Edit section: Return value")] Return value

A reference to the static object of unspecified runtime type, derived from [std::error_category](../error/error_category.html "cpp/error/error category"). 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/iostream_category&action=edit&section=3 "Edit section: Example")] Example

Run this code
    
    
    #include <fstream>
    #include <iostream>
     
    int main()
    {
        [std::ifstream](basic_ifstream.html) f("doesn't exist");
        try
        {
            f.exceptions(f.failbit);
        }
        catch (const [std::ios_base::failure](ios_base/failure.html)& e)
        {
            [std::cout](cout.html) << "Caught an ios_base::failure.\n"
                      << "Error code: " << e.code().value() 
                      << " (" << e.code().message() << ")\n"
                      << "Error category: " << e.code().category().name() << '\n';
     
        }
    }

Possible output: 
    
    
    Caught an ios_base::failure.
    Error code: 1 (unspecified iostream_category error)
    Error category: iostream

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/iostream_category&action=edit&section=4 "Edit section: Defect reports")] Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2087](https://cplusplus.github.io/LWG/issue2087) | C++11  | `iostream_category` was not declared noexcept | declared noexcept  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/iostream_category&action=edit&section=5 "Edit section: See also")] See also

[ failure](ios_base/failure.html "cpp/io/ios base/failure") |  stream exception   
(public member class of `std::ios_base`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_failure&action=edit)  
---|---  
[ io_errc](io_errc.html "cpp/io/io errc")(C++11) |  the IO stream error codes   
(enum) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_io_errc&action=edit)
