
  


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
**basic_ios**  
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
  


**`std::basic_ios`**

Member functions  
---  
[basic_ios::basic_ios](basic_ios/basic_ios.html "cpp/io/basic ios/basic ios")  
[basic_ios::~basic_ios](basic_ios/~basic_ios.html "cpp/io/basic ios/~basic ios")  
State functions  
[basic_ios::good](basic_ios/good.html "cpp/io/basic ios/good")  
[basic_ios::eof](basic_ios/eof.html "cpp/io/basic ios/eof")  
[basic_ios::fail](basic_ios/fail.html "cpp/io/basic ios/fail")  
[basic_ios::bad](basic_ios/bad.html "cpp/io/basic ios/bad")  
[basic_ios::operator!](basic_ios/operator!.html "cpp/io/basic ios/operator!")  
[basic_ios::operator bool](basic_ios/operator_bool.html "cpp/io/basic ios/operator bool")  
[basic_ios::rdstate](basic_ios/rdstate.html "cpp/io/basic ios/rdstate")  
[basic_ios::setstate](basic_ios/setstate.html "cpp/io/basic ios/setstate")  
[basic_ios::clear](basic_ios/clear.html "cpp/io/basic ios/clear")  
Formatting  
[basic_ios::copyfmt](basic_ios/copyfmt.html "cpp/io/basic ios/copyfmt")  
[basic_ios::fill](basic_ios/fill.html "cpp/io/basic ios/fill")  
Miscellaneous  
[basic_ios::exceptions](basic_ios/exceptions.html "cpp/io/basic ios/exceptions")  
[basic_ios::imbue](basic_ios/imbue.html "cpp/io/basic ios/imbue")  
[basic_ios::rdbuf](basic_ios/rdbuf.html "cpp/io/basic ios/rdbuf")  
[basic_ios::tie](basic_ios/tie.html "cpp/io/basic ios/tie")  
[basic_ios::narrow](basic_ios/narrow.html "cpp/io/basic ios/narrow")  
[basic_ios::widen](basic_ios/widen.html "cpp/io/basic ios/widen")  
Protected member functions  
[basic_ios::init](basic_ios/init.html "cpp/io/basic ios/init")  
[basic_ios::move](basic_ios/move.html "cpp/io/basic ios/move")(C++11)  
[basic_ios::swap](basic_ios/swap.html "cpp/io/basic ios/swap")(C++11)  
[basic_ios::set_rdbuf](basic_ios/set_rdbuf.html "cpp/io/basic ios/set rdbuf")(C++11)  
  


Defined in header `[<ios>](../header/ios.html "cpp/header/ios")` |  |   
---|---|---  
template<  
class CharT,  
class Traits = [std::char_traits](../string/char_traits.html)<CharT>  
> class basic_ios  
: public [std::ios_base](ios_base.html) |  |   
| |   
  
The class `std::basic_ios` provides facilities for interfacing with objects that have [std::basic_streambuf](basic_streambuf.html "cpp/io/basic streambuf") interface. Several `std::basic_ios` objects can refer to one actual `std::basic_streambuf` object. 

![std-basic ios-inheritance.svg](https://upload.cppreference.com/mwiki/images/2/28/std-basic_ios-inheritance.svg)

Inheritance diagram

Several typedefs for common character types are provided: 

Defined in header `[<ios>](../header/ios.html "cpp/header/ios")`  
---  
Type  |  Definition   
`std::ios` |  std::basic_ios<char>  
`std::wios` |  std::basic_ios<wchar_t>  
  
## Contents

  * [1 Member types](basic_ios.html#Member_types)
  * [2 Public member functions](basic_ios.html#Public_member_functions)
    * [2.1 State functions](basic_ios.html#State_functions)
    * [2.2 Formatting](basic_ios.html#Formatting)
    * [2.3 Miscellaneous](basic_ios.html#Miscellaneous)
  * [3 Protected member functions](basic_ios.html#Protected_member_functions)
  * [4 Inherited from std::ios_base](basic_ios.html#Inherited_from_std::ios_base)
    * [4.1 Member functions](basic_ios.html#Member_functions)
      * [4.1.1 Formatting](basic_ios.html#Formatting_2)
      * [4.1.2 Locales](basic_ios.html#Locales)
      * [4.1.3 Internal extensible array](basic_ios.html#Internal_extensible_array)
      * [4.1.4 Miscellaneous](basic_ios.html#Miscellaneous_2)
      * [4.1.5 Member classes](basic_ios.html#Member_classes)
    * [4.2 Member types and constants](basic_ios.html#Member_types_and_constants)
    * [4.3 Notes](basic_ios.html#Notes)

  
---  
  
### Member types

Member type  |  Definition   
---|---  
`char_type` |  `CharT`  
`traits_type` |  `Traits`; the program is ill-formed if `Traits::char_type` is not `CharT`.  
`int_type` |  `Traits::int_type`  
`pos_type` |  `Traits::pos_type`  
`off_type` |  `Traits::off_type`  
  
### Public member functions

[ (constructor)](basic_ios/basic_ios.html "cpp/io/basic ios/basic ios") |  constructs the object   
(public member function)   
---|---  
[ (destructor)](basic_ios/~basic_ios.html "cpp/io/basic ios/~basic ios")[virtual] |  destructs the object   
(virtual public member function)   
operator= |  the copy assignment operator is deleted   
(public member function)  
  
#####  State functions   
  
[ good](basic_ios/good.html "cpp/io/basic ios/good") |  checks if no error has occurred i.e. I/O operations are available   
(public member function)   
[ eof](basic_ios/eof.html "cpp/io/basic ios/eof") |  checks if end-of-file has been reached   
(public member function)   
[ fail](basic_ios/fail.html "cpp/io/basic ios/fail") |  checks if an error has occurred   
(public member function)   
[ bad](basic_ios/bad.html "cpp/io/basic ios/bad") |  checks if a non-recoverable error has occurred   
(public member function)   
[ operator!](basic_ios/operator!.html "cpp/io/basic ios/operator!") |  checks if an error has occurred (synonym of [fail()](basic_ios/fail.html "cpp/io/basic ios/fail"))   
(public member function)   
[ operator bool](basic_ios/operator_bool.html "cpp/io/basic ios/operator bool") |  checks if no error has occurred (synonym of `!`[fail()](basic_ios/fail.html "cpp/io/basic ios/fail"))   
(public member function)   
[ rdstate](basic_ios/rdstate.html "cpp/io/basic ios/rdstate") |  returns state flags   
(public member function)   
[ setstate](basic_ios/setstate.html "cpp/io/basic ios/setstate") |  sets state flags   
(public member function)   
[ clear](basic_ios/clear.html "cpp/io/basic ios/clear") |  modifies state flags   
(public member function)   
  
#####  Formatting   
  
[ copyfmt](basic_ios/copyfmt.html "cpp/io/basic ios/copyfmt") |  copies formatting information   
(public member function)   
[ fill](basic_ios/fill.html "cpp/io/basic ios/fill") |  manages the fill character   
(public member function)   
  
#####  Miscellaneous   
  
[ exceptions](basic_ios/exceptions.html "cpp/io/basic ios/exceptions") |  manages exception mask   
(public member function)   
[ imbue](basic_ios/imbue.html "cpp/io/basic ios/imbue") |  sets the locale   
(public member function)   
[ rdbuf](basic_ios/rdbuf.html "cpp/io/basic ios/rdbuf") |  manages associated stream buffer   
(public member function)   
[ tie](basic_ios/tie.html "cpp/io/basic ios/tie") |  manages tied stream   
(public member function)   
[ narrow](basic_ios/narrow.html "cpp/io/basic ios/narrow") |  narrows characters   
(public member function)   
[ widen](basic_ios/widen.html "cpp/io/basic ios/widen") |  widens characters   
(public member function)   
  
### Protected member functions

[ init](basic_ios/init.html "cpp/io/basic ios/init") |  initializes a default-constructed **std::basic_ios**   
(protected member function)   
---|---  
[ move](basic_ios/move.html "cpp/io/basic ios/move")(C++11) |  moves from another **std::basic_ios** except for `rdbuf`   
(protected member function)   
[ swap](basic_ios/swap.html "cpp/io/basic ios/swap")(C++11) |  swaps with another **std::basic_ios** except for `rdbuf`   
(protected member function)   
[ set_rdbuf](basic_ios/set_rdbuf.html "cpp/io/basic ios/set rdbuf") |  replaces the `rdbuf` without clearing its error state   
(protected member function)   
  
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
  
### Notes

Straightforward implementation of `std::basic_ios` stores only the following members (which all depend on the template parameters and thus cannot be part of [std::ios_base](ios_base.html "cpp/io/ios base")): 

  * the fill character (see [`fill()`](basic_ios/fill.html "cpp/io/basic ios/fill")) 
  * the tied stream pointer (see [`tie()`](basic_ios/tie.html "cpp/io/basic ios/tie")) 
  * the associated stream buffer pointer (see [`rdbuf()`](basic_ios/rdbuf.html "cpp/io/basic ios/rdbuf")). 



Actual implementations vary: 

Microsoft Visual Studio stores just those three members. 

LLVM libc++ stores 1 less member: it maintains the `rdbuf` pointer as a void* member of `ios_base`. 

GNU libstdc++ stores 4 additional members: three cached facets and a flag to indicate that fill was initialized. 
