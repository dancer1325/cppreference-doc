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
**basic_istream::tellg**  
[basic_istream::seekg](seekg.html "cpp/io/basic istream/seekg")  
Miscellaneous  
[basic_istream::sync](sync.html "cpp/io/basic istream/sync")  
[basic_istream::swap](swap.html "cpp/io/basic istream/swap")(C++11)  
Member classes  
[basic_istream::sentry](sentry.html "cpp/io/basic istream/sentry")  
Non-member functions  
[operator>>(std::basic_istream)](operator_gtgt2.html "cpp/io/basic istream/operator gtgt2")  
  


pos_type tellg(); |  |   
---|---|---  
| |   
  
Returns input position indicator of the current associated `streambuf` object. 

Behaves as [UnformattedInputFunction](../../named_req/UnformattedInputFunction.html "cpp/named req/UnformattedInputFunction"), except that [gcount()](gcount.html "cpp/io/basic istream/gcount") is not affected. After constructing and checking the sentry object, if fail() == true, returns pos_type(-1). Otherwise, returns rdbuf()->pubseekoff(0, [std::ios_base::cur](../ios_base/seekdir.html), [std::ios_base::in](../ios_base/openmode.html)). 

## Contents

  * [1 Parameters](tellg.html#Parameters)
  * [2 Return value](tellg.html#Return_value)
  * [3 Exceptions](tellg.html#Exceptions)
  * [4 Example](tellg.html#Example)
  * [5 See also](tellg.html#See_also)

  
---  
  
### Parameters

(none) 

### Return value

The current position of the get pointer on success, pos_type(-1) on failure. 

### Exceptions



[failure](../ios_base/failure.html "cpp/io/ios base/failure") if an error occurred (the error state flag is not [goodbit](../ios_base/iostate.html "cpp/io/ios base/iostate")) and [exceptions()](../basic_ios/exceptions.html "cpp/io/basic ios/exceptions") is set to throw for that state. 

If an internal operation throws an exception, it is caught and [badbit](../ios_base/iostate.html "cpp/io/ios base/iostate") is set. If [exceptions()](../basic_ios/exceptions.html "cpp/io/basic ios/exceptions") is set for `badbit`, the exception is rethrown. 

### Example

Run this code
    
    
    #include <iostream>
    #include <sstream>
    #include <string>
     
    int main()
    {
        [std::string](../../string/basic_string.html) str = "Hello, world";
        [std::istringstream](../basic_istringstream.html) in(str);
        [std::string](../../string/basic_string.html) word;
        in >> word;
        [std::cout](../cout.html) << "After reading the word \"" << word
                  << "\" tellg() returns " << in.tellg() << '\n';
    }

Output: 
    
    
    After reading the word "Hello," tellg() returns 6

### See also

[ seekoff](../basic_filebuf/seekoff.html "cpp/io/basic filebuf/seekoff")[virtual] |  repositions the file position, using relative addressing   
(virtual protected member function of `std::basic_filebuf<CharT,Traits>`)   
---|---  
[ seekoff](../basic_stringbuf/seekoff.html "cpp/io/basic stringbuf/seekoff")[virtual] |  repositions the next pointer in the input sequence, output sequence, or both, using relative addressing   
(virtual protected member function of `std::basic_stringbuf<CharT,Traits,Allocator>`)   
[ seekoff](../strstreambuf/seekoff.html "cpp/io/strstreambuf/seekoff")[virtual] |  repositions the next pointer in the input sequence, output sequence, or both, using relative addressing   
(virtual protected member function of `std::strstreambuf`)   
[ seekg](seekg.html "cpp/io/basic istream/seekg") |  sets the input position indicator   
(public member function)   
[ tellp](../basic_ostream/tellp.html "cpp/io/basic ostream/tellp") |  returns the output position indicator   
(public member function of `std::basic_ostream<CharT,Traits>`)   
[ seekp](../basic_ostream/seekp.html "cpp/io/basic ostream/seekp") |  sets the output position indicator   
(public member function of `std::basic_ostream<CharT,Traits>`) 
