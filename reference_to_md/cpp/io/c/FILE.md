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
  


[C-style I/O](../c.html "cpp/io/c")

Types and objects  
---  
| **FILE**  
---  
[fpos_t](fpos_t.html "cpp/io/c/fpos t")  
  
  
  
| [stdinstdoutstderr](std_streams.html "cpp/io/c/std streams")  
---  
  
Functions  
| File access  
---  
| [fopen](fopen.html "cpp/io/c/fopen")  
---  
[freopen](freopen.html "cpp/io/c/freopen")  
[fclose](fclose.html "cpp/io/c/fclose")  
[fflush](fflush.html "cpp/io/c/fflush")  
  
| [fwide](fwide.html "cpp/io/c/fwide")  
---  
[setbuf](setbuf.html "cpp/io/c/setbuf")  
[setvbuf](setvbuf.html "cpp/io/c/setvbuf")  
  
  
  
Direct input/output  
| [fread](fread.html "cpp/io/c/fread")  
---  
  
| [fwrite](fwrite.html "cpp/io/c/fwrite")  
---  
  
Unformatted input/output  
| [fgetcgetc](fgetc.html "cpp/io/c/fgetc")  
---  
[fgets](fgets.html "cpp/io/c/fgets")  
[fputcputc](fputc.html "cpp/io/c/fputc")  
[fputs](fputs.html "cpp/io/c/fputs")  
[getchar](getchar.html "cpp/io/c/getchar")  
[gets](gets.html "cpp/io/c/gets")(until C++14)  
[putchar](putchar.html "cpp/io/c/putchar")  
[puts](puts.html "cpp/io/c/puts")  
[ungetc](ungetc.html "cpp/io/c/ungetc")  
  
| [fgetwcgetwc](fgetwc.html "cpp/io/c/fgetwc")  
---  
[fgetws](fgetws.html "cpp/io/c/fgetws")  
[fputwcputwc](fputwc.html "cpp/io/c/fputwc")  
[fputws](fputws.html "cpp/io/c/fputws")  
[getwchar](getwchar.html "cpp/io/c/getwchar")  
[putwchar](putwchar.html "cpp/io/c/putwchar")  
[ungetwc](ungetwc.html "cpp/io/c/ungetwc")  
  
  
  
  
  
Formatted input  
| [scanffscanfsscanf](scanf.html "cpp/io/c/fscanf")  
---  
[vscanfvfscanfvsscanf](vfscanf.html "cpp/io/c/vfscanf")(C++11)(C++11)(C++11)  
  
| [wscanffwscanfswscanf](fwscanf.html "cpp/io/c/fwscanf")  
---  
[vwscanfvfwscanfvswscanf](vfwscanf.html "cpp/io/c/vfwscanf")(C++11)(C++11)(C++11)  
  
| Formatted output  
---  
| [printffprintfsprintfsnprintf](printf.html "cpp/io/c/fprintf")(C++11)  
---  
[vprintfvfprintfvsprintfvsnprintf](vfprintf.html "cpp/io/c/vfprintf")(C++11)  
  
| [wprintffwprintfswprintf](fwprintf.html "cpp/io/c/fwprintf")  
---  
[vwprintfvfwprintfvswprintf](vfwprintf.html "cpp/io/c/vfwprintf")  
  
File positioning  
[ftell](ftell.html "cpp/io/c/ftell")  
[fgetpos](fgetpos.html "cpp/io/c/fgetpos")  
[fseek](fseek.html "cpp/io/c/fseek")  
[fsetpos](fsetpos.html "cpp/io/c/fsetpos")  
[rewind](rewind.html "cpp/io/c/rewind")  
Error handling  
[clearerr](clearerr.html "cpp/io/c/clearerr")  
[feof](feof.html "cpp/io/c/feof")  
[ferror](ferror.html "cpp/io/c/ferror")  
[perror](perror.html "cpp/io/c/perror")  
Operations on files  
[remove](remove.html "cpp/io/c/remove")  
[rename](rename.html "cpp/io/c/rename")  
[tmpfile](tmpfile.html "cpp/io/c/tmpfile")  
[tmpnam](tmpnam.html "cpp/io/c/tmpnam")  
  


Defined in header `[<cstdio>](../../header/cstdio.html "cpp/header/cstdio")` |  |   
---|---|---  
typedef /* unspecified */ FILE; |  |   
| |   
  
Each `std::FILE` object denotes a C stream. 

C standard (referenced by C++ standard) does not specify whether `std::FILE` is a complete object type. While it may be possible to copy a valid `std::FILE`, using a pointer to such a copy as an argument for an I/O function invokes unspecified behavior. In other words, `std::FILE` may be semantically non-copyable. 

I/O streams can be used for both unformatted and formatted input and output. Furthermore, the functions that handle input and output can also be locale-sensitive, such that wide/multibyte conversions are performed as necessary. 

## Contents

  * [1 Stream state](FILE.html#Stream_state)
    * [1.1 Narrow and wide orientation](FILE.html#Narrow_and_wide_orientation)
    * [1.2 Binary and text modes](FILE.html#Binary_and_text_modes)
  * [2 Notes](FILE.html#Notes)
  * [3 See also](FILE.html#See_also)

  
---  
  
### Stream state

Besides the system-specific information necessary to access the device (_e.g.,_ a POSIX file descriptor), each `std::FILE` object directly or indirectly holds the following: 

  1. Character width: unset, narrow, or wide. 
  2. Parse state for conversions between multibyte and wide characters (an object of type [std::mbstate_t](../../string/multibyte/mbstate_t.html "cpp/string/multibyte/mbstate t")) 
  3. Buffering state: unbuffered, line-buffered, fully buffered. 
  4. The buffer, which may be replaced by an external, user-provided buffer. 
  5. I/O mode: input, output, or update (both input and output). 
  6. Binary/text mode indicator. 
  7. End-of-file status indicator. 
  8. Error status indicator. 
  9. File position indicator, accessible as an object of type [std::fpos_t](fpos_t.html "cpp/io/c/fpos t"), which, for wide streams, includes parse state. 
  10. (C++17) Reentrant lock used to prevent data races when multiple threads read, write, position, or query the position of a stream. 



#### Narrow and wide orientation

A newly opened stream has no orientation. The first call to std::fwide or to any I/O function establishes the orientation: a wide I/O function makes the stream wide-oriented; a narrow I/O function makes the stream narrow-oriented. Once set, the orientation can be changed with only [std::freopen](freopen.html "cpp/io/c/freopen"). Narrow I/O functions cannot be called on a wide-oriented stream; wide I/O functions cannot be called on a narrow-oriented stream. Wide I/O functions convert between wide and multibyte characters as if by calling [std::mbrtowc](../../string/multibyte/mbrtowc.html "cpp/string/multibyte/mbrtowc") or [std::wcrtomb](../../string/multibyte/wcrtomb.html "cpp/string/multibyte/wcrtomb") with the conversion state as described by the stream. Unlike the multibyte character strings that are valid in a program, multibyte character sequences in the file may contain embedded nulls and do not have to begin or end in the initial shift state. 

The conversion state of a stream with wide orientation is established by the C locale that is installed at the time the stream's orientation is set. 

#### Binary and text modes

A _text stream_ is an ordered sequence of characters that can be composed into lines; a line can be decomposed into zero or more characters plus a terminating '\n' (“newline”) character. Whether the last line requires a terminating '\n' is implementation-defined. Furthermore, characters may have to be added, altered, or deleted on input and output to conform to the conventions for representing text in the OS (in particular, C streams on Windows OS convert '\n' to '\r\n' on output, and convert '\r\n' to '\n' on input). 

Data read in from a text stream is guaranteed to compare equal to the data that were earlier written out to that stream only if each of the following is true: 

  * The data consist of only printing characters and/or the control characters '\t' and '\n' (in particular, on Windows OS, the character '\0x1A' terminates input). 
  * No '\n' character is immediately preceded by space characters (such space characters may disappear when such output is later read as input). 
  * The last character is '\n'. 



A _binary stream_ is an ordered sequence of characters that can transparently record internal data. Data read in from a binary stream always equal the data that were earlier written out to that stream, except that an implementation is allowed to append an indeterminate number of null characters to the end of the stream. A wide binary stream doesn't need to end in the initial shift state. 

### Notes

POSIX explicitly requires that the `LC_CTYPE` facet of the currently installed C locale be stored within the `FILE` object the moment the stream's orientation becomes wide; POSIX requires that this `LC_CTYPE` facet be used for all future I/O on this stream until the orientation is changed, regardless of any subsequent call to [std::setlocale](../../locale/setlocale.html "cpp/locale/setlocale"). 

It is intended that each line of text be composed of data that are essentially human-readable. POSIX implementations do not distinguish between text and binary streams (there is no special mapping for '\n' or any other characters). 

### See also

[ basic_streambuf](../basic_streambuf.html "cpp/io/basic streambuf") |  abstracts a raw device   
(class template)   
---|---  
[ basic_filebuf](../basic_filebuf.html "cpp/io/basic filebuf") |  implements raw file device   
(class template)   
[ stdinstdoutstderr](std_streams.html "cpp/io/c/std streams") |  expression of type FILE* associated with the input stream  
expression of type FILE* associated with the output stream  
expression of type FILE* associated with the error output stream   
(macro constant)   
[C documentation](../../../c/io/FILE.html "c/io/FILE") for FILE
