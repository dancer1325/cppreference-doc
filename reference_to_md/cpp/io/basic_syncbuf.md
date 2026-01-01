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
**basic_syncbuf**(C++20)  
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

**`std::basic_syncbuf`**

Public member functions  
---  
[basic_syncbuf::basic_syncbuf](basic_syncbuf/basic_syncbuf.html "cpp/io/basic syncbuf/basic syncbuf")(C++20)  
[basic_syncbuf::operator=](basic_syncbuf/operator=.html "cpp/io/basic syncbuf/operator=")(C++20)  
[basic_syncbuf::~basic_syncbuf](basic_syncbuf/~basic_syncbuf.html "cpp/io/basic syncbuf/~basic syncbuf")(C++20)  
[basic_syncbuf::swap](basic_syncbuf/swap.html "cpp/io/basic syncbuf/swap")(C++20)  
[basic_syncbuf::emit](basic_syncbuf/emit.html "cpp/io/basic syncbuf/emit")(C++20)  
[basic_syncbuf::get_wrapped](basic_syncbuf/get_wrapped.html "cpp/io/basic syncbuf/get wrapped")(C++20)  
[basic_syncbuf::get_allocator](basic_syncbuf/get_allocator.html "cpp/io/basic syncbuf/get allocator")(C++20)  
[basic_syncbuf::set_emit_on_sync](basic_syncbuf/set_emit_on_sync.html "cpp/io/basic syncbuf/set emit on sync")(C++20)  
Protected member functions  
[basic_syncbuf::sync](basic_syncbuf/sync.html "cpp/io/basic syncbuf/sync")(C++20)  
Non-member functions  
[swap(std::basic_syncbuf)](basic_syncbuf/swap2.html "cpp/io/basic syncbuf/swap2")(C++20)  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_syncbuf/navbar_content&action=edit)

Defined in header `[<syncstream>](../header/syncstream.html "cpp/header/syncstream")` |  |   
---|---|---  
template<  
class CharT,  
class Traits = [std::char_traits](../string/char_traits.html)<CharT>,  
class Allocator = [std::allocator](../memory/allocator.html)<CharT>  
> class basic_syncbuf : public [std::basic_streambuf](basic_streambuf.html)<CharT, Traits> |  |  (since C++20)  
| |   
  
`std::basic_syncbuf` is a wrapper for a [std::basic_streambuf](basic_streambuf.html "cpp/io/basic streambuf") (provided at construction time as a pointer). It accumulates output in its own internal buffer, and atomically transmits its entire contents to the wrapped buffer on destruction and when explicitly requested, so that they appear as a contiguous sequence of characters. It guarantees that there are no data races and no interleaving of characters sent to the wrapped buffer as long as all other outputs made to the same buffer are made through, possibly different, instances of `std::basic_syncbuf`. 

Typical implementation of `std::basic_syncbuf` holds a pointer to the wrapped [std::basic_streambuf](basic_streambuf.html "cpp/io/basic streambuf"), a boolean flag indicating whether the buffer will transmit its contents to the wrapped buffer on sync (flush), a boolean flag indicating a pending flush when the policy is to not emit on sync, an internal buffer that uses `Allocator` (such as [std::string](../string/basic_string.html "cpp/string/basic string")), and a pointer to a mutex used to synchronize emit between multiple threads accessing the same wrapped stream buffer (these mutexes may be in a hash map with pointers to [std::basic_streambuf](basic_streambuf.html "cpp/io/basic streambuf") objects used as keys). 

Like other streambuf classes, `std::basic_syncbuf` is normally only accessed through the corresponding stream, [`std::osyncstream`](basic_osyncstream.html "cpp/io/basic osyncstream"), not directly. 

Several typedefs for common character types are provided: 

Defined in header `[<syncstream>](../header/syncstream.html "cpp/header/syncstream")`  
---  
Type  |  Definition   
`std::syncbuf` |  std::basic_syncbuf<char>  
`std::wsyncbuf` |  std::basic_syncbuf<wchar_t>  
  
## Contents

  * [1 Member types](basic_syncbuf.html#Member_types)
  * [2 Member functions](basic_syncbuf.html#Member_functions)
  * [3 Public member functions](basic_syncbuf.html#Public_member_functions)
  * [4 Protected member functions](basic_syncbuf.html#Protected_member_functions)
  * [5 Non-member functions](basic_syncbuf.html#Non-member_functions)
  * [6 Inherited from std::basic_streambuf](basic_syncbuf.html#Inherited_from_std::basic_streambuf)
    * [6.1 Member types](basic_syncbuf.html#Member_types_2)
    * [6.2 Member functions](basic_syncbuf.html#Member_functions_2)
      * [6.2.1 Locales](basic_syncbuf.html#Locales)
      * [6.2.2 Positioning](basic_syncbuf.html#Positioning)
      * [6.2.3 Get area](basic_syncbuf.html#Get_area)
      * [6.2.4 Put area](basic_syncbuf.html#Put_area)
      * [6.2.5 Putback](basic_syncbuf.html#Putback)
    * [6.3 Protected member functions](basic_syncbuf.html#Protected_member_functions_2)
      * [6.3.1 Locales](basic_syncbuf.html#Locales_2)
      * [6.3.2 Positioning](basic_syncbuf.html#Positioning_2)
      * [6.3.3 Get area](basic_syncbuf.html#Get_area_2)
      * [6.3.4 Put area](basic_syncbuf.html#Put_area_2)
      * [6.3.5 Putback](basic_syncbuf.html#Putback_2)
    * [6.4 Notes](basic_syncbuf.html#Notes)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_syncbuf&action=edit&section=1 "Edit section: Member types")] Member types

Member type  |  Definition   
---|---  
`char_type` |  `CharT`[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_char_type&action=edit)  
`traits_type` |  `Traits`; the program is ill-formed if `Traits::char_type` is not `CharT`.[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_traits_type&action=edit)  
`int_type` |  `Traits::int_type`[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_int_type&action=edit)  
`pos_type` |  `Traits::pos_type`[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_pos_type&action=edit)  
`off_type` |  `Traits::off_type`[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_off_type&action=edit)  
`allocator_type` |  `Allocator`  
`streambuf_type` |  [std::basic_streambuf](basic_streambuf.html)<CharT, Traits>  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_syncbuf&action=edit&section=2 "Edit section: Member functions")] Member functions

###  Public member functions  
  
---  
[ (constructor)](basic_syncbuf/basic_syncbuf.html "cpp/io/basic syncbuf/basic syncbuf") |  constructs a `basic_syncbuf` object   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_syncbuf/dsc_constructor&action=edit)  
[ operator=](basic_syncbuf/operator=.html "cpp/io/basic syncbuf/operator=") |  assigns a `basic_syncbuf` object   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_syncbuf/dsc_operator%3D&action=edit)  
[ swap](basic_syncbuf/swap.html "cpp/io/basic syncbuf/swap") |  swaps two `basic_syncbuf` objects   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_syncbuf/dsc_swap&action=edit)  
[ (destructor)](basic_syncbuf/~basic_syncbuf.html "cpp/io/basic syncbuf/~basic syncbuf") |  destroys the `basic_syncbuf` and emits its internal buffer   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_syncbuf/dsc_destructor&action=edit)  
[ emit](basic_syncbuf/emit.html "cpp/io/basic syncbuf/emit") |  atomically transmits the entire internal buffer to the wrapped streambuf   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_syncbuf/dsc_emit&action=edit)  
[ get_wrapped](basic_syncbuf/get_wrapped.html "cpp/io/basic syncbuf/get wrapped") |  retrieves the wrapped streambuf pointer   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_syncbuf/dsc_get_wrapped&action=edit)  
[ get_allocator](basic_syncbuf/get_allocator.html "cpp/io/basic syncbuf/get allocator") |  retrieves the allocator used by this `basic_syncbuf`   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_syncbuf/dsc_get_allocator&action=edit)  
[ set_emit_on_sync](basic_syncbuf/set_emit_on_sync.html "cpp/io/basic syncbuf/set emit on sync") |  changes the current emit-on-sync policy   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_syncbuf/dsc_set_emit_on_sync&action=edit)  
  
###  Protected member functions  
  
[ sync](basic_syncbuf/sync.html "cpp/io/basic syncbuf/sync") |  either emits, or records a pending flush, depending on the current emit-on-sync policy   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_syncbuf/dsc_sync&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_syncbuf&action=edit&section=3 "Edit section: Non-member functions")] Non-member functions

[ std::swap(std::basic_syncbuf)](basic_syncbuf/swap2.html "cpp/io/basic syncbuf/swap2")(C++20) |  specializes the [std::swap](../utility/swap.html "cpp/algorithm/swap") algorithm   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_syncbuf/dsc_swap2&action=edit)  
---|---  
  
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
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_syncbuf&action=edit&section=4 "Edit section: Notes")] Notes

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_syncbuf`](../experimental/feature_test.html#cpp_lib_syncbuf "cpp/feature test") | [`201803L`](../compiler_support/20.html#cpp_lib_syncbuf_201803L "cpp/compiler support/20") | (C++20) | Synchronized buffered ostream ([`std::syncbuf`](basic_syncbuf.html#Top), std::osyncstream) and manipulators 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
