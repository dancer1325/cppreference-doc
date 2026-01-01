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
**memory_resource**  
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

**`std::experimental::pmr::memory_resource`**

[memory_resource::memory_resource](memory_resource/memory_resource.html "cpp/experimental/memory resource/memory resource")  
---  
Public member functions  
[memory_resource::allocate](memory_resource/allocate.html "cpp/experimental/memory resource/allocate")  
[memory_resource::deallocate](memory_resource/deallocate.html "cpp/experimental/memory resource/deallocate")  
[memory_resource::is_equal](memory_resource/is_equal.html "cpp/experimental/memory resource/is equal")  
Protected member functions  
[memory_resource::do_allocate](memory_resource/do_allocate.html "cpp/experimental/memory resource/do allocate")  
[memory_resource::do_deallocate](memory_resource/do_deallocate.html "cpp/experimental/memory resource/do deallocate")  
[memory_resource::do_is_equal](memory_resource/do_is_equal.html "cpp/experimental/memory resource/do is equal")  
Non-member functions  
[operator==operator!=](memory_resource/operator_eq.html "cpp/experimental/memory resource/operator eq")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/lib_extensions/pmr/memory_resource/navbar_content&action=edit)

![](https://upload.cppreference.com/mwiki/images/3/31/Imbox_notice.png) |  **Merged into ISO C++** The functionality described on this page was merged into the mainline ISO C++ standard as of 3/2016, see [`std::pmr::memory_resource`](../memory/memory_resource.html "cpp/memory/memory resource") (since C++17)  
---|---  
Defined in header `[<experimental/memory_resource>](../header/experimental/memory_resource.html "cpp/header/experimental/memory resource")` |  |   
---|---|---  
class memory_resource; |  |  (library fundamentals TS)  
| |   
  
The class `std::experimental::pmr::memory_resource` is an abstract interface to an unbounded set of classes encapsulating memory resources. 

## Contents

  * [1 Member functions](memory_resource.html#Member_functions)
    * [1.1 Public member functions](memory_resource.html#Public_member_functions)
    * [1.2 Protected member functions](memory_resource.html#Protected_member_functions)
  * [2 Non-member-functions](memory_resource.html#Non-member-functions)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/memory_resource&action=edit&section=1 "Edit section: Member functions")] Member functions

[ (constructor)](memory_resource/memory_resource.html "cpp/experimental/memory resource/memory resource")(implicitly declared) |  constructs a new `memory_resource`   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/memory_resource/dsc_constructor&action=edit)  
---|---  
(destructor)[virtual] |  destructs a `memory_resource`   
(virtual public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/memory_resource/dsc_destructor&action=edit)  
operator=(implicitly declared) |  implicitly declared copy assignment operator   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/memory_resource/dsc_operator%3D&action=edit)  
  
#####  Public member functions   
  
[ allocate](memory_resource/allocate.html "cpp/experimental/memory resource/allocate") |  allocates memory   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/memory_resource/dsc_allocate&action=edit)  
[ deallocate](memory_resource/deallocate.html "cpp/experimental/memory resource/deallocate") |  deallocates memory   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/memory_resource/dsc_deallocate&action=edit)  
[ is_equal](memory_resource/is_equal.html "cpp/experimental/memory resource/is equal") |  compare for equality with another `memory_resource`   
(public member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/memory_resource/dsc_is_equal&action=edit)  
  
#####  Protected member functions   
  
[ do_allocate](memory_resource/do_allocate.html "cpp/experimental/memory resource/do allocate")[virtual] |  allocates memory   
(virtual protected member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/memory_resource/dsc_do_allocate&action=edit)  
[ do_deallocate](memory_resource/do_deallocate.html "cpp/experimental/memory resource/do deallocate")[virtual] |  deallocates memory   
(virtual protected member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/memory_resource/dsc_do_deallocate&action=edit)  
[ do_is_equal](memory_resource/do_is_equal.html "cpp/experimental/memory resource/do is equal")[virtual] |  compare for equality with another `memory_resource`   
(virtual protected member function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/memory_resource/dsc_do_is_equal&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/experimental/memory_resource&action=edit&section=2 "Edit section: Non-member-functions")] Non-member-functions

[ operator==operator!=](memory_resource/operator_eq.html "cpp/experimental/memory resource/operator eq") |  compare two `memory_resource`s   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/experimental/memory_resource/dsc_operator_eq&action=edit)  
---|---
