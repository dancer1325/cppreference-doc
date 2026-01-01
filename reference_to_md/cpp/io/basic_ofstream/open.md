[[edit template]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_fstream/open&action=edit)

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

[`std::basic_ofstream`](../basic_ofstream.html "cpp/io/basic ofstream")

Member functions  
---  
[basic_ofstream::basic_ofstream](basic_ofstream.html "cpp/io/basic ofstream/basic ofstream")  
[basic_ofstream::operator=](operator=.html "cpp/io/basic ofstream/operator=")(C++11)  
[basic_ofstream::swap](swap.html "cpp/io/basic ofstream/swap")(C++11)  
[basic_ofstream::rdbuf](rdbuf.html "cpp/io/basic ofstream/rdbuf")  
[basic_ofstream::native_handle](native_handle.html "cpp/io/basic ofstream/native handle")(C++26)  
File operations  
[basic_ofstream::is_open](is_open.html "cpp/io/basic ofstream/is open")  
**basic_ofstream::open**  
[basic_ofstream::close](close.html "cpp/io/basic ofstream/close")  
Non-member functions  
[swap(std::basic_ofstream)](swap2.html "cpp/io/basic ofstream/swap2")(C++11)  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_ofstream/navbar_content&action=edit)

void open( const char* filename,  
[std::ios_base::openmode](../ios_base/openmode.html) mode  
= [std::ios_base::out](../ios_base/openmode.html) ); |  (1)  |   
---|---|---  
void open( const std::filesystem::path::value_type* filename,  
[std::ios_base::openmode](../ios_base/openmode.html) mode  
= [std::ios_base::out](../ios_base/openmode.html) ); |  (2)  |  (since C++17)  
void open( const [std::string](../../string/basic_string.html)& filename,  
[std::ios_base::openmode](../ios_base/openmode.html) mode  
= [std::ios_base::out](../ios_base/openmode.html) ); |  (3)  |  (since C++11)  
void open( const [std::filesystem::path](../../filesystem/path.html)& filename,  
[std::ios_base::openmode](../ios_base/openmode.html) mode  
= [std::ios_base::out](../ios_base/openmode.html) ); |  (4)  |  (since C++17)  
| |   
  
Opens and associates the file with name filename with the file stream. 

Calls clear() on success. Calls setstate(failbit) on failure. 

1,2) Effectively calls rdbuf()->open(filename, mode | ios_base::out) (see [std::basic_filebuf::open](../basic_filebuf/open.html "cpp/io/basic filebuf/open") for the details on the effects of that call). Overload (2) is only provided if `std::filesystem::path::value_type` is not char.(since C++17)

3,4) Effectively calls (1,2) as if by open(filename.c_str(), mode). 

## Contents

  * [1 Parameters](open.html#Parameters)
  * [2 Example](open.html#Example)
  * [3 Defect reports](open.html#Defect_reports)
  * [4 See also](open.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_fstream/open&action=edit&section=T-1 "Template:cpp/io/basic fstream/open")] Parameters

filename  |  \-  |  the name of the file to be opened   
---|---|---  
mode  |  \-  |  specifies stream open mode. It is a [BitmaskType](../../named_req/BitmaskType.html "cpp/named req/BitmaskType"), the following constants are defined:  |  Constant  |  Explanation   
---|---  
[`app`](../ios_base/openmode.html "cpp/io/ios base/openmode") |  seek to the end of stream before each write   
[`binary`](../ios_base/openmode.html "cpp/io/ios base/openmode") |  open in [binary mode](../c/FILE.html#Binary_and_text_modes "cpp/io/c/FILE")  
[`in`](../ios_base/openmode.html "cpp/io/ios base/openmode") |  open for reading   
[`out`](../ios_base/openmode.html "cpp/io/ios base/openmode") |  open for writing   
[`trunc`](../ios_base/openmode.html "cpp/io/ios base/openmode") |  discard the contents of the stream when opening   
[`ate`](../ios_base/openmode.html "cpp/io/ios base/openmode") |  seek to the end of stream immediately after open   
[`noreplace`](../ios_base/openmode.html "cpp/io/ios base/openmode") (C++23) |  open in exclusive mode   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_fstream/open&action=edit&section=T-2 "Template:cpp/io/basic fstream/open")] Example

| This section is incomplete  
Reason: no example   
---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_fstream/open&action=edit&section=T-3 "Template:cpp/io/basic fstream/open")] Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 22](https://cplusplus.github.io/LWG/issue22) | C++98  | it was unclear how error state changes upon a successful open  | the error state is unchanged   
[LWG 409](https://cplusplus.github.io/LWG/issue409) | C++98  | the error state was unchanged upon a successful open  | it is cleared[[1]](open.html#cite_note-1)  
  
  1. [↑](open.html#cite_ref-1) The resolution of LWG issue #22 is overridden.



### [[edit](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_fstream/open&action=edit&section=T-4 "Template:cpp/io/basic fstream/open")] See also

[ is_open](is_open.html "cpp/io/basic ofstream/is open") |  checks if the stream has an associated file   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_fstream/dsc_is_open&action=edit)  
---|---  
[ close](close.html "cpp/io/basic ofstream/close") |  closes the associated file   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_fstream/dsc_close&action=edit)  
[ open](../basic_filebuf/open.html "cpp/io/basic filebuf/open") |  opens a file and configures it as the associated character sequence   
(public member function of `std::basic_filebuf<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_filebuf/dsc_open&action=edit)
