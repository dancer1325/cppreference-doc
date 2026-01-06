  
  


[Experimental](../experimental.html "cpp/experimental")

[Technical Specification](../experimental.html#Technical_Specification "cpp/experimental")  
---  
[Filesystem library](fs.html "cpp/experimental/fs") (filesystem TS)  
[Library fundamentals](memory.html "cpp/experimental/lib extensions") (library fundamentals TS)  
[Library fundamentals 2](lib_extensions_2.html "cpp/experimental/lib extensions 2") (library fundamentals TS v2)  
[Library fundamentals 3](lib_extensions_3.html "cpp/experimental/lib extensions 3") (library fundamentals TS v3)  
[Extensions for parallelism](parallelism.html "cpp/experimental/parallelism") (parallelism TS)  
[Extensions for parallelism 2](parallelism_2.html "cpp/experimental/parallelism 2") (parallelism TS v2)  
**Extensions for concurrency** (concurrency TS)  
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
  


**Extensions for concurrency**

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
[experimental::atomic_shared_ptr](atomic_shared_ptr.html "cpp/experimental/atomic shared ptr")  
[experimental::atomic_weak_ptr](atomic_weak_ptr.html "cpp/experimental/atomic weak ptr")  
  


The C++ Extensions for Concurrency, ISO/IEC TS 19571:2016, defines the following new components for the C++ standard library: 

## Contents

  * [1 Continuations and other extensions for std::future](concurrency.html#Continuations_and_other_extensions_for_std::future)
  * [2 Feature test macros](concurrency.html#Feature_test_macros)
  * [3 Merged into C++20](concurrency.html#Merged_into_C.2B.2B20)
    * [3.1 Latches and barriers](concurrency.html#Latches_and_barriers)
    * [3.2 Atomic smart pointers](concurrency.html#Atomic_smart_pointers)

  
---  
  
### Continuations and other extensions for std::future

Defined in header `[<experimental/future>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/future&action=edit&redlink=1 "cpp/header/experimental/future \(page does not exist\)")`  
---  
[ future](future.html "cpp/experimental/future")(concurrency TS) |  a version of [std::future](../thread/future.html "cpp/thread/future") enhanced with continuations and other features   
(class template)   
[ shared_future](shared_future.html "cpp/experimental/shared future")(concurrency TS) |  a version of [std::shared_future](../thread/shared_future.html "cpp/thread/shared future") enhanced with continuations and other features   
(class template)   
[ promise](concurrency/promise.html "cpp/experimental/concurrency/promise")(concurrency TS) |  a modified version of [std::promise](../thread/promise.html "cpp/thread/promise") that uses std::experimental::future   
(class template)  
[ packaged_task](concurrency/packaged_task.html "cpp/experimental/concurrency/packaged task")(concurrency TS) |  a modified version of [std::packaged_task](../thread/packaged_task.html "cpp/thread/packaged task") that uses std::experimental::future   
(class template)  
[ when_all](when_all.html "cpp/experimental/when all")(concurrency TS) |  produces a future that becomes ready when all given futures or `shared_futures` are ready   
(function template)   
[ when_any](when_any.html "cpp/experimental/when any")(concurrency TS) |  produces a future that becomes ready when at least one of the given futures or shared_futures is ready   
(function template)   
[ make_ready_future](make_ready_future.html "cpp/experimental/make ready future")(concurrency TS) |  produces a future that is ready immediately and holds the given value   
(function template)   
[ make_exceptional_future](make_exceptional_future.html "cpp/experimental/make exceptional future")(concurrency TS) |  produces a future that is ready immediately and holds the given exception   
(function template)   
  
### Feature test macros

Defined in header `[<experimental/future>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/future&action=edit&redlink=1 "cpp/header/experimental/future \(page does not exist\)")`  
---  
__cpp_lib_experimental_future_continuations |  a value of at least 201505 indicates that future::then and other extensions are supported   
(macro constant)  
Defined in header `[<experimental/latch>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/latch&action=edit&redlink=1 "cpp/header/experimental/latch \(page does not exist\)")`  
__cpp_lib_experimental_latch |  a value of at least 201505 indicates that the latch type is supported   
(macro constant)  
Defined in header `[<experimental/barrier>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/barrier&action=edit&redlink=1 "cpp/header/experimental/barrier \(page does not exist\)")`  
__cpp_lib_experimental_barrier |  a value of at least 201505 indicates that barrier type is supported   
(macro constant)  
Defined in header `[<experimental/atomic>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/atomic&action=edit&redlink=1 "cpp/header/experimental/atomic \(page does not exist\)")`  
__cpp_lib_experimental_atomic_smart_pointers |  a value of at least 201505 indicates that the atomic smart pointers are supported   
(macro constant)  
  
## Merged into C++20

The following components of the Concurrency TS have been adopted into the C++20 standard. 

### Latches and barriers

Defined in header `[<experimental/latch>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/latch&action=edit&redlink=1 "cpp/header/experimental/latch \(page does not exist\)")`  
---  
[ latch](latch.html "cpp/experimental/latch")(concurrency TS) |  single-use thread barrier   
(class)   
Defined in header `[<experimental/barrier>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/barrier&action=edit&redlink=1 "cpp/header/experimental/barrier \(page does not exist\)")`  
[ barrier](barrier.html "cpp/experimental/barrier")(concurrency TS) |  reusable thread barrier   
(class)   
[ flex_barrier](flex_barrier.html "cpp/experimental/flex barrier")(concurrency TS) |  reusable thread barrier with customizable behavior on completion   
(class)   
  
### Atomic smart pointers

These class templates replace the shared_ptr [atomic function overloads](../memory/shared_ptr/atomic.html "cpp/memory/shared ptr/atomic")

Defined in header `[<experimental/atomic>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/atomic&action=edit&redlink=1 "cpp/header/experimental/atomic \(page does not exist\)")`  
---  
[ atomic_shared_ptr](atomic_shared_ptr.html "cpp/experimental/atomic shared ptr")(concurrency TS) |  atomic version of std::shared_ptr   
(class template)   
[ atomic_weak_ptr](atomic_weak_ptr.html "cpp/experimental/atomic weak ptr")(concurrency TS) |  atomic version of std::weak_ptr   
(class template) 
