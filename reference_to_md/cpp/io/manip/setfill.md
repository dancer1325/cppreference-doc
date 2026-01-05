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
  


[Input/output manipulators](../manip.html "cpp/io/manip")

Floating-point formatting  
---  
| [showpointnoshowpoint](showpoint.html "cpp/io/manip/showpoint")  
---  
[setprecision](setprecision.html "cpp/io/manip/setprecision")  
  
| [fixedscientifichexfloatdefaultfloat](fixed.html "cpp/io/manip/fixed")(C++11)(C++11)  
---  
  
Integer formatting  
| [setbase](setbase.html "cpp/io/manip/setbase")  
---  
[showbasenoshowbase](showbase.html "cpp/io/manip/showbase")  
  
| [dechexoct](hex.html "cpp/io/manip/hex")  
---  
  
Boolean formatting  
[boolalphanoboolalpha](boolalpha.html "cpp/io/manip/boolalpha")  
Field width and fill control  
| **setfill**  
---  
[setw](setw.html "cpp/io/manip/setw")  
  
| [internalleftright](left.html "cpp/io/manip/left")  
---  
  
Other formatting  
| [showposnoshowpos](showpos.html "cpp/io/manip/showpos")  
---  
  
| [uppercasenouppercase](uppercase.html "cpp/io/manip/uppercase")  
---  
  
Whitespace processing  
| [ws](ws.html "cpp/io/manip/ws")  
---  
[ends](ends.html "cpp/io/manip/ends")  
  
| [skipwsnoskipws](skipws.html "cpp/io/manip/skipws")  
---  
  
Output flushing  
| [flush](flush.html "cpp/io/manip/flush")  
---  
[endl](endl.html "cpp/io/manip/endl")  
[flush_emit](flush_emit.html "cpp/io/manip/flush emit")(C++20)  
  
  
  
| [unitbufnounitbuf](unitbuf.html "cpp/io/manip/unitbuf")  
---  
[emit_on_flushnoemit_on_flush](emit_on_flush.html "cpp/io/manip/emit on flush")(C++20)(C++20)  
  
Status flags manipulation  
| [resetiosflags](resetiosflags.html "cpp/io/manip/resetiosflags")  
---  
  
| [setiosflags](setiosflags.html "cpp/io/manip/setiosflags")  
---  
  
Time and money I/O  
| [get_money](get_money.html "cpp/io/manip/get money")(C++11)  
---  
[get_time](get_time.html "cpp/io/manip/get time")(C++11)  
  
| [put_money](put_money.html "cpp/io/manip/put money")(C++11)  
---  
[put_time](put_time.html "cpp/io/manip/put time")(C++11)  
  
Quoted manipulator  
[quoted](quoted.html "cpp/io/manip/quoted")(C++14)  
  


Defined in header `[<iomanip>](../../header/iomanip.html "cpp/header/iomanip")` |  |   
---|---|---  
template< class CharT >  
/*unspecified*/ setfill( CharT c ); |  |   
| |   
  
When used in an expression out << setfill(c) sets the fill character of the stream out to c. 

## Contents

  * [1 Parameters](setfill.html#Parameters)
  * [2 Return value](setfill.html#Return_value)
  * [3 Notes](setfill.html#Notes)
  * [4 Example](setfill.html#Example)
  * [5 Defect reports](setfill.html#Defect_reports)
  * [6 See also](setfill.html#See_also)

  
---  
  
### Parameters

c  |  \-  |  new value for the fill character   
---|---|---  
  
### Return value

An object of unspecified type such that 

  * if out is an object of type [std::basic_ostream](../basic_ostream.html)<CharT, Traits>, the expression out << setfill(c)
    * has type [std::basic_ostream](../basic_ostream.html)<CharT, Traits>&
    * has value out
    * behaves as if it called f(out, c)



where the function f is defined as: 
    
    
    template<class CharT, class Traits>
    void f([std::basic_ios](../basic_ios.html)<CharT, Traits>& str, CharT c)
    {
        // set fill character
        str.fill(c);
    }

### Notes

The current fill character may be obtained with [std::ostream::fill](../basic_ios/fill.html "cpp/io/basic ios/fill"). 

### Example

Run this code
    
    
    #include <iomanip>
    #include <iostream>
     
    int main()
    {
        [std::cout](../cout.html) << "default fill: [" << [std::setw](setw.html)(10) << 42 << "]\n"
                  << "setfill('*'): [" << std::setfill('*')
                                       << [std::setw](setw.html)(10) << 42 << "]\n";
    }

Output: 
    
    
    default fill: [        42]
    setfill('*'): [********42]

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 183](https://cplusplus.github.io/LWG/issue183) | C++98  | `setbase` could only be used with  
streams of type [std::ostream](../basic_ostream.html "cpp/io/basic ostream") | usable with any output  
character stream   
  
### See also

[ fill](../basic_ios/fill.html "cpp/io/basic ios/fill") |  manages the fill character   
(public member function of `std::basic_ios<CharT,Traits>`)   
---|---  
[ internalleftright](left.html "cpp/io/manip/left") |  sets the placement of fill characters   
(function)   
[ setw](setw.html "cpp/io/manip/setw") |  changes the width of the next input/output field   
(function) 
