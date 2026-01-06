  
  


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
**synchronized_pool_resource**  
[unsynchronized_pool_resource](unsynchronized_pool_resource.html "cpp/experimental/unsynchronized pool resource")  
[monotonic_buffer_resource](monotonic_buffer_resource.html "cpp/experimental/monotonic buffer resource")  
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
  


**`std::experimental::pmr::synchronized_pool_resource`**

[synchronized_pool_resource::synchronized_pool_resource](synchronized_pool_resource/synchronized_pool_resource.html "cpp/experimental/synchronized pool resource/synchronized pool resource")  
---  
[synchronized_pool_resource::~synchronized_pool_resource](synchronized_pool_resource/~synchronized_pool_resource.html "cpp/experimental/synchronized pool resource/~synchronized pool resource")  
Public member functions  
[synchronized_pool_resource::release](synchronized_pool_resource/release.html "cpp/experimental/synchronized pool resource/release")  
[synchronized_pool_resource::upstream_resource](synchronized_pool_resource/upstream_resource.html "cpp/experimental/synchronized pool resource/upstream resource")  
[synchronized_pool_resource::options](synchronized_pool_resource/options.html "cpp/experimental/synchronized pool resource/options")  
Protected member functions  
[synchronized_pool_resource::do_allocate](synchronized_pool_resource/do_allocate.html "cpp/experimental/synchronized pool resource/do allocate")  
[synchronized_pool_resource::do_deallocate](synchronized_pool_resource/do_deallocate.html "cpp/experimental/synchronized pool resource/do deallocate")  
[synchronized_pool_resource::do_is_equal](synchronized_pool_resource/do_is_equal.html "cpp/experimental/synchronized pool resource/do is equal")  
  


Defined in header `[<experimental/memory_resource>](../header/experimental/memory_resource.html "cpp/header/experimental/memory resource")` |  |   
---|---|---  
class synchronized_pool_resource : public memory_resource; |  |  (library fundamentals TS)  
| |   
  
The class `std::experimental::pmr::synchronized_pool_resource` is a general-purpose memory resource class with the following properties: 

  * It owns the allocated memory and frees it on destruction, even if `deallocate` has not been called for some of the allocated blocks. 
  * It consists of a collection of _pools_ that serves request for different block sizes. Each pool manages a collection of _chunks_ that are then divided into blocks of uniform size. 
  * Calls to [`do_allocate`](synchronized_pool_resource/do_allocate.html "cpp/experimental/synchronized pool resource/do allocate") are dispatched to the pool serving the smallest blocks accommodating the requested size. 
  * Exhausting memory in the pool causes the next allocation request for that pool to allocate an additional chunk of memory from the _upstream allocator_ to replenish the pool. The chunk size obtained increases geometrically. 
  * Allocations requests that exceed the largest block size are served from the _upstream allocator_ directly. 
  * The largest block size and maximum chunk size may be tuned by passing a std::experimental::pmr::pool_options struct to its constructor. 



`synchronized_pool_resource` may be accessed from multiple threads without external synchronization, and may have thread-specific pools to reduce synchronization costs. If the memory resource is only accessed from one thread, [`unsynchronized_pool_resource`](unsynchronized_pool_resource.html "cpp/experimental/unsynchronized pool resource") is more efficient. 

### Member functions

[ (constructor)](synchronized_pool_resource/synchronized_pool_resource.html "cpp/experimental/synchronized pool resource/synchronized pool resource") |  constructs a `synchronized_pool_resource`   
(public member function)   
---|---  
[ (destructor)](synchronized_pool_resource/~synchronized_pool_resource.html "cpp/experimental/synchronized pool resource/~synchronized pool resource")[virtual] |  destroys a `synchronized_pool_resource`, releasing all allocated memory   
(virtual public member function)   
operator=[deleted] |  copy assignment operator is deleted. `synchronized_pool_resource` is not copy assignable   
(public member function)   
  
#####  Public member functions   
  
[ release](synchronized_pool_resource/release.html "cpp/experimental/synchronized pool resource/release") |  release all allocated memory   
(public member function)   
[ upstream_resource](synchronized_pool_resource/upstream_resource.html "cpp/experimental/synchronized pool resource/upstream resource") |  returns a pointer to the upstream memory resource   
(public member function)   
[ options](synchronized_pool_resource/options.html "cpp/experimental/synchronized pool resource/options") |  returns the options that control the pooling behavior of this resource   
(public member function)   
  
#####  Protected member functions   
  
[ do_allocate](synchronized_pool_resource/do_allocate.html "cpp/experimental/synchronized pool resource/do allocate")[virtual] |  allocate memory   
(virtual protected member function)   
[ do_deallocate](synchronized_pool_resource/do_deallocate.html "cpp/experimental/synchronized pool resource/do deallocate")[virtual] |  return memory to the pool   
(virtual protected member function)   
[ do_is_equal](synchronized_pool_resource/do_is_equal.html "cpp/experimental/synchronized pool resource/do is equal")[virtual] |  compare for equality with another `memory_resource`   
(virtual protected member function) 
