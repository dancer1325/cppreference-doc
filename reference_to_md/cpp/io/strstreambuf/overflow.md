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
[strstreambuf::underflow](underflow.html "cpp/io/strstreambuf/underflow")  
[strstreambuf::pbackfail](pbackfail.html "cpp/io/strstreambuf/pbackfail")  
**strstreambuf::overflow**  
[strstreambuf::setbuf](setbuf.html "cpp/io/strstreambuf/setbuf")  
[strstreambuf::seekoff](seekoff.html "cpp/io/strstreambuf/seekoff")  
[strstreambuf::seekpos](seekpos.html "cpp/io/strstreambuf/seekpos")  
  


protected:  
virtual int_type overflow( int_type c = [EOF](../c.html) ); |  |  (deprecated in C++98)   
(removed in C++26)  
---|---|---  
| |   
  
Appends the character c to the put area of the buffer, reallocating if possible. 

1) If c == [EOF](../c.html), does nothing.

2) Otherwise, if the put area has a write position available (pptr() < epptr()), stores the character as if by *pptr()++ = c.

3) Otherwise, if the stream buffer mode is not dynamic or the stream buffer is currently frozen, the function fails and returns [EOF](../c.html).

4) Otherwise, the function reallocates (or initially allocates) a dynamic array large enough to hold the contents of the current dynamic array (if any) plus at least one additional write position. If a pointer to the allocating function `palloc` was used in the constructor, that function is called with (*palloc)(n) where `n` is the number of bytes to allocate, otherwise new char[n] is used. If a pointer to the deallocating function `pfree` was used in the constructor, that function is called with (*pfree)(p) to deallocate the previous array, if needed, otherwise delete[] p is used. If allocation fails, the function fails and returns [EOF](../c.html). 

## Contents

  * [1 Parameters](overflow.html#Parameters)
  * [2 Return value](overflow.html#Return_value)
  * [3 Example](overflow.html#Example)
  * [4 See also](overflow.html#See_also)

  
---  
  
### Parameters

c  |  \-  |  the character to store in the put area   
---|---|---  
  
### Return value

If c == [EOF](../c.html), returns some value other than [EOF](../c.html). Otherwise, returns (unsigned char)(c) on success, [EOF](../c.html "cpp/io/c") on failure. 

### Example

Run this code
    
    
    #include <iostream>
    #include <strstream>
     
    struct mybuf : [std::strstreambuf](../strstreambuf.html)
    {
        int_type overflow(int_type c) 
        {
            [std::cout](../cout.html) << "Before overflow(): size of the put area is " << epptr()-pbase()
                      << " with " << epptr()-pptr() << " write positions available\n";
            int_type rc = std::strstreambuf::overflow(c);
            [std::cout](../cout.html) << "After overflow(): size of the put area is " << epptr()-pbase()
                      << " with " << epptr()-pptr() << " write positions available\n";
            return rc;
        }
    };
     
    int main()
    {
        mybuf sbuf; // read-write dynamic strstreambuf
        [std::iostream](../basic_iostream.html) stream(&sbuf);
     
        stream << "Sufficiently long string to overflow the initial allocation, at least "
               << " on some systems.";
    }

Possible output: 
    
    
    Before overflow(): size of the put area is 16 with 0 write positions available
    After overflow(): size of the put area is 32 with 15 write positions available
    Before overflow(): size of the put area is 32 with 0 write positions available
    After overflow(): size of the put area is 64 with 31 write positions available
    Before overflow(): size of the put area is 64 with 0 write positions available
    After overflow(): size of the put area is 128 with 63 write positions available

### See also

[ overflow](../basic_streambuf/overflow.html "cpp/io/basic streambuf/overflow")[virtual] |  writes characters to the associated output sequence from the put area   
(virtual protected member function of `std::basic_streambuf<CharT,Traits>`)   
---|---  
[ overflow](../basic_stringbuf/overflow.html "cpp/io/basic stringbuf/overflow")[virtual] |  appends a character to the output sequence   
(virtual protected member function of `std::basic_stringbuf<CharT,Traits,Allocator>`)   
[ overflow](../basic_filebuf/overflow.html "cpp/io/basic filebuf/overflow")[virtual] |  writes characters to the associated file from the put area   
(virtual protected member function of `std::basic_filebuf<CharT,Traits>`)   
[ sputc](../basic_streambuf/sputc.html "cpp/io/basic streambuf/sputc") |  writes one character to the put area and advances the next pointer   
(public member function of `std::basic_streambuf<CharT,Traits>`)   
[ put](../basic_ostream/put.html "cpp/io/basic ostream/put") |  inserts a character   
(public member function of `std::basic_ostream<CharT,Traits>`) 
