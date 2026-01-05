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
  


[`std::experimental::shared_ptr`](../shared_ptr.html "cpp/experimental/shared ptr")

Member functions  
---  
[shared_ptr::shared_ptr](shared_ptr.html "cpp/experimental/shared ptr/shared ptr")  
[shared_ptr::get](get.html "cpp/experimental/shared ptr/get")  
[shared_ptr::operator*shared_ptr::operator->](operator*.html "cpp/experimental/shared ptr/operator*")  
[shared_ptr::operator[]](operator_at.html "cpp/experimental/shared ptr/operator at")  
Non-member functions  
**experimental::static_pointer_cast experimental::dynamic_pointer_castexperimental::const_pointer_castexperimental::reinterpret_pointer_cast**  
[std::hash](hash.html "cpp/experimental/shared ptr/hash")  
[Members and non-members identical to those of `std::shared_ptr`](../shared_ptr.html#identical-shared_ptr "cpp/experimental/shared ptr")  
  


template< class T, class U >   
[std::experimental::shared_ptr](../shared_ptr.html)<T>  
static_pointer_cast( const [std::experimental::shared_ptr](../shared_ptr.html)<U>& r ) noexcept; |  (1)  |  (library fundamentals TS)  
---|---|---  
template< class T, class U >   
[std::experimental::shared_ptr](../shared_ptr.html)<T>  
dynamic_pointer_cast( const [std::experimental::shared_ptr](../shared_ptr.html)<U>& r ) noexcept; |  (2)  |  (library fundamentals TS)  
template< class T, class U >   
[std::experimental::shared_ptr](../shared_ptr.html)<T>  
const_pointer_cast( const [std::experimental::shared_ptr](../shared_ptr.html)<U>& r ) noexcept; |  (3)  |  (library fundamentals TS)  
template< class T, class U >   
[std::experimental::shared_ptr](../shared_ptr.html)<T>  
reinterpret_pointer_cast( const [std::experimental::shared_ptr](../shared_ptr.html)<U>& r ) noexcept; |  (4)  |  (library fundamentals TS)  
| |   
  
Creates a new instance of std::experimental::shared_ptr whose stored pointer is obtained from r's stored pointer using a cast expression. If r is empty, so is the new `shared_ptr` (but its stored pointer is not necessarily null). 

Otherwise, the new `shared_ptr` will share ownership with r, except that it is empty if the `dynamic_cast` performed by `dynamic_pointer_cast` returns a null pointer. 

Let `Y` be typename [std::experimental::shared_ptr](../shared_ptr.html)<T>::element_type, then the resulting std::experimental::shared_ptr's stored pointer will be obtained by calling (in respective order): 

1) static_cast<Y*>(r.get()).

2) dynamic_cast<Y*>(r.get()) (if the result of the `dynamic_cast` is a null pointer value, the returned `shared_ptr` will be empty).

3) const_cast<Y*>(r.get()).

4) reinterpret_cast<Y*>(r.get()).

The behavior of these functions is undefined unless the corresponding cast from `U*` to `T*` is well formed: 

1) The behavior is undefined unless static_cast<T*>((U*)nullptr) is well formed.

2) The behavior is undefined unless dynamic_cast<T*>((U*)nullptr) is well formed.

3) The behavior is undefined unless const_cast<T*>((U*)nullptr) is well formed.

4) The behavior is undefined unless reinterpret_cast<T*>((U*)nullptr) is well formed.

### Parameters

r  |  \-  |  the pointer to convert   
---|---|---  
  
### Example

| This section is incomplete  
Reason: no example   
---|---  
  
### See also

[ (constructor)](shared_ptr.html "cpp/experimental/shared ptr/shared ptr") |  constructs new `shared_ptr`   
(public member function)   
---|---  
[ static_pointer_castdynamic_pointer_castconst_pointer_castreinterpret_pointer_cast](../../memory/shared_ptr/pointer_cast.html "cpp/memory/shared ptr/pointer cast")(C++17) |  applies [`static_cast`](../../language/static_cast.html "cpp/language/static cast"), [`dynamic_cast`](../../language/dynamic_cast.html "cpp/language/dynamic cast"), [`const_cast`](../../language/const_cast.html "cpp/language/const cast"), or [`reinterpret_cast`](../../language/reinterpret_cast.html "cpp/language/reinterpret cast") to the stored pointer   
(function template) 
