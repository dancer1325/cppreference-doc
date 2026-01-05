[[edit template]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_spanstream/swap2&action=edit)

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
  


[`std::basic_ospanstream`](../basic_ospanstream.html "cpp/io/basic ospanstream")

[Member functions](../basic_ospanstream.html#Member_functions "cpp/io/basic ospanstream")  
---  
[basic_ospanstream::basic_ospanstream](basic_ospanstream.html "cpp/io/basic ospanstream/basic ospanstream")  
[basic_ospanstream::operator=](operator=.html "cpp/io/basic ospanstream/operator=")  
[basic_ospanstream::swap](swap.html "cpp/io/basic ospanstream/swap")  
[basic_ospanstream::rdbuf](rdbuf.html "cpp/io/basic ospanstream/rdbuf")  
[Underlying buffer operations](../basic_ospanstream.html#Underlying_buffer_operations "cpp/io/basic ospanstream")  
[basic_ospanstream::span](span.html "cpp/io/basic ospanstream/span")  
[Non-member functions](../basic_ospanstream.html#Non-member_functions "cpp/io/basic ospanstream")  
**swap(std::basic_ospanstream)**  
  


Defined in header `[<spanstream>](../../header/spanstream.html "cpp/header/spanstream")` |  |   
---|---|---  
template< class CharT, class Traits >  
void swap( [std::basic_ospanstream](../basic_ospanstream.html)<CharT, Traits>& lhs,  
[std::basic_ospanstream](../basic_ospanstream.html)<CharT, Traits>& rhs ); |  |  (since C++23)  
| |   
  
Overloads the [std::swap](../../utility/swap.html "cpp/algorithm/swap") algorithm for std::basic_ospanstream. Exchanges the state of lhs with that of rhs. Effectively calls lhs.swap(rhs). 

## Contents

  * [1 Parameters](swap2.html#Parameters)
  * [2 Return value](swap2.html#Return_value)
  * [3 Exceptions](swap2.html#Exceptions)
  * [4 Example](swap2.html#Example)
  * [5 See also](swap2.html#See_also)

  
---  
  
### Parameters

lhs, rhs  |  \-  |  streams whose state to swap   
---|---|---  
  
### Return value

(none) 

### Exceptions

May throw implementation-defined exceptions. 

### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### See also

[ swap](swap.html "cpp/io/basic ospanstream/swap") |  swaps two `basic_ospanstream` objects   
(public member function)   
---|---
