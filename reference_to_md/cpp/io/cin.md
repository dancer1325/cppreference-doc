
  


[Input/output library](../io.html "cpp/io")

[I/O manipulators](manip.html "cpp/io/manip")  
---  
[Print functions](../io.html#Print_functions_.28since_C.2B.2B23.29 "cpp/io") (C++23)  
[C-style I/O](c.html "cpp/io/c")  
Buffers  
[basic_streambuf](basic_streambuf.html "cpp/io/basic streambuf")  
[basic_filebuf](basic_filebuf.html "cpp/io/basic filebuf")  
[basic_stringbuf](basic_stringbuf.html "cpp/io/basic stringbuf")  
[basic_spanbuf](basic_spanbuf.html "cpp/io/basic spanbuf")(C++23)  
[strstreambuf](strstreambuf.html "cpp/io/strstreambuf")(C++98/26*)  
[basic_syncbuf](basic_syncbuf.html "cpp/io/basic syncbuf")(C++20)  
Streams  
Abstractions  
[ios_base](ios_base.html "cpp/io/ios base")  
[basic_ios](basic_ios.html "cpp/io/basic ios")  
[basic_istream](basic_istream.html "cpp/io/basic istream")  
[basic_ostream](basic_ostream.html "cpp/io/basic ostream")  
[basic_iostream](basic_iostream.html "cpp/io/basic iostream")  
File I/O  
[basic_ifstream](basic_ifstream.html "cpp/io/basic ifstream")  
[basic_ofstream](basic_ofstream.html "cpp/io/basic ofstream")  
[basic_fstream](basic_fstream.html "cpp/io/basic fstream")  
String I/O  
[basic_istringstream](basic_istringstream.html "cpp/io/basic istringstream")  
[basic_ostringstream](basic_ostringstream.html "cpp/io/basic ostringstream")  
[basic_stringstream](basic_stringstream.html "cpp/io/basic stringstream")  
Array I/O  
[basic_ispanstream](basic_ispanstream.html "cpp/io/basic ispanstream")(C++23)  
[basic_ospanstream](basic_ospanstream.html "cpp/io/basic ospanstream")(C++23)  
[basic_spanstream](basic_spanstream.html "cpp/io/basic spanstream")(C++23)  
[istrstream](istrstream.html "cpp/io/istrstream")(C++98/26*)  
[ostrstream](ostrstream.html "cpp/io/ostrstream")(C++98/26*)  
[strstream](strstream.html "cpp/io/strstream")(C++98/26*)  
Synchronized Output  
[basic_osyncstream](basic_osyncstream.html "cpp/io/basic osyncstream")(C++20)  
Types  
[streamoff](streamoff.html "cpp/io/streamoff")  
[streamsize](streamsize.html "cpp/io/streamsize")  
[fpos](fpos.html "cpp/io/fpos")  
Error category interface  
[iostream_category](iostream_category.html "cpp/io/iostream category")(C++11)  
[io_errc](io_errc.html "cpp/io/io errc")(C++11)  
  


[`std::basic_istream`](basic_istream.html "cpp/io/basic istream")

Global objects  
---  
**cin wcin**  
Member functions  
[basic_istream::basic_istream](basic_istream/basic_istream.html "cpp/io/basic istream/basic istream")  
[basic_istream::~basic_istream](basic_istream/~basic_istream.html "cpp/io/basic istream/~basic istream")  
[basic_istream::operator=](basic_istream/operator=.html "cpp/io/basic istream/operator=")(C++11)  
Formatted input  
[basic_istream::operator>>](basic_istream/operator_gtgt.html "cpp/io/basic istream/operator gtgt")  
Unformatted input  
[basic_istream::get](basic_istream/get.html "cpp/io/basic istream/get")  
[basic_istream::peek](basic_istream/peek.html "cpp/io/basic istream/peek")  
[basic_istream::unget](basic_istream/unget.html "cpp/io/basic istream/unget")  
[basic_istream::putback](basic_istream/putback.html "cpp/io/basic istream/putback")  
[basic_istream::getline](basic_istream/getline.html "cpp/io/basic istream/getline")  
[basic_istream::ignore](basic_istream/ignore.html "cpp/io/basic istream/ignore")  
[basic_istream::read](basic_istream/read.html "cpp/io/basic istream/read")  
[basic_istream::readsome](basic_istream/readsome.html "cpp/io/basic istream/readsome")  
[basic_istream::gcount](basic_istream/gcount.html "cpp/io/basic istream/gcount")  
Positioning  
[basic_istream::tellg](basic_istream/tellg.html "cpp/io/basic istream/tellg")  
[basic_istream::seekg](basic_istream/seekg.html "cpp/io/basic istream/seekg")  
Miscellaneous  
[basic_istream::sync](basic_istream/sync.html "cpp/io/basic istream/sync")  
[basic_istream::swap](basic_istream/swap.html "cpp/io/basic istream/swap")(C++11)  
Member classes  
[basic_istream::sentry](basic_istream/sentry.html "cpp/io/basic istream/sentry")  
Non-member functions  
[operator>>(std::basic_istream)](basic_istream/operator_gtgt2.html "cpp/io/basic istream/operator gtgt2")  
  


Defined in header `[<iostream>](../header/iostream.html "cpp/header/iostream")` |  |   
---|---|---  
extern [std::istream](basic_istream.html) cin; |  (1)  |   
extern [std::wistream](basic_istream.html) wcin; |  (2)  |   
| |   
  
The global objects `std::cin` and `std::wcin` control input from a stream buffer of implementation-defined type (derived from [std::streambuf](basic_streambuf.html "cpp/io/basic streambuf")), associated with the standard C input stream [stdin](c/std_streams.html "cpp/io/c/std streams"). 

These objects are guaranteed to be initialized during or before the first time an object of type [std::ios_base::Init](ios_base/Init.html "cpp/io/ios base/Init") is constructed and are available for use in the constructors and destructors of static objects with [ordered initialization](../language/initialization.html#Non-local_variables "cpp/language/initialization") (as long as [`<iostream>`](../header/iostream.html "cpp/header/iostream") is included before the object is defined). 

Unless sync_with_stdio(false) has been issued, it is safe to concurrently access these objects from multiple threads for both formatted and unformatted input. 

Once initialized: 

1) std::cin.[`tie()`](basic_ios/tie.html "cpp/io/basic ios/tie") returns &[std::cout](cout.html). This means that any input operation on `std::cin` forces a call to [std::cout](cout.html).[`flush()`](basic_ostream/flush.html "cpp/io/basic ostream/flush") if any characters are pending for output..

2) std::wcin.tie() returns &[std::wcout](cout.html). This means that any input operation on `std::wcin` forces a call to [std::wcout](cout.html).flush() if any characters are pending for output.

### Notes

The “c” in the name refers to “character” ([stroustrup.com FAQ](https://www.stroustrup.com/bs_faq2.html#cout)); `cin` means “character input” and `wcin` means “wide character input”. 

### Example

Run this code
    
    
    #include <iostream>
     
    struct Foo
    {
        int n;
        Foo()
        {
            [std::cout](cout.html) << "Enter n: "; // no flush needed
            std::cin >> n;
        }
    };
     
    Foo f; // static object
     
    int main()
    {
        [std::cout](cout.html) << "f.n is " << f.n << '\n';
    }

Possible output: 
    
    
    Enter n: 10
    f.n is 10

### See also

[ Init](ios_base/Init.html "cpp/io/ios base/Init") |  initializes standard stream objects   
(public member class of `std::ios_base`)   
---|---  
[ coutwcout](cout.html "cpp/io/cout") |  writes to the standard C output stream [stdout](c/std_streams.html "cpp/io/c/std streams")  
(global object)  
[ stdinstdoutstderr](c/std_streams.html "cpp/io/c/std streams") |  expression of type FILE* associated with the input stream  
expression of type FILE* associated with the output stream  
expression of type FILE* associated with the error output stream   
(macro constant) 
