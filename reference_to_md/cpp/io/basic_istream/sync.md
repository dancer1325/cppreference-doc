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
  


[`std::basic_istream`](../basic_istream.html "cpp/io/basic istream")

Global objects  
---  
[cinwcin](../cin.html "cpp/io/cin")  
Member functions  
[basic_istream::basic_istream](basic_istream.html "cpp/io/basic istream/basic istream")  
[basic_istream::~basic_istream](~basic_istream.html "cpp/io/basic istream/~basic istream")  
[basic_istream::operator=](operator=.html "cpp/io/basic istream/operator=")(C++11)  
Formatted input  
[basic_istream::operator>>](operator_gtgt.html "cpp/io/basic istream/operator gtgt")  
Unformatted input  
[basic_istream::get](get.html "cpp/io/basic istream/get")  
[basic_istream::peek](peek.html "cpp/io/basic istream/peek")  
[basic_istream::unget](unget.html "cpp/io/basic istream/unget")  
[basic_istream::putback](putback.html "cpp/io/basic istream/putback")  
[basic_istream::getline](getline.html "cpp/io/basic istream/getline")  
[basic_istream::ignore](ignore.html "cpp/io/basic istream/ignore")  
[basic_istream::read](read.html "cpp/io/basic istream/read")  
[basic_istream::readsome](readsome.html "cpp/io/basic istream/readsome")  
[basic_istream::gcount](gcount.html "cpp/io/basic istream/gcount")  
Positioning  
[basic_istream::tellg](tellg.html "cpp/io/basic istream/tellg")  
[basic_istream::seekg](seekg.html "cpp/io/basic istream/seekg")  
Miscellaneous  
**basic_istream::sync**  
[basic_istream::swap](swap.html "cpp/io/basic istream/swap")(C++11)  
Member classes  
[basic_istream::sentry](sentry.html "cpp/io/basic istream/sentry")  
Non-member functions  
[operator>>(std::basic_istream)](operator_gtgt2.html "cpp/io/basic istream/operator gtgt2")  
  


int sync(); |  |   
---|---|---  
| |   
  
Synchronizes the input buffer with the associated data source. 

Behaves as [UnformattedInputFunction](../../named_req/UnformattedInputFunction.html "cpp/named req/UnformattedInputFunction"), except that [gcount()](gcount.html "cpp/io/basic istream/gcount") is not affected. After constructing and checking the sentry object, 

If [rdbuf()](../basic_ios/rdbuf.html "cpp/io/basic ios/rdbuf") is a null pointer, returns -1. 

Otherwise, calls rdbuf()->pubsync(). If that function returns -1, calls setstate(badbit) and returns -1. Otherwise, returns ​0​. 

## Contents

  * [1 Parameters](sync.html#Parameters)
  * [2 Return value](sync.html#Return_value)
  * [3 Notes](sync.html#Notes)
  * [4 Example](sync.html#Example)
  * [5 Defect reports](sync.html#Defect_reports)
  * [6 See also](sync.html#See_also)

  
---  
  
### Parameters

(none) 

### Return value

​0​ on success, -1 on failure or if the stream does not support this operation (is unbuffered). 

### Notes

As with [readsome()](readsome.html "cpp/io/basic istream/readsome"), it is implementation-defined whether this function does anything with library-supplied streams. The intent is typically for the next read operation to pick up any changes that may have been made to the associated input sequence after the stream buffer last filled its get area. To achieve that, `sync()` may empty the get area, or it may refill it, or it may do nothing. A notable exception is Visual Studio, where this operation discards the unprocessed input when called with a standard input stream. 

### Example

Demonstrates the use of input stream `sync()` with file input. Note that output here is implementation-defined, since calls to [`std::basic_filebuf::sync`](../basic_filebuf/sync.html "cpp/io/basic filebuf/sync") are implementation-defined for reads.

Run this code
    
    
    #include <fstream>
    #include <iostream>
     
    void file_abc()
    {
        [std::ofstream](../basic_ofstream.html) f("test.txt");
        f << "abc\n";
    }
     
    void file_123()
    {
        [std::ofstream](../basic_ofstream.html) f("test.txt");
        f << "123\n";
    }
     
    int main()
    {
        file_abc(); // file now contains "abc"
        [std::ifstream](../basic_ifstream.html) f("test.txt");
        [std::cout](../cout.html) << "Reading from the file\n";
        char c;
        f >> c;
        [std::cout](../cout.html) << c;
        file_123(); // file now contains "123"
        f >> c;
        [std::cout](../cout.html) << c;
        f >> c;
        [std::cout](../cout.html) << c << '\n';
        f.close();
     
        file_abc(); // file now contains "abc"
        f.open("test.txt");
        [std::cout](../cout.html) << "Reading from the file, with sync()\n";
        f >> c;
        [std::cout](../cout.html) << c;
        file_123(); // file now contains "123"
        f.sync();
        f >> c;
        [std::cout](../cout.html) << c;
        f >> c;
        [std::cout](../cout.html) << c << '\n';
    }

Possible output: 
    
    
    Reading from the file
    abc
    Reading from the file, with sync()
    a23

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 62](https://cplusplus.github.io/LWG/issue62) | C++98  | `sync()` returned traits::eof() if rdbuf()->pubsync() returns -1 | returns -1 in this case   
  
### See also

[ sync](../basic_streambuf/pubsync.html "cpp/io/basic streambuf/pubsync")[virtual] |  synchronizes the buffers with the associated character sequence   
(virtual protected member function of `std::basic_streambuf<CharT,Traits>`)   
---|---  
[ flush](../basic_ostream/flush.html "cpp/io/basic ostream/flush") |  synchronizes with the underlying storage device   
(public member function of `std::basic_ostream<CharT,Traits>`) 
