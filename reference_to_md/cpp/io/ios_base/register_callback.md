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
**ios_base::register_callback**  
[ios_base::sync_with_stdio](sync_with_stdio.html "cpp/io/ios base/sync with stdio")  
Member classes  
[ios_base::failure](failure.html "cpp/io/ios base/failure")  
[ios_base::Init](Init.html "cpp/io/ios base/Init")  
Member types  
[ios_base::openmode](openmode.html "cpp/io/ios base/openmode")  
[ios_base::fmtflags](fmtflags.html "cpp/io/ios base/fmtflags")  
[ios_base::iostate](iostate.html "cpp/io/ios base/iostate")  
[ios_base::seekdir](seekdir.html "cpp/io/ios base/seekdir")  
[ios_base::event](event.html "cpp/io/ios base/event")  
[ios_base::event_callback](event_callback.html "cpp/io/ios base/event callback")  
  


void register_callback( event_callback function, int index ); |  |   
---|---|---  
| |   
  
Registers a user-defined function which will be called by [imbue()](imbue.html "cpp/io/ios base/imbue"), [std::basic_ios::copyfmt()](../basic_ios/copyfmt.html "cpp/io/basic ios/copyfmt") and ~ios_base(). Every registered callback is called every time: the event type (a value of type [event](event.html "cpp/io/ios base/event")) is passed as its first argument, and may be used to distinguish between the callers. 

The callbacks are called in the reverse order of registration (in other words, `register_callback()` pushes a callback pair on the callback stack). If `register_callback()` is called from within a callback function to add a new callback, the new callback is only called on the next event. 

The user-defined callback function is not allowed to throw exceptions. 

## Contents

  * [1 Parameters](register_callback.html#Parameters)
  * [2 Return value](register_callback.html#Return_value)
  * [3 Notes](register_callback.html#Notes)
  * [4 Example](register_callback.html#Example)

  
---  
  
### Parameters

function  |  \-  |  the function which will be called on event, supplied as a function pointer of type [event_callback](event_callback.html "cpp/io/ios base/event callback")  
---|---|---  
index  |  \-  |  custom parameter which will be passed to the function   
  
### Return value

(none) 

### Notes

Once registered, a callback cannot be deregistered: it remains a part of the stream object for the rest of its lifetime. If the behavior of a callback needs to change, it may be controlled through [iword()](iword.html "cpp/io/ios base/iword") or [pword()](pword.html "cpp/io/ios base/pword"). 

If the same function is registered multiple times, it is called multiple times. 

The integer value that is stored together with the callback is typically an index obtained from [xalloc()](xalloc.html "cpp/io/ios base/xalloc"). 

### Example

Demonstrates the use of `register_callback` to update locale-dependent cached values that are used by a custom output operator.

Run this code
    
    
    #include <functional>
    #include <iostream>
    #include <locale>
     
    // Cached locale-specific message and its hash
    typedef [std::pair](../../utility/pair.html)<[std::string](../../string/basic_string.html), [std::size_t](../../types/size_t.html)> cache_t;
     
    // Populate the cached message and its hash from the locale
    void update_cache(cache_t& cache, [std::locale](../../locale/locale.html) loc)
    {
        auto& fct = [std::use_facet](../../locale/use_facet.html)< [std::messages](../../locale/messages.html)<char> >(loc);
        [std::messages_base::catalog](../../locale/messages_base.html) cat = fct.open("sed", loc);
        cache.first = cat < 0 ? "" : fct.get(cat, 0, 0, "Memory exhausted");
        cache.second = [std::hash](../../utility/hash.html)<[std::string](../../string/basic_string.html)>()(cache.first);
    }
     
    // Update the cache if the locale changed
    void true_callback([std::ios_base::event](event.html) evt, [std::ios_base](../ios_base.html)& str, int idx)
    {
        if (evt == [std::ios_base::imbue_event](event.html)) 
        {
            cache_t* ptr = static_cast<cache_t*>(str.pword(idx));
            update_cache(*ptr, str.getloc());
        }
    }
     
    // Registers the cache in pword() and sets up the callback
    struct CacheSetup
    {
        CacheSetup([std::ostream](../basic_ostream.html)& os, [std::ios_base::event_callback](event_callback.html) f, cache_t* cache)
        {
            int index = std::ostream::xalloc();
            os.pword(index) = cache; // Store pointer to cache in the stream
            os.register_callback(f, index); // Store callback and the index to the pointer
            update_cache(*cache, os.getloc()); // Initialize cache
        };
    };
     
    // Some custom class 
    struct S {};
    // Some custom class's operator<< that needs fast access to hashed message
    [std::ostream](../basic_ostream.html)& operator<<([std::ostream](../basic_ostream.html)& os, const S&)
    {
        static cache_t cache;
        static CacheSetup setup(os, true_callback, &cache);
        return os << cache.first << " : " << cache.second;
    }
     
    int main()
    {
        [std::locale](../../locale/locale.html) loc("en_US.utf8");
     
        S s;
        [std::cout](../cout.html).imbue(loc);
        [std::cout](../cout.html) << s << '\n';
     
        [std::cout](../cout.html).imbue([std::locale](../../locale/locale.html)(loc, new [std::messages_byname](../../locale/messages_byname.html)<char>("de_DE.utf8")));
        [std::cout](../cout.html) << s << '\n';
     
        [std::cout](../cout.html).imbue([std::locale](../../locale/locale.html)(loc, new [std::messages_byname](../../locale/messages_byname.html)<char>("ja_JP.utf8")));
        [std::cout](../cout.html) << s << '\n';
     
        [std::cout](../cout.html).imbue([std::locale](../../locale/locale.html)(loc, new [std::messages_byname](../../locale/messages_byname.html)<char>("ru_RU.utf8")));
        [std::cout](../cout.html) << s << '\n';
    }

Output: 
    
    
    Memory exhausted : 2,295,079,096
    Speicher erschöpft : 3,139,423,551
    メモリーが足りません : 3,837,351,114
    Память исчерпана : 3,742,732,851
