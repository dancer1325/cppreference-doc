[[edit template]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_fstream/operator%3D&action=edit)

 
  


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
  


[`std::basic_ifstream`](../basic_ifstream.html "cpp/io/basic ifstream")

Member functions  
---  
[basic_ifstream::basic_ifstream](basic_ifstream.html "cpp/io/basic ifstream/basic ifstream")  
**basic_ifstream::operator=**(C++11)  
[basic_ifstream::swap](swap.html "cpp/io/basic ifstream/swap")(C++11)  
[basic_ifstream::rdbuf](rdbuf.html "cpp/io/basic ifstream/rdbuf")  
[basic_ifstream::native_handle](native_handle.html "cpp/io/basic ifstream/native handle")(C++26)  
File operations  
[basic_ifstream::is_open](is_open.html "cpp/io/basic ifstream/is open")  
[basic_ifstream::open](open.html "cpp/io/basic ifstream/open")  
[basic_ifstream::close](close.html "cpp/io/basic ifstream/close")  
Non-member functions  
[swap(std::basic_ifstream)](swap2.html "cpp/io/basic ifstream/swap2")(C++11)  
  


basic_ifstream& operator=( basic_ifstream&& other ); |  |  (since C++11)  
---|---|---  
| |   
  
Move assigns the file stream other to *this, effectively move-assigning both the [std::basic_istream](../basic_istream.html "cpp/io/basic istream") base class and the associated [std::basic_filebuf](../basic_filebuf.html "cpp/io/basic filebuf"). 

other is left with no associated file. Note that the base class move assignment swaps all stream state variables (except for rdbuf) between *this and other. 

## Contents

  * [1 Parameters](operator=.html#Parameters)
  * [2 Return value](operator=.html#Return_value)
  * [3 Example](operator=.html#Example)
  * [4 See also](operator=.html#See_also)

  
---  
  
### Parameters

other  |  \-  |  file stream to move   
---|---|---  
  
### Return value

*this

### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### See also

[ swap](swap.html "cpp/io/basic ifstream/swap")(C++11) |  swaps two file streams   
(public member function)   
---|---  
[ operator=](../basic_filebuf/operator=.html "cpp/io/basic filebuf/operator=")(C++11) |  assigns a `basic_filebuf` object   
(public member function of `std::basic_filebuf<CharT,Traits>`)   
[ operator=](../basic_istream/operator=.html "cpp/io/basic istream/operator=")(C++11) |  move-assigns from another `basic_istream`   
(protected member function) 
