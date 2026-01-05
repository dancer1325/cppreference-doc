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
  


[`std::basic_istream`](../basic_istream.html "cpp/io/basic istream")

Global objects  
---  
[cinwcin](../cin.html "cpp/io/cin")  
Member functions  
[basic_istream::basic_istream](basic_istream.html "cpp/io/basic istream/basic istream")  
[basic_istream::~basic_istream](~basic_istream.html "cpp/io/basic istream/~basic istream")  
[basic_istream::operator=](operator=.html "cpp/io/basic istream/operator=")(C++11)  
Formatted input  
[basic_istream::operator>>](operator_gtgt.html "cpp/io/basic istream/operator gtgt")  
Unformatted input  
[basic_istream::get](get.html "cpp/io/basic istream/get")  
[basic_istream::peek](peek.html "cpp/io/basic istream/peek")  
[basic_istream::unget](unget.html "cpp/io/basic istream/unget")  
[basic_istream::putback](putback.html "cpp/io/basic istream/putback")  
[basic_istream::getline](getline.html "cpp/io/basic istream/getline")  
[basic_istream::ignore](ignore.html "cpp/io/basic istream/ignore")  
[basic_istream::read](read.html "cpp/io/basic istream/read")  
[basic_istream::readsome](readsome.html "cpp/io/basic istream/readsome")  
[basic_istream::gcount](gcount.html "cpp/io/basic istream/gcount")  
Positioning  
[basic_istream::tellg](tellg.html "cpp/io/basic istream/tellg")  
[basic_istream::seekg](seekg.html "cpp/io/basic istream/seekg")  
Miscellaneous  
[basic_istream::sync](sync.html "cpp/io/basic istream/sync")  
[basic_istream::swap](swap.html "cpp/io/basic istream/swap")(C++11)  
Member classes  
**basic_istream::sentry**  
Non-member functions  
[operator>>(std::basic_istream)](operator_gtgt2.html "cpp/io/basic istream/operator gtgt2")  
  


class sentry; |  |   
---|---|---  
| |   
  
An object of class `basic_istream::sentry` is constructed in local scope at the beginning of each member function of [std::basic_istream](../basic_istream.html "cpp/io/basic istream") that performs input (both formatted and unformatted). Its constructor prepares the input stream: checks if the stream is already in a failed state, flushes the tie()'d output streams, skips leading whitespace unless noskipws flag is set, and performs other implementation-defined tasks if necessary. All cleanup, if necessary, is performed in the destructor, so that it is guaranteed to happen if exceptions are thrown during input. 

## Contents

  * [1 Member types](sentry.html#Member_types)
  * [2 Member functions](sentry.html#Member_functions)
  * [3 std::basic_istream::sentry::sentry](sentry.html#std::basic_istream::sentry::sentry)
    * [3.1 Parameters](sentry.html#Parameters)
    * [3.2 Exceptions](sentry.html#Exceptions)
  * [4 std::basic_istream::sentry::~sentry](sentry.html#std::basic_istream::sentry::.7Esentry)
  * [5 std::basic_istream::sentry::operator bool](sentry.html#std::basic_istream::sentry::operator_bool)
    * [5.1 Parameters](sentry.html#Parameters_2)
    * [5.2 Return value](sentry.html#Return_value)
    * [5.3 Example](sentry.html#Example)
    * [5.4 Defect reports](sentry.html#Defect_reports)
    * [5.5 See also](sentry.html#See_also)

  
---  
  
### Member types

`traits_type` |  `Traits`  
---|---  
  
### Member functions

**(constructor)** |  constructs the sentry object. All the preparation tasks are done here   
(public member function)   
---|---  
**(destructor)** |  finalizes the stream object after formatted input or after exception, if necessary   
(public member function)   
operator=[deleted] |  not copy assignable   
(public member function)  
** operator bool** |  checks if the preparation of the stream object was successful   
(public member function)   
  
##  std::basic_istream::sentry::sentry

explicit sentry( [std::basic_istream](../basic_istream.html)<CharT, Traits>& is, bool noskipws = false ); |  |   
---|---|---  
| |   
  
Prepares the stream for formatted input. 

If is.good() is false, calls is.setstate([std::ios_base::failbit](../ios_base/iostate.html)) and returns. Otherwise, if is.tie() is not a null pointer, calls is.tie()->flush() to synchronize the output sequence with external streams. This call can be suppressed if the put area of is.tie() is empty. The implementation may defer the call to flush() until a call of is.rdbuf()->underflow() occurs. If no such call occurs before the sentry object is destroyed, it may be eliminated entirely. 

If noskipws is zero and is.flags() & [std::ios_base::skipws](../ios_base/fmtflags.html) is nonzero, the function extracts and discards all whitespace characters until the next available character is not a whitespace character (as determined by the currently imbued locale in is). If is.rdbuf()->sbumpc() or is.rdbuf()->sgetc() returns traits::eof(), the function calls setstate([std::ios_base::failbit](../ios_base/iostate.html) | [std::ios_base::eofbit](../ios_base/iostate.html)) (which may throw [std::ios_base::failure](../ios_base/failure.html "cpp/io/ios base/failure")). 

Additional implementation-defined preparation may take place, which may call setstate([std::ios_base::failbit](../ios_base/iostate.html)) (which may throw [std::ios_base::failure](../ios_base/failure.html "cpp/io/ios base/failure")). 

If after preparation is completed, is.good() == true, then any subsequent calls to operator bool will return true. 

###  Parameters

is  |  \-  |  input stream to prepare   
---|---|---  
noskipws  |  \-  |  true if whitespace should not be skipped   
  
###  Exceptions

[std::ios_base::failure](../ios_base/failure.html "cpp/io/ios base/failure") if the end of file condition occurs when skipping whitespace. 

##  std::basic_istream::sentry::~sentry

~sentry(); |  |   
---|---|---  
| |   
  
Does nothing. 

##  std::basic_istream::sentry::operator bool

explicit operator bool() const; |  |   
---|---|---  
| |   
  
Checks whether the preparation of the input stream was successful. 

###  Parameters

(none) 

###  Return value

true if the initialization of the input stream was successful, false otherwise. 

### Example

Run this code
    
    
    #include <iostream>
    #include <sstream>
     
    struct Foo
    {
        char n[5];
    };
     
    [std::istream](../basic_istream.html)& operator>>([std::istream](../basic_istream.html)& is, Foo& f)
    {
        std::istream::sentry s(is);
        if (s)
            is.read(f.n, 5);
        return is;
    }
     
    int main()
    {
        [std::string](../../string/basic_string.html) input = "   abcde";
        [std::istringstream](../basic_istringstream.html) stream(input);
        Foo f;
        stream >> f;
        [std::cout](../cout.html).write(f.n, 5);
        [std::cout](../cout.html) << '\n';
    }

Output: 
    
    
    abcde

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 195](https://cplusplus.github.io/LWG/issue195) | C++98  | it was unclear whether the constructor would set `eofbit` | made clear   
[LWG 419](https://cplusplus.github.io/LWG/issue419) | C++98  | the constructor did not set `failbit` if `eofbit` has been set  | sets `failbit` in this case   
  
### See also

[ operator>>](operator_gtgt.html "cpp/io/basic istream/operator gtgt") |  extracts formatted data   
(public member function)   
---|---  
[ operator>>(std::basic_istream)](operator_gtgt2.html "cpp/io/basic istream/operator gtgt2") |  extracts characters and character arrays   
(function template) 
