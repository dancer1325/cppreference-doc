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
  


[`std::ios_base`](../ios_base.html "cpp/io/ios base")

Member functions  
---  
[ios_base::ios_base](ios_base.html "cpp/io/ios base/ios base")  
[ios_base::~ios_base](~ios_base.html "cpp/io/ios base/~ios base")  
[ios_base::operator=](operator=.html "cpp/io/ios base/operator=")  
Formatting  
[ios_base::flags](flags.html "cpp/io/ios base/flags")  
**ios_base::setf**  
[ios_base::unsetf](unsetf.html "cpp/io/ios base/unsetf")  
[ios_base::precision](precision.html "cpp/io/ios base/precision")  
[ios_base::width](width.html "cpp/io/ios base/width")  
Locales  
[ios_base::imbue](imbue.html "cpp/io/ios base/imbue")  
[ios_base::getloc](getloc.html "cpp/io/ios base/getloc")  
Internal extensible array  
[ios_base::xalloc](xalloc.html "cpp/io/ios base/xalloc")  
[ios_base::iword](iword.html "cpp/io/ios base/iword")  
[ios_base::pword](pword.html "cpp/io/ios base/pword")  
Miscellaneous  
[ios_base::register_callback](register_callback.html "cpp/io/ios base/register callback")  
[ios_base::sync_with_stdio](sync_with_stdio.html "cpp/io/ios base/sync with stdio")  
Member classes  
[ios_base::failure](failure.html "cpp/io/ios base/failure")  
[ios_base::Init](Init.html "cpp/io/ios base/Init")  
Member types  
[ios_base::openmode](openmode.html "cpp/io/ios base/openmode")  
[ios_base::fmtflags](fmtflags.html "cpp/io/ios base/fmtflags")  
[ios_base::iostate](iostate.html "cpp/io/ios base/iostate")  
[ios_base::seekdir](seekdir.html "cpp/io/ios base/seekdir")  
[ios_base::event](event.html "cpp/io/ios base/event")  
[ios_base::event_callback](event_callback.html "cpp/io/ios base/event callback")  
  


fmtflags setf( fmtflags flags ); |  (1)  |   
---|---|---  
fmtflags setf( fmtflags flags, fmtflags mask ); |  (2)  |   
| |   
  
Sets the formatting flags to specified settings. 

1) Sets the formatting flags identified by flags. Effectively, the following operation is performed fl = fl | flags where `fl` defines the state of internal formatting flags.

2) Clears the formatting flags under mask, and sets the cleared flags to those specified by flags. Effectively the following operation is performed fl = (fl & ~mask) | (flags & mask) where `fl` defines the state of internal formatting flags.

## Contents

  * [1 Parameters](setf.html#Parameters)
    * [1.1 Formatting flags](setf.html#Formatting_flags)
  * [2 Return value](setf.html#Return_value)
  * [3 Example](setf.html#Example)
  * [4 See also](setf.html#See_also)

  
---  
  
### Parameters

flags, mask  |  \-  |  new formatting setting. mask defines which flags can be altered, flags defines which flags of those to be altered should be set (others will be cleared). Both parameters can be a combination of the [formatting flags](setf.html#Formatting_flags) constants   
---|---|---  
  
##### Formatting flags

Constant  |  Explanation   
---|---  
[`dec`](fmtflags.html "cpp/io/ios base/fmtflags") |  use decimal base for integer I/O: see [std::dec](../manip/hex.html "cpp/io/manip/hex")  
[`oct`](fmtflags.html "cpp/io/ios base/fmtflags") |  use octal base for integer I/O: see [std::oct](../manip/hex.html "cpp/io/manip/hex")  
[`hex`](fmtflags.html "cpp/io/ios base/fmtflags") |  use hexadecimal base for integer I/O: see [std::hex](../manip/hex.html "cpp/io/manip/hex")  
[`basefield`](fmtflags.html "cpp/io/ios base/fmtflags") |  dec | oct | hex. Useful for masking operations   
[`left`](fmtflags.html "cpp/io/ios base/fmtflags") |  left adjustment (adds fill characters to the right): see [std::left](../manip/left.html "cpp/io/manip/left")  
[`right`](fmtflags.html "cpp/io/ios base/fmtflags") |  right adjustment (adds fill characters to the left): see [std::right](../manip/left.html "cpp/io/manip/left")  
[`internal`](fmtflags.html "cpp/io/ios base/fmtflags") |  internal adjustment (adds fill characters to the internal designated point): see [std::internal](../manip/left.html "cpp/io/manip/left")  
[`adjustfield`](fmtflags.html "cpp/io/ios base/fmtflags") |  left | right | internal. Useful for masking operations   
[`scientific`](fmtflags.html "cpp/io/ios base/fmtflags") |  generate floating point types using scientific notation, or hex notation if combined with fixed: see [std::scientific](../manip/fixed.html "cpp/io/manip/fixed")  
[`fixed`](fmtflags.html "cpp/io/ios base/fmtflags") |  generate floating point types using fixed notation, or hex notation if combined with scientific: see [std::fixed](../manip/fixed.html "cpp/io/manip/fixed")  
[`floatfield`](fmtflags.html "cpp/io/ios base/fmtflags") |  scientific | fixed. Useful for masking operations   
[`boolalpha`](fmtflags.html "cpp/io/ios base/fmtflags") |  insert and extract bool type in alphanumeric format: see [std::boolalpha](../manip/boolalpha.html "cpp/io/manip/boolalpha")  
[`showbase`](fmtflags.html "cpp/io/ios base/fmtflags") |  generate a prefix indicating the numeric base for integer output, require the currency indicator in monetary I/O: see [std::showbase](../manip/showbase.html "cpp/io/manip/showbase")  
[`showpoint`](fmtflags.html "cpp/io/ios base/fmtflags") |  generate a decimal-point character unconditionally for floating-point number output: see [std::showpoint](../manip/showpoint.html "cpp/io/manip/showpoint")  
[`showpos`](fmtflags.html "cpp/io/ios base/fmtflags") |  generate a + character for non-negative numeric output: see [std::showpos](../manip/showpos.html "cpp/io/manip/showpos")  
[`skipws`](fmtflags.html "cpp/io/ios base/fmtflags") |  skip leading whitespace before certain input operations: see [std::skipws](../manip/skipws.html "cpp/io/manip/skipws")  
[`unitbuf`](fmtflags.html "cpp/io/ios base/fmtflags") |  flush the output after each output operation: see [std::unitbuf](../manip/unitbuf.html "cpp/io/manip/unitbuf")  
[`uppercase`](fmtflags.html "cpp/io/ios base/fmtflags") |  replace certain lowercase letters with their uppercase equivalents in certain output operations: see [std::uppercase](../manip/uppercase.html "cpp/io/manip/uppercase")  
  
### Return value

The formatting flags before the call to the function. 

### Example

Run this code
    
    
    #include <iomanip>
    #include <iostream>
    #include <numbers>
     
    int main()
    {
        const double PI = [std::numbers::pi](../../numeric/constants.html);
        const int WIDTH = 15;
     
        [std::cout](../cout.html).setf(std::ios::right); // equivalent: cout << right;
        [std::cout](../cout.html) << [std::setw](../manip/setw.html)(WIDTH / 2) << "radius"
                  << [std::setw](../manip/setw.html)(WIDTH) << "circumference" << '\n';
     
        [std::cout](../cout.html).setf(std::ios::fixed); // equivalent: cout << fixed;
        for (double radius = 1; radius <= 6; radius += 0.5)
            [std::cout](../cout.html) << [std::setprecision](../manip/setprecision.html)(1) << [std::setw](../manip/setw.html)(WIDTH / 2)
                      << radius
                      << [std::setprecision](../manip/setprecision.html)(2) << [std::setw](../manip/setw.html)(WIDTH)
                      << (2 * PI * radius) << '\n';
    }

Output: 
    
    
     radius  circumference
        1.0           6.28
        1.5           9.42
        2.0          12.57
        2.5          15.71
        3.0          18.85
        3.5          21.99
        4.0          25.13
        4.5          28.27
        5.0          31.42
        5.5          34.56
        6.0          37.70

### See also

[ flags](flags.html "cpp/io/ios base/flags") |  manages format flags   
(public member function)   
---|---  
[ unsetf](unsetf.html "cpp/io/ios base/unsetf") |  clears specific format flag   
(public member function) 
