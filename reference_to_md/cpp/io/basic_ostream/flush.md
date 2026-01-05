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
[basic_ostream::basic_ostream](basic_ostream.html "cpp/io/basic ostream/basic ostream")  
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
**basic_ostream::flush**  
[basic_ostream::swap](swap.html "cpp/io/basic ostream/swap")(C++11)  
Member classes  
[basic_ostream::sentry](sentry.html "cpp/io/basic ostream/sentry")  
Non-member functions  
[operator<<(std::basic_ostream)](operator_ltlt2.html "cpp/io/basic ostream/operator ltlt2")  
[print(std::ostream)](print.html "cpp/io/basic ostream/print")(C++23)  
[println(std::ostream)](println.html "cpp/io/basic ostream/println")(C++23)  
[vprint_unicode(std::ostream)](vprint_unicode.html "cpp/io/basic ostream/vprint unicode")(C++23)  
[vprint_nonunicode(std::ostream)](vprint_nonunicode.html "cpp/io/basic ostream/vprint nonunicode")(C++23)  
  


basic_ostream& flush(); |  |   
---|---|---  
| |   
  
Writes uncommitted changes to the underlying output sequence. Behaves as an [UnformattedOutputFunction](../../named_req/UnformattedOutputFunction.html "cpp/named req/UnformattedOutputFunction"). 

If [rdbuf()](../basic_ios/rdbuf.html "cpp/io/basic ios/rdbuf") is a null pointer, the sentry object is not constructed. 

Otherwise, after constructing and checking the sentry object, calls rdbuf()->pubsync(). If the call returns -1, calls setstate(badbit). 

## Contents

  * [1 Return value](flush.html#Return_value)
  * [2 Exceptions](flush.html#Exceptions)
  * [3 Example](flush.html#Example)
  * [4 Defect reports](flush.html#Defect_reports)
  * [5 See also](flush.html#See_also)

  
---  
  
### Return value

*this

### Exceptions

May throw [std::ios_base::failure](../ios_base/failure.html "cpp/io/ios base/failure") if (exceptions() & badbit) != 0. 

### Example

Run this code
    
    
    #include <chrono>
    #include <iostream>
    #include <thread>
     
    using namespace std::chrono_literals;
     
    void f()
    {
        [std::cout](../cout.html) << "Output from thread... ";
        for (int i{1}; i != 10; ++i)
        {
            [std::this_thread::sleep_for](../../thread/sleep_for.html)(250ms);
            [std::cout](../cout.html) << i << ' ';
     
            // output three numbers at once;
            // the effect is observable only in real-time
            if (0 == (i % 3))
                [std::cout](../cout.html).flush();
        }
        [std::cout](../cout.html) << [std::endl](../manip/endl.html); // flushes as well
    }
     
    int main()
    {
        [std::thread](../../thread/thread.html) tr{f};
        [std::this_thread::sleep_for](../../thread/sleep_for.html)(150ms);
        [std::clog](../clog.html) << "Output from main\n";
        tr.join();
    }

Output: 
    
    
    Output from main
    Output from thread... 1 2 3 4 5 6 7 8 9

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 581](https://cplusplus.github.io/LWG/issue581) | C++98  | `flush()` did not behave as an [UnformattedOutputFunction](../../named_req/UnformattedOutputFunction.html "cpp/named req/UnformattedOutputFunction")  
because of the resolution of [LWG issue 60](https://cplusplus.github.io/LWG/issue60) | behaves as an  
[UnformattedOutputFunction](../../named_req/UnformattedOutputFunction.html "cpp/named req/UnformattedOutputFunction")  
  
### See also

[ pubsync](../basic_streambuf/pubsync.html "cpp/io/basic streambuf/pubsync") |  invokes sync()   
(public member function of `std::basic_streambuf<CharT,Traits>`)   
---|---  
[ sync](../basic_streambuf/pubsync.html "cpp/io/basic streambuf/pubsync")[virtual] |  synchronizes the buffers with the associated character sequence   
(virtual protected member function of `std::basic_streambuf<CharT,Traits>`)   
[ flush](../manip/flush.html "cpp/io/manip/flush") |  flushes the output stream   
(function template)   
[ endl](../manip/endl.html "cpp/io/manip/endl") |  outputs '\n' and flushes the output stream   
(function template)   
[ sync](../basic_istream/sync.html "cpp/io/basic istream/sync") |  synchronizes with the underlying storage device   
(public member function of `std::basic_istream<CharT,Traits>`) 
