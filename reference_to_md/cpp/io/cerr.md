
  


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
  
| **cerr wcerr**  
---  
  
| [clogwclog](clog.html "cpp/io/clog")  
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
extern [std::ostream](basic_ostream.html) cerr; |  (1)  |   
extern [std::wostream](basic_ostream.html) wcerr; |  (2)  |   
| |   
  
The global objects `std::cerr` and `std::wcerr` control output to a stream buffer of implementation-defined type (derived from [std::streambuf](basic_streambuf.html "cpp/io/basic streambuf") and [std::wstreambuf](basic_streambuf.html "cpp/io/basic streambuf"), respectively), associated with the standard C error output stream [stderr](c/std_streams.html "cpp/io/c/std streams"). 

These objects are guaranteed to be initialized during or before the first time an object of type [std::ios_base::Init](ios_base/Init.html "cpp/io/ios base/Init") is constructed and are available for use in the constructors and destructors of static objects with [ordered initialization](../language/initialization.html#Non-local_variables "cpp/language/initialization") (as long as [`<iostream>`](../header/iostream.html "cpp/header/iostream") is included before the object is defined). 

Unless std::ios_base::sync_with_stdio(false) has been issued, it is safe to concurrently access these objects from multiple threads for both formatted and unformatted output. 

Once initialized, (std::cerr.flags() & unitbuf) != 0 (same for `std::wcerr`) meaning that any output sent to these stream objects is immediately flushed to the OS (via [std::basic_ostream::sentry](basic_ostream/sentry.html "cpp/io/basic ostream/sentry")'s destructor). 

In addition, std::cerr.tie() returns &[std::cout](cout.html) (same for `std::wcerr` and [std::wcout](cout.html "cpp/io/cout")), meaning that any output operation on `std::cerr` first executes [std::cout](cout.html).flush() (via [std::basic_ostream::sentry](basic_ostream/sentry.html "cpp/io/basic ostream/sentry")'s constructor). 

## Contents

  * [1 Notes](cerr.html#Notes)
  * [2 Example](cerr.html#Example)
  * [3 Defect reports](cerr.html#Defect_reports)
  * [4 See also](cerr.html#See_also)

  
---  
  
### Notes

The 'c' in the name refers to "character" ([stroustrup.com FAQ](https://www.stroustrup.com/bs_faq2.html#cout)); `cerr` means "character error (stream)" and `wcerr` means "wide character error (stream)". 

### Example

Output to [stderr](c/std_streams.html "cpp/io/c/std streams") via `std::cerr` flushes out the pending output on [std::cout](cout.html "cpp/io/cout"), while output to [stderr](c/std_streams.html "cpp/io/c/std streams") via [std::clog](clog.html "cpp/io/clog") does not.

Run this code
    
    
    #include <chrono>
    #include <iostream>
    #include <thread>
    using namespace std::chrono_literals;
     
    void f()
    {
        [std::cout](cout.html) << "Output from thread...";
        [std::this_thread::sleep_for](../thread/sleep_for.html)(2s);
        [std::cout](cout.html) << "...thread calls flush()" << [std::endl](manip/endl.html);
    }
     
    int main()
    {
        [std::jthread](../thread/jthread.html) t1{f};
        [std::this_thread::sleep_for](../thread/sleep_for.html)(1000ms);
        [std::clog](clog.html) << "This output from main is not tie()'d to cout\n";
        std::cerr << "This output is tie()'d to cout\n";
    }

Possible output: 
    
    
    This output from main is not tie()'d to cout
    Output from thread...This output is tie()'d to cout
    ...thread calls flush()

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 455](https://cplusplus.github.io/LWG/issue455) | C++98  | std::cerr.tie() and  
std::wcerr.tie() returned null pointers  | they return &[std::cout](cout.html) and  
&[std::wcout](cout.html) respectively   
  
### See also

[ Init](ios_base/Init.html "cpp/io/ios base/Init") |  initializes standard stream objects   
(public member class of `std::ios_base`)   
---|---  
[ clogwclog](clog.html "cpp/io/clog") |  writes to the standard C error stream [stderr](c/std_streams.html "cpp/io/c/std streams")  
(global object)  
[ coutwcout](cout.html "cpp/io/cout") |  writes to the standard C output stream [stdout](c/std_streams.html "cpp/io/c/std streams")  
(global object)  
[ stdinstdoutstderr](c/std_streams.html "cpp/io/c/std streams") |  expression of type FILE* associated with the input stream  
expression of type FILE* associated with the output stream  
expression of type FILE* associated with the error output stream   
(macro constant) 
