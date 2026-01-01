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

[`std::basic_spanbuf`](../basic_spanbuf.html "cpp/io/basic spanbuf")

Public member functions  
---  
**basic_spanbuf::basic_spanbuf**(C++23)  
[basic_spanbuf::operator=](operator=.html "cpp/io/basic spanbuf/operator=")(C++23)  
[basic_spanbuf::swap](swap.html "cpp/io/basic spanbuf/swap")(C++23)  
[basic_spanbuf::span](span.html "cpp/io/basic spanbuf/span")(C++23)  
Protected member functions  
[basic_spanbuf::setbuf](setbuf.html "cpp/io/basic spanbuf/setbuf")(C++23)  
[basic_spanbuf::seekoff](seekoff.html "cpp/io/basic spanbuf/seekoff")(C++23)  
[basic_spanbuf::seekpos](seekpos.html "cpp/io/basic spanbuf/seekpos")(C++23)  
Non-member functions  
[swap(std::basic_spanbuf)](swap2.html "cpp/io/basic spanbuf/swap2")(C++23)  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_spanbuf/navbar_content&action=edit)

basic_spanbuf() : basic_spanbuf([std::ios_base::in](../ios_base/openmode.html) | [std::ios_base::out](../ios_base/openmode.html)) {} |  (1)  |  (since C++23)  
---|---|---  
explicit basic_spanbuf( [std::ios_base::openmode](../ios_base/openmode.html) which )  
: basic_spanbuf([std::span](../../container/span.html)<CharT>{}, which) {} |  (2)  |  (since C++23)  
explicit basic_spanbuf( [std::span](../../container/span.html)<CharT> buf, [std::ios_base::openmode](../ios_base/openmode.html) which =  
[std::ios_base::in](../ios_base/openmode.html) | [std::ios_base::out](../ios_base/openmode.html) ); |  (3)  |  (since C++23)  
basic_spanbuf( const basic_spanbuf& ) = delete; |  (4)  |  (since C++23)  
basic_spanbuf( basic_spanbuf&& rhs ); |  (5)  |  (since C++23)  
| |   
  
1) Default constructor. Creates a `basic_spanbuf` that has no underlying buffer and is opened for both input and output. The pointers to get and put area are set to the null pointer value.

2) Same as (1), except that the `basic_spanbuf` is opened in mode specified by which.

3) Creates a `basic_spanbuf` that manages the underlying buffer referenced by buf (or has no underlying buffer if buf is empty) and is opened in mode specified by which. The pointers to get and put area are set as following, or to the null pointer value if not mentioned in the table:  Set bits in open mode  
(affecting pointers to get area)  | Return value after setting   
---|---  
[eback()](../basic_streambuf/gptr.html "cpp/io/basic streambuf/gptr") | [gptr()](../basic_streambuf/gptr.html "cpp/io/basic streambuf/gptr") | [egptr()](../basic_streambuf/gptr.html "cpp/io/basic streambuf/gptr")  
[std::ios_base::in](../ios_base/openmode.html) | s.data() | s.data() | s.data() + s.size()  
Set bits in open mode  
(affecting pointers to put area)  | Return value after setting   
[pbase()](../basic_streambuf/pptr.html "cpp/io/basic streambuf/pptr") | [pptr()](../basic_streambuf/pptr.html "cpp/io/basic streambuf/pptr") | [epptr()](../basic_streambuf/pptr.html "cpp/io/basic streambuf/pptr")  
[std::ios_base::out](../ios_base/openmode.html) && ![std::ios_base::ate](../ios_base/openmode.html) | s.data() | s.data() | s.data() + s.size()  
[std::ios_base::out](../ios_base/openmode.html) && [std::ios_base::ate](../ios_base/openmode.html) | s.data() | s.data() + s.size() | s.data() + s.size()  
  
4) Copy constructor is deleted. `basic_spanbuf` is not copyable.

5) Move constructor. Move-constructs the [std::basic_streambuf](../basic_streambuf.html "cpp/io/basic streambuf") base subobject from that of rhs. The pointers to get and put area, the open mode, and the underlying buffer (if any) are identical to those in rhs before construction.  
It is implementation-defined whether rhs still holds the underlying buffer after the move-construction.

## Contents

  * [1 Parameters](basic_spanbuf.html#Parameters)
  * [2 Notes](basic_spanbuf.html#Notes)
  * [3 Example](basic_spanbuf.html#Example)
  * [4 See also](basic_spanbuf.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_spanbuf/basic_spanbuf&action=edit&section=1 "Edit section: Parameters")] Parameters

buf  |  \-  |  a [`std::span`](../../container/span.html "cpp/container/span") referencing the underlying buffer   
---|---|---  
rhs  |  \-  |  another `basic_spanbuf`  
which  |  \-  |  specifies stream open mode. It is bitmask type, the following constants are defined:  |  Constant  |  Explanation   
---|---  
[`app`](../ios_base/openmode.html "cpp/io/ios base/openmode") |  seek to the end of stream before each write   
[`binary`](../ios_base/openmode.html "cpp/io/ios base/openmode") |  open in [binary mode](../c/FILE.html#Binary_and_text_modes "cpp/io/c/FILE")  
[`in`](../ios_base/openmode.html "cpp/io/ios base/openmode") |  open for reading   
[`out`](../ios_base/openmode.html "cpp/io/ios base/openmode") |  open for writing   
[`trunc`](../ios_base/openmode.html "cpp/io/ios base/openmode") |  discard the contents of the stream when opening   
[`ate`](../ios_base/openmode.html "cpp/io/ios base/openmode") |  seek to the end of stream immediately after open   
[`noreplace`](../ios_base/openmode.html "cpp/io/ios base/openmode") (C++23) |  open in exclusive mode   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_spanbuf/basic_spanbuf&action=edit&section=2 "Edit section: Notes")] Notes

These constructors are typically called by the constructors of std::basic_ispanstream, std::basic_ospanstream, and std::basic_spanstream. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_spanbuf/basic_spanbuf&action=edit&section=3 "Edit section: Example")] Example

| This section is incomplete  
Reason: no example   
---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_spanbuf/basic_spanbuf&action=edit&section=4 "Edit section: See also")] See also

[ (constructor)](../basic_ispanstream/basic_ispanstream.html "cpp/io/basic ispanstream/basic ispanstream") |  constructs the `basic_ispanstream`   
(public member function of `std::basic_ispanstream<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_spanstream/dsc_constructor&action=edit)  
---|---  
[ (constructor)](../basic_ospanstream/basic_ospanstream.html "cpp/io/basic ospanstream/basic ospanstream") |  constructs the `basic_ospanstream`   
(public member function of `std::basic_ospanstream<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_spanstream/dsc_constructor&action=edit)  
[ (constructor)](../basic_spanstream/basic_spanstream.html "cpp/io/basic spanstream/basic spanstream") |  constructs the `basic_spanstream`   
(public member function of `std::basic_spanstream<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_spanstream/dsc_constructor&action=edit)
