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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/navbar_content&action=edit)

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
**ios_base**  
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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/navbar_content&action=edit)

**`std::ios_base`**

Member functions  
---  
[ios_base::ios_base](ios_base/ios_base.html "cpp/io/ios base/ios base")  
[ios_base::~ios_base](ios_base/~ios_base.html "cpp/io/ios base/~ios base")  
[ios_base::operator=](ios_base/operator=.html "cpp/io/ios base/operator=")  
Formatting  
[ios_base::flags](ios_base/flags.html "cpp/io/ios base/flags")  
[ios_base::setf](ios_base/setf.html "cpp/io/ios base/setf")  
[ios_base::unsetf](ios_base/unsetf.html "cpp/io/ios base/unsetf")  
[ios_base::precision](ios_base/precision.html "cpp/io/ios base/precision")  
[ios_base::width](ios_base/width.html "cpp/io/ios base/width")  
Locales  
[ios_base::imbue](ios_base/imbue.html "cpp/io/ios base/imbue")  
[ios_base::getloc](ios_base/getloc.html "cpp/io/ios base/getloc")  
Internal extensible array  
[ios_base::xalloc](ios_base/xalloc.html "cpp/io/ios base/xalloc")  
[ios_base::iword](ios_base/iword.html "cpp/io/ios base/iword")  
[ios_base::pword](ios_base/pword.html "cpp/io/ios base/pword")  
Miscellaneous  
[ios_base::register_callback](ios_base/register_callback.html "cpp/io/ios base/register callback")  
[ios_base::sync_with_stdio](ios_base/sync_with_stdio.html "cpp/io/ios base/sync with stdio")  
Member classes  
[ios_base::failure](ios_base/failure.html "cpp/io/ios base/failure")  
[ios_base::Init](ios_base/Init.html "cpp/io/ios base/Init")  
Member types  
[ios_base::openmode](ios_base/openmode.html "cpp/io/ios base/openmode")  
[ios_base::fmtflags](ios_base/fmtflags.html "cpp/io/ios base/fmtflags")  
[ios_base::iostate](ios_base/iostate.html "cpp/io/ios base/iostate")  
[ios_base::seekdir](ios_base/seekdir.html "cpp/io/ios base/seekdir")  
[ios_base::event](ios_base/event.html "cpp/io/ios base/event")  
[ios_base::event_callback](ios_base/event_callback.html "cpp/io/ios base/event callback")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/navbar_content&action=edit)

Defined in header `[<ios>](../header/ios.html "cpp/header/ios")` |  |   
---|---|---  
class ios_base; |  |   
| |   
  
The class `ios_base` is a multipurpose class that serves as the base class for all I/O stream classes. It maintains several kinds of data: 

1) state information: stream status flags.

2) control information: flags that control formatting of both input and output sequences and the imbued locale.

3) private storage: indexed extensible data structure that allows both long and void* members, which may be implemented as two arbitrary-length arrays or a single array of two-element structs or another container.

4) callbacks: arbitrary number of user-defined functions to be called from [`imbue()`](ios_base/imbue.html "cpp/io/ios base/imbue"), [std::basic_ios::copyfmt()](basic_ios/copyfmt.html "cpp/io/basic ios/copyfmt"), and [`~ios_base()`](ios_base/~ios_base.html "cpp/io/ios base/~ios base").

Typical implementation holds member constants corresponding to all values of [`fmtflags`](ios_base/fmtflags.html "cpp/io/ios base/fmtflags"), [`iostate`](ios_base/iostate.html "cpp/io/ios base/iostate"), [`openmode`](ios_base/openmode.html "cpp/io/ios base/openmode"), and [`seekdir`](ios_base/seekdir.html "cpp/io/ios base/seekdir") shown below, member variables to maintain current precision, width, and formatting flags, the exception mask, the buffer error state, a resizeable container holding the callbacks, the currently imbued locale, the private storage, and a static integer variable for [`xalloc()`](ios_base/xalloc.html "cpp/io/ios base/xalloc"). 

## Contents

  * [1 Member functions](ios_base.html#Member_functions)
    * [1.1 Formatting](ios_base.html#Formatting)
    * [1.2 Locales](ios_base.html#Locales)
    * [1.3 Internal extensible array](ios_base.html#Internal_extensible_array)
    * [1.4 Miscellaneous](ios_base.html#Miscellaneous)
  * [2 Member classes](ios_base.html#Member_classes)
  * [3 Member types and constants](ios_base.html#Member_types_and_constants)
    * [3.1 Deprecated member types](ios_base.html#Deprecated_member_types)
  * [4 Defect reports](ios_base.html#Defect_reports)
  * [5 See also](ios_base.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/ios_base&action=edit&section=1 "Edit section: Member functions")] Member functions

[ (constructor)](ios_base/ios_base.html "cpp/io/ios base/ios base") |  constructs the object   
(protected member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_constructor&action=edit)  
---|---  
[ (destructor)](ios_base/~ios_base.html "cpp/io/ios base/~ios base")[virtual] |  destructs the object   
(virtual public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_destructor&action=edit)  
[ operator=](ios_base/operator=.html "cpp/io/ios base/operator=") |  assigns to the stream   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_operator%3D&action=edit)  
  
#####  Formatting   
  
[ flags](ios_base/flags.html "cpp/io/ios base/flags") |  manages format flags   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_flags&action=edit)  
[ setf](ios_base/setf.html "cpp/io/ios base/setf") |  sets specific format flag   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_setf&action=edit)  
[ unsetf](ios_base/unsetf.html "cpp/io/ios base/unsetf") |  clears specific format flag   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_unsetf&action=edit)  
[ precision](ios_base/precision.html "cpp/io/ios base/precision") |  manages decimal precision of floating point operations   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_precision&action=edit)  
[ width](ios_base/width.html "cpp/io/ios base/width") |  manages field width   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_width&action=edit)  
  
#####  Locales   
  
[ imbue](ios_base/imbue.html "cpp/io/ios base/imbue") |  sets locale   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_imbue&action=edit)  
[ getloc](ios_base/getloc.html "cpp/io/ios base/getloc") |  returns current locale   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_getloc&action=edit)  
  
#####  Internal extensible array   
  
[ xalloc](ios_base/xalloc.html "cpp/io/ios base/xalloc")[static] |  returns a program-wide unique integer that is safe to use as index to [`pword()`](ios_base/pword.html "cpp/io/ios base/pword") and [`iword()`](ios_base/iword.html "cpp/io/ios base/iword")   
(public static member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_xalloc&action=edit)  
[ iword](ios_base/iword.html "cpp/io/ios base/iword") |  resizes the private storage if necessary and access to the long element at the given index   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_iword&action=edit)  
[ pword](ios_base/pword.html "cpp/io/ios base/pword") |  resizes the private storage if necessary and access to the void* element at the given index   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_pword&action=edit)  
  
#####  Miscellaneous   
  
[ register_callback](ios_base/register_callback.html "cpp/io/ios base/register callback") |  registers event callback function   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_register_callback&action=edit)  
[ sync_with_stdio](ios_base/sync_with_stdio.html "cpp/io/ios base/sync with stdio")[static] |  sets whether C++ and C I/O libraries are interoperable   
(public static member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_sync_with_stdio&action=edit)  
  
###  Member classes  
  
[ failure](ios_base/failure.html "cpp/io/ios base/failure") |  stream exception   
(public member class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_failure&action=edit)  
[ Init](ios_base/Init.html "cpp/io/ios base/Init") |  initializes standard stream objects   
(public member class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_Init&action=edit)  
  
###  Member types and constants  
  
---  
Type  |  Explanation   
[ openmode](ios_base/openmode.html "cpp/io/ios base/openmode") |  stream open mode type The following constants are also defined:  |  Constant  |  Explanation[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_openmode&action=edit)  
---|---  
[`app`](ios_base/openmode.html "cpp/io/ios base/openmode") |  seek to the end of stream before each write[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_openmode&action=edit)  
[`binary`](ios_base/openmode.html "cpp/io/ios base/openmode") |  open in [binary mode](c/FILE.html#Binary_and_text_modes "cpp/io/c/FILE")[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_openmode&action=edit)  
[`in`](ios_base/openmode.html "cpp/io/ios base/openmode") |  open for reading[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_openmode&action=edit)  
[`out`](ios_base/openmode.html "cpp/io/ios base/openmode") |  open for writing[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_openmode&action=edit)  
[`trunc`](ios_base/openmode.html "cpp/io/ios base/openmode") |  discard the contents of the stream when opening[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_openmode&action=edit)  
[`ate`](ios_base/openmode.html "cpp/io/ios base/openmode") |  seek to the end of stream immediately after open[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_openmode&action=edit)  
[`noreplace`](ios_base/openmode.html "cpp/io/ios base/openmode") (C++23) |  open in exclusive mode[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_openmode&action=edit)  
  
(typedef) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_openmode&action=edit)  
[ fmtflags](ios_base/fmtflags.html "cpp/io/ios base/fmtflags") |  formatting flags type The following constants are also defined:  |  Constant  |  Explanation[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_fmtflags&action=edit)  
---|---  
[`dec`](ios_base/fmtflags.html "cpp/io/ios base/fmtflags") |  use decimal base for integer I/O: see [std::dec](manip/hex.html "cpp/io/manip/hex")[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_fmtflags&action=edit)  
[`oct`](ios_base/fmtflags.html "cpp/io/ios base/fmtflags") |  use octal base for integer I/O: see [std::oct](manip/hex.html "cpp/io/manip/hex")[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_fmtflags&action=edit)  
[`hex`](ios_base/fmtflags.html "cpp/io/ios base/fmtflags") |  use hexadecimal base for integer I/O: see [std::hex](manip/hex.html "cpp/io/manip/hex")[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_fmtflags&action=edit)  
[`basefield`](ios_base/fmtflags.html "cpp/io/ios base/fmtflags") |  dec | oct | hex. Useful for masking operations[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_fmtflags&action=edit)  
[`left`](ios_base/fmtflags.html "cpp/io/ios base/fmtflags") |  left adjustment (adds fill characters to the right): see [std::left](manip/left.html "cpp/io/manip/left")[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_fmtflags&action=edit)  
[`right`](ios_base/fmtflags.html "cpp/io/ios base/fmtflags") |  right adjustment (adds fill characters to the left): see [std::right](manip/left.html "cpp/io/manip/left")[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_fmtflags&action=edit)  
[`internal`](ios_base/fmtflags.html "cpp/io/ios base/fmtflags") |  internal adjustment (adds fill characters to the internal designated point): see [std::internal](manip/left.html "cpp/io/manip/left")[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_fmtflags&action=edit)  
[`adjustfield`](ios_base/fmtflags.html "cpp/io/ios base/fmtflags") |  left | right | internal. Useful for masking operations[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_fmtflags&action=edit)  
[`scientific`](ios_base/fmtflags.html "cpp/io/ios base/fmtflags") |  generate floating point types using scientific notation, or hex notation if combined with fixed: see [std::scientific](manip/fixed.html "cpp/io/manip/fixed")[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_fmtflags&action=edit)  
[`fixed`](ios_base/fmtflags.html "cpp/io/ios base/fmtflags") |  generate floating point types using fixed notation, or hex notation if combined with scientific: see [std::fixed](manip/fixed.html "cpp/io/manip/fixed")[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_fmtflags&action=edit)  
[`floatfield`](ios_base/fmtflags.html "cpp/io/ios base/fmtflags") |  scientific | fixed. Useful for masking operations[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_fmtflags&action=edit)  
[`boolalpha`](ios_base/fmtflags.html "cpp/io/ios base/fmtflags") |  insert and extract bool type in alphanumeric format: see [std::boolalpha](manip/boolalpha.html "cpp/io/manip/boolalpha")[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_fmtflags&action=edit)  
[`showbase`](ios_base/fmtflags.html "cpp/io/ios base/fmtflags") |  generate a prefix indicating the numeric base for integer output, require the currency indicator in monetary I/O: see [std::showbase](manip/showbase.html "cpp/io/manip/showbase")[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_fmtflags&action=edit)  
[`showpoint`](ios_base/fmtflags.html "cpp/io/ios base/fmtflags") |  generate a decimal-point character unconditionally for floating-point number output: see [std::showpoint](manip/showpoint.html "cpp/io/manip/showpoint")[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_fmtflags&action=edit)  
[`showpos`](ios_base/fmtflags.html "cpp/io/ios base/fmtflags") |  generate a + character for non-negative numeric output: see [std::showpos](manip/showpos.html "cpp/io/manip/showpos")[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_fmtflags&action=edit)  
[`skipws`](ios_base/fmtflags.html "cpp/io/ios base/fmtflags") |  skip leading whitespace before certain input operations: see [std::skipws](manip/skipws.html "cpp/io/manip/skipws")[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_fmtflags&action=edit)  
[`unitbuf`](ios_base/fmtflags.html "cpp/io/ios base/fmtflags") |  flush the output after each output operation: see [std::unitbuf](manip/unitbuf.html "cpp/io/manip/unitbuf")[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_fmtflags&action=edit)  
[`uppercase`](ios_base/fmtflags.html "cpp/io/ios base/fmtflags") |  replace certain lowercase letters with their uppercase equivalents in certain output operations: see [std::uppercase](manip/uppercase.html "cpp/io/manip/uppercase")[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_fmtflags&action=edit)  
  
(typedef) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_fmtflags&action=edit)  
[ iostate](ios_base/iostate.html "cpp/io/ios base/iostate") |  state of the stream type The following constants are also defined:  |  Constant  |  Explanation[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_iostate&action=edit)  
---|---  
[`goodbit`](ios_base/iostate.html "cpp/io/ios base/iostate") |  no error[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_iostate&action=edit)  
[`badbit`](ios_base/iostate.html "cpp/io/ios base/iostate") |  irrecoverable stream error[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_iostate&action=edit)  
[`failbit`](ios_base/iostate.html "cpp/io/ios base/iostate") |  input/output operation failed (formatting or extraction error)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_iostate&action=edit)  
[`eofbit`](ios_base/iostate.html "cpp/io/ios base/iostate") |  associated input sequence has reached end-of-file[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_iostate&action=edit)  
  
(typedef) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_iostate&action=edit)  
[ seekdir](ios_base/seekdir.html "cpp/io/ios base/seekdir") |  seeking direction type The following constants are also defined:  |  Constant  |  Explanation[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_seekdir&action=edit)  
---|---  
[`beg`](ios_base/seekdir.html "cpp/io/ios base/seekdir") |  the beginning of a stream[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_seekdir&action=edit)  
[`end`](ios_base/seekdir.html "cpp/io/ios base/seekdir") |  the ending of a stream[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_seekdir&action=edit)  
[`cur`](ios_base/seekdir.html "cpp/io/ios base/seekdir") |  the current position of stream position indicator[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_seekdir&action=edit)  
  
(typedef) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_seekdir&action=edit)  
[ event](ios_base/event.html "cpp/io/ios base/event") |  specifies event type   
(enum) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_event&action=edit)  
[ event_callback](ios_base/event_callback.html "cpp/io/ios base/event callback") |  callback function type   
(typedef) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_event_callback&action=edit)  
| 

#####  Deprecated member types   
  
---  
Type  |  Explanation   
`io_state` (deprecated) |  integer type that may be used like `iostate`  
`open_mode` (deprecated) |  integer type that may be used like `openmode`  
`seek_dir` (deprecated) |  integer type that may be used like `seekdir`  
`streamoff` (deprecated) |  unspecified type that may be used like `off_type`, not necessarily [std::streamoff](streamoff.html "cpp/io/streamoff")  
`streampos` (deprecated) |  unspecified type that may be used like `pos_type`, not necessarily [std::streampos](fpos.html "cpp/io/fpos")  
(until C++17)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/ios_base&action=edit&section=2 "Edit section: Defect reports")] Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 1357](https://cplusplus.github.io/LWG/issue1357)  
([N3110](https://wg21.link/N3110))  | C++98  | `std::ios_base` defined operator~, operator&  
and operator| for types `openmode`, `fmtflags` and  
`iostate`, violating the requirements of [BitmaskType](../named_req/BitmaskType.html "cpp/named req/BitmaskType")[[1]](ios_base.html#cite_note-1) | removed these definitions   
  
  1. [↑](ios_base.html#cite_ref-1) A [BitmaskType](../named_req/BitmaskType.html "cpp/named req/BitmaskType") needs to support bitwise opertaions on its own. The bitwise operation support should not be provided externally.



### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/ios_base&action=edit&section=3 "Edit section: See also")] See also

[ basic_ios](basic_ios.html "cpp/io/basic ios") |  manages an arbitrary stream buffer   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_basic_ios&action=edit)  
---|---
