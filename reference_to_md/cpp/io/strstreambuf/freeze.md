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
  


[`std::strstreambuf`](../strstreambuf.html "cpp/io/strstreambuf")

Public member functions  
---  
[strstreambuf::strstreambuf](strstreambuf.html "cpp/io/strstreambuf/strstreambuf")  
[strstreambuf::~strstreambuf](~strstreambuf.html "cpp/io/strstreambuf/~strstreambuf")  
**strstreambuf::freeze**  
[strstreambuf::str](str.html "cpp/io/strstreambuf/str")  
[strstreambuf::pcount](pcount.html "cpp/io/strstreambuf/pcount")  
Protected member functions  
[strstreambuf::underflow](underflow.html "cpp/io/strstreambuf/underflow")  
[strstreambuf::pbackfail](pbackfail.html "cpp/io/strstreambuf/pbackfail")  
[strstreambuf::overflow](overflow.html "cpp/io/strstreambuf/overflow")  
[strstreambuf::setbuf](setbuf.html "cpp/io/strstreambuf/setbuf")  
[strstreambuf::seekoff](seekoff.html "cpp/io/strstreambuf/seekoff")  
[strstreambuf::seekpos](seekpos.html "cpp/io/strstreambuf/seekpos")  
  


void freeze( bool freezefl = true ); |  |  (deprecated in C++98)   
(removed in C++26)  
---|---|---  
| |   
  
If the buffer uses dynamic allocation, sets the frozen status of the stream to freezefl. 

While the stream is frozen, [overflow()](overflow.html "cpp/io/strstreambuf/overflow") will not reallocate the buffer and the [`destructor`](~strstreambuf.html "cpp/io/strstreambuf/~strstreambuf") will not deallocate the buffer (thereby causing a memory leak). 

## Contents

  * [1 Parameters](freeze.html#Parameters)
  * [2 Return value](freeze.html#Return_value)
  * [3 Notes](freeze.html#Notes)
  * [4 Example](freeze.html#Example)
  * [5 See also](freeze.html#See_also)

  
---  
  
### Parameters

freezefl  |  \-  |  new value to set the freeze status to   
---|---|---  
  
### Return value

(none) 

### Notes

Every call to [str()](str.html "cpp/io/strstreambuf/str") freezes the stream to preserve the validity of the pointer it returns. To allow the destructor to deallocate the buffer, freeze(false) needs to be called explicitly. 

### Example

In this example, initial allocation of the underlying array was for 16 bytes.

Run this code
    
    
    #include <iostream>
    #include <strstream>
     
    int main()
    {
        {
            [std::strstream](../strstream.html) dyn; // dynamically-allocated read/write buffer
            dyn << "Test: " << 1.23; // note: no std::ends to demonstrate append behavior
            [std::cout](../cout.html) << "dynamic buffer holds " << dyn.pcount() << " characters: '";
            [std::cout](../cout.html).write(dyn.str(), dyn.pcount()) << "'\n";
            // the buffer is now frozen, further output will not make the buffer grow
            dyn << "more output, hopefully enough to run out of the allocated space"
                << [std::ends](../manip/ends.html);
            [std::cout](../cout.html) << "After more output, it holds "
                      << dyn.pcount() << " characters: '" << dyn.str() << "'\n";
            dyn.freeze(false); // unfreeze before destructor
        } // memory freed by the destructor
     
        {
            char arr[20];
            [std::ostrstream](../ostrstream.html) st(arr, sizeof arr); // fixed-size buffer
            st << 1.23; // note: no std::ends to demonstrate append behavior
            [std::cout](../cout.html) << "static buffer holds "
                      << st.pcount() << " characters: '";
            [std::cout](../cout.html).write(st.str(), st.pcount());
            [std::cout](../cout.html) << "'\n";
            st << "more output, hopefully enough to run out of the allocated space"
               << [std::ends](../manip/ends.html);
            [std::cout](../cout.html) << "static buffer holds "
                      << st.pcount() << " characters: '";
            [std::cout](../cout.html).write(st.str(), st.pcount());
            [std::cout](../cout.html) << "'\n";
        } // nothing to deallocate, no need to unfreeze,
    }

Output: 
    
    
    dynamic buffer holds 10 characters: 'Test: 1.23'
    After more output, it holds 16 characters: 'Test: 1.23more o'
    static buffer holds 4 characters: '1.23'
    static buffer holds 20 characters: '1.23more output, hop'

### See also

[ freeze](../strstream/freeze.html "cpp/io/strstream/freeze") |  disables/enables automatic reallocation   
(public member function of `std::strstream`)   
---|---  
[ freeze](../ostrstream/freeze.html "cpp/io/ostrstream/freeze") |  disables/enables automatic reallocation   
(public member function of `std::ostrstream`)   
[ (destructor)](~strstreambuf.html "cpp/io/strstreambuf/~strstreambuf")[virtual] |  destructs a `strstreambuf` object, optionally deallocating the character array   
(virtual public member function)   
[ overflow](overflow.html "cpp/io/strstreambuf/overflow")[virtual] |  appends a character to the output sequence, may reallocate or initially allocate the buffer if dynamic and not frozen   
(virtual protected member function) 
