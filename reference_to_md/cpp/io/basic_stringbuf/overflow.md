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
  


[`std::basic_stringbuf`](../basic_stringbuf.html "cpp/io/basic stringbuf")

Public member functions  
---  
[basic_stringbuf::basic_stringbuf](basic_stringbuf.html "cpp/io/basic stringbuf/basic stringbuf")  
[basic_stringbuf::operator=](operator=.html "cpp/io/basic stringbuf/operator=")(C++11)  
[basic_stringbuf::swap](swap.html "cpp/io/basic stringbuf/swap")(C++11)  
[basic_stringbuf::str](str.html "cpp/io/basic stringbuf/str")  
[basic_stringbuf::get_allocator](get_allocator.html "cpp/io/basic stringbuf/get allocator")(C++20)  
[basic_stringbuf::view](view.html "cpp/io/basic stringbuf/view")(C++20)  
Protected member functions  
[basic_stringbuf::underflow](underflow.html "cpp/io/basic stringbuf/underflow")  
[basic_stringbuf::pbackfail](pbackfail.html "cpp/io/basic stringbuf/pbackfail")  
**basic_stringbuf::overflow**  
[basic_stringbuf::setbuf](setbuf.html "cpp/io/basic stringbuf/setbuf")  
[basic_stringbuf::seekoff](seekoff.html "cpp/io/basic stringbuf/seekoff")  
[basic_stringbuf::seekpos](seekpos.html "cpp/io/basic stringbuf/seekpos")  
Non-member functions  
[swap(std::basic_stringbuf)](swap2.html "cpp/io/basic stringbuf/swap2")(C++11)  
Exposition-only member functions  
[basic_stringbuf::_init_buf_ptrs_](init_buf_ptrs.html "cpp/io/basic stringbuf/init buf ptrs")  
  


protected:  
virtual int_type overflow( int_type c = Traits::eof() ); |  |   
---|---|---  
| |   
  
Appends the character c to the output character sequence. 

If c is the end-of-file indicator (traits::eq_int_type(c, traits::eof()) == true), then there is no character to append. The function does nothing and returns an unspecified value other than traits::eof(). 

Otherwise, if the output sequence has a write position available or this function can successfully make a write position available, then calls sputc(c) and returns c. 

This function can make a write position available if the [std::stringbuf](../basic_stringbuf.html "cpp/io/basic stringbuf") is open for output ((mode & ios_base::out) != 0): in this case, it reallocates (or initially allocates) the buffer big enough to hold the entire current buffer plus at least one more character. If the [std::stringbuf](../basic_stringbuf.html "cpp/io/basic stringbuf") is also open for input ((mode & ios_base::in) != 0), then `overflow` also increases the size of the get area by moving [egptr()](../basic_streambuf/gptr.html "cpp/io/basic streambuf/gptr") to point just past the new write position. 

## Contents

  * [1 Parameters](overflow.html#Parameters)
  * [2 Return value](overflow.html#Return_value)
  * [3 Notes](overflow.html#Notes)
  * [4 Example](overflow.html#Example)
  * [5 Defect reports](overflow.html#Defect_reports)
  * [6 See also](overflow.html#See_also)

  
---  
  
### Parameters

c  |  \-  |  the character to store in the put area   
---|---|---  
  
### Return value

Traits::eof() to indicate failure, c if the character c was successfully appended, or some value other than Traits::eof() if called with Traits::eof() as the argument. 

### Notes

This function is different from a typical `overflow()` which moves the contents of the buffer to the associated character sequence because for a [std::basic_stringbuf](../basic_stringbuf.html "cpp/io/basic stringbuf"), the buffer and the associated sequence are one and the same. 

  


### Example

In the implementation used to execute this example (e.g. GCC-4.9), `overflow()` over-allocates the put area to 512 bytes: a call to [str()](str.html "cpp/io/basic stringbuf/str") would only return the four initialized bytes, but the next 508 calls to [sputc()](../basic_streambuf/sputc.html "cpp/io/basic streambuf/sputc") would not require new calls to `overflow()`.

Run this code
    
    
    #include <sstream>
    #include <iostream>
     
    struct mybuf : [std::stringbuf](../basic_stringbuf.html)
    {
        mybuf(const [std::string](../../string/basic_string.html)& new_str,
              [std::ios_base::openmode](../ios_base/openmode.html) which = [std::ios_base::in](../ios_base/openmode.html) | [std::ios_base::out](../ios_base/openmode.html))
            : [std::stringbuf](../basic_stringbuf.html)(new_str, which) {}
     
        int_type overflow(int_type c = [EOF](../c.html)) override
        {
            [std::cout](../cout.html) << "stringbuf::overflow('" << char(c) << "') called\n"
                      << "Before: size of get area: " << egptr() - eback() << '\n'
                      << "        size of put area: " << epptr() - pbase() << '\n';
     
            int_type ret = std::stringbuf::overflow(c);
     
            [std::cout](../cout.html) << "After : size of get area: " << egptr() - eback() << '\n'
                      << "        size of put area: " << epptr() - pbase() << '\n';
     
            return ret;
        }
    };
     
    int main()
    {
        [std::cout](../cout.html) << "read-write stream:\n";
        mybuf sbuf("   "); // read-write stream
        [std::iostream](../basic_iostream.html) stream(&sbuf);
        stream << 1234;
        [std::cout](../cout.html) << sbuf.str() << '\n';
     
        [std::cout](../cout.html) << "\nread-only stream:\n";
        mybuf ro_buf("   ", [std::ios_base::in](../ios_base/openmode.html)); // read-only stream
        [std::iostream](../basic_iostream.html) ro_stream(&ro_buf);
        ro_stream << 1234;
     
        [std::cout](../cout.html) << "\nwrite-only stream:\n";
        mybuf wr_buf("   ", [std::ios_base::out](../ios_base/openmode.html)); // write-only stream
        [std::iostream](../basic_iostream.html) wr_stream(&wr_buf);
        wr_stream << 1234;
    }

Possible output: 
    
    
    read-write stream:
    stringbuf::overflow('4') called
    Before: size of get area: 3
            size of put area: 3
    After : size of get area: 4
            size of put area: 512
    1234
     
    read-only stream:
    stringbuf::overflow('1') called
    Before: size of get area: 3
            size of put area: 0
    After : size of get area: 3
            size of put area: 0
     
    write-only stream:
    stringbuf::overflow('4') called
    Before: size of get area: 0
            size of put area: 3
    After : size of get area: 0
            size of put area: 512

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 169](https://cplusplus.github.io/LWG/issue169) | C++98  | the buffer (re)allocated could only hold one extra character  | allows more extra characters   
[LWG 432](https://cplusplus.github.io/LWG/issue432) | C++98  | `overflow` moved [epptr()](../basic_streambuf/pptr.html "cpp/io/basic streambuf/pptr") to point just past the new  
write position if the `std::stringbuf` is open for input  | it is not moved   
  
### See also

[ overflow](../basic_streambuf/overflow.html "cpp/io/basic streambuf/overflow")[virtual] |  writes characters to the associated output sequence from the put area   
(virtual protected member function of `std::basic_streambuf<CharT,Traits>`)   
---|---  
[ underflow](underflow.html "cpp/io/basic stringbuf/underflow")[virtual] |  returns the next character available in the input sequence   
(virtual protected member function) 
