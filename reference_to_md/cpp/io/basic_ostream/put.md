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

[`std::basic_ostream`](../basic_ostream.html "cpp/io/basic ostream")

Global objects  
---  
| [coutwcout](../cout.html "cpp/io/cout")  
---  
  
| [cerrwcerr](../cerr.html "cpp/io/cerr")  
---  
  
| [clogwclog](../clog.html "cpp/io/clog")  
---  
  
Member functions  
[basic_ostream::basic_ostream](basic_ostream.html "cpp/io/basic ostream/basic ostream")  
[basic_ostream::~basic_ostream](~basic_ostream.html "cpp/io/basic ostream/~basic ostream")  
[basic_ostream::operator=](operator=.html "cpp/io/basic ostream/operator=")(C++11)  
Formatted output  
[basic_ostream::operator<<](operator_ltlt.html "cpp/io/basic ostream/operator ltlt")  
Unformatted output  
**basic_ostream::put**  
[basic_ostream::write](write.html "cpp/io/basic ostream/write")  
Positioning  
[basic_ostream::tellp](tellp.html "cpp/io/basic ostream/tellp")  
[basic_ostream::seekp](seekp.html "cpp/io/basic ostream/seekp")  
Miscellaneous  
[basic_ostream::flush](flush.html "cpp/io/basic ostream/flush")  
[basic_ostream::swap](swap.html "cpp/io/basic ostream/swap")(C++11)  
Member classes  
[basic_ostream::sentry](sentry.html "cpp/io/basic ostream/sentry")  
Non-member functions  
[operator<<(std::basic_ostream)](operator_ltlt2.html "cpp/io/basic ostream/operator ltlt2")  
[print(std::ostream)](print.html "cpp/io/basic ostream/print")(C++23)  
[println(std::ostream)](println.html "cpp/io/basic ostream/println")(C++23)  
[vprint_unicode(std::ostream)](vprint_unicode.html "cpp/io/basic ostream/vprint unicode")(C++23)  
[vprint_nonunicode(std::ostream)](vprint_nonunicode.html "cpp/io/basic ostream/vprint nonunicode")(C++23)  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_ostream/navbar_content&action=edit)

basic_ostream& put( char_type ch ); |  |   
---|---|---  
| |   
  
Behaves as an [UnformattedOutputFunction](../../named_req/UnformattedOutputFunction.html "cpp/named req/UnformattedOutputFunction"). After constructing and checking the sentry object, writes the character `ch` to the output stream. 

If the output fails for any reason, sets `badbit`. 

## Contents

  * [1 Parameters](put.html#Parameters)
  * [2 Return value](put.html#Return_value)
  * [3 Notes](put.html#Notes)
  * [4 Example](put.html#Example)
  * [5 See also](put.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_ostream/put&action=edit&section=1 "Edit section: Parameters")] Parameters

ch  |  \-  |  character to write   
---|---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_ostream/put&action=edit&section=2 "Edit section: Return value")] Return value

*this

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_ostream/put&action=edit&section=3 "Edit section: Notes")] Notes

This function is not overloaded for the types signed char or unsigned char, unlike the formatted [operator<<](operator_ltlt2.html "cpp/io/basic ostream/operator ltlt2"). 

Unlike formatted output functions, this function does not set the `failbit` if the output fails. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_ostream/put&action=edit&section=4 "Edit section: Example")] Example

Run this code
    
    
    #include <fstream>
    #include <iostream>
     
    int main()
    {
        [std::cout](../cout.html).put('a'); // normal usage
        [std::cout](../cout.html).put('\n');
     
        [std::ofstream](../basic_ofstream.html) s("/does/not/exist/");
        s.clear(); // pretend the stream is good
        [std::cout](../cout.html) << "Unformatted output: ";
        s.put('c'); // this will set badbit, but not failbit
        [std::cout](../cout.html) << " fail=" << bool(s.rdstate() & s.failbit);
        [std::cout](../cout.html) << " bad=" << s.bad() << '\n';
        s.clear();
        [std::cout](../cout.html) << "Formatted output:   ";
        s << 'c'; // this will set badbit and failbit
        [std::cout](../cout.html) << " fail=" << bool(s.rdstate() & s.failbit);
        [std::cout](../cout.html) << " bad=" << s.bad() << '\n';
    }

Output: 
    
    
    a
    Unformatted output:  fail=0 bad=1
    Formatted output:    fail=1 bad=1

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_ostream/put&action=edit&section=5 "Edit section: See also")] See also

[ operator<<(std::basic_ostream)](operator_ltlt2.html "cpp/io/basic ostream/operator ltlt2") |  inserts character data or insert into rvalue stream   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_ostream/dsc_operator_ltlt2&action=edit)  
---|---  
[ write](write.html "cpp/io/basic ostream/write") |  inserts blocks of characters   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_ostream/dsc_write&action=edit)
