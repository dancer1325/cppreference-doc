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
  


[`std::basic_filebuf`](../basic_filebuf.html "cpp/io/basic filebuf")

Public member functions  
---  
[basic_filebuf::basic_filebuf](basic_filebuf.html "cpp/io/basic filebuf/basic filebuf")  
[basic_filebuf::~basic_filebuf](~basic_filebuf.html "cpp/io/basic filebuf/~basic filebuf")  
[basic_filebuf::operator=](operator=.html "cpp/io/basic filebuf/operator=")(C++11)  
**basic_filebuf::swap**(C++11)  
[basic_filebuf::native_handle](native_handle.html "cpp/io/basic filebuf/native handle")(C++26)  
[basic_filebuf::is_open](is_open.html "cpp/io/basic filebuf/is open")  
[basic_filebuf::open](open.html "cpp/io/basic filebuf/open")  
[basic_filebuf::close](close.html "cpp/io/basic filebuf/close")  
Protected member functions  
[basic_filebuf::showmanyc](showmanyc.html "cpp/io/basic filebuf/showmanyc")  
[basic_filebuf::underflow](underflow.html "cpp/io/basic filebuf/underflow")  
[basic_filebuf::uflow](uflow.html "cpp/io/basic filebuf/uflow")  
[basic_filebuf::pbackfail](pbackfail.html "cpp/io/basic filebuf/pbackfail")  
[basic_filebuf::overflow](overflow.html "cpp/io/basic filebuf/overflow")  
[basic_filebuf::setbuf](setbuf.html "cpp/io/basic filebuf/setbuf")  
[basic_filebuf::seekoff](seekoff.html "cpp/io/basic filebuf/seekoff")  
[basic_filebuf::seekpos](seekpos.html "cpp/io/basic filebuf/seekpos")  
[basic_filebuf::sync](sync.html "cpp/io/basic filebuf/sync")  
[basic_filebuf::imbue](imbue.html "cpp/io/basic filebuf/imbue")  
Non-member functions  
[swap(std::basic_filebuf)](swap2.html "cpp/io/basic filebuf/swap2")(C++11)  
  


void swap( [std::basic_filebuf](../basic_filebuf.html)& rhs ); |  |  (since C++11)  
---|---|---  
| |   
  
Swaps the state and the contents of *this and rhs. 

## Contents

  * [1 Parameters](swap.html#Parameters)
  * [2 Return value](swap.html#Return_value)
  * [3 Notes](swap.html#Notes)
  * [4 Example](swap.html#Example)
  * [5 See also](swap.html#See_also)

  
---  
  
### Parameters

rhs  |  \-  |  another `basic_filebuf`  
---|---|---  
  
### Return value

(none) 

### Notes

This function is called automatically when swapping [std::fstream](../basic_fstream.html "cpp/io/basic fstream") objects, it is rarely necessary to call it directly. 

### Example

Run this code
    
    
    #include <fstream>
    #include <iostream>
    #include <string>
     
    int main()
    {
        [std::ifstream](../basic_ifstream.html) fin("test.in"); // read-only
        [std::ofstream](../basic_ofstream.html) fout("test.out"); // write-only
     
        [std::string](../../string/basic_string.html) s;
        getline(fin, s);
        [std::cout](../cout.html) << s << '\n'; // outputs the first line of test.in
     
        fin.rdbuf()->swap(*fout.rdbuf()); //swap the underlying buffers
     
        getline(fin, s); // fails: cannot read from a write-only filebuf
        [std::cout](../cout.html) << s << '\n'; // prints empty line
    }

### See also

[ operator=](operator=.html "cpp/io/basic filebuf/operator=")(C++11) |  assigns a `basic_filebuf` object   
(public member function)   
---|---  
[ std::swap(std::basic_filebuf)](swap2.html "cpp/io/basic filebuf/swap2")(C++11) |  specializes the [std::swap](../../utility/swap.html "cpp/algorithm/swap") algorithm   
(function template)   
[ swap](../basic_fstream/swap.html "cpp/io/basic fstream/swap")(C++11) |  swaps two file streams   
(public member function of `std::basic_fstream<CharT,Traits>`) 
