[[edit template]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_fstream/constructor&action=edit)

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
**basic_ofstream::basic_ofstream**  
[basic_ofstream::operator=](operator=.html "cpp/io/basic ofstream/operator=")(C++11)  
[basic_ofstream::swap](swap.html "cpp/io/basic ofstream/swap")(C++11)  
[basic_ofstream::rdbuf](rdbuf.html "cpp/io/basic ofstream/rdbuf")  
[basic_ofstream::native_handle](native_handle.html "cpp/io/basic ofstream/native handle")(C++26)  
File operations  
[basic_ofstream::is_open](is_open.html "cpp/io/basic ofstream/is open")  
[basic_ofstream::open](open.html "cpp/io/basic ofstream/open")  
[basic_ofstream::close](close.html "cpp/io/basic ofstream/close")  
Non-member functions  
[swap(std::basic_ofstream)](swap2.html "cpp/io/basic ofstream/swap2")(C++11)  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_ofstream/navbar_content&action=edit)

basic_ofstream(); |  (1)  |   
---|---|---  
explicit basic_ofstream( const char* filename,  
[std::ios_base::openmode](../ios_base/openmode.html) mode  
= [std::ios_base::out](../ios_base/openmode.html) ); |  (2)  |   
explicit basic_ofstream( const std::filesystem::path::value_type* filename,  
[std::ios_base::openmode](../ios_base/openmode.html) mode  
= [std::ios_base::out](../ios_base/openmode.html) ); |  (3)  |  (since C++17)  
explicit basic_ofstream( const [std::string](../../string/basic_string.html)& filename,  
[std::ios_base::openmode](../ios_base/openmode.html) mode  
= [std::ios_base::out](../ios_base/openmode.html) ); |  (4)  |  (since C++11)  
template< class FsPath >  
explicit basic_ofstream( const FsPath& filename,  
[std::ios_base::openmode](../ios_base/openmode.html) mode  
= [std::ios_base::out](../ios_base/openmode.html) ); |  (5)  |  (since C++17)  
basic_ofstream( basic_ofstream&& other ); |  (6)  |  (since C++11)  
basic_ofstream( const basic_ofstream& rhs ) = delete; |  (7)  |  (since C++11)  
| |   
  
Constructs new file stream. 

1) Default constructor: constructs a stream that is not associated with a file: default-constructs the [std::basic_filebuf](../basic_filebuf.html "cpp/io/basic filebuf") and constructs the base with the pointer to this default-constructed [std::basic_filebuf](../basic_filebuf.html "cpp/io/basic filebuf") member.

2,3) First, performs the same steps as the default constructor, then associates the stream with a file by calling rdbuf()->open(filename, mode | [std::ios_base::out](../ios_base/openmode.html)) (see [std::basic_filebuf::open](../basic_filebuf/open.html "cpp/io/basic filebuf/open") for the details on the effects of that call). If the [`open()`](open.html "cpp/io/basic ofstream/open") call returns a null pointer, sets setstate(failbit). Overload (3) is only provided if std::filesystem::path::value_type is not char.(since C++17)

4,5) Same as basic_ofstream(filename.c_str(), mode). (5) participates in overload resolution only if `FsPath` is [std::filesystem::path](../../filesystem/path.html "cpp/filesystem/path").(since C++17) Note that despite the default mode being `out`, the effects are identical to the effects of `out | trunc` as described in [`std::filebuf::open`](../basic_filebuf/open.html "cpp/io/basic filebuf/open")

6) Move constructor. First, move-constructs the base class from other (which does not affect the [`rdbuf()`](rdbuf.html "cpp/io/basic ofstream/rdbuf") pointer), then move-constructs the [std::basic_filebuf](../basic_filebuf.html "cpp/io/basic filebuf") member, then calls this->set_rdbuf() to install the new `basic_filebuf` as the [`rdbuf()`](rdbuf.html "cpp/io/basic ofstream/rdbuf") pointer in the base class.

7) The copy-constructor is deleted: this class is not copyable.

## Contents

  * [1 Parameters](basic_ofstream.html#Parameters)
  * [2 Example](basic_ofstream.html#Example)
  * [3 Defect reports](basic_ofstream.html#Defect_reports)
  * [4 See also](basic_ofstream.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_fstream/constructor&action=edit&section=T-1 "Template:cpp/io/basic fstream/constructor")] Parameters

filename  |  \-  |  the name of the file to be opened   
---|---|---  
mode  |  \-  |  specifies stream open mode. Following constants and bit-wise OR between them may be used:  |  Constant  |  Explanation   
---|---  
[`app`](../ios_base/openmode.html "cpp/io/ios base/openmode") |  seek to the end of stream before each write   
[`binary`](../ios_base/openmode.html "cpp/io/ios base/openmode") |  open in [binary mode](../c/FILE.html#Binary_and_text_modes "cpp/io/c/FILE")  
[`in`](../ios_base/openmode.html "cpp/io/ios base/openmode") |  open for reading   
[`out`](../ios_base/openmode.html "cpp/io/ios base/openmode") |  open for writing   
[`trunc`](../ios_base/openmode.html "cpp/io/ios base/openmode") |  discard the contents of the stream when opening   
[`ate`](../ios_base/openmode.html "cpp/io/ios base/openmode") |  seek to the end of stream immediately after open   
[`noreplace`](../ios_base/openmode.html "cpp/io/ios base/openmode") (C++23) |  open in exclusive mode   
other  |  \-  |  another file stream to use as source   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_fstream/constructor&action=edit&section=T-2 "Template:cpp/io/basic fstream/constructor")] Example

Run this code
    
    
    #include <fstream>
    #include <string>
    #include <utility>
     
    int main()
    {
        [std::ofstream](../basic_ofstream.html) f0;
        [std::ofstream](../basic_ofstream.html) f1("test.bin", std::ios::binary);
        [std::string](../../string/basic_string.html) name = "example.txt";
        [std::ofstream](../basic_ofstream.html) f2(name);
        [std::ofstream](../basic_ofstream.html) f3(std::move(f1));
    }

### [[edit](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_fstream/constructor&action=edit&section=T-3 "Template:cpp/io/basic fstream/constructor")] Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3430](https://cplusplus.github.io/LWG/issue3430) | C++17  | [std::filesystem::path](../../filesystem/path.html "cpp/filesystem/path") overload led to unwanted conversions  | avoided by making it a template   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_fstream/constructor&action=edit&section=T-4 "Template:cpp/io/basic fstream/constructor")] See also

[ open](open.html "cpp/io/basic ofstream/open") |  opens a file and associates it with the stream   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_fstream/dsc_open&action=edit)  
---|---  
[ open](../basic_filebuf/open.html "cpp/io/basic filebuf/open") |  opens a file and configures it as the associated character sequence   
(public member function of `std::basic_filebuf<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_filebuf/dsc_open&action=edit)  
[ set_rdbuf](../basic_ios/set_rdbuf.html "cpp/io/basic ios/set rdbuf") |  replaces the `rdbuf` without clearing its error state   
(protected member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_ios/dsc_set_rdbuf&action=edit)  
[ (constructor)](../basic_ostream/basic_ostream.html "cpp/io/basic ostream/basic ostream") |  constructs the object   
(public member function of `std::basic_ostream<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_ostream/dsc_constructor&action=edit)
