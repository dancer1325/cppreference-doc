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
[propagate_const::operator=](operator=.html "cpp/experimental/propagate const/operator=")  
**propagate_const::swap**  
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
  


constexpr void swap( propagate_const & pt ) noexcept(/* see below */); |  |  (library fundamentals TS v2)  
---|---|---  
| |   
  
Swaps the wrapped pointer with that of pt. Let `t_` designate the private data member that is the wrapped pointer-like object, then this function is equivalent to swap(t_, pt.t_), where the overload resolution for `swap` is performed among [std::swap](../../utility/swap.html "cpp/algorithm/swap") and any declaration found by the usual lookup rules, as described in [Swappable](../../named_req/Swappable.html "cpp/named req/Swappable"). 

The behavior is undefined if lvalues of `T` do not satisfy [Swappable](../../named_req/Swappable.html "cpp/named req/Swappable"). 

### Parameters

pt  |  \-  |  another `propagate_const` object to swap with   
---|---|---  
  
### Exceptions

[`noexcept`](../../language/noexcept_spec.html "cpp/language/noexcept spec") specification: noexcept(noexcept(swap(t_, pt.t_)))The lookup for the identifier `swap` in the exception specification finds overloads described above, and does not find the member function itself, making the exception specification equivalent to C++17 [std::is_nothrow_swappable](../../types/is_swappable.html "cpp/types/is swappable").  | (library fundamentals TS v2)  
---|---  
[`noexcept`](../../language/noexcept_spec.html "cpp/language/noexcept spec") specification: noexcept([std::is_nothrow_swappable_v](../../types/is_swappable.html)<T>) | (library fundamentals TS v3)  
  
### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3413](https://cplusplus.github.io/LWG/issue3413) | LFTSv2  | the exception specification was ill-formed  | made well-formed 
