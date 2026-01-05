[C++](../../cpp.html "cpp")

[Compiler support](../compiler_support.html "cpp/compiler support")  
---  
[Freestanding and hosted](../freestanding.html "cpp/freestanding")  
[Language](../language.html "cpp/language")  
[Standard library](../standard_library.html "cpp/standard library")  
[Standard library headers](../headers.html "cpp/header")  
[Named requirements](../iterator/concepts.html "cpp/named req")  
[Feature test macros](../experimental/feature_test.html "cpp/feature test") (C++20)  
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
[Execution control library](../experimental/execution.html "cpp/execution") (C++26)  
[Technical specifications](../experimental.html "cpp/experimental")  
[Symbols index](../symbol_index.html "cpp/symbol index")  
[External libraries](../links/libs.html "cpp/links/libs")  
  


[Memory management library](../memory.html "cpp/memory")

| [_voidify_](voidify.html "cpp/memory/voidify")(exposition only*)  
---  
[Allocators](../memory.html#Allocators "cpp/memory")  
| [allocator](allocator.html "cpp/memory/allocator")  
---  
[allocator_traits](allocator_traits.html "cpp/memory/allocator traits")(C++11)  
[allocation_result](allocation_result.html "cpp/memory/allocation result")(C++23)  
[scoped_allocator_adaptor](scoped_allocator_adaptor.html "cpp/memory/scoped allocator adaptor")(C++11)  
[pmr::polymorphic_allocator](polymorphic_allocator.html "cpp/memory/polymorphic allocator")(C++17)  
  
| [allocator_arg](allocator_arg.html "cpp/memory/allocator arg")(C++11)  
---  
[uses_allocator](uses_allocator.html "cpp/memory/uses allocator")(C++11)  
[uses_allocator_construction_args](uses_allocator_construction_args.html "cpp/memory/uses allocator construction args")(C++20)  
[make_obj_using_allocator](make_obj_using_allocator.html "cpp/memory/make obj using allocator")(C++20)  
[uninitialized_construct_using_allocator](uninitialized_construct_using_allocator.html "cpp/memory/uninitialized construct using allocator")(C++20)  
  
[Uninitialized memory algorithms](../memory.html#Uninitialized_memory_algorithms "cpp/memory")  
| [uninitialized_copy](uninitialized_copy.html "cpp/memory/uninitialized copy")  
---  
[uninitialized_fill](uninitialized_fill.html "cpp/memory/uninitialized fill")  
[uninitialized_move](uninitialized_move.html "cpp/memory/uninitialized move")(C++17)  
[uninitialized_copy_n](uninitialized_copy_n.html "cpp/memory/uninitialized copy n")(C++11)  
[uninitialized_fill_n](uninitialized_fill_n.html "cpp/memory/uninitialized fill n")  
[uninitialized_move_n](uninitialized_move_n.html "cpp/memory/uninitialized move n")(C++17)  
[construct_at](construct_at.html "cpp/memory/construct at")(C++20)  
  
| [uninitialized_default_construct](uninitialized_default_construct.html "cpp/memory/uninitialized default construct")(C++17)  
---  
[uninitialized_value_construct](uninitialized_value_construct.html "cpp/memory/uninitialized value construct")(C++17)  
[destroy](destroy.html "cpp/memory/destroy")(C++17)  
[uninitialized_default_construct_n](uninitialized_default_construct_n.html "cpp/memory/uninitialized default construct n")(C++17)  
[uninitialized_value_construct_n](uninitialized_value_construct_n.html "cpp/memory/uninitialized value construct n")(C++17)  
[destroy_n](destroy_n.html "cpp/memory/destroy n")(C++17)  
[destroy_at](destroy_at.html "cpp/memory/destroy at")(C++17)  
  
[Constrained uninitialized memory algorithms](../memory.html#Constrained_uninitialized_memory_algorithms "cpp/memory")  
| [ranges::uninitialized_copy](ranges/uninitialized_copy.html "cpp/memory/ranges/uninitialized copy")(C++20)  
---  
[ranges::uninitialized_fill](ranges/uninitialized_fill.html "cpp/memory/ranges/uninitialized fill")(C++20)  
[ranges::uninitialized_move](ranges/uninitialized_move.html "cpp/memory/ranges/uninitialized move")(C++20)  
[ranges::uninitialized_copy_n](ranges/uninitialized_copy_n.html "cpp/memory/ranges/uninitialized copy n")(C++20)` `  
[ranges::uninitialized_fill_n](ranges/uninitialized_fill_n.html "cpp/memory/ranges/uninitialized fill n")(C++20)  
[ranges::uninitialized_move_n](ranges/uninitialized_move_n.html "cpp/memory/ranges/uninitialized move n")(C++20)  
[ranges::construct_at](ranges/construct_at.html "cpp/memory/ranges/construct at")(C++20)  
  
| [ranges::uninitialized_default_construct](ranges/uninitialized_default_construct.html "cpp/memory/ranges/uninitialized default construct")(C++20)  
---  
[ranges::uninitialized_value_construct](ranges/uninitialized_value_construct.html "cpp/memory/ranges/uninitialized value construct")(C++20)  
[ranges::destroy](ranges/destroy.html "cpp/memory/ranges/destroy")(C++20)  
[ranges::uninitialized_default_construct_n](ranges/uninitialized_default_construct_n.html "cpp/memory/ranges/uninitialized default construct n")(C++20)` `  
[ranges::uninitialized_value_construct_n](ranges/uninitialized_value_construct_n.html "cpp/memory/ranges/uninitialized value construct n")(C++20)  
[ranges::destroy_n](ranges/destroy_n.html "cpp/memory/ranges/destroy n")(C++20)  
[ranges::destroy_at](ranges/destroy_at.html "cpp/memory/ranges/destroy at")(C++20)  
  
[Memory resources](../memory.html#Memory_resources "cpp/memory")  
| [pmr::memory_resource](memory_resource.html "cpp/memory/memory resource")(C++17)  
---  
[pmr::get_default_resource](get_default_resource.html "cpp/memory/get default resource")(C++17)  
[pmr::set_default_resource](set_default_resource.html "cpp/memory/set default resource")(C++17)  
[pmr::new_delete_resource](new_delete_resource.html "cpp/memory/new delete resource")(C++17)  
[pmr::pool_options](pool_options.html "cpp/memory/pool options")(C++17)  
  
| [pmr::null_memory_resource](null_memory_resource.html "cpp/memory/null memory resource")(C++17)  
---  
[pmr::synchronized_pool_resource](synchronized_pool_resource.html "cpp/memory/synchronized pool resource")(C++17)  
[pmr::unsynchronized_pool_resource](unsynchronized_pool_resource.html "cpp/memory/unsynchronized pool resource")(C++17)  
**pmr::monotonic_buffer_resource**(C++17)  
  
  
  
| [Explicit lifetime management](../memory.html#Explicit_lifetime_management "cpp/memory")  
---  
[start_lifetime_as](start_lifetime_as.html "cpp/memory/start lifetime as")(C++23)  
[start_lifetime_as_array](start_lifetime_as.html "cpp/memory/start lifetime as")(C++23)  
  
| [Types for composite class design](../memory.html#Types_for_composite_class_design "cpp/memory")  
---  
[indirect](indirect.html "cpp/memory/indirect")(C++26)  
[polymorphic](polymorphic.html "cpp/memory/polymorphic")(C++26)  
  
[Uninitialized storage](../memory.html#Uninitialized_storage "cpp/memory") (until C++20)  
| [raw_storage_iterator](raw_storage_iterator.html "cpp/memory/raw storage iterator")(until C++20*)  
---  
[get_temporary_buffer](get_temporary_buffer.html "cpp/memory/get temporary buffer")(until C++20*)  
  
| [return_temporary_buffer](return_temporary_buffer.html "cpp/memory/return temporary buffer")(until C++20*)  
---  
  
  
  
[Garbage collector support](../memory.html#Garbage_collector_support "cpp/memory") (until C++23)  
| [declare_reachable](gc/declare_reachable.html "cpp/memory/gc/declare reachable")(C++11)(until C++23)  
---  
[declare_no_pointers](gc/declare_no_pointers.html "cpp/memory/gc/declare no pointers")(C++11)(until C++23)  
[pointer_safety](gc/pointer_safety.html "cpp/memory/gc/pointer safety")(C++11)(until C++23)  
  
| [undeclare_reachable](gc/undeclare_reachable.html "cpp/memory/gc/undeclare reachable")(C++11)(until C++23)  
---  
[undeclare_no_pointers](gc/undeclare_no_pointers.html "cpp/memory/gc/undeclare no pointers")(C++11)(until C++23)  
[get_pointer_safety](gc/get_pointer_safety.html "cpp/memory/gc/get pointer safety")(C++11)(until C++23)  
  
| [Low level memory  
management](new.html#Low_level_memory_management "cpp/memory/new")  
---  
[operator newoperator new[]](new/operator_new.html "cpp/memory/new/operator new")  
[operator deleteoperator delete[]](new/operator_delete.html "cpp/memory/new/operator delete")  
[nothrow_t](new/nothrow_t.html "cpp/memory/new/nothrow t")  
[nothrow](new/nothrow.html "cpp/memory/new/nothrow")  
[new_handler](new/new_handler.html "cpp/memory/new/new handler")  
[set_new_handler](new/set_new_handler.html "cpp/memory/new/set new handler")  
[get_new_handler](new/get_new_handler.html "cpp/memory/new/get new handler")(C++11)  
[bad_alloc](new/bad_alloc.html "cpp/memory/new/bad alloc")  
[bad_array_new_length](new/bad_array_new_length.html "cpp/memory/new/bad array new length")(C++11)  
[align_val_t](new/align_val_t.html "cpp/memory/new/align val t")(C++17)  
[destroying_delete_t](new/destroying_delete_t.html "cpp/memory/new/destroying delete t")(C++20)  
[launder](../utility/launder.html "cpp/utility/launder")(C++17)  
[Smart pointers](../memory.html#Smart_pointers "cpp/memory")  
[unique_ptr](unique_ptr.html "cpp/memory/unique ptr")(C++11)  
[shared_ptr](shared_ptr.html "cpp/memory/shared ptr")(C++11)  
[weak_ptr](weak_ptr.html "cpp/memory/weak ptr")(C++11)  
[auto_ptr](auto_ptr.html "cpp/memory/auto ptr")(until C++17*)  
[owner_less](owner_less.html "cpp/memory/owner less")(C++11)  
[owner_less<void>](owner_less_void.html "cpp/memory/owner less void")(C++17)  
[owner_hash](owner_hash.html "cpp/memory/owner hash")(C++26)  
[owner_equal](owner_equal.html "cpp/memory/owner equal")(C++26)  
[enable_shared_from_this](enable_shared_from_this.html "cpp/memory/enable shared from this")(C++11)  
[bad_weak_ptr](bad_weak_ptr.html "cpp/memory/bad weak ptr")(C++11)  
[default_delete](default_delete.html "cpp/memory/default delete")(C++11)  
[out_ptr_t](out_ptr_t.html "cpp/memory/out ptr t")(C++23)  
[inout_ptr_t](inout_ptr_t.html "cpp/memory/inout ptr t")(C++23)  
[Miscellaneous](../memory.html#Miscellaneous "cpp/memory")  
[pointer_traits](pointer_traits.html "cpp/memory/pointer traits")(C++11)  
[to_address](to_address.html "cpp/memory/to address")(C++20)  
[addressof](addressof.html "cpp/memory/addressof")(C++11)  
[align](align.html "cpp/memory/align")(C++11)  
[assume_aligned](assume_aligned.html "cpp/memory/assume aligned")(C++20)  
[is_sufficiently_aligned](is_sufficiently_aligned.html "cpp/memory/is sufficiently aligned")(C++26)  
[C Library](c.html "cpp/memory/c")  
| [malloc](c/malloc.html "cpp/memory/c/malloc")  
---  
[calloc](c/calloc.html "cpp/memory/c/calloc")  
[realloc](c/realloc.html "cpp/memory/c/realloc")  
  
| [free](c/free.html "cpp/memory/c/free")  
---  
[aligned_alloc](c/aligned_alloc.html "cpp/memory/c/aligned alloc")(C++17)  
  
  
  


**`std::pmr::monotonic_buffer_resource`**

[monotonic_buffer_resource::monotonic_buffer_resource](monotonic_buffer_resource/monotonic_buffer_resource.html "cpp/memory/monotonic buffer resource/monotonic buffer resource")  
---  
[monotonic_buffer_resource::~monotonic_buffer_resource](monotonic_buffer_resource/~monotonic_buffer_resource.html "cpp/memory/monotonic buffer resource/~monotonic buffer resource")  
Public member functions  
[monotonic_buffer_resource::release](monotonic_buffer_resource/release.html "cpp/memory/monotonic buffer resource/release")  
[monotonic_buffer_resource::upstream_resource](monotonic_buffer_resource/upstream_resource.html "cpp/memory/monotonic buffer resource/upstream resource")  
Protected member functions  
[monotonic_buffer_resource::do_allocate](monotonic_buffer_resource/do_allocate.html "cpp/memory/monotonic buffer resource/do allocate")  
[monotonic_buffer_resource::do_deallocate](monotonic_buffer_resource/do_deallocate.html "cpp/memory/monotonic buffer resource/do deallocate")  
[monotonic_buffer_resource::do_is_equal](monotonic_buffer_resource/do_is_equal.html "cpp/memory/monotonic buffer resource/do is equal")  
  


Defined in header `[<memory_resource>](../header/memory_resource.html "cpp/header/memory resource")` |  |   
---|---|---  
class monotonic_buffer_resource : public [std::pmr::memory_resource](memory_resource.html); |  |  (since C++17)  
| |   
  
The class `std::pmr::monotonic_buffer_resource` is a special-purpose memory resource class that releases the allocated memory only when the resource is destroyed. It is intended for very fast memory allocations in situations where memory is used to build up a few objects and then is released all at once. 

`monotonic_buffer_resource` can be constructed with an initial buffer. If there is no initial buffer, or if the buffer is exhausted, additional buffers are obtained from an _upstream memory resource_ supplied at construction. The size of buffers obtained follows a geometric progression. 

`monotonic_buffer_resource` is not thread-safe. 

## Contents

  * [1 Member functions](monotonic_buffer_resource.html#Member_functions)
    * [1.1 Public member functions](monotonic_buffer_resource.html#Public_member_functions)
    * [1.2 Protected member functions](monotonic_buffer_resource.html#Protected_member_functions)
  * [2 Example](monotonic_buffer_resource.html#Example)

  
---  
  
### Member functions

[ (constructor)](monotonic_buffer_resource/monotonic_buffer_resource.html "cpp/memory/monotonic buffer resource/monotonic buffer resource") |  constructs a `monotonic_buffer_resource`   
(public member function)   
---|---  
[ (destructor)](monotonic_buffer_resource/~monotonic_buffer_resource.html "cpp/memory/monotonic buffer resource/~monotonic buffer resource")[virtual] |  destroys a `monotonic_buffer_resource`, releasing all allocated memory   
(virtual public member function)   
operator=[deleted] |  copy assignment operator is deleted. `monotonic_buffer_resource` is not copy assignable   
(public member function)   
  
#####  Public member functions   
  
[ release](monotonic_buffer_resource/release.html "cpp/memory/monotonic buffer resource/release") |  release all allocated memory   
(public member function)   
[ upstream_resource](monotonic_buffer_resource/upstream_resource.html "cpp/memory/monotonic buffer resource/upstream resource") |  returns a pointer to the upstream memory resource   
(public member function)   
  
#####  Protected member functions   
  
[ do_allocate](monotonic_buffer_resource/do_allocate.html "cpp/memory/monotonic buffer resource/do allocate")[virtual] |  allocate memory   
(virtual protected member function)   
[ do_deallocate](monotonic_buffer_resource/do_deallocate.html "cpp/memory/monotonic buffer resource/do deallocate")[virtual] |  no-op   
(virtual protected member function)   
[ do_is_equal](monotonic_buffer_resource/do_is_equal.html "cpp/memory/monotonic buffer resource/do is equal")[virtual] |  compare for equality with another [std::pmr::memory_resource](memory_resource.html "cpp/memory/memory resource")   
(virtual protected member function)   
  
### Example

The program measures the time of creating huge double-linked lists using the following allocators: 

  * default standard allocator, 
  * default `pmr` allocator, 
  * `pmr` allocator with monotonic resource but without explicit memory buffer, 
  * `pmr` allocator with monotonic resource and external memory buffer (on stack). 



Run this code
    
    
    #include <array>
    #include <chrono>
    #include <cstddef>
    #include <iomanip>
    #include <iostream>
    #include <list>
    #include <memory_resource>
     
    template<typename Func>
    auto benchmark(Func test_func, int iterations)
    {
        const auto start = [std::chrono::system_clock::now](../chrono/system_clock/now.html)();
        while (iterations-- > 0)
            test_func();
        const auto stop = [std::chrono::system_clock::now](../chrono/system_clock/now.html)();
        const auto secs = [std::chrono::duration](../chrono/duration.html)<double>(stop - start);
        return secs.count();
    }
     
    int main()
    {
        constexpr int iterations{100};
        constexpr int total_nodes{2'00'000};
     
        auto default_std_alloc = [total_nodes]
        {
            [std::list](../container/list.html)<int> list;
            for (int i{}; i != total_nodes; ++i)
                list.push_back(i);
        };
     
        auto default_pmr_alloc = [total_nodes]
        {
            [std::pmr::list](../container/list.html)<int> list;
            for (int i{}; i != total_nodes; ++i)
                list.push_back(i);
        };
     
        auto pmr_alloc_no_buf = [total_nodes]
        {
            std::pmr::monotonic_buffer_resource mbr;
            [std::pmr::polymorphic_allocator](polymorphic_allocator.html)<int> pa{&mbr};
            [std::pmr::list](../container/list.html)<int> list{pa};
            for (int i{}; i != total_nodes; ++i)
                list.push_back(i);
        };
     
        auto pmr_alloc_and_buf = [total_nodes]
        {
            [std::array](../container/array.html)<[std::byte](../types/byte.html), total_nodes * 32> buffer; // enough to fit in all nodes
            std::pmr::monotonic_buffer_resource mbr{buffer.data(), buffer.size()};
            [std::pmr::polymorphic_allocator](polymorphic_allocator.html)<int> pa{&mbr};
            [std::pmr::list](../container/list.html)<int> list{pa};
            for (int i{}; i != total_nodes; ++i)
                list.push_back(i);
        };
     
        const double t1 = benchmark(default_std_alloc, iterations);
        const double t2 = benchmark(default_pmr_alloc, iterations);
        const double t3 = benchmark(pmr_alloc_no_buf , iterations);
        const double t4 = benchmark(pmr_alloc_and_buf, iterations);
     
        [std::cout](../io/cout.html) << [std::fixed](../io/manip/fixed.html) << [std::setprecision](../io/manip/setprecision.html)(3)
                  << "t1 (default std alloc): " << t1 << " sec; t1/t1: " << t1/t1 << '\n'
                  << "t2 (default pmr alloc): " << t2 << " sec; t1/t2: " << t1/t2 << '\n'
                  << "t3 (pmr alloc  no buf): " << t3 << " sec; t1/t3: " << t1/t3 << '\n'
                  << "t4 (pmr alloc and buf): " << t4 << " sec; t1/t4: " << t1/t4 << '\n';
    }

Possible output: 
    
    
    t1 (default std alloc): 0.720 sec; t1/t1: 1.000
    t2 (default pmr alloc): 0.915 sec; t1/t2: 0.787
    t3 (pmr alloc  no buf): 0.370 sec; t1/t3: 1.945
    t4 (pmr alloc and buf): 0.247 sec; t1/t4: 2.914
