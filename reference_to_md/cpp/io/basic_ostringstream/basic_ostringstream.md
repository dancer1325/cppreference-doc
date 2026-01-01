[[edit template]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_stringstream/constructor&action=edit)

[C++](../../../cpp.html "cpp")

[Compiler support](../../compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](../../freestanding.html "cpp/freestanding")  
[Language](../../language.html "cpp/language")  
[Standard library](../../standard_library.html "cpp/standard library")  
[Standard library headers](../../headers.html "cpp/header")  
[Named requirements](../../iterator/concepts.html "cpp/named req")  
[Feature test macros](../../experimental/feature_test.html "cpp/feature test") (C++20)  
[Language support library](../../utility.html#Language_support "cpp/utility")  
[Concepts library](../../concepts.html "cpp/concepts") (C++20)  
[Diagnostics library](../../error.html "cpp/error")  
[Memory management library](../../memory.html "cpp/memory")  
[Metaprogramming library](../../meta.html "cpp/meta") (C++11)  
[General utilities library](../../utility.html "cpp/utility")  
[Containers library](../../container.html "cpp/container")  
[Iterators library](../../iterator.html "cpp/iterator")  
[Ranges library](../../ranges.html "cpp/ranges") (C++20)  
[Algorithms library](../../algorithm.html "cpp/algorithm")  
[Strings library](../../string.html "cpp/string")  
[Text processing library](../../text.html "cpp/text")  
[Numerics library](../../numeric.html "cpp/numeric")  
[Date and time library](../../chrono.html "cpp/chrono")  
[Input/output library](../../io.html "cpp/io")  
[Filesystem library](../../filesystem.html "cpp/filesystem") (C++17)  
[Concurrency support library](../../atomic.html "cpp/thread") (C++11)  
[Execution control library](../../experimental/execution.html "cpp/execution") (C++26)  
[Technical specifications](../../experimental.html "cpp/experimental")  
[Symbols index](../../symbol_index.html "cpp/symbol index")  
[External libraries](../../links/libs.html "cpp/links/libs")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/navbar_content&action=edit)

[Input/output library](../../io.html "cpp/io")

[I/O manipulators](../manip.html "cpp/io/manip")  
---  
[Print functions](../../io.html#Print_functions_.28since_C.2B.2B23.29 "cpp/io") (C++23)  
[C-style I/O](../c.html "cpp/io/c")  
Buffers  
[basic_streambuf](../basic_streambuf.html "cpp/io/basic streambuf")  
[basic_filebuf](../basic_filebuf.html "cpp/io/basic filebuf")  
[basic_stringbuf](../basic_stringbuf.html "cpp/io/basic stringbuf")  
[basic_spanbuf](../basic_spanbuf.html "cpp/io/basic spanbuf")(C++23)  
[strstreambuf](../strstreambuf.html "cpp/io/strstreambuf")(C++98/26*)  
[basic_syncbuf](../basic_syncbuf.html "cpp/io/basic syncbuf")(C++20)  
Streams  
Abstractions  
[ios_base](../ios_base.html "cpp/io/ios base")  
[basic_ios](../basic_ios.html "cpp/io/basic ios")  
[basic_istream](../basic_istream.html "cpp/io/basic istream")  
[basic_ostream](../basic_ostream.html "cpp/io/basic ostream")  
[basic_iostream](../basic_iostream.html "cpp/io/basic iostream")  
File I/O  
[basic_ifstream](../basic_ifstream.html "cpp/io/basic ifstream")  
[basic_ofstream](../basic_ofstream.html "cpp/io/basic ofstream")  
[basic_fstream](../basic_fstream.html "cpp/io/basic fstream")  
String I/O  
[basic_istringstream](../basic_istringstream.html "cpp/io/basic istringstream")  
[basic_ostringstream](../basic_ostringstream.html "cpp/io/basic ostringstream")  
[basic_stringstream](../basic_stringstream.html "cpp/io/basic stringstream")  
Array I/O  
[basic_ispanstream](../basic_ispanstream.html "cpp/io/basic ispanstream")(C++23)  
[basic_ospanstream](../basic_ospanstream.html "cpp/io/basic ospanstream")(C++23)  
[basic_spanstream](../basic_spanstream.html "cpp/io/basic spanstream")(C++23)  
[istrstream](../istrstream.html "cpp/io/istrstream")(C++98/26*)  
[ostrstream](../ostrstream.html "cpp/io/ostrstream")(C++98/26*)  
[strstream](../strstream.html "cpp/io/strstream")(C++98/26*)  
Synchronized Output  
[basic_osyncstream](../basic_osyncstream.html "cpp/io/basic osyncstream")(C++20)  
Types  
[streamoff](../streamoff.html "cpp/io/streamoff")  
[streamsize](../streamsize.html "cpp/io/streamsize")  
[fpos](../fpos.html "cpp/io/fpos")  
Error category interface  
[iostream_category](../iostream_category.html "cpp/io/iostream category")(C++11)  
[io_errc](../io_errc.html "cpp/io/io errc")(C++11)  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/navbar_content&action=edit)

[`std::basic_ostringstream`](../basic_ostringstream.html "cpp/io/basic ostringstream")

Member functions  
---  
**basic_ostringstream::basic_ostringstream**  
[basic_ostringstream::operator=](operator=.html "cpp/io/basic ostringstream/operator=")  
[basic_ostringstream::swap](swap.html "cpp/io/basic ostringstream/swap")(C++11)  
[basic_ostringstream::rdbuf](rdbuf.html "cpp/io/basic ostringstream/rdbuf")  
String operations  
[basic_ostringstream::str](str.html "cpp/io/basic ostringstream/str")  
[basic_ostringstream::view](view.html "cpp/io/basic ostringstream/view")(C++20)  
Non-member functions  
[swap(std::basic_ostringstream)](swap2.html "cpp/io/basic ostringstream/swap2")(C++11)  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_ostringstream/navbar_content&action=edit)

| (1) |   
---|---|---  
explicit basic_ostringstream( [std::ios_base::openmode](../ios_base/openmode.html) mode =  
[std::ios_base::out](../ios_base/openmode.html) ); |  | (until C++11)  
explicit basic_ostringstream( [std::ios_base::openmode](../ios_base/openmode.html) mode ); |  |  (since C++11)  
basic_ostringstream()  
: basic_ostringstream([std::ios_base::out](../ios_base/openmode.html)) {} |  (2)  |  (since C++11)  
explicit basic_ostringstream  
( const [std::basic_string](../../string/basic_string.html)<CharT, Traits, Allocator>& str,  
[std::ios_base::openmode](../ios_base/openmode.html) mode =  
[std::ios_base::out](../ios_base/openmode.html) ); |  (3)  |   
explicit basic_ostringstream  
( [std::basic_string](../../string/basic_string.html)<CharT, Traits, Allocator>&& str,  
[std::ios_base::openmode](../ios_base/openmode.html) mode =  
[std::ios_base::out](../ios_base/openmode.html) ); |  (4)  |  (since C++20)  
basic_ostringstream( [std::ios_base::openmode](../ios_base/openmode.html) mode, const Allocator& a ); |  (5)  |  (since C++20)  
template< class SAlloc >  
basic_ostringstream( const [std::basic_string](../../string/basic_string.html)<CharT, Traits, SAlloc>& str,  
[std::ios_base::openmode](../ios_base/openmode.html) mode, const Allocator& a ); |  (6)  |  (since C++20)  
template< class SAlloc >  
basic_ostringstream( const [std::basic_string](../../string/basic_string.html)<CharT, Traits, SAlloc>& str,  
const Allocator& a )  
: basic_ostringstream(str, [std::ios_base::out](../ios_base/openmode.html), a) {} |  (7)  |  (since C++20)  
template< class SAlloc >  
explicit basic_ostringstream  
( const [std::basic_string](../../string/basic_string.html)<CharT, Traits, SAlloc>& str,  
[std::ios_base::openmode](../ios_base/openmode.html) mode =  
[std::ios_base::out](../ios_base/openmode.html) ); |  (8)  |  (since C++20)  
template< class StringViewLike >  
explicit basic_ostringstream  
( const StringViewLike& t,  
[std::ios_base::openmode](../ios_base/openmode.html) mode =  
[std::ios_base::out](../ios_base/openmode.html) ); |  (9) | (since C++26)  
template< class StringViewLike >  
basic_ostringstream( const StringViewLike& t,  
[std::ios_base::openmode](../ios_base/openmode.html) mode, const Allocator& a ); |  (10)  |  (since C++26)  
template< class StringViewLike >  
basic_ostringstream( const StringViewLike& t, const Allocator& a ); |  (11)  |  (since C++26)  
basic_ostringstream( basic_ostringstream&& other ); |  (12)  |  (since C++11)  
| |   
  
Constructs new string stream. 

Given 

  * `base_type` as [std::basic_ostream](../basic_ostream.html)<CharT, Traits>, and 
  * `buf_type` as [std::basic_stringbuf](../basic_stringbuf.html)<CharT, Traits, Allocator>, 



the [std::basic_ostream](../basic_ostream.html "cpp/io/basic ostream") base and the [exposition-only data member](../basic_ostringstream.html#Exposition-only_members "cpp/io/basic ostringstream") `_sb_` are initialized as follows. 

Over  
load  | [std::basic_ostream](../basic_ostream.html "cpp/io/basic ostream") base  | `_sb_`  
---|---|---  
(1) | base_type([std::addressof](../../memory/addressof.html)(sb))[[1]](basic_ostringstream.html#cite_note-1) | buf_type(mode | [std::ios_base::out](../ios_base/openmode.html))  
(2) | buf_type([std::ios_base::out](../ios_base/openmode.html))  
(3) | buf_type(str, mode | [std::ios_base::out](../ios_base/openmode.html))  
(4) | buf_type(std::move(str), mode | [std::ios_base::out](../ios_base/openmode.html))  
(5) | buf_type(mode | [std::ios_base::out](../ios_base/openmode.html), a)  
(6) | buf_type(str, mode | [std::ios_base::out](../ios_base/openmode.html), a)  
(7) | buf_type(str, [std::ios_base::out](../ios_base/openmode.html), a)  
(8) | buf_type(str, mode | [std::ios_base::out](../ios_base/openmode.html))  
(9) | [std::addressof](../../memory/addressof.html)(sb) | {t, mode | [std::ios_base::out](../ios_base/openmode.html), Allocator()}  
(10) | {t, mode | [std::ios_base::out](../ios_base/openmode.html), a}  
(11) | {t, [std::ios_base::out](../ios_base/openmode.html), a}  
(12) | move constructed from other's [std::basic_ostream](../basic_ostream.html "cpp/io/basic ostream") base  | move constructed from other.sb  
  
  1. [↑](basic_ostringstream.html#cite_ref-1) The [std::basic_iostream](../basic_iostream.html "cpp/io/basic iostream") base was intialized with base_type(&sb) (for overloads (1,3)) until C++11.



8) This overload participates in overload resolution only if [std::is_same_v](../../types/is_same.html)<SAlloc, Allocator> is false.

9-11) These overloads participate in overload resolution only if [std::is_convertible_v](../../types/is_convertible.html)<const StringViewLike&, [std::basic_string_view](../../string/basic_string_view.html)<CharT, Traits>> is true.

## Contents

  * [1 Parameters](basic_ostringstream.html#Parameters)
  * [2 Notes](basic_ostringstream.html#Notes)
  * [3 Example](basic_ostringstream.html#Example)
  * [4 Defect reports](basic_ostringstream.html#Defect_reports)
  * [5 See also](basic_ostringstream.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_stringstream/constructor&action=edit&section=T-1 "Template:cpp/io/basic stringstream/constructor")] Parameters

str  |  \-  |  string to use as initial contents of the string stream   
---|---|---  
t  |  \-  |  an object (convertible to [std::basic_string_view](../../string/basic_string_view.html "cpp/string/basic string view")) to use as initial contents of the string stream   
a  |  \-  |  allocator used for allocating the contents of the string stream   
mode  |  \-  |  specifies stream open mode. It is a [BitmaskType](../../named_req/BitmaskType.html "cpp/named req/BitmaskType"), the following constants are defined:  |  Constant  |  Explanation   
---|---  
[`app`](../ios_base/openmode.html "cpp/io/ios base/openmode") |  seek to the end of stream before each write   
[`binary`](../ios_base/openmode.html "cpp/io/ios base/openmode") |  open in [binary mode](../c/FILE.html#Binary_and_text_modes "cpp/io/c/FILE")  
[`in`](../ios_base/openmode.html "cpp/io/ios base/openmode") |  open for reading   
[`out`](../ios_base/openmode.html "cpp/io/ios base/openmode") |  open for writing   
[`trunc`](../ios_base/openmode.html "cpp/io/ios base/openmode") |  discard the contents of the stream when opening   
[`ate`](../ios_base/openmode.html "cpp/io/ios base/openmode") |  seek to the end of stream immediately after open   
[`noreplace`](../ios_base/openmode.html "cpp/io/ios base/openmode") (C++23) |  open in exclusive mode   
other  |  \-  |  another string stream to use as source   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_stringstream/constructor&action=edit&section=T-2 "Template:cpp/io/basic stringstream/constructor")] Notes

Construction of one-off `basic_ostringstream` objects in a tight loop, such as when used for string conversion, may be significantly more costly than calling [str()](str.html "cpp/io/basic ostringstream/str") to reuse the same object. 

[Feature-test](../../utility/feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_sstream_from_string_view`](../../experimental/feature_test.html#cpp_lib_sstream_from_string_view "cpp/feature test") | [`202306L`](../../compiler_support/26.html#cpp_lib_sstream_from_string_view_202306L "cpp/compiler support/26") | (C++26) | Interfacing [std::stringstream](../basic_stringstream.html "cpp/io/basic stringstream")s with [std::string_view](../../string/basic_string_view.html "cpp/string/basic string view"), ([9-11](basic_ostringstream.html#Version_9))  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_stringstream/constructor&action=edit&section=T-3 "Template:cpp/io/basic stringstream/constructor")] Example

Run this code
    
    
    #include <iostream>
    #include <sstream>
     
    int main()
    {
        // default constructor (input/output stream)
        [std::stringstream](../basic_stringstream.html) buf1;
        buf1 << 7;
        int n = 0;
        buf1 >> n;
        [std::cout](../cout.html) << "buf1 = " << buf1.str() << " n = " << n << '\n';
     
        // input stream
        [std::istringstream](../basic_istringstream.html) inbuf("-10");
        inbuf >> n;
        [std::cout](../cout.html) << "n = " << n << '\n';
     
        // output stream in append mode (C++11)
        [std::ostringstream](../basic_ostringstream.html) buf2("test", [std::ios_base::ate](../ios_base/openmode.html));
        buf2 << '1';
        [std::cout](../cout.html) << buf2.str() << '\n';
    }

Output: 
    
    
    buf1 = 7 n = 7
    n = -10
    test1

### [[edit](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_stringstream/constructor&action=edit&section=T-4 "Template:cpp/io/basic stringstream/constructor")] Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[P0935R0](https://wg21.link/P0935R0) | C++11  | the default constructor was explicit  | made implicit   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_stringstream/constructor&action=edit&section=T-5 "Template:cpp/io/basic stringstream/constructor")] See also

[ str](str.html "cpp/io/basic ostringstream/str") |  gets or sets the contents of underlying string device object   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_stringstream/dsc_str&action=edit)  
---|---  
[ (constructor)](../basic_stringbuf/basic_stringbuf.html "cpp/io/basic stringbuf/basic stringbuf") |  constructs a `basic_stringbuf` object   
(public member function of `std::basic_stringbuf<CharT,Traits,Allocator>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_stringbuf/dsc_constructor&action=edit)
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
