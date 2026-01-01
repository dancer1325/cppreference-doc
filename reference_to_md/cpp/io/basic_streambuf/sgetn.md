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

[`std::basic_streambuf`](../basic_streambuf.html "cpp/io/basic streambuf")

| Public member functions  
---  
[basic_streambuf::~basic_streambuf](~basic_streambuf.html "cpp/io/basic streambuf/~basic streambuf")  
Locales  
[basic_streambuf::pubimbue](pubimbue.html "cpp/io/basic streambuf/pubimbue")  
[basic_streambuf::getloc](getloc.html "cpp/io/basic streambuf/getloc")  
Positioning  
[basic_streambuf::pubsetbuf](pubsetbuf.html "cpp/io/basic streambuf/pubsetbuf")  
[basic_streambuf::pubseekoff](pubseekoff.html "cpp/io/basic streambuf/pubseekoff")  
[basic_streambuf::pubseekpos](pubseekpos.html "cpp/io/basic streambuf/pubseekpos")  
[basic_streambuf::pubsync](pubsync.html "cpp/io/basic streambuf/pubsync")  
Get area  
[basic_streambuf::in_avail](in_avail.html "cpp/io/basic streambuf/in avail")  
[basic_streambuf::snextc](snextc.html "cpp/io/basic streambuf/snextc")  
[basic_streambuf::sbumpc](sbumpc.html "cpp/io/basic streambuf/sbumpc")  
[basic_streambuf::sgetc](sgetc.html "cpp/io/basic streambuf/sgetc")  
**basic_streambuf::sgetn**  
Put area  
[basic_streambuf::sputc](sputc.html "cpp/io/basic streambuf/sputc")  
[basic_streambuf::sputn](sputn.html "cpp/io/basic streambuf/sputn")  
Putback  
[basic_streambuf::sputbackc](sputbackc.html "cpp/io/basic streambuf/sputbackc")  
[basic_streambuf::sungetc](sungetc.html "cpp/io/basic streambuf/sungetc")  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
| Protected member functions  
---  
[basic_streambuf::basic_streambuf](basic_streambuf.html "cpp/io/basic streambuf/basic streambuf")  
[basic_streambuf::operator=](operator=.html "cpp/io/basic streambuf/operator=")(C++11)  
[basic_streambuf::swap](swap.html "cpp/io/basic streambuf/swap")(C++11)  
Locales  
[basic_streambuf::imbue](pubimbue.html "cpp/io/basic streambuf/pubimbue")  
Positioning  
[basic_streambuf::setbuf](pubsetbuf.html "cpp/io/basic streambuf/pubsetbuf")  
[basic_streambuf::seekoff](pubseekoff.html "cpp/io/basic streambuf/pubseekoff")  
[basic_streambuf::seekpos](pubseekpos.html "cpp/io/basic streambuf/pubseekpos")  
[basic_streambuf::sync](pubsync.html "cpp/io/basic streambuf/pubsync")  
Get area  
[basic_streambuf::showmanyc](showmanyc.html "cpp/io/basic streambuf/showmanyc")  
[basic_streambuf::underflow](underflow.html "cpp/io/basic streambuf/underflow")  
[basic_streambuf::uflow](uflow.html "cpp/io/basic streambuf/uflow")  
**basic_streambuf::xsgetn**  
[basic_streambuf::ebackbasic_streambuf::gptrbasic_streambuf::egptr](gptr.html "cpp/io/basic streambuf/gptr")  
[basic_streambuf::gbump](gbump.html "cpp/io/basic streambuf/gbump")  
[basic_streambuf::setg](setg.html "cpp/io/basic streambuf/setg")  
Put area  
[basic_streambuf::xsputn](sputn.html "cpp/io/basic streambuf/sputn")  
[basic_streambuf::overflow](overflow.html "cpp/io/basic streambuf/overflow")  
[basic_streambuf::pbasebasic_streambuf::pptrbasic_streambuf::epptr](pptr.html "cpp/io/basic streambuf/pptr")  
[basic_streambuf::pbump](pbump.html "cpp/io/basic streambuf/pbump")  
[basic_streambuf::setp](setp.html "cpp/io/basic streambuf/setp")  
Putback  
[basic_streambuf::pbackfail](pbackfail.html "cpp/io/basic streambuf/pbackfail")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_streambuf/navbar_content&action=edit)

[std::streamsize](../streamsize.html) sgetn( char_type* s, [std::streamsize](../streamsize.html) count ); |  (1)  |   
---|---|---  
protected:  
virtual [std::streamsize](../streamsize.html) xsgetn( char_type* s, [std::streamsize](../streamsize.html) count ); |  (2)  |   
| |   
  
1) Calls `xsgetn(s, count)` of the most derived class.

2) Reads `count` characters from the input sequence and stores them into a character array pointed to by `s`. The characters are read as if by repeated calls to [sbumpc()](sbumpc.html "cpp/io/basic streambuf/sbumpc"). That is, if less than `count` characters are immediately available, the function calls [uflow()](uflow.html "cpp/io/basic streambuf/uflow") to provide more until Traits::eof() is returned.

Classes derived from `std::basic_streambuf` are permitted to provide more efficient implementations of this function.

## Contents

  * [1 Parameters](sgetn.html#Parameters)
  * [2 Return value](sgetn.html#Return_value)
  * [3 Notes](sgetn.html#Notes)
  * [4 Example](sgetn.html#Example)
  * [5 See also](sgetn.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_streambuf/sgetn&action=edit&section=1 "Edit section: Parameters")] Parameters

s  |  \-  |  pointer to the beginning of a char_type array   
---|---|---  
count  |  \-  |  maximum number of characters to read.   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_streambuf/sgetn&action=edit&section=2 "Edit section: Return value")] Return value

The number of characters successfully read. If it is less than `count` the input sequence has reached the end. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_streambuf/sgetn&action=edit&section=3 "Edit section: Notes")] Notes

The rule about "more efficient implementations" permits bulk I/O without intermediate buffering: that's how [std::ifstream::read](../basic_istream/read.html "cpp/io/basic istream/read") simply passes the pointer to the POSIX `read()` system call in some implementations of iostreams 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_streambuf/sgetn&action=edit&section=4 "Edit section: Example")] Example

| This section is incomplete  
Reason: no example   
---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_streambuf/sgetn&action=edit&section=5 "Edit section: See also")] See also

[ sputn](sputn.html "cpp/io/basic streambuf/sputn") |  invokes xsputn()   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_streambuf/dsc_sputn&action=edit)  
---|---
