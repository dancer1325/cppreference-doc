![](https://upload.cppreference.com/mwiki/images/3/31/Imbox_notice.png) |  **Merged into ISO C++** The functionality described on this page was merged into the mainline ISO C++ standard as of 7/2019; see [`std::latch`](../thread/latch.html "cpp/thread/latch") (since C++20)  
---|---  
  
  
  


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
**experimental::latch**  
[experimental::barrier](barrier.html "cpp/experimental/barrier")  
[experimental::flex_barrier](flex_barrier.html "cpp/experimental/flex barrier")  
Atomic smart pointers  
[experimental::atomic_shared_ptr](atomic_shared_ptr.html "cpp/experimental/atomic shared ptr")  
[experimental::atomic_weak_ptr](atomic_weak_ptr.html "cpp/experimental/atomic weak ptr")  
  


**`std::experimental::latch`**

[latch::latch](latch/latch.html "cpp/experimental/latch/latch")  
---  
[latch::~latch](latch/~latch.html "cpp/experimental/latch/~latch")  
[latch::count_down_and_wait](latch/count_down_and_wait.html "cpp/experimental/latch/count down and wait")  
[latch::count_down](latch/count_down.html "cpp/experimental/latch/count down")  
[latch::is_ready](latch/is_ready.html "cpp/experimental/latch/is ready")  
[latch::wait](latch/wait.html "cpp/experimental/latch/wait")  
  


Defined in header `[<experimental/latch>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/latch&action=edit&redlink=1 "cpp/header/experimental/latch \(page does not exist\)")` |  |   
---|---|---  
class latch; |  |  (concurrency TS)  
| |   
  
The `latch` class is a downward counter of type `ptrdiff_t` which can be used to synchronize threads. The value of the counter is initialized on creation. Threads may block on the latch until the counter is decremented to zero. There is no possibility to increase or reset the counter, which makes the latch a single-use barrier. 

Unlike [`std::experimental::barrier`](barrier.html "cpp/experimental/barrier"), `std::experimental::latch` can be decremented by a participating thread more than once. 

### Member functions

[ (constructor)](latch/latch.html "cpp/experimental/latch/latch") |  constructs a `latch`   
(public member function)   
---|---  
[ (destructor)](latch/~latch.html "cpp/experimental/latch/~latch") |  destroys the latch   
(public member function)   
operator=[deleted] |  not copy-assignable   
(public member function)   
[ count_down_and_wait](latch/count_down_and_wait.html "cpp/experimental/latch/count down and wait") |  decrements the counter by `1` and blocks until it reaches zero   
(public member function)   
[ count_down](latch/count_down.html "cpp/experimental/latch/count down") |  decrements the counter in a non-blocking manner   
(public member function)   
[ is_ready](latch/is_ready.html "cpp/experimental/latch/is ready") |  tests if the internal counter equals zero   
(public member function)   
[ wait](latch/wait.html "cpp/experimental/latch/wait") |  blocks until the counter reaches zero   
(public member function) 
