[[edit template]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/future/then&action=edit)

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

[Extensions for concurrency](../concurrency.html "cpp/experimental/concurrency")

std::future extensions  
---  
[experimental::future](../future.html "cpp/experimental/future")  
[experimental::shared_future](../shared_future.html "cpp/experimental/shared future")  
[experimental::when_all](../when_all.html "cpp/experimental/when all")  
[experimental::when_any](../when_any.html "cpp/experimental/when any")  
[experimental::make_ready_future](../make_ready_future.html "cpp/experimental/make ready future")  
[experimental::make_exceptional_future](../make_exceptional_future.html "cpp/experimental/make exceptional future")  
Latches and barriers  
[experimental::latch](../latch.html "cpp/experimental/latch")  
[experimental::barrier](../barrier.html "cpp/experimental/barrier")  
[experimental::flex_barrier](../flex_barrier.html "cpp/experimental/flex barrier")  
Atomic smart pointers  
[experimental::atomic_shared_ptr](../atomic_shared_ptr.html "cpp/experimental/atomic shared ptr")  
[experimental::atomic_weak_ptr](../atomic_weak_ptr.html "cpp/experimental/atomic weak ptr")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/concurrency/navbar_content&action=edit)

[`std::experimental::shared_future`](../shared_future.html "cpp/experimental/shared future")

[shared_future::shared_future](shared_future.html "cpp/experimental/shared future/shared future")  
---  
[shared_future::operator=](operator=.html "cpp/experimental/shared future/operator=")  
[shared_future::is_ready](is_ready.html "cpp/experimental/shared future/is ready")  
**shared_future::then**  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/concurrency/shared_future/navbar_content&action=edit)

template< class F >  
future</* see below */> then( F&& func ) const; |  |   
---|---|---  
| |   
  
Attach the continuation func to *this. The behavior is undefined if *this has no associated shared state (i.e., valid() == false). 

Creates a shared state associated with the `future` object to be returned, and a copy fd of func constructed as if by DECAY_COPY([std::forward](../../utility/forward.html)<F>(func)) evaluated in the thread calling `then`, where DECAY_COPY is defined as 
    
    
    template<class T>
    [std::decay_t](../../types/decay.html)<T> DECAY_COPY(T&& v)
    {
        return [std::forward](../../utility/forward.html)<T>(v);
    }  
  
---  
  
When the shared state currently associated with *this is ready, the _continuation_ INVOKE(std::move(fd), *this) is called on an unspecified thread of execution, where INVOKE is the operation defined in [Callable](../../named_req/Callable.html "cpp/named req/Callable"). If that expression is invalid, the behavior is undefined. 

Any value returned from the continuation is stored as the result in the shared state of the returned `future` object. Any exception propagated from the execution of the continuation is stored as the exceptional result in the shared state of the returned `future` object. 

Let `U` be the return type of the continuation (i.e. [std::result_of_t](../../types/result_of.html)<[std::decay_t](../../types/decay.html)<F>(const [std::experimental::shared_future](../shared_future.html)<T> &)>). If `U` is [std::experimental::future](../future.html)<T2> for some type `T2`, then the return type of `then` is [std::experimental::future](../future.html)<T2>, otherwise it is [std::experimental::future](../future.html)<U>. This is known as _implicit unwrapping_. 

If implicit unwrapping takes place and the continuation returns an invalid `future`, then the shared state is made ready with an exception of type [std::future_error](../../thread/future_error.html "cpp/thread/future error") with an error condition of [std::future_errc::broken_promise](../../thread/future_errc.html "cpp/thread/future errc"). 

After this function returns, valid() is true. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/future/then&action=edit&section=T-1 "Template:cpp/experimental/future/then")] Parameters

func  |  \-  |  a continuation to be attached   
---|---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/future/then&action=edit&section=T-2 "Template:cpp/experimental/future/then")] Return value

A std::experimental::future object associated with the shared state created by this object. valid() == true for the returned object. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/future/then&action=edit&section=T-3 "Template:cpp/experimental/future/then")] Example

| This section is incomplete  
Reason: no example   
---|---
