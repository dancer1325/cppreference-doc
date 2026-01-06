  
  


[Experimental](../experimental.html "cpp/experimental")

[Technical Specification](../experimental.html#Technical_Specification "cpp/experimental")  
---  
[Filesystem library](fs.html "cpp/experimental/fs") (filesystem TS)  
[Library fundamentals](memory.html "cpp/experimental/lib extensions") (library fundamentals TS)  
[Library fundamentals 2](lib_extensions_2.html "cpp/experimental/lib extensions 2") (library fundamentals TS v2)  
[Library fundamentals 3](lib_extensions_3.html "cpp/experimental/lib extensions 3") (library fundamentals TS v3)  
[Extensions for parallelism](parallelism.html "cpp/experimental/parallelism") (parallelism TS)  
[Extensions for parallelism 2](parallelism_2.html "cpp/experimental/parallelism 2") (parallelism TS v2)  
[Extensions for concurrency](concurrency.html "cpp/experimental/concurrency") (concurrency TS)  
[Extensions for concurrency 2](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/concurrency_2&action=edit&redlink=1 "cpp/experimental/concurrency 2 \(page does not exist\)") (concurrency TS v2)  
[Concepts](constraints.html "cpp/experimental/constraints") (concepts TS)  
[Ranges](ranges.html "cpp/experimental/ranges") (ranges TS)  
[Reflection](reflect.html "cpp/experimental/reflect") (reflection TS)  
[Mathematical special functions](special_math.html "cpp/experimental/special functions") (special functions TR)  
[Experimental Non-TS](../experimental.html#Experimental_Non-TS "cpp/experimental")  
[Pattern Matching](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/pm&action=edit&redlink=1 "cpp/experimental/pm \(page does not exist\)")  
[Linear Algebra](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/la&action=edit&redlink=1 "cpp/experimental/la \(page does not exist\)")  
[std::execution](execution.html "cpp/experimental/execution")  
[Contracts](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/contracts&action=edit&redlink=1 "cpp/experimental/contracts \(page does not exist\)")  
[2D Graphics](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/2dgraphics&action=edit&redlink=1 "cpp/experimental/2dgraphics \(page does not exist\)")  
  


[Extensions for concurrency](concurrency.html "cpp/experimental/concurrency")

std::future extensions  
---  
[experimental::future](future.html "cpp/experimental/future")  
[experimental::shared_future](shared_future.html "cpp/experimental/shared future")  
[experimental::when_all](when_all.html "cpp/experimental/when all")  
[experimental::when_any](when_any.html "cpp/experimental/when any")  
[experimental::make_ready_future](make_ready_future.html "cpp/experimental/make ready future")  
**experimental::make_exceptional_future**  
Latches and barriers  
[experimental::latch](latch.html "cpp/experimental/latch")  
[experimental::barrier](barrier.html "cpp/experimental/barrier")  
[experimental::flex_barrier](flex_barrier.html "cpp/experimental/flex barrier")  
Atomic smart pointers  
[experimental::atomic_shared_ptr](atomic_shared_ptr.html "cpp/experimental/atomic shared ptr")  
[experimental::atomic_weak_ptr](atomic_weak_ptr.html "cpp/experimental/atomic weak ptr")  
  


Defined in header `[<experimental/future>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/future&action=edit&redlink=1 "cpp/header/experimental/future \(page does not exist\)")` |  |   
---|---|---  
template< class T >  
future<T> make_exceptional_future( [std::exception_ptr](../error/exception_ptr.html) ex ); |  (1)  |  (concurrency TS)  
template< class T, class E >  
future<T> make_exceptional_future( E ex ); |  (2)  |  (concurrency TS)  
| |   
  
1) Creates a shared state of type `T` that is immediately ready and stores the exception pointer ex, then return a future associated with that shared state, as if by promise<T> p; p.set_exception(ex); return p.get_future();. The behavior is undefined if ex is null.

2) Creates a shared state of type `T` that is immediately ready and stores an exception pointer created from ex, then return a future associated with that shared state, as if by promise<T> p; p.set_exception([std::make_exception_ptr](../error/make_exception_ptr.html)(ex)); return p.get_future();.

### Return value

A `future` object associated with the shared state that was created. 

### See also

[ make_ready_future](make_ready_future.html "cpp/experimental/make ready future")(concurrency TS) |  produces a future that is ready immediately and holds the given value   
(function template)   
---|---
