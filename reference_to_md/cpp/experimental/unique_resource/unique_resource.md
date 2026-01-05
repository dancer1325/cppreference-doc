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
**unique_resource::unique_resource**  
[unique_resource::~unique_resource](~unique_resource.html "cpp/experimental/unique resource/~unique resource")  
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
  


unique_resource(); |  (1)  |  (library fundamentals TS v3)  
---|---|---  
template< class RR, class DD >  
unique_resource( RR&& r, DD&& d ) noexcept(/*see below*/) |  (2)  |  (library fundamentals TS v3)  
unique_resource( unique_resource&& other ); |  (3)  |  (library fundamentals TS v3)  
| |   
  
Follow items are used for explanatory purpose: 

  * `RS` is the type of stored resource handle. 
  * The expression res_ refers the underlying resource handle. 
  * `del_` refers the deleter object. 



1) Default constructor. Value-initializes the stored resource handle and the deleter. The constructed `unique_resource` does not own the resource.

This overload participates in overload resolution only if both [std::is_default_constructible_v](../../types/is_default_constructible.html)<R> and [std::is_default_constructible_v](../../types/is_default_constructible.html)<D> are true.

2) The stored resource handle is initialized with [std::forward](../../utility/forward.html)<RR>(r) if [std::is_nothrow_constructible_v](../../types/is_constructible.html)<RS, RR> is true, otherwise r. If initialization of the stored resource handle throws an exception, calls d(r).  
Then, the deleter is initialized with [std::forward](../../utility/forward.html)<DD>(d) if [std::is_nothrow_constructible_v](../../types/is_constructible.html)<D, DD> is true, otherwise d. If initialization of deleter throws an exception, calls d(res_).  
The constructed `unique_resource` owns the resource.

This overload participates in overload resolution only if all of [std::is_constructible_v](../../types/is_constructible.html)<RS, RR>, [std::is_constructible_v](../../types/is_constructible.html)<D, DD>, [std::is_nothrow_constructible_v](../../types/is_constructible.html)<RS, RR> || [std::is_constructible_v](../../types/is_constructible.html)<RS, RR&> and [std::is_nothrow_constructible_v](../../types/is_constructible.html)<D, DD> || [std::is_constructible_v](../../types/is_constructible.html)<D, DD&> are true.

The program is ill-formed if any of the expressions d(r), d(res_) and del_(res_) is ill-formed.

The behavior is undefined if any of the expressions d(r), d(res_) and del_(res_) results in undefined behavior or throws an exception.

3) Move constructor. The stored resource handle is initialized from the one of other, using `std::move` if [std::is_nothrow_move_constructible_v](../../types/is_move_constructible.html)<RS> is true. If initialization of the stored resource handle throws an exception, other is not modified.  
Then, the deleter is initialized with the one of other, using `std::move` if [std::is_nothrow_move_constructible_v](../../types/is_move_constructible.html)<D> is true. If initialization of the deleter throws an exception and [std::is_nothrow_move_constructible_v](../../types/is_move_constructible.html)<RS> is true and other owns the resource, calls the deleter of other with res_ to dispose the resource, then calls other.release().  
After construction, the constructed `unique_resource` owns its resource if and only if other owned the resource before the construction, and other is set to not own the resource.

## Contents

  * [1 Parameters](unique_resource.html#Parameters)
  * [2 Exceptions](unique_resource.html#Exceptions)
  * [3 Notes](unique_resource.html#Notes)
  * [4 Example](unique_resource.html#Example)
  * [5 See also](unique_resource.html#See_also)

  
---  
  
### Parameters

r  |  \-  |  a resource handle   
---|---|---  
d  |  \-  |  a deleter to use to dispose the resource   
other  |  \-  |  another `unique_resource` to acquire the ownership from   
  
### Exceptions

Any exception thrown during initialization of the stored resource handle or the deleter. 

2)

[`noexcept`](../../language/noexcept_spec.html "cpp/language/noexcept spec") specification: 

noexcept((  


[std::is_nothrow_constructible_v](../../types/is_constructible.html)<RS, RR> || [std::is_nothrow_constructible_v](../../types/is_constructible.html)<RS, RR&>  
) &&  
(  
[std::is_nothrow_constructible_v](../../types/is_constructible.html)<D, DD> || [std::is_nothrow_constructible_v](../../types/is_constructible.html)<D, DD&>  


))

3)

[`noexcept`](../../language/noexcept_spec.html "cpp/language/noexcept spec") specification: 

noexcept(  


[std::is_nothrow_move_constructible_v](../../types/is_move_constructible.html)<R1> && [std::is_nothrow_move_constructible_v](../../types/is_move_constructible.html)<D>  


)

### Notes

The mechanism of these constructors ensures no leaking of resources. 

### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### See also

[ (constructor)](../../memory/unique_ptr/unique_ptr.html "cpp/memory/unique ptr/unique ptr") |  constructs a new `unique_ptr`   
(public member function of `std::unique_ptr<T,Deleter>`)   
---|---
