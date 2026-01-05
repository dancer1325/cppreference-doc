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
**ftell**  
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
long ftell( [std::FILE](FILE.html)* stream ); |  |   
| |   
  
Returns the current value of the file position indicator for the file stream `stream`. 

If the stream is open in binary mode, the value obtained by this function is the number of bytes from the beginning of the file. 

If the stream is open in text mode, the value returned by this function is unspecified and is only meaningful as the input to [std::fseek](fseek.html "cpp/io/c/fseek"). 

## Contents

  * [1 Parameters](ftell.html#Parameters)
  * [2 Return value](ftell.html#Return_value)
  * [3 Notes](ftell.html#Notes)
  * [4 Example](ftell.html#Example)
  * [5 See also](ftell.html#See_also)

  
---  
  
### Parameters

stream  |  \-  |  file stream to examine   
---|---|---  
  
### Return value

File position indicator on success or -1L if failure occurs. Also sets [errno](../../error/errno.html "cpp/error/errno") on failure. 

### Notes

On Windows, [`_ftelli64`](https://learn.microsoft.com/en-us/cpp/c-runtime-library/reference/ftell-ftelli64) can be used to work with files larger than 2 GiB. 

### Example

Demonstrates `std::ftell()` with error checking. Writes then reads a few floating-point (FP) values to/from a file.

Run this code
    
    
    #include <cstdio>
    #include <cstdlib>
    #include <iostream>
     
    // If the condition is not met then exit the program with error message.
    void check(bool condition, const char* func, int line)
    {
        if (condition)
            return;
        [std::perror](perror.html)(func);
        [std::cerr](../cerr.html) << func << " failed in file " << __FILE__ << " at line # " << line - 1
                  << '\n';
        [std::exit](../../utility/program/exit.html)([EXIT_FAILURE](../../utility/program/EXIT_status.html));
    }
     
    int main()
    {
        // Prepare an array of FP values.
        constexpr int SIZE {5};
        double A[SIZE] = {1.1, 2.2, 3.3, 4.4, 5.5};
     
        // Write array to a file.
        const char* fname = "/tmp/test.bin";
        FILE* file = [std::fopen](fopen.html)(fname, "wb");
        check(file != [NULL](../../types/NULL.html), "fopen()", __LINE__);
     
        const int write_count = [std::fwrite](fwrite.html)(A, sizeof(double), SIZE, file);
        check(write_count == SIZE, "fwrite()", __LINE__);
     
        [std::fclose](fclose.html)(file);
     
        // Read the FP values into array B.
        double B[SIZE];
        file = [std::fopen](fopen.html)(fname, "rb");
        check(file != [NULL](../../types/NULL.html), "fopen()", __LINE__);
     
        long pos = std::ftell(file); // position indicator at start of file
        check(pos != -1L, "ftell()", __LINE__);
        [std::cout](../cout.html) << "pos: " << pos << '\n';
     
        const int read_count = [std::fread](fread.html)(B, sizeof(double), 1, file); // read one FP value
        check(read_count == 1, "fread()", __LINE__);
     
        pos = std::ftell(file); // position indicator after reading one FP value
        check(pos != -1L, "ftell()", __LINE__);
        [std::cout](../cout.html) << "pos: " << pos << '\n';
        [std::cout](../cout.html) << "B[0]: " << B[0] << '\n'; // print one FP value
     
        return [EXIT_SUCCESS](../../utility/program/EXIT_status.html);
    }

Possible output: 
    
    
    pos: 0
    pos: 8
    B[0]: 1.1

### See also

[ fgetpos](fgetpos.html "cpp/io/c/fgetpos") |  gets the file position indicator   
(function)   
---|---  
[ fseek](fseek.html "cpp/io/c/fseek") |  moves the file position indicator to a specific location in a file   
(function)   
[ fsetpos](fsetpos.html "cpp/io/c/fsetpos") |  moves the file position indicator to a specific location in a file   
(function)   
[ tellg](../basic_istream/tellg.html "cpp/io/basic istream/tellg") |  returns the input position indicator   
(public member function of `std::basic_istream<CharT,Traits>`)   
[ tellp](../basic_ostream/tellp.html "cpp/io/basic ostream/tellp") |  returns the output position indicator   
(public member function of `std::basic_ostream<CharT,Traits>`)   
[C documentation](../../../c/io/ftell.html "c/io/ftell") for ftell
