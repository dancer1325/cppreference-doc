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
**basic_ostream::operator <<**  
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
[operator<<(std::basic_ostream)](operator_ltlt2.html "cpp/io/basic ostream/operator ltlt2")  
[print(std::ostream)](print.html "cpp/io/basic ostream/print")(C++23)  
[println(std::ostream)](println.html "cpp/io/basic ostream/println")(C++23)  
[vprint_unicode(std::ostream)](vprint_unicode.html "cpp/io/basic ostream/vprint unicode")(C++23)  
[vprint_nonunicode(std::ostream)](vprint_nonunicode.html "cpp/io/basic ostream/vprint nonunicode")(C++23)  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_ostream/navbar_content&action=edit)

basic_ostream& operator<<( bool value ); |  (1)  |   
---|---|---  
basic_ostream& operator<<( long value ); |  (2) |   
basic_ostream& operator<<( unsigned long value ); |  (3)  |   
basic_ostream& operator<<( long long value ); |  (4)  |  (since C++11)  
basic_ostream& operator<<( unsigned long long value ); |  (5)  |  (since C++11)  
basic_ostream& operator<<( double value ); |  (6)  |   
basic_ostream& operator<<( long double value ); |  (7)  |   
basic_ostream& operator<<( const void* value ); |  (8) |   
basic_ostream& operator<<( const volatile void* value ); |  (9)  |  (since C++23)  
basic_ostream& operator<<( [std::nullptr_t](../../types/nullptr_t.html) ); |  (10)  |  (since C++17)  
basic_ostream& operator<<( short value ); |  (11) |   
basic_ostream& operator<<( int value ); |  (12)  |   
basic_ostream& operator<<( unsigned short value ); |  (13)  |   
basic_ostream& operator<<( unsigned int value ); |  (14)  |   
basic_ostream& operator<<( float value ); |  (15)  |   
basic_ostream& operator<<( /* extended-floating-point-type */ value ); |  (16)  |  (since C++23)  
basic_ostream& operator<<( [std::basic_streambuf](../basic_streambuf.html)<CharT, Traits>* sb ); |  (17)  |   
basic_ostream& operator<<(  
[std::ios_base](../ios_base.html)& (*func)([std::ios_base](../ios_base.html)&) ); |  (18) |   
basic_ostream& operator<<(  
[std::basic_ios](../basic_ios.html)<CharT, Traits>& (*func)([std::basic_ios](../basic_ios.html)<CharT, Traits>&) ); |  (19)  |   
basic_ostream& operator<<(  
[std::basic_ostream](../basic_ostream.html)<CharT, Traits>& (*func)  
([std::basic_ostream](../basic_ostream.html)<CharT, Traits>&) ); |  (20)  |   
| |   
  
Inserts data into the stream. 

1-8) Inserts value.

This function behaves as a [FormattedOutputFunction](../../named_req/FormattedOutputFunction.html "cpp/named req/FormattedOutputFunction"). After constructing and checking the sentry object, inserts a value by calling [`std::num_put::put()`](../../locale/num_put/put.html "cpp/locale/num put/put"). If the end of file condition was encountered during output (put().failed() == true), sets `badbit`.

9) Equivalent to return operator<<(const_cast<const void*>(p));.

10) Equivalent to return *this << s;, where s is an implementation-defined null-terminated character type string.

11) Inserts a value from short value.

This function behaves as a [FormattedOutputFunction](../../named_req/FormattedOutputFunction.html "cpp/named req/FormattedOutputFunction"). After constructing and checking the sentry object, inserts a long value lval as in (2), where lval is 

  * static_cast<long>(static_cast<unsigned short>(value)), if flags() & [std::ios_base::basefield](../ios_base/fmtflags.html) is [std::ios_base::oct](../ios_base/fmtflags.html "cpp/io/ios base/fmtflags") or [std::ios_base::hex](../ios_base/fmtflags.html "cpp/io/ios base/fmtflags"), or 
  * static_cast<long>(value) otherwise.



12) Inserts a value from int value.

This function behaves as a [FormattedOutputFunction](../../named_req/FormattedOutputFunction.html "cpp/named req/FormattedOutputFunction"). After constructing and checking the sentry object, inserts a long value lval as in (2), where lval is 

  * static_cast<long>(static_cast<unsigned int>(value)), if flags() & [std::ios_base::basefield](../ios_base/fmtflags.html) is [std::ios_base::oct](../ios_base/fmtflags.html "cpp/io/ios base/fmtflags") or [std::ios_base::hex](../ios_base/fmtflags.html "cpp/io/ios base/fmtflags"), or 
  * static_cast<long>(value) otherwise.



13,14) Inserts a value from unsigned short or unsigned int value.

This function behaves as a [FormattedOutputFunction](../../named_req/FormattedOutputFunction.html "cpp/named req/FormattedOutputFunction"). After constructing and checking the sentry object, inserts static_cast<unsigned long>(value) as in (3).

15) Inserts a value from float value.

This function behaves as a [FormattedOutputFunction](../../named_req/FormattedOutputFunction.html "cpp/named req/FormattedOutputFunction"). After constructing and checking the sentry object, inserts static_cast<double>(value) as in (6).

16) Inserts a value from value. The library provides overloads for all cv-unqualified [extended floating-point types](../../language/types.html#Extended_floating-point_types "cpp/language/types") as the type of the parameter value.

This function behaves as a [FormattedOutputFunction](../../named_req/FormattedOutputFunction.html "cpp/named req/FormattedOutputFunction"). After constructing and checking the sentry object, checks the [floating-point conversion rank](../../language/usual_arithmetic_conversions.html#Floating-point_conversion_rank "cpp/language/usual arithmetic conversions") of /* extended-floating-point-type */: 

  * If the rank is less than or equal to that of double, inserts static_cast<double>(value) as in (6). 
  * Otherwise, if the rank is less than or equal to that of long double, inserts static_cast<long double>(value) as in (7). 
  * Otherwise, an invocation of this overload is conditionally supported with implementation-defined semantics.



17) This function behaves as an [UnformattedOutputFunction](../../named_req/UnformattedOutputFunction.html "cpp/named req/UnformattedOutputFunction"). After constructing and checking the sentry object, checks if sb is a null pointer. If it is, executes setstate(badbit) and exits. Otherwise, extracts characters from the input sequence controlled by sb and inserts them into *this until one of the following conditions are met: 

    

  * end-of-file occurs on the input sequence; 
  * inserting in the output sequence fails (in which case the character to be inserted is not extracted); 
  * an exception occurs (in which case the exception is caught). 


If no characters were inserted, executes setstate(failbit). If an exception was thrown while extracting, sets `failbit` and, if `failbit` is set in [exceptions()](../basic_ios/exceptions.html "cpp/io/basic ios/exceptions"), rethrows the exception.

18-20) Calls func(*this). These overloads are used to implement output I/O manipulators such as [std::endl](../manip/endl.html "cpp/io/manip/endl").

## Contents

  * [1 Parameters](operator_ltlt.html#Parameters)
  * [2 Return value](operator_ltlt.html#Return_value)
  * [3 Notes](operator_ltlt.html#Notes)
  * [4 Example](operator_ltlt.html#Example)
  * [5 Defect reports](operator_ltlt.html#Defect_reports)
  * [6 See also](operator_ltlt.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_ostream/operator_ltlt&action=edit&section=1 "Edit section: Parameters")] Parameters

value  |  \-  |  integer, floating-point, boolean, or pointer value to insert   
---|---|---  
func  |  \-  |  function to call   
sb  |  \-  |  pointer to the stream buffer to read the data from   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_ostream/operator_ltlt&action=edit&section=2 "Edit section: Return value")] Return value

1-19) *this

20) func(*this)

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_ostream/operator_ltlt&action=edit&section=3 "Edit section: Notes")] Notes

There are no overloads for pointers to non-static members, pointers to volatiles,(until C++23) or function pointers (other than the ones with signatures accepted by the ([18-20](operator_ltlt.html#Version_18)) overloads). 

  * Attempting to output such objects invokes implicit conversion to bool, and, for any non-null pointer value, the value 1 is printed (unless `boolalpha` was set, in which case true is printed). 



Character and character string arguments (e.g., of type char or const char*) are handled by the [non-member overloads](operator_ltlt2.html "cpp/io/basic ostream/operator ltlt2") of operator<<. 

  * Attempting to output a character using the member function call syntax (e.g., [std::cout](../cout.html).operator<<('c');) will call one of the overloads in ([2-5](operator_ltlt.html#Version_2)) or ([11-14](operator_ltlt.html#Version_11)) and output the numerical value. 
  * Attempting to output a character string using the member function call syntax will call overload (8) and print the pointer value instead. 



Overload (10) was added by the resolution of [LWG issue 2221](https://cplusplus.github.io/LWG/issue2221), but it is never implemented in any standard library implementation under C++11/14 modes. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_ostream/operator_ltlt&action=edit&section=4 "Edit section: Example")] Example

Run this code
    
    
    #include <iomanip>
    #include <iostream>
    #include <sstream>
     
    int fun() { return 42; }
     
    int main()
    {
        [std::istringstream](../basic_istringstream.html) input(" \"Some text.\" ");
        double f = 3.14;
        bool b = true;
     
        [std::cout](../cout.html)
            << fun()          // int overload (12)
            << ' '            // non-member overload
            << [std::boolalpha](../manip/boolalpha.html) // function overload (18)
            << b              // bool overload (1)
            << " "            // non-member overload
            << [std::fixed](../manip/fixed.html)     // function overload (18) again
            << f              // double overload (6)
            << input.rdbuf()  // streambuf overload
            << fun            // bool overload (1): there's no overload for int(*)()
            << [std::endl](../manip/endl.html);     // function overload (18) again
     
        int x = 0;
        int* p1 = &x;
        volatile int* p2 = &x;
        [std::cout](../cout.html)
            << "p1: " << p1 << '\n'  // `const void*` overload, prints address
            << "p2: " << p2 << '\n'; // before C++23 (P1147): bool overload :), because
                // operator<<(const void*) is not a match, as it discards the `volatile`
                // qualifier. To fix this, C++23 adds `const volatile void*` overload (9),
                // that prints the address as expected.
    }

Possible output: 
    
    
    42 true 3.140000 "Some text." true
    p1: 0x7ffcea766600
    p2: 0x7ffcea766600

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_ostream/operator_ltlt&action=edit&section=5 "Edit section: Defect reports")] Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 117](https://cplusplus.github.io/LWG/issue117) | C++98  | overloads (1-8,11-15) delegated the insertion to  
[`num_put::put`](../../locale/num_put/put.html "cpp/locale/num put/put"), but it does not have overloads for short,  
unsigned short, int, unsigned int, and float | they are converted  
before being passed  
to `num_put::put`  
[LWG 567](https://cplusplus.github.io/LWG/issue567) | C++98  | overload (17) behaved as a [FormattedOutputFunction](../../named_req/FormattedOutputFunction.html "cpp/named req/FormattedOutputFunction")  
because of the resolution of [LWG issue 60](https://cplusplus.github.io/LWG/issue60) | it behaves as an  
[UnformattedOutputFunction](../../named_req/UnformattedOutputFunction.html "cpp/named req/UnformattedOutputFunction")  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/basic_ostream/operator_ltlt&action=edit&section=6 "Edit section: See also")] See also

[ operator<<(std::basic_ostream)](operator_ltlt2.html "cpp/io/basic ostream/operator ltlt2") |  inserts character data or insert into rvalue stream   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_ostream/dsc_operator_ltlt2&action=edit)  
---|---  
[ operator<<operator>>](../../string/basic_string/operator_ltltgtgt.html "cpp/string/basic string/operator ltltgtgt") |  performs stream input and output on strings   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string/dsc_operator_ltltgtgt&action=edit)  
[ operator<<](../../string/basic_string_view/operator_ltlt.html "cpp/string/basic string view/operator ltlt")(C++17) |  performs stream output on string views   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/string/basic_string_view/dsc_operator_ltlt&action=edit)  
[ operator<<operator>>](../../utility/bitset/operator_ltltgtgt2.html "cpp/utility/bitset/operator ltltgtgt2") |  performs stream input and output of bitsets   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/utility/bitset/dsc_operator_ltltgtgt2&action=edit)  
[ operator<<operator>>](../../numeric/complex/operator_ltltgtgt.html "cpp/numeric/complex/operator ltltgtgt") |  serializes and deserializes a complex number   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/complex/dsc_operator_ltltgtgt&action=edit)  
[ operator<<operator>>](../../numeric/random/linear_congruential_engine/operator_ltltgtgt.html "cpp/numeric/random/linear congruential engine/operator ltltgtgt")(C++11) |  performs stream input and output on pseudo-random number engine   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/random/engine/dsc_operator_ltltgtgt&action=edit)  
[ operator<<operator>>](../../numeric/random/uniform_int_distribution/operator_ltltgtgt.html "cpp/numeric/random/uniform int distribution/operator ltltgtgt")(C++11) |  performs stream input and output on pseudo-random number distribution   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/numeric/random/distribution/dsc_operator_ltltgtgt&action=edit)  
[ put](put.html "cpp/io/basic ostream/put") |  inserts a character   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_ostream/dsc_put&action=edit)  
[ write](write.html "cpp/io/basic ostream/write") |  inserts blocks of characters   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_ostream/dsc_write&action=edit)  
[ to_chars](../../utility/to_chars.html "cpp/utility/to chars")(C++17) |  converts an integer or floating-point value to a character sequence   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/utility/dsc_to_chars&action=edit)
