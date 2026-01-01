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
**fpos**  
Error category interface  
[iostream_category](iostream_category.html "cpp/io/iostream category")(C++11)  
[io_errc](io_errc.html "cpp/io/io errc")(C++11)  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/navbar_content&action=edit)

Defined in header `[<ios>](../header/ios.html "cpp/header/ios")` |  |   
---|---|---  
template< class State >  
class fpos; |  |   
| |   
  
Specializations of the class template `std::fpos` identify absolute positions in a stream or in a file. Each object of type `fpos` holds the byte position in the stream (typically as a private member of type [std::streamoff](streamoff.html "cpp/io/streamoff")) and the current shift state, a value of type `State` (typically [std::mbstate_t](../string/multibyte/mbstate_t.html "cpp/string/multibyte/mbstate t")). 

The following typedef names for std::fpos<[std::mbstate_t](../string/multibyte/mbstate_t.html)> are provided (although they are spelled differently in the standard, they denote the same type): 

Defined in header `[<iosfwd>](../header/iosfwd.html "cpp/header/iosfwd")`  
---  
Type  |  Definition   
`std::streampos` |  std::fpos<[std::char_traits](../string/char_traits.html)<char>::state_type>  
`std::wstreampos` |  std::fpos<[std::char_traits](../string/char_traits.html)<wchar_t>::state_type>  
`std::u8streampos`(C++20) |  std::fpos<[std::char_traits](../string/char_traits.html)<char8_t>::state_type>  
`std::u16streampos` (C++11) |  std::fpos<[std::char_traits](../string/char_traits.html)<char16_t>::state_type>  
`std::u32streampos` (C++11) |  std::fpos<[std::char_traits](../string/char_traits.html)<char32_t>::state_type>  
  
All specializations of `fpos` meet the [DefaultConstructible](../named_req/DefaultConstructible.html "cpp/named req/DefaultConstructible"), [CopyConstructible](../named_req/CopyConstructible.html "cpp/named req/CopyConstructible"), [CopyAssignable](../named_req/CopyAssignable.html "cpp/named req/CopyAssignable"), [Destructible](../named_req/Destructible.html "cpp/named req/Destructible"), and [EqualityComparable](../named_req/EqualityComparable.html "cpp/named req/EqualityComparable") requirements. 

If `State` is trivially copy constructible, `fpos` has a trivial copy constructor. If `State` is trivially copy assignable, `fpos` has a trivial copy assignment operator. If `State` is trivially destructible, `fpos` has a trivial destructor. 

## Contents

  * [1 Template parameter](fpos.html#Template_parameter)
  * [2 Member functions](fpos.html#Member_functions)
  * [3 Notes](fpos.html#Notes)
  * [4 Defect reports](fpos.html#Defect_reports)
  * [5 See also](fpos.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/fpos&action=edit&section=1 "Edit section: Template parameter")] Template parameter

State  |  \-  |  the type representing the shift state   
---|---|---  
Type requirements   
-`State` must meet the requirements of [Destructible](../named_req/Destructible.html "cpp/named req/Destructible"), [CopyAssignable](../named_req/CopyAssignable.html "cpp/named req/CopyAssignable"), [CopyConstructible](../named_req/CopyConstructible.html "cpp/named req/CopyConstructible") and [DefaultConstructible](../named_req/DefaultConstructible.html "cpp/named req/DefaultConstructible").   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/fpos&action=edit&section=2 "Edit section: Member functions")] Member functions

[ state](fpos/state.html "cpp/io/fpos/state") |  gets/sets the value of the shift state   
(public member function)  
---|---  
  
In addition, member and non-member functions are provided to support the following operations: 

  * A default constructor that stores an offset of zero and value-initializes the state object. 


  * A non-explicit constructor that accepts an argument of type (possibly const) [std::streamoff](streamoff.html "cpp/io/streamoff"), which stores that offset and value-initializes the state object. This constructor must also accept the special value [std::streamoff](streamoff.html)(-1): the `std::fpos` constructed in this manner is returned by some stream operations to indicate errors. 


  * Explicit conversion from (possibly const) `fpos` to [std::streamoff](streamoff.html "cpp/io/streamoff"). The result is the stored offset. 


  * operator== and operator!= that compare two objects of type (possibly const) `std::fpos` and return a bool prvalue. p != q is equivalent to !(p == q). 


  * operator+ and operator- such that, for an object p of type (possibly const) `fpos<State>` and an object o of type (possibly const) [std::streamoff](streamoff.html "cpp/io/streamoff")



    

  * p + o has type `fpos<State>` and stores an offset that is the result of adding o to the offset of p. 
  * o + p has a type convertible to `fpos<State>` and the result of the conversion is equal to p + o. 
  * p - o has type `fpos<State>` and stores an offset that is the result of subtracting o from the offset of p. 



  * operator+= and operator-= which can accept a (possibly const) [std::streamoff](streamoff.html "cpp/io/streamoff") and adds/subtracts it from the stored offset, respectively. 


  * operator- which can subtract two objects of type (possibly const) `std::fpos` producing an [std::streamoff](streamoff.html "cpp/io/streamoff"), such that for two such objects p and q, p == q + (p - q). 



### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/fpos&action=edit&section=3 "Edit section: Notes")] Notes

Some of the [I/O streams member functions](../io.html "cpp/io") return and manipulate objects of member typedef `pos_type`. For streams, these member typedefs are provided by the template parameter `Traits`, which defaults to [std::char_traits](../string/char_traits.html "cpp/string/char traits"), which define their `pos_type`s to be specializations of `std::fpos`. The behavior of the I/O streams library is implementation-defined when `Traits::pos_type` is not std::fpos<[std::mbstate_t](../string/multibyte/mbstate_t.html)> (aka `std::streampos`, `std::wstreampos`, etc.). 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/fpos&action=edit&section=4 "Edit section: Defect reports")] Defect reports 

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 57](https://cplusplus.github.io/LWG/issue57) | C++98  | `streampos` and `wstreampos` were contradictionally  
allowed to be different while required to be the same  | clarified to  
be the same   
[P0759R1](https://wg21.link/P0759R1) | C++98  | specification was unclear and incomplete  | cleaned up   
[P1148R0](https://wg21.link/P1148R0) | C++11  | unclear what and in which header the  
definitions `u16streampos` and `u32streampos` are  | made clear   
[LWG 2114](https://cplusplus.github.io/LWG/issue2114)  
([P2167R3](https://wg21.link/P2167R3))  | C++98  | non-bool return types of equality comparisons were allowed  | disallowed   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/fpos&action=edit&section=5 "Edit section: See also")] See also

[ streamoff](streamoff.html "cpp/io/streamoff") |  represents relative file/stream position (offset from fpos), sufficient to represent any file size   
(typedef) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_streamoff&action=edit)  
---|---  
[ tellp](basic_ostream/tellp.html "cpp/io/basic ostream/tellp") |  returns the output position indicator   
(public member function of `std::basic_ostream<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_ostream/dsc_tellp&action=edit)  
[ seekp](basic_ostream/seekp.html "cpp/io/basic ostream/seekp") |  sets the output position indicator   
(public member function of `std::basic_ostream<CharT,Traits>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_ostream/dsc_seekp&action=edit)  
[ fgetpos](c/fgetpos.html "cpp/io/c/fgetpos") |  gets the file position indicator   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/c/dsc_fgetpos&action=edit)
