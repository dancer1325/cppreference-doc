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

[`std::istrstream`](../istrstream.html "cpp/io/istrstream")

Member functions  
---  
**istrstream::istrstream**  
[istrstream::~istrstream](~istrstream.html "cpp/io/istrstream/~istrstream")  
[istrstream::rdbuf](rdbuf.html "cpp/io/istrstream/rdbuf")  
[istrstream::str](str.html "cpp/io/istrstream/str")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/istrstream/navbar_content&action=edit)

explicit istrstream( const char* s ); |  (1)  |  (deprecated in C++98)   
(removed in C++26)  
---|---|---  
explicit istrstream( char* s ); |  (2)  |  (deprecated in C++98)   
(removed in C++26)  
istrstream( const char* s, [std::streamsize](../streamsize.html) n ); |  (3)  |  (deprecated in C++98)   
(removed in C++26)  
istrstream( char* s, [std::streamsize](../streamsize.html) n ); |  (4)  |  (deprecated in C++98)   
(removed in C++26)  
| |   
  
Constructs new [std::istrstream](../istrstream.html "cpp/io/istrstream") and its underlying [std::strstreambuf](../strstreambuf.html "cpp/io/strstreambuf"). 

1,2) Constructs the underlying [std::strstreambuf](../strstreambuf.html "cpp/io/strstreambuf") by calling strstreambuf(s, 0) and initializes the base class with the address of the `strstreambuf`. The behavior is undefined if s is not pointing at an element of a null-terminated array.

3,4) Constructs the underlying [std::strstreambuf](../strstreambuf.html "cpp/io/strstreambuf") by calling strstreambuf(s, n) and initializes the base class with the address of the `strstreambuf`. The behavior is undefined if s is not pointing at an element of an array whose length is at least n elements.

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/istrstream/istrstream&action=edit&section=1 "Edit section: Parameters")] Parameters

s  |  \-  |  C-string or char array to use as the contents of the stream   
---|---|---  
n  |  \-  |  size of the array   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/istrstream/istrstream&action=edit&section=2 "Edit section: Example")] Example

Run this code
    
    
    #include <iostream>
    #include <strstream>
     
    int main()
    {
        [std::istrstream](../istrstream.html) s1("1 2 3"); // string literal
        int n1, n2, n3;
        if (s1 >> n1 >> n2 >> n3)
            [std::cout](../cout.html) << n1 << ", " << n2 << ", " << n3 << '\n';
     
        char arr[] = {'4', ' ', '5', ' ', '6'};
        [std::istrstream](../istrstream.html) s2(arr, sizeof arr);
        if (s2 >> n1 >> n2 >> n3)
            [std::cout](../cout.html) << n1 << ", " << n2 << ", " << n3 << '\n';
    }

Output: 
    
    
    1, 2, 3
    4, 5, 6

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/istrstream/istrstream&action=edit&section=3 "Edit section: See also")] See also

[ (constructor)](../strstreambuf/strstreambuf.html "cpp/io/strstreambuf/strstreambuf") |  constructs a `strstreambuf` object   
(public member function of `std::strstreambuf`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/strstreambuf/dsc_strstreambuf&action=edit)  
---|---  
[ (constructor)](../ostrstream/ostrstream.html "cpp/io/ostrstream/ostrstream") |  constructs an `ostrstream` object, optionally allocating the buffer   
(public member function of `std::ostrstream`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/strstream/dsc_constructor&action=edit)  
[ (constructor)](../strstream/strstream.html "cpp/io/strstream/strstream") |  constructs a `strstream` object, optionally allocating the buffer   
(public member function of `std::strstream`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/strstream/dsc_constructor&action=edit)
