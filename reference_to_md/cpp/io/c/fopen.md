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
| **fopen**  
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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/c/navbar_content&action=edit)

Defined in header `[<cstdio>](../../header/cstdio.html "cpp/header/cstdio")` |  |   
---|---|---  
[std::FILE](FILE.html)* fopen( const char* filename, const char* mode ); |  |   
| |   
  
Opens a file indicated by filename and returns a file stream associated with that file. mode is used to determine the file access mode. 

## Contents

  * [1 Parameters](fopen.html#Parameters)
  * [2 File access flags](fopen.html#File_access_flags)
  * [3 Return value](fopen.html#Return_value)
  * [4 Notes](fopen.html#Notes)
  * [5 Example](fopen.html#Example)
  * [6 See also](fopen.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/c/fopen&action=edit&section=1 "Edit section: Parameters")] Parameters

filename  |  \-  |  file name to associate the file stream to   
---|---|---  
mode  |  \-  |  null-terminated character string determining [file access mode](fopen.html#File_access_flags)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/c/fopen&action=edit&section=2 "Edit section: File access flags")] File access flags

File access   
mode string  |  Meaning  |  Explanation  |  Action if file   
already exists  |  Action if file   
does not exist   
---|---|---|---|---  
"r" |  read  |  Open a file for reading  |  read from start  |  return [NULL](../../types/NULL.html) and set error   
"w" |  write  |  Create a file for writing  |  destroy contents  |  create new   
"a" |  append  |  Append to a file  |  write to end  |  create new   
"r+" |  read extended  |  Open a file for read/write  |  read from start  |  return [NULL](../../types/NULL.html) and set error   
"w+" |  write extended  |  Create a file for read/write  |  destroy contents  |  create new   
"a+" |  append extended  |  Open a file for read/write  |  write to end  |  create new   
File access mode flag "b" can optionally be specified to open a file [in binary mode](FILE.html#Binary_and_text_modes "cpp/io/c/FILE"). This flag has no effect on POSIX systems, but on Windows, for example, it disables special handling of '\n' and '\x1A'.   
On the append file access modes, data is written to the end of the file regardless of the current position of the file position indicator.   
File access mode flag "x" can optionally be appended to "w" or "w+" specifiers. This flag forces the function to fail if the file exists, instead of overwriting it. (C++17)  
The behavior is undefined if the mode is not one of the strings listed above. Some implementations define additional supported modes (e.g. [Windows](https://docs.microsoft.com/en-us/cpp/c-runtime-library/reference/fopen-wfopen)).   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/c/fopen&action=edit&section=3 "Edit section: Return value")] Return value

If successful, returns a pointer to the object that controls the opened file stream, with both eof and error bits cleared. The stream is fully buffered unless filename refers to an interactive device. 

On error, returns a null pointer. [POSIX requires](https://pubs.opengroup.org/onlinepubs/9699919799/functions/fopen.html) that [errno](../../error/errno.html "cpp/error/errno") is set in this case. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/c/fopen&action=edit&section=4 "Edit section: Notes")] Notes

The format of filename is implementation-defined, and does not necessarily refer to a file (e.g. it may be the console or another device accessible through filesystem API). On platforms that support them, filename may include absolute or relative filesystem path. 

For portable directory and file naming, see [C++ filesystem library](../../filesystem.html "cpp/filesystem") or [boost.filesystem](https://www.boost.org/doc/libs/release/libs/filesystem/doc/index.htm). 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/c/fopen&action=edit&section=5 "Edit section: Example")] Example

Run this code
    
    
    #include <cstdio>
    #include <cstdlib>
     
    int main()
    {
        int is_ok = [EXIT_FAILURE](../../utility/program/EXIT_status.html);
        FILE* fp = std::fopen("/tmp/test.txt", "w+");
        if (!fp)
        {
            [std::perror](perror.html)("File opening failed");
            return is_ok;
        }
     
        int c; // Note: int, not char, required to handle EOF
        while ((c = [std::fgetc](fgetc.html)(fp)) != [EOF](../c.html)) // Standard C I/O file reading loop
            [std::putchar](putchar.html)(c);
     
        if ([std::ferror](ferror.html)(fp))
            [std::puts](puts.html)("I/O error when reading");
        else if ([std::feof](feof.html)(fp))
        {
            [std::puts](puts.html)("End of file reached successfully");
            is_ok = [EXIT_SUCCESS](../../utility/program/EXIT_status.html);
        }
     
        [std::fclose](fclose.html)(fp);
        return is_ok;
    }

Output: 
    
    
    End of file reached successfully

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/c/fopen&action=edit&section=6 "Edit section: See also")] See also

[ fclose](fclose.html "cpp/io/c/fclose") |  closes a file   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/c/dsc_fclose&action=edit)  
---|---  
[ fflush](fflush.html "cpp/io/c/fflush") |  synchronizes an output stream with the actual file   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/c/dsc_fflush&action=edit)  
[ freopen](freopen.html "cpp/io/c/freopen") |  open an existing stream with a different name   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/c/dsc_freopen&action=edit)  
[C documentation](../../../c/io/fopen.html "c/io/fopen") for fopen
