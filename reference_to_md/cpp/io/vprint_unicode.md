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
[println](println.html "cpp/io/println")(C++23)  
**vprint_unicode vprint_unicode_buffered**(C++23)(C++23)  
[vprint_nonunicodevprint_nonunicode_buffered](vprint_nonunicode.html "cpp/io/vprint nonunicode")(C++23)(C++23)  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/print/navbar_content&action=edit)

Defined in header `[<print>](../header/print.html "cpp/header/print")` |  |   
---|---|---  
void vprint_unicode( [std::FILE](c/FILE.html)* stream,  
[std::string_view](../string/basic_string_view.html) fmt, [std::format_args](../utility/format/basic_format_args.html) args ); |  (1)  |  (since C++23)  
void vprint_unicode_buffered( [std::FILE](c/FILE.html)* stream,  
[std::string_view](../string/basic_string_view.html) fmt, [std::format_args](../utility/format/basic_format_args.html) args ); |  (2)  |  (since C++23)  
void vprint_unicode_buffered( [std::string_view](../string/basic_string_view.html) fmt, [std::format_args](../utility/format/basic_format_args.html) args ); |  (3)  |  (since C++23)  
| |   
  
Format args according to the format string fmt, and writes the result to the output stream. 

1) Performs the following operations in order: 

  1. Locks stream. 
  2. Let out denote the character representation of formatting arguments provided by args formatted according to specifications given in fmt. 
  3. Writes out to stream: 



    

  * If stream refers to a terminal that is only capable of displaying Unicode via a [native Unicode API](vprint_unicode.html#Notes), flushes stream and writes out to the terminal using the native Unicode API. 
  * Otherwise, writes unmodified out to the stream.



Unconditionally unlocks stream on function exit.

If any of the following conditions is satisfied, the behavior is undefined: 

  * stream is not a valid pointer to an output C stream. 
  * out contains invalid Unicode [code units](https://en.wikipedia.org/wiki/Character_encoding#Terminology "enwiki:Character encoding") when the native Unicode API is used.



2) Equivalent to [std::string](../string/basic_string.html) out = [std::vformat](../utility/format/vformat.html)(fmt, args);  
std::vprint_unicode(stream, "{}", [std::make_format_args](../utility/format/make_format_args.html)(out));.

3) Equivalent to std::vprint_unicode_buffered(stdout, fmt, args).

  


After writing characters to the output stream, establishes an [observable checkpoint](../language/as_if.html "cpp/language/as if").  | (since C++26)  
---|---  
  
## Contents

  * [1 Parameters](vprint_unicode.html#Parameters)
  * [2 Exceptions](vprint_unicode.html#Exceptions)
  * [3 Notes](vprint_unicode.html#Notes)
  * [4 Example](vprint_unicode.html#Example)
  * [5 Defect reports](vprint_unicode.html#Defect_reports)
  * [6 See also](vprint_unicode.html#See_also)
  * [7 External links](vprint_unicode.html#External_links)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/vprint_unicode&action=edit&section=1 "Edit section: Parameters")] Parameters

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

  
args  |  \-  |  arguments to be formatted   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/vprint_unicode&action=edit&section=2 "Edit section: Exceptions")] Exceptions

  * [std::bad_alloc](../memory/new/bad_alloc.html "cpp/memory/new/bad alloc") on allocation failure. 
  * [std::system_error](../error/system_error.html "cpp/error/system error"), if writing to the stream fails. 
  * Propagates any exception thrown by used [formatters](../utility/format/formatter.html "cpp/utility/format/formatter"), e.g. [std::format_error](../utility/format/format_error.html "cpp/utility/format/format error"). 



### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/vprint_unicode&action=edit&section=3 "Edit section: Notes")] Notes

The C++ standard encourages the implementers to produce a diagnostic message if out contains invalid Unicode code units. 

On POSIX, writing to a terminal is done using the usual standard I/O functions, so there is no need to treat a terminal differently to any other file stream. 

On Windows, the stream refers to a terminal if GetConsoleMode(_get_osfhandle(_fileno(stream))) returns nonzero (see Windows documentation for [`GetConsoleMode`](https://docs.microsoft.com/en-us/windows/console/getconsolemode), [`_get_osfhandle`](https://docs.microsoft.com/en-us/cpp/c-runtime-library/reference/get-osfhandle), and [`_fileno`](https://docs.microsoft.com/en-us/cpp/c-runtime-library/reference/fileno)). The native Unicode API on Windows is [`WriteConsoleW`](https://docs.microsoft.com/en-us/windows/console/writeconsole). 

If invoking the native Unicode API requires transcoding, the invalid code units are substituted with `U+FFFD` REPLACEMENT CHARACTER (see "The Unicode Standard - Core Specification", [Chapter 3.9](vprint_unicode.html#External_links)). 

[Feature-test](../utility/feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_print`](../experimental/feature_test.html#cpp_lib_print "cpp/feature test") | [`202207L`](../compiler_support/23.html#cpp_lib_print_202207L "cpp/compiler support/23") | (C++23) | Formatted output   
[`202403L`](../compiler_support/26.html#cpp_lib_print_202403L "cpp/compiler support/26") | (C++26)  
(DR23) | Unbuffered formatted output   
[`202406L`](../compiler_support/26.html#cpp_lib_print_202406L "cpp/compiler support/26") | (C++26)  
(DR23) | Enabling unbuffered formatted output for more formattable types   
[`__cpp_lib_format`](../experimental/feature_test.html#cpp_lib_format "cpp/feature test") | [`202207L`](../compiler_support/23.html#cpp_lib_format_202207L "cpp/compiler support/23") | (C++23) | Exposing std::basic_format_string  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/vprint_unicode&action=edit&section=4 "Edit section: Example")] Example

| This section is incomplete  
Reason: no example   
---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/vprint_unicode&action=edit&section=5 "Edit section: Defect reports")] Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 4044](https://cplusplus.github.io/LWG/issue4044) | C++23  | the native Unicode API was always used if the  
terminal referred to by stream can display Unicode  | only used if the terminal can only use  
the native Unicode API to display Unicode   
[P3107R5](https://wg21.link/P3107R5) | C++23  | printing operations were always buffered  | provides unbuffered printing operations   
[P3235R3](https://wg21.link/P3235R3) | C++23  | the names of the functions added  
by [P3107R5](https://wg21.link/P3107R5) were misleading  | changed the function names   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/vprint_unicode&action=edit&section=6 "Edit section: See also")] See also

[ vprint_nonunicodevprint_nonunicode_buffered](vprint_nonunicode.html "cpp/io/vprint nonunicode")(C++23) |  prints to [stdout](c/std_streams.html "cpp/io/c/std streams") or a file stream using [type-erased](../utility/format/basic_format_args.html "cpp/utility/format/basic format args") argument representation   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_vprint_nonunicode&action=edit)  
---|---  
[ vprint_unicode(std::ostream)](basic_ostream/vprint_unicode.html "cpp/io/basic ostream/vprint unicode")(C++23) |  performs Unicode aware output using [type-erased](../utility/format/basic_format_args.html "cpp/utility/format/basic format args") argument representation   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/basic_ostream/dsc_vprint_unicode&action=edit)  
[ print](print.html "cpp/io/print")(C++23) |  prints to [stdout](c/std_streams.html "cpp/io/c/std streams") or a file stream using [formatted](../utility/format.html "cpp/utility/format") representation of the arguments   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/io/dsc_print&action=edit)  
[ format](../utility/format/format.html "cpp/utility/format/format")(C++20) |  stores formatted representation of the arguments in a new string   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/utility/format/dsc_format&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/io/vprint_unicode&action=edit&section=7 "Edit section: External links")] External links

1\.  | [Unicode](https://en.wikipedia.org/wiki/Unicode "enwiki:Unicode")  
---|---  
2\.  | [The Unicode Standard Version 14.0 - Core Specification](https://www.unicode.org/versions/Unicode14.0.0/UnicodeStandard-14.0.pdf)
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
