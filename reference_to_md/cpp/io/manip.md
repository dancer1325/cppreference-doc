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

**I/O manipulators**  
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
  


**Input/output manipulators**

Floating-point formatting  
---  
| [showpointnoshowpoint](manip/showpoint.html "cpp/io/manip/showpoint")  
---  
[setprecision](manip/setprecision.html "cpp/io/manip/setprecision")  
  
| [fixedscientifichexfloatdefaultfloat](manip/fixed.html "cpp/io/manip/fixed")(C++11)(C++11)  
---  
  
Integer formatting  
| [setbase](manip/setbase.html "cpp/io/manip/setbase")  
---  
[showbasenoshowbase](manip/showbase.html "cpp/io/manip/showbase")  
  
| [dechexoct](manip/hex.html "cpp/io/manip/hex")  
---  
  
Boolean formatting  
[boolalphanoboolalpha](manip/boolalpha.html "cpp/io/manip/boolalpha")  
Field width and fill control  
| [setfill](manip/setfill.html "cpp/io/manip/setfill")  
---  
[setw](manip/setw.html "cpp/io/manip/setw")  
  
| [internalleftright](manip/left.html "cpp/io/manip/left")  
---  
  
Other formatting  
| [showposnoshowpos](manip/showpos.html "cpp/io/manip/showpos")  
---  
  
| [uppercasenouppercase](manip/uppercase.html "cpp/io/manip/uppercase")  
---  
  
Whitespace processing  
| [ws](manip/ws.html "cpp/io/manip/ws")  
---  
[ends](manip/ends.html "cpp/io/manip/ends")  
  
| [skipwsnoskipws](manip/skipws.html "cpp/io/manip/skipws")  
---  
  
Output flushing  
| [flush](manip/flush.html "cpp/io/manip/flush")  
---  
[endl](manip/endl.html "cpp/io/manip/endl")  
[flush_emit](manip/flush_emit.html "cpp/io/manip/flush emit")(C++20)  
  
  
  
| [unitbufnounitbuf](manip/unitbuf.html "cpp/io/manip/unitbuf")  
---  
[emit_on_flushnoemit_on_flush](manip/emit_on_flush.html "cpp/io/manip/emit on flush")(C++20)(C++20)  
  
Status flags manipulation  
| [resetiosflags](manip/resetiosflags.html "cpp/io/manip/resetiosflags")  
---  
  
| [setiosflags](manip/setiosflags.html "cpp/io/manip/setiosflags")  
---  
  
Time and money I/O  
| [get_money](manip/get_money.html "cpp/io/manip/get money")(C++11)  
---  
[get_time](manip/get_time.html "cpp/io/manip/get time")(C++11)  
  
| [put_money](manip/put_money.html "cpp/io/manip/put money")(C++11)  
---  
[put_time](manip/put_time.html "cpp/io/manip/put time")(C++11)  
  
Quoted manipulator  
[quoted](manip/quoted.html "cpp/io/manip/quoted")(C++14)  
  


Manipulators are helper functions that make it possible to control input/output streams using operator<< or operator>>. 

The manipulators that are invoked without arguments (e.g. [std::cout](cout.html) << [std::boolalpha](manip/boolalpha.html); or [std::cin](cin.html) >> [std::hex](manip/hex.html);) are implemented as functions that take a reference to a stream as their only argument. The special overloads of [`basic_ostream::operator<<`](basic_ostream/operator_ltlt.html "cpp/io/basic ostream/operator ltlt") and [`basic_istream::operator>>`](basic_istream/operator_gtgt.html "cpp/io/basic istream/operator gtgt") accept pointers to these functions. These functions (or instantiations of function templates) are the only [addressable functions](../language/extending_std.html#Addressable_functions "cpp/language/extending std") in the standard library.(since C++20)

The manipulators that are invoked with arguments (e.g. [std::cout](cout.html) << [std::setw](manip/setw.html)(10);) are implemented as functions returning objects of unspecified type. These manipulators define their own `operator<<` or `operator>>` which perform the requested manipulation. 

Defined in header `[<ios>](../header/ios.html "cpp/header/ios")`  
---  
[ boolalphanoboolalpha](manip/boolalpha.html "cpp/io/manip/boolalpha") |  switches between textual and numeric representation of booleans   
(function)   
[ showbasenoshowbase](manip/showbase.html "cpp/io/manip/showbase") |  controls whether prefix is used to indicate numeric base   
(function)   
[ showpointnoshowpoint](manip/showpoint.html "cpp/io/manip/showpoint") |  controls whether decimal point is always included in floating-point representation   
(function)   
[ showposnoshowpos](manip/showpos.html "cpp/io/manip/showpos") |  controls whether the `**+**` sign used with non-negative numbers   
(function)   
[ skipwsnoskipws](manip/skipws.html "cpp/io/manip/skipws") |  controls whether leading whitespace is skipped on input   
(function)   
[ uppercasenouppercase](manip/uppercase.html "cpp/io/manip/uppercase") |  controls whether uppercase characters are used with some output formats   
(function)   
[ unitbufnounitbuf](manip/unitbuf.html "cpp/io/manip/unitbuf") |  controls whether output is flushed after each operation   
(function)   
[ internalleftright](manip/left.html "cpp/io/manip/left") |  sets the placement of fill characters   
(function)   
[ dechexoct](manip/hex.html "cpp/io/manip/hex") |  changes the base used for integer I/O   
(function)   
[ fixedscientifichexfloatdefaultfloat](manip/fixed.html "cpp/io/manip/fixed")(C++11)(C++11) |  changes formatting used for floating-point I/O   
(function)   
Defined in header `[<istream>](../header/istream.html "cpp/header/istream")`  
[ ws](manip/ws.html "cpp/io/manip/ws") |  consumes whitespace   
(function template)   
Defined in header `[<ostream>](../header/ostream.html "cpp/header/ostream")`  
[ ends](manip/ends.html "cpp/io/manip/ends") |  outputs '\0'   
(function template)   
[ flush](manip/flush.html "cpp/io/manip/flush") |  flushes the output stream   
(function template)   
[ endl](manip/endl.html "cpp/io/manip/endl") |  outputs '\n' and flushes the output stream   
(function template)   
[ emit_on_flushnoemit_on_flush](manip/emit_on_flush.html "cpp/io/manip/emit on flush")(C++20) |  controls whether a stream's [`basic_syncbuf`](basic_syncbuf.html "cpp/io/basic syncbuf") emits on flush   
(function template)   
[ flush_emit](manip/flush_emit.html "cpp/io/manip/flush emit")(C++20) |  flushes a stream and emits the content if it is using a [`basic_syncbuf`](basic_syncbuf.html "cpp/io/basic syncbuf")   
(function template)   
Defined in header `[<iomanip>](../header/iomanip.html "cpp/header/iomanip")`  
[ resetiosflags](manip/resetiosflags.html "cpp/io/manip/resetiosflags") |  clears the specified ios_base flags   
(function)   
[ setiosflags](manip/setiosflags.html "cpp/io/manip/setiosflags") |  sets the specified `ios_base` flags   
(function)   
[ setbase](manip/setbase.html "cpp/io/manip/setbase") |  changes the base used for integer I/O   
(function)   
[ setfill](manip/setfill.html "cpp/io/manip/setfill") |  changes the fill character   
(function template)   
[ setprecision](manip/setprecision.html "cpp/io/manip/setprecision") |  changes floating-point precision   
(function)   
[ setw](manip/setw.html "cpp/io/manip/setw") |  changes the width of the next input/output field   
(function)   
[ get_money](manip/get_money.html "cpp/io/manip/get money")(C++11) |  parses a monetary value   
(function template)   
[ put_money](manip/put_money.html "cpp/io/manip/put money")(C++11) |  formats and outputs a monetary value   
(function template)   
[ get_time](manip/get_time.html "cpp/io/manip/get time")(C++11) |  parses a date/time value of specified format   
(function template)   
[ put_time](manip/put_time.html "cpp/io/manip/put time")(C++11) |  formats and outputs a date/time value according to the specified format   
(function template)   
[ quoted](manip/quoted.html "cpp/io/manip/quoted")(C++14) |  inserts and extracts quoted strings with embedded spaces   
(function template) 
