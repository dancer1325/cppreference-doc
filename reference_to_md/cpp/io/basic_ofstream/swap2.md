[[edit template]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_fstream/swap2&action=edit)

 
  


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
  


[`std::basic_ofstream`](../basic_ofstream.html "cpp/io/basic ofstream")

Member functions  
---  
[basic_ofstream::basic_ofstream](basic_ofstream.html "cpp/io/basic ofstream/basic ofstream")  
[basic_ofstream::operator=](operator=.html "cpp/io/basic ofstream/operator=")(C++11)  
[basic_ofstream::swap](swap.html "cpp/io/basic ofstream/swap")(C++11)  
[basic_ofstream::rdbuf](rdbuf.html "cpp/io/basic ofstream/rdbuf")  
[basic_ofstream::native_handle](native_handle.html "cpp/io/basic ofstream/native handle")(C++26)  
File operations  
[basic_ofstream::is_open](is_open.html "cpp/io/basic ofstream/is open")  
[basic_ofstream::open](open.html "cpp/io/basic ofstream/open")  
[basic_ofstream::close](close.html "cpp/io/basic ofstream/close")  
Non-member functions  
**swap(std::basic_ofstream)**(C++11)  
  


template< class CharT, class Traits >  
void swap( basic_ofstream<CharT, Traits>& lhs, basic_ofstream<CharT, Traits>& rhs ); |  |   
---|---|---  
| |   
  
Specializes the [std::swap](../../utility/swap.html "cpp/algorithm/swap") algorithm for [std::basic_ofstream](../basic_ofstream.html). Exchanges the state of lhs with that of rhs. Effectively calls lhs.swap(rhs). 

## Contents

  * [1 Parameters](swap2.html#Parameters)
  * [2 Return value](swap2.html#Return_value)
  * [3 Exceptions](swap2.html#Exceptions)
  * [4 Example](swap2.html#Example)
  * [5 See also](swap2.html#See_also)

  
---  
  
### Parameters

lhs, rhs  |  \-  |  streams whose state to swap   
---|---|---  
  
### Return value

(none) 

### Exceptions

May throw implementation-defined exceptions. 

### Example

Run this code
    
    
    #include <fstream>
    #include <iostream>
    #include <string>
     
    bool create_stream([std::ofstream](../basic_ofstream.html)& fs)
    {
        try
        {
            [std::string](../../string/basic_string.html) some_name = "/tmp/test_file.txt";
            [std::ios_base::openmode](../ios_base/openmode.html) some_flags = fs.trunc; // | other flags
     
            if ([std::ofstream](../basic_ofstream.html) ts{some_name, some_flags}; ts.is_open())
            {
                [std::swap](../../algorithm/swap.html)(ts, fs); // stream objects are not copyable => swap
                return true;
            }
        }
        catch (...)
        {
            [std::cout](../cout.html) << "Exception!\n";
        }
        return false;
    }
     
    int main()
    {
        if ([std::ofstream](../basic_ofstream.html) fs; create_stream(fs))
        {
            // use fs stream
        }
    }

### See also

[ swap](swap.html "cpp/io/basic ofstream/swap")(C++11) |  swaps two file streams   
(public member function)   
---|---
