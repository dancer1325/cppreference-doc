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
  


[Library fundamentals](../memory.html "cpp/experimental/lib extensions")

[experimental::optional](../optional.html "cpp/experimental/optional")  
---  
[experimental::any](../any.html "cpp/experimental/any")  
[experimental::basic_string_view](../basic_string_view.html "cpp/experimental/basic string view")  
[experimental::sample](../sample.html "cpp/experimental/sample")  
[experimental::shared_ptr](../shared_ptr.html "cpp/experimental/shared ptr")  
[experimental::weak_ptr](../weak_ptr.html "cpp/experimental/weak ptr")  
[experimental::apply](../apply.html "cpp/experimental/apply")  
[experimental::invocation_typeexperimental::raw_invocation_type](../invocation_type.html "cpp/experimental/invocation type")  
[experimental::search](../search.html "cpp/experimental/search")  
[experimental::default_searcherexperimental::make_default_searcher](../default_searcher.html "cpp/experimental/default searcher")  
[experimental::boyer_moore_searcherexperimental::make_boyer_moore_searcher](../boyer_moore_searcher.html "cpp/experimental/boyer moore searcher")  
[experimental::boyer_moore_horspool_searcherexperimental::make_boyer_moore_horspool_searcher](../boyer_moore_horspool_searcher.html "cpp/experimental/boyer moore horspool searcher")  
[Type-erased and polymorphic allocators](../memory.html "cpp/experimental/memory")  
[Variable templates for type traits](../type_trait_variable_templates.html "cpp/experimental/type trait variable templates")  
  


[`std::experimental::weak_ptr`](../weak_ptr.html "cpp/experimental/weak ptr")

**weak_ptr::weak_ptr**  
---  
[Members and non-members identical to those of `std::weak_ptr`](../weak_ptr.html#identical-weak_ptr "cpp/experimental/weak ptr")  
  


constexpr weak_ptr() noexcept; |  (1)  |  (library fundamentals TS)  
---|---|---  
weak_ptr( const weak_ptr& r ) noexcept; |  (2)  |  (library fundamentals TS)  
template< class Y >   
weak_ptr( const weak_ptr<Y>& r ) noexcept; |  (2)  |  (library fundamentals TS)  
template< class Y >   
weak_ptr( const [std::experimental::shared_ptr](../shared_ptr.html)<Y>& r ) noexcept; |  (2)  |  (library fundamentals TS)  
weak_ptr( weak_ptr&& r ) noexcept; |  (3)  |  (library fundamentals TS)  
template< class Y >   
weak_ptr( weak_ptr<Y>&& r ) noexcept; |  (3)  |  (library fundamentals TS)  
| |   
  
Constructs a new `weak_ptr` that potentially shares an object with r. 

1) Default constructor. Constructs empty `weak_ptr`.

2) Constructs new `weak_ptr` which shares an object managed by r. If r manages no object, *this manages no object too. The templated overloads don't participate in overload resolution unless either `Y*` is implicitly convertible to `T*`, or `Y` is the type "array of `N` `U`" for some type `U` and some number `N`, and `T` is the type "array of unknown bound of (possibly cv-qualified) `U`". 

3) Move constructors. Moves a `weak_ptr` instance from r into *this. After this, r is empty and r.use_count() == 0. The templated overload doesn't participate in overload resolution unless either `Y*` is implicitly convertible to `T*`, or `Y` is the type "array of `N` `U`" for some type `U` and some number `N`, and `T` is the type "array of unknown bound of (possibly cv-qualified) `U`".

## Contents

  * [1 Parameters](weak_ptr.html#Parameters)
  * [2 Exceptions](weak_ptr.html#Exceptions)
  * [3 Example](weak_ptr.html#Example)
  * [4 See also](weak_ptr.html#See_also)

  
---  
  
### Parameters

r  |  \-  |  a std::experimental::shared_ptr or std::experimental::weak_ptr that will be viewed by this std::experimental::weak_ptr  
---|---|---  
  
### Exceptions

[`noexcept`](../../language/noexcept_spec.html "cpp/language/noexcept spec") specification: 

noexcept

### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### See also

[ (constructor)](../../memory/weak_ptr/weak_ptr.html "cpp/memory/weak ptr/weak ptr") |  creates a new `weak_ptr`   
(public member function of `std::weak_ptr<T>`)   
---|---  
[ operator=](../../memory/weak_ptr/operator=.html "cpp/memory/weak ptr/operator=") |  assigns the `weak_ptr`   
(public member function of `std::weak_ptr<T>`) 
