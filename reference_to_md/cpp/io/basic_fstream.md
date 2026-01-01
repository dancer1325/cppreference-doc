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
[ios_base](ios_base.html "cpp/io/ios base")  
[basic_ios](basic_ios.html "cpp/io/basic ios")  
[basic_istream](basic_istream.html "cpp/io/basic istream")  
[basic_ostream](basic_ostream.html "cpp/io/basic ostream")  
[basic_iostream](basic_iostream.html "cpp/io/basic iostream")  
File I/O  
[basic_ifstream](basic_ifstream.html "cpp/io/basic ifstream")  
[basic_ofstream](basic_ofstream.html "cpp/io/basic ofstream")  
**basic_fstream**  
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

**`std::basic_fstream`**

Member functions  
---  
[basic_fstream::basic_fstream](basic_fstream/basic_fstream.html "cpp/io/basic fstream/basic fstream")  
[basic_fstream::operator=](basic_fstream/operator=.html "cpp/io/basic fstream/operator=")(C++11)  
[basic_fstream::swap](basic_fstream/swap.html "cpp/io/basic fstream/swap")(C++11)  
[basic_fstream::rdbuf](basic_fstream/rdbuf.html "cpp/io/basic fstream/rdbuf")  
[basic_fstream::native_handle](basic_fstream/native_handle.html "cpp/io/basic fstream/native handle")(C++26)  
File operations  
[basic_fstream::is_open](basic_fstream/is_open.html "cpp/io/basic fstream/is open")  
[basic_fstream::open](basic_fstream/open.html "cpp/io/basic fstream/open")  
[basic_fstream::close](basic_fstream/close.html "cpp/io/basic fstream/close")  
Non-member functions  
[swap(std::basic_fstream)](basic_fstream/swap2.html "cpp/io/basic fstream/swap2")(C++11)  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_fstream/navbar_content&action=edit)

Defined in header `[<fstream>](../header/fstream.html "cpp/header/fstream")` |  |   
---|---|---  
template<  
class CharT,  
class Traits = [std::char_traits](../string/char_traits.html)<CharT>  
> class basic_fstream : public [std::basic_iostream](basic_iostream.html)<CharT, Traits> |  |   
| |   
  
The class template `basic_fstream` implements high-level input/output operations on file based streams. It interfaces a file-based streambuffer ([std::basic_filebuf](basic_filebuf.html "cpp/io/basic filebuf")) with the high-level interface of ([std::basic_iostream](basic_iostream.html "cpp/io/basic iostream")). 

A typical implementation of `std::basic_fstream` holds only one non-derived data member: an instance of [std::basic_filebuf](basic_filebuf.html)<CharT, Traits>. 

![std-basic fstream-inheritance.svg](https://upload.cppreference.com/mwiki/images/f/f1/std-basic_fstream-inheritance.svg)

Inheritance diagram

Several typedefs for common character types are provided: 

Defined in header `[<fstream>](../header/fstream.html "cpp/header/fstream")`  
---  
Type  |  Definition   
`std::fstream` |  std::basic_fstream<char>  
`std::wfstream` |  std::basic_fstream<wchar_t>  
  
## Contents

  * [1 Member types](basic_fstream.html#Member_types)
  * [2 Member functions](basic_fstream.html#Member_functions)
    * [2.1 File operations](basic_fstream.html#File_operations)
  * [3 Non-member functions](basic_fstream.html#Non-member_functions)
  * [4 Inherited from std::basic_istream](basic_fstream.html#Inherited_from_std::basic_istream)
    * [4.1 Member functions](basic_fstream.html#Member_functions_2)
      * [4.1.1 Formatted input](basic_fstream.html#Formatted_input)
      * [4.1.2 Unformatted input](basic_fstream.html#Unformatted_input)
      * [4.1.3 Positioning](basic_fstream.html#Positioning)
      * [4.1.4 Miscellaneous](basic_fstream.html#Miscellaneous)
    * [4.2 Member classes](basic_fstream.html#Member_classes)
  * [5 Inherited from std::basic_ostream](basic_fstream.html#Inherited_from_std::basic_ostream)
    * [5.1 Member functions](basic_fstream.html#Member_functions_3)
      * [5.1.1 Formatted output](basic_fstream.html#Formatted_output)
      * [5.1.2 Unformatted output](basic_fstream.html#Unformatted_output)
      * [5.1.3 Positioning](basic_fstream.html#Positioning_2)
      * [5.1.4 Miscellaneous](basic_fstream.html#Miscellaneous_2)
    * [5.2 Member classes](basic_fstream.html#Member_classes_2)
  * [6 Inherited from std::basic_ios](basic_fstream.html#Inherited_from_std::basic_ios)
    * [6.1 Member types](basic_fstream.html#Member_types_2)
    * [6.2 Member functions](basic_fstream.html#Member_functions_4)
      * [6.2.1 State functions](basic_fstream.html#State_functions)
      * [6.2.2 Formatting](basic_fstream.html#Formatting)
      * [6.2.3 Miscellaneous](basic_fstream.html#Miscellaneous_3)
  * [7 Inherited from std::ios_base](basic_fstream.html#Inherited_from_std::ios_base)
    * [7.1 Member functions](basic_fstream.html#Member_functions_5)
      * [7.1.1 Formatting](basic_fstream.html#Formatting_2)
      * [7.1.2 Locales](basic_fstream.html#Locales)
      * [7.1.3 Internal extensible array](basic_fstream.html#Internal_extensible_array)
      * [7.1.4 Miscellaneous](basic_fstream.html#Miscellaneous_4)
      * [7.1.5 Member classes](basic_fstream.html#Member_classes_3)
    * [7.2 Member types and constants](basic_fstream.html#Member_types_and_constants)
    * [7.3 Notes](basic_fstream.html#Notes)
    * [7.4 Example](basic_fstream.html#Example)
    * [7.5 See also](basic_fstream.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/member_types&action=edit&section=T-1 "Template:cpp/io/member types")] Member types

Member type  |  Definition   
---|---  
`char_type` |  `CharT`[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_char_type&action=edit)  
`traits_type` |  `Traits`; the program is ill-formed if `Traits::char_type` is not `CharT`.[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_traits_type&action=edit)  
`int_type` |  `Traits::int_type`[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_int_type&action=edit)  
`pos_type` |  `Traits::pos_type`[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_pos_type&action=edit)  
`off_type` |  `Traits::off_type`[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_off_type&action=edit)  
`native_handle_type`(C++26) |  _implementation-defined_ type that is [TriviallyCopyable](../named_req/TriviallyCopyable.html "cpp/named req/TriviallyCopyable") and [`semiregular`](../concepts/semiregular.html "cpp/concepts/semiregular")[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_native_handle_type&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_fstream&action=edit&section=1 "Edit section: Member functions")] Member functions

[ (constructor)](basic_fstream/basic_fstream.html "cpp/io/basic fstream/basic fstream") |  constructs the file stream   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_fstream/dsc_constructor&action=edit)  
---|---  
(destructor)[virtual] (implicitly declared) |  destructs the `basic_fstream` and the associated buffer, closes the file   
(virtual public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_fstream/dsc_destructor&action=edit)  
[ operator=](basic_fstream/operator=.html "cpp/io/basic fstream/operator=")(C++11) |  moves the file stream   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_fstream/dsc_operator%3D&action=edit)  
[ swap](basic_fstream/swap.html "cpp/io/basic fstream/swap")(C++11) |  swaps two file streams   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_fstream/dsc_swap&action=edit)  
[ rdbuf](basic_fstream/rdbuf.html "cpp/io/basic fstream/rdbuf") |  returns the underlying raw file device object   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_fstream/dsc_rdbuf&action=edit)  
[ native_handle](basic_fstream/native_handle.html "cpp/io/basic fstream/native handle")(C++26) |  returns the underlying implementation-defined handle   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_fstream/dsc_native_handle&action=edit)  
  
#####  File operations   
  
[ is_open](basic_fstream/is_open.html "cpp/io/basic fstream/is open") |  checks if the stream has an associated file   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_fstream/dsc_is_open&action=edit)  
[ open](basic_fstream/open.html "cpp/io/basic fstream/open") |  opens a file and associates it with the stream   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_fstream/dsc_open&action=edit)  
[ close](basic_fstream/close.html "cpp/io/basic fstream/close") |  closes the associated file   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_fstream/dsc_close&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_fstream&action=edit&section=2 "Edit section: Non-member functions")] Non-member functions

[ std::swap(std::basic_fstream)](basic_fstream/swap2.html "cpp/io/basic fstream/swap2")(C++11) |  specializes the [std::swap](../utility/swap.html "cpp/algorithm/swap") algorithm   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_fstream/dsc_swap2&action=edit)  
---|---  
  
##  Inherited from [std::basic_istream](basic_istream.html "cpp/io/basic istream")

###  Member functions

#####  Formatted input   
  
---  
[ operator>>](basic_istream/operator_gtgt.html "cpp/io/basic istream/operator gtgt") |  extracts formatted data   
(public member function of `std::basic_istream<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_istream/dsc_operator_gtgt&action=edit)  
  
#####  Unformatted input   
  
[ get](basic_istream/get.html "cpp/io/basic istream/get") |  extracts characters   
(public member function of `std::basic_istream<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_istream/dsc_get&action=edit)  
[ peek](basic_istream/peek.html "cpp/io/basic istream/peek") |  reads the next character without extracting it   
(public member function of `std::basic_istream<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_istream/dsc_peek&action=edit)  
[ unget](basic_istream/unget.html "cpp/io/basic istream/unget") |  unextracts a character   
(public member function of `std::basic_istream<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_istream/dsc_unget&action=edit)  
[ putback](basic_istream/putback.html "cpp/io/basic istream/putback") |  puts a character into input stream   
(public member function of `std::basic_istream<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_istream/dsc_putback&action=edit)  
[ getline](basic_istream/getline.html "cpp/io/basic istream/getline") |  extracts characters until the given character is found   
(public member function of `std::basic_istream<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_istream/dsc_getline&action=edit)  
[ ignore](basic_istream/ignore.html "cpp/io/basic istream/ignore") |  extracts and discards characters until the given character is found   
(public member function of `std::basic_istream<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_istream/dsc_ignore&action=edit)  
[ read](basic_istream/read.html "cpp/io/basic istream/read") |  extracts blocks of characters   
(public member function of `std::basic_istream<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_istream/dsc_read&action=edit)  
[ readsome](basic_istream/readsome.html "cpp/io/basic istream/readsome") |  extracts already available blocks of characters   
(public member function of `std::basic_istream<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_istream/dsc_readsome&action=edit)  
[ gcount](basic_istream/gcount.html "cpp/io/basic istream/gcount") |  returns number of characters extracted by last unformatted input operation   
(public member function of `std::basic_istream<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_istream/dsc_gcount&action=edit)  
  
#####  Positioning   
  
[ tellg](basic_istream/tellg.html "cpp/io/basic istream/tellg") |  returns the input position indicator   
(public member function of `std::basic_istream<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_istream/dsc_tellg&action=edit)  
[ seekg](basic_istream/seekg.html "cpp/io/basic istream/seekg") |  sets the input position indicator   
(public member function of `std::basic_istream<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_istream/dsc_seekg&action=edit)  
  
#####  Miscellaneous   
  
[ sync](basic_istream/sync.html "cpp/io/basic istream/sync") |  synchronizes with the underlying storage device   
(public member function of `std::basic_istream<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_istream/dsc_sync&action=edit)  
  
###  Member classes

[ sentry](basic_istream/sentry.html "cpp/io/basic istream/sentry") |  implements basic logic for preparation of the stream for input operations   
(public member class of `std::basic_istream<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_istream/dsc_sentry&action=edit)  
---|---  
  
##  Inherited from [std::basic_ostream](basic_ostream.html "cpp/io/basic ostream")

###  Member functions

#####  Formatted output   
  
---  
[ operator<<](basic_ostream/operator_ltlt.html "cpp/io/basic ostream/operator ltlt") |  inserts formatted data   
(public member function of `std::basic_ostream<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_ostream/dsc_operator_ltlt&action=edit)  
  
#####  Unformatted output   
  
[ put](basic_ostream/put.html "cpp/io/basic ostream/put") |  inserts a character   
(public member function of `std::basic_ostream<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_ostream/dsc_put&action=edit)  
[ write](basic_ostream/write.html "cpp/io/basic ostream/write") |  inserts blocks of characters   
(public member function of `std::basic_ostream<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_ostream/dsc_write&action=edit)  
  
#####  Positioning   
  
[ tellp](basic_ostream/tellp.html "cpp/io/basic ostream/tellp") |  returns the output position indicator   
(public member function of `std::basic_ostream<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_ostream/dsc_tellp&action=edit)  
[ seekp](basic_ostream/seekp.html "cpp/io/basic ostream/seekp") |  sets the output position indicator   
(public member function of `std::basic_ostream<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_ostream/dsc_seekp&action=edit)  
  
#####  Miscellaneous   
  
[ flush](basic_ostream/flush.html "cpp/io/basic ostream/flush") |  synchronizes with the underlying storage device   
(public member function of `std::basic_ostream<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_ostream/dsc_flush&action=edit)  
  
###  Member classes

[ sentry](basic_ostream/sentry.html "cpp/io/basic ostream/sentry") |  implements basic logic for preparation of the stream for output operations   
(public member class of `std::basic_ostream<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_ostream/dsc_sentry&action=edit)  
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
(public member function of `std::basic_ios<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_ios/dsc_good&action=edit)  
[ eof](basic_ios/eof.html "cpp/io/basic ios/eof") |  checks if end-of-file has been reached   
(public member function of `std::basic_ios<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_ios/dsc_eof&action=edit)  
[ fail](basic_ios/fail.html "cpp/io/basic ios/fail") |  checks if an error has occurred   
(public member function of `std::basic_ios<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_ios/dsc_fail&action=edit)  
[ bad](basic_ios/bad.html "cpp/io/basic ios/bad") |  checks if a non-recoverable error has occurred   
(public member function of `std::basic_ios<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_ios/dsc_bad&action=edit)  
[ operator!](basic_ios/operator!.html "cpp/io/basic ios/operator!") |  checks if an error has occurred (synonym of [fail()](basic_ios/fail.html "cpp/io/basic ios/fail"))   
(public member function of `std::basic_ios<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_ios/dsc_operator!&action=edit)  
[ operator bool](basic_ios/operator_bool.html "cpp/io/basic ios/operator bool") |  checks if no error has occurred (synonym of `!`[fail()](basic_ios/fail.html "cpp/io/basic ios/fail"))   
(public member function of `std::basic_ios<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_ios/dsc_operator_bool&action=edit)  
[ rdstate](basic_ios/rdstate.html "cpp/io/basic ios/rdstate") |  returns state flags   
(public member function of `std::basic_ios<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_ios/dsc_rdstate&action=edit)  
[ setstate](basic_ios/setstate.html "cpp/io/basic ios/setstate") |  sets state flags   
(public member function of `std::basic_ios<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_ios/dsc_setstate&action=edit)  
[ clear](basic_ios/clear.html "cpp/io/basic ios/clear") |  modifies state flags   
(public member function of `std::basic_ios<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_ios/dsc_clear&action=edit)  
  
#####  Formatting   
  
[ copyfmt](basic_ios/copyfmt.html "cpp/io/basic ios/copyfmt") |  copies formatting information   
(public member function of `std::basic_ios<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_ios/dsc_copyfmt&action=edit)  
[ fill](basic_ios/fill.html "cpp/io/basic ios/fill") |  manages the fill character   
(public member function of `std::basic_ios<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_ios/dsc_fill&action=edit)  
  
#####  Miscellaneous   
  
[ exceptions](basic_ios/exceptions.html "cpp/io/basic ios/exceptions") |  manages exception mask   
(public member function of `std::basic_ios<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_ios/dsc_exceptions&action=edit)  
[ imbue](basic_ios/imbue.html "cpp/io/basic ios/imbue") |  sets the locale   
(public member function of `std::basic_ios<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_ios/dsc_imbue&action=edit)  
[ rdbuf](basic_ios/rdbuf.html "cpp/io/basic ios/rdbuf") |  manages associated stream buffer   
(public member function of `std::basic_ios<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_ios/dsc_rdbuf&action=edit)  
[ tie](basic_ios/tie.html "cpp/io/basic ios/tie") |  manages tied stream   
(public member function of `std::basic_ios<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_ios/dsc_tie&action=edit)  
[ narrow](basic_ios/narrow.html "cpp/io/basic ios/narrow") |  narrows characters   
(public member function of `std::basic_ios<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_ios/dsc_narrow&action=edit)  
[ widen](basic_ios/widen.html "cpp/io/basic ios/widen") |  widens characters   
(public member function of `std::basic_ios<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_ios/dsc_widen&action=edit)  
  
##  Inherited from [std::ios_base](ios_base.html "cpp/io/ios base")

###  Member functions

#####  Formatting   
  
---  
[ flags](ios_base/flags.html "cpp/io/ios base/flags") |  manages format flags   
(public member function of `std::ios_base`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_flags&action=edit)  
[ setf](ios_base/setf.html "cpp/io/ios base/setf") |  sets specific format flag   
(public member function of `std::ios_base`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_setf&action=edit)  
[ unsetf](ios_base/unsetf.html "cpp/io/ios base/unsetf") |  clears specific format flag   
(public member function of `std::ios_base`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_unsetf&action=edit)  
[ precision](ios_base/precision.html "cpp/io/ios base/precision") |  manages decimal precision of floating point operations   
(public member function of `std::ios_base`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_precision&action=edit)  
[ width](ios_base/width.html "cpp/io/ios base/width") |  manages field width   
(public member function of `std::ios_base`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_width&action=edit)  
  
#####  Locales   
  
[ imbue](ios_base/imbue.html "cpp/io/ios base/imbue") |  sets locale   
(public member function of `std::ios_base`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_imbue&action=edit)  
[ getloc](ios_base/getloc.html "cpp/io/ios base/getloc") |  returns current locale   
(public member function of `std::ios_base`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_getloc&action=edit)  
  
#####  Internal extensible array   
  
[ xalloc](ios_base/xalloc.html "cpp/io/ios base/xalloc")[static] |  returns a program-wide unique integer that is safe to use as index to [`pword()`](ios_base/pword.html "cpp/io/ios base/pword") and [`iword()`](ios_base/iword.html "cpp/io/ios base/iword")   
(public static member function of `std::ios_base`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_xalloc&action=edit)  
[ iword](ios_base/iword.html "cpp/io/ios base/iword") |  resizes the private storage if necessary and access to the long element at the given index   
(public member function of `std::ios_base`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_iword&action=edit)  
[ pword](ios_base/pword.html "cpp/io/ios base/pword") |  resizes the private storage if necessary and access to the void* element at the given index   
(public member function of `std::ios_base`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_pword&action=edit)  
  
#####  Miscellaneous   
  
[ register_callback](ios_base/register_callback.html "cpp/io/ios base/register callback") |  registers event callback function   
(public member function of `std::ios_base`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_register_callback&action=edit)  
[ sync_with_stdio](ios_base/sync_with_stdio.html "cpp/io/ios base/sync with stdio")[static] |  sets whether C++ and C I/O libraries are interoperable   
(public static member function of `std::ios_base`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_sync_with_stdio&action=edit)  
  
#####  Member classes   
  
[ failure](ios_base/failure.html "cpp/io/ios base/failure") |  stream exception   
(public member class of `std::ios_base`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_failure&action=edit)  
[ Init](ios_base/Init.html "cpp/io/ios base/Init") |  initializes standard stream objects   
(public member class of `std::ios_base`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/ios_base/dsc_Init&action=edit)  
  
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
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_fstream&action=edit&section=3 "Edit section: Notes")] Notes

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_fstream_native_handle`](../experimental/feature_test.html#cpp_lib_fstream_native_handle "cpp/feature test") | [`202306L`](../compiler_support/26.html#cpp_lib_fstream_native_handle_202306L "cpp/compiler support/26") | (C++26) | native handles support   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_fstream&action=edit&section=4 "Edit section: Example")] Example

Run this code
    
    
    #include <fstream>
    #include <iostream>
    #include <string>
     
    int main()
    {
        [std::string](../string/basic_string.html) filename{"test.bin"};
        std::fstream s{filename, s.binary | s.trunc | s.in | s.out};
     
        if (!s.is_open())
            [std::cout](cout.html) << "failed to open " << filename << '\n';
        else
        {
            // write
            double d{3.14};
            s.write(reinterpret_cast<char*>(&d), sizeof d); // binary output
            s << 123 << "abc";                              // text output
     
            // for fstream, this moves the file position pointer (both put and get)
            s.seekp(0);
     
            // read
            d = 2.71828;
            s.read(reinterpret_cast<char*>(&d), sizeof d); // binary input
            int n;
            [std::string](../string/basic_string.html) str;
            if (s >> n >> str)                             // text input
                [std::cout](cout.html) << "read back from file: " << d << ' ' << n << ' ' << str << '\n';
        }
    }

Output: 
    
    
    read back from file: 3.14 123 abc

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_fstream&action=edit&section=5 "Edit section: See also")] See also

[ getline](../string/basic_string/getline.html "cpp/string/basic string/getline") |  read data from an I/O stream into a string   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_getline&action=edit)  
---|---
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
