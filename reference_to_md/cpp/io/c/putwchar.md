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
| [FILE](FILE.html "cpp/io/c/FILE")  
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
**putwchar**  
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
  


Defined in header `[<cwchar>](../../header/cwchar.html "cpp/header/cwchar")` |  |   
---|---|---  
[std::wint_t](../../string/wide.html) putwchar( wchar_t ch ); |  |   
| |   
  
Writes a wide character ch to [stdout](std_streams.html "cpp/io/c/std streams"). 

## Contents

  * [1 Parameters](putwchar.html#Parameters)
  * [2 Return value](putwchar.html#Return_value)
  * [3 Example](putwchar.html#Example)
  * [4 See also](putwchar.html#See_also)

  
---  
  
### Parameters

ch  |  \-  |  wide character to be written   
---|---|---  
  
### Return value

ch on success, WEOF on failure. 

### Example

Run this code
    
    
    #include <clocale>
    #include <cstdio>
    #include <cstdlib>
    #include <cwchar>
    #include <initializer_list>
     
    int main()
    {
        [std::setlocale](../../locale/setlocale.html)([LC_ALL](../../locale/LC_categories.html), "en_US.utf8");
     
        for (const wchar_t ch : {
            L'\u2200', // Unicode name: "FOR ALL"
            L'∀',
            L'\n'
            })
            if (std::putwchar(ch) == WEOF)
            {
                [std::puts](puts.html)("I/O error in std::putwchar");
                return [EXIT_FAILURE](../../utility/program/EXIT_status.html);
            }
     
        return [EXIT_SUCCESS](../../utility/program/EXIT_status.html);
    }

Possible output: 
    
    
    ∀∀

### See also

[ putchar](putchar.html "cpp/io/c/putchar") |  writes a character to [stdout](std_streams.html "cpp/io/c/std streams")   
(function)   
---|---  
[ fputwcputwc](fputwc.html "cpp/io/c/fputwc") |  writes a wide character to a file stream   
(function)   
[C documentation](../../../c/io/putwchar.html "c/io/putwchar") for putwchar
