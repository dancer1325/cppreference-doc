[[edit template]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_spanstream/span&action=edit)

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
  


[`std::basic_spanstream`](../basic_spanstream.html "cpp/io/basic spanstream")

[Member functions](../basic_spanstream.html#Member_functions "cpp/io/basic spanstream")  
---  
[basic_spanstream::basic_spanstream](basic_spanstream.html "cpp/io/basic spanstream/basic spanstream")  
[basic_spanstream::operator=](operator=.html "cpp/io/basic spanstream/operator=")  
[basic_spanstream::swap](swap.html "cpp/io/basic spanstream/swap")  
[basic_spanstream::rdbuf](rdbuf.html "cpp/io/basic spanstream/rdbuf")  
[Underlying buffer operations](../basic_spanstream.html#Underlying_buffer_operations "cpp/io/basic spanstream")  
**basic_spanstream::span**  
[Non-member functions](../basic_spanstream.html#Non-member_functions "cpp/io/basic spanstream")  
[swap(std::basic_spanstream)](swap2.html "cpp/io/basic spanstream/swap2")  
  


[std::span](../../container/span.html)<CharT> span() const noexcept; |  (1)  |  (since C++23)  
---|---|---  
void span( [std::span](../../container/span.html)<CharT> s ) noexcept; |  (2)  |  (since C++23)  
| |   
  
1) Gets a `span` referencing the written area if [std::ios_base::out](../ios_base/openmode.html "cpp/io/ios base/openmode") is set in the open mode of the wrapped std::basic_spanbuf, or a `span` referencing the underlying buffer otherwise.

2) Makes the wrapped std::basic_spanbuf perform I/O on the buffer referenced by s.

## Contents

  * [1 Parameters](span.html#Parameters)
  * [2 Return value](span.html#Return_value)
  * [3 Example](span.html#Example)
  * [4 See also](span.html#See_also)

  
---  
  
### Parameters

s  |  \-  |  std::span referencing the storage to be use as the new underlying buffer of stream   
---|---|---  
  
### Return value

1) A std::span referencing the underlying buffer or written area, depending on the open mode of the wrapped std::basic_spanbuf.

2) (none)

### Example

Run this code
    
    
    #include <cassert>
    #include <iostream>
    #include <span>
    #include <spanstream>
     
    int main()
    {
        char out_buf[16];
        [std::ospanstream](../basic_ospanstream.html) ost{[std::span](../../container/span.html)<char>{out_buf}};
        ost << "C++" << ' ' << 23 << '\0'; // note explicit null-termination
        auto sp = ost.span();
        [assert](../../error/assert.html)(
            sp[0] == 'C' && sp[1] == '+' && sp[2] == '+' &&
            sp[3] == ' ' && sp[4] == '2' && sp[5] == '3' &&
            sp[6] == '\0'
        );
        [std::cout](../cout.html) << "sp.data(): [" << sp.data() << "]\n";
        [std::cout](../cout.html) << "out_buf: [" << out_buf << "]\n";
        // spanstream uses out_buf as internal storage, no allocations
        [assert](../../error/assert.html)(static_cast<char*>(out_buf) == sp.data());
     
        const char in_buf[] = "X Y 42";
        [std::ispanstream](../basic_ispanstream.html) ist{[std::span](../../container/span.html)<const char>{in_buf}};
        [assert](../../error/assert.html)(static_cast<const char*>(in_buf) == ist.span().data());
        char c;
        ist >> c;
        [assert](../../error/assert.html)(c == 'X');
        ist >> c;
        [assert](../../error/assert.html)(c == 'Y');
        int i;
        ist >> i;
        [assert](../../error/assert.html)(i == 42);
        ist >> i; // buffer is exhausted
        [assert](../../error/assert.html)(!ist);
    }

Output: 
    
    
    sp.data(): [C++ 23]
    out_buf: [C++ 23]

### See also

[ span](../basic_spanbuf/span.html "cpp/io/basic spanbuf/span") |  obtains or initializes an underlying buffer according to mode   
(public member function of `std::basic_spanbuf<CharT,Traits>`)   
---|---
