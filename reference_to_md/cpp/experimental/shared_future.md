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
[experimental::future](future.html "cpp/experimental/future")  
**experimental::shared_future**  
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
  


**`std::experimental::shared_future`**

[shared_future::shared_future](shared_future/shared_future.html "cpp/experimental/shared future/shared future")  
---  
[shared_future::operator=](shared_future/operator=.html "cpp/experimental/shared future/operator=")  
[shared_future::is_ready](shared_future/is_ready.html "cpp/experimental/shared future/is ready")  
[shared_future::then](shared_future/then.html "cpp/experimental/shared future/then")  
  


Defined in header `[<experimental/shared_future>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/shared_future&action=edit&redlink=1 "cpp/header/experimental/shared future \(page does not exist\)")` |  |   
---|---|---  
template< class T > class shared_future; |  (1)  |  (concurrency TS)  
template< class T > class shared_future<T&>; |  (2)  |  (concurrency TS)  
template<> class shared_future<void>; |  (3)  |  (concurrency TS)  
| |   
  
The class template `std::experimental::shared_future` extends [std::shared_future](../thread/shared_future.html "cpp/thread/shared future") with the following operations: 

  * an _unwrapping constructor_ from `future<shared_future<T>>`; 
  * a member function `is_ready` to query whether the associated shared state is ready; and 
  * a member function `then` to attach a continuation to the future. 



There is no interoperation between `std::experimental::shared_future` and [std::shared_future](../thread/shared_future.html "cpp/thread/shared future"). 

## Contents

  * [1 Member functions](shared_future.html#Member_functions)
  * [2 Members identical to std::shared_future](shared_future.html#Members_identical_to_std::shared_future)
    * [2.1 Member functions](shared_future.html#Member_functions_2)
      * [2.1.1 Getting the result](shared_future.html#Getting_the_result)
      * [2.1.2 State](shared_future.html#State)
    * [2.2 Example](shared_future.html#Example)
    * [2.3 See also](shared_future.html#See_also)

  
---  
  
### Member functions

[ (constructor)](shared_future/shared_future.html "cpp/experimental/shared future/shared future") |  constructs a `shared_future`   
(public member function)   
---|---  
[ is_ready](shared_future/is_ready.html "cpp/experimental/shared future/is ready") |  checks if the shared state is ready   
(public member function)   
[ then](shared_future/then.html "cpp/experimental/shared future/then") |  attaches a continuation to a `shared_future`   
(public member function)   
[ operator=](shared_future/operator=.html "cpp/experimental/shared future/operator=") |  assigns the contents   
(public member function)  
  
##  Members identical to std::shared_future 

###  Member functions

[ (destructor)](../thread/shared_future/~shared_future.html "cpp/thread/shared future/~shared future") |  destructs the future object   
(public member function of `std::shared_future<T>`)  
---|---  
  
#####  Getting the result   
  
[ get](../thread/shared_future/get.html "cpp/thread/shared future/get") |  returns the result   
(public member function of `std::shared_future<T>`)   
  
#####  State   
  
[ valid](../thread/shared_future/valid.html "cpp/thread/shared future/valid") |  checks if the future has a shared state   
(public member function of `std::shared_future<T>`)   
[ wait](../thread/shared_future/wait.html "cpp/thread/shared future/wait") |  waits for the result to become available   
(public member function of `std::shared_future<T>`)   
[ wait_for](../thread/shared_future/wait_for.html "cpp/thread/shared future/wait for") |  waits for the result, returns if it is not available for the specified timeout duration   
(public member function of `std::shared_future<T>`)   
[ wait_until](../thread/shared_future/wait_until.html "cpp/thread/shared future/wait until") |  waits for the result, returns if it is not available until specified time point has been reached   
(public member function of `std::shared_future<T>`)   
  
### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### See also

[ future](future.html "cpp/experimental/future")(concurrency TS) |  a version of [std::future](../thread/future.html "cpp/thread/future") enhanced with continuations and other features   
(class template)   
---|---
