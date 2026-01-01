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

**polymorphic_allocator**  
---  
[Convenience aliases for containers using `polymorphic_allocator`](lib_extensions/pmr_container.html "cpp/experimental/lib extensions/pmr container")  
Memory resource classes  
[memory_resource](memory_resource.html "cpp/experimental/memory resource")  
[synchronized_pool_resource](synchronized_pool_resource.html "cpp/experimental/synchronized pool resource")  
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
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/lib_extensions/pmr/navbar_content&action=edit)

**`std::experimental::pmr::polymorphic_allocator`**

Member functions  
---  
[polymorphic_allocator::polymorphic_allocator](polymorphic_allocator/polymorphic_allocator.html "cpp/experimental/polymorphic allocator/polymorphic allocator")  
[polymorphic_allocator::operator=](polymorphic_allocator/operator=.html "cpp/experimental/polymorphic allocator/operator=")  
[polymorphic_allocator::allocate](polymorphic_allocator/allocate.html "cpp/experimental/polymorphic allocator/allocate")  
[polymorphic_allocator::deallocate](polymorphic_allocator/deallocate.html "cpp/experimental/polymorphic allocator/deallocate")  
[polymorphic_allocator::construct](polymorphic_allocator/construct.html "cpp/experimental/polymorphic allocator/construct")  
[polymorphic_allocator::destroy](polymorphic_allocator/destroy.html "cpp/experimental/polymorphic allocator/destroy")  
[polymorphic_allocator::select_on_container_copy_construction](polymorphic_allocator/select_on_container_copy_construction.html "cpp/experimental/polymorphic allocator/select on container copy construction")  
[polymorphic_allocator::resource](polymorphic_allocator/resource.html "cpp/experimental/polymorphic allocator/resource")  
Non-member functions  
[operator==operator!=](polymorphic_allocator/operator_eq.html "cpp/experimental/polymorphic allocator/operator eq")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/lib_extensions/pmr/polymorphic_allocator/navbar_content&action=edit)

![](https://upload.cppreference.com/mwiki/images/3/31/Imbox_notice.png) |  **Merged into ISO C++** The functionality described on this page was merged into the mainline ISO C++ standard as of 3/2016, see [`std::pmr::polymorphic_allocator`](../memory/polymorphic_allocator.html "cpp/memory/polymorphic allocator") (since C++17)  
---|---  
Defined in header `[<experimental/memory_resource>](../header/experimental/memory_resource.html "cpp/header/experimental/memory resource")` |  |   
---|---|---  
template< class T >  
class polymorphic_allocator; |  |  (library fundamentals TS)  
| |   
  
The class template `std::experimental::pmr::polymorphic_allocator` is an [Allocator](../named_req/Allocator.html "cpp/named req/Allocator") whose allocation behavior depends on the memory resource it is constructed with. Thus, different instances of `polymorphic_allocator` can exhibit entirely different allocation behavior. This runtime polymorphism allows objects using `polymorphic_allocator` to behave as if they used different allocator types at run time despite the identical static allocator type. 

## Contents

  * [1 Member types](polymorphic_allocator.html#Member_types)
  * [2 Member functions](polymorphic_allocator.html#Member_functions)
    * [2.1 Public member functions](polymorphic_allocator.html#Public_member_functions)
  * [3 Non-member functions](polymorphic_allocator.html#Non-member_functions)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/polymorphic_allocator&action=edit&section=1 "Edit section: Member types")] Member types

Member type  |  definition   
---|---  
`value_type` |  `T`  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/polymorphic_allocator&action=edit&section=2 "Edit section: Member functions")] Member functions

[ (constructor)](polymorphic_allocator/polymorphic_allocator.html "cpp/experimental/polymorphic allocator/polymorphic allocator") |  constructs a `polymorphic_allocator`   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/polymorphic_allocator/dsc_constructor&action=edit)  
---|---  
(destructor)(implicitly declared) |  implicitly declared destructor   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/polymorphic_allocator/dsc_destructor&action=edit)  
[ operator=](polymorphic_allocator/operator=.html "cpp/experimental/polymorphic allocator/operator=") |  copy assignment operator   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/polymorphic_allocator/dsc_operator%3D&action=edit)  
  
#####  Public member functions   
  
[ allocate](polymorphic_allocator/allocate.html "cpp/experimental/polymorphic allocator/allocate") |  allocate memory   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/polymorphic_allocator/dsc_allocate&action=edit)  
[ deallocate](polymorphic_allocator/deallocate.html "cpp/experimental/polymorphic allocator/deallocate") |  deallocate memory   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/polymorphic_allocator/dsc_deallocate&action=edit)  
[ construct](polymorphic_allocator/construct.html "cpp/experimental/polymorphic allocator/construct") |  constructs an object in allocated storage   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/polymorphic_allocator/dsc_construct&action=edit)  
[ destroy](polymorphic_allocator/destroy.html "cpp/experimental/polymorphic allocator/destroy") |  destroys an object in allocated storage   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/polymorphic_allocator/dsc_destroy&action=edit)  
[ select_on_container_copy_construction](polymorphic_allocator/select_on_container_copy_construction.html "cpp/experimental/polymorphic allocator/select on container copy construction") |  create a new `polymorphic_allocator` for use by a container's copy constructor   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/polymorphic_allocator/dsc_select_on_container_copy_construction&action=edit)  
[ resource](polymorphic_allocator/resource.html "cpp/experimental/polymorphic allocator/resource") |  returns a pointer to the underlying memory resource   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/polymorphic_allocator/dsc_resource&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/polymorphic_allocator&action=edit&section=3 "Edit section: Non-member functions")] Non-member functions

[ operator==operator!=](polymorphic_allocator/operator_eq.html "cpp/experimental/polymorphic allocator/operator eq") |  compare two `polymorphic_allocator`s   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/polymorphic_allocator/dsc_operator_eq&action=edit)  
---|---
