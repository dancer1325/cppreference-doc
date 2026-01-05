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
  


[`std::basic_syncbuf`](../basic_syncbuf.html "cpp/io/basic syncbuf")

Public member functions  
---  
**basic_syncbuf::basic_syncbuf**(C++20)  
[basic_syncbuf::operator=](operator=.html "cpp/io/basic syncbuf/operator=")(C++20)  
[basic_syncbuf::~basic_syncbuf](~basic_syncbuf.html "cpp/io/basic syncbuf/~basic syncbuf")(C++20)  
[basic_syncbuf::swap](swap.html "cpp/io/basic syncbuf/swap")(C++20)  
[basic_syncbuf::emit](emit.html "cpp/io/basic syncbuf/emit")(C++20)  
[basic_syncbuf::get_wrapped](get_wrapped.html "cpp/io/basic syncbuf/get wrapped")(C++20)  
[basic_syncbuf::get_allocator](get_allocator.html "cpp/io/basic syncbuf/get allocator")(C++20)  
[basic_syncbuf::set_emit_on_sync](set_emit_on_sync.html "cpp/io/basic syncbuf/set emit on sync")(C++20)  
Protected member functions  
[basic_syncbuf::sync](sync.html "cpp/io/basic syncbuf/sync")(C++20)  
Non-member functions  
[swap(std::basic_syncbuf)](swap2.html "cpp/io/basic syncbuf/swap2")(C++20)  
  


basic_syncbuf()  
: basic_syncbuf( nullptr ) |  (1)  |   
---|---|---  
explicit basic_syncbuf( streambuf_type* obuf )  
: basic_syncbuf( obuf, Allocator() ) {} |  (2)  |   
basic_syncbuf( streambuf_type* obuf, const Allocator& a ); |  (3)  |   
basic_syncbuf( basic_syncbuf&& rhs ); |  (4)  |   
| |   
  
1) Default constructor: creates an instance of `std::basic_syncbuf` with emit-on-sync policy set to false, wrapped streambuffer set to nullptr, and using default-constructed `Allocator` as the allocator for temporary storage.

2,3) Creates an instance of `std::basic_syncbuf` with emit-on-sync policy set to false, wrapped streambuffer set to obuf, and using a as the allocator for temporary storage.

4) Move constructor: move-constructs a `std::basic_syncbuf` object by moving all contents from another `std::basic_syncbuf` object rhs, including the temporary storage, the wrapped stream pointer, policy, and all other state (such as the mutex pointer). After move, rhs is not associated with a stream, and rhs.get_wrapped() == nullptr. The put area member pointers of the base class [std::basic_streambuf](../basic_streambuf.html "cpp/io/basic streambuf") of rhs are guaranteed to be null. Destroying a moved-from rhs will not produce any output.

## Contents

  * [1 Parameters](basic_syncbuf.html#Parameters)
  * [2 Exceptions](basic_syncbuf.html#Exceptions)
  * [3 Notes](basic_syncbuf.html#Notes)
  * [4 Example](basic_syncbuf.html#Example)
  * [5 See also](basic_syncbuf.html#See_also)

  
---  
  
### Parameters

obuf  |  \-  |  pointer to the [std::basic_streambuf](../basic_streambuf.html "cpp/io/basic streambuf") to wrap   
---|---|---  
a  |  \-  |  the allocator to use for temporary storage   
rhs  |  \-  |  another `std::basic_syncbuf` to move from   
  
### Exceptions

2,3) May throw [std::bad_alloc](../../memory/new/bad_alloc.html "cpp/memory/new/bad alloc") from the constructor of the internal temporary storage or [std::system_error](../../error/system_error.html "cpp/error/system error") from the mutex construction.

### Notes

Typically called by the appropriate constructors of std::basic_osyncstream. 

### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### See also

[ sync](../basic_streambuf/pubsync.html "cpp/io/basic streambuf/pubsync")[virtual] |  synchronizes the buffers with the associated character sequence   
(virtual protected member function of `std::basic_streambuf<CharT,Traits>`)   
---|---  
[ emit](emit.html "cpp/io/basic syncbuf/emit") |  atomically transmits the entire internal buffer to the wrapped streambuf   
(public member function) 
