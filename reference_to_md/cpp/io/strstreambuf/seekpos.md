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
[strstreambuf::seekoff](seekoff.html "cpp/io/strstreambuf/seekoff")  
**strstreambuf::seekpos**  
  


protected:  
virtual pos_type seekpos( pos_type sp,  
[std::ios_base::openmode](../ios_base/openmode.html) which =  
[std::ios_base::in](../ios_base/openmode.html) | [std::ios_base::out](../ios_base/openmode.html) ); |  |  (deprecated in C++98)   
(removed in C++26)  
---|---|---  
| |   
  
Repositions [std::basic_streambuf::gptr](../basic_streambuf/gptr.html "cpp/io/basic streambuf/gptr") and/or [std::basic_streambuf::pptr](../basic_streambuf/pptr.html "cpp/io/basic streambuf/pptr"), if possible, to the position indicated by sp. 

If [std::ios_base::in](../ios_base/openmode.html "cpp/io/ios base/openmode") is set in which, attempts to reposition `gptr()` (the next pointer in the get area). If [std::ios_base::out](../ios_base/openmode.html "cpp/io/ios base/openmode") is set in which, attempts to reposition `pptr()` (the next pointer in the put area). If neither bit is set in which, the operation fails. 

Each next pointer is repositioned as follows: 

  * If the next pointer is null, the operation fails. 
  * Otherwise, the new offset newoff (of type `off_type`) is determined by calling sp.offset(). If newoff is negative, out of bounds of the buffer, or invalid, the operation fails. 
  * Otherwise, the next pointer is assigned as if by gptr() = eback() + newoff or pptr() = pbase() + newoff. 



## Contents

  * [1 Parameters](seekpos.html#Parameters)
  * [2 Return value](seekpos.html#Return_value)
  * [3 Notes](seekpos.html#Notes)
  * [4 Example](seekpos.html#Example)
  * [5 Defect reports](seekpos.html#Defect_reports)
  * [6 See also](seekpos.html#See_also)

  
---  
  
### Parameters

sp  |  \-  |  stream position, such as one obtained by [seekoff()](seekoff.html "cpp/io/strstreambuf/seekoff") or `seekpos()`  
---|---|---  
which  |  \-  |  defines whether the input sequences, the output sequence, or both are affected. It can be one or a combination of the following constants:  |  Constant  |  Explanation   
---|---  
[`in`](../ios_base/openmode.html "cpp/io/ios base/openmode") |  affect the input sequence   
[`out`](../ios_base/openmode.html "cpp/io/ios base/openmode") |  affect the output sequence   
  
### Return value

The resultant offset converted to `pos_type` on success or pos_type(off_type(-1)) on failure. 

### Notes

`seekpos()` is called by [std::basic_streambuf::pubseekpos()](../basic_streambuf/pubseekpos.html "cpp/io/basic streambuf/pubseekpos"), which is called by the single-argument versions of [std::basic_istream::seekg()](../basic_istream/seekg.html "cpp/io/basic istream/seekg") and [std::basic_ostream::seekp()](../basic_ostream/seekp.html "cpp/io/basic ostream/seekp"). 

### Example

Run this code
    
    
    #include <cstring>
    #include <iostream>
    #include <strstream>
     
    struct mybuf : [std::strstreambuf](../strstreambuf.html)
    {
        mybuf(const char* str) : [std::strstreambuf](../strstreambuf.html)(str, [std::strlen](../../string/byte/strlen.html)(str)) {}
     
        pos_type seekpos(pos_type sp, [std::ios_base::openmode](../ios_base/openmode.html) which)
        {
            [std::cout](../cout.html) << "Before seekpos(" << sp << "), size of the get area is "
                      << egptr() - eback() << " with "
                      << egptr() - gptr() << " read positions available.\n";
     
            pos_type rc = std::strstreambuf::seekpos(sp, which);
     
            [std::cout](../cout.html) << "seekpos() returns " << rc << ".\nAfter the call, "
                      << "size of the get area is "
                      << egptr() - eback() << " with "
                      << egptr() - gptr() << " read positions available.\n";
     
            return rc;
        }
    };
     
    int main()
    {
        mybuf buf("12345");
        [std::iostream](../basic_iostream.html) stream(&buf);
        stream.seekg(2);
    }

Output: 
    
    
    Before seekpos(2), size of the get area is 5 with 5 read positions available.
    seekpos() returns 2.
    After the call, size of the get area is 5 with 3 read positions available.

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 55](https://cplusplus.github.io/LWG/issue55) | C++98  | `seekpos` returned an undefined  
invalid stream position on failure  | pos_type(off_type(-1))  
is returned on failure   
  
### See also

[ seekoff](seekoff.html "cpp/io/strstreambuf/seekoff")[virtual] |  repositions the next pointer in the input sequence, output sequence, or both, using relative addressing   
(virtual protected member function)   
---|---  
[ seekpos](../basic_streambuf/pubseekpos.html "cpp/io/basic streambuf/pubseekpos")[virtual] |  repositions the next pointer in the input sequence, output sequence, or both using absolute addressing   
(virtual protected member function of `std::basic_streambuf<CharT,Traits>`)   
[ seekpos](../basic_stringbuf/seekpos.html "cpp/io/basic stringbuf/seekpos")[virtual] |  repositions the next pointer in the input sequence, output sequence, or both using absolute addressing   
(virtual protected member function of `std::basic_stringbuf<CharT,Traits,Allocator>`)   
[ seekpos](../basic_filebuf/seekpos.html "cpp/io/basic filebuf/seekpos")[virtual] |  repositions the file position, using absolute addressing   
(virtual protected member function of `std::basic_filebuf<CharT,Traits>`) 
