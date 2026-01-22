 
  


  
  
  
  
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
| **malloc**  
---  
[calloc](calloc.html "cpp/memory/c/calloc")  
[realloc](realloc.html "cpp/memory/c/realloc")  
  
| [free](free.html "cpp/memory/c/free")  
---  
[aligned_alloc](aligned_alloc.html "cpp/memory/c/aligned alloc")(C++17)  
  
  
  


Defined in header `[<cstdlib>](../../header/cstdlib.html "cpp/header/cstdlib")` |  |   
---|---|---  
void* malloc( [std::size_t](../../types/size_t.html) size ); |  |   
| |   
  
Allocates size bytes of uninitialized storage. 

If allocation succeeds, returns a pointer to the lowest (first) byte in the allocated memory block that is suitably aligned for any scalar type (at least as strictly as [std::max_align_t](../../types/max_align_t.html "cpp/types/max align t")) ([implicitly creating](../../language/objects.html#Object_creation "cpp/language/object") objects in the destination area). 

If size is zero, the behavior is implementation defined (null pointer may be returned, or some non-null pointer may be returned that may not be used to access storage, but has to be passed to [std::free](free.html "cpp/memory/c/free")). 

The following functions are required to be thread-safe: 

  * The library versions of [`operator new`](../new/operator_new.html "cpp/memory/new/operator new") and [`operator delete`](../new/operator_delete.html "cpp/memory/new/operator delete")
  * User replacement versions of global [`operator new`](../new/operator_new.html "cpp/memory/new/operator new") and [`operator delete`](../new/operator_delete.html "cpp/memory/new/operator delete")
  * [std::calloc](calloc.html "cpp/memory/c/calloc"), **std::malloc** , [std::realloc](realloc.html "cpp/memory/c/realloc"), [std::aligned_alloc](aligned_alloc.html "cpp/memory/c/aligned alloc")(since C++17), [std::free](free.html "cpp/memory/c/free")

Calls to these functions that allocate or deallocate a particular unit of storage occur in a single total order, and each such deallocation call [happens-before](../../atomic/memory_order.html "cpp/atomic/memory order") the next allocation (if any) in this order.  | (since C++11)  
---|---  
  
## Contents

  * [1 Parameters](malloc.html#Parameters)
  * [2 Return value](malloc.html#Return_value)
  * [3 Notes](malloc.html#Notes)
  * [4 Example](malloc.html#Example)
  * [5 See also](malloc.html#See_also)

  
---  
  
### Parameters

size  |  \-  |  number of bytes to allocate   
---|---|---  
  
### Return value

On success, returns the pointer to the beginning of newly allocated memory. To avoid a memory leak, the returned pointer must be deallocated with [std::free()](free.html "cpp/memory/c/free") or [std::realloc()](realloc.html "cpp/memory/c/realloc"). 

On failure, returns a null pointer. 

### Notes

This function does not call constructors or initialize memory in any way. There are no ready-to-use smart pointers that could guarantee that the matching deallocation function is called. The preferred method of memory allocation in C++ is using RAII-ready functions [std::make_unique](../unique_ptr/make_unique.html "cpp/memory/unique ptr/make unique"), [std::make_shared](../shared_ptr/make_shared.html "cpp/memory/shared ptr/make shared"), container constructors, etc, and, in low-level library code, [new-expression](../../language/new.html "cpp/language/new"). 

For loading a large file, file mapping via OS-specific functions, e.g. [`mmap`](https://pubs.opengroup.org/onlinepubs/9699919799/functions/mmap.html) on POSIX or `CreateFileMapping`([`A`](https://docs.microsoft.com/en-us/windows/win32/api/winbase/nf-winbase-createfilemappinga)/[`W`](https://docs.microsoft.com/en-us/windows/win32/api/memoryapi/nf-memoryapi-createfilemappingw)) along with [`MapViewOfFile`](https://docs.microsoft.com/en-us/windows/win32/api/memoryapi/nf-memoryapi-mapviewoffile) on Windows, is preferable to allocating a buffer for file reading. 

### Example

Run this code
    
    
    #include <cstdlib> 
    #include <iostream>   
    #include <memory>
    #include <string>
     
    int main() 
    {
        constexpr [std::size_t](../../types/size_t.html) size = 4;
        if (auto ptr = reinterpret_cast<[std::string](../../string/basic_string.html)*>(std::malloc(size * sizeof([std::string](../../string/basic_string.html)))))
        {
            try
            {
                for ([std::size_t](../../types/size_t.html) i = 0; i < size; ++i)
                    [std::construct_at](../construct_at.html)(ptr + i, 5, 'a' + i);
                for ([std::size_t](../../types/size_t.html) i = 0; i < size; ++i)
                    [std::cout](../../io/cout.html) << "ptr[" << i << "] == " << ptr[i] << '\n';
                [std::destroy_n](../destroy_n.html)(ptr, size);
            }
            catch (...) {}
            [std::free](free.html)(ptr);
        }
    }

Output: 
    
    
    p[0] == aaaaa
    p[1] == bbbbb
    p[2] == ccccc
    p[3] == ddddd

### See also

[ operator newoperator new[]](../new/operator_new.html "cpp/memory/new/operator new") |  allocation functions   
(function)   
---|---  
[ get_temporary_buffer](../get_temporary_buffer.html "cpp/memory/get temporary buffer")(deprecated in C++17)(removed in C++20) |  obtains uninitialized storage   
(function template)   
[C documentation](../../../c/memory/malloc.html "c/memory/malloc") for malloc
