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

[`std::basic_ostream`](../basic_ostream.html "cpp/io/basic ostream")

Global objects  
---  
| [coutwcout](../cout.html "cpp/io/cout")  
---  
  
| [cerrwcerr](../cerr.html "cpp/io/cerr")  
---  
  
| [clogwclog](../clog.html "cpp/io/clog")  
---  
  
Member functions  
[basic_ostream::basic_ostream](basic_ostream.html "cpp/io/basic ostream/basic ostream")  
[basic_ostream::~basic_ostream](~basic_ostream.html "cpp/io/basic ostream/~basic ostream")  
[basic_ostream::operator=](operator=.html "cpp/io/basic ostream/operator=")(C++11)  
Formatted output  
[basic_ostream::operator<<](operator_ltlt.html "cpp/io/basic ostream/operator ltlt")  
Unformatted output  
[basic_ostream::put](put.html "cpp/io/basic ostream/put")  
[basic_ostream::write](write.html "cpp/io/basic ostream/write")  
Positioning  
[basic_ostream::tellp](tellp.html "cpp/io/basic ostream/tellp")  
[basic_ostream::seekp](seekp.html "cpp/io/basic ostream/seekp")  
Miscellaneous  
[basic_ostream::flush](flush.html "cpp/io/basic ostream/flush")  
[basic_ostream::swap](swap.html "cpp/io/basic ostream/swap")(C++11)  
Member classes  
**basic_ostream::sentry**  
Non-member functions  
[operator<<(std::basic_ostream)](operator_ltlt2.html "cpp/io/basic ostream/operator ltlt2")  
[print(std::ostream)](print.html "cpp/io/basic ostream/print")(C++23)  
[println(std::ostream)](println.html "cpp/io/basic ostream/println")(C++23)  
[vprint_unicode(std::ostream)](vprint_unicode.html "cpp/io/basic ostream/vprint unicode")(C++23)  
[vprint_nonunicode(std::ostream)](vprint_nonunicode.html "cpp/io/basic ostream/vprint nonunicode")(C++23)  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_ostream/navbar_content&action=edit)

class sentry; |  |   
---|---|---  
| |   
  
An object of class `basic_ostream::sentry` is constructed in local scope at the beginning of each member function of [std::basic_ostream](../basic_ostream.html "cpp/io/basic ostream") that performs output (both formatted and unformatted). Its constructor prepares the output stream: checks if the stream is already in a failed state, flushes the tie()'d output streams, and performs other implementation-defined tasks if necessary. Implementation-defined cleanup, as well as flushing of the output stream if necessary, is performed in the destructor, so that it is guaranteed to happen if exceptions are thrown during output. 

## Contents

  * [1 Member functions](sentry.html#Member_functions)
  * [2 std::basic_ostream::sentry::sentry](sentry.html#std::basic_ostream::sentry::sentry)
    * [2.1 Parameters](sentry.html#Parameters)
    * [2.2 Exceptions](sentry.html#Exceptions)
  * [3 std::basic_ostream::sentry::~sentry](sentry.html#std::basic_ostream::sentry::.7Esentry)
  * [4 std::basic_ostream::sentry::operator bool](sentry.html#std::basic_ostream::sentry::operator_bool)
    * [4.1 Parameters](sentry.html#Parameters_2)
    * [4.2 Return value](sentry.html#Return_value)
    * [4.3 Example](sentry.html#Example)
    * [4.4 Defect reports](sentry.html#Defect_reports)
    * [4.5 See also](sentry.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_ostream/sentry&action=edit&section=1 "Edit section: Member functions")] Member functions

**(constructor)** |  constructs the sentry object. All the preparation tasks are done here   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_ostream/sentry/dsc_constructor&action=edit)  
---|---  
**(destructor)** |  finalizes the stream object after formatted output or after exception, if necessary   
(public member function)  
operator= |  the assignment operator is deleted   
(public member function)  
** operator bool** |  checks if the preparation of the stream object was successful   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_ostream/sentry/dsc_operator_bool&action=edit)  
  
##  std::basic_ostream::sentry::sentry

explicit sentry( [std::basic_ostream](../basic_ostream.html)<CharT, Traits>& os ); |  |   
---|---|---  
| |   
  
Prepares the stream for formatted output. 

If os.good() is false, returns. Otherwise, if os.tie() is not a null pointer, calls os.tie()->flush() to synchronize the output sequence with external streams. During preparation, the constructor may call setstate(failbit) (which may throw [std::ios_base::failure](../ios_base/failure.html "cpp/io/ios base/failure")). 

If after preparation is completed, os.good() == true, then any subsequent calls to operator bool will return true. 

###  Parameters

os  |  \-  |  output stream to prepare   
---|---|---  
  
###  Exceptions

[std::ios_base::failure](../ios_base/failure.html "cpp/io/ios base/failure") if the end of file condition occurs. 

  


##  std::basic_ostream::sentry::~sentry

~sentry(); |  |   
---|---|---  
| |   
  
If (os.flags() & [std::ios_base::unitbuf](../ios_base/fmtflags.html)) && ![std::uncaught_exception](../../error/exception/uncaught_exception.html)() && os.good()) is true, calls os.rdbuf()->pubsync(). If that function returns -1, sets badbit in os.rdstate() without propagating an exception. 

  


##  std::basic_ostream::sentry::operator bool

explicit operator bool() const; |  |   
---|---|---  
| |   
  
Checks whether the preparation of the output stream was successful. 

###  Parameters

(none) 

###  Return value

true if the preparation of the output stream was successful, false otherwise. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_ostream/sentry&action=edit&section=6 "Edit section: Example")] Example

Run this code
    
    
    #include <iostream>
    #include <sstream>
     
    struct Foo
    {
        char n[6];
    };
     
    [std::ostream](../basic_ostream.html)& operator<<([std::ostream](../basic_ostream.html)& os, Foo& f)
    {
        std::ostream::sentry s(os);
        if (s)
            os.write(f.n, 5);
        return os;
    }
     
    int main()
    {
        Foo f = {"abcde"};
        [std::cout](../cout.html) << f << '\n';
    }

Output: 
    
    
    abcde

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_ostream/sentry&action=edit&section=7 "Edit section: Defect reports")] Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 397](https://cplusplus.github.io/LWG/issue397) | C++98  | the destructor might call os.flush(), which may throw exceptions  | the exception is not propagated   
[LWG 442](https://cplusplus.github.io/LWG/issue442) | C++98  | operator bool was not declared const (it is const in the [synopsis](../../header/ostream.html "cpp/header/ostream"))  | added const  
[LWG 835](https://cplusplus.github.io/LWG/issue835) | C++98  | if os sets `unitbuf`, the destructor would call os.flush(), which  
is an [UnformattedOutputFunction](../../named_req/UnformattedOutputFunction.html "cpp/named req/UnformattedOutputFunction") and creates another sentry object  
(whose destructor then creates another sentry object and so on)  | calls  
os.rdbuf()->pubsync()  
in this case instead   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_ostream/sentry&action=edit&section=8 "Edit section: See also")] See also

[ operator<<](operator_ltlt.html "cpp/io/basic ostream/operator ltlt") |  inserts formatted data   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_ostream/dsc_operator_ltlt&action=edit)  
---|---
