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
[experimental::shared_future](shared_future.html "cpp/experimental/shared future")  
[experimental::when_all](when_all.html "cpp/experimental/when all")  
**experimental::when_any**  
[experimental::make_ready_future](make_ready_future.html "cpp/experimental/make ready future")  
[experimental::make_exceptional_future](make_exceptional_future.html "cpp/experimental/make exceptional future")  
Latches and barriers  
[experimental::latch](latch.html "cpp/experimental/latch")  
[experimental::barrier](barrier.html "cpp/experimental/barrier")  
[experimental::flex_barrier](flex_barrier.html "cpp/experimental/flex barrier")  
Atomic smart pointers  
[experimental::atomic_shared_ptr](atomic_shared_ptr.html "cpp/experimental/atomic shared ptr")  
[experimental::atomic_weak_ptr](atomic_weak_ptr.html "cpp/experimental/atomic weak ptr")  
  


Defined in header `[<experimental/future>](https://en.cppreference.com/mwiki/index.php?title=cpp/header/experimental/future&action=edit&redlink=1 "cpp/header/experimental/future \(page does not exist\)")` |  |   
---|---|---  
template< class Sequence >  
struct when_any_result {  
[std::size_t](../types/size_t.html) index;  
Sequence futures;  
}; |  |  (concurrency TS)  
template< class InputIt >  
auto when_any( InputIt first, InputIt last )  
-> future<when_any_result<[std::vector](../container/vector.html)<typename [std::iterator_traits](../iterator/iterator_traits.html)<InputIt>::value_type>>>; |  (1)  |  (concurrency TS)  
template< class... Futures >  
auto when_any( Futures&&... futures )  
-> future<when_any_result<[std::tuple](../utility/tuple.html)<[std::decay_t](../types/decay.html)<Futures>...>>>; |  (2)  |  (concurrency TS)  
| |   
  
Create a future object that becomes ready when at least one of the input `future`s and shared_futures become ready. The behavior is undefined if any input `future` or `shared_future` is invalid. 

In particular, let `Sequence` be a [std::vector](../container/vector.html)<typename [std::iterator_traits](../iterator/iterator_traits.html)<InputIt>::value_type> for (1) and [std::tuple](../utility/tuple.html)<[std::decay_t](../types/decay.html)<Futures>...> for (2). This function template creates a shared state containing `when_any_result<Sequence>` and returns a future referring to the shared state. Every input `future` is moved into the corresponding object in the `futures` member of the `when_any_result<Sequence>` in the shared state, and every input `shared_future` is copied to the corresponding object in the `futures` member of the `when_any_result<Sequence>` in the shared state. The order of the objects in the `Sequence` matches the order of arguments. 

1) This function does not participate in overload resolution unless `InputIt`'s value type (i.e., typename [std::iterator_traits](../iterator/iterator_traits.html)<InputIt>::value_type) is a std::experimental::future or std::experimental::shared_future.

2) This function does not participate in overload resolution unless every argument is either a (possibly cv-qualified) std::experimental::shared_future or a cv-unqualified std::experimental::future. (Formally, for every type `Fn` in `Futures`, either [std::remove_reference_t](../types/remove_reference.html)<Fn> is [std::experimental::future](future.html)<Rn>, or [std::decay_t](../types/decay.html)<Fn> is [std::experimental::shared_future](shared_future.html)<Rn>.)

After this call, every input `future` is no longer valid; every input `shared_future` remains valid. 

### Return value

A `future` referring to the shared state created by the call. The future is always valid(), and it becomes ready when at least one of the input `future`s and `shared_future`s the call are ready. The `index` member of the `when_any_result` contains the position of the ready `future` or `shared_future` in the futures member. 

1) If the range is empty (i.e., first == last), the returned `future` is ready immediately; the `futures` field of the `when_any_result` is an empty vector, and the `index` field is size_t(-1).

2) If no argument is provided, the returned `future` is ready immediately; the `futures` field of the `when_any_result` is an empty tuple, and the `index` field is size_t(-1).
