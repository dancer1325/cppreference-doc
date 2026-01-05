
  


[Input/output library](../io.html "cpp/io")

[I/O manipulators](manip.html "cpp/io/manip")  
---  
[Print functions](../io.html#Print_functions_.28since_C.2B.2B23.29 "cpp/io") (C++23)  
[C-style I/O](c.html "cpp/io/c")  
Buffers  
[basic_streambuf](basic_streambuf.html "cpp/io/basic streambuf")  
[basic_filebuf](basic_filebuf.html "cpp/io/basic filebuf")  
**basic_stringbuf**  
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
  


**`std::basic_stringbuf`**

Public member functions  
---  
[basic_stringbuf::basic_stringbuf](basic_stringbuf/basic_stringbuf.html "cpp/io/basic stringbuf/basic stringbuf")  
[basic_stringbuf::operator=](basic_stringbuf/operator=.html "cpp/io/basic stringbuf/operator=")(C++11)  
[basic_stringbuf::swap](basic_stringbuf/swap.html "cpp/io/basic stringbuf/swap")(C++11)  
[basic_stringbuf::str](basic_stringbuf/str.html "cpp/io/basic stringbuf/str")  
[basic_stringbuf::get_allocator](basic_stringbuf/get_allocator.html "cpp/io/basic stringbuf/get allocator")(C++20)  
[basic_stringbuf::view](basic_stringbuf/view.html "cpp/io/basic stringbuf/view")(C++20)  
Protected member functions  
[basic_stringbuf::underflow](basic_stringbuf/underflow.html "cpp/io/basic stringbuf/underflow")  
[basic_stringbuf::pbackfail](basic_stringbuf/pbackfail.html "cpp/io/basic stringbuf/pbackfail")  
[basic_stringbuf::overflow](basic_stringbuf/overflow.html "cpp/io/basic stringbuf/overflow")  
[basic_stringbuf::setbuf](basic_stringbuf/setbuf.html "cpp/io/basic stringbuf/setbuf")  
[basic_stringbuf::seekoff](basic_stringbuf/seekoff.html "cpp/io/basic stringbuf/seekoff")  
[basic_stringbuf::seekpos](basic_stringbuf/seekpos.html "cpp/io/basic stringbuf/seekpos")  
Non-member functions  
[swap(std::basic_stringbuf)](basic_stringbuf/swap2.html "cpp/io/basic stringbuf/swap2")(C++11)  
Exposition-only member functions  
[basic_stringbuf::_init_buf_ptrs_](basic_stringbuf/init_buf_ptrs.html "cpp/io/basic stringbuf/init buf ptrs")  
  


Defined in header `[<sstream>](../header/sstream.html "cpp/header/sstream")` |  |   
---|---|---  
template<  
class CharT,  
class Traits = [std::char_traits](../string/char_traits.html)<CharT>,  
class Allocator = [std::allocator](../memory/allocator.html)<CharT>  
> class basic_stringbuf  
: public [std::basic_streambuf](basic_streambuf.html)<CharT, Traits> |  |   
| |   
  
`std::basic_stringbuf` is a [std::basic_streambuf](basic_streambuf.html "cpp/io/basic streambuf") whose associated character sequence is a memory-resident sequence of arbitrary characters, which can be initialized from or made available as an instance of [std::basic_string](../string/basic_string.html "cpp/string/basic string"). 

Typical implementations of `std::basic_stringbuf` hold an object of type [std::basic_string](../string/basic_string.html "cpp/string/basic string") or equivalent resizable sequence container directly as a data member and use it as both the controlled character sequence (the array where the six pointers of [std::basic_streambuf](basic_streambuf.html "cpp/io/basic streambuf") are pointing to) and as the associated character sequence (the source of characters for all input operations and the target for the output). 

In addition, a typical implementation holds a data member of type [std::ios_base::openmode](ios_base/openmode.html "cpp/io/ios base/openmode") to indicate the I/O mode of the associated stream (input-only, output-only, input/output, at-end, etc). 

If over-allocation strategy is used by [overflow()](basic_stringbuf/overflow.html "cpp/io/basic stringbuf/overflow"), an additional high-watermark pointer may be stored to track the last initialized character.  | (since C++11)  
---|---  
  
Several typedefs for common character types are provided: 

Defined in header `[<sstream>](../header/sstream.html "cpp/header/sstream")`  
---  
Type  |  Definition   
`std::stringbuf` |  std::basic_stringbuf<char>  
`std::wstringbuf` |  std::basic_stringbuf<wchar_t>  
  
## Contents

  * [1 Member types](basic_stringbuf.html#Member_types)
  * [2 Exposition-only members](basic_stringbuf.html#Exposition-only_members)
  * [3 Public member functions](basic_stringbuf.html#Public_member_functions)
  * [4 Protected member functions](basic_stringbuf.html#Protected_member_functions)
  * [5 Non-member functions](basic_stringbuf.html#Non-member_functions)
  * [6 Inherited from std::basic_streambuf](basic_stringbuf.html#Inherited_from_std::basic_streambuf)
    * [6.1 Member types](basic_stringbuf.html#Member_types_2)
    * [6.2 Member functions](basic_stringbuf.html#Member_functions)
      * [6.2.1 Locales](basic_stringbuf.html#Locales)
      * [6.2.2 Positioning](basic_stringbuf.html#Positioning)
      * [6.2.3 Get area](basic_stringbuf.html#Get_area)
      * [6.2.4 Put area](basic_stringbuf.html#Put_area)
      * [6.2.5 Putback](basic_stringbuf.html#Putback)
    * [6.3 Protected member functions](basic_stringbuf.html#Protected_member_functions_2)
      * [6.3.1 Locales](basic_stringbuf.html#Locales_2)
      * [6.3.2 Positioning](basic_stringbuf.html#Positioning_2)
      * [6.3.3 Get area](basic_stringbuf.html#Get_area_2)
      * [6.3.4 Put area](basic_stringbuf.html#Put_area_2)
      * [6.3.5 Putback](basic_stringbuf.html#Putback_2)

  
---  
  
### Member types

Member type  |  Definition   
---|---  
`char_type` |  `CharT`  
`traits_type` |  `Traits`; the program is ill-formed if `Traits::char_type` is not `CharT`.  
`int_type` |  `Traits::int_type`  
`pos_type` |  `Traits::pos_type`  
`off_type` |  `Traits::off_type`  
`allocator_type` |  `Allocator`  
  
### Exposition-only members

`_buf_` |  the [std::basic_string](../string/basic_string.html)<CharT, Traits, Allocator> used as the underlying buffer  
(exposition-only member object*)  
---|---  
`_mode_` |  the [std::ios_base::openmode](ios_base/openmode.html "cpp/io/ios base/openmode") of the associated stream  
(exposition-only member object*)  
[_init_buf_ptrs_](basic_stringbuf/init_buf_ptrs.html "cpp/io/basic stringbuf/init buf ptrs") |  initializes the input and output sequences  
(exposition-only member function*)  
  
### Public member functions

[ (constructor)](basic_stringbuf/basic_stringbuf.html "cpp/io/basic stringbuf/basic stringbuf") |  constructs a `basic_stringbuf` object   
(public member function)   
---|---  
[ operator=](basic_stringbuf/operator=.html "cpp/io/basic stringbuf/operator=")(C++11) |  assigns a `basic_stringbuf` object   
(public member function)   
[ swap](basic_stringbuf/swap.html "cpp/io/basic stringbuf/swap")(C++11) |  swaps two `basic_stringbuf` objects   
(public member function)   
(destructor)[virtual] (implicitly declared) |  destructs a `basic_stringbuf` object and the string it holds   
(virtual public member function)   
[ str](basic_stringbuf/str.html "cpp/io/basic stringbuf/str") |  replaces or obtains a copy of the associated character string   
(public member function)   
[ get_allocator](basic_stringbuf/get_allocator.html "cpp/io/basic stringbuf/get allocator")(C++20) |  obtains a copy of the allocator associated with the internal sequence container   
(public member function)   
[ view](basic_stringbuf/view.html "cpp/io/basic stringbuf/view")(C++20) |  obtains a view over the underlying character sequence   
(public member function)   
  
### Protected member functions

[ underflow](basic_stringbuf/underflow.html "cpp/io/basic stringbuf/underflow")[virtual] |  returns the next character available in the input sequence   
(virtual protected member function)   
---|---  
[ pbackfail](basic_stringbuf/pbackfail.html "cpp/io/basic stringbuf/pbackfail")[virtual] |  puts a character back into the input sequence   
(virtual protected member function)   
[ overflow](basic_stringbuf/overflow.html "cpp/io/basic stringbuf/overflow")[virtual] |  appends a character to the output sequence   
(virtual protected member function)   
[ setbuf](basic_stringbuf/setbuf.html "cpp/io/basic stringbuf/setbuf")[virtual] |  attempts to replace the controlled character sequence with an array   
(virtual protected member function)   
[ seekoff](basic_stringbuf/seekoff.html "cpp/io/basic stringbuf/seekoff")[virtual] |  repositions the next pointer in the input sequence, output sequence, or both, using relative addressing   
(virtual protected member function)   
[ seekpos](basic_stringbuf/seekpos.html "cpp/io/basic stringbuf/seekpos")[virtual] |  repositions the next pointer in the input sequence, output sequence, or both using absolute addressing   
(virtual protected member function)   
  
### Non-member functions

[ std::swap(std::basic_stringbuf)](basic_stringbuf/swap2.html "cpp/io/basic stringbuf/swap2")(C++11) |  specializes the [std::swap](../utility/swap.html "cpp/algorithm/swap") algorithm   
(function template)   
---|---  
  
##  Inherited from [std::basic_streambuf](basic_streambuf.html "cpp/io/basic streambuf")

###  Member types

Member type  |  Definition   
---|---  
`char_type` |  `CharT`  
`traits_type` |  `Traits`; the program is ill-formed if `Traits::char_type` is not `CharT`.  
`int_type` |  `Traits::int_type`  
`pos_type` |  `Traits::pos_type`  
`off_type` |  `Traits::off_type`  
  
###  Member functions

[ (destructor)](basic_streambuf/~basic_streambuf.html "cpp/io/basic streambuf/~basic streambuf")[virtual] |  destructs the `basic_streambuf` object   
(virtual public member function of `std::basic_streambuf<CharT,Traits>`)   
---|---  
  
#####  Locales   
  
[ pubimbue](basic_streambuf/pubimbue.html "cpp/io/basic streambuf/pubimbue") |  changes the associated locale and invokes imbue()   
(public member function of `std::basic_streambuf<CharT,Traits>`)   
[ getloc](basic_streambuf/getloc.html "cpp/io/basic streambuf/getloc") |  obtains a copy of the associated locale   
(public member function of `std::basic_streambuf<CharT,Traits>`)   
  
#####  Positioning   
  
[ pubsetbuf](basic_streambuf/pubsetbuf.html "cpp/io/basic streambuf/pubsetbuf") |  invokes setbuf()   
(public member function of `std::basic_streambuf<CharT,Traits>`)   
[ pubseekoff](basic_streambuf/pubseekoff.html "cpp/io/basic streambuf/pubseekoff") |  invokes seekoff()   
(public member function of `std::basic_streambuf<CharT,Traits>`)   
[ pubseekpos](basic_streambuf/pubseekpos.html "cpp/io/basic streambuf/pubseekpos") |  invokes seekpos()   
(public member function of `std::basic_streambuf<CharT,Traits>`)   
[ pubsync](basic_streambuf/pubsync.html "cpp/io/basic streambuf/pubsync") |  invokes sync()   
(public member function of `std::basic_streambuf<CharT,Traits>`)   
  
#####  Get area   
  
[ in_avail](basic_streambuf/in_avail.html "cpp/io/basic streambuf/in avail") |  obtains the number of characters immediately available in the get area   
(public member function of `std::basic_streambuf<CharT,Traits>`)   
[ snextc](basic_streambuf/snextc.html "cpp/io/basic streambuf/snextc") |  advances the input sequence, then reads one character without advancing again   
(public member function of `std::basic_streambuf<CharT,Traits>`)   
[ sbumpcstossc](basic_streambuf/sbumpc.html "cpp/io/basic streambuf/sbumpc")(removed in C++17) |  reads one character from the input sequence and advances the sequence   
(public member function of `std::basic_streambuf<CharT,Traits>`)   
[ sgetc](basic_streambuf/sgetc.html "cpp/io/basic streambuf/sgetc") |  reads one character from the input sequence without advancing the sequence   
(public member function of `std::basic_streambuf<CharT,Traits>`)   
[ sgetn](basic_streambuf/sgetn.html "cpp/io/basic streambuf/sgetn") |  invokes xsgetn()   
(public member function of `std::basic_streambuf<CharT,Traits>`)   
  
#####  Put area   
  
[ sputc](basic_streambuf/sputc.html "cpp/io/basic streambuf/sputc") |  writes one character to the put area and advances the next pointer   
(public member function of `std::basic_streambuf<CharT,Traits>`)   
[ sputn](basic_streambuf/sputn.html "cpp/io/basic streambuf/sputn") |  invokes xsputn()   
(public member function of `std::basic_streambuf<CharT,Traits>`)   
  
#####  Putback   
  
[ sputbackc](basic_streambuf/sputbackc.html "cpp/io/basic streambuf/sputbackc") |  puts one character back in the input sequence   
(public member function of `std::basic_streambuf<CharT,Traits>`)   
[ sungetc](basic_streambuf/sungetc.html "cpp/io/basic streambuf/sungetc") |  moves the next pointer in the input sequence back by one   
(public member function of `std::basic_streambuf<CharT,Traits>`)   
  
###  Protected member functions

[ (constructor)](basic_streambuf/basic_streambuf.html "cpp/io/basic streambuf/basic streambuf") |  constructs a `basic_streambuf` object   
(protected member function)   
---|---  
[ operator=](basic_streambuf/operator=.html "cpp/io/basic streambuf/operator=")(C++11) |  replaces a `basic_streambuf` object   
(protected member function)   
[ swap](basic_streambuf/swap.html "cpp/io/basic streambuf/swap")(C++11) |  swaps two `basic_streambuf` objects   
(protected member function)   
  
#####  Locales   
  
[ imbue](basic_streambuf/pubimbue.html "cpp/io/basic streambuf/pubimbue")[virtual] |  reacts to a change of the associated locale   
(virtual protected member function of `std::basic_streambuf<CharT,Traits>`)   
  
#####  Positioning   
  
[ setbuf](basic_streambuf/pubsetbuf.html "cpp/io/basic streambuf/pubsetbuf")[virtual] |  replaces the buffer with user-defined array, if permitted   
(virtual protected member function of `std::basic_streambuf<CharT,Traits>`)   
[ seekoff](basic_streambuf/pubseekoff.html "cpp/io/basic streambuf/pubseekoff")[virtual] |  repositions the next pointer in the input sequence, output sequence, or both, using relative addressing   
(virtual protected member function of `std::basic_streambuf<CharT,Traits>`)   
[ seekpos](basic_streambuf/pubseekpos.html "cpp/io/basic streambuf/pubseekpos")[virtual] |  repositions the next pointer in the input sequence, output sequence, or both using absolute addressing   
(virtual protected member function of `std::basic_streambuf<CharT,Traits>`)   
[ sync](basic_streambuf/pubsync.html "cpp/io/basic streambuf/pubsync")[virtual] |  synchronizes the buffers with the associated character sequence   
(virtual protected member function of `std::basic_streambuf<CharT,Traits>`)   
  
#####  Get area   
  
[ showmanyc](basic_streambuf/showmanyc.html "cpp/io/basic streambuf/showmanyc")[virtual] |  obtains the number of characters available for input in the associated input sequence, if known   
(virtual protected member function of `std::basic_streambuf<CharT,Traits>`)   
[ underflow](basic_streambuf/underflow.html "cpp/io/basic streambuf/underflow")[virtual] |  reads characters from the associated input sequence to the get area   
(virtual protected member function of `std::basic_streambuf<CharT,Traits>`)   
[ uflow](basic_streambuf/uflow.html "cpp/io/basic streambuf/uflow")[virtual] |  reads characters from the associated input sequence to the get area and advances the next pointer   
(virtual protected member function of `std::basic_streambuf<CharT,Traits>`)   
[ xsgetn](basic_streambuf/sgetn.html "cpp/io/basic streambuf/sgetn")[virtual] |  reads multiple characters from the input sequence   
(virtual protected member function of `std::basic_streambuf<CharT,Traits>`)   
[ ebackgptregptr](basic_streambuf/gptr.html "cpp/io/basic streambuf/gptr") |  returns a pointer to the beginning, current character and the end of the get area   
(protected member function)   
[ gbump](basic_streambuf/gbump.html "cpp/io/basic streambuf/gbump") |  advances the next pointer in the input sequence   
(protected member function)   
[ setg](basic_streambuf/setg.html "cpp/io/basic streambuf/setg") |  repositions the beginning, next, and end pointers of the input sequence   
(protected member function)   
  
#####  Put area   
  
[ xsputn](basic_streambuf/sputn.html "cpp/io/basic streambuf/sputn")[virtual] |  writes multiple characters to the output sequence   
(virtual protected member function of `std::basic_streambuf<CharT,Traits>`)   
[ overflow](basic_streambuf/overflow.html "cpp/io/basic streambuf/overflow")[virtual] |  writes characters to the associated output sequence from the put area   
(virtual protected member function of `std::basic_streambuf<CharT,Traits>`)   
[ pbasepptrepptr](basic_streambuf/pptr.html "cpp/io/basic streambuf/pptr") |  returns a pointer to the beginning, current character and the end of the put area   
(protected member function)   
[ pbump](basic_streambuf/pbump.html "cpp/io/basic streambuf/pbump") |  advances the next pointer of the output sequence   
(protected member function)   
[ setp](basic_streambuf/setp.html "cpp/io/basic streambuf/setp") |  repositions the beginning, next, and end pointers of the output sequence   
(protected member function)   
  
#####  Putback   
  
[ pbackfail](basic_streambuf/pbackfail.html "cpp/io/basic streambuf/pbackfail")[virtual] |  puts a character back into the input sequence, possibly modifying the input sequence   
(virtual protected member function of `std::basic_streambuf<CharT,Traits>`) 
