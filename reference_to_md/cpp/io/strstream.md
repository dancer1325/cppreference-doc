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
**strstream**(C++98/26*)  
Synchronized Output  
[basic_osyncstream](basic_osyncstream.html "cpp/io/basic osyncstream")(C++20)  
Types  
[streamoff](streamoff.html "cpp/io/streamoff")  
[streamsize](streamsize.html "cpp/io/streamsize")  
[fpos](fpos.html "cpp/io/fpos")  
Error category interface  
[iostream_category](iostream_category.html "cpp/io/iostream category")(C++11)  
[io_errc](io_errc.html "cpp/io/io errc")(C++11)  
  


**`std::strstream`**

Member functions  
---  
[strstream::strstream](strstream/strstream.html "cpp/io/strstream/strstream")  
[strstream::~strstream](strstream/~strstream.html "cpp/io/strstream/~strstream")  
[strstream::rdbuf](strstream/rdbuf.html "cpp/io/strstream/rdbuf")  
[strstream::str](strstream/str.html "cpp/io/strstream/str")  
[strstream::pcount](strstream/pcount.html "cpp/io/strstream/pcount")  
[strstream::freeze](strstream/freeze.html "cpp/io/strstream/freeze")  
  


Defined in header `[<strstream>](../header/strstream.html "cpp/header/strstream")` |  |   
---|---|---  
class strstream : public [std::iostream](basic_iostream.html) |  |  (deprecated in C++98)   
(removed in C++26)  
| |   
  
The class `strstream` implements input and output operations on array-backed streams. It essentially wraps a raw array I/O device implementation ([std::strstreambuf](strstreambuf.html "cpp/io/strstreambuf")) into the higher-level interface of [std::basic_iostream](basic_iostream.html "cpp/io/basic iostream"). 

The typical implementation of `strstream` holds only one non-derived data member: an object of type [std::strstreambuf](strstreambuf.html "cpp/io/strstreambuf"). 

## Contents

  * [1 Notes](strstream.html#Notes)
  * [2 Member functions](strstream.html#Member_functions)
  * [3 Inherited from std::basic_istream](strstream.html#Inherited_from_std::basic_istream)
    * [3.1 Member functions](strstream.html#Member_functions_2)
      * [3.1.1 Formatted input](strstream.html#Formatted_input)
      * [3.1.2 Unformatted input](strstream.html#Unformatted_input)
      * [3.1.3 Positioning](strstream.html#Positioning)
      * [3.1.4 Miscellaneous](strstream.html#Miscellaneous)
    * [3.2 Member classes](strstream.html#Member_classes)
  * [4 Inherited from std::basic_ostream](strstream.html#Inherited_from_std::basic_ostream)
    * [4.1 Member functions](strstream.html#Member_functions_3)
      * [4.1.1 Formatted output](strstream.html#Formatted_output)
      * [4.1.2 Unformatted output](strstream.html#Unformatted_output)
      * [4.1.3 Positioning](strstream.html#Positioning_2)
      * [4.1.4 Miscellaneous](strstream.html#Miscellaneous_2)
    * [4.2 Member classes](strstream.html#Member_classes_2)
  * [5 Inherited from std::basic_ios](strstream.html#Inherited_from_std::basic_ios)
    * [5.1 Member types](strstream.html#Member_types)
    * [5.2 Member functions](strstream.html#Member_functions_4)
      * [5.2.1 State functions](strstream.html#State_functions)
      * [5.2.2 Formatting](strstream.html#Formatting)
      * [5.2.3 Miscellaneous](strstream.html#Miscellaneous_3)
  * [6 Inherited from std::ios_base](strstream.html#Inherited_from_std::ios_base)
    * [6.1 Member functions](strstream.html#Member_functions_5)
      * [6.1.1 Formatting](strstream.html#Formatting_2)
      * [6.1.2 Locales](strstream.html#Locales)
      * [6.1.3 Internal extensible array](strstream.html#Internal_extensible_array)
      * [6.1.4 Miscellaneous](strstream.html#Miscellaneous_4)
      * [6.1.5 Member classes](strstream.html#Member_classes_3)
    * [6.2 Member types and constants](strstream.html#Member_types_and_constants)

  
---  
  
### Notes

After any call to [str()](strstream/str.html "cpp/io/strstream/str"), a call to [freeze(false)](strstream/freeze.html "cpp/io/strstream/freeze") is required to allow the destructor to deallocate the buffer as necessary. 

Before any call to [str()](strstream/str.html "cpp/io/strstream/str") that uses the result as a C-string, the buffer must be null-terminated, typically with [std::ends](manip/ends.html "cpp/io/manip/ends"). 

`strstream` has been deprecated since C++98 and removed since C++26. [std::stringstream](basic_stringstream.html "cpp/io/basic stringstream"), [`std::spanstream`](basic_spanstream.html "cpp/io/basic spanstream")(since C++23), and [`boost::iostreams::array`](https://www.boost.org/doc/libs/release/libs/iostreams/doc/classes/array.html#array) are the recommended replacements. 

### Member functions

[ (constructor)](strstream/strstream.html "cpp/io/strstream/strstream") |  constructs a `strstream` object, optionally allocating the buffer   
(public member function)   
---|---  
[ (destructor)](strstream/~strstream.html "cpp/io/strstream/~strstream")[virtual] |  destructs a `strstream` object, optionally deallocating the buffer   
(virtual public member function)   
[ rdbuf](strstream/rdbuf.html "cpp/io/strstream/rdbuf") |  obtains a pointer to the associated `strstreambuf`   
(public member function)   
[ str](strstream/str.html "cpp/io/strstream/str") |  accesses the output buffer   
(public member function)   
[ freeze](strstream/freeze.html "cpp/io/strstream/freeze") |  disables/enables automatic reallocation   
(public member function)   
[ pcount](strstream/pcount.html "cpp/io/strstream/pcount") |  obtains the number of characters written   
(public member function)   
  
##  Inherited from [std::basic_istream](basic_istream.html "cpp/io/basic istream")

###  Member functions

#####  Formatted input   
  
---  
[ operator>>](basic_istream/operator_gtgt.html "cpp/io/basic istream/operator gtgt") |  extracts formatted data   
(public member function of `std::basic_istream<CharT,Traits>`)   
  
#####  Unformatted input   
  
[ get](basic_istream/get.html "cpp/io/basic istream/get") |  extracts characters   
(public member function of `std::basic_istream<CharT,Traits>`)   
[ peek](basic_istream/peek.html "cpp/io/basic istream/peek") |  reads the next character without extracting it   
(public member function of `std::basic_istream<CharT,Traits>`)   
[ unget](basic_istream/unget.html "cpp/io/basic istream/unget") |  unextracts a character   
(public member function of `std::basic_istream<CharT,Traits>`)   
[ putback](basic_istream/putback.html "cpp/io/basic istream/putback") |  puts a character into input stream   
(public member function of `std::basic_istream<CharT,Traits>`)   
[ getline](basic_istream/getline.html "cpp/io/basic istream/getline") |  extracts characters until the given character is found   
(public member function of `std::basic_istream<CharT,Traits>`)   
[ ignore](basic_istream/ignore.html "cpp/io/basic istream/ignore") |  extracts and discards characters until the given character is found   
(public member function of `std::basic_istream<CharT,Traits>`)   
[ read](basic_istream/read.html "cpp/io/basic istream/read") |  extracts blocks of characters   
(public member function of `std::basic_istream<CharT,Traits>`)   
[ readsome](basic_istream/readsome.html "cpp/io/basic istream/readsome") |  extracts already available blocks of characters   
(public member function of `std::basic_istream<CharT,Traits>`)   
[ gcount](basic_istream/gcount.html "cpp/io/basic istream/gcount") |  returns number of characters extracted by last unformatted input operation   
(public member function of `std::basic_istream<CharT,Traits>`)   
  
#####  Positioning   
  
[ tellg](basic_istream/tellg.html "cpp/io/basic istream/tellg") |  returns the input position indicator   
(public member function of `std::basic_istream<CharT,Traits>`)   
[ seekg](basic_istream/seekg.html "cpp/io/basic istream/seekg") |  sets the input position indicator   
(public member function of `std::basic_istream<CharT,Traits>`)   
  
#####  Miscellaneous   
  
[ sync](basic_istream/sync.html "cpp/io/basic istream/sync") |  synchronizes with the underlying storage device   
(public member function of `std::basic_istream<CharT,Traits>`)   
  
###  Member classes

[ sentry](basic_istream/sentry.html "cpp/io/basic istream/sentry") |  implements basic logic for preparation of the stream for input operations   
(public member class of `std::basic_istream<CharT,Traits>`)   
---|---  
  
##  Inherited from [std::basic_ostream](basic_ostream.html "cpp/io/basic ostream")

###  Member functions

#####  Formatted output   
  
---  
[ operator<<](basic_ostream/operator_ltlt.html "cpp/io/basic ostream/operator ltlt") |  inserts formatted data   
(public member function of `std::basic_ostream<CharT,Traits>`)   
  
#####  Unformatted output   
  
[ put](basic_ostream/put.html "cpp/io/basic ostream/put") |  inserts a character   
(public member function of `std::basic_ostream<CharT,Traits>`)   
[ write](basic_ostream/write.html "cpp/io/basic ostream/write") |  inserts blocks of characters   
(public member function of `std::basic_ostream<CharT,Traits>`)   
  
#####  Positioning   
  
[ tellp](basic_ostream/tellp.html "cpp/io/basic ostream/tellp") |  returns the output position indicator   
(public member function of `std::basic_ostream<CharT,Traits>`)   
[ seekp](basic_ostream/seekp.html "cpp/io/basic ostream/seekp") |  sets the output position indicator   
(public member function of `std::basic_ostream<CharT,Traits>`)   
  
#####  Miscellaneous   
  
[ flush](basic_ostream/flush.html "cpp/io/basic ostream/flush") |  synchronizes with the underlying storage device   
(public member function of `std::basic_ostream<CharT,Traits>`)   
  
###  Member classes

[ sentry](basic_ostream/sentry.html "cpp/io/basic ostream/sentry") |  implements basic logic for preparation of the stream for output operations   
(public member class of `std::basic_ostream<CharT,Traits>`)   
---|---  
  
##  Inherited from [std::basic_ios](basic_ios.html "cpp/io/basic ios")

###  Member types

Member type  |  Definition   
---|---  
`char_type` |  `CharT`  
`traits_type` |  `Traits`  
`int_type` |  `Traits::int_type`  
`pos_type` |  `Traits::pos_type`  
`off_type` |  `Traits::off_type`  
  
###  Member functions

#####  State functions   
  
---  
[ good](basic_ios/good.html "cpp/io/basic ios/good") |  checks if no error has occurred i.e. I/O operations are available   
(public member function of `std::basic_ios<CharT,Traits>`)   
[ eof](basic_ios/eof.html "cpp/io/basic ios/eof") |  checks if end-of-file has been reached   
(public member function of `std::basic_ios<CharT,Traits>`)   
[ fail](basic_ios/fail.html "cpp/io/basic ios/fail") |  checks if an error has occurred   
(public member function of `std::basic_ios<CharT,Traits>`)   
[ bad](basic_ios/bad.html "cpp/io/basic ios/bad") |  checks if a non-recoverable error has occurred   
(public member function of `std::basic_ios<CharT,Traits>`)   
[ operator!](basic_ios/operator!.html "cpp/io/basic ios/operator!") |  checks if an error has occurred (synonym of [fail()](basic_ios/fail.html "cpp/io/basic ios/fail"))   
(public member function of `std::basic_ios<CharT,Traits>`)   
[ operator bool](basic_ios/operator_bool.html "cpp/io/basic ios/operator bool") |  checks if no error has occurred (synonym of `!`[fail()](basic_ios/fail.html "cpp/io/basic ios/fail"))   
(public member function of `std::basic_ios<CharT,Traits>`)   
[ rdstate](basic_ios/rdstate.html "cpp/io/basic ios/rdstate") |  returns state flags   
(public member function of `std::basic_ios<CharT,Traits>`)   
[ setstate](basic_ios/setstate.html "cpp/io/basic ios/setstate") |  sets state flags   
(public member function of `std::basic_ios<CharT,Traits>`)   
[ clear](basic_ios/clear.html "cpp/io/basic ios/clear") |  modifies state flags   
(public member function of `std::basic_ios<CharT,Traits>`)   
  
#####  Formatting   
  
[ copyfmt](basic_ios/copyfmt.html "cpp/io/basic ios/copyfmt") |  copies formatting information   
(public member function of `std::basic_ios<CharT,Traits>`)   
[ fill](basic_ios/fill.html "cpp/io/basic ios/fill") |  manages the fill character   
(public member function of `std::basic_ios<CharT,Traits>`)   
  
#####  Miscellaneous   
  
[ exceptions](basic_ios/exceptions.html "cpp/io/basic ios/exceptions") |  manages exception mask   
(public member function of `std::basic_ios<CharT,Traits>`)   
[ imbue](basic_ios/imbue.html "cpp/io/basic ios/imbue") |  sets the locale   
(public member function of `std::basic_ios<CharT,Traits>`)   
[ rdbuf](basic_ios/rdbuf.html "cpp/io/basic ios/rdbuf") |  manages associated stream buffer   
(public member function of `std::basic_ios<CharT,Traits>`)   
[ tie](basic_ios/tie.html "cpp/io/basic ios/tie") |  manages tied stream   
(public member function of `std::basic_ios<CharT,Traits>`)   
[ narrow](basic_ios/narrow.html "cpp/io/basic ios/narrow") |  narrows characters   
(public member function of `std::basic_ios<CharT,Traits>`)   
[ widen](basic_ios/widen.html "cpp/io/basic ios/widen") |  widens characters   
(public member function of `std::basic_ios<CharT,Traits>`)   
  
##  Inherited from [std::ios_base](ios_base.html "cpp/io/ios base")

###  Member functions

#####  Formatting   
  
---  
[ flags](ios_base/flags.html "cpp/io/ios base/flags") |  manages format flags   
(public member function of `std::ios_base`)   
[ setf](ios_base/setf.html "cpp/io/ios base/setf") |  sets specific format flag   
(public member function of `std::ios_base`)   
[ unsetf](ios_base/unsetf.html "cpp/io/ios base/unsetf") |  clears specific format flag   
(public member function of `std::ios_base`)   
[ precision](ios_base/precision.html "cpp/io/ios base/precision") |  manages decimal precision of floating point operations   
(public member function of `std::ios_base`)   
[ width](ios_base/width.html "cpp/io/ios base/width") |  manages field width   
(public member function of `std::ios_base`)   
  
#####  Locales   
  
[ imbue](ios_base/imbue.html "cpp/io/ios base/imbue") |  sets locale   
(public member function of `std::ios_base`)   
[ getloc](ios_base/getloc.html "cpp/io/ios base/getloc") |  returns current locale   
(public member function of `std::ios_base`)   
  
#####  Internal extensible array   
  
[ xalloc](ios_base/xalloc.html "cpp/io/ios base/xalloc")[static] |  returns a program-wide unique integer that is safe to use as index to [`pword()`](ios_base/pword.html "cpp/io/ios base/pword") and [`iword()`](ios_base/iword.html "cpp/io/ios base/iword")   
(public static member function of `std::ios_base`)   
[ iword](ios_base/iword.html "cpp/io/ios base/iword") |  resizes the private storage if necessary and access to the long element at the given index   
(public member function of `std::ios_base`)   
[ pword](ios_base/pword.html "cpp/io/ios base/pword") |  resizes the private storage if necessary and access to the void* element at the given index   
(public member function of `std::ios_base`)   
  
#####  Miscellaneous   
  
[ register_callback](ios_base/register_callback.html "cpp/io/ios base/register callback") |  registers event callback function   
(public member function of `std::ios_base`)   
[ sync_with_stdio](ios_base/sync_with_stdio.html "cpp/io/ios base/sync with stdio")[static] |  sets whether C++ and C I/O libraries are interoperable   
(public static member function of `std::ios_base`)   
  
#####  Member classes   
  
[ failure](ios_base/failure.html "cpp/io/ios base/failure") |  stream exception   
(public member class of `std::ios_base`)   
[ Init](ios_base/Init.html "cpp/io/ios base/Init") |  initializes standard stream objects   
(public member class of `std::ios_base`)   
  
###  Member types and constants  
  
---  
Type  |  Explanation   
[ openmode](ios_base/openmode.html "cpp/io/ios base/openmode") |  stream open mode type The following constants are also defined:  |  Constant  |  Explanation  
---|---  
[`app`](ios_base/openmode.html "cpp/io/ios base/openmode") |  seek to the end of stream before each write  
[`binary`](ios_base/openmode.html "cpp/io/ios base/openmode") |  open in [binary mode](c/FILE.html#Binary_and_text_modes "cpp/io/c/FILE")  
[`in`](ios_base/openmode.html "cpp/io/ios base/openmode") |  open for reading  
[`out`](ios_base/openmode.html "cpp/io/ios base/openmode") |  open for writing  
[`trunc`](ios_base/openmode.html "cpp/io/ios base/openmode") |  discard the contents of the stream when opening  
[`ate`](ios_base/openmode.html "cpp/io/ios base/openmode") |  seek to the end of stream immediately after open  
[`noreplace`](ios_base/openmode.html "cpp/io/ios base/openmode") (C++23) |  open in exclusive mode  
  
(typedef)   
[ fmtflags](ios_base/fmtflags.html "cpp/io/ios base/fmtflags") |  formatting flags type The following constants are also defined:  |  Constant  |  Explanation  
---|---  
[`dec`](ios_base/fmtflags.html "cpp/io/ios base/fmtflags") |  use decimal base for integer I/O: see [std::dec](manip/hex.html "cpp/io/manip/hex")  
[`oct`](ios_base/fmtflags.html "cpp/io/ios base/fmtflags") |  use octal base for integer I/O: see [std::oct](manip/hex.html "cpp/io/manip/hex")  
[`hex`](ios_base/fmtflags.html "cpp/io/ios base/fmtflags") |  use hexadecimal base for integer I/O: see [std::hex](manip/hex.html "cpp/io/manip/hex")  
[`basefield`](ios_base/fmtflags.html "cpp/io/ios base/fmtflags") |  dec | oct | hex. Useful for masking operations  
[`left`](ios_base/fmtflags.html "cpp/io/ios base/fmtflags") |  left adjustment (adds fill characters to the right): see [std::left](manip/left.html "cpp/io/manip/left")  
[`right`](ios_base/fmtflags.html "cpp/io/ios base/fmtflags") |  right adjustment (adds fill characters to the left): see [std::right](manip/left.html "cpp/io/manip/left")  
[`internal`](ios_base/fmtflags.html "cpp/io/ios base/fmtflags") |  internal adjustment (adds fill characters to the internal designated point): see [std::internal](manip/left.html "cpp/io/manip/left")  
[`adjustfield`](ios_base/fmtflags.html "cpp/io/ios base/fmtflags") |  left | right | internal. Useful for masking operations  
[`scientific`](ios_base/fmtflags.html "cpp/io/ios base/fmtflags") |  generate floating point types using scientific notation, or hex notation if combined with fixed: see [std::scientific](manip/fixed.html "cpp/io/manip/fixed")  
[`fixed`](ios_base/fmtflags.html "cpp/io/ios base/fmtflags") |  generate floating point types using fixed notation, or hex notation if combined with scientific: see [std::fixed](manip/fixed.html "cpp/io/manip/fixed")  
[`floatfield`](ios_base/fmtflags.html "cpp/io/ios base/fmtflags") |  scientific | fixed. Useful for masking operations  
[`boolalpha`](ios_base/fmtflags.html "cpp/io/ios base/fmtflags") |  insert and extract bool type in alphanumeric format: see [std::boolalpha](manip/boolalpha.html "cpp/io/manip/boolalpha")  
[`showbase`](ios_base/fmtflags.html "cpp/io/ios base/fmtflags") |  generate a prefix indicating the numeric base for integer output, require the currency indicator in monetary I/O: see [std::showbase](manip/showbase.html "cpp/io/manip/showbase")  
[`showpoint`](ios_base/fmtflags.html "cpp/io/ios base/fmtflags") |  generate a decimal-point character unconditionally for floating-point number output: see [std::showpoint](manip/showpoint.html "cpp/io/manip/showpoint")  
[`showpos`](ios_base/fmtflags.html "cpp/io/ios base/fmtflags") |  generate a + character for non-negative numeric output: see [std::showpos](manip/showpos.html "cpp/io/manip/showpos")  
[`skipws`](ios_base/fmtflags.html "cpp/io/ios base/fmtflags") |  skip leading whitespace before certain input operations: see [std::skipws](manip/skipws.html "cpp/io/manip/skipws")  
[`unitbuf`](ios_base/fmtflags.html "cpp/io/ios base/fmtflags") |  flush the output after each output operation: see [std::unitbuf](manip/unitbuf.html "cpp/io/manip/unitbuf")  
[`uppercase`](ios_base/fmtflags.html "cpp/io/ios base/fmtflags") |  replace certain lowercase letters with their uppercase equivalents in certain output operations: see [std::uppercase](manip/uppercase.html "cpp/io/manip/uppercase")  
  
(typedef)   
[ iostate](ios_base/iostate.html "cpp/io/ios base/iostate") |  state of the stream type The following constants are also defined:  |  Constant  |  Explanation  
---|---  
[`goodbit`](ios_base/iostate.html "cpp/io/ios base/iostate") |  no error  
[`badbit`](ios_base/iostate.html "cpp/io/ios base/iostate") |  irrecoverable stream error  
[`failbit`](ios_base/iostate.html "cpp/io/ios base/iostate") |  input/output operation failed (formatting or extraction error)  
[`eofbit`](ios_base/iostate.html "cpp/io/ios base/iostate") |  associated input sequence has reached end-of-file  
  
(typedef)   
[ seekdir](ios_base/seekdir.html "cpp/io/ios base/seekdir") |  seeking direction type The following constants are also defined:  |  Constant  |  Explanation  
---|---  
[`beg`](ios_base/seekdir.html "cpp/io/ios base/seekdir") |  the beginning of a stream  
[`end`](ios_base/seekdir.html "cpp/io/ios base/seekdir") |  the ending of a stream  
[`cur`](ios_base/seekdir.html "cpp/io/ios base/seekdir") |  the current position of stream position indicator  
  
(typedef)   
[ event](ios_base/event.html "cpp/io/ios base/event") |  specifies event type   
(enum)   
[ event_callback](ios_base/event_callback.html "cpp/io/ios base/event callback") |  callback function type   
(typedef) 
