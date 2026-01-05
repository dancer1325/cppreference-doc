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
  


[`std::basic_istream`](../basic_istream.html "cpp/io/basic istream")

Global objects  
---  
[cinwcin](../cin.html "cpp/io/cin")  
Member functions  
[basic_istream::basic_istream](basic_istream.html "cpp/io/basic istream/basic istream")  
[basic_istream::~basic_istream](~basic_istream.html "cpp/io/basic istream/~basic istream")  
[basic_istream::operator=](operator=.html "cpp/io/basic istream/operator=")(C++11)  
Formatted input  
[basic_istream::operator>>](operator_gtgt.html "cpp/io/basic istream/operator gtgt")  
Unformatted input  
**basic_istream::get**  
[basic_istream::peek](peek.html "cpp/io/basic istream/peek")  
[basic_istream::unget](unget.html "cpp/io/basic istream/unget")  
[basic_istream::putback](putback.html "cpp/io/basic istream/putback")  
[basic_istream::getline](getline.html "cpp/io/basic istream/getline")  
[basic_istream::ignore](ignore.html "cpp/io/basic istream/ignore")  
[basic_istream::read](read.html "cpp/io/basic istream/read")  
[basic_istream::readsome](readsome.html "cpp/io/basic istream/readsome")  
[basic_istream::gcount](gcount.html "cpp/io/basic istream/gcount")  
Positioning  
[basic_istream::tellg](tellg.html "cpp/io/basic istream/tellg")  
[basic_istream::seekg](seekg.html "cpp/io/basic istream/seekg")  
Miscellaneous  
[basic_istream::sync](sync.html "cpp/io/basic istream/sync")  
[basic_istream::swap](swap.html "cpp/io/basic istream/swap")(C++11)  
Member classes  
[basic_istream::sentry](sentry.html "cpp/io/basic istream/sentry")  
Non-member functions  
[operator>>(std::basic_istream)](operator_gtgt2.html "cpp/io/basic istream/operator gtgt2")  
  


int_type get(); |  (1)  |   
---|---|---  
basic_istream& get( char_type& ch ); |  (2)  |   
basic_istream& get( char_type* s, [std::streamsize](../streamsize.html) count ); |  (3)  |   
basic_istream& get( char_type* s, [std::streamsize](../streamsize.html) count, char_type delim ); |  (4)  |   
basic_istream& get( basic_streambuf& strbuf ); |  (5)  |   
basic_istream& get( basic_streambuf& strbuf, char_type delim ); |  (6)  |   
| |   
  
Extracts character or characters from stream. 

All versions behave as [UnformattedInputFunctions](../../named_req/UnformattedInputFunction.html "cpp/named req/UnformattedInputFunction"). After constructing and checking the sentry object, these functions perform the following: 

1) Reads one character and returns it if available. Otherwise, returns Traits::eof() and sets [failbit](../ios_base/iostate.html "cpp/io/ios base/iostate") and [eofbit](../ios_base/iostate.html "cpp/io/ios base/iostate").

2) Reads one character and stores it to ch if available. Otherwise, leaves ch unmodified and sets [failbit](../ios_base/iostate.html "cpp/io/ios base/iostate") and [eofbit](../ios_base/iostate.html "cpp/io/ios base/iostate"). Note that this function is not overloaded on the types signed char and unsigned char, unlike the formatted character input operator>>.

3) Same as get(s, count, widen('\n')), that is, reads at most [std::max](../../algorithm/max.html)(0, count - 1) characters and stores them into character string pointed to by s until '\n' is found.

4) Reads characters and stores them into the successive locations of the character array whose first element is pointed to by s. Characters are extracted and stored until any of the following occurs: 

  * count is less than 1 or count - 1 characters have been stored. 
  * end of file condition occurs in the input sequence (setstate(eofbit) is called). 
  * the next available input character c equals delim, as determined by Traits::eq(c, delim). This character is not extracted (unlike [`getline()`](getline.html "cpp/io/basic istream/getline")).



In any case, if count > 0, a null character (CharT() is stored in the next successive location of the array.

5) Same as get(strbuf, widen('\n')), that is, reads available characters and inserts them to the given [`basic_streambuf`](../basic_streambuf.html "cpp/io/basic streambuf") object until '\n' is found.

6) Reads characters and inserts them to the output sequence controlled by the given [`basic_streambuf`](../basic_streambuf.html "cpp/io/basic streambuf") object. Characters are extracted and inserted into strbuf until any of the following occurs: 

  * end of file condition occurs in the input sequence. 
  * inserting into the output sequence fails (in which case the character that could not be inserted, is not extracted). 
  * the next available input character c equals delim, as determined by Traits::eq(c, delim). This character is not extracted. 
  * an exception occurs (in which case the exception is caught and not rethrown).



If no characters were extracted, calls setstate(failbit). 

All versions set the value of [gcount()](gcount.html "cpp/io/basic istream/gcount") to the number of characters extracted. 

## Contents

  * [1 Parameters](get.html#Parameters)
  * [2 Return value](get.html#Return_value)
  * [3 Exceptions](get.html#Exceptions)
  * [4 Example](get.html#Example)
  * [5 Defect reports](get.html#Defect_reports)
  * [6 See also](get.html#See_also)

  
---  
  
### Parameters

ch  |  \-  |  reference to the character to write the result to   
---|---|---  
s  |  \-  |  pointer to the character string to store the characters to   
count  |  \-  |  size of character string pointed to by s  
delim  |  \-  |  delimiting character to stop the extraction at. It is not extracted and not stored   
strbuf  |  \-  |  stream buffer to read the content to   
  
### Return value

1) The extracted character or Traits::eof().

2-6) *this

### Exceptions



[failure](../ios_base/failure.html "cpp/io/ios base/failure") if an error occurred (the error state flag is not [goodbit](../ios_base/iostate.html "cpp/io/ios base/iostate")) and [exceptions()](../basic_ios/exceptions.html "cpp/io/basic ios/exceptions") is set to throw for that state. 

If an internal operation throws an exception, it is caught and [badbit](../ios_base/iostate.html "cpp/io/ios base/iostate") is set. If [exceptions()](../basic_ios/exceptions.html "cpp/io/basic ios/exceptions") is set for `badbit`, the exception is rethrown. 

### Example

Run this code
    
    
    #include <iostream>
    #include <sstream>
     
    int main()
    {
        [std::istringstream](../basic_istringstream.html) s1("Hello, world.");
        char c1 = s1.get(); // reads 'H'
        [std::cout](../cout.html) << "after reading " << c1 << ", gcount() == " <<  s1.gcount() << '\n';
     
        char c2;
        s1.get(c2);         // reads 'e'
        char str[5];
        s1.get(str, 5);     // reads "llo,"
        [std::cout](../cout.html) << "after reading " << str << ", gcount() == " <<  s1.gcount() << '\n';
     
        [std::cout](../cout.html) << c1 << c2 << str;
        s1.get(*[std::cout](../cout.html).rdbuf()); // reads the rest, not including '\n'
        [std::cout](../cout.html) << "\nAfter the last get(), gcount() == " << s1.gcount() << '\n';
    }

Output: 
    
    
    after reading H, gcount() == 1
    after reading llo,, gcount() == 4
    Hello, world.
    After the last get(), gcount() == 7

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 370](https://cplusplus.github.io/LWG/issue370) | C++98  | the effect of overload (5) was get(s, count, widen('\n')),  
which is the effect of overload (3) | corrected to  
get(strbuf, widen('\n'))  
[LWG 531](https://cplusplus.github.io/LWG/issue531) | C++98  | overloads (3,4) could not handle the  
case where count is non-positive  | no character is  
extracted in this case   
  
### See also

[ read](read.html "cpp/io/basic istream/read") |  extracts blocks of characters   
(public member function)   
---|---  
[ operator>>](operator_gtgt.html "cpp/io/basic istream/operator gtgt") |  extracts formatted data   
(public member function)   
[ operator>>(std::basic_istream)](operator_gtgt2.html "cpp/io/basic istream/operator gtgt2") |  extracts characters and character arrays   
(function template) 
