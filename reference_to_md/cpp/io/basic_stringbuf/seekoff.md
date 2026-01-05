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
  


[`std::basic_stringbuf`](../basic_stringbuf.html "cpp/io/basic stringbuf")

Public member functions  
---  
[basic_stringbuf::basic_stringbuf](basic_stringbuf.html "cpp/io/basic stringbuf/basic stringbuf")  
[basic_stringbuf::operator=](operator=.html "cpp/io/basic stringbuf/operator=")(C++11)  
[basic_stringbuf::swap](swap.html "cpp/io/basic stringbuf/swap")(C++11)  
[basic_stringbuf::str](str.html "cpp/io/basic stringbuf/str")  
[basic_stringbuf::get_allocator](get_allocator.html "cpp/io/basic stringbuf/get allocator")(C++20)  
[basic_stringbuf::view](view.html "cpp/io/basic stringbuf/view")(C++20)  
Protected member functions  
[basic_stringbuf::underflow](underflow.html "cpp/io/basic stringbuf/underflow")  
[basic_stringbuf::pbackfail](pbackfail.html "cpp/io/basic stringbuf/pbackfail")  
[basic_stringbuf::overflow](overflow.html "cpp/io/basic stringbuf/overflow")  
[basic_stringbuf::setbuf](setbuf.html "cpp/io/basic stringbuf/setbuf")  
**basic_stringbuf::seekoff**  
[basic_stringbuf::seekpos](seekpos.html "cpp/io/basic stringbuf/seekpos")  
Non-member functions  
[swap(std::basic_stringbuf)](swap2.html "cpp/io/basic stringbuf/swap2")(C++11)  
Exposition-only member functions  
[basic_stringbuf::_init_buf_ptrs_](init_buf_ptrs.html "cpp/io/basic stringbuf/init buf ptrs")  
  


protected:  
virtual pos_type seekoff( off_type off,  
[std::ios_base::seekdir](../ios_base/seekdir.html) dir,  
[std::ios_base::openmode](../ios_base/openmode.html) which = [std::ios_base::in](../ios_base/openmode.html) | [std::ios_base::out](../ios_base/openmode.html) ); |  |   
---|---|---  
| |   
  
Repositions [std::basic_streambuf::gptr](../basic_streambuf/gptr.html "cpp/io/basic streambuf/gptr") and/or [std::basic_streambuf::pptr](../basic_streambuf/pptr.html "cpp/io/basic streambuf/pptr"), if possible, to the position that corresponds to exactly off characters from beginning, end, or current position of the get and/or put area of the buffer. 

  * If which includes [std::ios_base::in](../ios_base/openmode.html "cpp/io/ios base/openmode") and this buffer is open for reading (that is, if (which & [std::ios_base::in](../ios_base/openmode.html)) == [std::ios_base::in](../ios_base/openmode.html)), then repositions the read pointer [std::basic_streambuf::gptr](../basic_streambuf/gptr.html "cpp/io/basic streambuf/gptr") inside the get area as described below 
  * If which includes [std::ios_base::out](../ios_base/openmode.html "cpp/io/ios base/openmode") and this buffer is open for writing (that is, (which & [std::ios_base::out](../ios_base/openmode.html)) == [std::ios_base::out](../ios_base/openmode.html)), then repositions the write pointer [std::basic_streambuf::pptr](../basic_streambuf/pptr.html "cpp/io/basic streambuf/pptr") inside the put area as described below 
  * If which includes both [std::ios_base::in](../ios_base/openmode.html "cpp/io/ios base/openmode") and [std::ios_base::out](../ios_base/openmode.html "cpp/io/ios base/openmode") and the buffer is open for both reading and writing (that is, (which & ([std::ios_base::in](../ios_base/openmode.html) | [std::ios_base::out](../ios_base/openmode.html))) == ([std::ios_base::in](../ios_base/openmode.html) | [std::ios_base::out](../ios_base/openmode.html))), and dir is either [std::ios_base::beg](../ios_base/seekdir.html "cpp/io/ios base/seekdir") or [std::ios_base::end](../ios_base/seekdir.html "cpp/io/ios base/seekdir"), then repositions both read and write pointers as described below. 
  * Otherwise, this function fails. 



If [`gptr`](../basic_streambuf.html "cpp/io/basic streambuf") and/or [`pptr`](../basic_streambuf.html "cpp/io/basic streambuf") is repositioned, it is done as follows: 

1) The new pointer offset newoff of type `off_type` is determined

a) if dir == [std::ios_base::beg](../ios_base/seekdir.html), then newoff is zero

b) if dir == [std::ios_base::cur](../ios_base/seekdir.html), then newoff is the current position of the pointer (gptr() - eback() or pptr() - pbase())

c) if dir == [std::ios_base::end](../ios_base/seekdir.html), then newoff is the length of the entire initialized part of the buffer (if [over-allocation](str.html "cpp/io/basic stringbuf/str") is used, the high watermark pointer minus the beginning pointer)

2) If the pointer to be repositioned is a null pointer and newoff would be non-zero, this function fails.

3) If newoff + off < 0 (the repositioning would move the pointer to before the beginning of the buffer) or if newoff + off would point past the end of the buffer (or past the last initialized character in the buffer if [over-allocation](str.html "cpp/io/basic stringbuf/str") is used), the function fails.

4) Otherwise, the pointer is assigned as if by gptr() = eback() + newoff + off or pptr() = pbase() + newoff + off.

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
dir  |  \-  |  defines base position to apply the relative offset to. It can be one of the following constants:  |  Constant  |  Explanation   
---|---  
[`beg`](../ios_base/seekdir.html "cpp/io/ios base/seekdir") |  the beginning of a stream   
[`end`](../ios_base/seekdir.html "cpp/io/ios base/seekdir") |  the ending of a stream   
[`cur`](../ios_base/seekdir.html "cpp/io/ios base/seekdir") |  the current position of stream position indicator   
which  |  \-  |  defines whether the input sequences, the output sequence, or both are affected. It can be one or a combination of the following constants:  |  Constant  |  Explanation   
---|---  
[`in`](../ios_base/openmode.html "cpp/io/ios base/openmode") |  affect the input sequence   
[`out`](../ios_base/openmode.html "cpp/io/ios base/openmode") |  affect the output sequence   
  
### Return value

pos_type(newoff) on success, pos_type(off_type(-1)) on failure or if `pos_type` cannot represent the resulting stream position. 

### Example

Run this code
    
    
    #include <iostream>
    #include <sstream>
     
    int main()
    {
        [std::stringstream](../basic_stringstream.html) ss("123"); // in/out
        [std::cout](../cout.html) << "put pos = " << ss.tellp()
                  << " get pos = " << ss.tellg() << '\n';
     
        // absolute positioning both pointers
        ss.rdbuf()->pubseekoff(1, [std::ios_base::beg](../ios_base/seekdir.html)); // move both 1 forward
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
        [std::cout](../cout.html) << "Wrote 'a' at put position, the buffer is now " << ss.str() << '\n';
     
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
    Wrote 'a' at put position, the buffer is now 12a
    reading at get position gives '2'

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 55](https://cplusplus.github.io/LWG/issue55) | C++98  | `seekoff` returned an undefined  
invalid stream position on failure  | pos_type(off_type(-1))  
is returned on failure   
[LWG 375](https://cplusplus.github.io/LWG/issue375) | C++98  | static constant members of [std::ios_base](../ios_base.html "cpp/io/ios base") were  
misspecified as members of [std::basic_ios](../basic_ios.html "cpp/io/basic ios") | corrected   
[LWG 432](https://cplusplus.github.io/LWG/issue432) | C++98  | `seekoff` might succeed even if newoff + off  
would point past the last initialized character  | `seekoff` fails  
in this case   
[LWG 453](https://cplusplus.github.io/LWG/issue453) | C++98  | repositioning null gptr() and/or null pptr()  
with a new offset of zero always failed  | it can succeed in this case   
[LWG 563](https://cplusplus.github.io/LWG/issue563) | C++98  | the end pointer could not be used to calculate newoff because it could  
not be precisely controlled by the program after resolving [LWG issue 432](https://cplusplus.github.io/LWG/issue432) | use the high watermark  
pointer instead   
  
### See also

[ pubseekoff](../basic_streambuf/pubseekoff.html "cpp/io/basic streambuf/pubseekoff") |  invokes seekoff()   
(public member function of `std::basic_streambuf<CharT,Traits>`)   
---|---  
[ seekpos](seekpos.html "cpp/io/basic stringbuf/seekpos")[virtual] |  repositions the next pointer in the input sequence, output sequence, or both using absolute addressing   
(virtual protected member function)   
[ seekoff](../basic_filebuf/seekoff.html "cpp/io/basic filebuf/seekoff")[virtual] |  repositions the file position, using relative addressing   
(virtual protected member function of `std::basic_filebuf<CharT,Traits>`)   
[ seekoff](../strstreambuf/seekoff.html "cpp/io/strstreambuf/seekoff")[virtual] |  repositions the next pointer in the input sequence, output sequence, or both, using relative addressing   
(virtual protected member function of `std::strstreambuf`) 
