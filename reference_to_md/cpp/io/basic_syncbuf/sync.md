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

[`std::basic_syncbuf`](../basic_syncbuf.html "cpp/io/basic syncbuf")

Public member functions  
---  
[basic_syncbuf::basic_syncbuf](basic_syncbuf.html "cpp/io/basic syncbuf/basic syncbuf")(C++20)  
[basic_syncbuf::operator=](operator=.html "cpp/io/basic syncbuf/operator=")(C++20)  
[basic_syncbuf::~basic_syncbuf](~basic_syncbuf.html "cpp/io/basic syncbuf/~basic syncbuf")(C++20)  
[basic_syncbuf::swap](swap.html "cpp/io/basic syncbuf/swap")(C++20)  
[basic_syncbuf::emit](emit.html "cpp/io/basic syncbuf/emit")(C++20)  
[basic_syncbuf::get_wrapped](get_wrapped.html "cpp/io/basic syncbuf/get wrapped")(C++20)  
[basic_syncbuf::get_allocator](get_allocator.html "cpp/io/basic syncbuf/get allocator")(C++20)  
[basic_syncbuf::set_emit_on_sync](set_emit_on_sync.html "cpp/io/basic syncbuf/set emit on sync")(C++20)  
Protected member functions  
**basic_syncbuf::sync**(C++20)  
Non-member functions  
[swap(std::basic_syncbuf)](swap2.html "cpp/io/basic syncbuf/swap2")(C++20)  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_syncbuf/navbar_content&action=edit)

protected:  
int sync() override; |  |   
---|---|---  
| |   
  
First, records that a flush is pending, by updating the appropriate private flag. 

Then, if the current emit-on-sync policy is true, makes a call to [`emit()`](emit.html "cpp/io/basic syncbuf/emit"). 

Otherwise (if the emit-on-sync policy is false, which is the default), the flush is suspended until [`emit()`](emit.html "cpp/io/basic syncbuf/emit") is called, such as through [`std::basic_osyncstream::emit()`](../basic_osyncstream/emit.html "cpp/io/basic osyncstream/emit") or [`std::basic_osyncstream::~basic_osyncstream`](../basic_osyncstream/~basic_osyncstream.html "cpp/io/basic osyncstream/~basic osyncstream")

## Contents

  * [1 Parameters](sync.html#Parameters)
  * [2 Notes](sync.html#Notes)
  * [3 Example](sync.html#Example)
  * [4 See also](sync.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_syncbuf/sync&action=edit&section=1 "Edit section: Parameters")] Parameters

(none) 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_syncbuf/sync&action=edit&section=2 "Edit section: Notes")] Notes

`sync()` or its equivalent is implicitly called by close(), seekoff(), and seekpos() and explicitly called by [std::basic_streambuf::pubsync()](../basic_streambuf/pubsync.html "cpp/io/basic streambuf/pubsync")

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_syncbuf/sync&action=edit&section=3 "Edit section: Example")] Example

| This section is incomplete  
Reason: no example   
---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_syncbuf/sync&action=edit&section=4 "Edit section: See also")] See also

[ sync](../basic_streambuf/pubsync.html "cpp/io/basic streambuf/pubsync")[virtual] |  synchronizes the buffers with the associated character sequence   
(virtual protected member function of `std::basic_streambuf<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_streambuf/dsc_sync&action=edit)  
---|---  
[ emit](../basic_osyncstream/emit.html "cpp/io/basic osyncstream/emit") |  calls [`emit()`](emit.html "cpp/io/basic syncbuf/emit") on the underlying `basic_syncbuf` to transmit its internal data to the final destination   
(public member function of `std::basic_osyncstream<CharT,Traits,Allocator>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_osyncstream/dsc_emit&action=edit)
