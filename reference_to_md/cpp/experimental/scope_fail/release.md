[[edit template]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/scope_guard/release&action=edit)

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
  


[`std::experimental::scope_fail`](../scope_fail.html "cpp/experimental/scope fail")

Member functions  
---  
[scope_fail::scope_fail](scope_fail.html "cpp/experimental/scope fail/scope fail")  
[scope_fail::~scope_fail](~scope_fail.html "cpp/experimental/scope fail/~scope fail")  
Modifiers  
**scope_fail::release**  
[Deduction guides](deduction_guides.html "cpp/experimental/scope fail/deduction guides")  
  


void release() noexcept; |  |  (library fundamentals TS v3)  
---|---|---  
| |   
  
Makes the `scope_fail` inactive. 

Once a `scope_fail` is inactive, it cannot become active again, and will not call its exit function on destruction. 

## Contents

  * [1 Parameters](release.html#Parameters)
  * [2 Return value](release.html#Return_value)
  * [3 Notes](release.html#Notes)
  * [4 Example](release.html#Example)
  * [5 See also](release.html#See_also)

  
---  
  
### Parameters

(none) 

### Return value

(none) 

### Notes

`release` may be either manually called or automatically called by `scope_fail`'s move constructor. 

### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### See also

[ (constructor)](scope_fail.html "cpp/experimental/scope fail/scope fail") |  constructs a new `scope_fail`   
(public member function)   
---|---  
[ (destructor)](~scope_fail.html "cpp/experimental/scope fail/~scope fail") |  calls the exit function when the scope is exited via an exception if the `scope_fail` is active, then destroys the `scope_fail`   
(public member function) 
