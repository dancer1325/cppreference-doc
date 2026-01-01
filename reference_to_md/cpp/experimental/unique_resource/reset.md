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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/navbar_content&action=edit)

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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/navbar_content&action=edit)

[Library fundamentals v3](../lib_extensions_3.html "cpp/experimental/lib extensions 3")

[experimental::scope_exit](../scope_exit.html "cpp/experimental/scope exit")  
---  
[experimental::scope_fail](../scope_fail.html "cpp/experimental/scope fail")  
[experimental::scope_success](../scope_success.html "cpp/experimental/scope success")  
[experimental::unique_resource](../unique_resource.html "cpp/experimental/unique resource")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/lib_extensions_3/navbar_content&action=edit)

[`std::experimental::unique_resource`](../unique_resource.html "cpp/experimental/unique resource")

Member functions  
---  
[unique_resource::unique_resource](unique_resource.html "cpp/experimental/unique resource/unique resource")  
[unique_resource::~unique_resource](~unique_resource.html "cpp/experimental/unique resource/~unique resource")  
[unique_resource::operator=](operator=.html "cpp/experimental/unique resource/operator=")  
Modifiers  
[unique_resource::release](release.html "cpp/experimental/unique resource/release")  
**unique_resource::reset**  
Observers  
[unique_resource::get](get.html "cpp/experimental/unique resource/get")  
[unique_resource::get_deleter](get_deleter.html "cpp/experimental/unique resource/get deleter")  
[unique_resource::operator*unique_resource::operator->](operator*.html "cpp/experimental/unique resource/operator*")  
Non-member functions  
[make_unique_resource_checked](make_unique_resource_checked.html "cpp/experimental/unique resource/make unique resource checked")  
[Deduction guides](deduction_guides.html "cpp/experimental/unique resource/deduction guides")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/unique_resource/navbar_content&action=edit)

void reset() noexcept; |  (1)  |  (library fundamentals TS v3)  
---|---|---  
template< class RR >  
void reset( RR&& r ); |  (2)  |  (library fundamentals TS v3)  
| |   
  
1) Disposes the resource by calling the deleter with the underlying resource handle if the `unique_resource` owns it. The `unique_resource` does not own the resource after the call.

2) Replaces the resource by calling (1) and then assigns the stored resource handle with [std::forward](../../utility/forward.html)<RR>(r) if [std::is_nothrow_assignable_v](../../types/is_assignable.html)<RS, RR> is true, otherwise [std::as_const](../../utility/as_const.html)(r), where `RS` is the type of stored resource handle. The `unique_resource` owns the resource after the call.

If copy-assignment of the store resource handle throws an exception, calls del_(r), where `del` is the deleter object.

This overload participates in overload resolution only if the selected assignment expression assigning the stored resource handle is well-formed.

The program is ill-formed if del_(r) is ill-formed.

The behavior is undefined if del_(r) results in undefined behavior or throws an exception.

## Contents

  * [1 Parameters](reset.html#Parameters)
  * [2 Return value](reset.html#Return_value)
  * [3 Exceptions](reset.html#Exceptions)
  * [4 Notes](reset.html#Notes)
  * [5 Example](reset.html#Example)
  * [6 See also](reset.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/unique_resource/reset&action=edit&section=1 "Edit section: Parameters")] Parameters

r  |  \-  |  resource handle for a new resource to manage   
---|---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/unique_resource/reset&action=edit&section=2 "Edit section: Return value")] Return value

(none) 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/unique_resource/reset&action=edit&section=3 "Edit section: Exceptions")] Exceptions

2) Any exception thrown in assigning the stored resource handle.

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/unique_resource/reset&action=edit&section=4 "Edit section: Notes")] Notes

The mechanism ensures no leaking of resources. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/unique_resource/reset&action=edit&section=5 "Edit section: Example")] Example

| This section is incomplete  
Reason: no example   
---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/unique_resource/reset&action=edit&section=6 "Edit section: See also")] See also

[ reset](../../memory/unique_ptr/reset.html "cpp/memory/unique ptr/reset") |  replaces the managed object   
(public member function of `std::unique_ptr<T,Deleter>`) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/unique_ptr/dsc_reset&action=edit)  
---|---
