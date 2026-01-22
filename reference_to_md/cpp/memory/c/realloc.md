 
  


  
  
  
  
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
