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
[ios_base::setf](setf.html "cpp/io/ios base/setf")  
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
**ios_base::fmtflags**  
[ios_base::iostate](iostate.html "cpp/io/ios base/iostate")  
[ios_base::seekdir](seekdir.html "cpp/io/ios base/seekdir")  
[ios_base::event](event.html "cpp/io/ios base/event")  
[ios_base::event_callback](event_callback.html "cpp/io/ios base/event callback")  
  


typedef /*implementation defined*/ fmtflags; |  |   
---|---|---  
static constexpr fmtflags dec = /*implementation defined*/  
static constexpr fmtflags oct = /*implementation defined*/  
static constexpr fmtflags hex = /*implementation defined*/  
static constexpr fmtflags basefield = dec | oct | hex; |  |   
static constexpr fmtflags left = /*implementation defined*/  
static constexpr fmtflags right = /*implementation defined*/  
static constexpr fmtflags internal = /*implementation defined*/  
static constexpr fmtflags adjustfield = left | right | internal; |  |   
static constexpr fmtflags scientific = /*implementation defined*/  
static constexpr fmtflags fixed = /*implementation defined*/  
static constexpr fmtflags floatfield = scientific | fixed; |  |   
static constexpr fmtflags boolalpha = /*implementation defined*/  
static constexpr fmtflags showbase = /*implementation defined*/  
static constexpr fmtflags showpoint = /*implementation defined*/  
static constexpr fmtflags showpos = /*implementation defined*/  
static constexpr fmtflags skipws = /*implementation defined*/  
static constexpr fmtflags unitbuf = /*implementation defined*/  
static constexpr fmtflags uppercase = /*implementation defined*/ |  |   
| |   
  
Specifies available formatting flags. It is a [BitmaskType](../../named_req/BitmaskType.html "cpp/named req/BitmaskType"). The following constants are defined: 

Constant  |  Explanation   
---|---  
**`dec`** |  use decimal base for integer I/O: see [std::dec](../manip/hex.html "cpp/io/manip/hex")  
**`oct`** |  use octal base for integer I/O: see [std::oct](../manip/hex.html "cpp/io/manip/hex")  
**`hex`** |  use hexadecimal base for integer I/O: see [std::hex](../manip/hex.html "cpp/io/manip/hex")  
**`basefield`** |  dec | oct | hex. Useful for masking operations   
**`left`** |  left adjustment (adds fill characters to the right): see [std::left](../manip/left.html "cpp/io/manip/left")  
**`right`** |  right adjustment (adds fill characters to the left): see [std::right](../manip/left.html "cpp/io/manip/left")  
**`internal`** |  internal adjustment (adds fill characters to the internal designated point): see [std::internal](../manip/left.html "cpp/io/manip/left")  
**`adjustfield`** |  left | right | internal. Useful for masking operations   
**`scientific`** |  generate floating point types using scientific notation, or hex notation if combined with fixed: see [std::scientific](../manip/fixed.html "cpp/io/manip/fixed")  
**`fixed`** |  generate floating point types using fixed notation, or hex notation if combined with scientific: see [std::fixed](../manip/fixed.html "cpp/io/manip/fixed")  
**`floatfield`** |  scientific | fixed. Useful for masking operations   
**`boolalpha`** |  insert and extract bool type in alphanumeric format: see [std::boolalpha](../manip/boolalpha.html "cpp/io/manip/boolalpha")  
**`showbase`** |  generate a prefix indicating the numeric base for integer output, require the currency indicator in monetary I/O: see [std::showbase](../manip/showbase.html "cpp/io/manip/showbase")  
**`showpoint`** |  generate a decimal-point character unconditionally for floating-point number output: see [std::showpoint](../manip/showpoint.html "cpp/io/manip/showpoint")  
**`showpos`** |  generate a + character for non-negative numeric output: see [std::showpos](../manip/showpos.html "cpp/io/manip/showpos")  
**`skipws`** |  skip leading whitespace before certain input operations: see [std::skipws](../manip/skipws.html "cpp/io/manip/skipws")  
**`unitbuf`** |  flush the output after each output operation: see [std::unitbuf](../manip/unitbuf.html "cpp/io/manip/unitbuf")  
**`uppercase`** |  replace certain lowercase letters with their uppercase equivalents in certain output operations: see [std::uppercase](../manip/uppercase.html "cpp/io/manip/uppercase")  
  
### Example

The following example shows several different ways to print the same result.

Run this code
    
    
    #include <iostream>
     
    int main()
    {
        const int num = 150;
     
        // using fmtflags as class member constants:
        [std::cout](../cout.html).setf(std::ios_base::hex, std::ios_base::basefield);
        [std::cout](../cout.html).setf(std::ios_base::showbase);
        [std::cout](../cout.html) << num << '\n';
     
        // using fmtflags as inherited class member constants:
        [std::cout](../cout.html).setf (std::ios::hex, std::ios::basefield);
        [std::cout](../cout.html).setf (std::ios::showbase);
        [std::cout](../cout.html) << num << '\n';
     
        // using fmtflags as object member constants:
        [std::cout](../cout.html).setf([std::cout](../cout.html).hex, [std::cout](../cout.html).basefield);
        [std::cout](../cout.html).setf([std::cout](../cout.html).showbase);
        [std::cout](../cout.html) << num << '\n';
     
        // using fmtflags as a type:
        std::ios_base::fmtflags ff;
        ff = [std::cout](../cout.html).flags();
        ff &= ~[std::cout](../cout.html).basefield;   // unset basefield bits
        ff |= [std::cout](../cout.html).hex;          // set hex
        ff |= [std::cout](../cout.html).showbase;     // set showbase
        [std::cout](../cout.html).flags(ff);
        [std::cout](../cout.html) << num << '\n';
     
        // not using fmtflags, but using manipulators:
        [std::cout](../cout.html) << [std::hex](../manip/hex.html) << [std::showbase](../manip/showbase.html) << num << '\n';
    }

Output: 
    
    
    0x96
    0x96
    0x96
    0x96
    0x96

### See also

[ flags](flags.html "cpp/io/ios base/flags") |  manages format flags   
(public member function)   
---|---  
[ setf](setf.html "cpp/io/ios base/setf") |  sets specific format flag   
(public member function)   
[ unsetf](unsetf.html "cpp/io/ios base/unsetf") |  clears specific format flag   
(public member function)   
[ setbase](../manip/setbase.html "cpp/io/manip/setbase") |  changes the base used for integer I/O   
(function)   
[ setfill](../manip/setfill.html "cpp/io/manip/setfill") |  changes the fill character   
(function template)   
[ fixedscientifichexfloatdefaultfloat](../manip/fixed.html "cpp/io/manip/fixed")(C++11)(C++11) |  changes formatting used for floating-point I/O   
(function)   
[ showbasenoshowbase](../manip/showbase.html "cpp/io/manip/showbase") |  controls whether prefix is used to indicate numeric base   
(function)   
[ boolalphanoboolalpha](../manip/boolalpha.html "cpp/io/manip/boolalpha") |  switches between textual and numeric representation of booleans   
(function)   
[ showposnoshowpos](../manip/showpos.html "cpp/io/manip/showpos") |  controls whether the `**+**` sign used with non-negative numbers   
(function)   
[ showpointnoshowpoint](../manip/showpoint.html "cpp/io/manip/showpoint") |  controls whether decimal point is always included in floating-point representation   
(function)   
[ unitbufnounitbuf](../manip/unitbuf.html "cpp/io/manip/unitbuf") |  controls whether output is flushed after each operation   
(function)   
[ skipwsnoskipws](../manip/skipws.html "cpp/io/manip/skipws") |  controls whether leading whitespace is skipped on input   
(function)   
[ uppercasenouppercase](../manip/uppercase.html "cpp/io/manip/uppercase") |  controls whether uppercase characters are used with some output formats   
(function) 
