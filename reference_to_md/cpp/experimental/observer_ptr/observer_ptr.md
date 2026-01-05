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
  


[Library fundamentals v2](../lib_extensions_2.html "cpp/experimental/lib extensions 2")

[experimental::propagate_const](../propagate_const.html "cpp/experimental/propagate const")  
---  
[experimental::not_fn](../not_fn.html "cpp/experimental/not fn")  
[experimental::observer_ptr](../observer_ptr.html "cpp/experimental/observer ptr")  
[experimental::make_array](../make_array.html "cpp/experimental/make array")  
[experimental::to_array](../to_array.html "cpp/experimental/to array")  
[experimental::ostream_joiner](../ostream_joiner.html "cpp/experimental/ostream joiner")  
[experimental::gcd](../gcd.html "cpp/experimental/gcd")  
[experimental::lcm](../lcm.html "cpp/experimental/lcm")  
[experimental::source_location](../source_location.html "cpp/experimental/source location")  
[experimental::randint](../randint.html "cpp/experimental/randint")  
[detection idiom](../is_detected.html "cpp/experimental/is detected")  
[uniform container erasure](../lib_extensions_2.html#Uniform_container_erasure "cpp/experimental/lib extensions 2")  
[logical operator type traits](../lib_extensions_2.html#Logical_operator_type_traits "cpp/experimental/lib extensions 2")  
  


[`std::experimental::observer_ptr`](../observer_ptr.html "cpp/experimental/observer ptr")

Member functions  
---  
**observer_ptr::observer_ptr**  
Modifiers  
[observer_ptr::release](release.html "cpp/experimental/observer ptr/release")  
[observer_ptr::reset](reset.html "cpp/experimental/observer ptr/reset")  
[observer_ptr::swap](swap.html "cpp/experimental/observer ptr/swap")  
Observers  
[observer_ptr::get](get.html "cpp/experimental/observer ptr/get")  
[observer_ptr::operator bool](operator_bool.html "cpp/experimental/observer ptr/operator bool")  
[observer_ptr::operator*observer_ptr::operator->](operator*.html "cpp/experimental/observer ptr/operator*")  
Conversions  
[observer_ptr::operator element_type*](operator_pointer.html "cpp/experimental/observer ptr/operator pointer")  
Non-member functions  
[make_observer](make_observer.html "cpp/experimental/observer ptr/make observer")  
[operator==operator!=operator<operator>operator<=operator>operator>=](operator_cmp.html "cpp/experimental/observer ptr/operator cmp")  
[swap](swap2.html "cpp/experimental/observer ptr/swap2")  
[std::hash](hash.html "cpp/experimental/observer ptr/hash")  
  


constexpr observer_ptr() noexcept;  
constexpr observer_ptr( nullptr_t ) noexcept; |  (1)  |  (library fundamentals TS v2)  
---|---|---  
constexpr explicit observer_ptr( element_type* p ) noexcept; |  (2)  |  (library fundamentals TS v2)  
template< class W2 >  
constexpr observer_ptr( observer_ptr<W2> other ) noexcept; |  (3)  |  (library fundamentals TS v2)  
observer_ptr( const observer_ptr& other ) = default; |  (4)  |  (library fundamentals TS v2)   
(implicitly declared)  
observer_ptr( observer_ptr&& other ) = default; |  (5)  |  (library fundamentals TS v2)   
(implicitly declared)  
| |   
  
1) Constructs an `observer_ptr` that has no corresponding watched object.

2) Constructs an `observer_ptr` that watches p.

3) Constructs an `observer_ptr` that watches other.get(). This overload participates in overload resolution only if W2* is convertible to element_type*.

4,5) Implicitly declared copy and move constructors. Constructs an `observer_ptr` that watches other.get().

### Parameters

p  |  \-  |  a pointer to an object to watch   
---|---|---  
other  |  \-  |  another `observer_ptr` to copy from 
