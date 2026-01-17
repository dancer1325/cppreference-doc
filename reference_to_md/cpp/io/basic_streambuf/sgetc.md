 
  


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
  


[`std::basic_streambuf`](../basic_streambuf.html "cpp/io/basic streambuf")

| Public member functions  
---  
[basic_streambuf::~basic_streambuf](~basic_streambuf.html "cpp/io/basic streambuf/~basic streambuf")  
Locales  
[basic_streambuf::pubimbue](pubimbue.html "cpp/io/basic streambuf/pubimbue")  
[basic_streambuf::getloc](getloc.html "cpp/io/basic streambuf/getloc")  
Positioning  
[basic_streambuf::pubsetbuf](pubsetbuf.html "cpp/io/basic streambuf/pubsetbuf")  
[basic_streambuf::pubseekoff](pubseekoff.html "cpp/io/basic streambuf/pubseekoff")  
[basic_streambuf::pubseekpos](pubseekpos.html "cpp/io/basic streambuf/pubseekpos")  
[basic_streambuf::pubsync](pubsync.html "cpp/io/basic streambuf/pubsync")  
Get area  
[basic_streambuf::in_avail](in_avail.html "cpp/io/basic streambuf/in avail")  
[basic_streambuf::snextc](snextc.html "cpp/io/basic streambuf/snextc")  
[basic_streambuf::sbumpc](sbumpc.html "cpp/io/basic streambuf/sbumpc")  
**basic_streambuf::sgetc**  
[basic_streambuf::sgetn](sgetn.html "cpp/io/basic streambuf/sgetn")  
Put area  
[basic_streambuf::sputc](sputc.html "cpp/io/basic streambuf/sputc")  
[basic_streambuf::sputn](sputn.html "cpp/io/basic streambuf/sputn")  
Putback  
[basic_streambuf::sputbackc](sputbackc.html "cpp/io/basic streambuf/sputbackc")  
[basic_streambuf::sungetc](sungetc.html "cpp/io/basic streambuf/sungetc")  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
| Protected member functions  
---  
[basic_streambuf::basic_streambuf](basic_streambuf.html "cpp/io/basic streambuf/basic streambuf")  
[basic_streambuf::operator=](operator=.html "cpp/io/basic streambuf/operator=")(C++11)  
[basic_streambuf::swap](swap.html "cpp/io/basic streambuf/swap")(C++11)  
Locales  
[basic_streambuf::imbue](pubimbue.html "cpp/io/basic streambuf/pubimbue")  
Positioning  
[basic_streambuf::setbuf](pubsetbuf.html "cpp/io/basic streambuf/pubsetbuf")  
[basic_streambuf::seekoff](pubseekoff.html "cpp/io/basic streambuf/pubseekoff")  
[basic_streambuf::seekpos](pubseekpos.html "cpp/io/basic streambuf/pubseekpos")  
[basic_streambuf::sync](pubsync.html "cpp/io/basic streambuf/pubsync")  
Get area  
[basic_streambuf::showmanyc](showmanyc.html "cpp/io/basic streambuf/showmanyc")  
[basic_streambuf::underflow](underflow.html "cpp/io/basic streambuf/underflow")  
[basic_streambuf::uflow](uflow.html "cpp/io/basic streambuf/uflow")  
[basic_streambuf::xsgetn](sgetn.html "cpp/io/basic streambuf/sgetn")  
[basic_streambuf::ebackbasic_streambuf::gptrbasic_streambuf::egptr](gptr.html "cpp/io/basic streambuf/gptr")  
[basic_streambuf::gbump](gbump.html "cpp/io/basic streambuf/gbump")  
[basic_streambuf::setg](setg.html "cpp/io/basic streambuf/setg")  
Put area  
[basic_streambuf::xsputn](sputn.html "cpp/io/basic streambuf/sputn")  
[basic_streambuf::overflow](overflow.html "cpp/io/basic streambuf/overflow")  
[basic_streambuf::pbasebasic_streambuf::pptrbasic_streambuf::epptr](pptr.html "cpp/io/basic streambuf/pptr")  
[basic_streambuf::pbump](pbump.html "cpp/io/basic streambuf/pbump")  
[basic_streambuf::setp](setp.html "cpp/io/basic streambuf/setp")  
Putback  
[basic_streambuf::pbackfail](pbackfail.html "cpp/io/basic streambuf/pbackfail")  
  


int_type sgetc(); |  |   
---|---|---  
| |   
  
Reads one character from the input sequence. 

If the input sequence read position is not available, returns [underflow()](underflow.html "cpp/io/basic streambuf/underflow"). Otherwise returns Traits::to_int_type(*gptr()). 

## Contents

  * [1 Parameters](sgetc.html#Parameters)
  * [2 Return value](sgetc.html#Return_value)
  * [3 Example](sgetc.html#Example)
  * [4 See also](sgetc.html#See_also)

  
---  
  
### Parameters

(none) 

### Return value

The value of the character pointed to by the _get pointer_. 

### Example

Run this code
    
    
    #include <iostream>
    #include <sstream>
     
    int main()
    {
        [std::stringstream](../basic_stringstream.html) stream("Hello, world");
        [std::cout](../cout.html) << "sgetc() returned '" << (char)stream.rdbuf()->sgetc() << "'\n";
        [std::cout](../cout.html) << "peek() returned '" << (char)stream.peek() << "'\n";
        [std::cout](../cout.html) << "get() returned '" << (char)stream.get() << "'\n";
    }

Output: 
    
    
    sgetc() returned 'H'
    peek() returned 'H'
    get() returned 'H'

### See also

[ sbumpcstossc](sbumpc.html "cpp/io/basic streambuf/sbumpc")(removed in C++17) |  reads one character from the input sequence and advances the sequence   
(public member function)   
---|---  
[ snextc](snextc.html "cpp/io/basic streambuf/snextc") |  advances the input sequence, then reads one character without advancing again   
(public member function) 
