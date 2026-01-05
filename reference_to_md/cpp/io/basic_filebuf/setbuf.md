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
[basic_filebuf::swap](swap.html "cpp/io/basic filebuf/swap")(C++11)  
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
**basic_filebuf::setbuf**  
[basic_filebuf::seekoff](seekoff.html "cpp/io/basic filebuf/seekoff")  
[basic_filebuf::seekpos](seekpos.html "cpp/io/basic filebuf/seekpos")  
[basic_filebuf::sync](sync.html "cpp/io/basic filebuf/sync")  
[basic_filebuf::imbue](imbue.html "cpp/io/basic filebuf/imbue")  
Non-member functions  
[swap(std::basic_filebuf)](swap2.html "cpp/io/basic filebuf/swap2")(C++11)  
  


protected:  
virtual [std::basic_streambuf](../basic_streambuf.html)<CharT, Traits>* setbuf( char_type* s, [std::streamsize](../streamsize.html) n ) |  |   
---|---|---  
| |   
  
If s is a null pointer and n is zero, the filebuf becomes _unbuffered_ for output, meaning `pbase()` and `pptr()` are null and any output is immediately sent to file. 

Otherwise, a call to `setbuf()` replaces the internal buffer (the controlled character sequence) with the user-supplied character array whose first element is pointed to by s and allows this [std::basic_filebuf](../basic_filebuf.html "cpp/io/basic filebuf") object to use up to n bytes in that array for buffering. 

This function is protected virtual, it may only be called through `pubsetbuf()` or from member functions of a user-defined class derived from `std::basic_filebuf`. 

## Contents

  * [1 Parameters](setbuf.html#Parameters)
  * [2 Return value](setbuf.html#Return_value)
  * [3 Notes](setbuf.html#Notes)
  * [4 Example](setbuf.html#Example)
  * [5 Defect reports](setbuf.html#Defect_reports)
  * [6 See also](setbuf.html#See_also)

  
---  
  
### Parameters

s  |  \-  |  pointer to the first `CharT` in the user-provided buffer or null   
---|---|---  
n  |  \-  |  the number of `CharT` elements in the user-provided buffer or zero   
  
### Return value

this

### Notes

The conditions when this function may be used and the way in which the provided buffer is used is implementation-defined. 

  * GCC 4.6 libstdc++ 



     `setbuf()` may only be called when the [std::basic_filebuf](../basic_filebuf.html "cpp/io/basic filebuf") is not associated with a file (has no effect otherwise). With a user-provided buffer, reading from file reads `n-1` bytes at a time. 

  * Clang++3.0 libc++ 



     `setbuf()` may be called after opening the file, but before any I/O (may crash otherwise). With a user-provided buffer, reading from file reads largest multiples of 4096 that fit in the buffer. 

  * Visual Studio 2010 



     `setbuf()` may be called at any time, even after some I/O took place. Current contents of the buffer, if any, are lost. 

The standard does not define any behavior for this function except that setbuf(0, 0) called before any I/O has taken place is required to set unbuffered output. 

### Example

Provides a 10k buffer for reading. On linux, the strace utility may be used to observe the actual number of bytes read.

Run this code
    
    
    #include <fstream>
    #include <iostream>
    #include <string>
     
    int main()
    {
        int cnt = 0;
        [std::ifstream](../basic_ifstream.html) file;
        char buf[10241];
     
        file.rdbuf()->pubsetbuf(buf, sizeof buf);
        file.open("/usr/share/dict/words");
     
        for ([std::string](../../string/basic_string.html) line; getline(file, line);)
            ++cnt;
        [std::cout](../cout.html) << cnt << '\n';
    }

Possible output: 
    
    
    356010

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 173](https://cplusplus.github.io/LWG/issue173) | C++98  | the type of n was misspecified as int | corrected to [std::streamsize](../streamsize.html "cpp/io/streamsize")  
  
### See also

[ pubsetbuf](../basic_streambuf/pubsetbuf.html "cpp/io/basic streambuf/pubsetbuf") |  invokes setbuf()   
(public member function of `std::basic_streambuf<CharT,Traits>`)   
---|---  
[ setvbuf](../c/setvbuf.html "cpp/io/c/setvbuf") |  sets the buffer and its size for a file stream   
(function) 
