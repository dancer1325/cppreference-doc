  
  


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
[experimental::make_exceptional_future](make_exceptional_future.html "cpp/experimental/make exceptional future")  
Latches and barriers  
[experimental::latch](latch.html "cpp/experimental/latch")  
[experimental::barrier](barrier.html "cpp/experimental/barrier")  
[experimental::flex_barrier](flex_barrier.html "cpp/experimental/flex barrier")  
Atomic smart pointers  
**experimental::atomic_shared_ptr**  
[experimental::atomic_weak_ptr](atomic_weak_ptr.html "cpp/experimental/atomic weak ptr")  
  


**`std::experimental::atomic_shared_ptr`**

[atomic_shared_ptr::atomic_shared_ptr](atomic_shared_ptr/atomic_shared_ptr.html "cpp/experimental/atomic shared ptr/atomic shared ptr")  
---  
[atomic_shared_ptr::operator=](atomic_shared_ptr/operator=.html "cpp/experimental/atomic shared ptr/operator=")  
[atomic_shared_ptr::is_lock_free](atomic_shared_ptr/is_lock_free.html "cpp/experimental/atomic shared ptr/is lock free")  
[atomic_shared_ptr::store](atomic_shared_ptr/store.html "cpp/experimental/atomic shared ptr/store")  
[atomic_shared_ptr::load](atomic_shared_ptr/load.html "cpp/experimental/atomic shared ptr/load")  
[atomic_shared_ptr::operator shared_ptr<T>](atomic_shared_ptr/operator_shared_ptr.html "cpp/experimental/atomic shared ptr/operator shared ptr")  
[atomic_shared_ptr::exchange](atomic_shared_ptr/exchange.html "cpp/experimental/atomic shared ptr/exchange")  
[atomic_shared_ptr::compare_exchange_weakatomic_shared_ptr::compare_exchange_strong](atomic_shared_ptr/compare_exchange.html "cpp/experimental/atomic shared ptr/compare exchange")  
  


![](https://upload.cppreference.com/mwiki/images/3/31/Imbox_notice.png) |  **Merged into ISO C++** The functionality described on this page was merged into the mainline ISO C++ standard as of 11/2017; see [`std::atomic<shared_ptr<T>>`](../memory/shared_ptr/atomic2.html "cpp/memory/shared ptr/atomic2") (since C++20)  
---|---  
Defined in header `[<experimental/atomic>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/atomic&action=edit&redlink=1 "cpp/header/experimental/atomic \(page does not exist\)")` |  |   
---|---|---  
template< class T >  
class atomic_shared_ptr; |  |  (concurrency TS)  
| |   
  
The class template `atomic_shared_ptr` provides thread-safe atomic pointer operations over a [std::shared_ptr](../memory/shared_ptr.html "cpp/memory/shared ptr"). It provides a better alternative to [the non-member `shared_ptr` atomic access functions](../memory/shared_ptr/atomic.html "cpp/memory/shared ptr/atomic"). 

### Member functions

[ (constructor)](atomic_shared_ptr/atomic_shared_ptr.html "cpp/experimental/atomic shared ptr/atomic shared ptr") |  constructs an `atomic_shared_ptr` object   
(public member function)   
---|---  
[ operator=](atomic_shared_ptr/operator=.html "cpp/experimental/atomic shared ptr/operator=") |  stores a value into an `atomic_shared_ptr` object   
(public member function)   
[ is_lock_free](atomic_shared_ptr/is_lock_free.html "cpp/experimental/atomic shared ptr/is lock free") |  checks if the `atomic_shared_ptr` object is lock-free   
(public member function)   
[ store](atomic_shared_ptr/store.html "cpp/experimental/atomic shared ptr/store") |  atomically replaces the value of the atomic object with a non-atomic argument   
(public member function)   
[ load](atomic_shared_ptr/load.html "cpp/experimental/atomic shared ptr/load") |  atomically obtains the value of the atomic object   
(public member function)   
[ operator shared_ptr<T>](atomic_shared_ptr/operator_shared_ptr.html "cpp/experimental/atomic shared ptr/operator shared ptr") |  loads a value from an atomic object   
(public member function)   
[ exchange](atomic_shared_ptr/exchange.html "cpp/experimental/atomic shared ptr/exchange") |  atomically replaces the value of the atomic object and obtains the value held previously   
(public member function)   
[ compare_exchange_weakcompare_exchange_strong](atomic_shared_ptr/compare_exchange.html "cpp/experimental/atomic shared ptr/compare exchange") |  atomically compares the value of the atomic object with non-atomic argument and performs atomic exchange if equal or atomic load if not   
(public member function) 
