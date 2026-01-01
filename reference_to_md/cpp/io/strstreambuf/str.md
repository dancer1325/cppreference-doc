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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/navbar_content&action=edit)

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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/navbar_content&action=edit)

[`std::strstreambuf`](../strstreambuf.html "cpp/io/strstreambuf")

Public member functions  
---  
[strstreambuf::strstreambuf](strstreambuf.html "cpp/io/strstreambuf/strstreambuf")  
[strstreambuf::~strstreambuf](~strstreambuf.html "cpp/io/strstreambuf/~strstreambuf")  
[strstreambuf::freeze](freeze.html "cpp/io/strstreambuf/freeze")  
**strstreambuf::str**  
[strstreambuf::pcount](pcount.html "cpp/io/strstreambuf/pcount")  
Protected member functions  
[strstreambuf::underflow](underflow.html "cpp/io/strstreambuf/underflow")  
[strstreambuf::pbackfail](pbackfail.html "cpp/io/strstreambuf/pbackfail")  
[strstreambuf::overflow](overflow.html "cpp/io/strstreambuf/overflow")  
[strstreambuf::setbuf](setbuf.html "cpp/io/strstreambuf/setbuf")  
[strstreambuf::seekoff](seekoff.html "cpp/io/strstreambuf/seekoff")  
[strstreambuf::seekpos](seekpos.html "cpp/io/strstreambuf/seekpos")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/strstreambuf/navbar_content&action=edit)

char* str(); |  |  (deprecated in C++98)   
(removed in C++26)  
---|---|---  
| |   
  
Calls [freeze()](freeze.html "cpp/io/strstreambuf/freeze"), then returns a copy of start pointer of the get area, [std::streambuf::eback()](../basic_streambuf/gptr.html "cpp/io/basic streambuf/gptr"). 

The start of the get area, for all writeable `std::strstreambuf` objects constructed through the interface provided by [std::strstream](../strstream.html "cpp/io/strstream"), is also the start of the put area. 

## Contents

  * [1 Parameters](str.html#Parameters)
  * [2 Return value](str.html#Return_value)
  * [3 Notes](str.html#Notes)
  * [4 Example](str.html#Example)
  * [5 See also](str.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/strstreambuf/str&action=edit&section=1 "Edit section: Parameters")] Parameters

(none) 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/strstreambuf/str&action=edit&section=2 "Edit section: Return value")] Return value

A copy of [eback()](../basic_streambuf/gptr.html "cpp/io/basic streambuf/gptr"), which may be a null pointer. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/strstreambuf/str&action=edit&section=3 "Edit section: Notes")] Notes

This function is typically called through the [std::strstream](../strstream.html "cpp/io/strstream") interface. 

The call to [freeze()](freeze.html "cpp/io/strstreambuf/freeze") guarantees that the returned pointer remains valid until the next explicit call to [freeze](freeze.html "cpp/io/strstreambuf/freeze")(false): otherwise (on a dynamic buffer) any output operation could trigger buffer reallocation which would invalidate the pointer. It also causes a memory leak in the destructor of `std::strstreambuf`, unless freeze(false) is called before the buffer (or, more commonly, the [std::strstream](../strstream.html) that manages it) is destroyed. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/strstreambuf/str&action=edit&section=4 "Edit section: Example")] Example

Run this code
    
    
    #include <iostream>
    #include <strstream>
     
    int main()
    {
        [std::strstream](../strstream.html) dyn; // dynamically-allocated read/write buffer
        dyn << "Test: " << 1.23 << [std::ends](../manip/ends.html);
        [std::strstreambuf](../strstreambuf.html)* buf = dyn.rdbuf();
        [std::cout](../cout.html) << "R/W buffer holds [" << buf->str() // or dyn.str()
                  << "]\n";
        dyn.freeze(false); // after calling .str() on a dynamic strstream
     
        char arr[10];
        [std::ostrstream](../ostrstream.html) user(arr, 10); // fixed-size write-only buffer
        buf = user.rdbuf();
        user << 1.23 << [std::ends](../manip/ends.html);
        [std::cout](../cout.html) << "Write-only buffer holds [" << buf->str() // or user.str()
                  << "]\n";
     
        [std::istrstream](../istrstream.html) lit("1 2 3"); // fixed-size read-only buffer
        buf = lit.rdbuf();
        [std::cout](../cout.html) << "Read-only buffer holds [" << buf->str() // or lit.str()
                  << "]\n";
    }

Output: 
    
    
    R/W buffer holds [Test: 1.23]
    Write-only buffer holds [1.23]
    Read-only buffer holds [1 2 31 2 3]

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/strstreambuf/str&action=edit&section=5 "Edit section: See also")] See also

[ str](../strstream/str.html "cpp/io/strstream/str") |  accesses the output buffer   
(public member function of `std::strstream`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/strstream/dsc_str&action=edit)  
---|---  
[ str](../ostrstream/str.html "cpp/io/ostrstream/str") |  accesses the output buffer   
(public member function of `std::ostrstream`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/strstream/dsc_str&action=edit)  
[ str](../istrstream/str.html "cpp/io/istrstream/str") |  accesses the output buffer   
(public member function of `std::istrstream`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/strstream/dsc_str&action=edit)
