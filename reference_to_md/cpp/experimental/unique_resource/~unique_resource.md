[C++](../../../cpp.html "cpp")

[Compiler support](../../compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](../../freestanding.html "cpp/freestanding")  
[Language](../../language.html "cpp/language")  
[Standard library](../../standard_library.html "cpp/standard library")  
[Standard library headers](../../headers.html "cpp/header")  
[Named requirements](../../iterator/concepts.html "cpp/named req")  
[Feature test macros](../feature_test.html "cpp/feature test") (C++20)  
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
[Execution control library](../execution.html "cpp/execution") (C++26)  
[Technical specifications](../../experimental.html "cpp/experimental")  
[Symbols index](../../symbol_index.html "cpp/symbol index")  
[External libraries](../../links/libs.html "cpp/links/libs")  
  


[Experimental](../../experimental.html "cpp/experimental")

[Technical Specification](../../experimental.html#Technical_Specification "cpp/experimental")  
---  
[Filesystem library](../fs.html "cpp/experimental/fs") (filesystem TS)  
[Library fundamentals](../memory.html "cpp/experimental/lib extensions") (library fundamentals TS)  
[Library fundamentals 2](../lib_extensions_2.html "cpp/experimental/lib extensions 2") (library fundamentals TS v2)  
[Library fundamentals 3](../lib_extensions_3.html "cpp/experimental/lib extensions 3") (library fundamentals TS v3)  
[Extensions for parallelism](../parallelism.html "cpp/experimental/parallelism") (parallelism TS)  
[Extensions for parallelism 2](../parallelism_2.html "cpp/experimental/parallelism 2") (parallelism TS v2)  
[Extensions for concurrency](../concurrency.html "cpp/experimental/concurrency") (concurrency TS)  
[Extensions for concurrency 2](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/concurrency_2&action=edit&redlink=1 "cpp/experimental/concurrency 2 \(page does not exist\)") (concurrency TS v2)  
[Concepts](../constraints.html "cpp/experimental/constraints") (concepts TS)  
[Ranges](../ranges.html "cpp/experimental/ranges") (ranges TS)  
[Reflection](../reflect.html "cpp/experimental/reflect") (reflection TS)  
[Mathematical special functions](../special_math.html "cpp/experimental/special functions") (special functions TR)  
[Experimental Non-TS](../../experimental.html#Experimental_Non-TS "cpp/experimental")  
[Pattern Matching](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/pm&action=edit&redlink=1 "cpp/experimental/pm \(page does not exist\)")  
[Linear Algebra](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/la&action=edit&redlink=1 "cpp/experimental/la \(page does not exist\)")  
[std::execution](../execution.html "cpp/experimental/execution")  
[Contracts](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/contracts&action=edit&redlink=1 "cpp/experimental/contracts \(page does not exist\)")  
[2D Graphics](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/2dgraphics&action=edit&redlink=1 "cpp/experimental/2dgraphics \(page does not exist\)")  
  


[Library fundamentals v3](../lib_extensions_3.html "cpp/experimental/lib extensions 3")

[experimental::scope_exit](../scope_exit.html "cpp/experimental/scope exit")  
---  
[experimental::scope_fail](../scope_fail.html "cpp/experimental/scope fail")  
[experimental::scope_success](../scope_success.html "cpp/experimental/scope success")  
[experimental::unique_resource](../unique_resource.html "cpp/experimental/unique resource")  
  


[`std::experimental::unique_resource`](../unique_resource.html "cpp/experimental/unique resource")

Member functions  
---  
[unique_resource::unique_resource](unique_resource.html "cpp/experimental/unique resource/unique resource")  
**unique_resource::~unique_resource**  
[unique_resource::operator=](operator=.html "cpp/experimental/unique resource/operator=")  
Modifiers  
[unique_resource::release](release.html "cpp/experimental/unique resource/release")  
[unique_resource::reset](reset.html "cpp/experimental/unique resource/reset")  
Observers  
[unique_resource::get](get.html "cpp/experimental/unique resource/get")  
[unique_resource::get_deleter](get_deleter.html "cpp/experimental/unique resource/get deleter")  
[unique_resource::operator*unique_resource::operator->](operator*.html "cpp/experimental/unique resource/operator*")  
Non-member functions  
[make_unique_resource_checked](make_unique_resource_checked.html "cpp/experimental/unique resource/make unique resource checked")  
[Deduction guides](deduction_guides.html "cpp/experimental/unique resource/deduction guides")  
  


~unique_resource(); |  |  (library fundamentals TS v3)  
---|---|---  
| |   
  
Disposes the resource by calling the deleter with the underlying resource handle if the `unique_resource` owns it, equivalent to calling reset(). Then destroys the stored resource handle and the deleter. 

### See also

[ reset](reset.html "cpp/experimental/unique resource/reset") |  disposes or replaces the managed resource   
(public member function)   
---|---  
[ (destructor)](../../memory/unique_ptr/~unique_ptr.html "cpp/memory/unique ptr/~unique ptr") |  destructs the managed object if such is present   
(public member function of `std::unique_ptr<T,Deleter>`) 
