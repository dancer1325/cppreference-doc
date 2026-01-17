[[edit template]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_spanstream/swap&action=edit)

 
  


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
  


[`std::basic_spanstream`](../basic_spanstream.html "cpp/io/basic spanstream")

[Member functions](../basic_spanstream.html#Member_functions "cpp/io/basic spanstream")  
---  
[basic_spanstream::basic_spanstream](basic_spanstream.html "cpp/io/basic spanstream/basic spanstream")  
[basic_spanstream::operator=](operator=.html "cpp/io/basic spanstream/operator=")  
**basic_spanstream::swap**  
[basic_spanstream::rdbuf](rdbuf.html "cpp/io/basic spanstream/rdbuf")  
[Underlying buffer operations](../basic_spanstream.html#Underlying_buffer_operations "cpp/io/basic spanstream")  
[basic_spanstream::span](span.html "cpp/io/basic spanstream/span")  
[Non-member functions](../basic_spanstream.html#Non-member_functions "cpp/io/basic spanstream")  
[swap(std::basic_spanstream)](swap2.html "cpp/io/basic spanstream/swap2")  
  


void swap( basic_spanstream& other ); |  |  (since C++23)  
---|---|---  
| |   
  
Exchanges the state of the stream with those of `other`. 

This is done by calling [std::basic_iostream](../basic_iostream.html)<CharT, Traits>::swap(other) and swapping the wrapped std::basic_spanbuf objects (accessible through *rdbuf()). 

## Contents

  * [1 Parameters](swap.html#Parameters)
  * [2 Return value](swap.html#Return_value)
  * [3 Exceptions](swap.html#Exceptions)
  * [4 Example](swap.html#Example)
  * [5 See also](swap.html#See_also)

  
---  
  
### Parameters

other  |  \-  |  stream to exchange the state with   
---|---|---  
  
### Return value

(none) 

### Exceptions

May throw implementation-defined exceptions. 

### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### See also

[ swap](../basic_spanbuf/swap.html "cpp/io/basic spanbuf/swap") |  swaps two `basic_spanbuf` objects   
(public member function of `std::basic_spanbuf<CharT,Traits>`)   
---|---
