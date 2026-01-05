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
  


[`std::basic_spanbuf`](../basic_spanbuf.html "cpp/io/basic spanbuf")

Public member functions  
---  
[basic_spanbuf::basic_spanbuf](basic_spanbuf.html "cpp/io/basic spanbuf/basic spanbuf")(C++23)  
[basic_spanbuf::operator=](operator=.html "cpp/io/basic spanbuf/operator=")(C++23)  
[basic_spanbuf::swap](swap.html "cpp/io/basic spanbuf/swap")(C++23)  
[basic_spanbuf::span](span.html "cpp/io/basic spanbuf/span")(C++23)  
Protected member functions  
[basic_spanbuf::setbuf](setbuf.html "cpp/io/basic spanbuf/setbuf")(C++23)  
**basic_spanbuf::seekoff**(C++23)  
[basic_spanbuf::seekpos](seekpos.html "cpp/io/basic spanbuf/seekpos")(C++23)  
Non-member functions  
[swap(std::basic_spanbuf)](swap2.html "cpp/io/basic spanbuf/swap2")(C++23)  
  


protected:  
pos_type seekoff( off_type off, [std::ios_base::seekdir](../ios_base/seekdir.html) dir,  
[std::ios_base::openmode](../ios_base/openmode.html) which =   
[std::ios_base::in](../ios_base/openmode.html) | [std::ios_base::out](../ios_base/openmode.html) ) override; |  |  (since C++23)  
---|---|---  
| |   
  
Repositions the next pointer to get and/or put area, if possible, to the position that corresponds to exactly `off` characters from beginning, end, or current position of the get and/or put area of the buffer. 

Let `_n_` be the number of `CharT` elements in underlying buffer, or ​0​ when there is no underlying buffer, this function fails if 

  * the next pointer to the get and/or put area to reposition is null and the computed `_newoff_` (see below) is not zero, which may occur if there is no underlying buffer, or the *this is not opened in the mode required by `which`, or 
  * `dir` is [std::ios_base::cur](../ios_base/seekdir.html "cpp/io/ios base/seekdir") and both [std::ios_base::in](../ios_base/openmode.html "cpp/io/ios base/openmode") and [std::ios_base::out](../ios_base/openmode.html "cpp/io/ios base/openmode") are set in `which`, or 
  * the computed `_newoff_` is not representable in `off_type`, less than zero, or greater than `_n_`. 



`_newoff_` is computed as below: 

  * If `dir` is [std::ios_base::beg](../ios_base/seekdir.html "cpp/io/ios base/seekdir"), `_newoff_` is `off`. 
  * If `dir` is [std::ios_base::cur](../ios_base/seekdir.html "cpp/io/ios base/seekdir"), `_newoff_` is 
    * pptr() - pbase() + off if [std::ios_base::out](../ios_base/openmode.html "cpp/io/ios base/openmode") is set in `which`, or 
    * gptr() - eback() + off if [std::ios_base::in](../ios_base/openmode.html "cpp/io/ios base/openmode") is set in `which`. 
  * If `dir` is [std::ios_base::end](../ios_base/seekdir.html "cpp/io/ios base/seekdir"), `_newoff_` is 
    * pptr() - pbase() + off if [std::ios_base::out](../ios_base/openmode.html "cpp/io/ios base/openmode") but not [std::ios_base::in](../ios_base/openmode.html "cpp/io/ios base/openmode") is set in the open mode of *this, 
    * otherwise, off + n. 



This function repositions the next pointer to get and/or put area to pbuf + newoff on success if [std::ios_base::in](../ios_base/openmode.html "cpp/io/ios base/openmode") and/or [std::ios_base::out](../ios_base/openmode.html "cpp/io/ios base/openmode") is correspondingly set in `which`, where `_pbuf_` is the pointer to the beginning of the underlying buffer, or the null pointer value if there is no underlying buffer. 

## Contents

  * [1 Parameters](seekoff.html#Parameters)
  * [2 Return value](seekoff.html#Return_value)
  * [3 Example](seekoff.html#Example)
  * [4 See also](seekoff.html#See_also)

  
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

pos_type(newoff) on success, pos_type(off_type(-1)) on failure. 

### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### See also

[ seekoff](../basic_stringbuf/seekoff.html "cpp/io/basic stringbuf/seekoff")[virtual] |  repositions the next pointer in the input sequence, output sequence, or both, using relative addressing   
(virtual protected member function of `std::basic_stringbuf<CharT,Traits,Allocator>`)   
---|---  
[ seekoff](../strstreambuf/seekoff.html "cpp/io/strstreambuf/seekoff")[virtual] |  repositions the next pointer in the input sequence, output sequence, or both, using relative addressing   
(virtual protected member function of `std::strstreambuf`) 
