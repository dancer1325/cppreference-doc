[C++](../cpp.html "cpp")

[Compiler support](compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](freestanding.html "cpp/freestanding")  
[Language](language.html "cpp/language")  
[Standard library](standard_library.html "cpp/standard library")  
[Standard library headers](headers.html "cpp/header")  
[Named requirements](iterator/concepts.html "cpp/named req")  
[Feature test macros](experimental/feature_test.html "cpp/feature test") (C++20)  
[Language support library](utility.html#Language_support "cpp/utility")  
[Concepts library](concepts.html "cpp/concepts") (C++20)  
[Diagnostics library](error.html "cpp/error")  
[Memory management library](memory.html "cpp/memory")  
[Metaprogramming library](meta.html "cpp/meta") (C++11)  
[General utilities library](utility.html "cpp/utility")  
[Containers library](container.html "cpp/container")  
[Iterators library](iterator.html "cpp/iterator")  
[Ranges library](ranges.html "cpp/ranges") (C++20)  
[Algorithms library](algorithm.html "cpp/algorithm")  
[Strings library](string.html "cpp/string")  
[Text processing library](text.html "cpp/text")  
[Numerics library](numeric.html "cpp/numeric")  
[Date and time library](chrono.html "cpp/chrono")  
**Input/output library**  
[Filesystem library](filesystem.html "cpp/filesystem") (C++17)  
[Concurrency support library](atomic.html "cpp/thread") (C++11)  
[Execution control library](experimental/execution.html "cpp/execution") (C++26)  
[Technical specifications](experimental.html "cpp/experimental")  
[Symbols index](symbol_index.html "cpp/symbol index")  
[External libraries](links/libs.html "cpp/links/libs")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/navbar_content&action=edit)

**Input/output library**

[I/O manipulators](io/manip.html "cpp/io/manip")  
---  
[Print functions](io.html#Print_functions_.28since_C.2B.2B23.29 "cpp/io") (C++23)  
[C-style I/O](io/c.html "cpp/io/c")  
Buffers  
[basic_streambuf](io/basic_streambuf.html "cpp/io/basic streambuf")  
[basic_filebuf](io/basic_filebuf.html "cpp/io/basic filebuf")  
[basic_stringbuf](io/basic_stringbuf.html "cpp/io/basic stringbuf")  
[basic_spanbuf](io/basic_spanbuf.html "cpp/io/basic spanbuf")(C++23)  
[strstreambuf](io/strstreambuf.html "cpp/io/strstreambuf")(C++98/26*)  
[basic_syncbuf](io/basic_syncbuf.html "cpp/io/basic syncbuf")(C++20)  
Streams  
Abstractions  
[ios_base](io/ios_base.html "cpp/io/ios base")  
[basic_ios](io/basic_ios.html "cpp/io/basic ios")  
[basic_istream](io/basic_istream.html "cpp/io/basic istream")  
[basic_ostream](io/basic_ostream.html "cpp/io/basic ostream")  
[basic_iostream](io/basic_iostream.html "cpp/io/basic iostream")  
File I/O  
[basic_ifstream](io/basic_ifstream.html "cpp/io/basic ifstream")  
[basic_ofstream](io/basic_ofstream.html "cpp/io/basic ofstream")  
[basic_fstream](io/basic_fstream.html "cpp/io/basic fstream")  
String I/O  
[basic_istringstream](io/basic_istringstream.html "cpp/io/basic istringstream")  
[basic_ostringstream](io/basic_ostringstream.html "cpp/io/basic ostringstream")  
[basic_stringstream](io/basic_stringstream.html "cpp/io/basic stringstream")  
Array I/O  
[basic_ispanstream](io/basic_ispanstream.html "cpp/io/basic ispanstream")(C++23)  
[basic_ospanstream](io/basic_ospanstream.html "cpp/io/basic ospanstream")(C++23)  
[basic_spanstream](io/basic_spanstream.html "cpp/io/basic spanstream")(C++23)  
[istrstream](io/istrstream.html "cpp/io/istrstream")(C++98/26*)  
[ostrstream](io/ostrstream.html "cpp/io/ostrstream")(C++98/26*)  
[strstream](io/strstream.html "cpp/io/strstream")(C++98/26*)  
Synchronized Output  
[basic_osyncstream](io/basic_osyncstream.html "cpp/io/basic osyncstream")(C++20)  
Types  
[streamoff](io/streamoff.html "cpp/io/streamoff")  
[streamsize](io/streamsize.html "cpp/io/streamsize")  
[fpos](io/fpos.html "cpp/io/fpos")  
Error category interface  
[iostream_category](io/iostream_category.html "cpp/io/iostream category")(C++11)  
[io_errc](io/io_errc.html "cpp/io/io errc")(C++11)  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/navbar_content&action=edit)

C++ includes the following input/output libraries: an [OOP-style](https://en.wikipedia.org/wiki/Object-oriented_programming "enwiki:Object-oriented programming") [stream-based I/O](io.html#Stream-based_I.2FO) library, [print-based family](io.html#Print_functions_.28since_C.2B.2B23.29) of functions(since C++23), and the standard set of [C-style I/O](io.html#C-style_I.2FO) functions. 

## Contents

  * [1 Stream-based I/O](io.html#Stream-based_I.2FO)
    * [1.1 Abstraction](io.html#Abstraction)
    * [1.2 File I/O implementation](io.html#File_I.2FO_implementation)
    * [1.3 String I/O implementation](io.html#String_I.2FO_implementation)
    * [1.4 Array I/O implementations](io.html#Array_I.2FO_implementations)
    * [1.5 Synchronized output (since C++20)](io.html#Synchronized_output_.28since_C.2B.2B20.29)
    * [1.6 Typedefs](io.html#Typedefs)
    * [1.7 Predefined standard stream objects](io.html#Predefined_standard_stream_objects)
    * [1.8 I/O Manipulators](io.html#I.2FO_Manipulators)
    * [1.9 Types](io.html#Types)
    * [1.10 Error category interface (since C++11)](io.html#Error_category_interface_.28since_C.2B.2B11.29)
  * [2 Print functions (since C++23)](io.html#Print_functions_.28since_C.2B.2B23.29)
  * [3 C-style I/O](io.html#C-style_I.2FO)
  * [4 See also](io.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io&action=edit&section=1 "Edit section: Stream-based I/O")] Stream-based I/O

The stream-based input/output library is organized around abstract input/output devices. These abstract devices allow the same code to handle input/output to files, memory streams, or custom adaptor devices that perform arbitrary operations (e.g. compression) on the fly. 

Most of the classes are templated, so they can be adapted to any basic character type. Separate typedefs are provided for the most common basic character types (char and wchar_t). The classes are organized into the following hierarchy: 

![std-io-complete-inheritance.svg](https://upload.cppreference.com/mwiki/images/0/06/std-io-complete-inheritance.svg)

Inheritance diagram

#####  Abstraction   
  
---  
Defined in header `[<ios>](header/ios.html "cpp/header/ios")`  
[ ios_base](io/ios_base.html "cpp/io/ios base") |  manages formatting flags and input/output exceptions   
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_ios_base&action=edit)  
[ basic_ios](io/basic_ios.html "cpp/io/basic ios") |  manages an arbitrary stream buffer   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_basic_ios&action=edit)  
Defined in header `[<streambuf>](header/streambuf.html "cpp/header/streambuf")`  
[ basic_streambuf](io/basic_streambuf.html "cpp/io/basic streambuf") |  abstracts a raw device   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_basic_streambuf&action=edit)  
Defined in header `[<ostream>](header/ostream.html "cpp/header/ostream")`  
[ basic_ostream](io/basic_ostream.html "cpp/io/basic ostream") |  wraps a given abstract device ([std::basic_streambuf](io/basic_streambuf.html "cpp/io/basic streambuf"))  
and provides high-level output interface   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_basic_ostream&action=edit)  
Defined in header `[<istream>](header/istream.html "cpp/header/istream")`  
[ basic_istream](io/basic_istream.html "cpp/io/basic istream") |  wraps a given abstract device ([std::basic_streambuf](io/basic_streambuf.html "cpp/io/basic streambuf"))  
and provides high-level input interface   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_basic_istream&action=edit)  
[ basic_iostream](io/basic_iostream.html "cpp/io/basic iostream") |  wraps a given abstract device ([std::basic_streambuf](io/basic_streambuf.html "cpp/io/basic streambuf"))  
and provides high-level input/output interface   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_basic_iostream&action=edit)  
  
#####  File I/O implementation   
  
Defined in header `[<fstream>](header/fstream.html "cpp/header/fstream")`  
[ basic_filebuf](io/basic_filebuf.html "cpp/io/basic filebuf") |  implements raw file device   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_basic_filebuf&action=edit)  
[ basic_ifstream](io/basic_ifstream.html "cpp/io/basic ifstream") |  implements high-level file stream input operations   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_basic_ifstream&action=edit)  
[ basic_ofstream](io/basic_ofstream.html "cpp/io/basic ofstream") |  implements high-level file stream output operations   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_basic_ofstream&action=edit)  
[ basic_fstream](io/basic_fstream.html "cpp/io/basic fstream") |  implements high-level file stream input/output operations   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_basic_fstream&action=edit)  
  
#####  String I/O implementation   
  
Defined in header `[<sstream>](header/sstream.html "cpp/header/sstream")`  
[ basic_stringbuf](io/basic_stringbuf.html "cpp/io/basic stringbuf") |  implements raw string device   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_basic_stringbuf&action=edit)  
[ basic_istringstream](io/basic_istringstream.html "cpp/io/basic istringstream") |  implements high-level string stream input operations   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_basic_istringstream&action=edit)  
[ basic_ostringstream](io/basic_ostringstream.html "cpp/io/basic ostringstream") |  implements high-level string stream output operations   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_basic_ostringstream&action=edit)  
[ basic_stringstream](io/basic_stringstream.html "cpp/io/basic stringstream") |  implements high-level string stream input/output operations   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_basic_stringstream&action=edit)  
  
#####  Array I/O implementations   
  
Defined in header `[<spanstream>](header/spanstream.html "cpp/header/spanstream")`  
[ basic_spanbuf](io/basic_spanbuf.html "cpp/io/basic spanbuf")(C++23) |  implements raw fixed character buffer device   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_basic_spanbuf&action=edit)  
[ basic_ispanstream](io/basic_ispanstream.html "cpp/io/basic ispanstream")(C++23) |  implements fixed character buffer input operations   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_basic_ispanstream&action=edit)  
[ basic_ospanstream](io/basic_ospanstream.html "cpp/io/basic ospanstream")(C++23) |  implements fixed character buffer output operations   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_basic_ospanstream&action=edit)  
[ basic_spanstream](io/basic_spanstream.html "cpp/io/basic spanstream")(C++23) |  implements fixed character buffer input/output operations   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_basic_spanstream&action=edit)  
Defined in header `[<strstream>](header/strstream.html "cpp/header/strstream")`  
[ strstreambuf](io/strstreambuf.html "cpp/io/strstreambuf")(deprecated in C++98)(removed in C++26) |  implements raw character array device   
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_strstreambuf&action=edit)  
[ istrstream](io/istrstream.html "cpp/io/istrstream")(deprecated in C++98)(removed in C++26) |  implements character array input operations   
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_istrstream&action=edit)  
[ ostrstream](io/ostrstream.html "cpp/io/ostrstream")(deprecated in C++98)(removed in C++26) |  implements character array output operations   
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_ostrstream&action=edit)  
[ strstream](io/strstream.html "cpp/io/strstream")(deprecated in C++98)(removed in C++26) |  implements character array input/output operations   
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_strstream&action=edit)  
  
#####  Synchronized output (since C++20)  
  
Defined in header `[<syncstream>](header/syncstream.html "cpp/header/syncstream")`  
[ basic_syncbuf](io/basic_syncbuf.html "cpp/io/basic syncbuf")(C++20) |  synchronized output device wrapper   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_basic_syncbuf&action=edit)  
[ basic_osyncstream](io/basic_osyncstream.html "cpp/io/basic osyncstream")(C++20) |  synchronized output stream wrapper   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_basic_osyncstream&action=edit)  
  
#### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io&action=edit&section=2 "Edit section: Typedefs")] Typedefs

The following typedefs for common character types are provided in namespace `std`: 

Type  |  Definition   
---|---  
Defined in header `[<ios>](header/ios.html "cpp/header/ios")`  
std::ios |  [std::basic_ios](io/basic_ios.html)<char>  
std::wios |  [std::basic_ios](io/basic_ios.html)<wchar_t>  
Defined in header `[<streambuf>](header/streambuf.html "cpp/header/streambuf")`  
[std::streambuf](io/basic_streambuf.html "cpp/io/basic streambuf") |  [std::basic_streambuf](io/basic_streambuf.html)<char>  
[std::wstreambuf](io/basic_streambuf.html "cpp/io/basic streambuf") |  [std::basic_streambuf](io/basic_streambuf.html)<wchar_t>  
Defined in header `[<istream>](header/istream.html "cpp/header/istream")`  
[std::istream](io/basic_istream.html "cpp/io/basic istream") |  [std::basic_istream](io/basic_istream.html)<char>  
[std::wistream](io/basic_istream.html "cpp/io/basic istream") |  [std::basic_istream](io/basic_istream.html)<wchar_t>  
[std::iostream](io/basic_iostream.html "cpp/io/basic iostream") |  [std::basic_iostream](io/basic_iostream.html)<char>  
[std::wiostream](io/basic_iostream.html "cpp/io/basic iostream") |  [std::basic_iostream](io/basic_iostream.html)<wchar_t>  
Defined in header `[<ostream>](header/ostream.html "cpp/header/ostream")`  
[std::ostream](io/basic_ostream.html "cpp/io/basic ostream") |  [std::basic_ostream](io/basic_ostream.html)<char>  
[std::wostream](io/basic_ostream.html "cpp/io/basic ostream") |  [std::basic_ostream](io/basic_ostream.html)<wchar_t>  
Defined in header `[<fstream>](header/fstream.html "cpp/header/fstream")`  
[std::filebuf](io/basic_filebuf.html "cpp/io/basic filebuf") |  [std::basic_filebuf](io/basic_filebuf.html)<char>  
[std::wfilebuf](io/basic_filebuf.html "cpp/io/basic filebuf") |  [std::basic_filebuf](io/basic_filebuf.html)<wchar_t>  
[std::ifstream](io/basic_ifstream.html "cpp/io/basic ifstream") |  [std::basic_ifstream](io/basic_ifstream.html)<char>  
[std::wifstream](io/basic_ifstream.html "cpp/io/basic ifstream") |  [std::basic_ifstream](io/basic_ifstream.html)<wchar_t>  
[std::ofstream](io/basic_ofstream.html "cpp/io/basic ofstream") |  [std::basic_ofstream](io/basic_ofstream.html)<char>  
[std::wofstream](io/basic_ofstream.html "cpp/io/basic ofstream") |  [std::basic_ofstream](io/basic_ofstream.html)<wchar_t>  
[std::fstream](io/basic_fstream.html "cpp/io/basic fstream") |  [std::basic_fstream](io/basic_fstream.html)<char>  
[std::wfstream](io/basic_fstream.html "cpp/io/basic fstream") |  [std::basic_fstream](io/basic_fstream.html)<wchar_t>  
Defined in header `[<sstream>](header/sstream.html "cpp/header/sstream")`  
[std::stringbuf](io/basic_stringbuf.html "cpp/io/basic stringbuf") |  [std::basic_stringbuf](io/basic_stringbuf.html)<char>  
[std::wstringbuf](io/basic_stringbuf.html "cpp/io/basic stringbuf") |  [std::basic_stringbuf](io/basic_stringbuf.html)<wchar_t>  
[std::istringstream](io/basic_istringstream.html "cpp/io/basic istringstream") |  [std::basic_istringstream](io/basic_istringstream.html)<char>  
[std::wistringstream](io/basic_istringstream.html "cpp/io/basic istringstream") |  [std::basic_istringstream](io/basic_istringstream.html)<wchar_t>  
[std::ostringstream](io/basic_ostringstream.html "cpp/io/basic ostringstream") |  [std::basic_ostringstream](io/basic_ostringstream.html)<char>  
[std::wostringstream](io/basic_ostringstream.html "cpp/io/basic ostringstream") |  [std::basic_ostringstream](io/basic_ostringstream.html)<wchar_t>  
[std::stringstream](io/basic_stringstream.html "cpp/io/basic stringstream") |  [std::basic_stringstream](io/basic_stringstream.html)<char>  
[std::wstringstream](io/basic_stringstream.html "cpp/io/basic stringstream") |  [std::basic_stringstream](io/basic_stringstream.html)<wchar_t>  
Defined in header `[<spanstream>](header/spanstream.html "cpp/header/spanstream")`  
std::spanbuf (C++23) |  [std::basic_spanbuf](io/basic_spanbuf.html)<char>  
std::wspanbuf (C++23) |  [std::basic_spanbuf](io/basic_spanbuf.html)<wchar_t>  
std::ispanstream (C++23) |  [std::basic_ispanstream](io/basic_ispanstream.html)<char>  
std::wispanstream (C++23) |  [std::basic_ispanstream](io/basic_ispanstream.html)<wchar_t>  
std::ospanstream (C++23) |  [std::basic_ospanstream](io/basic_ospanstream.html)<char>  
std::wospanstream (C++23) |  [std::basic_ospanstream](io/basic_ospanstream.html)<wchar_t>  
std::spanstream (C++23) |  [std::basic_spanstream](io/basic_spanstream.html)<char>  
std::wspanstream (C++23) |  [std::basic_spanstream](io/basic_spanstream.html)<wchar_t>  
Defined in header `[<syncstream>](header/syncstream.html "cpp/header/syncstream")`  
std::syncbuf (C++20) |  [std::basic_syncbuf](io/basic_syncbuf.html)<char>  
std::wsyncbuf (C++20) |  [std::basic_syncbuf](io/basic_syncbuf.html)<wchar_t>  
std::osyncstream (C++20) |  [std::basic_osyncstream](io/basic_osyncstream.html)<char>  
std::wosyncstream (C++20) |  [std::basic_osyncstream](io/basic_osyncstream.html)<wchar_t>  
  
#### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io&action=edit&section=3 "Edit section: Predefined standard stream objects")] Predefined standard stream objects

Defined in header `[<iostream>](header/iostream.html "cpp/header/iostream")`  
---  
[ cinwcin](io/cin.html "cpp/io/cin") |  reads from the standard C input stream [stdin](io/c/std_streams.html "cpp/io/c/std streams")  
(global object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_cin&action=edit)  
[ coutwcout](io/cout.html "cpp/io/cout") |  writes to the standard C output stream [stdout](io/c/std_streams.html "cpp/io/c/std streams")  
(global object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_cout&action=edit)  
[ cerrwcerr](io/cerr.html "cpp/io/cerr") |  writes to the standard C error stream [stderr](io/c/std_streams.html "cpp/io/c/std streams"), unbuffered  
(global object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_cerr&action=edit)  
[ clogwclog](io/clog.html "cpp/io/clog") |  writes to the standard C error stream [stderr](io/c/std_streams.html "cpp/io/c/std streams")  
(global object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_clog&action=edit)  
  
#### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io&action=edit&section=4 "Edit section: I/O Manipulators")] [I/O Manipulators](io/manip.html "cpp/io/manip")

The stream-based I/O library uses [I/O manipulators](io/manip.html "cpp/io/manip") (e.g. [std::boolalpha](io/manip/boolalpha.html "cpp/io/manip/boolalpha"), [std::hex](io/manip/hex.html "cpp/io/manip/hex"), etc.) to control how streams behave. 

#### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io&action=edit&section=5 "Edit section: Types")] Types

The following auxiliary types are defined: 

Defined in header `[<ios>](header/ios.html "cpp/header/ios")`  
---  
[ streamoff](io/streamoff.html "cpp/io/streamoff") |  represents relative file/stream position (offset from fpos), sufficient to represent any file size   
(typedef) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_streamoff&action=edit)  
[ streamsize](io/streamsize.html "cpp/io/streamsize") |  represents the number of characters transferred in an I/O operation or the size of an I/O buffer   
(typedef) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_streamsize&action=edit)  
[ fpos](io/fpos.html "cpp/io/fpos") |  represents absolute position in a stream or a file   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_fpos&action=edit)  
  
The following typedef names for [std::fpos](io/fpos.html)<[std::mbstate_t](string/multibyte/mbstate_t.html)> are provided: 

Defined in header `[<iosfwd>](header/iosfwd.html "cpp/header/iosfwd")`  
---  
Type  |  Definition   
`std::streampos` |  [std::fpos](io/fpos.html)<[std::char_traits](string/char_traits.html)<char>::state_type>  
`std::wstreampos` |  [std::fpos](io/fpos.html)<[std::char_traits](string/char_traits.html)<wchar_t>::state_type>  
`std::u8streampos` (C++20) |  [std::fpos](io/fpos.html)<[std::char_traits](string/char_traits.html)<char8_t>::state_type>  
`std::u16streampos` (C++11) |  [std::fpos](io/fpos.html)<[std::char_traits](string/char_traits.html)<char16_t>::state_type>  
`std::u32streampos` (C++11) |  [std::fpos](io/fpos.html)<[std::char_traits](string/char_traits.html)<char32_t>::state_type>  
  
#### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io&action=edit&section=6 "Edit section: Error category interface \(since C++11\)")] Error category interface (since C++11)

Defined in header `[<ios>](header/ios.html "cpp/header/ios")`  
---  
[ io_errc](io/io_errc.html "cpp/io/io errc")(C++11) |  the IO stream error codes   
(enum) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_io_errc&action=edit)  
[ iostream_category](io/iostream_category.html "cpp/io/iostream category")(C++11) |  identifies the iostream error category   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_iostream_category&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io&action=edit&section=7 "Edit section: Print functions \(since C++23\)")] Print functions (since C++23)

The Unicode-aware print-family functions that perform formatted I/O on text that is already formatted. They bring all the performance benefits of [std::format](utility/format/format.html "cpp/utility/format/format"), are locale-independent by default, reduce global state, avoid allocating a temporary [std::string](string/basic_string.html "cpp/string/basic string") object and calling operator<<, and in general make formatting more efficient compared to [iostreams](io.html#Stream-based_I.2FO) and [stdio](io.html#C-style_I.2FO). 

The following print-like functions are provided: 

Defined in header `[<print>](header/print.html "cpp/header/print")`  
---  
[ print](io/print.html "cpp/io/print")(C++23) |  prints to [stdout](io/c/std_streams.html "cpp/io/c/std streams") or a file stream using [formatted](utility/format.html "cpp/utility/format") representation of the arguments   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_print&action=edit)  
[ println](io/println.html "cpp/io/println")(C++23) |  same as std::print except that each print is terminated by additional new line   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_println&action=edit)  
[ vprint_unicodevprint_unicode_buffered](io/vprint_unicode.html "cpp/io/vprint unicode")(C++23) |  prints to Unicode capable [stdout](io/c/std_streams.html "cpp/io/c/std streams") or a file stream using [type-erased](utility/format/basic_format_args.html "cpp/utility/format/basic format args") argument representation   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_vprint_unicode&action=edit)  
[ vprint_nonunicodevprint_nonunicode_buffered](io/vprint_nonunicode.html "cpp/io/vprint nonunicode")(C++23) |  prints to [stdout](io/c/std_streams.html "cpp/io/c/std streams") or a file stream using [type-erased](utility/format/basic_format_args.html "cpp/utility/format/basic format args") argument representation   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_vprint_nonunicode&action=edit)  
Defined in header `[<ostream>](header/ostream.html "cpp/header/ostream")`  
[ print(std::ostream)](io/basic_ostream/print.html "cpp/io/basic ostream/print")(C++23) |  outputs [formatted](utility/format.html "cpp/utility/format") representation of the arguments   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_ostream/dsc_print&action=edit)  
[ println(std::ostream)](io/basic_ostream/println.html "cpp/io/basic ostream/println")(C++23) |  outputs [formatted](utility/format.html "cpp/utility/format") representation of the arguments with appended '\n'   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_ostream/dsc_println&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io&action=edit&section=8 "Edit section: C-style I/O")] [C-style I/O](io/c.html "cpp/io/c")

C++ also includes the [input/output functions defined by C](io/c.html "cpp/io/c"), such as [std::fopen](io/c/fopen.html "cpp/io/c/fopen"), [std::getc](io/c/fgetc.html "cpp/io/c/fgetc"), etc. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io&action=edit&section=9 "Edit section: See also")] See also

[Filesystem library](filesystem.html "cpp/filesystem") (since C++17)  
---
