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
  


[`std::ios_base`](../ios_base.html "cpp/io/ios base")

Member functions  
---  
[ios_base::ios_base](ios_base.html "cpp/io/ios base/ios base")  
[ios_base::~ios_base](~ios_base.html "cpp/io/ios base/~ios base")  
[ios_base::operator=](operator=.html "cpp/io/ios base/operator=")  
Formatting  
[ios_base::flags](flags.html "cpp/io/ios base/flags")  
[ios_base::setf](setf.html "cpp/io/ios base/setf")  
[ios_base::unsetf](unsetf.html "cpp/io/ios base/unsetf")  
[ios_base::precision](precision.html "cpp/io/ios base/precision")  
[ios_base::width](width.html "cpp/io/ios base/width")  
Locales  
[ios_base::imbue](imbue.html "cpp/io/ios base/imbue")  
[ios_base::getloc](getloc.html "cpp/io/ios base/getloc")  
Internal extensible array  
[ios_base::xalloc](xalloc.html "cpp/io/ios base/xalloc")  
[ios_base::iword](iword.html "cpp/io/ios base/iword")  
[ios_base::pword](pword.html "cpp/io/ios base/pword")  
Miscellaneous  
[ios_base::register_callback](register_callback.html "cpp/io/ios base/register callback")  
[ios_base::sync_with_stdio](sync_with_stdio.html "cpp/io/ios base/sync with stdio")  
Member classes  
**ios_base::failure**  
[ios_base::Init](Init.html "cpp/io/ios base/Init")  
Member types  
[ios_base::openmode](openmode.html "cpp/io/ios base/openmode")  
[ios_base::fmtflags](fmtflags.html "cpp/io/ios base/fmtflags")  
[ios_base::iostate](iostate.html "cpp/io/ios base/iostate")  
[ios_base::seekdir](seekdir.html "cpp/io/ios base/seekdir")  
[ios_base::event](event.html "cpp/io/ios base/event")  
[ios_base::event_callback](event_callback.html "cpp/io/ios base/event callback")  
  


Defined in header `[<ios>](../../header/ios.html "cpp/header/ios")` |  |   
---|---|---  
class failure; |  |   
| |   
  
The class `std::ios_base::failure` defines an exception object that is thrown on failure by the functions in the Input/Output library. 

`std::ios_base::failure` may be defined either as a member class of [std::ios_base](../ios_base.html "cpp/io/ios base") or as a synonym (typedef) for another class with equivalent functionality.  | (since C++17)  
---|---  
![std-ios base-failure-2003-inheritance.svg](https://upload.cppreference.com/mwiki/images/6/60/std-ios_base-failure-2003-inheritance.svg) Inheritance diagram | (until C++11)  
---|---  
![std-ios base-failure-inheritance.svg](https://upload.cppreference.com/mwiki/images/f/f2/std-ios_base-failure-inheritance.svg) Inheritance diagram | (since C++11)  
  
## Contents

  * [1 Member functions](failure.html#Member_functions)
  * [2 std::ios_base::failure::failure](failure.html#std::ios_base::failure::failure)
    * [2.1 Parameters](failure.html#Parameters)
    * [2.2 Notes](failure.html#Notes)
  * [3 std::ios_base::failure::operator=](failure.html#std::ios_base::failure::operator.3D)
    * [3.1 Parameters](failure.html#Parameters_2)
    * [3.2 Return value](failure.html#Return_value)
  * [4 std::ios_base::failure::what](failure.html#std::ios_base::failure::what)
    * [4.1 Return value](failure.html#Return_value_2)
    * [4.2 Notes](failure.html#Notes_2)
  * [5 Inherited from std::system_error](failure.html#Inherited_from_std::system_error)
    * [5.1 Member functions](failure.html#Member_functions_2)
  * [6 Inherited from std::runtime_error](failure.html#Inherited_from_std::runtime_error)
  * [7 Inherited from std::exception](failure.html#Inherited_from_std::exception)
    * [7.1 Member functions](failure.html#Member_functions_3)
    * [7.2 Notes](failure.html#Notes_3)
    * [7.3 Example](failure.html#Example)
    * [7.4 Defect reports](failure.html#Defect_reports)
    * [7.5 See also](failure.html#See_also)

  
---  
  
### Member functions

(constructor) |  constructs a new `failure` object with the given message   
(public member function)  
---|---  
operator= |  replaces the `failure` object   
(public member function)  
what |  returns the explanatory string   
(public member function)  
  
##  std::ios_base::failure::failure

| (1) |   
---|---|---  
explicit failure( const [std::string](../../string/basic_string.html)& message ); |  | (until C++11)  
explicit failure( const [std::string](../../string/basic_string.html)& message,   
const [std::error_code](../../error/error_code.html)& ec = [std::io_errc::stream](../io_errc.html) ); |  |  (since C++11)  
explicit failure( const char* message,  
const [std::error_code](../../error/error_code.html)& ec = [std::io_errc::stream](../io_errc.html) ); |  (2)  |  (since C++11)  
| (3) |   
failure( const failure& other ); |  | (until C++11)  
failure( const failure& other ) noexcept; |  |  (since C++11)  
| |   
  
1,2) Constructs the exception object using message as explanation string which can later be retrieved using [`what()`](../../error/exception/what.html "cpp/error/exception/what"). ec is used to identify the specific reason for the failure.(since C++11)

3) Copy constructor. Initialize the contents with those of other. If *this and other both have dynamic type `std::ios_base::failure` then [std::strcmp](../../string/byte/strcmp.html)(what(), other.what()) == 0.(since C++11)

###  Parameters

message  |  \-  |  explanatory string   
---|---|---  
ec  |  \-  |  error code to identify the specific reason for the failure   
other  |  \-  |  another `failure` to copy   
  
###  Notes

Because copying `std::ios_base::failure` is not permitted to throw exceptions, this message is typically stored internally as a separately-allocated reference-counted string. This is also why there is no constructor taking [std::string](../../string/basic_string.html)&&: it would have to copy the content anyway. 

##  std::ios_base::failure::operator=

failure& operator=( const failure& other ); |  |  (until C++11)  
---|---|---  
failure& operator=( const failure& other ) noexcept; |  | (since C++11)  
| |   
  
Assigns the contents with those of other. If *this and other both have dynamic type `std::ios_base::failure` then [std::strcmp](../../string/byte/strcmp.html)(what(), other.what()) == 0 after assignment.(since C++11)

###  Parameters

other  |  \-  |  another exception object to assign with   
---|---|---  
  
###  Return value

*this

##  std::ios_base::failure::what

virtual const char* what() const throw(); |  |  (until C++11)  
---|---|---  
virtual const char* what() const noexcept; |  | (since C++11)  
| |   
  
Returns the explanatory string. 

###  Return value

Pointer to an implementation-defined null-terminated string with explanatory information. The string is suitable for conversion and display as a [std::wstring](../../string/basic_string.html "cpp/string/basic string"). The pointer is guaranteed to be valid at least until the exception object from which it is obtained is destroyed, or until a non-const member function (e.g. copy assignment operator) on the exception object is called. 

###  Notes

Implementations are allowed but not required to override `what()`. 

##  Inherited from [std::system_error](../../error/system_error.html "cpp/error/system error")

###  Member functions

[ code](../../error/system_error/code.html "cpp/error/system error/code") |  returns error code   
(public member function of `std::system_error`)   
---|---  
[ what](../../error/system_error/what.html "cpp/error/system error/what")[virtual] |  returns an explanatory string   
(virtual public member function of `std::system_error`)   
  
##  Inherited from [std::runtime_error](../../error/runtime_error.html "cpp/error/runtime error")

  


##  Inherited from [std::exception](../../error/exception.html "cpp/error/exception")

###  Member functions

[ (destructor)](../../error/exception/~exception.html "cpp/error/exception/~exception")[virtual] |  destroys the exception object   
(virtual public member function of `std::exception`)   
---|---  
[ what](../../error/exception/what.html "cpp/error/exception/what")[virtual] |  returns an explanatory string   
(virtual public member function of `std::exception`)   
  
### Notes

Before the resolution of [LWG issue 331](https://cplusplus.github.io/LWG/issue331), `std::ios_base::failure` declared a destructor without throw(), where [`std::exception::~exception()`](../../error/exception/~exception.html "cpp/error/exception/~exception") was declared with throw()[[1]](failure.html#cite_note-1). This means the `std::ios_base::failure::~failure()` had a weaker exception specification. The resolution is to remove that declaration so that the non-throwing exception specification is kept. 

[LWG issue 363](https://cplusplus.github.io/LWG/issue363) targets the same defect and its resolution is to add throw() to the declaration of `std::ios_base::failure::~failure()`. That resolution was not applied due to the conflict between the two resolutions. 

  1. [↑](failure.html#cite_ref-1) The non-throwing exception specification is now applied [globally across the standard library](../../standard_library.html#Guarantees "cpp/standard library"), so the destructors of standard library classes are not declared with throw() or noexcept.



### Example

Run this code
    
    
    #include <fstream>
    #include <iostream>
     
    int main()
    {
        [std::ifstream](../basic_ifstream.html) f("doesn't exist");
     
        try
        {
            f.exceptions(f.failbit);
        }
        catch (const std::ios_base::failure& e)
        {
            [std::cout](../cout.html) << "Caught an ios_base::failure.\n"
                      << "Explanatory string: " << e.what() << '\n'
                      << "Error code: " << e.code() << '\n';
        }
    }

Possible output: 
    
    
    Caught an ios_base::failure.
    Explanatory string: ios_base::clear: unspecified iostream_category error
    Error code: iostream:1

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 48](https://cplusplus.github.io/LWG/issue48) | C++98  | the constructor overload (1) initialized the base class [std::exception](../../error/exception.html "cpp/error/exception")  
with msg, but the base class does not have a matching constructor  | corresponding  
description removed   
[LWG 331](https://cplusplus.github.io/LWG/issue331) | C++98  | `std::ios_base::failure` declared a destructor without throw() | removed the destructor declaration   
  
### See also

[ io_errc](../io_errc.html "cpp/io/io errc")(C++11) |  the IO stream error codes   
(enum)   
---|---
