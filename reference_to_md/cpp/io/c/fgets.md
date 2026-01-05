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
**fgets**  
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
char* fgets( char* str, int count, [std::FILE](FILE.html)* stream ); |  |   
| |   
  
Reads at most count - 1 characters from the given file stream and stores them in the character array pointed to by str. Parsing stops if a newline character is found, in which case str will contain that newline character, or if end-of-file occurs. If bytes are read and no errors occur, writes a null character at the position immediately after the last character written to str. 

## Contents

  * [1 Parameters](fgets.html#Parameters)
  * [2 Return value](fgets.html#Return_value)
  * [3 Notes](fgets.html#Notes)
  * [4 Example](fgets.html#Example)
  * [5 See also](fgets.html#See_also)

  
---  
  
### Parameters

str  |  \-  |  pointer to an element of a char array   
---|---|---  
count  |  \-  |  maximum number of characters to write (typically the length of str)   
stream  |  \-  |  file stream to read the data from   
  
### Return value

str on success, null pointer on failure. 

If the end-of-file condition is encountered, sets the _eof_ indicator on stream (see [std::feof()](feof.html "cpp/io/c/feof")). This is only a failure if it causes no bytes to be read, in which case a null pointer is returned and the contents of the array pointed to by str are not altered (i.e. the first byte is not overwritten with a null character). 

If the failure has been caused by some other error, sets the _error_ indicator (see [std::ferror()](ferror.html "cpp/io/c/ferror")) on stream. The contents of the array pointed to by str are indeterminate (it may not even be null-terminated). 

### Notes

[POSIX additionally requires](https://pubs.opengroup.org/onlinepubs/9699919799/functions/fgets.html) that `fgets` sets [errno](../../error/errno.html "cpp/error/errno") if it encounters a failure other than the end-of-file condition. 

Although the standard specification is [unclear](https://stackoverflow.com/questions/23388620) in the cases where count <= 1, common implementations do 

  * if count < 1, do nothing, report error, 
  * if count == 1, 



    

  * some implementations do nothing, report error, 
  * others read nothing, store zero in str[0], report success. 



### Example

Run this code
    
    
    #include <cstdio>
    #include <cstdlib>
    #include <iomanip>
    #include <iostream>
    #include <span>
     
    void dump([std::span](../../container/span.html)<const char> buf, [std::size_t](../../types/size_t.html) offset)
    {
        [std::cout](../cout.html) << [std::dec](../manip/hex.html);
        for (char ch : buf)
            [std::cout](../cout.html) << (ch >= ' ' ? ch : '.'), offset--;
        [std::cout](../cout.html) << [std::string](../../string/basic_string.html)(offset, ' ') << [std::hex](../manip/hex.html)
                  << [std::setfill](../manip/setfill.html)('0') << [std::uppercase](../manip/uppercase.html);
        for (unsigned ch : buf)
            [std::cout](../cout.html) << [std::setw](../manip/setw.html)(2) << ch << ' ';
        [std::cout](../cout.html) << [std::dec](../manip/hex.html) << '\n';
    }
     
    int main()
    {
        [std::FILE](FILE.html)* tmpf = [std::tmpfile](tmpfile.html)();
        [std::fputs](fputs.html)("Alan Turing\n", tmpf);
        [std::fputs](fputs.html)("John von Neumann\n", tmpf);
        [std::fputs](fputs.html)("Alonzo Church\n", tmpf);
     
        [std::rewind](rewind.html)(tmpf);
        for (char buf[8]; std::fgets(buf, sizeof buf, tmpf) != nullptr;)
            dump(buf, 10);
    }

Output: 
    
    
    Alan Tu.  41 6C 61 6E 20 54 75 00 
    ring..u.  72 69 6E 67 0A 00 75 00 
    John vo.  4A 6F 68 6E 20 76 6F 00 
    n Neuma.  6E 20 4E 65 75 6D 61 00 
    nn..uma.  6E 6E 0A 00 75 6D 61 00 
    Alonzo .  41 6C 6F 6E 7A 6F 20 00 
    Church..  43 68 75 72 63 68 0A 00

### See also

[ scanffscanfsscanf](scanf.html "cpp/io/c/fscanf") |  reads formatted input from [stdin](std_streams.html "cpp/io/c/std streams"), a file stream or a buffer   
(function)   
---|---  
[ gets](gets.html "cpp/io/c/gets")(deprecated in C++11)(removed in C++14) |  reads a character string from [stdin](std_streams.html "cpp/io/c/std streams")   
(function)   
[ fputs](fputs.html "cpp/io/c/fputs") |  writes a character string to a file stream   
(function)   
[C documentation](../../../c/io/fgets.html "c/io/fgets") for fgets
