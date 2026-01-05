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
  


[Polymorphic allocator library](../memory.html "cpp/experimental/memory")

[polymorphic_allocator](../polymorphic_allocator.html "cpp/experimental/polymorphic allocator")  
---  
[Convenience aliases for containers using `polymorphic_allocator`](../lib_extensions/pmr_container.html "cpp/experimental/lib extensions/pmr container")  
Memory resource classes  
[memory_resource](../memory_resource.html "cpp/experimental/memory resource")  
[synchronized_pool_resource](../synchronized_pool_resource.html "cpp/experimental/synchronized pool resource")  
[unsynchronized_pool_resource](../unsynchronized_pool_resource.html "cpp/experimental/unsynchronized pool resource")  
[monotonic_buffer_resource](../monotonic_buffer_resource.html "cpp/experimental/monotonic buffer resource")  
[resource_adaptor](../resource_adaptor.html "cpp/experimental/resource adaptor")  
Global memory resources  
[new_delete_resource](../new_delete_resource.html "cpp/experimental/new delete resource")  
[null_memory_resource](../null_memory_resource.html "cpp/experimental/null memory resource")  
[get_default_resource](../get_default_resource.html "cpp/experimental/get default resource")  
[set_default_resource](../set_default_resource.html "cpp/experimental/set default resource")  
Type-erased allocator support for existing classes  
[function](../function.html "cpp/experimental/function")  
[packaged_task](../lib_extensions/packaged_task.html "cpp/experimental/lib extensions/packaged task")  
[promise](../lib_extensions/promise.html "cpp/experimental/lib extensions/promise")  
  


[`std::experimental::pmr::polymorphic_allocator`](../polymorphic_allocator.html "cpp/experimental/polymorphic allocator")

Member functions  
---  
[polymorphic_allocator::polymorphic_allocator](polymorphic_allocator.html "cpp/experimental/polymorphic allocator/polymorphic allocator")  
[polymorphic_allocator::operator=](operator=.html "cpp/experimental/polymorphic allocator/operator=")  
[polymorphic_allocator::allocate](allocate.html "cpp/experimental/polymorphic allocator/allocate")  
[polymorphic_allocator::deallocate](deallocate.html "cpp/experimental/polymorphic allocator/deallocate")  
**polymorphic_allocator::construct**  
[polymorphic_allocator::destroy](destroy.html "cpp/experimental/polymorphic allocator/destroy")  
[polymorphic_allocator::select_on_container_copy_construction](select_on_container_copy_construction.html "cpp/experimental/polymorphic allocator/select on container copy construction")  
[polymorphic_allocator::resource](resource.html "cpp/experimental/polymorphic allocator/resource")  
Non-member functions  
[operator==operator!=](operator_eq.html "cpp/experimental/polymorphic allocator/operator eq")  
  


template< class U, class... Args >  
void construct( U* p, Args&&... args ); |  (1)  |  (library fundamentals TS)  
---|---|---  
template< class T1, class T2, class... Args1, class... Args2 >  
void construct( [std::pair](../../utility/pair.html)<T1, T2>* p,  
[std::piecewise_construct_t](../../utility/piecewise_construct_t.html),  
[std::tuple](../../utility/tuple.html)<Args1...> x,  
[std::tuple](../../utility/tuple.html)<Args2...> y ); |  (2)  |  (library fundamentals TS)  
template< class T1, class T2 >  
void construct( [std::pair](../../utility/pair.html)<T1, T2>* p ); |  (3)  |  (library fundamentals TS)  
template< class T1, class T2, class U, class V >  
void construct( [std::pair](../../utility/pair.html)<T1, T2>* p, U&& x, V&& y ); |  (4)  |  (library fundamentals TS)  
template< class T1, class T2, class U, class V >  
void construct( [std::pair](../../utility/pair.html)<T1, T2>* p, const [std::pair](../../utility/pair.html)<U, V>& xy ); |  (5)  |  (library fundamentals TS)  
template< class T1, class T2, class U, class V >  
void construct( [std::pair](../../utility/pair.html)<T1, T2>* p, [std::pair](../../utility/pair.html)<U, V>&& xy ); |  (6)  |  (library fundamentals TS)  
| |   
  
Constructs an object in allocated, but not initialized storage pointed to by p the provided constructor arguments. If the object is of type that itself uses allocators, or if it is std::pair, passes `this->resource()` down to the constructed object. 

1) If [std::uses_allocator](../../memory/uses_allocator.html)<U, memory_resource*>::value == false (the type `U` does not use allocators) and [std::is_constructible](../../types/is_constructible.html)<U, Args...>::value == true, then constructs the object as if by ::new((void *) p) U([std::forward](../../utility/forward.html)<Args>(args)...);. 

Otherwise, if [std::uses_allocator](../../memory/uses_allocator.html)<U, memory_resource*>::value == true (the type `U` uses allocators, e.g. it is a container) and [std::is_constructible](../../types/is_constructible.html)<U, [std::allocator_arg_t](../../memory/allocator_arg_t.html), memory_resource*, Args...>::value == true, then constructs the object as if by ::new((void *) p) U([std::allocator_arg](../../memory/allocator_arg.html), this->resource(), [std::forward](../../utility/forward.html)<Args>(args)...);. 

Otherwise, if [std::uses_allocator](../../memory/uses_allocator.html)<U, memory_resource*>::value == true (the type `U` uses allocators, e.g. it is a container) and [std::is_constructible](../../types/is_constructible.html)<U, Args..., memory_resource*>::value == true, then constructs the object as if by ::new((void *) p) U([std::forward](../../utility/forward.html)<Args>(args)..., this->resource());. 

Otherwise, the program is ill-formed. 

2) First, if either `T1` or `T2` is allocator-aware, modifies the tuples x and y to include `this->resource()`, resulting in the two new tuples `xprime` and `yprime`, according to the following three rules: 

2a) if `T1` is not allocator-aware ([std::uses_allocator](../../memory/uses_allocator.html)<T1, memory_resource*>::value == false) and [std::is_constructible](../../types/is_constructible.html)<T1, Args1...>::value == true, then `xprime` is x, unmodified. 

2b) if `T1` is allocator-aware ([std::uses_allocator](../../memory/uses_allocator.html)<T1, memory_resource*>::value == true), and its constructor takes an allocator tag ([std::is_constructible](../../types/is_constructible.html)<T1, [std::allocator_arg_t](../../memory/allocator_arg_t.html), memory_resource*, Args1...>::value == true, then `xprime` is [std::tuple_cat](../../utility/tuple/tuple_cat.html)([std::make_tuple](../../utility/tuple/make_tuple.html)([std::allocator_arg](../../memory/allocator_arg.html), this->resource()), std::move(x)). 

2c) if `T1` is allocator-aware ([std::uses_allocator](../../memory/uses_allocator.html)<T1, memory_resource*>::value == true), and its constructor takes the allocator as the last argument ([std::is_constructible](../../types/is_constructible.html)<T1, Args1..., memory_resource*>::value == true), then `xprime` is [std::tuple_cat](../../utility/tuple/tuple_cat.html)(std::move(x), [std::make_tuple](../../utility/tuple/make_tuple.html)(this->resource())). 

2d) Otherwise, the program is ill-formed. 

Same rules apply to `T2` and the replacement of y with `yprime`. 

Once `xprime` and `yprime` are constructed, constructs the pair p in allocated storage as if by ::new((void *) p) pair<T1, T2>([std::piecewise_construct](../../utility/piecewise_construct.html), std::move(xprime), std::move(yprime));. 

3) Equivalent to construct(p, [std::piecewise_construct](../../utility/piecewise_construct.html), [std::tuple](../../utility/tuple.html)<>(), [std::tuple](../../utility/tuple.html)<>()), that is, passes the memory resource on to the pair's member types if they accept them. 

4) Equivalent to 

construct(p, [std::piecewise_construct](../../utility/piecewise_construct.html), [std::forward_as_tuple](../../utility/tuple/forward_as_tuple.html)([std::forward](../../utility/forward.html)<U>(x)),  
[std::forward_as_tuple](../../utility/tuple/forward_as_tuple.html)([std::forward](../../utility/forward.html)<V>(y)))

5) Equivalent to 

construct(p, [std::piecewise_construct](../../utility/piecewise_construct.html), [std::forward_as_tuple](../../utility/tuple/forward_as_tuple.html)(xy.first),  
[std::forward_as_tuple](../../utility/tuple/forward_as_tuple.html)(xy.second))

6) Equivalent to 

construct(p, [std::piecewise_construct](../../utility/piecewise_construct.html), [std::forward_as_tuple](../../utility/tuple/forward_as_tuple.html)([std::forward](../../utility/forward.html)<U>(xy.first)),  
[std::forward_as_tuple](../../utility/tuple/forward_as_tuple.html)([std::forward](../../utility/forward.html)<V>(xy.second)))

## Contents

  * [1 Parameters](construct.html#Parameters)
  * [2 Return value](construct.html#Return_value)
  * [3 Notes](construct.html#Notes)
  * [4 See also](construct.html#See_also)

  
---  
  
### Parameters

p  |  \-  |  pointer to allocated, but not initialized storage   
---|---|---  
args...  |  \-  |  the constructor arguments to pass to the constructor of `T`  
x  |  \-  |  the constructor arguments to pass to the constructor of `T1`  
y  |  \-  |  the constructor arguments to pass to the constructor of `T2`  
xy  |  \-  |  the pair whose two members are the constructor arguments for `T1` and `T2`  
  
### Return value

(none) 

### Notes

This function is called (through [std::allocator_traits](../../memory/allocator_traits.html "cpp/memory/allocator traits")) by any allocator-aware object, such as [std::vector](../../container/vector.html "cpp/container/vector"), that was given a [std::polymorphic_allocator](../../memory/polymorphic_allocator.html "cpp/memory/polymorphic allocator") as the allocator to use. Since `memory_resource*` implicitly converts to `polymorphic_allocator`, the memory resource pointer will propagate to any allocator-aware subobjects using polymorphic allocators. 

### See also

[ construct](../../memory/allocator_traits/construct.html "cpp/memory/allocator traits/construct")[static] |  constructs an object in the allocated storage   
(function template)   
---|---  
[ construct](../../memory/allocator/construct.html "cpp/memory/allocator/construct")(until C++20) |  constructs an object in allocated storage   
(public member function of `std::allocator<T>`) 
