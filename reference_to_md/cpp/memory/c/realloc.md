[C++](../../../cpp.html "cpp")

[Compiler support](../../compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](../../freestanding.html "cpp/freestanding")  
[Language](../../language.html "cpp/language")  
[Standard library](../../standard_library.html "cpp/standard library")  
[Standard library headers](../../headers.html "cpp/header")  
[Named requirements](../../iterator/concepts.html "cpp/named req")  
[Feature test macros](../../experimental/feature_test.html "cpp/feature test") (C++20)  
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
[Execution control library](../../experimental/execution.html "cpp/execution") (C++26)  
[Technical specifications](../../experimental.html "cpp/experimental")  
[Symbols index](../../symbol_index.html "cpp/symbol index")  
[External libraries](../../links/libs.html "cpp/links/libs")  
  


[Memory management library](../../memory.html "cpp/memory")

| [_voidify_](../voidify.html "cpp/memory/voidify")(exposition only*)  
---  
[Allocators](../../memory.html#Allocators "cpp/memory")  
| [allocator](../allocator.html "cpp/memory/allocator")  
---  
[allocator_traits](../allocator_traits.html "cpp/memory/allocator traits")(C++11)  
[allocation_result](../allocation_result.html "cpp/memory/allocation result")(C++23)  
[scoped_allocator_adaptor](../scoped_allocator_adaptor.html "cpp/memory/scoped allocator adaptor")(C++11)  
[pmr::polymorphic_allocator](../polymorphic_allocator.html "cpp/memory/polymorphic allocator")(C++17)  
  
| [allocator_arg](../allocator_arg.html "cpp/memory/allocator arg")(C++11)  
---  
[uses_allocator](../uses_allocator.html "cpp/memory/uses allocator")(C++11)  
[uses_allocator_construction_args](../uses_allocator_construction_args.html "cpp/memory/uses allocator construction args")(C++20)  
[make_obj_using_allocator](../make_obj_using_allocator.html "cpp/memory/make obj using allocator")(C++20)  
[uninitialized_construct_using_allocator](../uninitialized_construct_using_allocator.html "cpp/memory/uninitialized construct using allocator")(C++20)  
  
[Uninitialized memory algorithms](../../memory.html#Uninitialized_memory_algorithms "cpp/memory")  
| [uninitialized_copy](../uninitialized_copy.html "cpp/memory/uninitialized copy")  
---  
[uninitialized_fill](../uninitialized_fill.html "cpp/memory/uninitialized fill")  
[uninitialized_move](../uninitialized_move.html "cpp/memory/uninitialized move")(C++17)  
[uninitialized_copy_n](../uninitialized_copy_n.html "cpp/memory/uninitialized copy n")(C++11)  
[uninitialized_fill_n](../uninitialized_fill_n.html "cpp/memory/uninitialized fill n")  
[uninitialized_move_n](../uninitialized_move_n.html "cpp/memory/uninitialized move n")(C++17)  
[construct_at](../construct_at.html "cpp/memory/construct at")(C++20)  
  
| [uninitialized_default_construct](../uninitialized_default_construct.html "cpp/memory/uninitialized default construct")(C++17)  
---  
[uninitialized_value_construct](../uninitialized_value_construct.html "cpp/memory/uninitialized value construct")(C++17)  
[destroy](../destroy.html "cpp/memory/destroy")(C++17)  
[uninitialized_default_construct_n](../uninitialized_default_construct_n.html "cpp/memory/uninitialized default construct n")(C++17)  
[uninitialized_value_construct_n](../uninitialized_value_construct_n.html "cpp/memory/uninitialized value construct n")(C++17)  
[destroy_n](../destroy_n.html "cpp/memory/destroy n")(C++17)  
[destroy_at](../destroy_at.html "cpp/memory/destroy at")(C++17)  
  
[Constrained uninitialized memory algorithms](../../memory.html#Constrained_uninitialized_memory_algorithms "cpp/memory")  
| [ranges::uninitialized_copy](../ranges/uninitialized_copy.html "cpp/memory/ranges/uninitialized copy")(C++20)  
---  
[ranges::uninitialized_fill](../ranges/uninitialized_fill.html "cpp/memory/ranges/uninitialized fill")(C++20)  
[ranges::uninitialized_move](../ranges/uninitialized_move.html "cpp/memory/ranges/uninitialized move")(C++20)  
[ranges::uninitialized_copy_n](../ranges/uninitialized_copy_n.html "cpp/memory/ranges/uninitialized copy n")(C++20)` `  
[ranges::uninitialized_fill_n](../ranges/uninitialized_fill_n.html "cpp/memory/ranges/uninitialized fill n")(C++20)  
[ranges::uninitialized_move_n](../ranges/uninitialized_move_n.html "cpp/memory/ranges/uninitialized move n")(C++20)  
[ranges::construct_at](../ranges/construct_at.html "cpp/memory/ranges/construct at")(C++20)  
  
| [ranges::uninitialized_default_construct](../ranges/uninitialized_default_construct.html "cpp/memory/ranges/uninitialized default construct")(C++20)  
---  
[ranges::uninitialized_value_construct](../ranges/uninitialized_value_construct.html "cpp/memory/ranges/uninitialized value construct")(C++20)  
[ranges::destroy](../ranges/destroy.html "cpp/memory/ranges/destroy")(C++20)  
[ranges::uninitialized_default_construct_n](../ranges/uninitialized_default_construct_n.html "cpp/memory/ranges/uninitialized default construct n")(C++20)` `  
[ranges::uninitialized_value_construct_n](../ranges/uninitialized_value_construct_n.html "cpp/memory/ranges/uninitialized value construct n")(C++20)  
[ranges::destroy_n](../ranges/destroy_n.html "cpp/memory/ranges/destroy n")(C++20)  
[ranges::destroy_at](../ranges/destroy_at.html "cpp/memory/ranges/destroy at")(C++20)  
  
[Memory resources](../../memory.html#Memory_resources "cpp/memory")  
| [pmr::memory_resource](../memory_resource.html "cpp/memory/memory resource")(C++17)  
---  
[pmr::get_default_resource](../get_default_resource.html "cpp/memory/get default resource")(C++17)  
[pmr::set_default_resource](../set_default_resource.html "cpp/memory/set default resource")(C++17)  
[pmr::new_delete_resource](../new_delete_resource.html "cpp/memory/new delete resource")(C++17)  
[pmr::pool_options](../pool_options.html "cpp/memory/pool options")(C++17)  
  
| [pmr::null_memory_resource](../null_memory_resource.html "cpp/memory/null memory resource")(C++17)  
---  
[pmr::synchronized_pool_resource](../synchronized_pool_resource.html "cpp/memory/synchronized pool resource")(C++17)  
[pmr::unsynchronized_pool_resource](../unsynchronized_pool_resource.html "cpp/memory/unsynchronized pool resource")(C++17)  
[pmr::monotonic_buffer_resource](../monotonic_buffer_resource.html "cpp/memory/monotonic buffer resource")(C++17)  
  
  
  
| [Explicit lifetime management](../../memory.html#Explicit_lifetime_management "cpp/memory")  
---  
[start_lifetime_as](../start_lifetime_as.html "cpp/memory/start lifetime as")(C++23)  
[start_lifetime_as_array](../start_lifetime_as.html "cpp/memory/start lifetime as")(C++23)  
  
| [Types for composite class design](../../memory.html#Types_for_composite_class_design "cpp/memory")  
---  
[indirect](../indirect.html "cpp/memory/indirect")(C++26)  
[polymorphic](../polymorphic.html "cpp/memory/polymorphic")(C++26)  
  
[Uninitialized storage](../../memory.html#Uninitialized_storage "cpp/memory") (until C++20)  
| [raw_storage_iterator](../raw_storage_iterator.html "cpp/memory/raw storage iterator")(until C++20*)  
---  
[get_temporary_buffer](../get_temporary_buffer.html "cpp/memory/get temporary buffer")(until C++20*)  
  
| [return_temporary_buffer](../return_temporary_buffer.html "cpp/memory/return temporary buffer")(until C++20*)  
---  
  
  
  
[Garbage collector support](../../memory.html#Garbage_collector_support "cpp/memory") (until C++23)  
| [declare_reachable](../gc/declare_reachable.html "cpp/memory/gc/declare reachable")(C++11)(until C++23)  
---  
[declare_no_pointers](../gc/declare_no_pointers.html "cpp/memory/gc/declare no pointers")(C++11)(until C++23)  
[pointer_safety](../gc/pointer_safety.html "cpp/memory/gc/pointer safety")(C++11)(until C++23)  
  
| [undeclare_reachable](../gc/undeclare_reachable.html "cpp/memory/gc/undeclare reachable")(C++11)(until C++23)  
---  
[undeclare_no_pointers](../gc/undeclare_no_pointers.html "cpp/memory/gc/undeclare no pointers")(C++11)(until C++23)  
[get_pointer_safety](../gc/get_pointer_safety.html "cpp/memory/gc/get pointer safety")(C++11)(until C++23)  
  
| [Low level memory  
management](../new.html#Low_level_memory_management "cpp/memory/new")  
---  
[operator newoperator new[]](../new/operator_new.html "cpp/memory/new/operator new")  
[operator deleteoperator delete[]](../new/operator_delete.html "cpp/memory/new/operator delete")  
[nothrow_t](../new/nothrow_t.html "cpp/memory/new/nothrow t")  
[nothrow](../new/nothrow.html "cpp/memory/new/nothrow")  
[new_handler](../new/new_handler.html "cpp/memory/new/new handler")  
[set_new_handler](../new/set_new_handler.html "cpp/memory/new/set new handler")  
[get_new_handler](../new/get_new_handler.html "cpp/memory/new/get new handler")(C++11)  
[bad_alloc](../new/bad_alloc.html "cpp/memory/new/bad alloc")  
[bad_array_new_length](../new/bad_array_new_length.html "cpp/memory/new/bad array new length")(C++11)  
[align_val_t](../new/align_val_t.html "cpp/memory/new/align val t")(C++17)  
[destroying_delete_t](../new/destroying_delete_t.html "cpp/memory/new/destroying delete t")(C++20)  
[launder](../../utility/launder.html "cpp/utility/launder")(C++17)  
[Smart pointers](../../memory.html#Smart_pointers "cpp/memory")  
[unique_ptr](../unique_ptr.html "cpp/memory/unique ptr")(C++11)  
[shared_ptr](../shared_ptr.html "cpp/memory/shared ptr")(C++11)  
[weak_ptr](../weak_ptr.html "cpp/memory/weak ptr")(C++11)  
[auto_ptr](../auto_ptr.html "cpp/memory/auto ptr")(until C++17*)  
[owner_less](../owner_less.html "cpp/memory/owner less")(C++11)  
[owner_less<void>](../owner_less_void.html "cpp/memory/owner less void")(C++17)  
[owner_hash](../owner_hash.html "cpp/memory/owner hash")(C++26)  
[owner_equal](../owner_equal.html "cpp/memory/owner equal")(C++26)  
[enable_shared_from_this](../enable_shared_from_this.html "cpp/memory/enable shared from this")(C++11)  
[bad_weak_ptr](../bad_weak_ptr.html "cpp/memory/bad weak ptr")(C++11)  
[default_delete](../default_delete.html "cpp/memory/default delete")(C++11)  
[out_ptr_t](../out_ptr_t.html "cpp/memory/out ptr t")(C++23)  
[inout_ptr_t](../inout_ptr_t.html "cpp/memory/inout ptr t")(C++23)  
[Miscellaneous](../../memory.html#Miscellaneous "cpp/memory")  
[pointer_traits](../pointer_traits.html "cpp/memory/pointer traits")(C++11)  
[to_address](../to_address.html "cpp/memory/to address")(C++20)  
[addressof](../addressof.html "cpp/memory/addressof")(C++11)  
[align](../align.html "cpp/memory/align")(C++11)  
[assume_aligned](../assume_aligned.html "cpp/memory/assume aligned")(C++20)  
[is_sufficiently_aligned](../is_sufficiently_aligned.html "cpp/memory/is sufficiently aligned")(C++26)  
[C Library](../c.html "cpp/memory/c")  
| [malloc](malloc.html "cpp/memory/c/malloc")  
---  
[calloc](calloc.html "cpp/memory/c/calloc")  
**realloc**  
  
| [free](free.html "cpp/memory/c/free")  
---  
[aligned_alloc](aligned_alloc.html "cpp/memory/c/aligned alloc")(C++17)  
  
  
  


Defined in header `[<cstdlib>](../../header/cstdlib.html "cpp/header/cstdlib")` |  |   
---|---|---  
void* realloc( void* ptr, [std::size_t](../../types/size_t.html) new_size ); |  |   
| |   
  
Reallocates the given area of memory ([implicitly creating](../../language/objects.html#Object_creation "cpp/language/object") objects in the destination area). It must be previously allocated by [std::malloc](malloc.html "cpp/memory/c/malloc"), [std::calloc](calloc.html "cpp/memory/c/calloc") or `std::realloc` and not yet freed with [std::free](free.html "cpp/memory/c/free"), otherwise, the results are undefined. 

The reallocation is done by either: 

a) expanding or contracting the existing area pointed to by ptr, if possible. The contents of the area remain unchanged up to the lesser of the new and old sizes. If the area is expanded, the contents of the new part of the array are undefined.

b) allocating a new memory block of size new_size bytes, copying memory area with size equal the lesser of the new and the old sizes, and freeing the old block.

If there is not enough memory, the old memory block is not freed and null pointer is returned. 

If ptr is a null pointer, the behavior is the same as calling [std::malloc](malloc.html)(new_size). 

If new_size is zero, the behavior is implementation defined: null pointer may be returned (in which case the old memory block may or may not be freed) or some non-null pointer may be returned that may not be used to access storage. Such usage is deprecated (via [C DR 400](https://open-std.org/JTC1/SC22/WG14/www/docs/n2396.htm#dr_400)).(since C++20)

The following functions are required to be thread-safe: 

  * The library versions of [`operator new`](../new/operator_new.html "cpp/memory/new/operator new") and [`operator delete`](../new/operator_delete.html "cpp/memory/new/operator delete")
  * User replacement versions of global [`operator new`](../new/operator_new.html "cpp/memory/new/operator new") and [`operator delete`](../new/operator_delete.html "cpp/memory/new/operator delete")
  * [std::calloc](calloc.html "cpp/memory/c/calloc"), [std::malloc](malloc.html "cpp/memory/c/malloc"), **std::realloc** , [std::aligned_alloc](aligned_alloc.html "cpp/memory/c/aligned alloc")(since C++17), [std::free](free.html "cpp/memory/c/free")

Calls to these functions that allocate or deallocate a particular unit of storage occur in a single total order, and each such deallocation call [happens-before](../../atomic/memory_order.html "cpp/atomic/memory order") the next allocation (if any) in this order.  | (since C++11)  
---|---  
  
## Contents

  * [1 Parameters](realloc.html#Parameters)
  * [2 Return value](realloc.html#Return_value)
  * [3 Notes](realloc.html#Notes)
  * [4 Example](realloc.html#Example)
  * [5 See also](realloc.html#See_also)

  
---  
  
### Parameters

ptr  |  \-  |  pointer to the memory area to be reallocated   
---|---|---  
new_size  |  \-  |  new size of the array   
  
### Return value

On success, returns a pointer to the beginning of newly allocated memory. To avoid a memory leak, the returned pointer must be deallocated with [std::free](free.html "cpp/memory/c/free") or `std::realloc`. The original pointer ptr is invalidated and any access to it is [undefined behavior](../../language/ub.html "cpp/language/ub") (even if reallocation was in-place). 

On failure, returns a null pointer. The original pointer ptr remains valid and may need to be deallocated with [std::free](free.html "cpp/memory/c/free"). 

### Notes

Because reallocation may involve bytewise copying (regardless of whether it expands or contracts the area), it is necessary (but not sufficient) for those objects to be of [TriviallyCopyable](../../named_req/TriviallyCopyable.html "cpp/named req/TriviallyCopyable") type. 

Some non-standard libraries define a type trait "BitwiseMovable" or "Relocatable", which describes a type that does not have: 

  * external references (e.g. nodes of a list or a tree that holds reference to another element), and 
  * internal references (e.g. member pointer which might hold the address of another member). 



Objects of such type can be accessed after their storage is reallocated even if their copy constructors are not trivial. 

### Example

Run this code
    
    
    #include <cassert>
    #include <cstdlib>
    #include <new>
     
    class MallocDynamicBuffer
    {
        char* p;
    public:
        explicit MallocDynamicBuffer([std::size_t](../../types/size_t.html) initial = 0) : p(nullptr)
        {
            resize(initial);
        }
     
        ~MallocDynamicBuffer() { [std::free](free.html)(p); }
     
        void resize([std::size_t](../../types/size_t.html) newSize)
        {
            if (newSize == 0) // this check is not strictly needed,
            {
                [std::free](free.html)(p); // but zero-size realloc is deprecated in C
                p = nullptr;
            }
            else
            {
                if (void* mem = std::realloc(p, newSize))
                    p = static_cast<char*>(mem);
                else
                    throw [std::bad_alloc](../new/bad_alloc.html)();
            }
        }
     
        char& operator[](size_t n) { return p[n]; }
        char operator[](size_t n) const { return p[n]; }
    };
     
    int main()
    {
        MallocDynamicBuffer buf1(1024);
        buf1[5] = 'f';
        buf1.resize(10); // shrink
        [assert](../../error/assert.html)(buf1[5] == 'f');
        buf1.resize(1024); // grow
        [assert](../../error/assert.html)(buf1[5] == 'f');
    }

### See also

[C documentation](../../../c/memory/realloc.html "c/memory/realloc") for realloc  
---
