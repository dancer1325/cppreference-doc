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
  


[`std::strstreambuf`](../strstreambuf.html "cpp/io/strstreambuf")

Public member functions  
---  
[strstreambuf::strstreambuf](strstreambuf.html "cpp/io/strstreambuf/strstreambuf")  
[strstreambuf::~strstreambuf](~strstreambuf.html "cpp/io/strstreambuf/~strstreambuf")  
[strstreambuf::freeze](freeze.html "cpp/io/strstreambuf/freeze")  
[strstreambuf::str](str.html "cpp/io/strstreambuf/str")  
[strstreambuf::pcount](pcount.html "cpp/io/strstreambuf/pcount")  
Protected member functions  
**strstreambuf::underflow**  
[strstreambuf::pbackfail](pbackfail.html "cpp/io/strstreambuf/pbackfail")  
[strstreambuf::overflow](overflow.html "cpp/io/strstreambuf/overflow")  
[strstreambuf::setbuf](setbuf.html "cpp/io/strstreambuf/setbuf")  
[strstreambuf::seekoff](seekoff.html "cpp/io/strstreambuf/seekoff")  
[strstreambuf::seekpos](seekpos.html "cpp/io/strstreambuf/seekpos")  
  


protected:  
virtual int_type underflow(); |  |  (deprecated in C++98)   
(removed in C++26)  
---|---|---  
| |   
  
Reads the next character from the get area of the buffer. 

If the input sequence has a read position available (gptr() < egptr(), returns (unsigned char)(*gptr()). 

Otherwise, if [pptr()](../basic_streambuf/pptr.html "cpp/io/basic streambuf/pptr") is not null and pptr() > egptr() (there is a put area and it is located after the get area), extends the end of the get area to include the characters that were recently written into the put area by incrementing [egptr()](../basic_streambuf/gptr.html "cpp/io/basic streambuf/gptr") to some value between gptr() and [pptr()](../basic_streambuf/pptr.html "cpp/io/basic streambuf/pptr"), and then returns (unsigned char)(*gptr()). 

Otherwise, returns [EOF](../c.html "cpp/io/c") to indicate failure. 

## Contents

  * [1 Parameters](underflow.html#Parameters)
  * [2 Return value](underflow.html#Return_value)
  * [3 Example](underflow.html#Example)
  * [4 See also](underflow.html#See_also)

  
---  
  
### Parameters

(none) 

### Return value

The next character in the get area, (unsigned char)(*gptr()) on success, [EOF](../c.html "cpp/io/c") on failure. 

### Example

Run this code
    
    
    #include <iostream>
    #include <strstream>
     
    struct mybuf : [std::strstreambuf](../strstreambuf.html)
    {
        int_type overflow(int_type c) 
        {
            [std::cout](../cout.html) << "Before overflow(): size of the get area is " << egptr()-eback()
                      << " size of the put area is " << epptr()-pbase() << '\n';
            int_type rc = std::strstreambuf::overflow(c);
            [std::cout](../cout.html) << "After overflow(): size of the get area is " << egptr()-eback()
                      << " size of the put area is " << epptr()-pbase() << '\n';
            return rc;
        }
     
        int_type underflow() 
        {
            [std::cout](../cout.html) << "Before underflow(): size of the get area is " << egptr()-eback()
                      << " size of the put area is " << epptr()-pbase() << '\n';
            int_type ch = std::strstreambuf::underflow();
            [std::cout](../cout.html) << "After underflow(): size of the get area is " << egptr()-eback()
                      << " size of the put area is " << epptr()-pbase() << '\n';
            if (ch == [EOF](../c.html))
                [std::cout](../cout.html) << "underflow() returns EOF\n";
            else
                [std::cout](../cout.html) << "underflow() returns '" << char(ch) << "'\n";
            return ch;
        }
    };
     
    int main()
    {
        mybuf sbuf; // read-write dynamic strstreambuf
        [std::iostream](../basic_iostream.html) stream(&sbuf);
     
        int n;
        stream >> n;
        stream.clear();
        stream << "123";
        stream >> n;
        [std::cout](../cout.html) << n << '\n';
    }

Possible output: 
    
    
    Before underflow(): size of the get area is 0 size of the put area is 0
    After underflow(): size of the get area is 0 size of the put area is 0
    underflow() returns EOF
    Before overflow(): size of the get area is 0 size of the put area is 0
    After overflow(): size of the get area is 0 size of the put area is 32
    Before underflow(): size of the get area is 0 size of the put area is 32
    After underflow(): size of the get area is 3 size of the put area is 32
    underflow() returns '1'
    Before underflow(): size of the get area is 3 size of the put area is 32
    After underflow(): size of the get area is 3 size of the put area is 32
    underflow() returns EOF
    123

### See also

[ underflow](../basic_streambuf/underflow.html "cpp/io/basic streambuf/underflow")[virtual] |  reads characters from the associated input sequence to the get area   
(virtual protected member function of `std::basic_streambuf<CharT,Traits>`)   
---|---  
[ underflow](../basic_stringbuf/underflow.html "cpp/io/basic stringbuf/underflow")[virtual] |  returns the next character available in the input sequence   
(virtual protected member function of `std::basic_stringbuf<CharT,Traits,Allocator>`)   
[ underflow](../basic_filebuf/underflow.html "cpp/io/basic filebuf/underflow")[virtual] |  reads from the associated file   
(virtual protected member function of `std::basic_filebuf<CharT,Traits>`)   
[ sgetc](../basic_streambuf/sgetc.html "cpp/io/basic streambuf/sgetc") |  reads one character from the input sequence without advancing the sequence   
(public member function of `std::basic_streambuf<CharT,Traits>`)   
[ get](../basic_istream/get.html "cpp/io/basic istream/get") |  extracts characters   
(public member function of `std::basic_istream<CharT,Traits>`) 
