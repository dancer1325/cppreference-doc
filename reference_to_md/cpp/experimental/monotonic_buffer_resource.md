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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/lib_extensions/pmr/navbar_content&action=edit)

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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/lib_extensions/pmr/monotonic_buffer_resource/navbar_content&action=edit)

Defined in header `[<experimental/memory_resource>](../header/experimental/memory_resource.html "cpp/header/experimental/memory resource")` |  |   
---|---|---  
class monotonic_buffer_resource : public memory_resource; |  |  (library fundamentals TS)  
| |   
  
The class `std::experimental::pmr::monotonic_buffer_resource` is a special-purpose memory resource class that releases the allocated memory only when the resource is destroyed. It is intended for very fast memory allocations in situations where memory is used to build up a few objects and then is released all at once. 

`monotonic_buffer_resource` can be constructed with an initial buffer. If there is no initial buffer, or if the buffer is exhausted, additional buffers are obtained from an _upstream memory resource_ supplied at construction. The size of buffers obtained follows a geometric progression. 

`monotonic_buffer_resource` is not thread-safe. 

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/monotonic_buffer_resource&action=edit&section=1 "Edit section: Member functions")] Member functions

[ (constructor)](monotonic_buffer_resource/monotonic_buffer_resource.html "cpp/experimental/monotonic buffer resource/monotonic buffer resource") |  constructs a `monotonic_buffer_resource`   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/monotonic_buffer_resource/dsc_constructor&action=edit)  
---|---  
[ (destructor)](monotonic_buffer_resource/~monotonic_buffer_resource.html "cpp/experimental/monotonic buffer resource/~monotonic buffer resource")[virtual] |  destroys a `monotonic_buffer_resource`, releasing all allocated memory   
(virtual public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/monotonic_buffer_resource/dsc_destructor&action=edit)  
operator=[deleted] |  copy assignment operator is deleted. `monotonic_buffer_resource` is not copy assignable   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/monotonic_buffer_resource/dsc_operator%3D&action=edit)  
  
#####  Public member functions   
  
[ release](monotonic_buffer_resource/release.html "cpp/experimental/monotonic buffer resource/release") |  release all allocated memory   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/monotonic_buffer_resource/dsc_release&action=edit)  
[ upstream_resource](monotonic_buffer_resource/upstream_resource.html "cpp/experimental/monotonic buffer resource/upstream resource") |  returns a pointer to the upstream memory resource   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/monotonic_buffer_resource/dsc_upstream_resource&action=edit)  
  
#####  Protected member functions   
  
[ do_allocate](monotonic_buffer_resource/do_allocate.html "cpp/experimental/monotonic buffer resource/do allocate")[virtual] |  allocate memory   
(virtual protected member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/monotonic_buffer_resource/dsc_do_allocate&action=edit)  
[ do_deallocate](monotonic_buffer_resource/do_deallocate.html "cpp/experimental/monotonic buffer resource/do deallocate")[virtual] |  no-op   
(virtual protected member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/monotonic_buffer_resource/dsc_do_deallocate&action=edit)  
[ do_is_equal](monotonic_buffer_resource/do_is_equal.html "cpp/experimental/monotonic buffer resource/do is equal")[virtual] |  compare for equality with another `memory_resource`   
(virtual protected member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/monotonic_buffer_resource/dsc_do_is_equal&action=edit)
