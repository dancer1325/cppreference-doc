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
  


[`std::basic_ostream`](../basic_ostream.html "cpp/io/basic ostream")

Global objects  
---  
| [coutwcout](../cout.html "cpp/io/cout")  
---  
  
| [cerrwcerr](../cerr.html "cpp/io/cerr")  
---  
  
| [clogwclog](../clog.html "cpp/io/clog")  
---  
  
Member functions  
**basic_ostream::basic_ostream**  
[basic_ostream::~basic_ostream](~basic_ostream.html "cpp/io/basic ostream/~basic ostream")  
[basic_ostream::operator=](operator=.html "cpp/io/basic ostream/operator=")(C++11)  
Formatted output  
[basic_ostream::operator<<](operator_ltlt.html "cpp/io/basic ostream/operator ltlt")  
Unformatted output  
[basic_ostream::put](put.html "cpp/io/basic ostream/put")  
[basic_ostream::write](write.html "cpp/io/basic ostream/write")  
Positioning  
[basic_ostream::tellp](tellp.html "cpp/io/basic ostream/tellp")  
[basic_ostream::seekp](seekp.html "cpp/io/basic ostream/seekp")  
Miscellaneous  
[basic_ostream::flush](flush.html "cpp/io/basic ostream/flush")  
[basic_ostream::swap](swap.html "cpp/io/basic ostream/swap")(C++11)  
Member classes  
[basic_ostream::sentry](sentry.html "cpp/io/basic ostream/sentry")  
Non-member functions  
[operator<<(std::basic_ostream)](operator_ltlt2.html "cpp/io/basic ostream/operator ltlt2")  
[print(std::ostream)](print.html "cpp/io/basic ostream/print")(C++23)  
[println(std::ostream)](println.html "cpp/io/basic ostream/println")(C++23)  
[vprint_unicode(std::ostream)](vprint_unicode.html "cpp/io/basic ostream/vprint unicode")(C++23)  
[vprint_nonunicode(std::ostream)](vprint_nonunicode.html "cpp/io/basic ostream/vprint nonunicode")(C++23)  
  


explicit basic_ostream( [std::basic_streambuf](../basic_streambuf.html)<CharT, Traits>* sb ); |  (1)  |   
---|---|---  
protected:  
basic_ostream( const basic_ostream& rhs ) = delete; |  (2)  |  (since C++11)  
protected:  
basic_ostream( basic_ostream&& rhs ); |  (3)  |  (since C++11)  
| |   
  
1) Constructs the `basic_ostream` object, assigning initial values to the base class by calling [basic_ios::init(sb)](../basic_ios/init.html "cpp/io/basic ios/init").

2) The copy constructor is protected, and is deleted. Output streams are not copyable.

3) The move constructor uses basic_ios<CharT, Traits>::move(rhs) to move all `basic_ios` members, except for the `rdbuf()`, from rhs into *this. This move constructor is protected: it is called by the move constructors of movable output stream classes [std::basic_ofstream](../basic_ofstream.html "cpp/io/basic ofstream") and [std::basic_ostringstream](../basic_ostringstream.html "cpp/io/basic ostringstream"), which know how to correctly move the associated streambuffer.

### Parameters

sb  |  \-  |  streambuffer to use as output sequence   
---|---|---  
rhs  |  \-  |  basic_ostream to initialize from   
  
### Notes

Because [basic_ios::init(sb)](../basic_ios/init.html "cpp/io/basic ios/init") sets `badbit` when sb is a null pointer, and because [`basic_ostream::sentry`](sentry.html "cpp/io/basic ostream/sentry") does nothing if the stream is already in a failed state, writing to a stream constructed from a null pointer sb is a no-op. 

### Example

Run this code
    
    
    #include <iostream>
    #include <sstream>
    #include <utility>
     
    int main()
    {
        // ERROR: copy ctor is deleted
    //  std::ostream myout(std::cout);
     
        // OK: shares buffer with cout
        [std::ostream](../basic_ostream.html) myout([std::cout](../cout.html).rdbuf());
     
        // ERROR: move constructor is protected
    //  std::ostream s2(std::move(std::ostringstream() << 7.1));
     
        // OK: move ctor called through the derived class
        [std::ostringstream](../basic_ostringstream.html) s2([std::ostringstream](../basic_ostringstream.html)() << 7.1);
        myout << s2.str() << '\n';
     
        [std::ostream](../basic_ostream.html) dev_null{nullptr}; // see Notes above
        dev_null << "no-op";
    }

Output: 
    
    
    7.1
