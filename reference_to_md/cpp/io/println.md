[C++](../../cpp.html "cpp")

[Compiler support](../compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](../freestanding.html "cpp/freestanding")  
[Language](../language.html "cpp/language")  
[Standard library](../standard_library.html "cpp/standard library")  
[Standard library headers](../headers.html "cpp/header")  
[Named requirements](../iterator/concepts.html "cpp/named req")  
[Feature test macros](../experimental/feature_test.html "cpp/feature test") (C++20)  
[Language support library](../utility.html#Language_support "cpp/utility")  
[Concepts library](../concepts.html "cpp/concepts") (C++20)  
[Diagnostics library](../error.html "cpp/error")  
[Memory management library](../memory.html "cpp/memory")  
[Metaprogramming library](../meta.html "cpp/meta") (C++11)  
[General utilities library](../utility.html "cpp/utility")  
[Containers library](../container.html "cpp/container")  
[Iterators library](../iterator.html "cpp/iterator")  
[Ranges library](../ranges.html "cpp/ranges") (C++20)  
[Algorithms library](../algorithm.html "cpp/algorithm")  
[Strings library](../string.html "cpp/string")  
[Text processing library](../text.html "cpp/text")  
[Numerics library](../numeric.html "cpp/numeric")  
[Date and time library](../chrono.html "cpp/chrono")  
[Input/output library](../io.html "cpp/io")  
[Filesystem library](../filesystem.html "cpp/filesystem") (C++17)  
[Concurrency support library](../atomic.html "cpp/thread") (C++11)  
[Execution control library](../experimental/execution.html "cpp/execution") (C++26)  
[Technical specifications](../experimental.html "cpp/experimental")  
[Symbols index](../symbol_index.html "cpp/symbol index")  
[External libraries](../links/libs.html "cpp/links/libs")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/navbar_content&action=edit)

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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/navbar_content&action=edit)

[ Print functions](../io.html#Print_functions_.28since_C.2B.2B23.29 "cpp/io")

Print functions  
---  
[print](print.html "cpp/io/print")(C++23)  
**println**(C++23)  
[vprint_unicodevprint_unicode_buffered](vprint_unicode.html "cpp/io/vprint unicode")(C++23)(C++23)  
[vprint_nonunicodevprint_nonunicode_buffered](vprint_nonunicode.html "cpp/io/vprint nonunicode")(C++23)(C++23)  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/print/navbar_content&action=edit)

Defined in header `[<print>](../header/print.html "cpp/header/print")` |  |   
---|---|---  
template< class... Args >  
void println( [std::format_string](../utility/format/basic_format_string.html)<Args...> fmt, Args&&... args ); |  (1)  |  (since C++23)  
template< class... Args >  
void println( [std::FILE](c/FILE.html)* stream,  
[std::format_string](../utility/format/basic_format_string.html)<Args...> fmt, Args&&... args ); |  (2)  |  (since C++23)  
void println(); |  (3) | (since C++26)  
void println( [std::FILE](c/FILE.html)* stream ); |  (4)  |  (since C++26)  
| |   
  
Format args according to the format string fmt with appended '\n' (which means that each output ends with a new-line), and print the result to a stream. 

1) Equivalent to std::println(stdout, fmt, [std::forward](../utility/forward.html)<Args>(args)...).

2) Equivalent to performing the following operations:  [std::print](print.html)(stream, "{}\n", [std::format](../utility/format/format.html)(fmt, [std::forward](../utility/forward.html)<Args>(args)...)); | (until C++26)  
---|---  
[std::print](print.html)(stream, [std::runtime_format](../utility/format/runtime_format.html)([std::string](../string/basic_string.html)(fmt.get()) + '\n'),  
[std::forward](../utility/forward.html)<Args>(args)...) | (since C++26)  
  
3) Equivalent to std::println(stdout).

4) Equivalent to [std::print](print.html)(stream, "\n").

If [std::formatter](../utility/format/formatter.html)<Ti, char> does not meet the [BasicFormatter](../named_req/BasicFormatter.html "cpp/named req/BasicFormatter") requirements for any `Ti` in `Args` (as required by [std::make_format_args](../utility/format/make_format_args.html "cpp/utility/format/make format args")), the behavior is undefined. 

## Contents

  * [1 Parameters](println.html#Parameters)
  * [2 Exceptions](println.html#Exceptions)
  * [3 Notes](println.html#Notes)
  * [4 Example](println.html#Example)
  * [5 See also](println.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/println&action=edit&section=1 "Edit section: Parameters")] Parameters

stream  |  \-  |  output file stream to write to   
---|---|---  
fmt  |  \-  |  [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/utility/format/format_string&action=edit)an object that represents the format string. The format string consists of 

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
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/println&action=edit&section=2 "Edit section: Exceptions")] Exceptions

  * [std::bad_alloc](../memory/new/bad_alloc.html "cpp/memory/new/bad alloc") on allocation failure. 
  * [std::system_error](../error/system_error.html "cpp/error/system error"), if writing to the stream fails. 
  * Propagates any exception thrown by used [formatters](../utility/format/formatter.html "cpp/utility/format/formatter"), e.g. [std::format_error](../utility/format/format_error.html "cpp/utility/format/format error"). 



### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/println&action=edit&section=3 "Edit section: Notes")] Notes

Although overloads ([3,4](println.html#Version_3)) are added in C++26, all known implementations make them available in C++23 mode. 

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_print`](../experimental/feature_test.html#cpp_lib_print "cpp/feature test") | [`202207L`](../compiler_support/23.html#cpp_lib_print_202207L "cpp/compiler support/23") | (C++23) | Formatted output   
[`202403L`](../compiler_support/26.html#cpp_lib_print_202403L "cpp/compiler support/26") | (C++26) | Unbuffered formatted output[[1]](println.html#cite_note-1)  
[`__cpp_lib_format`](../experimental/feature_test.html#cpp_lib_format "cpp/feature test") | [`202207L`](../compiler_support/23.html#cpp_lib_format_202207L "cpp/compiler support/23") | (C++23) | Exposing std::basic_format_string  
  
  1. [↑](println.html#cite_ref-1) Although P3107R5 is accepted as a DR, std::runtime_format is only available since C++26. As a result, the resolution cannot be applied in C++23.



### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/println&action=edit&section=4 "Edit section: Example")] Example

Run this code
    
    
    #include <print>
     
    int main()
    {
        // Each call to std::println ends with new-line
        std::println("Please"); // overload (1)
        std::println("enter"); // (1)
     
        [std::print](print.html)("pass");
        [std::print](print.html)("word");
     
        std::println(); // (3); valid since C++26; same effect as std::print("\n"); 
    }

Output: 
    
    
    Please
    enter
    password
     
    

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/println&action=edit&section=5 "Edit section: See also")] See also

[ print](print.html "cpp/io/print")(C++23) |  prints to [stdout](c/std_streams.html "cpp/io/c/std streams") or a file stream using [formatted](../utility/format.html "cpp/utility/format") representation of the arguments   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_print&action=edit)  
---|---  
[ println(std::ostream)](basic_ostream/println.html "cpp/io/basic ostream/println")(C++23) |  outputs [formatted](../utility/format.html "cpp/utility/format") representation of the arguments with appended '\n'   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_ostream/dsc_println&action=edit)  
[ format](../utility/format/format.html "cpp/utility/format/format")(C++20) |  stores formatted representation of the arguments in a new string   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/utility/format/dsc_format&action=edit)  
[ printffprintfsprintfsnprintf](c/printf.html "cpp/io/c/fprintf")(C++11) |  prints formatted output to [stdout](c/std_streams.html "cpp/io/c/std streams"), a file stream or a buffer   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/c/dsc_fprintf&action=edit)
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
