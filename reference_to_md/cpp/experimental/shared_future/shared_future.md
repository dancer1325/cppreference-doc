[[edit template]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/future/future&action=edit)

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
  


[`std::experimental::shared_future`](../shared_future.html "cpp/experimental/shared future")

**shared_future::shared_future**  
---  
[shared_future::operator=](operator=.html "cpp/experimental/shared future/operator=")  
[shared_future::is_ready](is_ready.html "cpp/experimental/shared future/is ready")  
[shared_future::then](then.html "cpp/experimental/shared future/then")  
  


shared_future() noexcept; |  (1)  |   
---|---|---  
shared_future( [std::experimental::shared_future](../shared_future.html)<T>&& f ) noexcept; |  (2)  |   
shared_future( const [std::experimental::shared_future](../shared_future.html)<T>& f ); |  (3)  |   
shared_future( [std::experimental::future](../future.html)<[std::experimental::shared_future](../shared_future.html)<T>> && other ) noexcept; |  (4)  |   
shared_future( [std::experimental::future](../future.html)<T>&& f ) noexcept; |  (5)  |   
| |   
  
1) Default constructor. Constructs an empty `shared_future` object that does not refer to a shared state.

2) Constructs a `shared_future` object, transferring the shared state held by f, if any. After construction, f.valid() is false.

3) Constructs a shared future that refers to the same shared state as f, if any.

4) Unwrapping constructor. Constructs a `shared_future` object from the shared state referred to by other, if any. If other.valid() == false prior to this call, the constructed `shared_future` object is empty. Otherwise, the resulting `shared_future` object becomes ready when one of the following happens: 

  * other and other.get() are both ready. The value or exception from other.get() is stored in the shared state associated with the resulting `shared_future` object. 
  * other is ready, but other.get() is invalid. An exception of type [std::future_error](../../thread/future_error.html "cpp/thread/future error") with an error condition of [std::future_errc::broken_promise](../../thread/future_errc.html "cpp/thread/future errc") is stored in the shared state associated with the resulting `shared_future` object.



After this constructor returns, valid() is equal to the value of other.valid() prior to this call, and other.valid() == false.

5) Constructs a `shared_future` object, transferring the shared state held by f, if any. After construction, f.valid() is false.

## Contents

  * [1 Parameters](shared_future.html#Parameters)
  * [2 Example](shared_future.html#Example)
  * [3 Defect reports](shared_future.html#Defect_reports)
  * [4 See also](shared_future.html#See_also)

  
---  
  
### Parameters

f  |  \-  |  another future object to initialize with   
---|---|---  
other  |  \-  |  a `std::experimental::future` object to unwrap   
  
### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 2697](https://cplusplus.github.io/LWG/issue2697) | Concurrency TS  | behavior of unwrapping constructor is unclear with an invalid `future` | constructs an empty `future`  
  
### See also

[ (constructor)](../../thread/shared_future/shared_future.html "cpp/thread/shared future/shared future") |  constructs the future object   
(public member function of `std::shared_future<T>`)   
---|---
