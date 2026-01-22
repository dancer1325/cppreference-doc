 
  


  
  
  
  
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
  
| **free**  
---  
[aligned_alloc](aligned_alloc.html "cpp/memory/c/aligned alloc")(C++17)  
  
  
  


Defined in header `[<cstdlib>](../../header/cstdlib.html "cpp/header/cstdlib")` |  |   
---|---|---  
void free( void* ptr ); |  |   
| |   
  
Deallocates the space previously allocated by [std::malloc](malloc.html "cpp/memory/c/malloc"), [std::calloc](calloc.html "cpp/memory/c/calloc"), [std::aligned_alloc](aligned_alloc.html "cpp/memory/c/aligned alloc")(since C++17), or [std::realloc](realloc.html "cpp/memory/c/realloc"). 

If ptr is a null pointer, the function does nothing. 

The behavior is undefined if the value of ptr does not equal a value returned earlier by [std::malloc](malloc.html "cpp/memory/c/malloc"), [std::calloc](calloc.html "cpp/memory/c/calloc"), [std::aligned_alloc](aligned_alloc.html "cpp/memory/c/aligned alloc")(since C++17), or [std::realloc](realloc.html "cpp/memory/c/realloc"). 

The behavior is undefined if the memory area referred to by ptr has already been deallocated, that is, `std::free` or [std::realloc](realloc.html "cpp/memory/c/realloc") has already been called with ptr as the argument and no calls to [std::malloc](malloc.html "cpp/memory/c/malloc"), [std::calloc](calloc.html "cpp/memory/c/calloc"), [std::aligned_alloc](aligned_alloc.html "cpp/memory/c/aligned alloc")(since C++17), or [std::realloc](realloc.html "cpp/memory/c/realloc") resulted in a pointer equal to ptr afterwards. 

The behavior is undefined if after `std::free` returns, an access is made through the pointer ptr (unless another allocation function happened to result in a pointer value equal to ptr). 

The following functions are required to be thread-safe: 

  * The library versions of [`operator new`](../new/operator_new.html "cpp/memory/new/operator new") and [`operator delete`](../new/operator_delete.html "cpp/memory/new/operator delete")
  * User replacement versions of global [`operator new`](../new/operator_new.html "cpp/memory/new/operator new") and [`operator delete`](../new/operator_delete.html "cpp/memory/new/operator delete")
  * [std::calloc](calloc.html "cpp/memory/c/calloc"), [std::malloc](malloc.html "cpp/memory/c/malloc"), [std::realloc](realloc.html "cpp/memory/c/realloc"), [std::aligned_alloc](aligned_alloc.html "cpp/memory/c/aligned alloc")(since C++17), **std::free**

Calls to these functions that allocate or deallocate a particular unit of storage occur in a single total order, and each such deallocation call [happens-before](../../atomic/memory_order.html "cpp/atomic/memory order") the next allocation (if any) in this order.  | (since C++11)  
---|---  
  
## Contents

  * [1 Parameters](free.html#Parameters)
  * [2 Return value](free.html#Return_value)
  * [3 Notes](free.html#Notes)
  * [4 Example](free.html#Example)
  * [5 See also](free.html#See_also)

  
---  
  
### Parameters

ptr  |  \-  |  pointer to the memory to deallocate   
---|---|---  
  
### Return value

(none) 

### Notes

The function accepts (and does nothing with) the null pointer to reduce the amount of special-casing. Whether allocation succeeds or not, the pointer returned by an allocation function can be passed to `std::free`. 

### Example

Run this code
    
    
    #include <cstdlib>
     
    int main()
    {
        int* p1 = (int*)[std::malloc](malloc.html)(10 * sizeof *p1);
        std::free(p1); // every allocated pointer must be freed
     
        int* p2 = (int*)[std::calloc](calloc.html)(10, sizeof *p2);
        int* p3 = (int*)[std::realloc](realloc.html)(p2, 1000 * sizeof *p3);
        if (!p3) // p3 null means realloc failed and p2 must be freed.
            std::free(p2);
        std::free(p3); // p3 can be freed whether or not it is null.
    }

### See also

[C documentation](../../../c/memory/free.html "c/memory/free") for free  
---
