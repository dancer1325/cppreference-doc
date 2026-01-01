[[edit template]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_spanstream/operator%3D&action=edit)

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

[`std::basic_ispanstream`](../basic_ispanstream.html "cpp/io/basic ispanstream")

[Member functions](../basic_ispanstream.html#Member_functions "cpp/io/basic ispanstream")  
---  
[basic_ispanstream::basic_ispanstream](basic_ispanstream.html "cpp/io/basic ispanstream/basic ispanstream")  
**basic_ispanstream::operator=**  
[basic_ispanstream::swap](swap.html "cpp/io/basic ispanstream/swap")  
[basic_ispanstream::rdbuf](rdbuf.html "cpp/io/basic ispanstream/rdbuf")  
[Underlying buffer operations](../basic_ispanstream.html#Underlying_buffer_operations "cpp/io/basic ispanstream")  
[basic_ispanstream::span](span.html "cpp/io/basic ispanstream/span")  
[Non-member functions](../basic_ispanstream.html#Non-member_functions "cpp/io/basic ispanstream")  
[swap(std::basic_ipanstream)](swap2.html "cpp/io/basic ispanstream/swap2")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_ispanstream/navbar_content&action=edit)

basic_ispanstream& operator=( basic_ispanstream&& other ); |  (1)  |  (since C++23)  
---|---|---  
basic_ispanstream& operator=( const basic_ispanstream& ) = delete; |  (2)  |  (since C++23)  
| |   
  
1) Move assigns the other to *this, effectively move-assigning both the [std::basic_istream](../basic_istream.html "cpp/io/basic istream") base class subobject and the wrapped std::basic_spanbuf.

2) Copy assignment operator is deleted. `basic_ispanstream` is not copy assignable.

Note that move assignment operator of the base class swaps all stream state variables (except for [`rdbuf()`](rdbuf.html "cpp/io/basic ispanstream/rdbuf")) between *this and other. 

It is implementation-defined whether the std::basic_spanbuf wrapped in other still holds an underlying buffer after the move assignment. 

## Contents

  * [1 Parameters](operator=.html#Parameters)
  * [2 Return value](operator=.html#Return_value)
  * [3 Exceptions](operator=.html#Exceptions)
  * [4 Example](operator=.html#Example)
  * [5 See also](operator=.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_spanstream/operator%3D&action=edit&section=T-1 "Template:cpp/io/basic spanstream/operator=")] Parameters

other  |  \-  |  another stream to move from   
---|---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_spanstream/operator%3D&action=edit&section=T-2 "Template:cpp/io/basic spanstream/operator=")] Return value

*this

### [[edit](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/impldef_exception&action=edit&section=T-1 "Template:cpp/impldef exception")] Exceptions

May throw implementation-defined exceptions. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_spanstream/operator%3D&action=edit&section=T-3 "Template:cpp/io/basic spanstream/operator=")] Example

| This section is incomplete  
Reason: no example   
---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_spanstream/operator%3D&action=edit&section=T-4 "Template:cpp/io/basic spanstream/operator=")] See also

[ operator=](../basic_spanbuf/operator=.html "cpp/io/basic spanbuf/operator=") |  assigns a `basic_spanbuf` object   
(public member function of `std::basic_spanbuf<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_spanbuf/dsc_operator%3D&action=edit)  
---|---  
[ operator=](../basic_istream/operator=.html "cpp/io/basic istream/operator=")(C++11) |  move-assigns from another `basic_istream`   
(protected member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_istream/dsc_operator%3D&action=edit)
