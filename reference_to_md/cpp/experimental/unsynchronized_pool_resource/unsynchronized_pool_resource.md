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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/lib_extensions/pmr/navbar_content&action=edit)

[`std::experimental::pmr::unsynchronized_pool_resource`](../unsynchronized_pool_resource.html "cpp/experimental/unsynchronized pool resource")

**unsynchronized_pool_resource::unsynchronized_pool_resource**  
---  
[unsynchronized_pool_resource::~unsynchronized_pool_resource](~unsynchronized_pool_resource.html "cpp/experimental/unsynchronized pool resource/~unsynchronized pool resource")  
Public member functions  
[unsynchronized_pool_resource::release](release.html "cpp/experimental/unsynchronized pool resource/release")  
[unsynchronized_pool_resource::upstream_resource](upstream_resource.html "cpp/experimental/unsynchronized pool resource/upstream resource")  
[unsynchronized_pool_resource::options](options.html "cpp/experimental/unsynchronized pool resource/options")  
Protected member functions  
[unsynchronized_pool_resource::do_allocate](do_allocate.html "cpp/experimental/unsynchronized pool resource/do allocate")  
[unsynchronized_pool_resource::do_deallocate](do_deallocate.html "cpp/experimental/unsynchronized pool resource/do deallocate")  
[unsynchronized_pool_resource::do_is_equal](do_is_equal.html "cpp/experimental/unsynchronized pool resource/do is equal")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/lib_extensions/pmr/unsynchronized_pool_resource/navbar_content&action=edit)

unsynchronized_pool_resource(); |  (1)  |  (library fundamentals TS)  
---|---|---  
explicit unsynchronized_pool_resource( memory_resource* upstream ); |  (2)  |  (library fundamentals TS)  
explicit unsynchronized_pool_resource( const pool_options& opts ); |  (3)  |  (library fundamentals TS)  
unsynchronized_pool_resource( const pool_options& opts,  
memory_resource* upstream ); |  (4)  |  (library fundamentals TS)  
unsynchronized_pool_resource( const unsynchronized_pool_resource& ) = delete; |  (5)  |  (library fundamentals TS)  
| |   
  
Constructs an `unsynchronized_pool_resource`. 

1-4) Constructs an `unsynchronized_pool_resource` using the specified upstream memory resource and tuned according to the specified options. The resulting object holds a copy of upstream but does not own the resource to which upstream points.  
The overloads not taking opts as a parameter uses a default constructed instance of [`pool_options`](../pool_options.html "cpp/experimental/pool options") as the options. The overloads not taking upstream as a parameter uses the return value of [std::experimental::pmr::get_default_resource](../get_default_resource.html)() as the upstream memory resource.

5) Copy constructor is deleted.

### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/unsynchronized_pool_resource/unsynchronized_pool_resource&action=edit&section=1 "Edit section: Parameters")] Parameters

opts  |  \-  |  a pool_options struct containing the constructor options   
---|---|---  
upstream  |  \-  |  the upstream memory resource to use   
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/unsynchronized_pool_resource/unsynchronized_pool_resource&action=edit&section=2 "Edit section: Exceptions")] Exceptions

1-4) Throws only if a call to the `allocate()` function of the upstream resource throws. It is unspecified if or under what conditions such a call takes place.
