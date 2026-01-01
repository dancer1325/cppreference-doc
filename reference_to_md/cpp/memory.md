[C++](../cpp.html "cpp")

[Compiler support](compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](freestanding.html "cpp/freestanding")  
[Language](language.html "cpp/language")  
[Standard library](standard_library.html "cpp/standard library")  
[Standard library headers](headers.html "cpp/header")  
[Named requirements](iterator/concepts.html "cpp/named req")  
[Feature test macros](experimental/feature_test.html "cpp/feature test") (C++20)  
[Language support library](utility.html#Language_support "cpp/utility")  
[Concepts library](concepts.html "cpp/concepts") (C++20)  
[Diagnostics library](error.html "cpp/error")  
**Memory management library**  
[Metaprogramming library](meta.html "cpp/meta") (C++11)  
[General utilities library](utility.html "cpp/utility")  
[Containers library](container.html "cpp/container")  
[Iterators library](iterator.html "cpp/iterator")  
[Ranges library](ranges.html "cpp/ranges") (C++20)  
[Algorithms library](algorithm.html "cpp/algorithm")  
[Strings library](string.html "cpp/string")  
[Text processing library](text.html "cpp/text")  
[Numerics library](numeric.html "cpp/numeric")  
[Date and time library](chrono.html "cpp/chrono")  
[Input/output library](io.html "cpp/io")  
[Filesystem library](filesystem.html "cpp/filesystem") (C++17)  
[Concurrency support library](atomic.html "cpp/thread") (C++11)  
[Execution control library](experimental/execution.html "cpp/execution") (C++26)  
[Technical specifications](experimental.html "cpp/experimental")  
[Symbols index](symbol_index.html "cpp/symbol index")  
[External libraries](links/libs.html "cpp/links/libs")  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/navbar_content&action=edit)

**Memory management library**

| [_voidify_](memory/voidify.html "cpp/memory/voidify")(exposition only*)  
---  
[Allocators](memory.html#Allocators "cpp/memory")  
| [allocator](memory/allocator.html "cpp/memory/allocator")  
---  
[allocator_traits](memory/allocator_traits.html "cpp/memory/allocator traits")(C++11)  
[allocation_result](memory/allocation_result.html "cpp/memory/allocation result")(C++23)  
[scoped_allocator_adaptor](memory/scoped_allocator_adaptor.html "cpp/memory/scoped allocator adaptor")(C++11)  
[pmr::polymorphic_allocator](memory/polymorphic_allocator.html "cpp/memory/polymorphic allocator")(C++17)  
  
| [allocator_arg](memory/allocator_arg.html "cpp/memory/allocator arg")(C++11)  
---  
[uses_allocator](memory/uses_allocator.html "cpp/memory/uses allocator")(C++11)  
[uses_allocator_construction_args](memory/uses_allocator_construction_args.html "cpp/memory/uses allocator construction args")(C++20)  
[make_obj_using_allocator](memory/make_obj_using_allocator.html "cpp/memory/make obj using allocator")(C++20)  
[uninitialized_construct_using_allocator](memory/uninitialized_construct_using_allocator.html "cpp/memory/uninitialized construct using allocator")(C++20)  
  
[Uninitialized memory algorithms](memory.html#Uninitialized_memory_algorithms "cpp/memory")  
| [uninitialized_copy](memory/uninitialized_copy.html "cpp/memory/uninitialized copy")  
---  
[uninitialized_fill](memory/uninitialized_fill.html "cpp/memory/uninitialized fill")  
[uninitialized_move](memory/uninitialized_move.html "cpp/memory/uninitialized move")(C++17)  
[uninitialized_copy_n](memory/uninitialized_copy_n.html "cpp/memory/uninitialized copy n")(C++11)  
[uninitialized_fill_n](memory/uninitialized_fill_n.html "cpp/memory/uninitialized fill n")  
[uninitialized_move_n](memory/uninitialized_move_n.html "cpp/memory/uninitialized move n")(C++17)  
[construct_at](memory/construct_at.html "cpp/memory/construct at")(C++20)  
  
| [uninitialized_default_construct](memory/uninitialized_default_construct.html "cpp/memory/uninitialized default construct")(C++17)  
---  
[uninitialized_value_construct](memory/uninitialized_value_construct.html "cpp/memory/uninitialized value construct")(C++17)  
[destroy](memory/destroy.html "cpp/memory/destroy")(C++17)  
[uninitialized_default_construct_n](memory/uninitialized_default_construct_n.html "cpp/memory/uninitialized default construct n")(C++17)  
[uninitialized_value_construct_n](memory/uninitialized_value_construct_n.html "cpp/memory/uninitialized value construct n")(C++17)  
[destroy_n](memory/destroy_n.html "cpp/memory/destroy n")(C++17)  
[destroy_at](memory/destroy_at.html "cpp/memory/destroy at")(C++17)  
  
[Constrained uninitialized memory algorithms](memory.html#Constrained_uninitialized_memory_algorithms "cpp/memory")  
| [ranges::uninitialized_copy](memory/ranges/uninitialized_copy.html "cpp/memory/ranges/uninitialized copy")(C++20)  
---  
[ranges::uninitialized_fill](memory/ranges/uninitialized_fill.html "cpp/memory/ranges/uninitialized fill")(C++20)  
[ranges::uninitialized_move](memory/ranges/uninitialized_move.html "cpp/memory/ranges/uninitialized move")(C++20)  
[ranges::uninitialized_copy_n](memory/ranges/uninitialized_copy_n.html "cpp/memory/ranges/uninitialized copy n")(C++20)` `  
[ranges::uninitialized_fill_n](memory/ranges/uninitialized_fill_n.html "cpp/memory/ranges/uninitialized fill n")(C++20)  
[ranges::uninitialized_move_n](memory/ranges/uninitialized_move_n.html "cpp/memory/ranges/uninitialized move n")(C++20)  
[ranges::construct_at](memory/ranges/construct_at.html "cpp/memory/ranges/construct at")(C++20)  
  
| [ranges::uninitialized_default_construct](memory/ranges/uninitialized_default_construct.html "cpp/memory/ranges/uninitialized default construct")(C++20)  
---  
[ranges::uninitialized_value_construct](memory/ranges/uninitialized_value_construct.html "cpp/memory/ranges/uninitialized value construct")(C++20)  
[ranges::destroy](memory/ranges/destroy.html "cpp/memory/ranges/destroy")(C++20)  
[ranges::uninitialized_default_construct_n](memory/ranges/uninitialized_default_construct_n.html "cpp/memory/ranges/uninitialized default construct n")(C++20)` `  
[ranges::uninitialized_value_construct_n](memory/ranges/uninitialized_value_construct_n.html "cpp/memory/ranges/uninitialized value construct n")(C++20)  
[ranges::destroy_n](memory/ranges/destroy_n.html "cpp/memory/ranges/destroy n")(C++20)  
[ranges::destroy_at](memory/ranges/destroy_at.html "cpp/memory/ranges/destroy at")(C++20)  
  
[Memory resources](memory.html#Memory_resources "cpp/memory")  
| [pmr::memory_resource](memory/memory_resource.html "cpp/memory/memory resource")(C++17)  
---  
[pmr::get_default_resource](memory/get_default_resource.html "cpp/memory/get default resource")(C++17)  
[pmr::set_default_resource](memory/set_default_resource.html "cpp/memory/set default resource")(C++17)  
[pmr::new_delete_resource](memory/new_delete_resource.html "cpp/memory/new delete resource")(C++17)  
[pmr::pool_options](memory/pool_options.html "cpp/memory/pool options")(C++17)  
  
| [pmr::null_memory_resource](memory/null_memory_resource.html "cpp/memory/null memory resource")(C++17)  
---  
[pmr::synchronized_pool_resource](memory/synchronized_pool_resource.html "cpp/memory/synchronized pool resource")(C++17)  
[pmr::unsynchronized_pool_resource](memory/unsynchronized_pool_resource.html "cpp/memory/unsynchronized pool resource")(C++17)  
[pmr::monotonic_buffer_resource](memory/monotonic_buffer_resource.html "cpp/memory/monotonic buffer resource")(C++17)  
  
  
  
| [Explicit lifetime management](memory.html#Explicit_lifetime_management "cpp/memory")  
---  
[start_lifetime_as](memory/start_lifetime_as.html "cpp/memory/start lifetime as")(C++23)  
[start_lifetime_as_array](memory/start_lifetime_as.html "cpp/memory/start lifetime as")(C++23)  
  
| [Types for composite class design](memory.html#Types_for_composite_class_design "cpp/memory")  
---  
[indirect](memory/indirect.html "cpp/memory/indirect")(C++26)  
[polymorphic](memory/polymorphic.html "cpp/memory/polymorphic")(C++26)  
  
[Uninitialized storage](memory.html#Uninitialized_storage "cpp/memory") (until C++20)  
| [raw_storage_iterator](memory/raw_storage_iterator.html "cpp/memory/raw storage iterator")(until C++20*)  
---  
[get_temporary_buffer](memory/get_temporary_buffer.html "cpp/memory/get temporary buffer")(until C++20*)  
  
| [return_temporary_buffer](memory/return_temporary_buffer.html "cpp/memory/return temporary buffer")(until C++20*)  
---  
  
  
  
[Garbage collector support](memory.html#Garbage_collector_support "cpp/memory") (until C++23)  
| [declare_reachable](memory/gc/declare_reachable.html "cpp/memory/gc/declare reachable")(C++11)(until C++23)  
---  
[declare_no_pointers](memory/gc/declare_no_pointers.html "cpp/memory/gc/declare no pointers")(C++11)(until C++23)  
[pointer_safety](memory/gc/pointer_safety.html "cpp/memory/gc/pointer safety")(C++11)(until C++23)  
  
| [undeclare_reachable](memory/gc/undeclare_reachable.html "cpp/memory/gc/undeclare reachable")(C++11)(until C++23)  
---  
[undeclare_no_pointers](memory/gc/undeclare_no_pointers.html "cpp/memory/gc/undeclare no pointers")(C++11)(until C++23)  
[get_pointer_safety](memory/gc/get_pointer_safety.html "cpp/memory/gc/get pointer safety")(C++11)(until C++23)  
  
| [Low level memory  
management](memory/new.html#Low_level_memory_management "cpp/memory/new")  
---  
[operator newoperator new[]](memory/new/operator_new.html "cpp/memory/new/operator new")  
[operator deleteoperator delete[]](memory/new/operator_delete.html "cpp/memory/new/operator delete")  
[nothrow_t](memory/new/nothrow_t.html "cpp/memory/new/nothrow t")  
[nothrow](memory/new/nothrow.html "cpp/memory/new/nothrow")  
[new_handler](memory/new/new_handler.html "cpp/memory/new/new handler")  
[set_new_handler](memory/new/set_new_handler.html "cpp/memory/new/set new handler")  
[get_new_handler](memory/new/get_new_handler.html "cpp/memory/new/get new handler")(C++11)  
[bad_alloc](memory/new/bad_alloc.html "cpp/memory/new/bad alloc")  
[bad_array_new_length](memory/new/bad_array_new_length.html "cpp/memory/new/bad array new length")(C++11)  
[align_val_t](memory/new/align_val_t.html "cpp/memory/new/align val t")(C++17)  
[destroying_delete_t](memory/new/destroying_delete_t.html "cpp/memory/new/destroying delete t")(C++20)  
[launder](utility/launder.html "cpp/utility/launder")(C++17)  
[Smart pointers](memory.html#Smart_pointers "cpp/memory")  
[unique_ptr](memory/unique_ptr.html "cpp/memory/unique ptr")(C++11)  
[shared_ptr](memory/shared_ptr.html "cpp/memory/shared ptr")(C++11)  
[weak_ptr](memory/weak_ptr.html "cpp/memory/weak ptr")(C++11)  
[auto_ptr](memory/auto_ptr.html "cpp/memory/auto ptr")(until C++17*)  
[owner_less](memory/owner_less.html "cpp/memory/owner less")(C++11)  
[owner_less<void>](memory/owner_less_void.html "cpp/memory/owner less void")(C++17)  
[owner_hash](memory/owner_hash.html "cpp/memory/owner hash")(C++26)  
[owner_equal](memory/owner_equal.html "cpp/memory/owner equal")(C++26)  
[enable_shared_from_this](memory/enable_shared_from_this.html "cpp/memory/enable shared from this")(C++11)  
[bad_weak_ptr](memory/bad_weak_ptr.html "cpp/memory/bad weak ptr")(C++11)  
[default_delete](memory/default_delete.html "cpp/memory/default delete")(C++11)  
[out_ptr_t](memory/out_ptr_t.html "cpp/memory/out ptr t")(C++23)  
[inout_ptr_t](memory/inout_ptr_t.html "cpp/memory/inout ptr t")(C++23)  
[Miscellaneous](memory.html#Miscellaneous "cpp/memory")  
[pointer_traits](memory/pointer_traits.html "cpp/memory/pointer traits")(C++11)  
[to_address](memory/to_address.html "cpp/memory/to address")(C++20)  
[addressof](memory/addressof.html "cpp/memory/addressof")(C++11)  
[align](memory/align.html "cpp/memory/align")(C++11)  
[assume_aligned](memory/assume_aligned.html "cpp/memory/assume aligned")(C++20)  
[is_sufficiently_aligned](memory/is_sufficiently_aligned.html "cpp/memory/is sufficiently aligned")(C++26)  
[C Library](memory/c.html "cpp/memory/c")  
| [malloc](memory/c/malloc.html "cpp/memory/c/malloc")  
---  
[calloc](memory/c/calloc.html "cpp/memory/c/calloc")  
[realloc](memory/c/realloc.html "cpp/memory/c/realloc")  
  
| [free](memory/c/free.html "cpp/memory/c/free")  
---  
[aligned_alloc](memory/c/aligned_alloc.html "cpp/memory/c/aligned alloc")(C++17)  
  
  
  
[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/navbar_content&action=edit)

## Contents

  * [1 Smart pointers (since C++11)](memory.html#Smart_pointers_.28since_C.2B.2B11.29)
    * [1.1 Pointer categories](memory.html#Pointer_categories)
    * [1.2 Helper classes](memory.html#Helper_classes)
    * [1.3 Smart pointer adaptors (since C++23)](memory.html#Smart_pointer_adaptors_.28since_C.2B.2B23.29)
  * [2 Allocators](memory.html#Allocators)
  * [3 Memory resources (since C++17)](memory.html#Memory_resources_.28since_C.2B.2B17.29)
  * [4 Uninitialized memory algorithms](memory.html#Uninitialized_memory_algorithms)
  * [5 Constrained uninitialized memory algorithms (since C++20)](memory.html#Constrained_uninitialized_memory_algorithms_.28since_C.2B.2B20.29)
  * [6 Explicit lifetime management (since C++23)](memory.html#Explicit_lifetime_management_.28since_C.2B.2B23.29)
  * [7 Types for composite class design (since C++26)](memory.html#Types_for_composite_class_design_.28since_C.2B.2B26.29)
  * [8 Miscellaneous](memory.html#Miscellaneous)
  * [9 Low level memory management](memory.html#Low_level_memory_management)
  * [10 C-style memory management](memory.html#C-style_memory_management)
  * [11 Uninitialized storage (until C++20)](memory.html#Uninitialized_storage_.28until_C.2B.2B20.29)
  * [12 Garbage collector support (until C++23)](memory.html#Garbage_collector_support_.28until_C.2B.2B23.29)

  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/memory&action=edit&section=1 "Edit section: Smart pointers \(since C++11\)")] Smart pointers (since C++11)

Smart pointers enable automatic, exception-safe, object lifetime management. 

Defined in header `[<memory>](header/memory.html "cpp/header/memory")`  
---  
  
#####  Pointer categories   
  
[ unique_ptr](memory/unique_ptr.html "cpp/memory/unique ptr")(C++11) |  smart pointer with unique object ownership semantics   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_unique_ptr&action=edit)  
[ shared_ptr](memory/shared_ptr.html "cpp/memory/shared ptr")(C++11) |  smart pointer with shared object ownership semantics   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_shared_ptr&action=edit)  
[ weak_ptr](memory/weak_ptr.html "cpp/memory/weak ptr")(C++11) |  weak reference to an object managed by [std::shared_ptr](memory/shared_ptr.html "cpp/memory/shared ptr")   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_weak_ptr&action=edit)  
[ auto_ptr](memory/auto_ptr.html "cpp/memory/auto ptr")(deprecated in C++11)(removed in C++17) |  smart pointer with strict object ownership semantics   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_auto_ptr&action=edit)  
  
#####  Helper classes   
  
[ owner_less](memory/owner_less.html "cpp/memory/owner less")(C++11) |  provides mixed-type owner-based ordering of shared and weak pointers   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_owner_less&action=edit)  
[ owner_hash](memory/owner_hash.html "cpp/memory/owner hash")(C++26) |  provides owner-based hashing for shared and weak pointers   
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_owner_hash&action=edit)  
[ owner_equal](memory/owner_equal.html "cpp/memory/owner equal")(C++26) |  provides mixed-type owner-based equal comparisons of shared and weak pointers   
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_owner_equal&action=edit)  
[ enable_shared_from_this](memory/enable_shared_from_this.html "cpp/memory/enable shared from this")(C++11) |  allows an object to create a `shared_ptr` referring to itself   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_enable_shared_from_this&action=edit)  
[ bad_weak_ptr](memory/bad_weak_ptr.html "cpp/memory/bad weak ptr")(C++11) |  exception thrown when accessing a `weak_ptr` which refers to already destroyed object   
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_bad_weak_ptr&action=edit)  
[ default_delete](memory/default_delete.html "cpp/memory/default delete")(C++11) |  default deleter for [unique_ptr](memory/unique_ptr.html "cpp/memory/unique ptr")   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_default_delete&action=edit)  
  
#####  Smart pointer adaptors (since C++23)  
  
[ out_ptr_t](memory/out_ptr_t.html "cpp/memory/out ptr t")(C++23) |  interoperates with foreign pointer setters and resets a smart pointer on destruction   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_out_ptr_t&action=edit)  
[ out_ptr](memory/out_ptr_t/out_ptr.html "cpp/memory/out ptr t/out ptr")(C++23) |  creates an `out_ptr_t` with an associated smart pointer and resetting arguments   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/out_ptr_t/dsc_out_ptr&action=edit)  
[ inout_ptr_t](memory/inout_ptr_t.html "cpp/memory/inout ptr t")(C++23) |  interoperates with foreign pointer setters, obtains the initial pointer value from a smart pointer, and resets it on destruction   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_inout_ptr_t&action=edit)  
[ inout_ptr](memory/inout_ptr_t/inout_ptr.html "cpp/memory/inout ptr t/inout ptr")(C++23) |  creates an `inout_ptr_t` with an associated smart pointer and resetting arguments   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/inout_ptr_t/dsc_inout_ptr&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/memory&action=edit&section=2 "Edit section: Allocators")] Allocators

Allocators are class templates encapsulating memory allocation strategy. This allows generic containers to decouple memory management from the data itself. 

Defined in header `[<memory>](header/memory.html "cpp/header/memory")`  
---  
[ allocator](memory/allocator.html "cpp/memory/allocator") |  the default allocator   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_allocator&action=edit)  
[ allocator_traits](memory/allocator_traits.html "cpp/memory/allocator traits")(C++11) |  provides information about allocator types   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_allocator_traits&action=edit)  
[ allocation_result](memory/allocation_result.html "cpp/memory/allocation result")(C++23) |  records the address and the actual size of storage allocated by `allocate_at_least`   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_allocation_result&action=edit)  
[ allocator_argallocator_arg_t](memory/allocator_arg.html "cpp/memory/allocator arg")(C++11) |  a tag used to select allocator-aware constructors  
(tag)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_allocator_arg&action=edit)  
[ uses_allocator](memory/uses_allocator.html "cpp/memory/uses allocator")(C++11) |  checks if the specified type supports uses-allocator construction   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_uses_allocator&action=edit)  
[ uses_allocator_construction_args](memory/uses_allocator_construction_args.html "cpp/memory/uses allocator construction args")(C++20) |  prepares the argument list matching the flavor of uses-allocator construction required by the given type   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_uses_allocator_construction_args&action=edit)  
[ make_obj_using_allocator](memory/make_obj_using_allocator.html "cpp/memory/make obj using allocator")(C++20) |  creates an object of the given type by means of uses-allocator construction   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_make_obj_using_allocator&action=edit)  
[ uninitialized_construct_using_allocator](memory/uninitialized_construct_using_allocator.html "cpp/memory/uninitialized construct using allocator")(C++20) |  creates an object of the given type at specified memory location by means of uses-allocator construction   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_uninitialized_construct_using_allocator&action=edit)  
Defined in header `[<scoped_allocator>](header/scoped_allocator.html "cpp/header/scoped allocator")`  
[ scoped_allocator_adaptor](memory/scoped_allocator_adaptor.html "cpp/memory/scoped allocator adaptor")(C++11) |  implements multi-level allocator for multi-level containers   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_scoped_allocator_adaptor&action=edit)  
Defined in header `[<memory_resource>](header/memory_resource.html "cpp/header/memory resource")`  
Defined in namespace `std::pmr`  
[ polymorphic_allocator](memory/polymorphic_allocator.html "cpp/memory/polymorphic allocator")(C++17) |  an allocator that supports run-time polymorphism based on the [std::pmr::memory_resource](memory/memory_resource.html "cpp/memory/memory resource") it is constructed with   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_polymorphic_allocator&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/memory&action=edit&section=3 "Edit section: Memory resources \(since C++17\)")] Memory resources (since C++17)

Memory resources implement memory allocation strategies that can be used by [std::pmr::polymorphic_allocator](memory/polymorphic_allocator.html "cpp/memory/polymorphic allocator"). 

Defined in header `[<memory_resource>](header/memory_resource.html "cpp/header/memory resource")`  
---  
Defined in namespace `std::pmr`  
[ memory_resource](memory/memory_resource.html "cpp/memory/memory resource")(C++17) |  an abstract interface for classes that encapsulate memory resources   
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_memory_resource&action=edit)  
[ new_delete_resource](memory/new_delete_resource.html "cpp/memory/new delete resource")(C++17) |  returns a static program-wide [std::pmr::memory_resource](memory/memory_resource.html "cpp/memory/memory resource") that uses the global [operator new](memory/new/operator_new.html "cpp/memory/new/operator new") and [operator delete](memory/new/operator_delete.html "cpp/memory/new/operator delete") to allocate and deallocate memory   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_new_delete_resource&action=edit)  
[ null_memory_resource](memory/null_memory_resource.html "cpp/memory/null memory resource")(C++17) |  returns a static [std::pmr::memory_resource](memory/memory_resource.html "cpp/memory/memory resource") that performs no allocation   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_null_memory_resource&action=edit)  
[ get_default_resource](memory/get_default_resource.html "cpp/memory/get default resource")(C++17) |  gets the default [std::pmr::memory_resource](memory/memory_resource.html "cpp/memory/memory resource")   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_get_default_resource&action=edit)  
[ set_default_resource](memory/set_default_resource.html "cpp/memory/set default resource")(C++17) |  sets the default [std::pmr::memory_resource](memory/memory_resource.html "cpp/memory/memory resource")   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_set_default_resource&action=edit)  
[ pool_options](memory/pool_options.html "cpp/memory/pool options")(C++17) |  a set of constructor options for pool resources   
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_pool_options&action=edit)  
[ synchronized_pool_resource](memory/synchronized_pool_resource.html "cpp/memory/synchronized pool resource")(C++17) |  a thread-safe [std::pmr::memory_resource](memory/memory_resource.html "cpp/memory/memory resource") for managing allocations in pools of different block sizes   
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_synchronized_pool_resource&action=edit)  
[ unsynchronized_pool_resource](memory/unsynchronized_pool_resource.html "cpp/memory/unsynchronized pool resource")(C++17) |  a thread-unsafe [std::pmr::memory_resource](memory/memory_resource.html "cpp/memory/memory resource") for managing allocations in pools of different block sizes   
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_unsynchronized_pool_resource&action=edit)  
[ monotonic_buffer_resource](memory/monotonic_buffer_resource.html "cpp/memory/monotonic buffer resource")(C++17) |  a special-purpose [std::pmr::memory_resource](memory/memory_resource.html "cpp/memory/memory resource") that releases the allocated memory only when the resource is destroyed   
(class) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_monotonic_buffer_resource&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/memory&action=edit&section=4 "Edit section: Uninitialized memory algorithms")] Uninitialized memory algorithms

Defined in header `[<memory>](header/memory.html "cpp/header/memory")`  
---  
[ uninitialized_copy](memory/uninitialized_copy.html "cpp/memory/uninitialized copy") |  copies a range of objects to an uninitialized area of memory   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_uninitialized_copy&action=edit)  
[ uninitialized_copy_n](memory/uninitialized_copy_n.html "cpp/memory/uninitialized copy n")(C++11) |  copies a number of objects to an uninitialized area of memory   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_uninitialized_copy_n&action=edit)  
[ uninitialized_fill](memory/uninitialized_fill.html "cpp/memory/uninitialized fill") |  copies an object to an uninitialized area of memory, defined by a range   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_uninitialized_fill&action=edit)  
[ uninitialized_fill_n](memory/uninitialized_fill_n.html "cpp/memory/uninitialized fill n") |  copies an object to an uninitialized area of memory, defined by a start and a count   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_uninitialized_fill_n&action=edit)  
[ uninitialized_move](memory/uninitialized_move.html "cpp/memory/uninitialized move")(C++17) |  moves a range of objects to an uninitialized area of memory   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_uninitialized_move&action=edit)  
[ uninitialized_move_n](memory/uninitialized_move_n.html "cpp/memory/uninitialized move n")(C++17) |  moves a number of objects to an uninitialized area of memory   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_uninitialized_move_n&action=edit)  
[ uninitialized_default_construct](memory/uninitialized_default_construct.html "cpp/memory/uninitialized default construct")(C++17) |  constructs objects by [default-initialization](language/default_initialization.html "cpp/language/default initialization") in an uninitialized area of memory, defined by a range   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_uninitialized_default_construct&action=edit)  
[ uninitialized_default_construct_n](memory/uninitialized_default_construct_n.html "cpp/memory/uninitialized default construct n")(C++17) |  constructs objects by [default-initialization](language/default_initialization.html "cpp/language/default initialization") in an uninitialized area of memory, defined by a start and a count   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_uninitialized_default_construct_n&action=edit)  
[ uninitialized_value_construct](memory/uninitialized_value_construct.html "cpp/memory/uninitialized value construct")(C++17) |  constructs objects by [value-initialization](language/value_initialization.html "cpp/language/value initialization") in an uninitialized area of memory, defined by a range   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_uninitialized_value_construct&action=edit)  
[ uninitialized_value_construct_n](memory/uninitialized_value_construct_n.html "cpp/memory/uninitialized value construct n")(C++17) |  constructs objects by [value-initialization](language/value_initialization.html "cpp/language/value initialization") in an uninitialized area of memory, defined by a start and a count   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_uninitialized_value_construct_n&action=edit)  
[ destroy_at](memory/destroy_at.html "cpp/memory/destroy at")(C++17) |  destroys an object at a given address   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_destroy_at&action=edit)  
[ destroy](memory/destroy.html "cpp/memory/destroy")(C++17) |  destroys a range of objects   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_destroy&action=edit)  
[ destroy_n](memory/destroy_n.html "cpp/memory/destroy n")(C++17) |  destroys a number of objects in a range   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_destroy_n&action=edit)  
[ construct_at](memory/construct_at.html "cpp/memory/construct at")(C++20) |  creates an object at a given address   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_construct_at&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/memory&action=edit&section=5 "Edit section: Constrained uninitialized memory algorithms \(since C++20\)")] Constrained uninitialized memory algorithms (since C++20)

C++20 provides [constrained](language/constraints.html "cpp/language/constraints") uninitialized memory algorithms that accept range arguments or iterator-sentinel pairs. 

Defined in header `[<memory>](header/memory.html "cpp/header/memory")`  
---  
Defined in namespace `std::ranges`  
[_no-throw-input-iterator no-throw-forward-iteratorno-throw-sentinel-forno-throw-input-rangeno-throw-forward-range_](memory/ranges/nothrow_concepts.html "cpp/memory/ranges/nothrow concepts")(C++20) |  specifies some operations on iterators, sentinels and ranges are non-throwing  
(exposition-only concept*)  
[ ranges::uninitialized_copy](memory/ranges/uninitialized_copy.html "cpp/memory/ranges/uninitialized copy")(C++20) |  copies a range of objects to an uninitialized area of memory  
(algorithm function object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/ranges/dsc_uninitialized_copy&action=edit)  
[ ranges::uninitialized_copy_n](memory/ranges/uninitialized_copy_n.html "cpp/memory/ranges/uninitialized copy n")(C++20) |  copies a number of objects to an uninitialized area of memory  
(algorithm function object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/ranges/dsc_uninitialized_copy_n&action=edit)  
[ ranges::uninitialized_fill](memory/ranges/uninitialized_fill.html "cpp/memory/ranges/uninitialized fill")(C++20) |  copies an object to an uninitialized area of memory, defined by a range  
(algorithm function object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/ranges/dsc_uninitialized_fill&action=edit)  
[ ranges::uninitialized_fill_n](memory/ranges/uninitialized_fill_n.html "cpp/memory/ranges/uninitialized fill n")(C++20) |  copies an object to an uninitialized area of memory, defined by a start and a count  
(algorithm function object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/ranges/dsc_uninitialized_fill_n&action=edit)  
[ ranges::uninitialized_move](memory/ranges/uninitialized_move.html "cpp/memory/ranges/uninitialized move")(C++20) |  moves a range of objects to an uninitialized area of memory  
(algorithm function object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/ranges/dsc_uninitialized_move&action=edit)  
[ ranges::uninitialized_move_n](memory/ranges/uninitialized_move_n.html "cpp/memory/ranges/uninitialized move n")(C++20) |  moves a number of objects to an uninitialized area of memory  
(algorithm function object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/ranges/dsc_uninitialized_move_n&action=edit)  
[ ranges::uninitialized_default_construct](memory/ranges/uninitialized_default_construct.html "cpp/memory/ranges/uninitialized default construct")(C++20) |  constructs objects by [default-initialization](language/default_initialization.html "cpp/language/default initialization") in an uninitialized area of memory, defined by a range  
(algorithm function object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/ranges/dsc_uninitialized_default_construct&action=edit)  
[ ranges::uninitialized_default_construct_n](memory/ranges/uninitialized_default_construct_n.html "cpp/memory/ranges/uninitialized default construct n")(C++20) |  constructs objects by [default-initialization](language/default_initialization.html "cpp/language/default initialization") in an uninitialized area of memory, defined by a start and count  
(algorithm function object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/ranges/dsc_uninitialized_default_construct_n&action=edit)  
[ ranges::uninitialized_value_construct](memory/ranges/uninitialized_value_construct.html "cpp/memory/ranges/uninitialized value construct")(C++20) |  constructs objects by [value-initialization](language/value_initialization.html "cpp/language/value initialization") in an uninitialized area of memory, defined by a range  
(algorithm function object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/ranges/dsc_uninitialized_value_construct&action=edit)  
[ ranges::uninitialized_value_construct_n](memory/ranges/uninitialized_value_construct_n.html "cpp/memory/ranges/uninitialized value construct n")(C++20) |  constructs objects by [value-initialization](language/value_initialization.html "cpp/language/value initialization") in an uninitialized area of memory, defined by a start and a count  
(algorithm function object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/ranges/dsc_uninitialized_value_construct_n&action=edit)  
[ ranges::destroy_at](memory/ranges/destroy_at.html "cpp/memory/ranges/destroy at")(C++20) |  destroys an object at a given address  
(algorithm function object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/ranges/dsc_destroy_at&action=edit)  
[ ranges::destroy](memory/ranges/destroy.html "cpp/memory/ranges/destroy")(C++20) |  destroys a range of objects  
(algorithm function object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/ranges/dsc_destroy&action=edit)  
[ ranges::destroy_n](memory/ranges/destroy_n.html "cpp/memory/ranges/destroy n")(C++20) |  destroys a number of objects in a range  
(algorithm function object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/ranges/dsc_destroy_n&action=edit)  
[ ranges::construct_at](memory/ranges/construct_at.html "cpp/memory/ranges/construct at")(C++20) |  creates an object at a given address  
(algorithm function object)[[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/ranges/dsc_construct_at&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/memory&action=edit&section=6 "Edit section: Explicit lifetime management \(since C++23\)")] Explicit lifetime management (since C++23)

Defined in header `[<memory>](header/memory.html "cpp/header/memory")`  
---  
[ start_lifetime_asstart_lifetime_as_array](memory/start_lifetime_as.html "cpp/memory/start lifetime as")(C++23) |  implicitly creates objects in given storage with the object representation reused   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_start_lifetime_as&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/memory&action=edit&section=7 "Edit section: Types for composite class design \(since C++26\)")] Types for composite class design (since C++26)

Defined in header `[<memory>](header/memory.html "cpp/header/memory")`  
---  
[ indirect](memory/indirect.html "cpp/memory/indirect")(C++26) |  a wrapper containing dynamically-allocated object with value-like semantics   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_indirect&action=edit)  
[ polymorphic](memory/polymorphic.html "cpp/memory/polymorphic")(C++26) |  a polymorphic wrapper containing dynamically-allocated object with value-like semantics   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_polymorphic&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/memory&action=edit&section=8 "Edit section: Miscellaneous")] Miscellaneous

Defined in header `[<memory>](header/memory.html "cpp/header/memory")`  
---  
[ pointer_traits](memory/pointer_traits.html "cpp/memory/pointer traits")(C++11) |  provides information about pointer-like types   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_pointer_traits&action=edit)  
[ to_address](memory/to_address.html "cpp/memory/to address")(C++20) |  obtains a raw pointer from a pointer-like type   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_to_address&action=edit)  
[ addressof](memory/addressof.html "cpp/memory/addressof")(C++11) |  obtains actual address of an object, even if the `**&**` operator is overloaded   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_addressof&action=edit)  
[ align](memory/align.html "cpp/memory/align")(C++11) |  aligns a pointer in a buffer   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_align&action=edit)  
[ assume_aligned](memory/assume_aligned.html "cpp/memory/assume aligned")(C++20) |  informs the compiler that a pointer is aligned   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_assume_aligned&action=edit)  
[ is_sufficiently_aligned](memory/is_sufficiently_aligned.html "cpp/memory/is sufficiently aligned")(C++26) |  checks whether the pointer points to an object whose alignment has at least the given value   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_is_sufficiently_aligned&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/memory&action=edit&section=9 "Edit section: Low level memory management")] [Low level memory management](memory/new.html "cpp/memory/new")

Includes e.g. [operator new](memory/new/operator_new.html "cpp/memory/new/operator new"), [operator delete](memory/new/operator_delete.html "cpp/memory/new/operator delete"), [std::set_new_handler](memory/new/set_new_handler.html "cpp/memory/new/set new handler"). 

Defined in header `[<new>](header/new.html "cpp/header/new")`  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/memory&action=edit&section=10 "Edit section: C-style memory management")] [C-style memory management](memory/c.html "cpp/memory/c")

Includes e.g. [std::malloc](memory/c/malloc.html "cpp/memory/c/malloc"), [std::free](memory/c/free.html "cpp/memory/c/free"). 

Defined in header `[<cstdlib>](header/cstdlib.html "cpp/header/cstdlib")`  
---  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/memory&action=edit&section=11 "Edit section: Uninitialized storage \(until C++20\)")] Uninitialized storage (until C++20)

Several utilities are provided to create and access raw storage. 

Defined in header `[<memory>](header/memory.html "cpp/header/memory")`  
---  
[ raw_storage_iterator](memory/raw_storage_iterator.html "cpp/memory/raw storage iterator")(deprecated in C++17)(removed in C++20) |  an iterator that allows standard algorithms to store results in uninitialized memory   
(class template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_raw_storage_iterator&action=edit)  
[ get_temporary_buffer](memory/get_temporary_buffer.html "cpp/memory/get temporary buffer")(deprecated in C++17)(removed in C++20) |  obtains uninitialized storage   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_get_temporary_buffer&action=edit)  
[ return_temporary_buffer](memory/return_temporary_buffer.html "cpp/memory/return temporary buffer")(deprecated in C++17)(removed in C++20) |  frees uninitialized storage   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/dsc_return_temporary_buffer&action=edit)  
  
### [[edit](https://en.cppreference.com/mwiki/index.php?title=cpp/memory&action=edit&section=12 "Edit section: Garbage collector support \(until C++23\)")] Garbage collector support (until C++23)

Defined in header `[<memory>](header/memory.html "cpp/header/memory")`  
---  
[ declare_reachable](memory/gc/declare_reachable.html "cpp/memory/gc/declare reachable")(C++11)(removed in C++23) |  declares that an object can not be recycled   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/gc/dsc_declare_reachable&action=edit)  
[ undeclare_reachable](memory/gc/undeclare_reachable.html "cpp/memory/gc/undeclare reachable")(C++11)(removed in C++23) |  declares that an object can be recycled   
(function template) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/gc/dsc_undeclare_reachable&action=edit)  
[ declare_no_pointers](memory/gc/declare_no_pointers.html "cpp/memory/gc/declare no pointers")(C++11)(removed in C++23) |  declares that a memory area does not contain traceable pointers   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/gc/dsc_declare_no_pointers&action=edit)  
[ undeclare_no_pointers](memory/gc/undeclare_no_pointers.html "cpp/memory/gc/undeclare no pointers")(C++11)(removed in C++23) |  cancels the effect of [std::declare_no_pointers](memory/gc/declare_no_pointers.html "cpp/memory/gc/declare no pointers")   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/gc/dsc_undeclare_no_pointers&action=edit)  
[ pointer_safety](memory/gc/pointer_safety.html "cpp/memory/gc/pointer safety")(C++11)(removed in C++23) |  lists pointer safety models   
(enum) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/gc/dsc_pointer_safety&action=edit)  
[ get_pointer_safety](memory/gc/get_pointer_safety.html "cpp/memory/gc/get pointer safety")(C++11)(removed in C++23) |  returns the current pointer safety model   
(function) [[edit]](https://en.cppreference.com/mwiki/index.php?title=Template:cpp/memory/gc/dsc_get_pointer_safety&action=edit)
