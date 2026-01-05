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
**basic_ostream::write**  
Positioning  
[basic_ostream::tellp](tellp.html "cpp/io/basic ostream/tellp")  
[basic_ostream::seekp](seekp.html "cpp/io/basic ostream/seekp")  
Miscellaneous  
[basic_ostream::flush](flush.html "cpp/io/basic ostream/flush")  
[basic_ostream::swap](swap.html "cpp/io/basic ostream/swap")(C++11)  
Member classes  
[basic_ostream::sentry](sentry.html "cpp/io/basic ostream/sentry")  
Non-member functions  
[operator<<(std::basic_ostream)](operator_ltlt2.html "cpp/io/basic ostream/operator ltlt2")  
[print(std::ostream)](print.html "cpp/io/basic ostream/print")(C++23)  
[println(std::ostream)](println.html "cpp/io/basic ostream/println")(C++23)  
[vprint_unicode(std::ostream)](vprint_unicode.html "cpp/io/basic ostream/vprint unicode")(C++23)  
[vprint_nonunicode(std::ostream)](vprint_nonunicode.html "cpp/io/basic ostream/vprint nonunicode")(C++23)  
  


basic_ostream& write( const char_type* s, [std::streamsize](../streamsize.html) count ); |  |   
---|---|---  
| |   
  
Behaves as an [UnformattedOutputFunction](../../named_req/UnformattedOutputFunction.html "cpp/named req/UnformattedOutputFunction"). After constructing and checking the sentry object, outputs the characters from successive locations in the character array whose first element is pointed to by s. Characters are inserted into the output sequence until one of the following occurs: 

  * exactly count characters are inserted 
  * inserting into the output sequence fails (in which case setstate(badbit) is called). 



## Contents

  * [1 Parameters](write.html#Parameters)
  * [2 Return value](write.html#Return_value)
  * [3 Exceptions](write.html#Exceptions)
  * [4 Notes](write.html#Notes)
  * [5 Example](write.html#Example)
  * [6 See also](write.html#See_also)

  
---  
  
### Parameters

s  |  \-  |  pointer to the character string to write   
---|---|---  
count  |  \-  |  number of characters to write   
  
### Return value

*this

### Exceptions



[failure](../ios_base/failure.html "cpp/io/ios base/failure") if an error occurred (the error state flag is not [goodbit](../ios_base/iostate.html "cpp/io/ios base/iostate")) and [exceptions()](../basic_ios/exceptions.html "cpp/io/basic ios/exceptions") is set to throw for that state. 

If an internal operation throws an exception, it is caught and [badbit](../ios_base/iostate.html "cpp/io/ios base/iostate") is set. If [exceptions()](../basic_ios/exceptions.html "cpp/io/basic ios/exceptions") is set for `badbit`, the exception is rethrown. 

### Notes

This function is not overloaded for the types signed char or unsigned char, unlike the formatted [operator<<](operator_ltlt2.html "cpp/io/basic ostream/operator ltlt2"). 

Also, unlike the formatted output functions, this function does not set the [failbit](../ios_base/iostate.html "cpp/io/ios base/iostate") on failure. 

When using a non-converting locale (the default locale is non-converting), the overrider of this function in [std::basic_ofstream](../basic_ofstream.html "cpp/io/basic ofstream") may be optimized for zero-copy bulk I/O (by means of overriding [std::streambuf::xsputn](../basic_streambuf/sputn.html "cpp/io/basic streambuf/sputn")). 

### Example

This function may be used to output object representations, i.e. binary output

Run this code
    
    
    #include <iostream>
     
    int main()
    {
        int n = 0x41424344;
        [std::cout](../cout.html).write(reinterpret_cast<char*>(&n), sizeof n) << '\n';
     
        char c[] = "This is sample text.";
        [std::cout](../cout.html).write(c, 4).write("!\n", 2);
    }

Possible output: 
    
    
    DCBA
    This!

### See also

[ operator<<(std::basic_ostream)](operator_ltlt2.html "cpp/io/basic ostream/operator ltlt2") |  inserts character data or insert into rvalue stream   
(function template)   
---|---  
[ put](put.html "cpp/io/basic ostream/put") |  inserts a character   
(public member function) 
