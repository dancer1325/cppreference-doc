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
[basic_spanbuf::basic_spanbuf](basic_spanbuf.html "cpp/io/basic spanbuf/basic spanbuf")(C++23)  
[basic_spanbuf::operator=](operator=.html "cpp/io/basic spanbuf/operator=")(C++23)  
[basic_spanbuf::swap](swap.html "cpp/io/basic spanbuf/swap")(C++23)  
[basic_spanbuf::span](span.html "cpp/io/basic spanbuf/span")(C++23)  
Protected member functions  
[basic_spanbuf::setbuf](setbuf.html "cpp/io/basic spanbuf/setbuf")(C++23)  
[basic_spanbuf::seekoff](seekoff.html "cpp/io/basic spanbuf/seekoff")(C++23)  
**basic_spanbuf::seekpos**(C++23)  
Non-member functions  
[swap(std::basic_spanbuf)](swap2.html "cpp/io/basic spanbuf/swap2")(C++23)  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_spanbuf/navbar_content&action=edit)

protected:  
pos_type seekpos( pos_type sp, [std::ios_base::openmode](../ios_base/openmode.html) which =  
[std::ios_base::in](../ios_base/openmode.html) | [std::ios_base::out](../ios_base/openmode.html) ) override; |  |  (since C++23)  
---|---|---  
| |   
  
Repositions the next pointer to the get and/or put area, if possible, to the position indicated by `sp`. 

Equivalent to return seekoff(off_type(sp), [std::ios_base::beg](../ios_base/seekdir.html), which);. 

## Contents

  * [1 Parameters](seekpos.html#Parameters)
  * [2 Return value](seekpos.html#Return_value)
  * [3 Notes](seekpos.html#Notes)
  * [4 Example](seekpos.html#Example)
  * [5 See also](seekpos.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_spanbuf/seekpos&action=edit&section=1 "Edit section: Parameters")] Parameters

sp  |  \-  |  stream position, such as one obtained by seekoff() or `seekpos()`  
---|---|---  
which  |  \-  |  defines whether the input sequences, the output sequence, or both are affected. It can be one or a combination of the following constants:  |  Constant  |  Explanation   
---|---  
[`in`](../ios_base/openmode.html "cpp/io/ios base/openmode") |  affect the input sequence   
[`out`](../ios_base/openmode.html "cpp/io/ios base/openmode") |  affect the output sequence   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_spanbuf/seekpos&action=edit&section=2 "Edit section: Return value")] Return value

`sp` on success or pos_type(off_type(-1)) on failure. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_spanbuf/seekpos&action=edit&section=3 "Edit section: Notes")] Notes

`seekpos()` is called by [std::basic_streambuf::pubseekpos()](../basic_streambuf/pubseekpos.html "cpp/io/basic streambuf/pubseekpos"), which is called by the single-argument versions of [std::basic_istream::seekg()](../basic_istream/seekg.html "cpp/io/basic istream/seekg") and [std::basic_ostream::seekp()](../basic_ostream/seekp.html "cpp/io/basic ostream/seekp"). 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_spanbuf/seekpos&action=edit&section=4 "Edit section: Example")] Example

| This section is incomplete  
Reason: no example   
---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_spanbuf/seekpos&action=edit&section=5 "Edit section: See also")] See also

[ pubseekpos](../basic_streambuf/pubseekpos.html "cpp/io/basic streambuf/pubseekpos") |  invokes seekpos()   
(public member function of `std::basic_streambuf<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_streambuf/dsc_pubseekpos&action=edit)  
---|---  
[ seekpos](../basic_stringbuf/seekpos.html "cpp/io/basic stringbuf/seekpos")[virtual] |  repositions the next pointer in the input sequence, output sequence, or both using absolute addressing   
(virtual protected member function of `std::basic_stringbuf<CharT,Traits,Allocator>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_stringbuf/dsc_seekpos&action=edit)  
[ seekpos](../strstreambuf/seekpos.html "cpp/io/strstreambuf/seekpos")[virtual] |  repositions the next pointer in the input sequence, output sequence, or both using absolute addressing   
(virtual protected member function of `std::strstreambuf`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/strstreambuf/dsc_seekpos&action=edit)
