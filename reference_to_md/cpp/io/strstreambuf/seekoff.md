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
[strstreambuf::overflow](overflow.html "cpp/io/strstreambuf/overflow")  
[strstreambuf::setbuf](setbuf.html "cpp/io/strstreambuf/setbuf")  
**strstreambuf::seekoff**  
[strstreambuf::seekpos](seekpos.html "cpp/io/strstreambuf/seekpos")  
  


protected:  
virtual pos_type seekoff( off_type off,  
ios_base::seekdir way,  
ios_base::openmode which = ios_base::in | ios_base::out ); |  |  (deprecated in C++98)   
(removed in C++26)  
---|---|---  
| |   
  
Repositions [std::basic_streambuf::gptr](../basic_streambuf/gptr.html "cpp/io/basic streambuf/gptr") and/or [std::basic_streambuf::pptr](../basic_streambuf/pptr.html "cpp/io/basic streambuf/pptr"), if possible, to the position that corresponds to exactly off characters from beginning, end, or current position of the get and/or put area of the buffer. 

  * If which includes ios_base::in and this buffer is open for reading, then repositions the read pointer [std::basic_streambuf::gptr](../basic_streambuf/gptr.html "cpp/io/basic streambuf/gptr") inside the get area as described below. 
  * If which includes ios_base::out and this buffer is open for writing, then repositions the write pointer [std::basic_streambuf::pptr](../basic_streambuf/pptr.html "cpp/io/basic streambuf/pptr") inside the put area as described below. 
  * If which includes both ios_base::in and `ios_base::out` and the buffer is open for both reading and writing, and way is either ios_base::beg or ios_base::end, then repositions both read and write pointers as described below. 
  * Otherwise, this function fails. 



If the pointer (either `gptr` or `pptr` or both) is repositioned, it is done as follows: 

1) If the pointer to be repositioned is a null pointer and the new offset newoff would be non-zero, this function fails.

2) The new pointer offset newoff of type `off_type` is determined

a) if way == ios_base::beg, then newoff is zero

b) if way == ios_base::cur, then newoff is the current position of the pointer (gptr() - eback() or pptr() - pbase())

c) if way == ios_base::end, then newoff is the length of the entire initialized part of the buffer (if overallocation is used, the high watermark pointer minus the beginning pointer)

3) If newoff + off is negative or out of bounds of the initialized part of the buffer, the function fails

4) Otherwise, the pointer is assigned as if by gptr() = eback() + newoff + off or pptr() = pbase() + newoff + off

## Contents

  * [1 Parameters](seekoff.html#Parameters)
  * [2 Return value](seekoff.html#Return_value)
  * [3 Example](seekoff.html#Example)
  * [4 Defect reports](seekoff.html#Defect_reports)
  * [5 See also](seekoff.html#See_also)

  
---  
  
### Parameters

off  |  \-  |  relative position to set the next pointer(s) to   
---|---|---  
way  |  \-  |  defines base position to apply the relative offset to. It can be one of the following constants:  |  Constant  |  Explanation   
---|---  
[`beg`](../ios_base/seekdir.html "cpp/io/ios base/seekdir") |  the beginning of a stream   
[`end`](../ios_base/seekdir.html "cpp/io/ios base/seekdir") |  the ending of a stream   
[`cur`](../ios_base/seekdir.html "cpp/io/ios base/seekdir") |  the current position of stream position indicator   
which  |  \-  |  defines whether the input sequences, the output sequence, or both are affected. It can be one or a combination of the following constants:  |  Constant  |  Explanation   
---|---  
[`in`](../ios_base/openmode.html "cpp/io/ios base/openmode") |  affect the input sequence   
[`out`](../ios_base/openmode.html "cpp/io/ios base/openmode") |  affect the output sequence   
  
### Return value

pos_type(newoff) on success, pos_type(off_type(-1)) on failure and if pos_type cannot represent the resulting stream position. 

### Example

Run this code
    
    
    #include <iostream>
    #include <strstream>
     
    int main()
    {
        char a[] = "123";
        [std::strstream](../strstream.html) ss(a, sizeof a); // in/out
        [std::cout](../cout.html) << "put pos = " << ss.tellp()
                  << " get pos = " << ss.tellg() << '\n';
     
        // absolute positioning both pointers
        ss.rdbuf()->pubseekoff(1, [std::ios_base::beg](../ios_base/seekdir.html)); // move both forward
        [std::cout](../cout.html) << "put pos = " << ss.tellp()
                  << " get pos = " << ss.tellg() << '\n';
     
        // try to move both pointers 1 forward from current position
        if (-1 == ss.rdbuf()->pubseekoff(1, [std::ios_base::cur](../ios_base/seekdir.html)))
            [std::cout](../cout.html) << "moving both pointers from current position failed\n";
        [std::cout](../cout.html) << "put pos = " << ss.tellp()
                  << " get pos = " << ss.tellg() << '\n';
     
        // move the write pointer 1 forward, but not the read pointer
        // can also be called as ss.seekp(1, std::ios_base::cur);
        ss.rdbuf()->pubseekoff(1, [std::ios_base::cur](../ios_base/seekdir.html), [std::ios_base::out](../ios_base/openmode.html));
        [std::cout](../cout.html) << "put pos = " << ss.tellp()
                  << " get pos = " << ss.tellg() << '\n';
     
        ss << 'a'; // write at put position
        [std::cout](../cout.html) << "Wrote 'a' at put position, the buffer is now: '";
        [std::cout](../cout.html).write(a, sizeof a);
        [std::cout](../cout.html) << "'\n";
     
        char ch;
        ss >> ch;
        [std::cout](../cout.html) << "reading at get position gives '" << ch << "'\n";
    }

Output: 
    
    
    put pos = 0 get pos = 0
    put pos = 1 get pos = 1
    moving both pointers from current position failed
    put pos = 1 get pos = 1
    put pos = 2 get pos = 1
    Wrote 'a' at put position, the buffer is now: '12a'
    reading at get position gives '2'

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 55](https://cplusplus.github.io/LWG/issue55) | C++98  | `seekoff` returned an undefined  
invalid stream position on failure  | pos_type(off_type(-1))  
is returned on failure   
  
### See also

[ seekpos](seekpos.html "cpp/io/strstreambuf/seekpos")[virtual] |  repositions the next pointer in the input sequence, output sequence, or both using absolute addressing   
(virtual protected member function)   
---|---  
[ seekoff](../basic_streambuf/pubseekoff.html "cpp/io/basic streambuf/pubseekoff")[virtual] |  repositions the next pointer in the input sequence, output sequence, or both, using relative addressing   
(virtual protected member function of `std::basic_streambuf<CharT,Traits>`)   
[ seekoff](../basic_stringbuf/seekoff.html "cpp/io/basic stringbuf/seekoff")[virtual] |  repositions the next pointer in the input sequence, output sequence, or both, using relative addressing   
(virtual protected member function of `std::basic_stringbuf<CharT,Traits,Allocator>`)   
[ seekoff](../basic_filebuf/seekoff.html "cpp/io/basic filebuf/seekoff")[virtual] |  repositions the file position, using relative addressing   
(virtual protected member function of `std::basic_filebuf<CharT,Traits>`) 
