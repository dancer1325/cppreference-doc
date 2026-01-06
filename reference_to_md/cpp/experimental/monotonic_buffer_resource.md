  
  


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
**monotonic_buffer_resource**  
[resource_adaptor](resource_adaptor.html "cpp/experimental/resource adaptor")  
Global memory resources  
[new_delete_resource](new_delete_resource.html "cpp/experimental/new delete resource")  
[null_memory_resource](null_memory_resource.html "cpp/experimental/null memory resource")  
[get_default_resource](get_default_resource.html "cpp/experimental/get default resource")  
[set_default_resource](set_default_resource.html "cpp/experimental/set default resource")  
Type-erased allocator support for existing classes  
[function](function.html "cpp/experimental/function")  
[packaged_task](lib_extensions/packaged_task.html "cpp/experimental/lib extensions/packaged task")  
[promise](lib_extensions/promise.html "cpp/experimental/lib extensions/promise")  
  


**`std::experimental::pmr::monotonic_buffer_resource`**

[monotonic_buffer_resource::monotonic_buffer_resource](monotonic_buffer_resource/monotonic_buffer_resource.html "cpp/experimental/monotonic buffer resource/monotonic buffer resource")  
---  
[monotonic_buffer_resource::~monotonic_buffer_resource](monotonic_buffer_resource/~monotonic_buffer_resource.html "cpp/experimental/monotonic buffer resource/~monotonic buffer resource")  
Public member functions  
[monotonic_buffer_resource::release](monotonic_buffer_resource/release.html "cpp/experimental/monotonic buffer resource/release")  
[monotonic_buffer_resource::upstream_resource](monotonic_buffer_resource/upstream_resource.html "cpp/experimental/monotonic buffer resource/upstream resource")  
Protected member functions  
[monotonic_buffer_resource::do_allocate](monotonic_buffer_resource/do_allocate.html "cpp/experimental/monotonic buffer resource/do allocate")  
[monotonic_buffer_resource::do_deallocate](monotonic_buffer_resource/do_deallocate.html "cpp/experimental/monotonic buffer resource/do deallocate")  
[monotonic_buffer_resource::do_is_equal](monotonic_buffer_resource/do_is_equal.html "cpp/experimental/monotonic buffer resource/do is equal")  
  


Defined in header `[<experimental/memory_resource>](../header/experimental/memory_resource.html "cpp/header/experimental/memory resource")` |  |   
---|---|---  
class monotonic_buffer_resource : public memory_resource; |  |  (library fundamentals TS)  
| |   
  
The class `std::experimental::pmr::monotonic_buffer_resource` is a special-purpose memory resource class that releases the allocated memory only when the resource is destroyed. It is intended for very fast memory allocations in situations where memory is used to build up a few objects and then is released all at once. 

`monotonic_buffer_resource` can be constructed with an initial buffer. If there is no initial buffer, or if the buffer is exhausted, additional buffers are obtained from an _upstream memory resource_ supplied at construction. The size of buffers obtained follows a geometric progression. 

`monotonic_buffer_resource` is not thread-safe. 

### Member functions

[ (constructor)](monotonic_buffer_resource/monotonic_buffer_resource.html "cpp/experimental/monotonic buffer resource/monotonic buffer resource") |  constructs a `monotonic_buffer_resource`   
(public member function)   
---|---  
[ (destructor)](monotonic_buffer_resource/~monotonic_buffer_resource.html "cpp/experimental/monotonic buffer resource/~monotonic buffer resource")[virtual] |  destroys a `monotonic_buffer_resource`, releasing all allocated memory   
(virtual public member function)   
operator=[deleted] |  copy assignment operator is deleted. `monotonic_buffer_resource` is not copy assignable   
(public member function)   
  
#####  Public member functions   
  
[ release](monotonic_buffer_resource/release.html "cpp/experimental/monotonic buffer resource/release") |  release all allocated memory   
(public member function)   
[ upstream_resource](monotonic_buffer_resource/upstream_resource.html "cpp/experimental/monotonic buffer resource/upstream resource") |  returns a pointer to the upstream memory resource   
(public member function)   
  
#####  Protected member functions   
  
[ do_allocate](monotonic_buffer_resource/do_allocate.html "cpp/experimental/monotonic buffer resource/do allocate")[virtual] |  allocate memory   
(virtual protected member function)   
[ do_deallocate](monotonic_buffer_resource/do_deallocate.html "cpp/experimental/monotonic buffer resource/do deallocate")[virtual] |  no-op   
(virtual protected member function)   
[ do_is_equal](monotonic_buffer_resource/do_is_equal.html "cpp/experimental/monotonic buffer resource/do is equal")[virtual] |  compare for equality with another `memory_resource`   
(virtual protected member function) 
