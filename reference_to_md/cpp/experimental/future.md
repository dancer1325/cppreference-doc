[C++](../../cpp.html "cpp")

[Compiler support](../compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](../freestanding.html "cpp/freestanding")  
[Language](../language.html "cpp/language")  
[Standard library](../standard_library.html "cpp/standard library")  
[Standard library headers](../headers.html "cpp/header")  
[Named requirements](../iterator/concepts.html "cpp/named req")  
[Feature test macros](feature_test.html "cpp/feature test") (C++20)  
[Language support library](../utility.html#Language_support "cpp/utility")  
[Concepts library](../concepts.html "cpp/concepts") (C++20)  
[Diagnostics library](../error.html "cpp/error")  
[Memory management library](../memory.html "cpp/memory")  
[Metaprogramming library](../meta.html "cpp/meta") (C++11)  
[General utilities library](../utility.html "cpp/utility")  
[Containers library](../container.html "cpp/container")  
[Iterators library](../iterator.html "cpp/iterator")  
[Ranges library](../ranges.html "cpp/ranges") (C++20)  
[Algorithms library](../algorithm.html "cpp/algorithm")  
[Strings library](../string.html "cpp/string")  
[Text processing library](../text.html "cpp/text")  
[Numerics library](../numeric.html "cpp/numeric")  
[Date and time library](../chrono.html "cpp/chrono")  
[Input/output library](../io.html "cpp/io")  
[Filesystem library](../filesystem.html "cpp/filesystem") (C++17)  
[Concurrency support library](../atomic.html "cpp/thread") (C++11)  
[Execution control library](execution.html "cpp/execution") (C++26)  
[Technical specifications](../experimental.html "cpp/experimental")  
[Symbols index](../symbol_index.html "cpp/symbol index")  
[External libraries](../links/libs.html "cpp/links/libs")  
  


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
**experimental::future**  
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
  


**`std::experimental::future`**

[future::future](future/future.html "cpp/experimental/future/future")  
---  
[future::operator=](future/operator=.html "cpp/experimental/future/operator=")  
[future::is_ready](future/is_ready.html "cpp/experimental/future/is ready")  
[future::then](future/then.html "cpp/experimental/future/then")  
  


Defined in header `[<experimental/future>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/future&action=edit&redlink=1 "cpp/header/experimental/future \(page does not exist\)")` |  |   
---|---|---  
template< class T > class future; |  (1)  |  (concurrency TS)  
template< class T > class future<T&>; |  (2)  |  (concurrency TS)  
template<> class future<void>; |  (3)  |  (concurrency TS)  
| |   
  
The class template `std::experimental::future` extends [std::future](../thread/future.html "cpp/thread/future") with the following operations: 

  * an _unwrapping constructor_ from `future<future<T>>`; 
  * a member function `is_ready` to query whether the associated shared state is ready; and 
  * a member function `then` to attach a continuation to the future. 



However, there is no interoperation between `std::experimental::future` and [std::future](../thread/future.html "cpp/thread/future"). 

## Contents

  * [1 Member functions](future.html#Member_functions)
  * [2 Members identical to std::future](future.html#Members_identical_to_std::future)
    * [2.1 Member functions](future.html#Member_functions_2)
      * [2.1.1 Getting the result](future.html#Getting_the_result)
      * [2.1.2 State](future.html#State)
    * [2.2 Example](future.html#Example)
    * [2.3 See also](future.html#See_also)

  
---  
  
### Member functions

[ (constructor)](future/future.html "cpp/experimental/future/future") |  construct a `future` object   
(public member function)   
---|---  
[ is_ready](future/is_ready.html "cpp/experimental/future/is ready") |  checks if the shared state is ready   
(public member function)   
[ then](future/then.html "cpp/experimental/future/then") |  attaches a continuation to a future   
(public member function)   
[ operator=](future/operator=.html "cpp/experimental/future/operator=") |  moves the future object   
(public member function)   
  
##  Members identical to std::future 

###  Member functions

Note that `share()` returns a std::experimental::shared_future<T>. The behavior is otherwise identical. 

[ (destructor)](../thread/future/~future.html "cpp/thread/future/~future") |  destructs the future object   
(public member function of `std::future<T>`)   
---|---  
[ share](../thread/future/share.html "cpp/thread/future/share") |  transfers the shared state from *this to a [`shared_future`](../thread/shared_future.html "cpp/thread/shared future") and returns it   
(public member function of `std::future<T>`)   
  
#####  Getting the result   
  
[ get](../thread/future/get.html "cpp/thread/future/get") |  returns the result   
(public member function of `std::future<T>`)   
  
#####  State   
  
[ valid](../thread/future/valid.html "cpp/thread/future/valid") |  checks if the future has a shared state   
(public member function of `std::future<T>`)   
[ wait](../thread/future/wait.html "cpp/thread/future/wait") |  waits for the result to become available   
(public member function of `std::future<T>`)   
[ wait_for](../thread/future/wait_for.html "cpp/thread/future/wait for") |  waits for the result, returns if it is not available for the specified timeout duration   
(public member function of `std::future<T>`)   
[ wait_until](../thread/future/wait_until.html "cpp/thread/future/wait until") |  waits for the result, returns if it is not available until specified time point has been reached   
(public member function of `std::future<T>`)   
  
### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### See also

[ shared_future](shared_future.html "cpp/experimental/shared future")(concurrency TS) |  a version of [std::shared_future](../thread/shared_future.html "cpp/thread/shared future") enhanced with continuations and other features   
(class template)   
---|---
