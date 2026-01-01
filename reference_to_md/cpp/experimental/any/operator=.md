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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/lib_extensions/navbar_content&action=edit)

[`std::experimental::any`](../any.html "cpp/experimental/any")

Member functions  
---  
[any::any](any.html "cpp/experimental/any/any")  
**any::operator=**  
Modifiers  
[any::clear](clear.html "cpp/experimental/any/clear")  
[any::swap](swap.html "cpp/experimental/any/swap")  
Observers  
[any::empty](empty.html "cpp/experimental/any/empty")  
[any::type](type.html "cpp/experimental/any/type")  
Non-member functions  
[swap(std::experimental::any)](swap2.html "cpp/experimental/any/swap2")  
[any_cast](any_cast.html "cpp/experimental/any/any cast")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/any/navbar_content&action=edit)

any& operator=( const any& rhs ); |  (1)  |  (library fundamentals TS)  
---|---|---  
any& operator=( any&& rhs ) noexcept; |  (2)  |  (library fundamentals TS)  
template< typename ValueType >  
any& operator=( ValueType&& rhs ); |  (3)  |  (library fundamentals TS)  
| |   
  
Assigns contents to the contained value. 

1) Assigns by copying the state of rhs, as if by any(rhs).swap(*this).

2) Assigns by moving the state of rhs, as if by any(std::move(rhs)).swap(*this). rhs is left in a valid but unspecified state after the assignment.

3) Assigns the type and value of rhs, as if by any([std::forward](../../utility/forward.html)<ValueType>(rhs)).swap(*this). If [std::is_copy_constructible](../../types/is_copy_constructible.html)<[std::decay_t](../../types/decay.html)<ValueType>>::value is false, the program is ill-formed. This overload participates in overload resolution only if [std::decay_t](../../types/decay.html)<ValueType> is not the same type as any.

## Contents

  * [1 Template parameters](operator=.html#Template_parameters)
  * [2 Parameters](operator=.html#Parameters)
  * [3 Return value](operator=.html#Return_value)
  * [4 Exceptions](operator=.html#Exceptions)
  * [5 See also](operator=.html#See_also)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/any/operator%3D&action=edit&section=1 "Edit section: Template parameters")] Template parameters

ValueType  |  \-  |  contained value type   
---|---|---  
Type requirements   
-`std::decay_t<ValueType>` must meet the requirements of [CopyConstructible](../../named_req/CopyConstructible.html "cpp/named req/CopyConstructible").   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/any/operator%3D&action=edit&section=2 "Edit section: Parameters")] Parameters

rhs  |  \-  |  object whose contained value to assign   
---|---|---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/any/operator%3D&action=edit&section=3 "Edit section: Return value")] Return value

*this

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/any/operator%3D&action=edit&section=4 "Edit section: Exceptions")] Exceptions

1,3) Throws bad_alloc or any exception thrown by the constructor of the contained type. If an exception is thrown, there are no effects (strong exception guarantee).

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/any/operator%3D&action=edit&section=5 "Edit section: See also")] See also

[ (constructor)](any.html "cpp/experimental/any/any") |  constructs an `any` object   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/any/dsc_constructor&action=edit)  
---|---
