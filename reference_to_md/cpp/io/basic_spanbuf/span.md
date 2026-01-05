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
**basic_spanbuf::span**(C++23)  
Protected member functions  
[basic_spanbuf::setbuf](setbuf.html "cpp/io/basic spanbuf/setbuf")(C++23)  
[basic_spanbuf::seekoff](seekoff.html "cpp/io/basic spanbuf/seekoff")(C++23)  
[basic_spanbuf::seekpos](seekpos.html "cpp/io/basic spanbuf/seekpos")(C++23)  
Non-member functions  
[swap(std::basic_spanbuf)](swap2.html "cpp/io/basic spanbuf/swap2")(C++23)  
  


[std::span](../../container/span.html)<CharT> span() const noexcept; |  (1)  |  (since C++23)  
---|---|---  
void span( [std::span](../../container/span.html)<CharT> s ) noexcept; |  (2)  |  (since C++23)  
| |   
  
1) Gets a `span` referencing the written area if [std::ios_base::out](../ios_base/openmode.html "cpp/io/ios base/openmode") is set in the open mode, or a `span` referencing the underlying buffer otherwise.

2) Makes the `basic_spanbuf` perform I/O on the buffer referenced by `s`. Sets pointers to get area, put area, or both.  Set bits in open mode  
(affecting pointers to get area)  |  Return value after setting   
---|---  
[eback()](../basic_streambuf/gptr.html "cpp/io/basic streambuf/gptr") |  [gptr()](../basic_streambuf/gptr.html "cpp/io/basic streambuf/gptr") |  [egptr()](../basic_streambuf/gptr.html "cpp/io/basic streambuf/gptr")  
[std::ios_base::in](../ios_base/openmode.html) |  s.data() |  s.data() |  s.data() + s.size()  
Set bits in open mode  
(affecting pointers to put area)  |  Return value after setting   
[pbase()](../basic_streambuf/pptr.html "cpp/io/basic streambuf/pptr") |  [pptr()](../basic_streambuf/pptr.html "cpp/io/basic streambuf/pptr") |  [epptr()](../basic_streambuf/pptr.html "cpp/io/basic streambuf/pptr")  
[std::ios_base::out](../ios_base/openmode.html) && ![std::ios_base::ate](../ios_base/openmode.html) |  s.data() |  s.data() |  s.data() + s.size()  
[std::ios_base::out](../ios_base/openmode.html) && [std::ios_base::ate](../ios_base/openmode.html) |  s.data() |  s.data() + s.size() |  s.data() + s.size()  
  
## Contents

  * [1 Parameters](span.html#Parameters)
  * [2 Return value](span.html#Return_value)
  * [3 Example](span.html#Example)
  * [4 See also](span.html#See_also)

  
---  
  
### Parameters

s  |  \-  |  a [`std::span`](../../container/span.html "cpp/container/span") that references the user-provided buffer   
---|---|---  
  
### Return value

1) [std::span](../../container/span.html)<CharT>(pbase(), pptr()) if [std::ios_base::out](../ios_base/openmode.html "cpp/io/ios base/openmode") is set in the open mode, or a [std::span](../../container/span.html)<CharT> that references the whole underlying buffer otherwise.

2) (none)

### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### See also

[ str](../basic_stringbuf/str.html "cpp/io/basic stringbuf/str") |  replaces or obtains a copy of the associated character string   
(public member function of `std::basic_stringbuf<CharT,Traits,Allocator>`)   
---|---  
[ view](../basic_stringbuf/view.html "cpp/io/basic stringbuf/view")(C++20) |  obtains a view over the underlying character sequence   
(public member function of `std::basic_stringbuf<CharT,Traits,Allocator>`)   
[ str](../strstreambuf/str.html "cpp/io/strstreambuf/str") |  marks the buffer frozen and returns the beginning pointer of the input sequence   
(public member function of `std::strstreambuf`) 
