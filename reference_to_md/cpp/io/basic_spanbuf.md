
  


[Input/output library](../io.html "cpp/io")

[I/O manipulators](manip.html "cpp/io/manip")  
---  
[Print functions](../io.html#Print_functions_.28since_C.2B.2B23.29 "cpp/io") (C++23)  
[C-style I/O](c.html "cpp/io/c")  
Buffers  
[basic_streambuf](basic_streambuf.html "cpp/io/basic streambuf")  
[basic_filebuf](basic_filebuf.html "cpp/io/basic filebuf")  
[basic_stringbuf](basic_stringbuf.html "cpp/io/basic stringbuf")  
**basic_spanbuf**(C++23)  
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
  


**`std::basic_spanbuf`**

Public member functions  
---  
[basic_spanbuf::basic_spanbuf](basic_spanbuf/basic_spanbuf.html "cpp/io/basic spanbuf/basic spanbuf")(C++23)  
[basic_spanbuf::operator=](basic_spanbuf/operator=.html "cpp/io/basic spanbuf/operator=")(C++23)  
[basic_spanbuf::swap](basic_spanbuf/swap.html "cpp/io/basic spanbuf/swap")(C++23)  
[basic_spanbuf::span](basic_spanbuf/span.html "cpp/io/basic spanbuf/span")(C++23)  
Protected member functions  
[basic_spanbuf::setbuf](basic_spanbuf/setbuf.html "cpp/io/basic spanbuf/setbuf")(C++23)  
[basic_spanbuf::seekoff](basic_spanbuf/seekoff.html "cpp/io/basic spanbuf/seekoff")(C++23)  
[basic_spanbuf::seekpos](basic_spanbuf/seekpos.html "cpp/io/basic spanbuf/seekpos")(C++23)  
Non-member functions  
[swap(std::basic_spanbuf)](basic_spanbuf/swap2.html "cpp/io/basic spanbuf/swap2")(C++23)  
  


Defined in header `[<spanstream>](../header/spanstream.html "cpp/header/spanstream")` |  |   
---|---|---  
template<  
class CharT,  
class Traits = [std::char_traits](../string/char_traits.html)<CharT>  
> class basic_spanbuf  
: public [std::basic_streambuf](basic_streambuf.html)<CharT, Traits> |  |  (since C++23)  
| |   
  
`std::basic_spanbuf` is a [std::basic_streambuf](basic_streambuf.html "cpp/io/basic streambuf") whose associated character sequence is a memory-resident sequence of arbitrary characters, which can be initialized from or made available as an instance of [std::span](../container/span.html)<CharT>. 

`std::basic_spanbuf` performs I/O on a fixed buffer, and therefore it does not attempt to obtain a new buffer when the underlying buffer is exhausted. 

Several typedefs for common character types are provided: 

Defined in header `[<spanstream>](../header/spanstream.html "cpp/header/spanstream")`  
---  
Type  |  Definition   
`std::spanbuf` |  std::basic_spanbuf<char>  
`std::wspanbuf` |  std::basic_spanbuf<wchar_t>  
  
## Contents

  * [1 Member types](basic_spanbuf.html#Member_types)
  * [2 Data members](basic_spanbuf.html#Data_members)
  * [3 Member functions](basic_spanbuf.html#Member_functions)
    * [3.1 Public member functions](basic_spanbuf.html#Public_member_functions)
    * [3.2 Protected member functions](basic_spanbuf.html#Protected_member_functions)
  * [4 Non-member functions](basic_spanbuf.html#Non-member_functions)
  * [5 Inherited from std::basic_streambuf](basic_spanbuf.html#Inherited_from_std::basic_streambuf)
    * [5.1 Member types](basic_spanbuf.html#Member_types_2)
    * [5.2 Member functions](basic_spanbuf.html#Member_functions_2)
      * [5.2.1 Locales](basic_spanbuf.html#Locales)
      * [5.2.2 Positioning](basic_spanbuf.html#Positioning)
      * [5.2.3 Get area](basic_spanbuf.html#Get_area)
      * [5.2.4 Put area](basic_spanbuf.html#Put_area)
      * [5.2.5 Putback](basic_spanbuf.html#Putback)
    * [5.3 Protected member functions](basic_spanbuf.html#Protected_member_functions_2)
      * [5.3.1 Locales](basic_spanbuf.html#Locales_2)
      * [5.3.2 Positioning](basic_spanbuf.html#Positioning_2)
      * [5.3.3 Get area](basic_spanbuf.html#Get_area_2)
      * [5.3.4 Put area](basic_spanbuf.html#Put_area_2)
      * [5.3.5 Putback](basic_spanbuf.html#Putback_2)
    * [5.4 Notes](basic_spanbuf.html#Notes)
    * [5.5 See also](basic_spanbuf.html#See_also)

  
---  
  
### Member types

Member type  |  Definition   
---|---  
`char_type` |  `CharT`  
`traits_type` |  `Traits`; the program is ill-formed if `Traits::char_type` is not `CharT`.  
`int_type` |  `Traits::int_type`  
`pos_type` |  `Traits::pos_type`  
`off_type` |  `Traits::off_type`  
  
### Data members

Member name  |  Definition   
---|---  
`_mod_` (private) |  A [std::ios_base::openmode](ios_base/openmode.html "cpp/io/ios base/openmode") recording the open mode.  
(exposition-only member object*)  
`_buf_` (private) |  A [std::span](../container/span.html)<CharT> referencing the underlying buffer.  
(exposition-only member object*)  
  
### Member functions

#####  Public member functions   
  
---  
[ (constructor)](basic_spanbuf/basic_spanbuf.html "cpp/io/basic spanbuf/basic spanbuf") |  constructs a `basic_spanbuf` object   
(public member function)   
**(destructor)**[virtual] |  destroys the `basic_spanbuf` object   
(virtual public member function)  
[ operator=](basic_spanbuf/operator=.html "cpp/io/basic spanbuf/operator=") |  assigns a `basic_spanbuf` object   
(public member function)   
[ swap](basic_spanbuf/swap.html "cpp/io/basic spanbuf/swap") |  swaps two `basic_spanbuf` objects   
(public member function)   
[ span](basic_spanbuf/span.html "cpp/io/basic spanbuf/span") |  obtains or initializes an underlying buffer according to mode   
(public member function)   
  
#####  Protected member functions   
  
[ setbuf](basic_spanbuf/setbuf.html "cpp/io/basic spanbuf/setbuf")[virtual] |  attempts to replace the controlled character sequence with an array   
(virtual protected member function)   
[ seekoff](basic_spanbuf/seekoff.html "cpp/io/basic spanbuf/seekoff")[virtual] |  repositions the next pointer in the input sequence, output sequence, or both, using relative addressing   
(virtual protected member function)   
[ seekpos](basic_spanbuf/seekpos.html "cpp/io/basic spanbuf/seekpos")[virtual] |  repositions the next pointer in the input sequence, output sequence, or both using absolute addressing   
(virtual protected member function)   
  
### Non-member functions

[ std::swap(std::basic_spanbuf)](basic_spanbuf/swap2.html "cpp/io/basic spanbuf/swap2")(C++23) |  specializes the [std::swap](../utility/swap.html "cpp/algorithm/swap") algorithm   
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
  
### Notes

`std::basic_spanbuf` does not own the underlying buffer. 

It is the responsibility of programmers to ensure the underlying buffer is in its lifetime when used by a `std::basic_spanbuf` object. Additional synchronization may be needed if more than one thread operates the same underlying buffer through different `std::basic_spanbuf` objects. 

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_spanstream`](../experimental/feature_test.html#cpp_lib_spanstream "cpp/feature test") | [`202106L`](../compiler_support/23.html#cpp_lib_spanstream_202106L "cpp/compiler support/23") | (C++23) | [`std::spanbuf`](basic_spanbuf.html#top), std::spanstream  
  
### See also

[ basic_stringbuf](basic_stringbuf.html "cpp/io/basic stringbuf") |  implements raw string device   
(class template)   
---|---  
[ strstreambuf](strstreambuf.html "cpp/io/strstreambuf")(deprecated in C++98)(removed in C++26) |  implements raw character array device   
(class) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
