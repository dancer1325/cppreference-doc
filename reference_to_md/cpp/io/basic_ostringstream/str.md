[[edit template]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_stringstream/str&action=edit)

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
  


[`std::basic_ostringstream`](../basic_ostringstream.html "cpp/io/basic ostringstream")

Member functions  
---  
[basic_ostringstream::basic_ostringstream](basic_ostringstream.html "cpp/io/basic ostringstream/basic ostringstream")  
[basic_ostringstream::operator=](operator=.html "cpp/io/basic ostringstream/operator=")  
[basic_ostringstream::swap](swap.html "cpp/io/basic ostringstream/swap")(C++11)  
[basic_ostringstream::rdbuf](rdbuf.html "cpp/io/basic ostringstream/rdbuf")  
String operations  
**basic_ostringstream::str**  
[basic_ostringstream::view](view.html "cpp/io/basic ostringstream/view")(C++20)  
Non-member functions  
[swap(std::basic_ostringstream)](swap2.html "cpp/io/basic ostringstream/swap2")(C++11)  
  


| (1) |   
---|---|---  
[std::basic_string](../../string/basic_string.html)<CharT, Traits, Allocator> str() const; |  | (until C++20)  
[std::basic_string](../../string/basic_string.html)<CharT, Traits, Allocator> str() const&; |  |  (since C++20)  
template< class SAlloc >  
[std::basic_string](../../string/basic_string.html)<CharT, Traits, SAlloc> str( const SAlloc& a ) const; |  (2)  |  (since C++20)  
[std::basic_string](../../string/basic_string.html)<CharT, Traits, Allocator> str() &&; |  (3)  |  (since C++20)  
void str( const [std::basic_string](../../string/basic_string.html)<CharT, Traits, Allocator>& s ); |  (4)  |   
template< class SAlloc >  
void str( const [std::basic_string](../../string/basic_string.html)<CharT, Traits, SAlloc>& s ); |  (5)  |  (since C++20)  
void str( [std::basic_string](../../string/basic_string.html)<CharT, Traits, Allocator>&& s ); |  (6)  |  (since C++20)  
template< class StringViewLike >  
void str( const StringViewLike& t ); |  (7) | (since C++26)  
| |   
  
Manages the contents of the underlying string object. 

1) Returns a copy of the underlying string. Equivalent to return rdbuf()->str();.

2) Returns a copy of the underlying string, using a as allocator. Equivalent to return rdbuf()->str(a);.

3) Returns a string move-constructed from the underlying string. Equivalent to return std::move(*rdbuf()).str();.

4,5) Replaces the contents of the underlying string. Equivalent to rdbuf()->str(s);.

6) Replaces the contents of the underlying string. Equivalent to rdbuf()->str(std::move(s));.

7) Replaces the contents of the underlying string. Equivalent to rdbuf()->str(t);.

This overload participates in overload resolution only if is_convertible_v<const T&, basic_string_view<charT, traits>> is true.

## Contents

  * [1 Parameters](str.html#Parameters)
  * [2 Return value](str.html#Return_value)
  * [3 Notes](str.html#Notes)
  * [4 Example](str.html#Example)
  * [5 See also](str.html#See_also)

  
---  
  
### Parameters

s  |  \-  |  new contents of the underlying string   
---|---|---  
t  |  \-  |  an object (convertible to [std::basic_string_view](../../string/basic_string_view.html "cpp/string/basic string view")) to use as the new contents of the underlying string   
a  |  \-  |  allocator used to construct the returned string   
  
### Return value

1,2) A copy of the underlying string object.

3) A string move-constructed from the underlying string object.

4-7) (none)

### Notes

The copy of the underlying string returned by [`str`](str.html#top) is a temporary object that will be destructed at the end of the expression, so directly calling [`c_str()`](../../string/basic_string/c_str.html "cpp/string/basic string/c str") on the result of str() (for example in auto *ptr = out.str().c_str();) results in a dangling pointer. 

[Feature-test](../../utility/feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_sstream_from_string_view`](../../experimental/feature_test.html#cpp_lib_sstream_from_string_view "cpp/feature test") | [`202306L`](../../compiler_support/26.html#cpp_lib_sstream_from_string_view_202306L "cpp/compiler support/26") | (C++26) | Interfacing [std::stringstream](../basic_stringstream.html "cpp/io/basic stringstream")s with [std::string_view](../../string/basic_string_view.html "cpp/string/basic string view"), ([7](str.html#Version_7))  
  
### Example

Run this code
    
    
    #include <iostream>
    #include <sstream>
     
    int main()
    {
        int n;
     
        [std::istringstream](../basic_istringstream.html) in; // could also use in("1 2")
        in.str("1 2");
        in >> n;
        [std::cout](../cout.html) << "After reading the first int from \"1 2\", the int is "
                  << n << ", str() = \"" << in.str() << "\"\n";
     
        [std::ostringstream](../basic_ostringstream.html) out("1 2");
        out << 3;
        [std::cout](../cout.html) << "After writing the int '3' to output stream \"1 2\""
                  << ", str() = \"" << out.str() << "\"\n";
     
        [std::ostringstream](../basic_ostringstream.html) ate("1 2", [std::ios_base::ate](../ios_base/openmode.html));
        ate << 3;
        [std::cout](../cout.html) << "After writing the int '3' to append stream \"1 2\""
                  << ", str() = \"" << ate.str() << "\"\n";
    }

Output: 
    
    
    After reading the first int from "1 2", the int is 1, str() = "1 2"
    After writing the int '3' to output stream "1 2", str() = "3 2"
    After writing the int '3' to append stream "1 2", str() = "1 23"

### See also

[ rdbuf](rdbuf.html "cpp/io/basic ostringstream/rdbuf") |  returns the underlying raw string device object   
(public member function)   
---|---  
[ str](../basic_stringbuf/str.html "cpp/io/basic stringbuf/str") |  replaces or obtains a copy of the associated character string   
(public member function of `std::basic_stringbuf<CharT,Traits,Allocator>`) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
