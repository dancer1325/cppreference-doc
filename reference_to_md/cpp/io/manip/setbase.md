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
| **setbase**  
---  
[showbasenoshowbase](showbase.html "cpp/io/manip/showbase")  
  
| [dechexoct](hex.html "cpp/io/manip/hex")  
---  
  
Boolean formatting  
[boolalphanoboolalpha](boolalpha.html "cpp/io/manip/boolalpha")  
Field width and fill control  
| [setfill](setfill.html "cpp/io/manip/setfill")  
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
/*unspecified*/ setbase( int base ); |  |   
| |   
  
Sets the numeric base of the stream. When used in an expression out << setbase(base) or in >> setbase(base), changes the `basefield` flag of the stream out or in, depending on the value of base: 

  * the value 16 sets `basefield` to [std::ios_base::hex](../ios_base/fmtflags.html "cpp/io/ios base/fmtflags"). 
  * the value 8 sets [std::ios_base::oct](../ios_base/fmtflags.html "cpp/io/ios base/fmtflags"). 
  * the value 10 sets [std::ios_base::dec](../ios_base/fmtflags.html "cpp/io/ios base/fmtflags"). 



Values of base other than 8, 10, or 16 reset `basefield` to zero, which corresponds to decimal output and prefix-dependent input. 

## Contents

  * [1 Parameters](setbase.html#Parameters)
  * [2 Return value](setbase.html#Return_value)
  * [3 Example](setbase.html#Example)
  * [4 Defect reports](setbase.html#Defect_reports)
  * [5 See also](setbase.html#See_also)

  
---  
  
### Parameters

base  |  \-  |  new value for basefield   
---|---|---  
  
### Return value

An object of unspecified type such that 

  * if out is an object of type [std::basic_ostream](../basic_ostream.html)<CharT, Traits>, the expression out << setbase(base)
    * has type [std::basic_ostream](../basic_ostream.html)<CharT, Traits>&
    * has value out
    * behaves as if it called f(out, base)
  * if in is an object of type [std::basic_istream](../basic_istream.html)<CharT, Traits>, the expression in >> setbase(base)
    * has type [std::basic_istream](../basic_istream.html)<CharT, Traits>&
    * has value in
    * behaves as if it called f(in, base)



where the function f is defined as: 
    
    
    void f([std::ios_base](../ios_base.html)& str, int base)
    {
        // set basefield
        str.setf(base == 8 ? [std::ios_base::oct](../ios_base/fmtflags.html) :
            base == 10 ? [std::ios_base::dec](../ios_base/fmtflags.html) :
            base == 16 ? [std::ios_base::hex](../ios_base/fmtflags.html) :
            [std::ios_base::fmtflags](../ios_base/fmtflags.html)(0), [std::ios_base::basefield](../ios_base/fmtflags.html));
    }

### Example

Run this code
    
    
    #include <iomanip>
    #include <iostream>
    #include <sstream>
     
    int main()
    {
        [std::cout](../cout.html) << "Parsing string \"10 0x10 010\"\n";
     
        int n1, n2, n3;
        [std::istringstream](../basic_istringstream.html) s("10 0x10 010");
     
        s >> std::setbase(16) >> n1 >> n2 >> n3;
        [std::cout](../cout.html) << "hexadecimal parse: " << n1 << ' ' << n2 << ' ' << n3 << '\n';
     
        s.clear();
        s.seekg(0);
     
        s >> std::setbase(0) >> n1 >> n2 >> n3;
        [std::cout](../cout.html) << "prefix-dependent parse: " << n1 << ' ' << n2 << ' ' << n3 << '\n';
     
        [std::cout](../cout.html) << "hex output: " << std::setbase(16)
                  << [std::showbase](showbase.html) << n1 << ' ' << n2 << ' ' << n3 << '\n';
    }

Output: 
    
    
    Parsing string "10 0x10 010"
    hexadecimal parse: 16 16 16
    prefix-dependent parse: 10 16 8
    hex output: 0xa 0x10 0x8

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 183](https://cplusplus.github.io/LWG/issue183) | C++98  | `setbase` could only be used with streams  
of type [std::ostream](../basic_ostream.html "cpp/io/basic ostream") or [std::istream](../basic_istream.html "cpp/io/basic istream") | usable with any  
character stream   
  
### See also

[ dechexoct](hex.html "cpp/io/manip/hex") |  changes the base used for integer I/O   
(function)   
---|---  
[ showbasenoshowbase](showbase.html "cpp/io/manip/showbase") |  controls whether prefix is used to indicate numeric base   
(function) 
