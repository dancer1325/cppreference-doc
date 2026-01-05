[[edit template]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/strstream/freeze&action=edit)

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
  


[`std::ostrstream`](../ostrstream.html "cpp/io/ostrstream")

Member functions  
---  
[ostrstream::ostrstream](ostrstream.html "cpp/io/ostrstream/ostrstream")  
[ostrstream::~ostrstream](~ostrstream.html "cpp/io/ostrstream/~ostrstream")  
[ostrstream::rdbuf](rdbuf.html "cpp/io/ostrstream/rdbuf")  
[ostrstream::str](str.html "cpp/io/ostrstream/str")  
**ostrstream::freeze**  
[ostrstream::pcount](pcount.html "cpp/io/ostrstream/pcount")  
  


void freeze( bool flag = true ); |  |  (deprecated in C++98)   
(removed in C++26)  
---|---|---  
| |   
  
If the stream is using a dynamically-allocated array for output, disables (flag == true) or enables (flag == false) automatic allocation/deallocation of the buffer. Effectively calls rdbuf()->freeze(flag). 

## Contents

  * [1 Notes](freeze.html#Notes)
  * [2 Parameters](freeze.html#Parameters)
  * [3 Return value](freeze.html#Return_value)
  * [4 Example](freeze.html#Example)
  * [5 See also](freeze.html#See_also)

  
---  
  
### Notes

After a call to [str()](str.html "cpp/io/ostrstream/str"), dynamic streams become frozen automatically. A call to freeze(false) is required before exiting the scope in which this ostrstream object was created, otherwise the destructor will leak memory. Also, additional output to a frozen stream may be truncated once it reaches the end of the allocated buffer. 

### Parameters

flag  |  \-  |  desired status   
---|---|---  
  
### Return value

(none) 

### Example

Run this code
    
    
    #include <iostream>
    #include <strstream>
     
    int main()
    {
        [std::ostrstream](../ostrstream.html) dyn; // dynamically-allocated output buffer
        dyn << "Test: " << 1.23; // note: no std::ends to demonstrate appending
        [std::cout](../cout.html) << "The output stream contains \"";
        [std::cout](../cout.html).write(dyn.str(), dyn.pcount()) << "\"\n";
        // the stream is now frozen due to str()
        dyn << " More text"; // output to a frozen stream may be truncated
        [std::cout](../cout.html) << "The output stream contains \"";
        [std::cout](../cout.html).write(dyn.str(), dyn.pcount()) << "\"\n";
        dyn.freeze(false); // freeze(false) must be called or the  destructor will leak
     
        [std::ostrstream](../ostrstream.html) dyn2; // dynamically-allocated output buffer
        dyn2 << "Test: " << 1.23; // note: no std::ends
        [std::cout](../cout.html) << "The output stream contains \"";
        [std::cout](../cout.html).write(dyn2.str(), dyn2.pcount()) << "\"\n";
        dyn2.freeze(false);   // unfreeze the stream after str()
        dyn2 << " More text" << [std::ends](../manip/ends.html); // output will not be truncated (buffer grows)
        [std::cout](../cout.html) << "The output stream contains \"" << dyn2.str() << "\"\n";
        dyn2.freeze(false); // freeze(false) must be called or the  destructor will leak 
    }

Possible output: 
    
    
    The output stream contains "Test: 1.23"
    The output stream contains "Test: 1.23 More "
    The output stream contains "Test: 1.23"
    The output stream contains "Test: 1.23 More text"

### See also

[ freeze](../strstreambuf/freeze.html "cpp/io/strstreambuf/freeze") |  sets/clears the frozen state of the buffer   
(public member function of `std::strstreambuf`)   
---|---
