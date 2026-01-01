[[edit template]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_fstream/swap&action=edit)

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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/navbar_content&action=edit)

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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/navbar_content&action=edit)

[`std::basic_fstream`](../basic_fstream.html "cpp/io/basic fstream")

Member functions  
---  
[basic_fstream::basic_fstream](basic_fstream.html "cpp/io/basic fstream/basic fstream")  
[basic_fstream::operator=](operator=.html "cpp/io/basic fstream/operator=")(C++11)  
**basic_fstream::swap**(C++11)  
[basic_fstream::rdbuf](rdbuf.html "cpp/io/basic fstream/rdbuf")  
[basic_fstream::native_handle](native_handle.html "cpp/io/basic fstream/native handle")(C++26)  
File operations  
[basic_fstream::is_open](is_open.html "cpp/io/basic fstream/is open")  
[basic_fstream::open](open.html "cpp/io/basic fstream/open")  
[basic_fstream::close](close.html "cpp/io/basic fstream/close")  
Non-member functions  
[swap(std::basic_fstream)](swap2.html "cpp/io/basic fstream/swap2")(C++11)  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_fstream/navbar_content&action=edit)

void swap( basic_fstream& other ); |  |  (since C++11)  
---|---|---  
| |   
  
Exchanges the state of the stream with those of other. 

This is done by calling basic_iostream<CharT, Traits>::swap(other) and rdbuf()->swap(other.rdbuf()). 

## Contents

  * [1 Parameters](swap.html#Parameters)
  * [2 Return value](swap.html#Return_value)
  * [3 Exceptions](swap.html#Exceptions)
  * [4 Example](swap.html#Example)
  * [5 See also](swap.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_fstream/swap&action=edit&section=T-1 "Template:cpp/io/basic fstream/swap")] Parameters

other  |  \-  |  stream to exchange the state with   
---|---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_fstream/swap&action=edit&section=T-2 "Template:cpp/io/basic fstream/swap")] Return value

(none) 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/impldef_exception&action=edit&section=T-1 "Template:cpp/impldef exception")] Exceptions

May throw implementation-defined exceptions. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_fstream/swap&action=edit&section=T-3 "Template:cpp/io/basic fstream/swap")] Example

Run this code
    
    
    #include <fstream>
    #include <iomanip>
    #include <iostream>
    #include <string>
     
    bool create_stream([std::fstream](../basic_fstream.html)& fs, const [std::string](../../string/basic_string.html)& path)
    {
        try
        {
            [std::fstream](../basic_fstream.html) ts{path, ts.trunc | ts.in | ts.out};
            if (ts.is_open())
            {
                ts.swap(fs); // stream objects are not copyable
                return true;
            }
        }
        catch (...)
        {
            [std::cout](../cout.html) << "Exception!\n";
        }
        return false;
    }
     
    void use_stream([std::fstream](../basic_fstream.html)& fs)
    {
        fs.seekg(0);
        [std::string](../../string/basic_string.html) data;
        fs >> data;
        [std::cout](../cout.html) << "data: " << [std::quoted](../manip/quoted.html)(data) << '\n';
    }
     
    int main()
    {
        [std::fstream](../basic_fstream.html) fs;
        [std::string](../../string/basic_string.html) path = "/tmp/test_file.txt";
        if (create_stream(fs, path))
        {
            fs.write(path.c_str(), path.length());
            use_stream(fs);
        }
    }

Possible output: 
    
    
    data: "/tmp/test_file.txt"

### [[edit](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_fstream/swap&action=edit&section=T-4 "Template:cpp/io/basic fstream/swap")] See also

[ operator=](operator=.html "cpp/io/basic fstream/operator=")(C++11) |  moves the file stream   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_fstream/dsc_operator%3D&action=edit)  
---|---  
[ swap](../basic_filebuf/swap.html "cpp/io/basic filebuf/swap")(C++11) |  swaps two `basic_filebuf` objects   
(public member function of `std::basic_filebuf<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_filebuf/dsc_swap&action=edit)
