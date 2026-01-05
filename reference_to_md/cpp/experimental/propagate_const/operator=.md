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
  


[`std::experimental::propagate_const`](../propagate_const.html "cpp/experimental/propagate const")

Member functions  
---  
[propagate_const::propagate_const](propagate_const.html "cpp/experimental/propagate const/propagate const")  
**propagate_const::operator=**  
[propagate_const::swap](swap.html "cpp/experimental/propagate const/swap")  
Observers  
[propagate_const::get](get.html "cpp/experimental/propagate const/get")  
[propagate_const::operator bool](operator_bool.html "cpp/experimental/propagate const/operator bool")  
[propagate_const::operator*propagate_const::operator->](operator*.html "cpp/experimental/propagate const/operator*")  
[propagate_const::operator element_type*propagate_const::operator const element_type*](operator_element_type*.html "cpp/experimental/propagate const/operator element type*")  
Non-member functions  
[operator==operator!=operator<operator>operator<=operator>operator>=](operator_cmp.html "cpp/experimental/propagate const/operator cmp")  
[swap](swap2.html "cpp/experimental/propagate const/swap2")  
[get_underlying](get_underlying.html "cpp/experimental/propagate const/get underlying")  
Helper classes  
[std::hash](hash.html "cpp/experimental/propagate const/hash")  
[std::equal_tostd::not_equal_tostd::lessstd::greaterstd::less_equalstd::greater_equal](cmp_func.html "cpp/experimental/propagate const/cmp func")  
  


constexpr propagate_const& operator=( propagate_const&& p ) = default; |  (1)  |  (library fundamentals TS v2)  
---|---|---  
template< class U >  
constexpr propagate_const& operator=( propagate_const<U>&& pu ); |  (2)  |  (library fundamentals TS v2)  
template< class U >  
constexpr propagate_const& operator=( U&& u ); |  (3)  |  (library fundamentals TS v2)  
propagate_const& operator=( const propagate_const& ) = delete; |  (4)  |  (library fundamentals TS v2)  
| |   
  
Let `t_` designate the private data member that is the wrapped pointer-like object. 

1) Explicitly defaulted move assignment operator that move assigns this->t_ from p.t_.

2) Assigns std::move(pu.t_) to this->t_.  
This overload participates in overload resolution only if `U` is implicitly convertible to `T`.

3) Assigns [std::forward](../../utility/forward.html)<U>(u) to this->t_.  
This overload participates in overload resolution only if `U` is implicitly convertible to `T` and [std::decay_t](../../types/decay.html)<U> is not a specialization of `propagate_const`.

4) Copy assignment operator is explicitly deleted. `propagate_const` is non-copyable.

### Parameters

p  |  \-  |  another `propagate_const` object to move from   
---|---|---  
pu  |  \-  |  another `propagate_const` object of a different specialization to move from   
u  |  \-  |  another object to assign to the contained pointer   
  
### Return value 

*this. 
