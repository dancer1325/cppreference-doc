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
  


[`std::basic_filebuf`](../basic_filebuf.html "cpp/io/basic filebuf")

Public member functions  
---  
[basic_filebuf::basic_filebuf](basic_filebuf.html "cpp/io/basic filebuf/basic filebuf")  
[basic_filebuf::~basic_filebuf](~basic_filebuf.html "cpp/io/basic filebuf/~basic filebuf")  
[basic_filebuf::operator=](operator=.html "cpp/io/basic filebuf/operator=")(C++11)  
[basic_filebuf::swap](swap.html "cpp/io/basic filebuf/swap")(C++11)  
[basic_filebuf::native_handle](native_handle.html "cpp/io/basic filebuf/native handle")(C++26)  
[basic_filebuf::is_open](is_open.html "cpp/io/basic filebuf/is open")  
[basic_filebuf::open](open.html "cpp/io/basic filebuf/open")  
[basic_filebuf::close](close.html "cpp/io/basic filebuf/close")  
Protected member functions  
[basic_filebuf::showmanyc](showmanyc.html "cpp/io/basic filebuf/showmanyc")  
[basic_filebuf::underflow](underflow.html "cpp/io/basic filebuf/underflow")  
[basic_filebuf::uflow](uflow.html "cpp/io/basic filebuf/uflow")  
**basic_filebuf::pbackfail**  
[basic_filebuf::overflow](overflow.html "cpp/io/basic filebuf/overflow")  
[basic_filebuf::setbuf](setbuf.html "cpp/io/basic filebuf/setbuf")  
[basic_filebuf::seekoff](seekoff.html "cpp/io/basic filebuf/seekoff")  
[basic_filebuf::seekpos](seekpos.html "cpp/io/basic filebuf/seekpos")  
[basic_filebuf::sync](sync.html "cpp/io/basic filebuf/sync")  
[basic_filebuf::imbue](imbue.html "cpp/io/basic filebuf/imbue")  
Non-member functions  
[swap(std::basic_filebuf)](swap2.html "cpp/io/basic filebuf/swap2")(C++11)  
  


protected:  
virtual int_type pbackfail( int_type c = Traits::eof() ) |  |   
---|---|---  
| |   
  
This protected virtual function is called by the public functions [`basic_streambuf::sungetc`](../basic_streambuf/sungetc.html "cpp/io/basic streambuf/sungetc") and [`basic_streambuf::sputbackc`](../basic_streambuf/sputbackc.html "cpp/io/basic streambuf/sputbackc") (which, in turn, are called by [`basic_istream::unget`](../basic_istream/unget.html "cpp/io/basic istream/unget") and [`basic_istream::putback`](../basic_istream/putback.html "cpp/io/basic istream/putback")). 

1) The caller is requesting that the get area is backed up by one character (`pbackfail()` is called with no arguments), in which case, this function re-reads the file starting one byte earlier and decrements [`basic_streambuf::gptr()`](../basic_streambuf/gptr.html "cpp/io/basic streambuf/gptr"), e.g. by calling gbump(-1).

2) The caller attempts to putback a different character from the one retrieved earlier (`pbackfail()` is called with the character that needs to be put back), in which case

a) First, checks if there is a putback position, and if there isn't, backs up the get area by re-reading the file starting one byte earlier.

a) Then checks what character is in the putback position. If the character held there is already equal to `c`, as determined by Traits::eq(to_char_type(c), gptr()[-1]), then simply decrements [`basic_streambuf::gptr()`](../basic_streambuf/gptr.html "cpp/io/basic streambuf/gptr").

b) Otherwise, if the buffer is allowed to modify its own get area, decrements [`basic_streambuf::gptr()`](../basic_streambuf/gptr.html "cpp/io/basic streambuf/gptr") and writes `c` to the location pointed to gptr() after adjustment.

This function never modifies the file, only the get area of the in-memory buffer. 

If the file is not open (is_open()==false, this function returns Traits::eof() immediately. 

## Contents

  * [1 Parameters](pbackfail.html#Parameters)
  * [2 Return value](pbackfail.html#Return_value)
  * [3 Example](pbackfail.html#Example)
  * [4 See also](pbackfail.html#See_also)

  
---  
  
### Parameters

c  |  \-  |  the character to put back, or Traits::eof() to indicate that backing up of the get area is requested   
---|---|---  
  
### Return value

c on success except if `c` was Traits::eof(), in which case Traits::not_eof(c) is returned. 

Traits::eof() on failure. 

### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### See also

[ pbackfail](../basic_streambuf/pbackfail.html "cpp/io/basic streambuf/pbackfail")[virtual] |  puts a character back into the input sequence, possibly modifying the input sequence   
(virtual protected member function of `std::basic_streambuf<CharT,Traits>`)   
---|---  
[ sungetc](../basic_streambuf/sungetc.html "cpp/io/basic streambuf/sungetc") |  moves the next pointer in the input sequence back by one   
(public member function of `std::basic_streambuf<CharT,Traits>`)   
[ sputbackc](../basic_streambuf/sputbackc.html "cpp/io/basic streambuf/sputbackc") |  puts one character back in the input sequence   
(public member function of `std::basic_streambuf<CharT,Traits>`)   
[ unget](../basic_istream/unget.html "cpp/io/basic istream/unget") |  unextracts a character   
(public member function of `std::basic_istream<CharT,Traits>`)   
[ putback](../basic_istream/putback.html "cpp/io/basic istream/putback") |  puts a character into input stream   
(public member function of `std::basic_istream<CharT,Traits>`) 
