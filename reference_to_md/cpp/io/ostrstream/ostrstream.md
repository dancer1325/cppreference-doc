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
**ostrstream::ostrstream**  
[ostrstream::~ostrstream](~ostrstream.html "cpp/io/ostrstream/~ostrstream")  
[ostrstream::rdbuf](rdbuf.html "cpp/io/ostrstream/rdbuf")  
[ostrstream::str](str.html "cpp/io/ostrstream/str")  
[ostrstream::freeze](freeze.html "cpp/io/ostrstream/freeze")  
[ostrstream::pcount](pcount.html "cpp/io/ostrstream/pcount")  
  


ostrstream(); |  (1)  |  (deprecated in C++98)   
(removed in C++26)  
---|---|---  
ostrstream( char* s, int n, [std::ios_base::openmode](../ios_base/openmode.html) mode = [std::ios_base::out](../ios_base/openmode.html) ); |  (2)  |  (deprecated in C++98)   
(removed in C++26)  
| |   
  
Constructs new output strstream and its underlying [std::strstreambuf](../strstreambuf.html "cpp/io/strstreambuf"). 

1) Default-constructs the underlying [std::strstreambuf](../strstreambuf.html "cpp/io/strstreambuf"), which creates a dynamically growing buffer, and initializes the base class with the address of the `strstreambuf` member.

2) Initialized the base class with the address of the underlying [std::strstreambuf](../strstreambuf.html "cpp/io/strstreambuf") member, which is initialized in one of the two possible ways, both of which write to user-provided fixed-size array:

a) if the `app` bit is not set in mode, constructs the buffer by calling strstreambuf(s, n, s). The behavior is undefined if there are less than n elements in the array whose first element is pointed to by s

b) if the `app` bit is set in mode, constructs the buffer by calling strstreambuf(s, n, s + [std::strlen](../../string/byte/strlen.html)(s)). The behavior is undefined if there are less than n elements in the array whose first element is pointed to by s or if the array does not contain a valid null-terminated character sequence.

### Parameters

s  |  \-  |  char array to use as the output buffer   
---|---|---  
n  |  \-  |  size of the array to be used as the output buffer   
mode  |  \-  |  specifies stream open mode. It is a bitmask type, the following constants are defined (although only `app` is used):  |  Constant  |  Explanation   
---|---  
[`app`](../ios_base/openmode.html "cpp/io/ios base/openmode") |  seek to the end of stream before each write   
[`binary`](../ios_base/openmode.html "cpp/io/ios base/openmode") |  open in [binary mode](../c/FILE.html#Binary_and_text_modes "cpp/io/c/FILE")  
[`in`](../ios_base/openmode.html "cpp/io/ios base/openmode") |  open for reading   
[`out`](../ios_base/openmode.html "cpp/io/ios base/openmode") |  open for writing   
[`trunc`](../ios_base/openmode.html "cpp/io/ios base/openmode") |  discard the contents of the stream when opening   
[`ate`](../ios_base/openmode.html "cpp/io/ios base/openmode") |  seek to the end of stream immediately after open   
[`noreplace`](../ios_base/openmode.html "cpp/io/ios base/openmode") (C++23) |  open in exclusive mode   
  
### Example

Run this code
    
    
    #include <iostream>
    #include <strstream>
     
    int main()
    {
        [std::ostrstream](../ostrstream.html) s1; // dynamic buffer
        s1 << 1 << ' ' << 3.14 << " example\n" << [std::ends](../manip/ends.html);
        [std::cout](../cout.html) << s1.str();
        s1.freeze(false);
     
        char arr[15] = "Hello";
     
        [std::ostrstream](../ostrstream.html) s2(arr, sizeof arr, [std::ios_base::app](../ios_base/openmode.html));
        s2 << ", world!" << [std::ends](../manip/ends.html);
        [std::cout](../cout.html) << s2.str() << '\n';
        [std::cout](../cout.html) << arr << '\n'; // streams use the provided arrays
    }

Output: 
    
    
    1 3.14 example
    Hello, world!
    Hello, world!

### See also

[ (constructor)](../strstreambuf/strstreambuf.html "cpp/io/strstreambuf/strstreambuf") |  constructs a `strstreambuf` object   
(public member function of `std::strstreambuf`)   
---|---  
[ (constructor)](../istrstream/istrstream.html "cpp/io/istrstream/istrstream") |  constructs an `istrstream` object, optionally allocating the buffer   
(public member function of `std::istrstream`)   
[ (constructor)](../strstream/strstream.html "cpp/io/strstream/strstream") |  constructs a `strstream` object, optionally allocating the buffer   
(public member function of `std::strstream`) 
