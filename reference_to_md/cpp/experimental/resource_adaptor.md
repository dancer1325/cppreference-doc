  
  


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
  


[Library fundamentals](memory.html "cpp/experimental/lib extensions")

[experimental::optional](optional.html "cpp/experimental/optional")  
---  
[experimental::any](any.html "cpp/experimental/any")  
[experimental::basic_string_view](basic_string_view.html "cpp/experimental/basic string view")  
[experimental::sample](sample.html "cpp/experimental/sample")  
[experimental::shared_ptr](shared_ptr.html "cpp/experimental/shared ptr")  
[experimental::weak_ptr](weak_ptr.html "cpp/experimental/weak ptr")  
[experimental::apply](apply.html "cpp/experimental/apply")  
[experimental::invocation_typeexperimental::raw_invocation_type](invocation_type.html "cpp/experimental/invocation type")  
[experimental::search](search.html "cpp/experimental/search")  
[experimental::default_searcherexperimental::make_default_searcher](default_searcher.html "cpp/experimental/default searcher")  
[experimental::boyer_moore_searcherexperimental::make_boyer_moore_searcher](boyer_moore_searcher.html "cpp/experimental/boyer moore searcher")  
[experimental::boyer_moore_horspool_searcherexperimental::make_boyer_moore_horspool_searcher](boyer_moore_horspool_searcher.html "cpp/experimental/boyer moore horspool searcher")  
[Type-erased and polymorphic allocators](memory.html "cpp/experimental/memory")  
[Variable templates for type traits](type_trait_variable_templates.html "cpp/experimental/type trait variable templates")  
  


[Polymorphic allocator library](memory.html "cpp/experimental/memory")

[polymorphic_allocator](polymorphic_allocator.html "cpp/experimental/polymorphic allocator")  
---  
[Convenience aliases for containers using `polymorphic_allocator`](lib_extensions/pmr_container.html "cpp/experimental/lib extensions/pmr container")  
Memory resource classes  
[memory_resource](memory_resource.html "cpp/experimental/memory resource")  
[synchronized_pool_resource](synchronized_pool_resource.html "cpp/experimental/synchronized pool resource")  
[unsynchronized_pool_resource](unsynchronized_pool_resource.html "cpp/experimental/unsynchronized pool resource")  
[monotonic_buffer_resource](monotonic_buffer_resource.html "cpp/experimental/monotonic buffer resource")  
**resource_adaptor**  
Global memory resources  
[new_delete_resource](new_delete_resource.html "cpp/experimental/new delete resource")  
[null_memory_resource](null_memory_resource.html "cpp/experimental/null memory resource")  
[get_default_resource](get_default_resource.html "cpp/experimental/get default resource")  
[set_default_resource](set_default_resource.html "cpp/experimental/set default resource")  
Type-erased allocator support for existing classes  
[function](function.html "cpp/experimental/function")  
[packaged_task](lib_extensions/packaged_task.html "cpp/experimental/lib extensions/packaged task")  
[promise](lib_extensions/promise.html "cpp/experimental/lib extensions/promise")  
  


Defined in header `[<experimental/memory_resource>](../header/experimental/memory_resource.html "cpp/header/experimental/memory resource")` |  |   
---|---|---  
template< class Alloc >  
using resource_adaptor = /*resource-adaptor-imp*/<  
typename [std::allocator_traits](../memory/allocator_traits.html)<Alloc>::  
template rebind_alloc<char>>; |  |  (library fundamentals TS)  
template< class Alloc >  
class /*resource-adaptor-imp*/ : public memory_resource; // for exposition only |  |  (library fundamentals TS)  
| |   
  
The alias template `resource_adaptor` adapts the allocator type `Alloc` with a `memory_resource` interface. The allocator is rebound to a `char` value type before it is actually adapted (using the _`resource-adaptor-imp`_ class template), so that adapting specializations of the same allocator template always yields the same type, regardless of the value type the allocator template is originally instantiated with. 

`resource_adaptor` is defined in namespace `std::experimental::pmr`, and the base type `memory_resorce` in this page is [std::experimental::pmr::memory_resource](memory_resource.html "cpp/experimental/memory resource").  | (library fundamentals TS)  
(until library fundamentals TS v3)  
---|---  
`resource_adaptor` is defined in namespace `std::pmr::experimental`, and the base type `memory_resorce` in this page is [std::pmr::memory_resource](../memory/memory_resource.html "cpp/memory/memory resource").  | (library fundamentals TS v3)  
  
_`resource-adaptor-imp`_ is a class template whose members are described below. The name _`resource-adaptor-imp`_ is for exposition purposes only and not normative. 

In addition to meeting the [Allocator](../named_req/Allocator.html "cpp/named req/Allocator") requirements, `Alloc` must additionally satisfy the following requirements: 

  * [std::allocator_traits](../memory/allocator_traits.html)<Alloc>::pointer shall be identical to Alloc::value_type*. 
  * [std::allocator_traits](../memory/allocator_traits.html)<Alloc>::const_pointer shall be identical to Alloc::value_type const*. 
  * [std::allocator_traits](../memory/allocator_traits.html)<Alloc>::void_pointer shall be identical to void*. 
  * [std::allocator_traits](../memory/allocator_traits.html)<Alloc>::const_const_pointer shall be identical to void const*. 



### Member types of _resource-adaptor-imp_

Member type  |  Definition   
---|---  
`allocator_type` |  `Alloc`  
  
### Member functions of _resource-adaptor-imp_

## _resource-adaptor-imp_ ::_resource-adaptor-imp_

/*resource-adaptor-imp*/() = default; |  (1)  |  (library fundamentals TS)  
---|---|---  
/*resource-adaptor-imp*/(const /*resource-adaptor-imp*/& other)  
= default; |  (2)  |  (library fundamentals TS)  
/*resource-adaptor-imp*/(/*resource-adaptor-imp*/&& other)  
= default; |  (3)  |  (library fundamentals TS)  
explicit /*resource-adaptor-imp*/(const Alloc& a2); |  (4)  |  (library fundamentals TS)  
explicit /*resource-adaptor-imp*/(Alloc&& a2); |  (5)  |  (library fundamentals TS)  
| |   
  
1) Default constructor. Default constructs the wrapped allocator.

2) Copy constructor. Copy constructs the wrapped allocator from the allocator wrapped by `other`.

3) Move constructor. Move constructs the wrapped allocator from the allocator wrapped by `other`.

4) Initializes the wrapped allocator with `a2`.

5) Initializes the wrapped allocator with std::move(a2).

####  Parameters

other  |  \-  |  another _`resource-adaptor-imp`_ object to copy or move from   
---|---|---  
a2  |  \-  |  another `Alloc` object to copy or move from   
  
## _resource-adaptor-imp_ ::get_allocator 

allocator_type get_allocator() const; |  |  (library fundamentals TS)  
---|---|---  
| |   
  
Returns a copy of the wrapped allocator. 

## _resource-adaptor-imp_ ::operator= 

/*resource-adaptor-imp*/& operator=(const /*resource-adaptor-imp*/& other)  
= default; |  |  (library fundamentals TS)  
---|---|---  
| |   
  
Defaulted copy assignment operator. Copy assigns the wrapped allocator from that of `other`. 

## _resource-adaptor-imp_ ::do_allocate 

protected:  
virtual void* do_allocate([std::size_t](../types/size_t.html) bytes, [std::size_t](../types/size_t.html) alignment); |  |  (library fundamentals TS)  
---|---|---  
| |   
  
Allocates memory using the `allocate` member function of the wrapped allocator. 

## _resource-adaptor-imp_ ::do_deallocate 

protected:  
virtual void do_deallocate(void *p, [std::size_t](../types/size_t.html) bytes, [std::size_t](../types/size_t.html) alignment); |  |  (library fundamentals TS)  
---|---|---  
| |   
  
Deallocates the storage pointed to by `p` using the `deallocate` member function of the wrapped allocator. 

`p` must have been allocated using the `allocate` member function of an allocator that compares equal to the wrapped allocator, and must not have been subsequently deallocated. 

## _resource-adaptor-imp_ ::do_is_equal 

protected:  
virtual bool do_is_equal(const memory_resource& other) const noexcept; |  |  (library fundamentals TS)  
---|---|---  
| |   
  
Let `p` be dynamic_cast<const /*resource-adaptor-imp*/*>(&other). If `p` is a null pointer value, returns false. Otherwise, return the result of comparing the allocators wrapped by *p and *this using operator==. 
