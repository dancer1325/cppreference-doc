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
  


[`std::experimental::atomic_shared_ptr`](../atomic_shared_ptr.html "cpp/experimental/atomic shared ptr")

**atomic_shared_ptr::atomic_shared_ptr**  
---  
[atomic_shared_ptr::operator=](operator=.html "cpp/experimental/atomic shared ptr/operator=")  
[atomic_shared_ptr::is_lock_free](is_lock_free.html "cpp/experimental/atomic shared ptr/is lock free")  
[atomic_shared_ptr::store](store.html "cpp/experimental/atomic shared ptr/store")  
[atomic_shared_ptr::load](load.html "cpp/experimental/atomic shared ptr/load")  
[atomic_shared_ptr::operator shared_ptr<T>](operator_shared_ptr.html "cpp/experimental/atomic shared ptr/operator shared ptr")  
[atomic_shared_ptr::exchange](exchange.html "cpp/experimental/atomic shared ptr/exchange")  
[atomic_shared_ptr::compare_exchange_weakatomic_shared_ptr::compare_exchange_strong](compare_exchange.html "cpp/experimental/atomic shared ptr/compare exchange")  
  


constexpr atomic_shared_ptr() noexcept; |  (1)  |   
---|---|---  
constexpr atomic_shared_ptr( shared_ptr<T> desired ) noexcept; |  (2)  |   
atomic_shared_ptr( const atomic_shared_ptr& ) = delete; |  (3)  |   
| |   
  
Constructs a new `atomic_shared_ptr` object. 

1) The default constructor initializes the object to an empty state.

2) Initializes the underlying `shared_ptr<T>` with `desired`. The initialization is not atomic.

3) Atomic variables are not [CopyConstructible](../../named_req/CopyConstructible.html "cpp/named req/CopyConstructible").

### Parameters

desired  |  \-  |  value to initialize with   
---|---|---  
  
### Exceptions
