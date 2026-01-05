[C++](../../cpp.html "cpp")

[Compiler support](../compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](../freestanding.html "cpp/freestanding")  
[Language](../language.html "cpp/language")  
[Standard library](../standard_library.html "cpp/standard library")  
[Standard library headers](../headers.html "cpp/header")  
[Named requirements](../iterator/concepts.html "cpp/named req")  
[Feature test macros](../experimental/feature_test.html "cpp/feature test") (C++20)  
[Language support library](../utility.html#Language_support "cpp/utility")  
[Concepts library](../concepts.html "cpp/concepts") (C++20)  
[Diagnostics library](../error.html "cpp/error")  
[Memory management library](../memory.html "cpp/memory")  
[Metaprogramming library](../meta.html "cpp/meta") (C++11)  
[General utilities library](../utility.html "cpp/utility")  
[Containers library](../container.html "cpp/container")  
[Iterators library](../iterator.html "cpp/iterator")  
[Ranges library](../ranges.html "cpp/ranges") (C++20)  
[Algorithms library](../algorithm.html "cpp/algorithm")  
[Strings library](../string.html "cpp/string")  
[Text processing library](../text.html "cpp/text")  
[Numerics library](../numeric.html "cpp/numeric")  
[Date and time library](../chrono.html "cpp/chrono")  
[Input/output library](../io.html "cpp/io")  
[Filesystem library](../filesystem.html "cpp/filesystem") (C++17)  
[Concurrency support library](../atomic.html "cpp/thread") (C++11)  
[Execution control library](../experimental/execution.html "cpp/execution") (C++26)  
[Technical specifications](../experimental.html "cpp/experimental")  
[Symbols index](../symbol_index.html "cpp/symbol index")  
[External libraries](../links/libs.html "cpp/links/libs")  
  


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
  


[`std::basic_ostream`](basic_ostream.html "cpp/io/basic ostream")

Global objects  
---  
| [coutwcout](cout.html "cpp/io/cout")  
---  
  
| [cerrwcerr](cerr.html "cpp/io/cerr")  
---  
  
| **clog wclog**  
---  
  
Member functions  
[basic_ostream::basic_ostream](basic_ostream/basic_ostream.html "cpp/io/basic ostream/basic ostream")  
[basic_ostream::~basic_ostream](basic_ostream/~basic_ostream.html "cpp/io/basic ostream/~basic ostream")  
[basic_ostream::operator=](basic_ostream/operator=.html "cpp/io/basic ostream/operator=")(C++11)  
Formatted output  
[basic_ostream::operator<<](basic_ostream/operator_ltlt.html "cpp/io/basic ostream/operator ltlt")  
Unformatted output  
[basic_ostream::put](basic_ostream/put.html "cpp/io/basic ostream/put")  
[basic_ostream::write](basic_ostream/write.html "cpp/io/basic ostream/write")  
Positioning  
[basic_ostream::tellp](basic_ostream/tellp.html "cpp/io/basic ostream/tellp")  
[basic_ostream::seekp](basic_ostream/seekp.html "cpp/io/basic ostream/seekp")  
Miscellaneous  
[basic_ostream::flush](basic_ostream/flush.html "cpp/io/basic ostream/flush")  
[basic_ostream::swap](basic_ostream/swap.html "cpp/io/basic ostream/swap")(C++11)  
Member classes  
[basic_ostream::sentry](basic_ostream/sentry.html "cpp/io/basic ostream/sentry")  
Non-member functions  
[operator<<(std::basic_ostream)](basic_ostream/operator_ltlt2.html "cpp/io/basic ostream/operator ltlt2")  
[print(std::ostream)](basic_ostream/print.html "cpp/io/basic ostream/print")(C++23)  
[println(std::ostream)](basic_ostream/println.html "cpp/io/basic ostream/println")(C++23)  
[vprint_unicode(std::ostream)](basic_ostream/vprint_unicode.html "cpp/io/basic ostream/vprint unicode")(C++23)  
[vprint_nonunicode(std::ostream)](basic_ostream/vprint_nonunicode.html "cpp/io/basic ostream/vprint nonunicode")(C++23)  
  


Defined in header `[<iostream>](../header/iostream.html "cpp/header/iostream")` |  |   
---|---|---  
extern [std::ostream](basic_ostream.html) clog; |  (1)  |   
extern [std::wostream](basic_ostream.html) wclog; |  (2)  |   
| |   
  
The global objects `std::clog` and `std::wclog` control output to a stream buffer of implementation-defined type (derived from [std::streambuf](basic_streambuf.html "cpp/io/basic streambuf")), associated with the standard C output stream [stderr](c/std_streams.html "cpp/io/c/std streams"), but, unlike [std::cerr](cerr.html "cpp/io/cerr")/[std::wcerr](cerr.html "cpp/io/cerr"), these streams are not automatically flushed and cout is not automatically tie()'d with these streams. 

These objects are guaranteed to be initialized during or before the first time an object of type [std::ios_base::Init](ios_base/Init.html "cpp/io/ios base/Init") is constructed and are available for use in the constructors and destructors of static objects with [ordered initialization](../language/initialization.html#Non-local_variables "cpp/language/initialization") (as long as [`<iostream>`](../header/iostream.html "cpp/header/iostream") is included before the object is defined). 

Unless sync_with_stdio(false) has been issued, it is safe to concurrently access these objects from multiple threads for both formatted and unformatted output. 

### Notes

The “c” in the name refers to “character” ([stroustrup.com FAQ](https://www.stroustrup.com/bs_faq2.html#cout)); `clog` means “character log” and `wclog` means “wide character log”. 

### Example

Run this code
    
    
    #include <iostream>
     
    struct Foo
    {
        int n;
        Foo()
        {
            std::clog << "constructor\n";
        }
        ~Foo()
        {
            std::clog << "destructor\n";
        }
    };
     
    Foo f; // static object
     
    int main()
    {
        std::clog << "main function\n";
    }

Output: 
    
    
    constructor
    main function
    destructor

### See also

[ Init](ios_base/Init.html "cpp/io/ios base/Init") |  initializes standard stream objects   
(public member class of `std::ios_base`)   
---|---  
[ cerrwcerr](cerr.html "cpp/io/cerr") |  writes to the standard C error stream [stderr](c/std_streams.html "cpp/io/c/std streams"), unbuffered  
(global object)  
[ coutwcout](cout.html "cpp/io/cout") |  writes to the standard C output stream [stdout](c/std_streams.html "cpp/io/c/std streams")  
(global object)  
[ stdinstdoutstderr](c/std_streams.html "cpp/io/c/std streams") |  expression of type FILE* associated with the input stream  
expression of type FILE* associated with the output stream  
expression of type FILE* associated with the error output stream   
(macro constant) 
