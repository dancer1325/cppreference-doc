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
  


[`std::basic_ios`](../basic_ios.html "cpp/io/basic ios")

Member functions  
---  
[basic_ios::basic_ios](basic_ios.html "cpp/io/basic ios/basic ios")  
[basic_ios::~basic_ios](~basic_ios.html "cpp/io/basic ios/~basic ios")  
State functions  
[basic_ios::good](good.html "cpp/io/basic ios/good")  
[basic_ios::eof](eof.html "cpp/io/basic ios/eof")  
[basic_ios::fail](fail.html "cpp/io/basic ios/fail")  
[basic_ios::bad](bad.html "cpp/io/basic ios/bad")  
[basic_ios::operator!](operator!.html "cpp/io/basic ios/operator!")  
[basic_ios::operator bool](operator_bool.html "cpp/io/basic ios/operator bool")  
**basic_ios::rdstate**  
[basic_ios::setstate](setstate.html "cpp/io/basic ios/setstate")  
[basic_ios::clear](clear.html "cpp/io/basic ios/clear")  
Formatting  
[basic_ios::copyfmt](copyfmt.html "cpp/io/basic ios/copyfmt")  
[basic_ios::fill](fill.html "cpp/io/basic ios/fill")  
Miscellaneous  
[basic_ios::exceptions](exceptions.html "cpp/io/basic ios/exceptions")  
[basic_ios::imbue](imbue.html "cpp/io/basic ios/imbue")  
[basic_ios::rdbuf](rdbuf.html "cpp/io/basic ios/rdbuf")  
[basic_ios::tie](tie.html "cpp/io/basic ios/tie")  
[basic_ios::narrow](narrow.html "cpp/io/basic ios/narrow")  
[basic_ios::widen](widen.html "cpp/io/basic ios/widen")  
Protected member functions  
[basic_ios::init](init.html "cpp/io/basic ios/init")  
[basic_ios::move](move.html "cpp/io/basic ios/move")(C++11)  
[basic_ios::swap](swap.html "cpp/io/basic ios/swap")(C++11)  
[basic_ios::set_rdbuf](set_rdbuf.html "cpp/io/basic ios/set rdbuf")(C++11)  
  


iostate rdstate() const; |  |   
---|---|---  
| |   
  
Returns the current stream error state. 

## Contents

  * [1 Parameters](rdstate.html#Parameters)
  * [2 Return value](rdstate.html#Return_value)
  * [3 Example](rdstate.html#Example)
  * [4 See also](rdstate.html#See_also)

  
---  
  
### Parameters

(none) 

### Return value

current stream error state. It is a bitmask type and can be a combination of the following constants: 

Constant  |  Explanation   
---|---  
[`goodbit`](../ios_base/iostate.html "cpp/io/ios base/iostate") |  no error   
[`badbit`](../ios_base/iostate.html "cpp/io/ios base/iostate") |  irrecoverable stream error   
[`failbit`](../ios_base/iostate.html "cpp/io/ios base/iostate") |  input/output operation failed (formatting or extraction error)   
[`eofbit`](../ios_base/iostate.html "cpp/io/ios base/iostate") |  associated input sequence has reached end-of-file   
  
### Example

Run this code
    
    
    #include <iostream>
    #include <sstream>
     
    int main()
    {
        [std::ostringstream](../basic_ostringstream.html) stream;
     
        if (stream.rdstate() == [std::ios_base::goodbit](../ios_base/iostate.html))
            [std::cout](../cout.html) << "stream state is goodbit\n";
     
        stream.setstate([std::ios_base::eofbit](../ios_base/iostate.html));
     
        // check state is exactly eofbit (no failbit and no badbit)
        if (stream.rdstate() == [std::ios_base::eofbit](../ios_base/iostate.html))
            [std::cout](../cout.html) << "stream state is eofbit\n";
    }

Output: 
    
    
    stream state is goodbit
    stream state is eofbit

### See also

[ setstate](setstate.html "cpp/io/basic ios/setstate") |  sets state flags   
(public member function)   
---|---  
[ clear](clear.html "cpp/io/basic ios/clear") |  modifies state flags   
(public member function) 
