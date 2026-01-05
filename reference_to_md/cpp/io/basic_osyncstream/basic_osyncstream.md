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
  


[`std::basic_osyncstream`](../basic_osyncstream.html "cpp/io/basic osyncstream")

Public member functions  
---  
**basic_osyncstream::basic_osyncstream**(C++20)  
[basic_osyncstream::operator=](operator=.html "cpp/io/basic osyncstream/operator=")(C++20)  
[basic_osyncstream::~basic_osyncstream](~basic_osyncstream.html "cpp/io/basic osyncstream/~basic osyncstream")(C++20)  
[basic_osyncstream::rdbuf](rdbuf.html "cpp/io/basic osyncstream/rdbuf")(C++20)  
[basic_osyncstream::get_wrapped](get_wrapped.html "cpp/io/basic osyncstream/get wrapped")(C++20)  
[basic_osyncstream::emit](emit.html "cpp/io/basic osyncstream/emit")(C++20)  
  


basic_osyncstream( streambuf_type* buf, const Allocator& a ); |  (1)  |   
---|---|---  
explicit basic_osyncstream( streambuf_type* buf ); |  (2)  |   
basic_osyncstream( [std::basic_ostream](../basic_ostream.html)<CharT, Traits>& os, const Allocator& a ); |  (3)  |   
explicit basic_osyncstream( [std::basic_ostream](../basic_ostream.html)<CharT, Traits>& os ); |  (4)  |   
basic_osyncstream( [std::basic_osyncstream](../basic_osyncstream.html)&& other ) noexcept; |  (5)  |   
| |   
  
Constructs new synchronized output stream. 

1-4) Constructs the private member [std::basic_syncbuf](../basic_syncbuf.html) using the buffer and the allocator provided, and initializes the base class with a pointer to the member [std::basic_streambuf](../basic_streambuf.html).

5) Move constructor. Move-constructs the [std::basic_ostream](../basic_ostream.html) base and the std::basic_syncbuf member from the corresponding subobjects of other, then calls [`set_rdbuf`](../basic_ios/set_rdbuf.html "cpp/io/basic ios/set rdbuf") with the pointer to the newly-constructed underlying [std::basic_syncbuf](../basic_syncbuf.html) to complete the initialization of the base. After this move constructor, other.get_wrapped() returns nullptr and destruction of other produces no output.

### Parameters

buf  |  \-  |  pointer to the [std::basic_streambuf](../basic_streambuf.html "cpp/io/basic streambuf") that will be wrapped   
---|---|---  
os  |  \-  |  reference to a [std::basic_ostream](../basic_ostream.html "cpp/io/basic ostream"), whose rdbuf() will be wrapped   
a  |  \-  |  the allocator to pass to the constructor of the member std::basic_syncbuf  
other  |  \-  |  another osyncstream to move from   
  
### Example

Run this code
    
    
    #include <iostream>
    #include <string_view>
    #include <syncstream>
    #include <thread>
     
    void worker(const int id, [std::ostream](../basic_ostream.html) &os)
    {
        [std::string_view](../../string/basic_string_view.html) block;
        switch (id)
        {
            default: [[fallthrough]];
            case 0: block = "██";
                    break;
            case 1: block = "▓▓";
                    break;
            case 2: block = "▒▒";
                    break;
            case 3: block = "░░";
                    break;
        }
        for (int i = 1; i <= 50; ++i)
            os << block << [std::flush](../manip/flush.html);
        os << [std::endl](../manip/endl.html);
    }
     
    int main()
    {
        [std::cout](../cout.html) << "Synchronized output should not cause any interference:" << [std::endl](../manip/endl.html);
        {
            auto scout1 = [std::osyncstream](../basic_osyncstream.html){[std::cout](../cout.html)};
            auto scout2 = [std::osyncstream](../basic_osyncstream.html){[std::cout](../cout.html)};
            auto scout3 = [std::osyncstream](../basic_osyncstream.html){[std::cout](../cout.html)};
            auto scout4 = [std::osyncstream](../basic_osyncstream.html){[std::cout](../cout.html)};
            auto w1 = [std::jthread](../../thread/jthread.html){worker, 0, [std::ref](../../utility/functional/ref.html)(scout1)};
            auto w2 = [std::jthread](../../thread/jthread.html){worker, 1, [std::ref](../../utility/functional/ref.html)(scout2)};
            auto w3 = [std::jthread](../../thread/jthread.html){worker, 2, [std::ref](../../utility/functional/ref.html)(scout3)};
            auto w4 = [std::jthread](../../thread/jthread.html){worker, 3, [std::ref](../../utility/functional/ref.html)(scout4)};
        }
     
        [std::cout](../cout.html) << "\nLack of synchronization may cause some interference on output:"
                  << [std::endl](../manip/endl.html);
        {
            auto w1 = [std::jthread](../../thread/jthread.html){worker, 0, [std::ref](../../utility/functional/ref.html)([std::cout](../cout.html))};
            auto w2 = [std::jthread](../../thread/jthread.html){worker, 1, [std::ref](../../utility/functional/ref.html)([std::cout](../cout.html))};
            auto w3 = [std::jthread](../../thread/jthread.html){worker, 2, [std::ref](../../utility/functional/ref.html)([std::cout](../cout.html))};
            auto w4 = [std::jthread](../../thread/jthread.html){worker, 3, [std::ref](../../utility/functional/ref.html)([std::cout](../cout.html))};
        }
    }

Possible output: 
    
    
    Synchronized output should not cause any interference:
    ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
    ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒
    ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓
    ████████████████████████████████████████████████████████████████████████████████████████████████████
     
    Lack of synchronization may cause some interference on output:
    ████▓▓██▒▒▒▒▓▓██░░▒▒██░░▒▒░░░░▒▒░░▓▓▒▒██░░████████████▓▓██████▓▓▒▒▓▓██░░████▓▓▓▓██▒▒░░░░░░░░▓▓░░▓▓██▒▒▒▒▒▒▒▒▓▓██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░▒▒▒▒░░▒▒▒▒▒▒▒▒▒▒▓▓▒▒▒▒▒▒▒▒▒▒▒▒██░░░░░░░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓░░▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓████████▓▓▓▓▓▓▓▓▓▓▓▓░░▓▓▓▓
    ▒▒▒▒██░░██████████████████████████░░░░░░░░░░░░░░██░░▒▒░░░░░░██████████████████
    ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒
    ░░░░░░

### See also

[ (constructor)](../basic_syncbuf/basic_syncbuf.html "cpp/io/basic syncbuf/basic syncbuf") |  constructs a `basic_syncbuf` object   
(public member function of `std::basic_syncbuf<CharT,Traits,Allocator>`)   
---|---
