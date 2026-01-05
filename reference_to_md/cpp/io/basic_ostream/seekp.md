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
**basic_ostream::seekp**  
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
  


basic_ostream& seekp( pos_type pos ); |  (1)  |   
---|---|---  
basic_ostream& seekp( off_type off, [std::ios_base::seekdir](../ios_base/seekdir.html) dir ); |  (2)  |   
| |   
  
Sets the output position indicator of the current associated `streambuf` object. 

Behaves as [UnformattedOutputFunction](../../named_req/UnformattedOutputFunction.html "cpp/named req/UnformattedOutputFunction") (except without actually performing output). After constructing and checking the sentry object,  | (since C++11)  
---|---  
  
1) if fail() != true, sets the output position indicator to absolute (relative to the beginning of the file) value pos by calling rdbuf()->pubseekpos(pos, [std::ios_base::out](../ios_base/openmode.html)). In case of failure, calls setstate([std::ios_base::failbit](../ios_base/iostate.html)).

2) if fail() != true, sets the output position indicator to offset off relative to dir by calling rdbuf()->pubseekoff(off, dir, [std::ios_base::out](../ios_base/openmode.html)). In case of failure, calls setstate([std::ios_base::failbit](../ios_base/iostate.html)).

## Contents

  * [1 Parameters](seekp.html#Parameters)
  * [2 Return value](seekp.html#Return_value)
  * [3 Exceptions](seekp.html#Exceptions)
  * [4 Example](seekp.html#Example)
  * [5 Defect reports](seekp.html#Defect_reports)
  * [6 See also](seekp.html#See_also)

  
---  
  
### Parameters

pos  |  \-  |  absolute position to set the output position indicator to   
---|---|---  
off  |  \-  |  relative position (positive or negative) to set the output position indicator to   
dir  |  \-  |  defines base position to apply the relative offset to. It can be one of the following constants:  |  Constant  |  Explanation   
---|---  
[`beg`](../ios_base/seekdir.html "cpp/io/ios base/seekdir") |  the beginning of a stream   
[`end`](../ios_base/seekdir.html "cpp/io/ios base/seekdir") |  the ending of a stream   
[`cur`](../ios_base/seekdir.html "cpp/io/ios base/seekdir") |  the current position of stream position indicator   
  
### Return value

*this

### Exceptions

1,2) May throw [std::ios_base::failure](../ios_base/failure.html "cpp/io/ios base/failure") in case of failure, if exceptions() & failbit != 0.

### Example

Run this code
    
    
    #include <iostream>
    #include <sstream>
     
    int main()
    {
        [std::ostringstream](../basic_ostringstream.html) os("hello, world");
        os.seekp(7);
        os << 'W';
        os.seekp(0, [std::ios_base::end](../ios_base/seekdir.html));
        os << '!';
        os.seekp(0);
        os << 'H';
        [std::cout](../cout.html) << os.str() << '\n';
    }

Output: 
    
    
    Hello, World!

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 129](https://cplusplus.github.io/LWG/issue129) | C++98  | there was no way to indicate a failure  | sets `failbit` on failure   
[LWG 136](https://cplusplus.github.io/LWG/issue136) | C++98  | `seekp` could set the input stream  | only sets the output stream   
[LWG 537](https://cplusplus.github.io/LWG/issue537) | C++98  | 1\. the type of pos was `pos_type&`  
2\. the type of off was `off_type&` | 1\. corrected to `pos_type`  
2\. corrected to `off_type`  
[LWG 2341](https://cplusplus.github.io/LWG/issue2341) | C++98  | the resolution of [LWG issue 129](https://cplusplus.github.io/LWG/issue129) for overload (2) was removed  | restored   
  
### See also

[ tellp](tellp.html "cpp/io/basic ostream/tellp") |  returns the output position indicator   
(public member function)   
---|---  
[ tellg](../basic_istream/tellg.html "cpp/io/basic istream/tellg") |  returns the input position indicator   
(public member function of `std::basic_istream<CharT,Traits>`)   
[ seekg](../basic_istream/seekg.html "cpp/io/basic istream/seekg") |  sets the input position indicator   
(public member function of `std::basic_istream<CharT,Traits>`) 
