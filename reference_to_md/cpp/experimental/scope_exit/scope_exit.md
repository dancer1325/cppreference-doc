[[edit template]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/scope_guard/constructor&action=edit)

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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/navbar_content&action=edit)

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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/navbar_content&action=edit)

[Library fundamentals v3](../lib_extensions_3.html "cpp/experimental/lib extensions 3")

[experimental::scope_exit](../scope_exit.html "cpp/experimental/scope exit")  
---  
[experimental::scope_fail](../scope_fail.html "cpp/experimental/scope fail")  
[experimental::scope_success](../scope_success.html "cpp/experimental/scope success")  
[experimental::unique_resource](../unique_resource.html "cpp/experimental/unique resource")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/lib_extensions_3/navbar_content&action=edit)

[`std::experimental::scope_exit`](../scope_exit.html "cpp/experimental/scope exit")

Member functions  
---  
**scope_exit::scope_exit**  
[scope_exit::~scope_exit](~scope_exit.html "cpp/experimental/scope exit/~scope exit")  
Modifiers  
[scope_exit::release](release.html "cpp/experimental/scope exit/release")  
[Deduction guides](deduction_guides.html "cpp/experimental/scope exit/deduction guides")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/scope_exit/navbar_content&action=edit)

template< class Fn >  
explicit scope_exit( Fn&& fn ) noexcept(/*see below*/); |  (1)  |  (library fundamentals TS v3)  
---|---|---  
scope_exit( scope_exit&& other ) noexcept(/*see below*/); |  (2)  |  (library fundamentals TS v3)  
scope_exit( const scope_exit& ) = delete; |  (3)  |  (library fundamentals TS v3)  
| |   
  
Creates a `scope_exit` from a function, a function object or another `scope_exit`. 

1) Initializes the exit function with a function or function object. The constructed `scope_exit` is active.

If `Fn` is not an lvalue reference type and [std::is_nothrow_constructible_v](../../types/is_constructible.html)<EF, Fn> is true, the stored `EF` is initialized with [std::forward](../../utility/forward.html)<Fn>(fn); otherwise it is initialized with fn.

If initialization of the stored `EF` throws an exception, calls fn().

This overload participates in overload resolution only if [std::is_same_v](../../types/is_same.html)<[std::remove_cvref_t](../../types/remove_cvref.html)<Fn>, scope_exit> is false and [std::is_constructible_v](../../types/is_constructible.html)<EF, Fn> is true.

The program is ill-formed if function call expression fn() is ill-formed.

The behavior is undefined if calling fn() throws an exception or results in undefined behavior, even if fn has not been called.

2) Move constructor. Initializes the stored `EF` with the one in other. The constructed `scope_exit` is active if and only if other is active before the construction.

If [std::is_nothrow_move_constructible_v](../../types/is_move_constructible.html)<EF> is true, initializes stored `EF` (denoted by `exitfun`) with [std::forward](../../utility/forward.html)<EF>(other.exitfun), otherwise initializes it with other.exitfun.

After successful move construction, other.release() is called and other becomes inactive.

This overload participates in overload resolution only if [std::is_nothrow_move_constructible_v](../../types/is_move_constructible.html)<EF> is true or [std::is_copy_constructible_v](../../types/is_copy_constructible.html)<EF> is true.

The behavior is undefined if 

  * [std::is_nothrow_move_constructible_v](../../types/is_move_constructible.html)<EF> is true and `EF` does not meet the requirements of [MoveConstructible](../../named_req/MoveConstructible.html "cpp/named req/MoveConstructible"), or 
  * [std::is_nothrow_move_constructible_v](../../types/is_move_constructible.html)<EF> is false and `EF` does not meet the requirements of [CopyConstructible](../../named_req/CopyConstructible.html "cpp/named req/CopyConstructible").



3) `scope_exit` is not [CopyConstructible](../../named_req/CopyConstructible.html "cpp/named req/CopyConstructible").

## Contents

  * [1 Parameters](scope_exit.html#Parameters)
  * [2 Exceptions](scope_exit.html#Exceptions)
  * [3 Example](scope_exit.html#Example)
  * [4 See also](scope_exit.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/scope_guard/constructor&action=edit&section=T-1 "Template:cpp/experimental/scope guard/constructor")] Parameters

fn  |  \-  |  function or function object used for initializing the stored `EF`  
---|---|---  
other  |  \-  |  `scope_exit` to move from   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/scope_guard/constructor&action=edit&section=T-2 "Template:cpp/experimental/scope guard/constructor")] Exceptions

Any exception thrown during the initialization of the stored `EF`. 

1)

[`noexcept`](../../language/noexcept_spec.html "cpp/language/noexcept spec") specification: 

noexcept([std::is_nothrow_constructible_v](../../types/is_constructible.html)<EF, Fn> ||  
[std::is_nothrow_constructible_v](../../types/is_constructible.html)<EF, Fn&>)

2)

[`noexcept`](../../language/noexcept_spec.html "cpp/language/noexcept spec") specification: 

noexcept([std::is_nothrow_move_constructible_v](../../types/is_move_constructible.html)<EF> ||  
[std::is_nothrow_copy_constructible_v](../../types/is_copy_constructible.html)<EF>)

### [[edit](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/scope_guard/constructor&action=edit&section=T-3 "Template:cpp/experimental/scope guard/constructor")] Example

| This section is incomplete  
Reason: no example   
---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/scope_guard/constructor&action=edit&section=T-4 "Template:cpp/experimental/scope guard/constructor")] See also

[ release](release.html "cpp/experimental/scope exit/release") |  makes the `scope_exit` inactive   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/scope_guard/dsc_release&action=edit)  
---|---
