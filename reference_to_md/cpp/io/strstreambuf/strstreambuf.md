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
**strstreambuf::strstreambuf**  
[strstreambuf::~strstreambuf](~strstreambuf.html "cpp/io/strstreambuf/~strstreambuf")  
[strstreambuf::freeze](freeze.html "cpp/io/strstreambuf/freeze")  
[strstreambuf::str](str.html "cpp/io/strstreambuf/str")  
[strstreambuf::pcount](pcount.html "cpp/io/strstreambuf/pcount")  
Protected member functions  
[strstreambuf::underflow](underflow.html "cpp/io/strstreambuf/underflow")  
[strstreambuf::pbackfail](pbackfail.html "cpp/io/strstreambuf/pbackfail")  
[strstreambuf::overflow](overflow.html "cpp/io/strstreambuf/overflow")  
[strstreambuf::setbuf](setbuf.html "cpp/io/strstreambuf/setbuf")  
[strstreambuf::seekoff](seekoff.html "cpp/io/strstreambuf/seekoff")  
[strstreambuf::seekpos](seekpos.html "cpp/io/strstreambuf/seekpos")  
  


| (1) |   
---|---|---  
explicit strstreambuf( [std::streamsize](../streamsize.html) alsize = 0 ); |  | (deprecated in C++98)  
(until C++11)  
strstreambuf() : strstreambuf(0) {}  
explicit strstreambuf( [std::streamsize](../streamsize.html) alsize ); |  |  (since C++11)(removed in C++26)  
strstreambuf( void* (*palloc)([std::size_t](../../types/size_t.html)), void (*pfree)(void*) ); |  (2)  |  (deprecated in C++98)   
(removed in C++26)  
strstreambuf( char* gnext, [std::streamsize](../streamsize.html) n, char* pbeg = 0 ); |  (3)  |  (deprecated in C++98)   
(removed in C++26)  
strstreambuf( signed char* gnext, [std::streamsize](../streamsize.html) n, signed char* pbeg = 0 ); |  (4)  |  (deprecated in C++98)   
(removed in C++26)  
strstreambuf( unsigned char* gnext, [std::streamsize](../streamsize.html) n, unsigned char* pbeg = 0 ); |  (5)  |  (deprecated in C++98)   
(removed in C++26)  
strstreambuf( const char* gnext, [std::streamsize](../streamsize.html) n ); |  (6)  |  (deprecated in C++98)   
(removed in C++26)  
strstreambuf( const signed char* gnext, [std::streamsize](../streamsize.html) n ); |  (7)  |  (deprecated in C++98)   
(removed in C++26)  
strstreambuf( const unsigned char* gnext, [std::streamsize](../streamsize.html) n ); |  (8)  |  (deprecated in C++98)   
(removed in C++26)  
| |   
  
1) Constructs a `std::strstreambuf` object: initializes the base class by calling the default constructor of [std::streambuf](../basic_streambuf.html "cpp/io/basic streambuf"), initializes the buffer state to "dynamic" (the buffer will be allocated as needed), initializes allocated size to the provided alsize, initializes the allocation and the deallocation functions to null (will use new[] and delete[]).

2) Constructs a `std::strstreambuf` object: initializes the base class by calling the default constructor of [std::streambuf](../basic_streambuf.html "cpp/io/basic streambuf"), initializes the buffer state to "dynamic" (the buffer will be allocated as needed), initializes allocated size to unspecified value, initializes the allocation function to palloc and the deallocation function to pfree.

3-5) Constructs a `std::strstreambuf` object in following steps:

a) Initializes the base class by calling the default constructor of [std::streambuf](../basic_streambuf.html "cpp/io/basic streambuf").

b) Initializes the buffer state to "constant" (the buffer is a user-provided fixed-size buffer).

c) Determines the number of elements in the user-provided array as follows: if n is greater than zero, n is used. If n is zero, [std::strlen](../../string/byte/strlen.html)(gnext) is executed to determine the buffer size. If n is negative, [INT_MAX](../../types/climits.html "cpp/types/climits") is used.

d) Configures the [std::basic_streambuf](../basic_streambuf.html "cpp/io/basic streambuf") pointers as follows: If pbeg is a null pointer, calls setg(gnext, gnext, gnext + N). If pbeg is not a null pointer, executes setg(gnext, gnext, pbeg) and setp(pbeg, pbeg + N), where N is the number of elements in the array as determined earlier.

6-8) Same as strstreambuf((char*)gnext, n), except the "constant" bit is set in the buffer state bitmask (output to this buffer is not allowed).

## Contents

  * [1 Parameters](strstreambuf.html#Parameters)
  * [2 Notes](strstreambuf.html#Notes)
  * [3 Defect reports](strstreambuf.html#Defect_reports)
  * [4 Example](strstreambuf.html#Example)
  * [5 See also](strstreambuf.html#See_also)

  
---  
  
### Parameters

alsize  |  \-  |  the initial size of the dynamically allocated buffer   
---|---|---  
palloc  |  \-  |  pointer to user-provided allocation function   
pfree  |  \-  |  pointer to user-provided deallocation function   
gnext  |  \-  |  pointer to the start of the get area in the user-provided array   
pbeg  |  \-  |  pointer to the start of the put area in the user-provided array   
n  |  \-  |  the number of bytes in the get area (if pbeg is null) or in the put area (if pbeg is not null) of the user-provided array   
  
### Notes

These constructors are typically called by the constructors of [std::strstream](../strstream.html). 

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[P0935R0](https://wg21.link/P0935R0) | C++11  | default constructor was explicit  | made implicit   
  
### Example

Run this code
    
    
    #include <iostream>
    #include <strstream>
     
    int main()
    {
        [std::strstreambuf](../strstreambuf.html) dyn; // dynamic
        [std::strstream](../strstream.html) dyn_s; // equivalent stream
        dyn_s << 1.23 << [std::ends](../manip/ends.html);
        [std::cout](../cout.html) << dyn_s.str() << '\n';
        dyn_s.freeze(false);
     
        char buf[10];
        [std::strstreambuf](../strstreambuf.html) user(buf, 10, buf); // user-provided output buffer
        [std::ostrstream](../ostrstream.html) user_s(buf, 10); // equivalent stream
        user_s << 1.23 << [std::ends](../manip/ends.html);
        [std::cout](../cout.html) << buf << '\n';
     
        [std::strstreambuf](../strstreambuf.html) lit("1 2 3", 5); // constant
        [std::istrstream](../istrstream.html) lit_s("1 2 3"); // equivalent stream
        int i, j, k;
        lit_s >> i >> j >> k;
        [std::cout](../cout.html) << i << ' ' << j << ' ' << k << '\n';
    }

Output: 
    
    
    1.23
    1.23
    1 2 3

### See also

[ (constructor)](../strstream/strstream.html "cpp/io/strstream/strstream") |  constructs a `strstream` object, optionally allocating the buffer   
(public member function of `std::strstream`)   
---|---
