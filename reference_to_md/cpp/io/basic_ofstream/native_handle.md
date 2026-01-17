 
  


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
**basic_ofstream::native_handle**(C++26)  
File operations  
[basic_ofstream::is_open](is_open.html "cpp/io/basic ofstream/is open")  
[basic_ofstream::open](open.html "cpp/io/basic ofstream/open")  
[basic_ofstream::close](close.html "cpp/io/basic ofstream/close")  
Non-member functions  
[swap(std::basic_ofstream)](swap2.html "cpp/io/basic ofstream/swap2")(C++11)  
  


native_handle_type native_handle() const noexcept; |  |  (since C++26)  
---|---|---  
| |   
  
Returns the implementation defined underlying handle associated with `basic_filebuf`. The behavior is undefined if is_open() is false. 

### Return value

rdbuf()->native_handle()

### Notes

[Feature-test](../../utility/feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_fstream_native_handle`](../../experimental/feature_test.html#cpp_lib_fstream_native_handle "cpp/feature test") | [`202306L`](../../compiler_support/26.html#cpp_lib_fstream_native_handle_202306L "cpp/compiler support/26") | (C++26) | native handles support   
  
### Example

| This section is incomplete  
Reason: example   
---|---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
