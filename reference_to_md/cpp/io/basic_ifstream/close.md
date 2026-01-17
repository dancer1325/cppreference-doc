[[edit template]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_fstream/close&action=edit)

 
  


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
[basic_ifstream::operator=](operator=.html "cpp/io/basic ifstream/operator=")(C++11)  
[basic_ifstream::swap](swap.html "cpp/io/basic ifstream/swap")(C++11)  
[basic_ifstream::rdbuf](rdbuf.html "cpp/io/basic ifstream/rdbuf")  
[basic_ifstream::native_handle](native_handle.html "cpp/io/basic ifstream/native handle")(C++26)  
File operations  
[basic_ifstream::is_open](is_open.html "cpp/io/basic ifstream/is open")  
[basic_ifstream::open](open.html "cpp/io/basic ifstream/open")  
**basic_ifstream::close**  
Non-member functions  
[swap(std::basic_ifstream)](swap2.html "cpp/io/basic ifstream/swap2")(C++11)  
  


void close(); |  |   
---|---|---  
| |   
  
Closes the associated file. 

Effectively calls [`rdbuf()->close()`](../basic_filebuf/close.html "cpp/io/basic filebuf/close"). If an error occurs during operation, setstate(failbit) is called. 

## Contents

  * [1 Parameters](close.html#Parameters)
  * [2 Return value](close.html#Return_value)
  * [3 Notes](close.html#Notes)
  * [4 Example](close.html#Example)
  * [5 See also](close.html#See_also)

  
---  
  
### Parameters

(none) 

### Return value

(none) 

### Notes

This function is called by the destructor of `basic_ifstream` when the stream object goes out of scope and is not usually invoked directly. 

### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### See also

[ is_open](is_open.html "cpp/io/basic ifstream/is open") |  checks if the stream has an associated file   
(public member function)   
---|---  
[ open](open.html "cpp/io/basic ifstream/open") |  opens a file and associates it with the stream   
(public member function)   
[ close](../basic_filebuf/close.html "cpp/io/basic filebuf/close") |  flushes the put area buffer and closes the associated file   
(public member function of `std::basic_filebuf<CharT,Traits>`) 
