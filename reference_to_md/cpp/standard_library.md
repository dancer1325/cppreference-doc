[C++](../cpp.html "cpp")

[Compiler support](compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](freestanding.html "cpp/freestanding")  
[Language](language.html "cpp/language")  
**Standard library**  
[Standard library headers](headers.html "cpp/header")  
[Named requirements](iterator/concepts.html "cpp/named req")  
[Feature test macros](experimental/feature_test.html "cpp/feature test") (C++20)  
[Language support library](utility.html#Language_support "cpp/utility")  
[Concepts library](concepts.html "cpp/concepts") (C++20)  
[Diagnostics library](error.html "cpp/error")  
[Memory management library](memory.html "cpp/memory")  
[Metaprogramming library](meta.html "cpp/meta") (C++11)  
[General utilities library](utility.html "cpp/utility")  
[Containers library](container.html "cpp/container")  
[Iterators library](iterator.html "cpp/iterator")  
[Ranges library](ranges.html "cpp/ranges") (C++20)  
[Algorithms library](algorithm.html "cpp/algorithm")  
[Strings library](string.html "cpp/string")  
[Text processing library](text.html "cpp/text")  
[Numerics library](numeric.html "cpp/numeric")  
[Date and time library](chrono.html "cpp/chrono")  
[Input/output library](io.html "cpp/io")  
[Filesystem library](filesystem.html "cpp/filesystem") (C++17)  
[Concurrency support library](atomic.html "cpp/thread") (C++11)  
[Execution control library](experimental/execution.html "cpp/execution") (C++26)  
[Technical specifications](experimental.html "cpp/experimental")  
[Symbols index](symbol_index.html "cpp/symbol index")  
[External libraries](links/libs.html "cpp/links/libs")  
  


**Standard library**

[Customization point object](ranges/cpo.html "cpp/standard library/cpo") (C++20)  
---  
Exposition-only entities  
[_decay-copy_](standard_library/decay-copy.html "cpp/standard library/decay-copy")(C++11)  
[_synth-three-way_ _synth-three-way-result_](standard_library/synth-three-way.html "cpp/standard library/synth-three-way")(C++20)(C++20)  
  


The C++ standard library provides a wide range of facilities that are usable in standard C++. 

## Contents

  * [1 Category](standard_library.html#Category)
  * [2 Library contents](standard_library.html#Library_contents)
    * [2.1 Headers](standard_library.html#Headers)
  * [3 C standard library](standard_library.html#C_standard_library)
    * [3.1 Names associated with safe functions in standard C (since C++17)](standard_library.html#Names_associated_with_safe_functions_in_standard_C_.28since_C.2B.2B17.29)
  * [4 Using the library](standard_library.html#Using_the_library)
    * [4.1 Including headers](standard_library.html#Including_headers)
    * [4.2 Importing headers](standard_library.html#Importing_headers)
    * [4.3 Importing modules](standard_library.html#Importing_modules)
    * [4.4 Linkage](standard_library.html#Linkage)
  * [5 Requirements on standard library implementations](standard_library.html#Requirements_on_standard_library_implementations)
    * [5.1 Guarantees](standard_library.html#Guarantees)
    * [5.2 Implementation freedom](standard_library.html#Implementation_freedom)
  * [6 Standard library hardening](standard_library.html#Standard_library_hardening)
    * [6.1 Member functions with hardened preconditions](standard_library.html#Member_functions_with_hardened_preconditions)
  * [7 Notes](standard_library.html#Notes)
  * [8 Defect reports](standard_library.html#Defect_reports)

  
---  
  
### Category

The [language support library](utility.html#Language_support "cpp/utility") provides components that are required by certain parts of the C++ language, such as memory allocation ([new](language/new.html "cpp/language/new")/[delete](language/delete.html "cpp/language/delete")) and [exception processing](language/exceptions.html "cpp/language/exceptions"). 

The [concepts library](concepts.html "cpp/concepts") describes library components that C++ programs may use to perform compile-time validation of [template arguments](language/template_parameters.html "cpp/language/template parameters") and perform function dispatch based on properties of types.  | (since C++20)  
---|---  
  
The [diagnostics library](error.html "cpp/error") provides a consistent framework for reporting errors in a C++ program, including [predefined exception classes](error.html#Exception_categories "cpp/error"). 

The [memory management library](memory.html "cpp/memory") provides components for memory management, including [smart pointers](memory.html#Smart_pointers "cpp/memory") and [scoped allocator](memory/scoped_allocator_adaptor.html "cpp/memory/scoped allocator adaptor")(since C++11). 

The [metaprogramming library](meta.html "cpp/meta") describes facilities for use in [templates](language/templates.html "cpp/language/templates") and during constant evaluation, including [type traits](meta.html#Type_traits "cpp/meta"), [integer sequence](utility/integer_sequence.html "cpp/utility/integer sequence"),(since C++14) and [rational arithmetic](utility/ratio.html "cpp/numeric/ratio").  | (since C++11)  
---|---  
  
The [general utilities library](utility.html#General-purpose_utilities "cpp/utility") includes components used by other library elements, such as a [predefined storage allocator](memory.html#Allocators "cpp/memory") for dynamic storage management, and components used as infrastructure in C++ programs, such as [tuples](utility/tuple.html "cpp/utility/tuple") and(since C++11) [function wrappers](functional.html "cpp/utility/functional"). 

The [containers](container.html "cpp/container"), [iterators](iterator.html "cpp/iterator"), [ranges](ranges.html "cpp/ranges")(since C++20), and [algorithms](algorithm.html "cpp/algorithm") libraries provide a C++ program with access to a subset of the most widely used algorithms and data structures. 

The [strings library](string.html "cpp/string") provides support for manipulating text represented as homogeneous sequences of following types: char, char8_t(since C++20), char16_t, char32_t(since C++11), wchar_t, and any other character-like types. 

The [text processing library](text.html "cpp/text") provides [regular expression](regex.html "cpp/regex") matching and searching(since C++11), utilities for [text formatting](utility/format.html "cpp/utility/format")(since C++20), [identifying text encodings](locale/text_encoding.html "cpp/text/text encoding")(since C++26) and [localization facilities](locale.html "cpp/locale"). 

The [numerics library](numeric.html "cpp/numeric") provides [numeric algorithms](numeric.html#Numeric_algorithms "cpp/numeric") and [complex number](numeric/complex.html "cpp/numeric/complex") components that extend support for numeric processing. The [valarray](numeric/valarray.html "cpp/numeric/valarray") component provides support for n-at-a-time processing, potentially implemented as parallel operations on platforms that support such processing. The [random number component](numeric/random.html "cpp/numeric/random") provides facilities for generating pseudo-random numbers.(since C++11)

The [time library](chrono.html "cpp/chrono") provides generally useful time utilities. 

The [input/output library](io.html "cpp/io") provides the [iostream components](io.html#Stream-based_I.2FO "cpp/io") that are the primary mechanism for C++ program input and output. They can be used with other elements of the library, particularly strings, locales, and iterators. 

The [thread support library](atomic.html "cpp/thread") provides components to create and manage threads, including [atomic operations](atomic/atomic.html "cpp/atomic/atomic"), [mutual exclusion](thread/mutex.html "cpp/thread/mutex"), and inter-thread communication.  | (since C++11)  
---|---  
  
The [execution support](experimental/execution.html "cpp/execution") library provides a framework for managing asynchronous execution on generic execution resources.  | (since C++26)  
---|---  
  
### Library contents

The C++ standard library provides definitions for the [entities](language/basics.html "cpp/language/basic concepts") and [macros](preprocessor/replace.html "cpp/preprocessor/replace") described in the synopses of the [C++ standard library headers](headers.html "cpp/headers"), unless otherwise specified. 

All library entities except [operator new](memory/new/operator_new.html "cpp/memory/new/operator new") and [operator delete](memory/new/operator_delete.html "cpp/memory/new/operator delete") are defined within the namespace std or [namespaces](language/namespace.html "cpp/language/namespace") nested within namespace std (except the entities for the C standard library facilities, see below). It is unspecified whether names declared in a specific namespace are declared directly in that namespace or in an [inline namespace](language/namespace.html#Inline_namespaces "cpp/language/namespace") inside that namespace.(since C++11)

#### Headers

Each element of the C++ standard library is declared or defined (as appropriate) in a _header_. A header is not necessarily a source file, nor are the sequences delimited by `**<**` and `**>**` in header names necessarily valid source file names. 

The C++ standard library provides the _C++ library headers_ and _additional C++ headers for C library facilities_ (see “[headers](headers.html "cpp/headers")” page for descriptions): 

C++ library headers   
---  
[`<algorithm>`](header/algorithm.html "cpp/header/algorithm") | [`<iomanip>`](header/iomanip.html "cpp/header/iomanip") | [`<list>`](header/list.html "cpp/header/list") | [`<ostream>`](header/ostream.html "cpp/header/ostream") | [`<streambuf>`](header/streambuf.html "cpp/header/streambuf")  
[`<bitset>`](header/bitset.html "cpp/header/bitset") | [`<ios>`](header/ios.html "cpp/header/ios") | [`<locale>`](header/locale.html "cpp/header/locale") | [`<queue>`](header/queue.html "cpp/header/queue") | [`<string>`](header/string.html "cpp/header/string")  
[`<complex>`](header/complex.html "cpp/header/complex") | [`<iosfwd>`](header/iosfwd.html "cpp/header/iosfwd") | [`<map>`](header/map.html "cpp/header/map") | [`<set>`](header/set.html "cpp/header/set") | [`<typeinfo>`](header/typeinfo.html "cpp/header/typeinfo")  
[`<deque>`](header/deque.html "cpp/header/deque") | [`<iostream>`](header/iostream.html "cpp/header/iostream") | [`<memory>`](header/memory.html "cpp/header/memory") | [`<sstream>`](header/sstream.html "cpp/header/sstream") | [`<utility>`](header/utility.html "cpp/header/utility")  
[`<exception>`](header/exception.html "cpp/header/exception") | [`<istream>`](header/istream.html "cpp/header/istream") | [`<new>`](header/new.html "cpp/header/new") | [`<stack>`](header/stack.html "cpp/header/stack") | [`<valarray>`](header/valarray.html "cpp/header/valarray")  
[`<fstream>`](header/fstream.html "cpp/header/fstream") | [`<iterator>`](header/iterator.html "cpp/header/iterator") | [`<numeric>`](header/numeric.html "cpp/header/numeric") | [`<stdexcept>`](header/stdexcept.html "cpp/header/stdexcept") | [`<vector>`](header/vector.html "cpp/header/vector")  
[`<functional>`](header/functional.html "cpp/header/functional") | [`<limits>`](header/limits.html "cpp/header/limits") |  |  |   
Headers added in C++11   
[`<array>`](header/array.html "cpp/header/array") | [`<condition_variable>`](header/condition_variable.html "cpp/header/condition variable") | [`<mutex>`](header/mutex.html "cpp/header/mutex") | [`<scoped_allocator>`](header/scoped_allocator.html "cpp/header/scoped allocator") | [`<type_traits>`](header/type_traits.html "cpp/header/type traits")  
[`<atomic>`](header/atomic.html "cpp/header/atomic") | [`<forward_list>`](header/forward_list.html "cpp/header/forward list") | [`<random>`](header/random.html "cpp/header/random") | [`<system_error>`](header/system_error.html "cpp/header/system error") | [`<typeindex>`](header/typeindex.html "cpp/header/typeindex")  
[`<chrono>`](header/chrono.html "cpp/header/chrono") | [`<future>`](header/future.html "cpp/header/future") | [`<ratio>`](header/ratio.html "cpp/header/ratio") | [`<thread>`](header/thread.html "cpp/header/thread") | [`<unordered_map>`](header/unordered_map.html "cpp/header/unordered map")  
[`<codecvt>`](header/codecvt.html "cpp/header/codecvt") | [`<initializer_list>`](header/initializer_list.html "cpp/header/initializer list") | [`<regex>`](header/regex.html "cpp/header/regex") | [`<tuple>`](header/tuple.html "cpp/header/tuple") | [`<unordered_set>`](header/unordered_set.html "cpp/header/unordered set")  
Headers added in C++14   
[`<shared_mutex>`](header/shared_mutex.html "cpp/header/shared mutex") |  |  |  |   
Headers added in C++17   
[`<any>`](header/any.html "cpp/header/any") | [`<execution>`](header/execution.html "cpp/header/execution") | [`<memory_resource>`](header/memory_resource.html "cpp/header/memory resource") | [`<string_view>`](header/string_view.html "cpp/header/string view") | [`<variant>`](header/variant.html "cpp/header/variant")  
[`<charconv>`](header/charconv.html "cpp/header/charconv") | [`<filesystem>`](header/filesystem.html "cpp/header/filesystem") | [`<optional>`](header/optional.html "cpp/header/optional") |  |   
Headers added in C++20   
[`<barrier>`](header/barrier.html "cpp/header/barrier") | [`<concepts>`](header/concepts.html "cpp/header/concepts") | [`<latch>`](header/latch.html "cpp/header/latch") | [`<semaphore>`](header/semaphore.html "cpp/header/semaphore") | [`<stop_token>`](header/stop_token.html "cpp/header/stop token")  
[`<bit>`](header/bit.html "cpp/header/bit") | [`<coroutine>`](header/coroutine.html "cpp/header/coroutine") | [`<numbers>`](header/numbers.html "cpp/header/numbers") | [`<source_location>`](header/source_location.html "cpp/header/source location") | [`<syncstream>`](header/syncstream.html "cpp/header/syncstream")  
[`<compare>`](header/compare.html "cpp/header/compare") | [`<format>`](header/format.html "cpp/header/format") | [`<ranges>`](header/ranges.html "cpp/header/ranges") | [`<span>`](header/span.html "cpp/header/span") | [`<version>`](header/version.html "cpp/header/version")  
Headers added in C++23   
[`<expected>`](header/expected.html "cpp/header/expected") | [`<flat_set>`](header/flat_set.html "cpp/header/flat set") | [`<mdspan>`](header/mdspan.html "cpp/header/mdspan") | [`<spanstream>`](header/spanstream.html "cpp/header/spanstream") | [`<stdfloat>`](header/stdfloat.html "cpp/header/stdfloat")  
[`<flat_map>`](header/flat_map.html "cpp/header/flat map") | [`<generator>`](header/generator.html "cpp/header/generator") | [`<print>`](header/print.html "cpp/header/print") | [`<stacktrace>`](header/stacktrace.html "cpp/header/stacktrace") |   
Headers added in C++26   
[`<contracts>`](header/contracts.html "cpp/header/contracts") | [`<hazard_pointer>`](header/hazard_pointer.html "cpp/header/hazard pointer") | [`<inplace_vector>`](header/inplace_vector.html "cpp/header/inplace vector") | [`<rcu>`](header/rcu.html "cpp/header/rcu") | [`<text_encoding>`](header/text_encoding.html "cpp/header/text encoding")  
[`<debugging>`](header/debugging.html "cpp/header/debugging") | [`<hive>`](header/hive.html "cpp/header/hive") | [`<linalg>`](header/linalg.html "cpp/header/linalg") | [`<simd>`](header/simd.html "cpp/header/simd") |   
Removed headers   
[`<codecvt>`](header/codecvt.html "cpp/header/codecvt") | (since C++11)(deprecated in C++17)(removed in C++26)  
[`<strstream>`](header/strstream.html "cpp/header/strstream") | (deprecated in C++98)(removed in C++26)  
C++ headers for C library facilities   
---  
[`<cassert>`](header/cassert.html "cpp/header/cassert") | [`<clocale>`](header/clocale.html "cpp/header/clocale") | [`<cstdarg>`](header/cstdarg.html "cpp/header/cstdarg") | [`<cstring>`](header/cstring.html "cpp/header/cstring")  
[`<cctype>`](header/cctype.html "cpp/header/cctype") | [`<cmath>`](header/cmath.html "cpp/header/cmath") | [`<cstddef>`](header/cstddef.html "cpp/header/cstddef") | [`<ctime>`](header/ctime.html "cpp/header/ctime")  
[`<cerrno>`](header/cerrno.html "cpp/header/cerrno") | [`<csetjmp>`](header/csetjmp.html "cpp/header/csetjmp") | [`<cstdio>`](header/cstdio.html "cpp/header/cstdio") | [`<cwchar>`](header/cwchar.html "cpp/header/cwchar")  
[`<cfloat>`](header/cfloat.html "cpp/header/cfloat") | [`<csignal>`](header/csignal.html "cpp/header/csignal") | [`<cstdlib>`](header/cstdlib.html "cpp/header/cstdlib") | [`<cwctype>`](header/cwctype.html "cpp/header/cwctype")  
[`<climits>`](header/climits.html "cpp/header/climits") |  |  |   
Headers added in C++11   
[`<cfenv>`](header/cfenv.html "cpp/header/cfenv") | [`<cinttypes>`](header/cinttypes.html "cpp/header/cinttypes") | [`<cstdint>`](header/cstdint.html "cpp/header/cstdint") | [`<cuchar>`](header/cuchar.html "cpp/header/cuchar")  
Removed headers   
[`<ccomplex>`](header/ccomplex.html "cpp/header/ccomplex") | (since C++11)(deprecated in C++17)(removed in C++20)  
[`<ciso646>`](header/ciso646.html "cpp/header/ciso646") | (removed in C++20)  
[`<cstdalign>`](header/cstdalign.html "cpp/header/cstdalign") | (since C++11)(deprecated in C++17)(removed in C++20)  
[`<cstdbool>`](header/cstdbool.html "cpp/header/cstdbool") | (since C++11)(deprecated in C++17)(removed in C++20)  
[`<ctgmath>`](header/ctgmath.html "cpp/header/ctgmath") | (since C++11)(deprecated in C++17)(removed in C++20)  
  
A [freestanding implementation](freestanding.html "cpp/freestanding") has an implementation-defined set of headers, see [here](freestanding.html#header_requirements "cpp/freestanding") for the minimal requirement on the set of headers. 

### C standard library

The C++ standard library also makes available the facilities of the C standard library, suitably adjusted to ensure static type safety. The descriptions of many library functions rely on the C standard library for the semantics of those functions. 

In some cases, the signatures specified in standard C++ may be different from the signatures in the C standard library, and additional overloads may be declared, but the behavior and the preconditions (including those implied by C's [restrict](../c/language/restrict.html "c/language/restrict"))(since C++17) are the same unless otherwise stated. 

For compatibility with the C standard library, the C++ standard library provides the C headers listed below. The intended use of these headers is for interoperability only. It is possible that C++ source files need to include one of these headers in order to be valid ISO C. Source files that are not intended to also be valid ISO C should not use any of the C headers. See [here](headers.html#C_compatibility_headers "cpp/headers") for descriptions. 

C headers   
---  
[`<assert.h>`](header/cassert.html "cpp/header/cassert") | [`<limits.h>`](header/climits.html "cpp/header/climits") | [`<stdarg.h>`](header/cstdarg.html "cpp/header/cstdarg") | [`<string.h>`](header/cstring.html "cpp/header/cstring")  
[`<ctype.h>`](header/cctype.html "cpp/header/cctype") | [`<locale.h>`](header/clocale.html "cpp/header/clocale") | [`<stddef.h>`](header/cstddef.html "cpp/header/cstddef") | [`<time.h>`](header/ctime.html "cpp/header/ctime")  
[`<errno.h>`](header/cerrno.html "cpp/header/cerrno") | [`<math.h>`](header/cmath.html "cpp/header/cmath") | [`<stdio.h>`](header/cstdio.html "cpp/header/cstdio") | [`<wchar.h>`](header/cwchar.html "cpp/header/cwchar")  
[`<float.h>`](header/cfloat.html "cpp/header/cfloat") | [`<setjmp.h>`](header/csetjmp.html "cpp/header/csetjmp") | [`<stdlib.h>`](header/cstdlib.html "cpp/header/cstdlib") | [`<wctype.h>`](header/cwctype.html "cpp/header/cwctype")  
[`<iso646.h>`](header/ciso646.html "cpp/header/ciso646") | [`<signal.h>`](header/csignal.html "cpp/header/csignal") |  |   
Headers added in C++11   
[`<complex.h>`](header/ccomplex.html "cpp/header/ccomplex") | [`<inttypes.h>`](header/cinttypes.html "cpp/header/cinttypes") | [`<stdbool.h>`](header/cstdbool.html "cpp/header/cstdbool") | [`<tgmath.h>`](header/ctgmath.html "cpp/header/ctgmath")  
[`<fenv.h>`](header/cfenv.html "cpp/header/cfenv") | [`<stdalign.h>`](header/cstdalign.html "cpp/header/cstdalign") | [`<stdint.h>`](header/cstdint.html "cpp/header/cstdint") | [`<uchar.h>`](header/cuchar.html "cpp/header/cuchar")  
Headers added in C++23   
[`<stdatomic.h>`](header/stdatomic.h.html "cpp/header/stdatomic.h") |  |  |   
Headers added in C++26   
[`<stdbit.h>`](header/stdbit.h.html "cpp/header/stdbit.h") | [`<stdchkint.h>`](https://en.cppreference.com/mwiki/index.php?title=cpp/header/stdchkint.h&action=edit&redlink=1 "cpp/header/stdchkint.h \(page does not exist\)") |  |   
  
Except otherwise noted, the contents of each header `c _xxx_` is the same as that of the corresponding header `_xxx_.h` as specified in the [C standard library](../c/header.html "c/header"). In the C++ standard library, however, the declarations (except for names which are defined as macros in C) are within namespace scope of the namespace std. It is unspecified whether these names (including any overloads added) are first declared within the global namespace scope and are then injected into namespace std by explicit [using-declarations](language/namespace.html#Using-declarations "cpp/language/namespace"). 

Names which are defined as macros in C ([`assert`](error/assert.html "cpp/error/assert"), [`offsetof`](types/offsetof.html "cpp/types/offsetof"), [`setjmp`](utility/program/setjmp.html "cpp/utility/program/setjmp"), [`va_arg`](utility/variadic/va_arg.html "cpp/utility/variadic/va arg"), [`va_end`](utility/variadic/va_end.html "cpp/utility/variadic/va end") and [`va_start`](utility/variadic/va_start.html "cpp/utility/variadic/va start")) must be defined as macros in the C++ standard library, even if C grants license for implementation as functions. 

Names that are defined as functions in C must be defined as functions in the C++ standard library. This disallows the practice, allowed in C, of providing a masking macro in addition to the function prototype. The only way to achieve equivalent inline behavior in C++ is to provide a definition as an extern [inline function](language/inline.html "cpp/language/inline"). 

Identifiers that are keywords or operators in C++ cannot be defined as macros in C++ standard library headers. In particular, including the standard header [`<iso646.h>`](header/ciso646.html "cpp/header/ciso646") has no effect. 

#### Names associated with safe functions in standard C (since C++17)

If any C++ header is included, it is implementation-defined whether any of the following C standard Annex K names is declared in the global namespace (none of them is declared in namespace std): 

C standard Annex K names   
---  
[`abort_handler_s`](../c/error/abort_handler_s.html "c/error/abort handler s") | [`mbstowcs_s`](../c/string/multibyte/mbstowcs.html "c/string/multibyte/mbstowcs") | [`strncat_s`](../c/string/byte/strncat.html "c/string/byte/strncat") | [`vswscanf_s`](../c/io/vfwscanf.html "c/io/vfwscanf")  
[`asctime_s`](../c/chrono/asctime.html "c/chrono/asctime") | [`memcpy_s`](../c/string/byte/memcpy.html "c/string/byte/memcpy") | [`strncpy_s`](../c/string/byte/strncpy.html "c/string/byte/strncpy") | [`vwprintf_s`](../c/io/vfwprintf.html "c/io/vfwprintf")  
[`bsearch_s`](../c/algorithm/bsearch.html "c/algorithm/bsearch") | [`memmove_s`](../c/string/byte/memmove.html "c/string/byte/memmove") | [`strtok_s`](../c/string/byte/strtok.html "c/string/byte/strtok") | [`vwscanf_s`](../c/io/vfwscanf.html "c/io/vfwscanf")  
[`constraint_handler_t`](../c/error/set_constraint_handler_s.html "c/error/set constraint handler s") | [`memset_s`](../c/string/byte/memset.html "c/string/byte/memset") | [`swprintf_s`](../c/io/fwprintf.html "c/io/fwprintf") | [`wcrtomb_s`](../c/string/multibyte/wcrtomb.html "c/string/multibyte/wcrtomb")  
[`ctime_s`](../c/chrono/ctime.html "c/chrono/ctime") | [`printf_s`](../c/io/fprintf.html "c/io/fprintf") | [`swscanf_s`](../c/io/fwscanf.html "c/io/fwscanf") | [`wcscat_s`](../c/string/wide/wcscat.html "c/string/wide/wcscat")  
[`errno_t`](../c/error.html "c/error") | [`qsort_s`](../c/algorithm/qsort.html "c/algorithm/qsort") | [`tmpfile_s`](../c/io/tmpfile.html "c/io/tmpfile") | [`wcscpy_s`](../c/string/wide/wcscpy.html "c/string/wide/wcscpy")  
[`fopen_s`](../c/io/fopen.html "c/io/fopen") | [`RSIZE_MAX`](../c/error.html "c/error") | [`TMP_MAX_S`](../c/io/tmpnam.html "c/io/tmpnam") | [`wcsncat_s`](../c/string/wide/wcsncat.html "c/string/wide/wcsncat")  
[`fprintf_s`](../c/io/fprintf.html "c/io/fprintf") | [`rsize_t`](../c/error.html "c/error") | [`tmpnam_s`](../c/io/tmpnam.html "c/io/tmpnam") | [`wcsncpy_s`](../c/string/wide/wcsncpy.html "c/string/wide/wcsncpy")  
[`freopen_s`](../c/io/freopen.html "c/io/freopen") | [`scanf_s`](../c/io/fscanf.html "c/io/fscanf") | [`vfprintf_s`](../c/io/vfprintf.html "c/io/vfprintf") | [`wcsnlen_s`](../c/string/wide/wcslen.html "c/string/wide/wcslen")  
[`fscanf_s`](../c/io/fscanf.html "c/io/fscanf") | [`set_constraint_handler_s`](../c/error/set_constraint_handler_s.html "c/error/set constraint handler s") | [`vfscanf_s`](../c/io/vfscanf.html "c/io/vfscanf") | [`wcsrtombs_s`](../c/string/multibyte/wcsrtombs.html "c/string/multibyte/wcsrtombs")  
[`fwprintf_s`](../c/io/fwprintf.html "c/io/fwprintf") | [`snprintf_s`](../c/io/fprintf.html "c/io/fprintf") | [`vfwprintf_s`](../c/io/vfwprintf.html "c/io/vfwprintf") | [`wcstok_s`](../c/string/wide/wcstok.html "c/string/wide/wcstok")  
[`fwscanf_s`](../c/io/fwscanf.html "c/io/fwscanf") | [`snwprintf_s`](../c/io/fwprintf.html "c/io/fwprintf") | [`vfwscanf_s`](../c/io/vfwscanf.html "c/io/vfwscanf") | [`wcstombs_s`](../c/string/multibyte/wcstombs.html "c/string/multibyte/wcstombs")  
[`gets_s`](../c/io/gets.html "c/io/gets") | [`sscanf_s`](../c/io/fscanf.html "c/io/fscanf") | [`vprintf_s`](../c/io/vfprintf.html "c/io/vfprintf") | [`wmemcpy_s`](../c/string/wide/wmemcpy.html "c/string/wide/wmemcpy")  
[`gmtime_s`](../c/chrono/gmtime.html "c/chrono/gmtime") | [`mbstowcs_s`](../c/string/multibyte/mbstowcs.html "c/string/multibyte/mbstowcs") | [`vscanf_s`](../c/io/vfscanf.html "c/io/vfscanf") | [`vswscanf_s`](../c/io/vfwscanf.html "c/io/vfwscanf")  
[`abort_handler_s`](../c/error/abort_handler_s.html "c/error/abort handler s") | [`strcat_s`](../c/string/byte/strcat.html "c/string/byte/strcat") | [`vsnprintf_s`](../c/io/vfprintf.html "c/io/vfprintf") | [`wmemmove`](../c/string/wide.html "c/string/wide")  
[`ignore_handler_s`](../c/error/ignore_handler_s.html "c/error/ignore handler s") | [`strcpy_s`](../c/string/byte/strcpy.html "c/string/byte/strcpy") | [`vsnwprintf_s`](../c/io/vfwprintf.html "c/io/vfwprintf") | [`wprintf_s`](../c/io/fwprintf.html "c/io/fwprintf")  
[`localtime_s`](../c/chrono/localtime.html "c/chrono/localtime") | [`strerrorlen_s`](../c/string/byte/strerror.html "c/string/byte/strerror") | [`vsprintf_s`](../c/io/vfprintf.html "c/io/vfprintf") | [`wscanf_s`](../c/io/fwscanf.html "c/io/fwscanf")  
[`L_tmpnam_s`](../c/io/tmpnam.html "c/io/tmpnam") | [`strerror_s`](../c/string/byte/strerror.html "c/string/byte/strerror") | [`vsscanf_s`](../c/io/vfscanf.html "c/io/vfscanf") |   
[`mbsrtowcs_s`](../c/string/multibyte/mbsrtowcs.html "c/string/multibyte/mbsrtowcs") | [`strlen_s`](../c/string/byte/strlen.html "c/string/byte/strlen") | [`vswprintf_s`](../c/io/vfwprintf.html "c/io/vfwprintf") |   
  
### Using the library

#### Including headers

The entities in the C++ standard library are defined in headers, whose contents are made available to a translation unit when it contains the appropriate [` #include`](preprocessor/include.html "cpp/preprocessor/include") preprocessing directive. 

A translation unit may include library headers in any order. Each may be included more than once, with no effect different from being included exactly once, except that the effect of including either [`<cassert>`](header/cassert.html "cpp/header/cassert") or [`<assert.h>`](header/cassert.html "cpp/header/cassert") depends each time on the lexically current definition of NDEBUG. 

A translation unit can only include a header outside of any declaration or definition, and lexically before the first reference in that translation unit to any of the entities declared in that header. No diagnostic is required. 

In [module units](language/modules.html "cpp/language/modules"), headers can only be included in [global module fragments](language/modules.html#Global_module_fragment "cpp/language/modules").  | (since C++20)  
---|---  
  
####  Importing headers

The [C++ library headers](standard_library.html#Headers), or, for a freestanding implementation, the subset of such headers that are provided by the implementation, are collectively known as the _importable C++ library headers_. The contents of importable C++ library headers are made available to a translation unit when it contains the appropriate [import declaration](language/modules.html#Importing_modules_and_headers "cpp/language/modules").  | (since C++20)  
---|---  
  
####  Importing modules

The C++ standard library provides the following _C++ library modules_ : 

  * The [named module](language/modules.html#Module_declarations "cpp/language/modules") std exports declarations in namespace `std` that are provided by the importable C++ library headers (e.g. [std::rotr](numeric/rotr.html "cpp/numeric/rotr") from [`<bit>`](header/bit.html "cpp/header/bit")) and the [C++ headers for C library facilities](standard_library.html#Headers) (e.g. [std::puts](io/c/puts.html "cpp/io/c/puts") from [`<cstdio>`](header/cstdio.html "cpp/header/cstdio")). It additionally exports declarations in the global namespace for the storage [allocation](memory/new/operator_new.html "cpp/memory/new/operator new") and [deallocation](memory/new/operator_delete.html "cpp/memory/new/operator delete") functions that are provided by [`<new>`](header/new.html "cpp/header/new") (e.g. [::operator new](memory/new/operator_new.html "cpp/memory/new/operator new")). 
  * The named module std.compat exports the same declarations as the named module std, and additionally exports declarations in the global namespace corresponding to the declarations in namespace `std` that are provided by the C++ headers for C library facilities (e.g. [::fclose](io/c/fclose.html "cpp/io/c/fclose")). 

For each declaration in the standard library, 

  * the module it [attaches to](language/modules.html#Module_ownership "cpp/language/modules") is unspecified, and 
  * it denotes the same [entity](language/basics.html "cpp/language/basic concepts") regardless of whether it was made reachable through including a header, importing a header unit, or importing a C++ library module. 

| (since C++23)  
  
#### Linkage

Entities in the C++ standard library have [storage duration#external linkage](language/storage_duration.html#external_linkage "cpp/language/storage duration"). Unless otherwise specified, objects and functions have the default extern "C++" [linkage](language/language_linkage.html "cpp/language/language linkage"). 

Whether a name from the C standard library declared with external linkage has extern "C" or extern "C++" linkage is implementation-defined. The C++ standard recommends using extern "C++" in this case. 

Objects and functions defined in the library and required by a C++ program are included in the program prior to program startup. 

### Requirements on standard library implementations

#### Guarantees

A C++ header must provide [declarations](language/declarations.html "cpp/language/declarations") and [definitions](language/definition.html "cpp/language/definition") that appear in 

  * the synopsis of that header, or 
  * the synopsis of another header which is appeared to be included in the synopsis of that header. 



For types and macros defined in multiple headers (such as [`NULL`](types/NULL.html "cpp/types/NULL")), including any number of these headers in any order never violates the [one definition rule](language/definition.html#One_Definition_Rule "cpp/language/definition"). 

Unless otherwise specified, all [object-like macros](preprocessor/replace.html#Object-like_macros "cpp/preprocessor/replace") defined by the C standard library that expand to integral [constant expressions](language/constant_expression.html "cpp/language/constant expression") can be used in [`#if`](preprocessor/conditional.html "cpp/preprocessor/conditional") preprocessing directives. 

Calling a standard library non-member function signature always results in actually calling that function. Therefore a conforming standard library implementation cannot define additional non-member functions that may be called by a valid C++ program. 

Non-member function signatures are never declared with additional [default arguments](language/default_arguments.html "cpp/language/default arguments"). 

Unless otherwise specified, calls made by functions in the standard library to non-operator, non-member functions do not use functions from another [namespace](language/namespace.html "cpp/language/namespace") which are found through [argument-dependent name lookup](language/adl.html "cpp/language/adl"). 

For each [friend declaration](language/friend.html "cpp/language/friend") of a function (template) within a class (template) definition, no other declaration is provided for that function (template). 

Standard library function signatures can only be declared as constexpr if they are required to be [constexpr](language/constexpr.html "cpp/language/constexpr") (libstdc++ cmath [is notably non-conforming](https://gcc.gnu.org/bugzilla/show_bug.cgi?id=102916) here). If a header provides any non-defining declarations of constexpr functions or constructors, the corresponding definitions should also be provided within that header. Unless otherwise specified, each standard library function should meet each of the following requirements to prevent [data races](language/memory_model.html#Threads_and_data_races "cpp/language/memory model"): 

  * A C++ standard library function cannot (directly or indirectly) access objects accessible by threads other than the current thread unless the objects are accessed (directly or indirectly) via the function’s arguments, including this. 
  * A C++ standard library function cannot (directly or indirectly) modify objects accessible by threads other than the current thread unless the objects are accessed (directly or indirectly) via the function’s non-const arguments, including this. 
    * For example, an object with static storage duration cannot be used for internal purposes without synchronization because doing so can cause a data race even in programs that do not explicitly share objects between threads. 
  * A C++ standard library function cannot access objects indirectly accessible via its arguments or via elements of its [container](container.html "cpp/container") arguments except by invoking functions required by its specification on those container elements. 
  * An operation on [iterators](iterator.html "cpp/iterator") obtained by calling a standard library container or string member function can access, but not modify, the underlying container. 
    * In particular, container operations that invalidate iterators conflict with operations on iterators associated with that container. 
  * A C++ standard library function can only perform all operations solely within the current thread if those operations have effects that are [visible](language/memory_model.html#Memory_order "cpp/language/memory model") to users. 
    * Operations without visible side effects can be parallelized. 

| (since C++11)  
---|---  
  
For each class defined in the C++ standard library required to be [derived](language/derived_class.html "cpp/language/derived class") from another class defined in the C++ standard library, 

  * the base class must be [virtual](language/derived_class.html#Virtual_base_classes "cpp/language/derived class") if it is specified as virtual, 
  * the base class cannot be virtual if it is not specified as virtual, and 
  * unless otherwise specified, types with distinct names shall be distinct types. 

Unless otherwise specified, all types specified in the C++ standard library are non-[final](language/final.html "cpp/language/final") types.  | (since C++11)  
---|---  
  
If a function defined in the C++ standard library is specified to throw an [exception](language/exceptions.html "cpp/language/exceptions") (in a particular situation) of a given type, the exception thrown can only have that type or a type derived from that type so that an exception handler for the base type can catch it. 

Functions from the C standard library can only throw exceptions when such a function calls a program-supplied function that throws an exception ([`qsort()`](algorithm/qsort.html "cpp/algorithm/qsort") and [`bsearch()`](algorithm/bsearch.html "cpp/algorithm/bsearch") meet this condition). 

Destructor operations defined in the C++ standard library never throw exceptions. Every destructor in the C++ standard library behaves as if it had a [non-throwing exception specification](language/noexcept_spec.html "cpp/language/noexcept spec"). 

If a function in the C++ standard library report errors via a [std::error_code](error/error_code.html "cpp/error/error code") object, that object's [`category()`](error/error_code/category.html "cpp/error/error code/category") member must return [std::system_category()](error/system_category.html "cpp/error/system category") for errors originating from the operating system, or a reference to an implementation-defined [std::error_category](error/error_category.html "cpp/error/error category") object for errors originating elsewhere. The possible values of [`value()`](error/error_code/value.html "cpp/error/error code/value") for each of these error categories should be defined. Objects of types defined in the C++ standard library may be [moved from](language/move_constructor.html "cpp/language/move constructor"). Move operations can either be explicitly specified or implicitly generated. Unless otherwise specified, such moved-from objects will be placed in a valid but unspecified state. An object of a type defined in the C++ standard library may be [move-assigned](language/move_operator.html "cpp/language/move assignment") to itself. Unless otherwise specified, such an assignment places the object in a valid but unspecified state.  | (since C++11)  
---|---  
  
#### Implementation freedom

It is unspecified whether any member or non-member functions in the C++ standard library are defined as [inline](language/inline.html "cpp/language/inline"). 

For a non-[virtual](language/virtual.html "cpp/language/virtual") C++ standard library member function, a different set of member function signatures can be declared, provided that any call to that member function that would select an overload from the given set of declarations behaves as if that overload was selected. This allows, for instance: 

  * adding parameters with default arguments, 
  * replacing a member function with default arguments with two or more member functions with equivalent behavior, or 
  * adding additional signatures for a member function name. 



Unless otherwise specified, it is implementation-defined which functions in the C++ standard library may be recursively reentered. 

C++ standard library implementations can share their own internal objects between threads if the objects are not visible to users and are protected against data races.  | (since C++11)  
---|---  
  
It is unspecified whether any function signature or class in the C++ standard library is a friend of another class in the C++ standard library. 

The names and global function signatures described [here](standard_library.html#Library_contents) are reserved to the implementation. 

Any class in the C++ standard library can be derived from a class with a name reserved to the implementation. If a class defined in the C++ standard library is required to be derived from other classes in the C++ standard library, that class can be derived directly from the required base or indirectly through a hierarchy of base classes with names reserved to the implementation. 

If a function defined in the C++ standard library is not specified to throw an exception but does not have a non-throwing exception specification, the exception thrown is implementation-defined, but its type should be [std::exception](error/exception.html "cpp/error/exception") or any type derived from [std::exception](error/exception.html "cpp/error/exception"). 

The exception specification for a non-virtual function can be strengthened by adding a non-throwing exception specification. 

###  Standard library hardening

An implementation can be a _hardened implementation ﻿_ , whether the implementation is hardened is implementation-defined. Some standard library member functions (and member function templates) have _hardened precondition ﻿_. When such a function is invoked: 

  * If the implementation is hardened, prior to any other observable side effects of the function, one or more [contract assertions](language/contracts.html "cpp/language/contracts") whose predicates are as described in the hardened precondition are evaluated with a checking semantic. If any of these assertions is evaluated with a non-terminating semantic and the [contract-violation handler](language/contracts.html#Contract-violation_handler "cpp/language/contracts") returns, the behavior is undefined. 
  * If the implementation is not hardened, when a hardened precondition is violated, the behavior is undefined. 



####  Member functions with hardened preconditions

| Category  | Sequence containers  | Container views  | String (view) classes  | General Utilities  | Numeric arrays  
---|---|---|---|---|---  
Class  | [`array`](container/array.html "cpp/container/array") | [`vector`](container/vector.html "cpp/container/vector") | [`inplace_vector`](container/inplace_vector.html "cpp/container/inplace vector") | [`deque`](container/deque.html "cpp/container/deque") | [`list`](container/list.html "cpp/container/list") | [`forward_list`](container/forward_list.html "cpp/container/forward list") | [`span`](container/span.html "cpp/container/span") | [`mdspan`](container/mdspan.html "cpp/container/mdspan") | [`basic_string`](string/basic_string.html "cpp/string/basic string") | [`basic_string_view`](string/basic_string_view.html "cpp/string/basic string view") | [`bitset`](utility/bitset.html "cpp/utility/bitset") | ` `[`optional`](utility/optional.html "cpp/utility/optional")` ` | ` `[`expected`](utility/expected.html "cpp/utility/expected")` ` | [`valarray`](numeric/valarray.html "cpp/numeric/valarray")  
| (constructor)  |  |  |  |  |  |  | [`span`](container/span/span.html "cpp/container/span/span") | [`mdspan`](container/mdspan/mdspan.html "cpp/container/mdspan/mdspan") |  |  |  |  |  |   
Element  
access  | `operator*` |  |  |  |  |  |  |  |  |  |  |  | [`operator*`](utility/optional/operator*.html "cpp/utility/optional/operator*") | [`operator*`](utility/expected/operator*.html "cpp/utility/expected/operator*") |   
`operator->` |  |  |  |  |  |  |  |  |  |  |  | [`operator->`](utility/optional/operator*.html "cpp/utility/optional/operator*") | [`operator->`](utility/expected/operator*.html "cpp/utility/expected/operator*") |   
`operator[]` | [`operator[]`](container/array/operator_at.html "cpp/container/array/operator at") | [`operator[]`](container/vector/operator_at.html "cpp/container/vector/operator at") | [`operator[]`](container/inplace_vector/operator_at.html "cpp/container/inplace vector/operator at") | [`operator[]`](container/deque/operator_at.html "cpp/container/deque/operator at") |  |  | [`operator[]`](container/span/operator_at.html "cpp/container/span/operator at") | [`operator[]`](container/mdspan/operator_at.html "cpp/container/mdspan/operator at") | [`operator[]`](string/basic_string/operator_at.html "cpp/string/basic string/operator at") | [`operator[]`](string/basic_string_view/operator_at.html "cpp/string/basic string view/operator at") | [`operator[]`](utility/bitset/operator_at.html "cpp/utility/bitset/operator at") |  |  | [`operator[]`](numeric/valarray/operator_at.html "cpp/numeric/valarray/operator at")  
`front` | [`front`](container/array/front.html "cpp/container/array/front") | [`front`](container/vector/front.html "cpp/container/vector/front") | [`front`](container/inplace_vector/front.html "cpp/container/inplace vector/front") | [`front`](container/deque/front.html "cpp/container/deque/front") | [`front`](container/list/front.html "cpp/container/list/front") | [`front`](container/forward_list/front.html "cpp/container/forward list/front") | [`front`](container/span/front.html "cpp/container/span/front") |  | [`front`](string/basic_string/front.html "cpp/string/basic string/front") | [`front`](string/basic_string_view/front.html "cpp/string/basic string view/front") |  |  |  |   
`back` | [`back`](container/array/back.html "cpp/container/array/back") | [`back`](container/vector/back.html "cpp/container/vector/back") | [`back`](container/inplace_vector/back.html "cpp/container/inplace vector/back") | [`back`](container/deque/back.html "cpp/container/deque/back") | [`back`](container/list/back.html "cpp/container/list/back") |  | [`back`](container/span/back.html "cpp/container/span/back") |  | [`back`](string/basic_string/back.html "cpp/string/basic string/back") | [`back`](string/basic_string_view/back.html "cpp/string/basic string view/back") |  |  |  |   
`error` |  |  |  |  |  |  |  |  |  |  |  |  | [`error`](utility/expected/error.html "cpp/utility/expected/error") |   
Subviews  | `first` |  |  |  |  |  |  | [`first`](container/span/first.html "cpp/container/span/first") |  |  |  |  |  |  |   
`last` |  |  |  |  |  |  | [`last`](container/span/last.html "cpp/container/span/last") |  |  |  |  |  |  |   
`subspan` |  |  |  |  |  |  | [`subspan`](container/span/subspan.html "cpp/container/span/subspan") |  |  |  |  |  |  |   
Modifiers  | `pop_front` |  |  |  | [`pop_front`](container/deque/pop_front.html "cpp/container/deque/pop front") | [`pop_front`](container/list/pop_front.html "cpp/container/list/pop front") | [`pop_front`](container/forward_list/pop_front.html "cpp/container/forward list/pop front") |  |  |  |  |  |  |  |   
`pop_back` |  | [`pop_back`](container/vector/pop_back.html "cpp/container/vector/pop back") | [`pop_back`](container/inplace_vector/pop_back.html "cpp/container/inplace vector/pop back") | [`pop_back`](container/deque/pop_back.html "cpp/container/deque/pop back") | [`pop_back`](container/list/pop_back.html "cpp/container/list/pop back") |  |  |  | [`pop_back`](string/basic_string/pop_back.html "cpp/string/basic string/pop back") |  |  |  |  |   
`remove_prefix` |  |  |  |  |  |  |  |  |  | [`remove_prefix`](string/basic_string_view/remove_prefix.html "cpp/string/basic string view/remove prefix") |  |  |  |   
`remove_suffix` |  |  |  |  |  |  |  |  |  | [`remove_suffix`](string/basic_string_view/remove_suffix.html "cpp/string/basic string view/remove suffix") |  |  |  |   
  
(since C++26)  
  
### Notes

[libstdc++](https://www.gnu.org/software/gcc/gcc-15/changes.html#libstdcxx), [libc++](https://releases.llvm.org/19.1.0/projects/libcxx/docs/UsingLibcxx.html#extensions-to-the-c-23-modules-std-and-std-compat), and [STL](https://github.com/microsoft/STL/issues/3945) all support using standard library modules in C++20 mode. 

[Feature-test](utility/feature_test.html "cpp/utility/feature test") macro  | Value | Std | Feature   
---|---|---|---  
[`__cpp_lib_modules`](experimental/feature_test.html#cpp_lib_modules "cpp/feature test") | [`202207L`](compiler_support/23.html#cpp_lib_modules_202207L "cpp/compiler support/23") | (C++23) | Standard library modules std and std.compat  
Hardened implementation only   
[`__cpp_lib_hardened_array`](experimental/feature_test.html#cpp_lib_hardened_array "cpp/feature test") | [`202502L`](compiler_support/26.html#cpp_lib_hardened_array_202502L "cpp/compiler support/26") | (C++26) | Hardened [std::array](container/array.html "cpp/container/array")  
[`__cpp_lib_hardened_basic_string`](experimental/feature_test.html#cpp_lib_hardened_basic_string "cpp/feature test") | [`202502L`](compiler_support/26.html#cpp_lib_hardened_basic_string_202502L "cpp/compiler support/26") | (C++26) | Hardened [std::basic_string](string/basic_string.html "cpp/string/basic string")  
[`__cpp_lib_hardened_basic_string_view`](experimental/feature_test.html#cpp_lib_hardened_basic_string_view "cpp/feature test") | [`202502L`](compiler_support/26.html#cpp_lib_hardened_basic_string_view_202502L "cpp/compiler support/26") | (C++26) | Hardened [std::basic_string_view](string/basic_string_view.html "cpp/string/basic string view")  
[`__cpp_lib_hardened_bitset`](experimental/feature_test.html#cpp_lib_hardened_bitset "cpp/feature test") | [`202502L`](compiler_support/26.html#cpp_lib_hardened_bitset_202502L "cpp/compiler support/26") | (C++26) | Hardened [std::bitset](utility/bitset.html "cpp/utility/bitset")  
[`__cpp_lib_hardened_deque`](experimental/feature_test.html#cpp_lib_hardened_deque "cpp/feature test") | [`202502L`](compiler_support/26.html#cpp_lib_hardened_deque_202502L "cpp/compiler support/26") | (C++26) | Hardened [std::deque](container/deque.html "cpp/container/deque")  
[`__cpp_lib_hardened_expected`](experimental/feature_test.html#cpp_lib_hardened_expected "cpp/feature test") | [`202502L`](compiler_support/26.html#cpp_lib_hardened_expected_202502L "cpp/compiler support/26") | (C++26) | Hardened [`std::expected`](utility/expected.html "cpp/utility/expected")  
[`__cpp_lib_hardened_forward_list`](experimental/feature_test.html#cpp_lib_hardened_forward_list "cpp/feature test") | [`202502L`](compiler_support/26.html#cpp_lib_hardened_forward_list_202502L "cpp/compiler support/26") | (C++26) | Hardened [std::forward_list](container/forward_list.html "cpp/container/forward list")  
[`__cpp_lib_hardened_inplace_vector`](experimental/feature_test.html#cpp_lib_hardened_inplace_vector "cpp/feature test") | [`202502L`](compiler_support/26.html#cpp_lib_hardened_inplace_vector_202502L "cpp/compiler support/26") | (C++26) | Hardened [`std::inplace_vector`](container/inplace_vector.html "cpp/container/inplace vector")  
[`__cpp_lib_hardened_list`](experimental/feature_test.html#cpp_lib_hardened_list "cpp/feature test") | [`202502L`](compiler_support/26.html#cpp_lib_hardened_list_202502L "cpp/compiler support/26") | (C++26) | Hardened [std::list](container/list.html "cpp/container/list")  
[`__cpp_lib_hardened_mdspan`](experimental/feature_test.html#cpp_lib_hardened_mdspan "cpp/feature test") | [`202502L`](compiler_support/26.html#cpp_lib_hardened_mdspan_202502L "cpp/compiler support/26") | (C++26) | Hardened [`std::mdspan`](container/mdspan.html "cpp/container/mdspan")  
[`__cpp_lib_hardened_optional`](experimental/feature_test.html#cpp_lib_hardened_optional "cpp/feature test") | [`202502L`](compiler_support/26.html#cpp_lib_hardened_optional_202502L "cpp/compiler support/26") | (C++26) | Hardened [std::optional](utility/optional.html "cpp/utility/optional")  
[`__cpp_lib_hardened_span`](experimental/feature_test.html#cpp_lib_hardened_span "cpp/feature test") | [`202502L`](compiler_support/26.html#cpp_lib_hardened_span_202502L "cpp/compiler support/26") | (C++26) | Hardened [`std::span`](container/span.html "cpp/container/span")  
[`__cpp_lib_hardened_valarray`](experimental/feature_test.html#cpp_lib_hardened_valarray "cpp/feature test") | [`202502L`](compiler_support/26.html#cpp_lib_hardened_valarray_202502L "cpp/compiler support/26") | (C++26) | Hardened [std::valarray](numeric/valarray.html "cpp/numeric/valarray")  
[`__cpp_lib_hardened_vector`](experimental/feature_test.html#cpp_lib_hardened_vector "cpp/feature test") | [`202502L`](compiler_support/26.html#cpp_lib_hardened_vector_202502L "cpp/compiler support/26") | (C++26) | Hardened [std::vector](container/vector.html "cpp/container/vector")  
  
### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 1](https://cplusplus.github.io/LWG/issue1) | C++98  | the language linkages of the names from  
the C standard library were unspecified  | they are  
implementation-defined   
[LWG 119](https://cplusplus.github.io/LWG/issue119) | C++98  | the exception specifications of virtual  
functions could be strengthened  | only allowed for  
non-virtual functions   
[LWG 147](https://cplusplus.github.io/LWG/issue147) | C++98  | the specification on non-member  
functions only considered global functions  | also considers  
non-global functions   
[LWG 225](https://cplusplus.github.io/LWG/issue225) | C++98  | standard library functions might call non-member functions  
from other namespaces due to argument-dependent lookup  | prohibited unless  
otherwise specified   
[LWG 336](https://cplusplus.github.io/LWG/issue336) | C++98  | [`<strstream>`](header/strstream.html "cpp/header/strstream") was not a C++ library header  | it is a C++ library header   
[LWG 343](https://cplusplus.github.io/LWG/issue343) | C++98  | library header dependencies were not specified  | specified (listed in synopses)   
[LWG 456](https://cplusplus.github.io/LWG/issue456) | C++98  | C++ headers for C library facilities could  
only provide definitions in namespace std | allowed to define in global namespace  
and then inject into namespace std  
[LWG 465](https://cplusplus.github.io/LWG/issue465) | C++98  | identifiers that are keywords or operators in C++ could  
be defined as macros in C++ standard library headers  
(only [`<ciso646>`](header/ciso646.html "cpp/header/ciso646") is required not to define them as macros)  | all C++ standard  
library headers cannot  
define them as macros   
[LWG 1178](https://cplusplus.github.io/LWG/issue1178) | C++98  | C++ headers must include a C++ header  
that contains any needed definition  | C++ headers must provide declarations  
and definitions that are directly or  
indirectly included in its synopsis   
[LWG 2013](https://cplusplus.github.io/LWG/issue2013) | C++11  | it was unspecified whether the functions not  
required by the standard to be constexpr can  
be declared constexpr by the standard library  | prohibited   
[LWG 2225](https://cplusplus.github.io/LWG/issue2225) | C++98  | a diagnostic was required if a header  
is included at an incorrect position  | no diagnostic is  
required in this case 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
