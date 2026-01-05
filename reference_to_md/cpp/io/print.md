
  


[Input/output library](../io.html "cpp/io")

[I/O manipulators](manip.html "cpp/io/manip")  
---  
[Print functions](../io.html#Print_functions_.28since_C.2B.2B23.29 "cpp/io") (C++23)  
[C-style I/O](c.html "cpp/io/c")  
Buffers  
[basic_streambuf](basic_streambuf.html "cpp/io/basic streambuf")  
[basic_filebuf](basic_filebuf.html "cpp/io/basic filebuf")  
[basic_stringbuf](basic_stringbuf.html "cpp/io/basic stringbuf")  
[basic_spanbuf](basic_spanbuf.html "cpp/io/basic spanbuf")(C++23)  
[strstreambuf](strstreambuf.html "cpp/io/strstreambuf")(C++98/26*)  
[basic_syncbuf](basic_syncbuf.html "cpp/io/basic syncbuf")(C++20)  
Streams  
Abstractions  
[ios_base](ios_base.html "cpp/io/ios base")  
[basic_ios](basic_ios.html "cpp/io/basic ios")  
[basic_istream](basic_istream.html "cpp/io/basic istream")  
[basic_ostream](basic_ostream.html "cpp/io/basic ostream")  
[basic_iostream](basic_iostream.html "cpp/io/basic iostream")  
File I/O  
[basic_ifstream](basic_ifstream.html "cpp/io/basic ifstream")  
[basic_ofstream](basic_ofstream.html "cpp/io/basic ofstream")  
[basic_fstream](basic_fstream.html "cpp/io/basic fstream")  
String I/O  
[basic_istringstream](basic_istringstream.html "cpp/io/basic istringstream")  
[basic_ostringstream](basic_ostringstream.html "cpp/io/basic ostringstream")  
[basic_stringstream](basic_stringstream.html "cpp/io/basic stringstream")  
Array I/O  
[basic_ispanstream](basic_ispanstream.html "cpp/io/basic ispanstream")(C++23)  
[basic_ospanstream](basic_ospanstream.html "cpp/io/basic ospanstream")(C++23)  
[basic_spanstream](basic_spanstream.html "cpp/io/basic spanstream")(C++23)  
[istrstream](istrstream.html "cpp/io/istrstream")(C++98/26*)  
[ostrstream](ostrstream.html "cpp/io/ostrstream")(C++98/26*)  
[strstream](strstream.html "cpp/io/strstream")(C++98/26*)  
Synchronized Output  
[basic_osyncstream](basic_osyncstream.html "cpp/io/basic osyncstream")(C++20)  
Types  
[streamoff](streamoff.html "cpp/io/streamoff")  
[streamsize](streamsize.html "cpp/io/streamsize")  
[fpos](fpos.html "cpp/io/fpos")  
Error category interface  
[iostream_category](iostream_category.html "cpp/io/iostream category")(C++11)  
[io_errc](io_errc.html "cpp/io/io errc")(C++11)  
  


[ Print functions](../io.html#Print_functions_.28since_C.2B.2B23.29 "cpp/io")

Print functions  
---  
**print**(C++23)  
[println](println.html "cpp/io/println")(C++23)  
[vprint_unicodevprint_unicode_buffered](vprint_unicode.html "cpp/io/vprint unicode")(C++23)(C++23)  
[vprint_nonunicodevprint_nonunicode_buffered](vprint_nonunicode.html "cpp/io/vprint nonunicode")(C++23)(C++23)  
  


Defined in header `[<print>](../header/print.html "cpp/header/print")` |  |   
---|---|---  
template< class... Args >  
void print( [std::format_string](../utility/format/basic_format_string.html)<Args...> fmt, Args&&... args ); |  (1)  |  (since C++23)  
template< class... Args >  
void print( [std::FILE](c/FILE.html)* stream,  
[std::format_string](../utility/format/basic_format_string.html)<Args...> fmt, Args&&... args ); |  (2)  |  (since C++23)  
| |   
  
Format args according to the format string fmt, and print the result to an output stream. 

1) Equivalent to std::print(stdout, fmt, [std::forward](../utility/forward.html)<Args>(args)...).

2) If the [ordinary literal encoding](../language/charset.html#Code_unit_and_literal_encoding "cpp/language/charset") is UTF-8, equivalent to (std::enable_nonlocking_formatter_optimization<[std::remove_cvref_t](../types/remove_cvref.html)<Args>> && ...)  
? [std::vprint_unicode](vprint_unicode.html)(stream, fmt.str, [std::make_format_args](../utility/format/make_format_args.html)(args...))  
: std::vprint_unicode_buffered(stream, fmt.str, [std::make_format_args](../utility/format/make_format_args.html)(args...));.

Otherwise, equivalent to (std::enable_nonlocking_formatter_optimization<[std::remove_cvref_t](../types/remove_cvref.html)<Args>> && ...)  
? [std::vprint_nonunicode](vprint_nonunicode.html)(stream, fmt.str, [std::make_format_args](../utility/format/make_format_args.html)(args...))  
: std::vprint_nonunicode_buffered(stream, fmt.str, [std::make_format_args](../utility/format/make_format_args.html)(args...));.

If [std::formatter](../utility/format/formatter.html)<Ti, char> does not meet the [BasicFormatter](../named_req/BasicFormatter.html "cpp/named req/BasicFormatter") requirements for any `Ti` in `Args` (as required by [std::make_format_args](../utility/format/make_format_args.html "cpp/utility/format/make format args")), the behavior is undefined. 

## Contents

  * [1 Parameters](print.html#Parameters)
  * [2 Exceptions](print.html#Exceptions)
  * [3 Notes](print.html#Notes)
  * [4 Example](print.html#Example)
  * [5 Defect reports](print.html#Defect_reports)
  * [6 See also](print.html#See_also)

  
---  
  
### Parameters

stream  |  \-  |  output file stream to write to   
---|---|---  
fmt  |  \-  |  an object that represents the format string. The format string consists of 

  * ordinary characters (except { and }), which are copied unchanged to the output, 
  * escape sequences {{ and }}, which are replaced with { and } respectively in the output, and 
  * replacement fields. 

Each replacement field has the following format:  |   
---  
`**{**` arg-id (optional) `**}**` |  (1)  |   
`**{**` arg-id (optional) `**:**` format-spec `**}**` |  (2)  |   
  
1) replacement field without a format specification

2) replacement field with a format specification

arg-id |  \-  |  specifies the index of the argument in `args` whose value is to be used for formatting; if it is omitted, the arguments are used in order. The arg-id ﻿s in a format string must all be present or all be omitted. Mixing manual and automatic indexing is an error.   
---|---|---  
format-spec |  \-  |  the format specification defined by the [std::formatter](../utility/format/formatter.html "cpp/utility/format/formatter") specialization for the corresponding argument. Cannot start with }.   
  
  * For basic types and standard string types, the format specification is interpreted as [standard format specification](../utility/format/spec.html "cpp/utility/format/spec"). 
  * For chrono types, the format specification is interpreted as [chrono format specification](../chrono/system_clock/formatter.html#Format_specification "cpp/chrono/system clock/formatter"). 



  * For range types, the format specification is interpreted as [range format specification](../utility/format/range_formatter.html#Range_format_specification "cpp/utility/format/range formatter"). 
  * For [std::pair](../utility/pair.html "cpp/utility/pair") and [std::tuple](../utility/tuple.html "cpp/utility/tuple"), the format specification is interpreted as [tuple format specification](../utility/format/tuple_formatter.html#Format_specification "cpp/utility/format/tuple formatter"). 
  * For [std::thread::id](../thread/thread/id.html "cpp/thread/thread/id") and [`std::stacktrace_entry`](../utility/stacktrace_entry.html "cpp/utility/stacktrace entry"), see [thread id format specification](../thread/thread/id/formatter.html#Format_specification "cpp/thread/thread/id/formatter") and [stacktrace entry format specification](../utility/stacktrace_entry/formatter.html#Format_specification "cpp/utility/stacktrace entry/formatter"). 
  * For [`std::basic_stacktrace`](../utility/basic_stacktrace.html "cpp/utility/basic stacktrace"), no format specifier is allowed. 

| (since C++23)  
---|---  
  
  * For [`std::filesystem::path`](../filesystem/path.html "cpp/filesystem/path"), see [path format specification](../filesystem/path/formatter.html#Format_specification "cpp/filesystem/path/formatter"). 

| (since C++26)  
---|---  
  
  * For other formattable types, the format specification is determined by user-defined `formatter` specializations. 

  
args...  |  \-  |  arguments to be formatted   
  
### Exceptions

  * [std::bad_alloc](../memory/new/bad_alloc.html "cpp/memory/new/bad alloc") on allocation failure. 
  * [std::system_error](../error/system_error.html "cpp/error/system error"), if writing to the stream fails. 
  * Propagates any exception thrown by used [formatters](../utility/format/formatter.html "cpp/utility/format/formatter"), e.g. [std::format_error](../utility/format/format_error.html "cpp/utility/format/format error"). 



### Notes

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_print`](../experimental/feature_test.html#cpp_lib_print "cpp/feature test") | [`202207L`](../compiler_support/23.html#cpp_lib_print_202207L "cpp/compiler support/23") | (C++23) | Formatted output   
[`202403L`](../compiler_support/26.html#cpp_lib_print_202403L "cpp/compiler support/26") | (C++26)  
(DR23) | Unbuffered formatted output   
[`202406L`](../compiler_support/26.html#cpp_lib_print_202406L "cpp/compiler support/26") | (C++26)  
(DR23) | Enabling unbuffered formatted output for more formattable types   
[`__cpp_lib_format`](../experimental/feature_test.html#cpp_lib_format "cpp/feature test") | [`202207L`](../compiler_support/23.html#cpp_lib_format_202207L "cpp/compiler support/23") | (C++23) | Exposing std::basic_format_string  
  
### Example

Run this code
    
    
    #include <cstdio>
    #include <filesystem>
    #include <print>
     
    int main()
    {
        std::print("{2} {1}{0}!\n", 23, "C++", "Hello");  // overload (1)
     
        const auto tmp{[std::filesystem::temp_directory_path](../filesystem/temp_directory_path.html)() / "test.txt"};
        if ([std::FILE](c/FILE.html)* stream{[std::fopen](c/fopen.html)(tmp.c_str(), "w")})
        {
            std::print(stream, "File: {}", tmp.string()); // overload (2)
            [std::fclose](c/fclose.html)(stream);
        }
    }

Output: 
    
    
    Hello C++23!

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[P3107R5](https://wg21.link/P3107R5) | C++23  | only buffered printing operations can be performed  | can perform unbuffered printing operations   
[P3235R3](https://wg21.link/P3235R3) | C++23  | the names of the functions added  
by [P3107R5](https://wg21.link/P3107R5) were misleading  | changed the function names   
  
### See also

[ println](println.html "cpp/io/println")(C++23) |  same as std::print except that each print is terminated by additional new line   
(function template)   
---|---  
[ print(std::ostream)](basic_ostream/print.html "cpp/io/basic ostream/print")(C++23) |  outputs [formatted](../utility/format.html "cpp/utility/format") representation of the arguments   
(function template)   
[ format](../utility/format/format.html "cpp/utility/format/format")(C++20) |  stores formatted representation of the arguments in a new string   
(function template)   
[ format_to](../utility/format/format_to.html "cpp/utility/format/format to")(C++20) |  writes out formatted representation of its arguments through an output iterator   
(function template)   
[ printffprintfsprintfsnprintf](c/printf.html "cpp/io/c/fprintf")(C++11) |  prints formatted output to [stdout](c/std_streams.html "cpp/io/c/std streams"), a file stream or a buffer   
(function) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
