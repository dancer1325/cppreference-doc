[C++](../../cpp.html "cpp")

[Compiler support](../compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](../freestanding.html "cpp/freestanding")  
[Language](../language.html "cpp/language")  
[Standard library](../standard_library.html "cpp/standard library")  
[Standard library headers](../headers.html "cpp/header")  
[Named requirements](../iterator/concepts.html "cpp/named req")  
[Feature test macros](feature_test.html "cpp/feature test") (C++20)  
[Language support library](../utility.html#Language_support "cpp/utility")  
[Concepts library](../concepts.html "cpp/concepts") (C++20)  
[Diagnostics library](../error.html "cpp/error")  
[Memory management library](../memory.html "cpp/memory")  
[Metaprogramming library](../meta.html "cpp/meta") (C++11)  
[General utilities library](../utility.html "cpp/utility")  
[Containers library](../container.html "cpp/container")  
[Iterators library](../iterator.html "cpp/iterator")  
[Ranges library](../ranges.html "cpp/ranges") (C++20)  
[Algorithms library](../algorithm.html "cpp/algorithm")  
[Strings library](../string.html "cpp/string")  
[Text processing library](../text.html "cpp/text")  
[Numerics library](../numeric.html "cpp/numeric")  
[Date and time library](../chrono.html "cpp/chrono")  
[Input/output library](../io.html "cpp/io")  
[Filesystem library](../filesystem.html "cpp/filesystem") (C++17)  
[Concurrency support library](../atomic.html "cpp/thread") (C++11)  
[Execution control library](execution.html "cpp/execution") (C++26)  
[Technical specifications](../experimental.html "cpp/experimental")  
[Symbols index](../symbol_index.html "cpp/symbol index")  
[External libraries](../links/libs.html "cpp/links/libs")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/navbar_content&action=edit)

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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/lib_extensions/navbar_content&action=edit)

[Polymorphic allocator library](memory.html "cpp/experimental/memory")

[polymorphic_allocator](polymorphic_allocator.html "cpp/experimental/polymorphic allocator")  
---  
[Convenience aliases for containers using `polymorphic_allocator`](lib_extensions/pmr_container.html "cpp/experimental/lib extensions/pmr container")  
Memory resource classes  
[memory_resource](memory_resource.html "cpp/experimental/memory resource")  
[synchronized_pool_resource](synchronized_pool_resource.html "cpp/experimental/synchronized pool resource")  
**unsynchronized_pool_resource**  
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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/lib_extensions/pmr/navbar_content&action=edit)

**`std::experimental::pmr::unsynchronized_pool_resource`**

[unsynchronized_pool_resource::unsynchronized_pool_resource](unsynchronized_pool_resource/unsynchronized_pool_resource.html "cpp/experimental/unsynchronized pool resource/unsynchronized pool resource")  
---  
[unsynchronized_pool_resource::~unsynchronized_pool_resource](unsynchronized_pool_resource/~unsynchronized_pool_resource.html "cpp/experimental/unsynchronized pool resource/~unsynchronized pool resource")  
Public member functions  
[unsynchronized_pool_resource::release](unsynchronized_pool_resource/release.html "cpp/experimental/unsynchronized pool resource/release")  
[unsynchronized_pool_resource::upstream_resource](unsynchronized_pool_resource/upstream_resource.html "cpp/experimental/unsynchronized pool resource/upstream resource")  
[unsynchronized_pool_resource::options](unsynchronized_pool_resource/options.html "cpp/experimental/unsynchronized pool resource/options")  
Protected member functions  
[unsynchronized_pool_resource::do_allocate](unsynchronized_pool_resource/do_allocate.html "cpp/experimental/unsynchronized pool resource/do allocate")  
[unsynchronized_pool_resource::do_deallocate](unsynchronized_pool_resource/do_deallocate.html "cpp/experimental/unsynchronized pool resource/do deallocate")  
[unsynchronized_pool_resource::do_is_equal](unsynchronized_pool_resource/do_is_equal.html "cpp/experimental/unsynchronized pool resource/do is equal")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/lib_extensions/pmr/unsynchronized_pool_resource/navbar_content&action=edit)

Defined in header `[<experimental/memory_resource>](../header/experimental/memory_resource.html "cpp/header/experimental/memory resource")` |  |   
---|---|---  
class unsynchronized_pool_resource : public memory_resource; |  |  (library fundamentals TS)  
| |   
  
The class `std::experimental::pmr::unsynchronized_pool_resource` is a general-purpose memory resource class with the following properties: 

  * It owns the allocated memory and frees it on destruction, even if `deallocate` has not been called for some of the allocated blocks. 
  * It consists of a collection of _pools_ that serves request for different block sizes. Each pool manages a collection of _chunks_ that are then divided into blocks of uniform size. 
  * Calls to [`do_allocate`](unsynchronized_pool_resource/do_allocate.html "cpp/experimental/unsynchronized pool resource/do allocate") are dispatched to the pool serving the smallest blocks accommodating the requested size. 
  * Exhausting memory in the pool causes the next allocation request for that pool to allocate an additional chunk of memory from the _upstream allocator_ to replenish the pool. The chunk size obtained increases geometrically. 
  * Allocations requests that exceed the largest block size are served from the _upstream allocator_ directly. 
  * The largest block size and maximum chunk size may be tuned by passing a std::experimental::pmr::pool_options struct to its constructor. 



`unsynchronized_pool_resource` is not thread-safe, and cannot be accessed from multiple threads simultaneously; use [`synchronized_pool_resource`](synchronized_pool_resource.html "cpp/experimental/synchronized pool resource") if access from multiple threads is required. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/unsynchronized_pool_resource&action=edit&section=1 "Edit section: Member functions")] Member functions

[ (constructor)](unsynchronized_pool_resource/unsynchronized_pool_resource.html "cpp/experimental/unsynchronized pool resource/unsynchronized pool resource") |  constructs an `unsynchronized_pool_resource`   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/unsynchronized_pool_resource/dsc_constructor&action=edit)  
---|---  
[ (destructor)](unsynchronized_pool_resource/~unsynchronized_pool_resource.html "cpp/experimental/unsynchronized pool resource/~unsynchronized pool resource")[virtual] |  destroys an `unsynchronized_pool_resource`, releasing all allocated memory   
(virtual public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/unsynchronized_pool_resource/dsc_destructor&action=edit)  
operator=[deleted] |  copy assignment operator is deleted. `unsynchronized_pool_resource` is not copy assignable   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/unsynchronized_pool_resource/dsc_operator%3D&action=edit)  
  
#####  Public member functions   
  
[ release](unsynchronized_pool_resource/release.html "cpp/experimental/unsynchronized pool resource/release") |  release all allocated memory   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/unsynchronized_pool_resource/dsc_release&action=edit)  
[ upstream_resource](unsynchronized_pool_resource/upstream_resource.html "cpp/experimental/unsynchronized pool resource/upstream resource") |  returns a pointer to the upstream memory resource   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/unsynchronized_pool_resource/dsc_upstream_resource&action=edit)  
[ options](unsynchronized_pool_resource/options.html "cpp/experimental/unsynchronized pool resource/options") |  returns the options that control the pooling behavior of this resource   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/unsynchronized_pool_resource/dsc_options&action=edit)  
  
#####  Protected member functions   
  
[ do_allocate](unsynchronized_pool_resource/do_allocate.html "cpp/experimental/unsynchronized pool resource/do allocate")[virtual] |  allocate memory   
(virtual protected member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/unsynchronized_pool_resource/dsc_do_allocate&action=edit)  
[ do_deallocate](unsynchronized_pool_resource/do_deallocate.html "cpp/experimental/unsynchronized pool resource/do deallocate")[virtual] |  return memory to the pool   
(virtual protected member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/unsynchronized_pool_resource/dsc_do_deallocate&action=edit)  
[ do_is_equal](unsynchronized_pool_resource/do_is_equal.html "cpp/experimental/unsynchronized pool resource/do is equal")[virtual] |  compare for equality with another `memory_resource`   
(virtual protected member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/unsynchronized_pool_resource/dsc_do_is_equal&action=edit)
