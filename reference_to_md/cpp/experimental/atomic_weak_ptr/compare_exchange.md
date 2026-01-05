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
  


[`std::experimental::atomic_weak_ptr`](../atomic_weak_ptr.html "cpp/experimental/atomic weak ptr")

[atomic_weak_ptr::atomic_weak_ptr](atomic_weak_ptr.html "cpp/experimental/atomic weak ptr/atomic weak ptr")  
---  
[atomic_weak_ptr::operator=](operator=.html "cpp/experimental/atomic weak ptr/operator=")  
[atomic_weak_ptr::is_lock_free](is_lock_free.html "cpp/experimental/atomic weak ptr/is lock free")  
[atomic_weak_ptr::store](store.html "cpp/experimental/atomic weak ptr/store")  
[atomic_weak_ptr::load](load.html "cpp/experimental/atomic weak ptr/load")  
[atomic_weak_ptr::operator weak_ptr<T>](operator_weak_ptr.html "cpp/experimental/atomic weak ptr/operator weak ptr")  
[atomic_weak_ptr::exchange](exchange.html "cpp/experimental/atomic weak ptr/exchange")  
**atomic_weak_ptr::compare_exchange_weak atomic_weak_ptr::compare_exchange_strong**  
  


bool compare_exchange_weak( [std::weak_ptr](../../memory/weak_ptr.html)<T>& expected, const [std::weak_ptr](../../memory/weak_ptr.html)<T>& desired,  
[std::memory_order](../../atomic/memory_order.html) success, [std::memory_order](../../atomic/memory_order.html) failure ) noexcept; |  (1)  |   
---|---|---  
bool compare_exchange_weak( [std::weak_ptr](../../memory/weak_ptr.html)<T>& expected, [std::weak_ptr](../../memory/weak_ptr.html)<T>&& desired,  
[std::memory_order](../../atomic/memory_order.html) success, [std::memory_order](../../atomic/memory_order.html) failure ) noexcept; |  (2)  |   
bool compare_exchange_weak( [std::weak_ptr](../../memory/weak_ptr.html)<T>& expected, const [std::weak_ptr](../../memory/weak_ptr.html)<T>& desired,  
[std::memory_order](../../atomic/memory_order.html) order = [std::memory_order_seq_cst](../../atomic/memory_order.html) ) noexcept; |  (3)  |   
bool compare_exchange_weak( [std::weak_ptr](../../memory/weak_ptr.html)<T>& expected, [std::weak_ptr](../../memory/weak_ptr.html)<T>&& desired,  
[std::memory_order](../../atomic/memory_order.html) order = [std::memory_order_seq_cst](../../atomic/memory_order.html) ) noexcept; |  (4)  |   
bool compare_exchange_strong( [std::weak_ptr](../../memory/weak_ptr.html)<T>& expected, const [std::weak_ptr](../../memory/weak_ptr.html)<T>& desired,  
[std::memory_order](../../atomic/memory_order.html) success, [std::memory_order](../../atomic/memory_order.html) failure ) noexcept; |  (5)  |   
bool compare_exchange_strong( [std::weak_ptr](../../memory/weak_ptr.html)<T>& expected, [std::weak_ptr](../../memory/weak_ptr.html)<T>&& desired,  
[std::memory_order](../../atomic/memory_order.html) success, [std::memory_order](../../atomic/memory_order.html) failure ) noexcept; |  (6)  |   
bool compare_exchange_strong( [std::weak_ptr](../../memory/weak_ptr.html)<T>& expected, const [std::weak_ptr](../../memory/weak_ptr.html)<T>& desired,  
[std::memory_order](../../atomic/memory_order.html) order = [std::memory_order_seq_cst](../../atomic/memory_order.html) ) noexcept; |  (7)  |   
bool compare_exchange_strong( [std::weak_ptr](../../memory/weak_ptr.html)<T>& expected, [std::weak_ptr](../../memory/weak_ptr.html)<T>&& desired,  
[std::memory_order](../../atomic/memory_order.html) order = [std::memory_order_seq_cst](../../atomic/memory_order.html) ) noexcept; |  (8)  |   
| |   
  
Atomically compares the underlying `weak_ptr` in *this with expected, and if they are equivalent, replaces the former with desired (performs read-modify-write operation). Otherwise, loads the actual value stored in *this into expected (performs load operation). The replacement is performed as if by the copy or move assignment operator of `weak_ptr`, as appropriate. 

Two `weak_ptr`s are equivalent if and only if they store the same pointer value and share ownership. 

The memory models for the read-modify-write and load operations are success and failure respectively. For overloads (3,4,7,8), order is used for both read-modify-write and load operations, except that [std::memory_order_acquire](../../atomic/memory_order.html "cpp/atomic/memory order") and [std::memory_order_relaxed](../../atomic/memory_order.html "cpp/atomic/memory order") are used for the load operation if order == [std::memory_order_acq_rel](../../atomic/memory_order.html), or order == [std::memory_order_release](../../atomic/memory_order.html) respectively. 

The weak versions (1-4) may fail spuriously. 

## Contents

  * [1 Parameters](compare_exchange.html#Parameters)
  * [2 Return value](compare_exchange.html#Return_value)
  * [3 Remarks](compare_exchange.html#Remarks)
  * [4 Notes](compare_exchange.html#Notes)
  * [5 See also](compare_exchange.html#See_also)

  
---  
  
### Parameters

expected  |  \-  |  reference to the value expected to be found in the atomic object   
---|---|---  
desired  |  \-  |  the value to store in the atomic object if it is as expected   
success  |  \-  |  the memory synchronization ordering for the read-modify-write operation if the comparison succeeds. All values are permitted   
failure  |  \-  |  the memory synchronization ordering for the load operation if the comparison fails. Cannot be [std::memory_order_release](../../atomic/memory_order.html "cpp/atomic/memory order") or [std::memory_order_acq_rel](../../atomic/memory_order.html "cpp/atomic/memory order") and cannot specify stronger ordering than success  
order  |  \-  |  the memory synchronization ordering for both operations   
  
### Return value

true if the underlying atomic value was changed, false otherwise. 

### Remarks

All changes to the `atomic_weak_ptr` object itself, and all associated [`use_count`](../../memory/weak_ptr/use_count.html "cpp/memory/weak ptr/use count") increments, are guaranteed to be performed atomically. Associated `use_count` decrements take place after the atomic operation, but are not required to be part of it. Any associated destruction or deallocation operations take place after the atomic operation and are not part of it. 

If the compare-exchange operation return true, expected is not accessed after the atomic update step. If it returns false, expected is updated with the existing value read from the `atomic_weak_ptr` object in the attempted atomic update. The `use_count` update corresponding to the write to expected is part of the atomic operation, but the write to expected itself is not required to be part of the atomic operation. 

For overloads (1,3,5,7), desired is not accessed after the atomic update step. 

For overloads (2,4,6,8), desired is moved from only if the compare-exchange operation returns true; the moving occurs after the atomic update step. 

### Notes

The weak forms (1-4) of the functions are allowed to fail spuriously, that is, act as if *this and expected are not equivalent even when they are. When a compare-and-exchange is in a loop, the weak version will yield better performance on some platforms. 

### See also

[ std::atomic_is_lock_free(std::shared_ptr)std::atomic_load(std::shared_ptr)std::atomic_load_explicit(std::shared_ptr)std::atomic_store(std::shared_ptr)std::atomic_store_explicit(std::shared_ptr)std::atomic_exchange(std::shared_ptr)std::atomic_exchange_explicit(std::shared_ptr)std::atomic_compare_exchange_weak(std::shared_ptr)std::atomic_compare_exchange_strong(std::shared_ptr)std::atomic_compare_exchange_weak_explicit(std::shared_ptr)std::atomic_compare_exchange_strong_explicit(std::shared_ptr)](../../memory/shared_ptr/atomic.html "cpp/memory/shared ptr/atomic")(deprecated in C++20)(removed in C++26) |  specializes atomic operations for `std::shared_ptr`   
(function template)   
---|---
