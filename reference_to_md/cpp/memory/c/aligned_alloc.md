 
  


  
  
  
  
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
[realloc](realloc.html "cpp/memory/c/realloc")  
  
| [free](free.html "cpp/memory/c/free")  
---  
**aligned_alloc**(C++17)  
  
  
  


Defined in header `[<cstdlib>](../../header/cstdlib.html "cpp/header/cstdlib")` |  |   
---|---|---  
void* aligned_alloc( [std::size_t](../../types/size_t.html) alignment, [std::size_t](../../types/size_t.html) size ); |  |  (since C++17)  
| |   
  
Allocate size bytes of uninitialized storage whose alignment is specified by alignment ([implicitly creating](../../language/objects.html#Object_creation "cpp/language/object") objects in the destination area). The size parameter must be an integral multiple of alignment. 

The following functions are required to be thread-safe: 

  * The library versions of [`operator new`](../new/operator_new.html "cpp/memory/new/operator new") and [`operator delete`](../new/operator_delete.html "cpp/memory/new/operator delete")
  * User replacement versions of global [`operator new`](../new/operator_new.html "cpp/memory/new/operator new") and [`operator delete`](../new/operator_delete.html "cpp/memory/new/operator delete")
  * [std::calloc](calloc.html "cpp/memory/c/calloc"), [std::malloc](malloc.html "cpp/memory/c/malloc"), [std::realloc](realloc.html "cpp/memory/c/realloc"), **std::aligned_alloc** , [std::free](free.html "cpp/memory/c/free")



Calls to these functions that allocate or deallocate a particular unit of storage occur in a single total order, and each such deallocation call [happens-before](../../atomic/memory_order.html "cpp/atomic/memory order") the next allocation (if any) in this order. 

## Contents

  * [1 Parameters](aligned_alloc.html#Parameters)
  * [2 Return value](aligned_alloc.html#Return_value)
  * [3 Notes](aligned_alloc.html#Notes)
  * [4 Example](aligned_alloc.html#Example)
  * [5 See also](aligned_alloc.html#See_also)

  
---  
  
### Parameters

alignment  |  \-  |  specifies the alignment. Must be a valid alignment supported by the implementation.   
---|---|---  
size  |  \-  |  number of bytes to allocate. An integral multiple of alignment.   
  
### Return value

On success, returns the pointer to the beginning of newly allocated memory. To avoid a memory leak, the returned pointer must be deallocated with [std::free](free.html "cpp/memory/c/free") or [std::realloc](realloc.html "cpp/memory/c/realloc"). 

On failure, returns a null pointer. 

### Notes

Passing a size which is not an integral multiple of alignment or an alignment which is not valid or not supported by the implementation causes the function to fail and return a null pointer (C11, as published, specified undefined behavior in this case, this was corrected by [DR460](https://open-std.org/JTC1/SC22/WG14/www/docs/summary.htm#dr_460)). 

As an example of the “supported by the implementation” requirement, POSIX function [`posix_memalign`](https://pubs.opengroup.org/onlinepubs/9699919799/functions/posix_memalign.html) accepts any alignment that is a power of two and a multiple of sizeof(void*), and POSIX-based implementations of `aligned_alloc` inherit this requirement. 

Fundamental alignments are always supported. If alignment is a power of two and not greater than alignof([std::max_align_t](../../types/max_align_t.html)), `aligned_alloc` may simply call [std::malloc](malloc.html "cpp/memory/c/malloc"). 

Regular [std::malloc](malloc.html "cpp/memory/c/malloc") aligns memory suitable for any object type with a fundamental alignment. This function is useful for over-aligned allocations, such as to [SSE](https://en.wikipedia.org/wiki/Streaming_SIMD_Extensions "enwiki:Streaming SIMD Extensions"), cache line, or [VM page](https://en.wikipedia.org/wiki/Page_\(computer_memory\)#Multiple_page_sizes "enwiki:Page \(computer memory\)") boundary. 

This function is not supported in Microsoft C Runtime library because its implementation of [std::free](free.html "cpp/memory/c/free") is [unable to handle aligned allocations](https://learn.microsoft.com/en-us/cpp/standard-library/cstdlib#remarks-6) of any kind. Instead, MS CRT provides [`_aligned_malloc`](https://learn.microsoft.com/en-us/cpp/c-runtime-library/reference/aligned-malloc) (to be freed with [`_aligned_free`](https://learn.microsoft.com/en-us/cpp/c-runtime-library/reference/aligned-free)). 

### Example

Run this code
    
    
    #include <cstdio>
    #include <cstdlib>
     
    int main()
    {
        int* p1 = static_cast<int*>([std::malloc](malloc.html)(10 * sizeof *p1));
        [std::printf](../../io/c/fprintf.html)("default-aligned address:   %p\n", static_cast<void*>(p1));
        [std::free](free.html)(p1);
     
        int* p2 = static_cast<int*>(std::aligned_alloc(1024, 1024));
        [std::printf](../../io/c/fprintf.html)("1024-byte aligned address: %p\n", static_cast<void*>(p2));
        [std::free](free.html)(p2);
    }

Possible output: 
    
    
    default-aligned address:   0x2221c20
    1024-byte aligned address: 0x2222400

### See also

[ aligned_storage](../../types/aligned_storage.html "cpp/types/aligned storage")(since C++11)(deprecated in C++23) |  defines the type suitable for use as uninitialized storage for types of given size   
(class template)   
---|---  
[C documentation](../../../c/memory/aligned_alloc.html "c/memory/aligned alloc") for aligned_alloc
