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
[basic_ostream::put](put.html "cpp/io/basic ostream/put")  
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
**operator <<(std::basic_ostream)**  
[print(std::ostream)](print.html "cpp/io/basic ostream/print")(C++23)  
[println(std::ostream)](println.html "cpp/io/basic ostream/println")(C++23)  
[vprint_unicode(std::ostream)](vprint_unicode.html "cpp/io/basic ostream/vprint unicode")(C++23)  
[vprint_nonunicode(std::ostream)](vprint_nonunicode.html "cpp/io/basic ostream/vprint nonunicode")(C++23)  
  


Defined in header `[<ostream>](../../header/ostream.html "cpp/header/ostream")` |  |   
---|---|---  
basic_ostream and character |  |   
| (1) |   
template< class CharT, class Traits >  
basic_ostream<CharT, Traits>&  
operator<<( basic_ostream<CharT, Traits>& os, CharT ch ); |  |   
template< class CharT, class Traits >  
basic_ostream<CharT, Traits>&  
operator<<( basic_ostream<CharT, Traits>& os, char ch ); |  |   
template< class Traits >  
basic_ostream<char, Traits>&  
operator<<( basic_ostream<char, Traits>& os, char ch ); |  |   
template< class Traits >  
basic_ostream<char, Traits>&  
operator<<( basic_ostream<char, Traits>& os, signed char ch ); |  |   
template< class Traits >  
basic_ostream<char, Traits>&  
operator<<( basic_ostream<char, Traits>& os, unsigned char ch ); |  |   
basic_ostream and character array |  |   
| (2) |   
template< class CharT, class Traits >  
basic_ostream<CharT, Traits>&  
operator<<( basic_ostream<CharT, Traits>& os, const CharT* s ); |  |   
template< class CharT, class Traits >  
basic_ostream<CharT, Traits>&  
operator<<( basic_ostream<CharT, Traits>& os, const char* s ); |  |   
template< class Traits >  
basic_ostream<char, Traits>&  
operator<<( basic_ostream<char, Traits>& os, const char* s ); |  |   
template< class Traits >  
basic_ostream<char, Traits>&  
operator<<( basic_ostream<char, Traits>& os, const signed char* s ); |  |   
template< class Traits >  
basic_ostream<char, Traits>&  
operator<<( basic_ostream<char, Traits>& os, const unsigned char* s ); |  |   
basic_ostream rvalue |  |   
template< class Ostream, class T >  
Ostream&& operator<<( Ostream&& os, const T& value ); |  (3)  |  (since C++11)  
deleted overloads for basic_ostream and UTF character/array |  |   
| (4) | (since C++20)  
template< class Traits >  
basic_ostream<char, Traits>&  
operator<<( basic_ostream<char, Traits>& os, wchar_t ch ) = delete; |  |   
template< class Traits >  
basic_ostream<char, Traits>&  
operator<<( basic_ostream<char, Traits>& os, char8_t ch ) = delete; |  |   
template< class Traits >  
basic_ostream<char, Traits>&  
operator<<( basic_ostream<char, Traits>& os, char16_t ch ) = delete; |  |   
template< class Traits >  
basic_ostream<char, Traits>&  
operator<<( basic_ostream<char, Traits>& os, char32_t ch ) = delete; |  |   
template< class Traits >  
basic_ostream<wchar_t, Traits>&  
operator<<( basic_ostream<wchar_t, Traits>& os, char8_t ch ) = delete; |  |   
template< class Traits >  
basic_ostream<wchar_t, Traits>&  
operator<<( basic_ostream<wchar_t, Traits>& os, char16_t ch ) = delete; |  |   
template< class Traits >  
basic_ostream<wchar_t, Traits>&  
operator<<( basic_ostream<wchar_t, Traits>& os, char32_t ch ) = delete; |  |   
template< class Traits >  
basic_ostream<char, Traits>&  
operator<<( basic_ostream<char, Traits>& os, const wchar_t* s ) = delete; |  |   
template< class Traits >  
basic_ostream<char, Traits>&  
operator<<( basic_ostream<char, Traits>& os, const char8_t* s ) = delete; |  |   
template< class Traits >  
basic_ostream<char, Traits>&  
operator<<( basic_ostream<char, Traits>& os, const char16_t* s ) = delete; |  |   
template< class Traits >  
basic_ostream<char, Traits>&  
operator<<( basic_ostream<char, Traits>& os, const char32_t* s ) = delete; |  |   
template< class Traits >  
basic_ostream<wchar_t, Traits>&  
operator<<( basic_ostream<wchar_t, Traits>& os, const char8_t* s ) = delete; |  |   
template< class Traits >  
basic_ostream<wchar_t, Traits>&  
operator<<( basic_ostream<wchar_t, Traits>& os, const char16_t* s ) = delete; |  |   
template< class Traits >  
basic_ostream<wchar_t, Traits>&  
operator<<( basic_ostream<wchar_t, Traits>& os, const char32_t* s ) = delete; |  |   
| |   
  
Inserts a character or a character string. 

1) Behaves as a [FormattedOutputFunction](../../named_req/FormattedOutputFunction.html "cpp/named req/FormattedOutputFunction"). After constructing and checking the [sentry](sentry.html "cpp/io/basic ostream/sentry") object, inserts the character ch. If ch has type char and the [character container type](../../string.html "cpp/string") of os is not char, os.widen(ch) will be inserted instead.

Padding is determined as follows: 

  * If os.width() > 1, then os.width() - 1 copies of os.fill() are added to the output character to form the output character sequence. 
  * If (out.flags() & [std::ios_base::adjustfield](../ios_base/fmtflags.html)) == [std::ios_base::left](../ios_base/fmtflags.html), the fill characters are placed after the output character, otherwise before.



After insertion, os.width(0) is called to cancel the effects of [std::setw](../manip/setw.html "cpp/io/manip/setw"), if any.

2) Behaves as a [FormattedOutputFunction](../../named_req/FormattedOutputFunction.html "cpp/named req/FormattedOutputFunction"). After constructing and checking the sentry object, inserts successive characters from the character array whose first element is pointed to by s. 

  * For the first and third overloads (where `CharT` matches the type of ch), exactly traits::length(s) characters are inserted. 
  * For the second overload, exactly [std::char_traits](../../string/char_traits.html)<char>::length(s) characters are inserted. 
  * For the last two overloads, exactly traits::length(reinterpret_cast<const char*>(s)) are inserted. 



Before insertion, first, all characters are widened using os.widen(), then padding is determined as follows: 

  * If the number of characters to insert is less than os.width(), then enough copies of os.fill() are added to the character sequence to make its length equal os.width(). 
  * If (out.flags() & [std::ios_base::adjustfield](../ios_base/fmtflags.html)) == [std::ios_base::left](../ios_base/fmtflags.html), the fill characters are added at the end of the output sequence, otherwise they are added before the output sequence.



After insertion, os.width(0) is called to cancel the effects of [std::setw](../manip/setw.html "cpp/io/manip/setw"), if any.

If s is a null pointer, the behavior is undefined.

3) Calls the appropriate insertion operator, given an rvalue reference to an output stream object (equivalent to os << value). This overload participates in overload resolution only if the expression os << value is well-formed and `Ostream` is a class type publicly and unambiguously derived from [std::ios_base](../ios_base.html "cpp/io/ios base").

4) Overloads that accept char16_t, char32_t etc (or null terminated sequence thereof) are deleted: [std::cout](../cout.html) << u'X' is not allowed. Previously, these would print an integer or pointer value.

## Contents

  * [1 Parameters](operator_ltlt2.html#Parameters)
  * [2 Return value](operator_ltlt2.html#Return_value)
  * [3 Notes](operator_ltlt2.html#Notes)
  * [4 Example](operator_ltlt2.html#Example)
  * [5 Defect reports](operator_ltlt2.html#Defect_reports)
  * [6 See also](operator_ltlt2.html#See_also)

  
---  
  
### Parameters

os  |  \-  |  output stream to insert data to   
---|---|---  
ch  |  \-  |  reference to a character to insert   
s  |  \-  |  pointer to a character string to insert   
  
### Return value

1,2) os

3) std::move(os)

### Notes

Before [LWG issue 1203](https://cplusplus.github.io/LWG/issue1203), code such as ([std::ostringstream](../basic_ostringstream.html)() << 1.2).str() does not compile. 

### Example

Run this code
    
    
    #include <fstream>
    #include <iostream>
     
    void foo()
    {
        // error: operator<< (basic_ostream<char, _Traits>&, char8_t) is deleted
    //  std::cout << u8'z' << '\n';
    }
     
    [std::ostream](../basic_ostream.html)& operator<<([std::ostream](../basic_ostream.html)& os, char8_t const& ch)
    {
        return os << static_cast<char>(ch);
    }
     
    int main()
    {
        [std::cout](../cout.html) << "Hello, world" // uses `const char*` overload
                  << '\n';          // uses `char` overload
        [std::ofstream](../basic_ofstream.html){"test.txt"} << 1.2; // uses rvalue overload
     
        [std::cout](../cout.html) << u8'!' << '\n'; // uses program-defined operator<<(os, char8_t const&)
    }

Output: 
    
    
    Hello, world
    !

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 167](https://cplusplus.github.io/LWG/issue167) | C++98  | the number of characters inserted for all  
overloads in (2) was traits::length(s) | updated the numbers for the overloads  
where `CharT` does not match the type of ch  
[LWG 1203](https://cplusplus.github.io/LWG/issue1203) | C++11  | overload for rvalue stream returned  
lvalue reference to the base class  | returns rvalue reference  
to the derived class   
[LWG 2011](https://cplusplus.github.io/LWG/issue2011) | C++98  | padding was determined by [std::num_put::do_put()](../../locale/num_put/put.html "cpp/locale/num put/put") | determined by the operator itself   
[LWG 2534](https://cplusplus.github.io/LWG/issue2534) | C++11  | overload for rvalue stream was not constrained  | constrained   
  
### See also

[ operator<<](operator_ltlt.html "cpp/io/basic ostream/operator ltlt") |  inserts formatted data   
(public member function)   
---|---  
[ print(std::ostream)](print.html "cpp/io/basic ostream/print")(C++23) |  outputs [formatted](../../utility/format.html "cpp/utility/format") representation of the arguments   
(function template)   
[ widen](../basic_ios/widen.html "cpp/io/basic ios/widen") |  widens characters   
(public member function of `std::basic_ios<CharT,Traits>`) 
