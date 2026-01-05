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
  


[`std::basic_streambuf`](../basic_streambuf.html "cpp/io/basic streambuf")

| Public member functions  
---  
[basic_streambuf::~basic_streambuf](~basic_streambuf.html "cpp/io/basic streambuf/~basic streambuf")  
Locales  
[basic_streambuf::pubimbue](pubimbue.html "cpp/io/basic streambuf/pubimbue")  
[basic_streambuf::getloc](getloc.html "cpp/io/basic streambuf/getloc")  
Positioning  
[basic_streambuf::pubsetbuf](pubsetbuf.html "cpp/io/basic streambuf/pubsetbuf")  
[basic_streambuf::pubseekoff](pubseekoff.html "cpp/io/basic streambuf/pubseekoff")  
[basic_streambuf::pubseekpos](pubseekpos.html "cpp/io/basic streambuf/pubseekpos")  
[basic_streambuf::pubsync](pubsync.html "cpp/io/basic streambuf/pubsync")  
Get area  
[basic_streambuf::in_avail](in_avail.html "cpp/io/basic streambuf/in avail")  
[basic_streambuf::snextc](snextc.html "cpp/io/basic streambuf/snextc")  
[basic_streambuf::sbumpc](sbumpc.html "cpp/io/basic streambuf/sbumpc")  
[basic_streambuf::sgetc](sgetc.html "cpp/io/basic streambuf/sgetc")  
[basic_streambuf::sgetn](sgetn.html "cpp/io/basic streambuf/sgetn")  
Put area  
[basic_streambuf::sputc](sputc.html "cpp/io/basic streambuf/sputc")  
[basic_streambuf::sputn](sputn.html "cpp/io/basic streambuf/sputn")  
Putback  
[basic_streambuf::sputbackc](sputbackc.html "cpp/io/basic streambuf/sputbackc")  
[basic_streambuf::sungetc](sungetc.html "cpp/io/basic streambuf/sungetc")  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
| Protected member functions  
---  
[basic_streambuf::basic_streambuf](basic_streambuf.html "cpp/io/basic streambuf/basic streambuf")  
[basic_streambuf::operator=](operator=.html "cpp/io/basic streambuf/operator=")(C++11)  
[basic_streambuf::swap](swap.html "cpp/io/basic streambuf/swap")(C++11)  
Locales  
[basic_streambuf::imbue](pubimbue.html "cpp/io/basic streambuf/pubimbue")  
Positioning  
[basic_streambuf::setbuf](pubsetbuf.html "cpp/io/basic streambuf/pubsetbuf")  
[basic_streambuf::seekoff](pubseekoff.html "cpp/io/basic streambuf/pubseekoff")  
[basic_streambuf::seekpos](pubseekpos.html "cpp/io/basic streambuf/pubseekpos")  
[basic_streambuf::sync](pubsync.html "cpp/io/basic streambuf/pubsync")  
Get area  
[basic_streambuf::showmanyc](showmanyc.html "cpp/io/basic streambuf/showmanyc")  
[basic_streambuf::underflow](underflow.html "cpp/io/basic streambuf/underflow")  
[basic_streambuf::uflow](uflow.html "cpp/io/basic streambuf/uflow")  
[basic_streambuf::xsgetn](sgetn.html "cpp/io/basic streambuf/sgetn")  
[basic_streambuf::ebackbasic_streambuf::gptrbasic_streambuf::egptr](gptr.html "cpp/io/basic streambuf/gptr")  
[basic_streambuf::gbump](gbump.html "cpp/io/basic streambuf/gbump")  
[basic_streambuf::setg](setg.html "cpp/io/basic streambuf/setg")  
Put area  
[basic_streambuf::xsputn](sputn.html "cpp/io/basic streambuf/sputn")  
**basic_streambuf::overflow**  
[basic_streambuf::pbasebasic_streambuf::pptrbasic_streambuf::epptr](pptr.html "cpp/io/basic streambuf/pptr")  
[basic_streambuf::pbump](pbump.html "cpp/io/basic streambuf/pbump")  
[basic_streambuf::setp](setp.html "cpp/io/basic streambuf/setp")  
Putback  
[basic_streambuf::pbackfail](pbackfail.html "cpp/io/basic streambuf/pbackfail")  
  


protected:  
virtual int_type overflow( int_type ch = Traits::eof() ); |  |   
---|---|---  
| |   
  
The intent of this function is to transmit characters from the [put area](../basic_streambuf.html "cpp/io/basic streambuf") of the stream buffer to the [associated character sequence](../basic_streambuf.html "cpp/io/basic streambuf"). 

Formally, this function ensures that there is space at the put area for at least one character. The base class version always fails, and a possibly-succeeding implementation can only be provided in derived classes (see [implementation requirements](overflow.html#Implementation_requirements)). The standard library provides [std::strstreambuf::overflow()](../strstreambuf/overflow.html "cpp/io/strstreambuf/overflow"), (until C++26)[std::basic_stringbuf::overflow()](../basic_stringbuf/overflow.html "cpp/io/basic stringbuf/overflow") and [`std::basic_filebuf::overflow()`](../basic_filebuf/overflow.html "cpp/io/basic filebuf/overflow"). 

## Contents

  * [1 Parameters](overflow.html#Parameters)
  * [2 Return value](overflow.html#Return_value)
  * [3 Implementation requirements](overflow.html#Implementation_requirements)
  * [4 Note](overflow.html#Note)
  * [5 Example](overflow.html#Example)
  * [6 See also](overflow.html#See_also)

  
---  
  
### Parameters

ch  |  \-  |  the character to store in the put area   
---|---|---  
  
### Return value

Traits::eof()

### Implementation requirements

Every overriding definition of this virtual function must obey the following constraints, otherwise the behavior is undefined: 

  * The effect of the function is to consume some initial subsequence of the characters of the _pending sequence ﻿_. The pending sequence is defined as the concatenation of the following sequences: 
    * The put area (formally, empty sequence if [pbase()](pptr.html "cpp/io/basic streambuf/pptr") is null, otherwise pptr() - pbase() characters beginning at [pbase()](pptr.html "cpp/io/basic streambuf/pptr")). 
    * The character ch or nothing if ch is EOF (formally, if Traits::eq_int_type(ch, Traits::eof()) returns true). 
  * After consumption, the put area pointers are updated to hold the remaining characters, if any. Formally, let r be the number of characters in the pending sequence not consumed: 
    * If r is non-zero, then [pbase()](pptr.html "cpp/io/basic streambuf/pptr") and [pptr()](pptr.html "cpp/io/basic streambuf/pptr") are set so that all following conditions are satisfied: 
      * pptr() - pbase() is r. 
      * The r characters starting at [pbase()](pptr.html "cpp/io/basic streambuf/pptr") are the associated output stream. 
    * If r is zero (all characters of the pending sequence have been consumed), then either [pbase()](pptr.html "cpp/io/basic streambuf/pptr") is set to a null value, or [pbase()](pptr.html "cpp/io/basic streambuf/pptr") and [pptr()](pptr.html "cpp/io/basic streambuf/pptr") are both set to the same non-null value. 
  * The function may fail if either appending some character to the associated output stream fails or if it is unable to establish [pbase()](pptr.html "cpp/io/basic streambuf/pptr") and [pptr()](pptr.html "cpp/io/basic streambuf/pptr") according to the above rules. 
  * If the function succeeds, returns some value other than Traits::eof(). Typically, ch is returned to indicate success, except when Traits::eq_int_type(ch, Traits::eof()) returns true, in which case Traits::not_eof(ch) is returned. 
  * If the function fails, returns Traits::eof() or throws an exception. 



### Note

The [sputc()](sputc.html "cpp/io/basic streambuf/sputc") and [sputn()](sputn.html "cpp/io/basic streambuf/sputn") call this function in case of an overflow (pptr() == nullptr or pptr() >= epptr()). 

### Example

Run this code
    
    
    #include <array>
    #include <cstddef>
    #include <iostream>
     
    // Buffer for std::ostream implemented by std::array
    template<[std::size_t](../../types/size_t.html) size, class CharT = char>
    struct ArrayedStreamBuffer : [std::basic_streambuf](../basic_streambuf.html)<CharT>
    {
        using Base = [std::basic_streambuf](../basic_streambuf.html)<CharT>;
        using char_type = typename Base::char_type;
        using int_type = typename Base::int_type;
     
        ArrayedStreamBuffer()
        {
            // put area pointers to work with 'buffer'
            Base::setp(buffer.data(), buffer.data() + size);
        }
     
        int_type overflow(int_type ch) 
        {
            [std::cout](../cout.html) << "overflow\n";
            return Base::overflow(ch);
        }
     
        void print_buffer()
        {
            for (char_type i : buffer)
            {
                if (i == 0)
                    [std::cout](../cout.html) << "\\0";
                else
                    [std::cout](../cout.html) << i;
                [std::cout](../cout.html) << ' ';
            }
            [std::cout](../cout.html) << '\n';
        }
     
    private:
        [std::array](../../container/array.html)<char_type, size> buffer{}; // value-initialize buffer
    };
     
    int main()
    {
        ArrayedStreamBuffer<10> streambuf;
        [std::ostream](../basic_ostream.html) stream(&streambuf);
     
        stream << "hello";
        streambuf.print_buffer();
        if (stream.good())
            [std::cout](../cout.html) << "stream is good\n";
     
        stream << "world";
        streambuf.print_buffer();
        if (stream.good())
            [std::cout](../cout.html) << "stream is good\n";
     
        stream << "!";
        streambuf.print_buffer();
        if (!stream.good())
            [std::cout](../cout.html) << "stream is not good\n";
    }

Output: 
    
    
    h e l l o \0 \0 \0 \0 \0
    stream is good
    h e l l o w o r l d 
    stream is good
    overflow
    h e l l o w o r l d 
    stream is not good

### See also

[ uflow](uflow.html "cpp/io/basic streambuf/uflow")[virtual] |  reads characters from the associated input sequence to the get area and advances the next pointer   
(virtual protected member function)   
---|---  
[ underflow](underflow.html "cpp/io/basic streambuf/underflow")[virtual] |  reads characters from the associated input sequence to the get area   
(virtual protected member function)   
[ overflow](../basic_filebuf/overflow.html "cpp/io/basic filebuf/overflow")[virtual] |  writes characters to the associated file from the put area   
(virtual protected member function of `std::basic_filebuf<CharT,Traits>`)   
[ overflow](../basic_stringbuf/overflow.html "cpp/io/basic stringbuf/overflow")[virtual] |  appends a character to the output sequence   
(virtual protected member function of `std::basic_stringbuf<CharT,Traits,Allocator>`)   
[ overflow](../strstreambuf/overflow.html "cpp/io/strstreambuf/overflow")[virtual] |  appends a character to the output sequence, may reallocate or initially allocate the buffer if dynamic and not frozen   
(virtual protected member function of `std::strstreambuf`) 
