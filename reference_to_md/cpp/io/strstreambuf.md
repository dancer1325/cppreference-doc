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
**strstreambuf**(C++98/26*)  
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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/navbar_content&action=edit)

**`std::strstreambuf`**

Public member functions  
---  
[strstreambuf::strstreambuf](strstreambuf/strstreambuf.html "cpp/io/strstreambuf/strstreambuf")  
[strstreambuf::~strstreambuf](strstreambuf/~strstreambuf.html "cpp/io/strstreambuf/~strstreambuf")  
[strstreambuf::freeze](strstreambuf/freeze.html "cpp/io/strstreambuf/freeze")  
[strstreambuf::str](strstreambuf/str.html "cpp/io/strstreambuf/str")  
[strstreambuf::pcount](strstreambuf/pcount.html "cpp/io/strstreambuf/pcount")  
Protected member functions  
[strstreambuf::underflow](strstreambuf/underflow.html "cpp/io/strstreambuf/underflow")  
[strstreambuf::pbackfail](strstreambuf/pbackfail.html "cpp/io/strstreambuf/pbackfail")  
[strstreambuf::overflow](strstreambuf/overflow.html "cpp/io/strstreambuf/overflow")  
[strstreambuf::setbuf](strstreambuf/setbuf.html "cpp/io/strstreambuf/setbuf")  
[strstreambuf::seekoff](strstreambuf/seekoff.html "cpp/io/strstreambuf/seekoff")  
[strstreambuf::seekpos](strstreambuf/seekpos.html "cpp/io/strstreambuf/seekpos")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/strstreambuf/navbar_content&action=edit)

Defined in header `[<strstream>](../header/strstream.html "cpp/header/strstream")` |  |   
---|---|---  
class strstreambuf : public [std::basic_streambuf](basic_streambuf.html)<char> |  |  (deprecated in C++98)   
(removed in C++26)  
| |   
  
`std::strstreambuf` is a [std::basic_streambuf](basic_streambuf.html "cpp/io/basic streambuf") whose associated character sequence is a character array, which may be constant (e.g. a string literal), modifiable but not dynamic (e.g. a stack-allocated array), or dynamic, in which case the `std::strstreambuf` may be allowed to reallocate the array as necessary to accommodate output (e.g. by calling delete[] and new[] or user-provided functions). 

Typical implementation of a `std::strstreambuf` holds four private data members: 

1) buffer state, a bitmask type which can represent any combination of the four values "allocated" (destructor will deallocate), "constant" (output not allowed), "dynamic" (output may reallocate), or "frozen" (deallocation and reallocation are not allowed)

2) allocated buffer size (the beginning of the buffer does not need a special data member, it may be stored in the inherited pointer [eback()](basic_streambuf/gptr.html "cpp/io/basic streambuf/gptr"))

3) pointer to user-provided allocation function

4) pointer to user-provided deallocation function.

## Contents

  * [1 Notes](strstreambuf.html#Notes)
  * [2 Member functions](strstreambuf.html#Member_functions)
  * [3 Public member functions](strstreambuf.html#Public_member_functions)
  * [4 Protected member functions](strstreambuf.html#Protected_member_functions)
  * [5 Inherited from std::basic_streambuf](strstreambuf.html#Inherited_from_std::basic_streambuf)
    * [5.1 Member types](strstreambuf.html#Member_types)
    * [5.2 Member functions](strstreambuf.html#Member_functions_2)
      * [5.2.1 Locales](strstreambuf.html#Locales)
      * [5.2.2 Positioning](strstreambuf.html#Positioning)
      * [5.2.3 Get area](strstreambuf.html#Get_area)
      * [5.2.4 Put area](strstreambuf.html#Put_area)
      * [5.2.5 Putback](strstreambuf.html#Putback)
    * [5.3 Protected member functions](strstreambuf.html#Protected_member_functions_2)
      * [5.3.1 Locales](strstreambuf.html#Locales_2)
      * [5.3.2 Positioning](strstreambuf.html#Positioning_2)
      * [5.3.3 Get area](strstreambuf.html#Get_area_2)
      * [5.3.4 Put area](strstreambuf.html#Put_area_2)
      * [5.3.5 Putback](strstreambuf.html#Putback_2)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/strstreambuf&action=edit&section=1 "Edit section: Notes")] Notes

After any call to [str()](strstreambuf/str.html "cpp/io/strstreambuf/str") on a stream with a dynamic buffer, a call to [freeze(false)](strstreambuf/freeze.html "cpp/io/strstreambuf/freeze") is required to allow the `strstreambuf` destructor to deallocate the buffer when necessary. 

`strstreambuf` has been deprecated since C++98 and removed since C++26. The recommended replacement is [`std::spanbuf`](basic_spanbuf.html "cpp/io/basic spanbuf")(since C++23). 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/strstreambuf&action=edit&section=2 "Edit section: Member functions")] Member functions

###  Public member functions  
  
---  
[ (constructor)](strstreambuf/strstreambuf.html "cpp/io/strstreambuf/strstreambuf") |  constructs a `strstreambuf` object   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/strstreambuf/dsc_strstreambuf&action=edit)  
[ (destructor)](strstreambuf/~strstreambuf.html "cpp/io/strstreambuf/~strstreambuf")[virtual] |  destructs a `strstreambuf` object, optionally deallocating the character array   
(virtual public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/strstreambuf/dsc_%7Estrstreambuf&action=edit)  
[ freeze](strstreambuf/freeze.html "cpp/io/strstreambuf/freeze") |  sets/clears the frozen state of the buffer   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/strstreambuf/dsc_freeze&action=edit)  
[ str](strstreambuf/str.html "cpp/io/strstreambuf/str") |  marks the buffer frozen and returns the beginning pointer of the input sequence   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/strstreambuf/dsc_str&action=edit)  
[ pcount](strstreambuf/pcount.html "cpp/io/strstreambuf/pcount") |  returns the next pointer minus the beginning pointer in the output sequence: the number of characters written   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/strstreambuf/dsc_pcount&action=edit)  
  
###  Protected member functions  
  
[ underflow](strstreambuf/underflow.html "cpp/io/strstreambuf/underflow")[virtual] |  reads a character from the input sequence without advancing the next pointer   
(virtual protected member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/strstreambuf/dsc_underflow&action=edit)  
[ pbackfail](strstreambuf/pbackfail.html "cpp/io/strstreambuf/pbackfail")[virtual] |  backs out the input sequence to unget a character   
(virtual protected member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/strstreambuf/dsc_pbackfail&action=edit)  
[ overflow](strstreambuf/overflow.html "cpp/io/strstreambuf/overflow")[virtual] |  appends a character to the output sequence, may reallocate or initially allocate the buffer if dynamic and not frozen   
(virtual protected member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/strstreambuf/dsc_overflow&action=edit)  
[ setbuf](strstreambuf/setbuf.html "cpp/io/strstreambuf/setbuf")[virtual] |  attempts to replace the controlled character sequence with an array   
(virtual protected member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/strstreambuf/dsc_setbuf&action=edit)  
[ seekoff](strstreambuf/seekoff.html "cpp/io/strstreambuf/seekoff")[virtual] |  repositions the next pointer in the input sequence, output sequence, or both, using relative addressing   
(virtual protected member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/strstreambuf/dsc_seekoff&action=edit)  
[ seekpos](strstreambuf/seekpos.html "cpp/io/strstreambuf/seekpos")[virtual] |  repositions the next pointer in the input sequence, output sequence, or both using absolute addressing   
(virtual protected member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/strstreambuf/dsc_seekpos&action=edit)  
  
##  Inherited from [std::basic_streambuf](basic_streambuf.html "cpp/io/basic streambuf")

###  Member types

Member type  |  Definition   
---|---  
`char_type` |  `CharT`[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_char_type&action=edit)  
`traits_type` |  `Traits`; the program is ill-formed if `Traits::char_type` is not `CharT`.[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_traits_type&action=edit)  
`int_type` |  `Traits::int_type`[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_int_type&action=edit)  
`pos_type` |  `Traits::pos_type`[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_pos_type&action=edit)  
`off_type` |  `Traits::off_type`[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_off_type&action=edit)  
  
###  Member functions

[ (destructor)](basic_streambuf/~basic_streambuf.html "cpp/io/basic streambuf/~basic streambuf")[virtual] |  destructs the `basic_streambuf` object   
(virtual public member function of `std::basic_streambuf<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_streambuf/dsc_%7Ebasic_streambuf&action=edit)  
---|---  
  
#####  Locales   
  
[ pubimbue](basic_streambuf/pubimbue.html "cpp/io/basic streambuf/pubimbue") |  changes the associated locale and invokes imbue()   
(public member function of `std::basic_streambuf<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_streambuf/dsc_pubimbue&action=edit)  
[ getloc](basic_streambuf/getloc.html "cpp/io/basic streambuf/getloc") |  obtains a copy of the associated locale   
(public member function of `std::basic_streambuf<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_streambuf/dsc_getloc&action=edit)  
  
#####  Positioning   
  
[ pubsetbuf](basic_streambuf/pubsetbuf.html "cpp/io/basic streambuf/pubsetbuf") |  invokes setbuf()   
(public member function of `std::basic_streambuf<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_streambuf/dsc_pubsetbuf&action=edit)  
[ pubseekoff](basic_streambuf/pubseekoff.html "cpp/io/basic streambuf/pubseekoff") |  invokes seekoff()   
(public member function of `std::basic_streambuf<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_streambuf/dsc_pubseekoff&action=edit)  
[ pubseekpos](basic_streambuf/pubseekpos.html "cpp/io/basic streambuf/pubseekpos") |  invokes seekpos()   
(public member function of `std::basic_streambuf<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_streambuf/dsc_pubseekpos&action=edit)  
[ pubsync](basic_streambuf/pubsync.html "cpp/io/basic streambuf/pubsync") |  invokes sync()   
(public member function of `std::basic_streambuf<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_streambuf/dsc_pubsync&action=edit)  
  
#####  Get area   
  
[ in_avail](basic_streambuf/in_avail.html "cpp/io/basic streambuf/in avail") |  obtains the number of characters immediately available in the get area   
(public member function of `std::basic_streambuf<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_streambuf/dsc_in_avail&action=edit)  
[ snextc](basic_streambuf/snextc.html "cpp/io/basic streambuf/snextc") |  advances the input sequence, then reads one character without advancing again   
(public member function of `std::basic_streambuf<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_streambuf/dsc_snextc&action=edit)  
[ sbumpcstossc](basic_streambuf/sbumpc.html "cpp/io/basic streambuf/sbumpc")(removed in C++17) |  reads one character from the input sequence and advances the sequence   
(public member function of `std::basic_streambuf<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_streambuf/dsc_sbumpc&action=edit)  
[ sgetc](basic_streambuf/sgetc.html "cpp/io/basic streambuf/sgetc") |  reads one character from the input sequence without advancing the sequence   
(public member function of `std::basic_streambuf<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_streambuf/dsc_sgetc&action=edit)  
[ sgetn](basic_streambuf/sgetn.html "cpp/io/basic streambuf/sgetn") |  invokes xsgetn()   
(public member function of `std::basic_streambuf<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_streambuf/dsc_sgetn&action=edit)  
  
#####  Put area   
  
[ sputc](basic_streambuf/sputc.html "cpp/io/basic streambuf/sputc") |  writes one character to the put area and advances the next pointer   
(public member function of `std::basic_streambuf<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_streambuf/dsc_sputc&action=edit)  
[ sputn](basic_streambuf/sputn.html "cpp/io/basic streambuf/sputn") |  invokes xsputn()   
(public member function of `std::basic_streambuf<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_streambuf/dsc_sputn&action=edit)  
  
#####  Putback   
  
[ sputbackc](basic_streambuf/sputbackc.html "cpp/io/basic streambuf/sputbackc") |  puts one character back in the input sequence   
(public member function of `std::basic_streambuf<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_streambuf/dsc_sputbackc&action=edit)  
[ sungetc](basic_streambuf/sungetc.html "cpp/io/basic streambuf/sungetc") |  moves the next pointer in the input sequence back by one   
(public member function of `std::basic_streambuf<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_streambuf/dsc_sungetc&action=edit)  
  
###  Protected member functions

[ (constructor)](basic_streambuf/basic_streambuf.html "cpp/io/basic streambuf/basic streambuf") |  constructs a `basic_streambuf` object   
(protected member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_streambuf/dsc_basic_streambuf&action=edit)  
---|---  
[ operator=](basic_streambuf/operator=.html "cpp/io/basic streambuf/operator=")(C++11) |  replaces a `basic_streambuf` object   
(protected member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_streambuf/dsc_operator%3D&action=edit)  
[ swap](basic_streambuf/swap.html "cpp/io/basic streambuf/swap")(C++11) |  swaps two `basic_streambuf` objects   
(protected member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_streambuf/dsc_swap&action=edit)  
  
#####  Locales   
  
[ imbue](basic_streambuf/pubimbue.html "cpp/io/basic streambuf/pubimbue")[virtual] |  reacts to a change of the associated locale   
(virtual protected member function of `std::basic_streambuf<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_streambuf/dsc_imbue&action=edit)  
  
#####  Positioning   
  
[ setbuf](basic_streambuf/pubsetbuf.html "cpp/io/basic streambuf/pubsetbuf")[virtual] |  replaces the buffer with user-defined array, if permitted   
(virtual protected member function of `std::basic_streambuf<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_streambuf/dsc_setbuf&action=edit)  
[ seekoff](basic_streambuf/pubseekoff.html "cpp/io/basic streambuf/pubseekoff")[virtual] |  repositions the next pointer in the input sequence, output sequence, or both, using relative addressing   
(virtual protected member function of `std::basic_streambuf<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_streambuf/dsc_seekoff&action=edit)  
[ seekpos](basic_streambuf/pubseekpos.html "cpp/io/basic streambuf/pubseekpos")[virtual] |  repositions the next pointer in the input sequence, output sequence, or both using absolute addressing   
(virtual protected member function of `std::basic_streambuf<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_streambuf/dsc_seekpos&action=edit)  
[ sync](basic_streambuf/pubsync.html "cpp/io/basic streambuf/pubsync")[virtual] |  synchronizes the buffers with the associated character sequence   
(virtual protected member function of `std::basic_streambuf<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_streambuf/dsc_sync&action=edit)  
  
#####  Get area   
  
[ showmanyc](basic_streambuf/showmanyc.html "cpp/io/basic streambuf/showmanyc")[virtual] |  obtains the number of characters available for input in the associated input sequence, if known   
(virtual protected member function of `std::basic_streambuf<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_streambuf/dsc_showmanyc&action=edit)  
[ underflow](basic_streambuf/underflow.html "cpp/io/basic streambuf/underflow")[virtual] |  reads characters from the associated input sequence to the get area   
(virtual protected member function of `std::basic_streambuf<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_streambuf/dsc_underflow&action=edit)  
[ uflow](basic_streambuf/uflow.html "cpp/io/basic streambuf/uflow")[virtual] |  reads characters from the associated input sequence to the get area and advances the next pointer   
(virtual protected member function of `std::basic_streambuf<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_streambuf/dsc_uflow&action=edit)  
[ xsgetn](basic_streambuf/sgetn.html "cpp/io/basic streambuf/sgetn")[virtual] |  reads multiple characters from the input sequence   
(virtual protected member function of `std::basic_streambuf<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_streambuf/dsc_xsgetn&action=edit)  
[ ebackgptregptr](basic_streambuf/gptr.html "cpp/io/basic streambuf/gptr") |  returns a pointer to the beginning, current character and the end of the get area   
(protected member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_streambuf/dsc_gptr&action=edit)  
[ gbump](basic_streambuf/gbump.html "cpp/io/basic streambuf/gbump") |  advances the next pointer in the input sequence   
(protected member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_streambuf/dsc_gbump&action=edit)  
[ setg](basic_streambuf/setg.html "cpp/io/basic streambuf/setg") |  repositions the beginning, next, and end pointers of the input sequence   
(protected member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_streambuf/dsc_setg&action=edit)  
  
#####  Put area   
  
[ xsputn](basic_streambuf/sputn.html "cpp/io/basic streambuf/sputn")[virtual] |  writes multiple characters to the output sequence   
(virtual protected member function of `std::basic_streambuf<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_streambuf/dsc_xsputn&action=edit)  
[ overflow](basic_streambuf/overflow.html "cpp/io/basic streambuf/overflow")[virtual] |  writes characters to the associated output sequence from the put area   
(virtual protected member function of `std::basic_streambuf<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_streambuf/dsc_overflow&action=edit)  
[ pbasepptrepptr](basic_streambuf/pptr.html "cpp/io/basic streambuf/pptr") |  returns a pointer to the beginning, current character and the end of the put area   
(protected member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_streambuf/dsc_pptr&action=edit)  
[ pbump](basic_streambuf/pbump.html "cpp/io/basic streambuf/pbump") |  advances the next pointer of the output sequence   
(protected member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_streambuf/dsc_pbump&action=edit)  
[ setp](basic_streambuf/setp.html "cpp/io/basic streambuf/setp") |  repositions the beginning, next, and end pointers of the output sequence   
(protected member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_streambuf/dsc_setp&action=edit)  
  
#####  Putback   
  
[ pbackfail](basic_streambuf/pbackfail.html "cpp/io/basic streambuf/pbackfail")[virtual] |  puts a character back into the input sequence, possibly modifying the input sequence   
(virtual protected member function of `std::basic_streambuf<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_streambuf/dsc_pbackfail&action=edit)
