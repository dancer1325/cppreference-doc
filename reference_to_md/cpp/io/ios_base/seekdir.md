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
  


[`std::ios_base`](../ios_base.html "cpp/io/ios base")

Member functions  
---  
[ios_base::ios_base](ios_base.html "cpp/io/ios base/ios base")  
[ios_base::~ios_base](~ios_base.html "cpp/io/ios base/~ios base")  
[ios_base::operator=](operator=.html "cpp/io/ios base/operator=")  
Formatting  
[ios_base::flags](flags.html "cpp/io/ios base/flags")  
[ios_base::setf](setf.html "cpp/io/ios base/setf")  
[ios_base::unsetf](unsetf.html "cpp/io/ios base/unsetf")  
[ios_base::precision](precision.html "cpp/io/ios base/precision")  
[ios_base::width](width.html "cpp/io/ios base/width")  
Locales  
[ios_base::imbue](imbue.html "cpp/io/ios base/imbue")  
[ios_base::getloc](getloc.html "cpp/io/ios base/getloc")  
Internal extensible array  
[ios_base::xalloc](xalloc.html "cpp/io/ios base/xalloc")  
[ios_base::iword](iword.html "cpp/io/ios base/iword")  
[ios_base::pword](pword.html "cpp/io/ios base/pword")  
Miscellaneous  
[ios_base::register_callback](register_callback.html "cpp/io/ios base/register callback")  
[ios_base::sync_with_stdio](sync_with_stdio.html "cpp/io/ios base/sync with stdio")  
Member classes  
[ios_base::failure](failure.html "cpp/io/ios base/failure")  
[ios_base::Init](Init.html "cpp/io/ios base/Init")  
Member types  
[ios_base::openmode](openmode.html "cpp/io/ios base/openmode")  
[ios_base::fmtflags](fmtflags.html "cpp/io/ios base/fmtflags")  
[ios_base::iostate](iostate.html "cpp/io/ios base/iostate")  
**ios_base::seekdir**  
[ios_base::event](event.html "cpp/io/ios base/event")  
[ios_base::event_callback](event_callback.html "cpp/io/ios base/event callback")  
  


typedef /*implementation defined*/ seekdir; |  |   
---|---|---  
static constexpr seekdir beg = /*implementation defined*/  
static constexpr seekdir end = /*implementation defined*/  
static constexpr seekdir cur = /*implementation defined*/ |  |   
| |   
  
Specifies file seeking direction type. The following constants are defined: 

Constant  |  Explanation   
---|---  
**`beg`** |  the beginning of a stream   
**`end`** |  the ending of a stream   
**`cur`** |  the current position of stream position indicator   
  
### Example

Run this code
    
    
    #include <iostream>
    #include <sstream>
    #include <string>
     
    int main()
    {
        [std::istringstream](../basic_istringstream.html) in("Hello, World!");
        [std::string](../../string/basic_string.html) word1, word2, word3, word4, word5;
     
        in >> word1;
        in.seekg(0, std::ios_base::beg); // <- rewind
        in >> word2;
        in.seekg(1, std::ios_base::cur); // -> seek from cur pos toward the end
        in >> word3;
        in.seekg(-6, std::ios_base::cur); // <- seek from cur pos (end) toward begin
        in >> word4;
        in.seekg(-6, std::ios_base::end); // <- seek from end toward begin
        in >> word5;
     
        [std::cout](../cout.html) << "word1 = " << word1 << '\n'
                  << "word2 = " << word2 << '\n'
                  << "word3 = " << word3 << '\n'
                  << "word4 = " << word4 << '\n'
                  << "word5 = " << word5 << '\n';
    }

Output: 
    
    
    word1 = Hello,
    word2 = Hello,
    word3 = World!
    word4 = World!
    word5 = World!

### See also

[ seekg](../basic_istream/seekg.html "cpp/io/basic istream/seekg") |  sets the input position indicator   
(public member function of `std::basic_istream<CharT,Traits>`)   
---|---  
[ seekp](../basic_ostream/seekp.html "cpp/io/basic ostream/seekp") |  sets the output position indicator   
(public member function of `std::basic_ostream<CharT,Traits>`)   
[ pubseekoff](../basic_streambuf/pubseekoff.html "cpp/io/basic streambuf/pubseekoff") |  invokes seekoff()   
(public member function of `std::basic_streambuf<CharT,Traits>`) 
