 
  


  
  
  
  
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
**calloc**  
[realloc](realloc.html "cpp/memory/c/realloc")  
  
| [free](free.html "cpp/memory/c/free")  
---  
[aligned_alloc](aligned_alloc.html "cpp/memory/c/aligned alloc")(C++17)  
  
  
  


Defined in header `[<cstdlib>](../../header/cstdlib.html "cpp/header/cstdlib")` |  |   
---|---|---  
void* calloc( [std::size_t](../../types/size_t.html) num, [std::size_t](../../types/size_t.html) size ); |  |   
| |   
  
Allocates memory for an array of num objects of size size, initializes it to all bits zero ([implicitly creating](../../language/objects.html#Object_creation "cpp/language/object") objects in the destination area). 

If allocation succeeds, returns a pointer to the lowest (first) byte in the allocated memory block that is suitably aligned for any object type. 

If size is zero, the behavior is implementation defined (null pointer may be returned, or some non-null pointer may be returned that may not be used to access storage). 

The following functions are required to be thread-safe: 

  * The library versions of [`operator new`](../new/operator_new.html "cpp/memory/new/operator new") and [`operator delete`](../new/operator_delete.html "cpp/memory/new/operator delete")
  * User replacement versions of global [`operator new`](../new/operator_new.html "cpp/memory/new/operator new") and [`operator delete`](../new/operator_delete.html "cpp/memory/new/operator delete")
  * **std::calloc** , [std::malloc](malloc.html "cpp/memory/c/malloc"), [std::realloc](realloc.html "cpp/memory/c/realloc"), [std::aligned_alloc](aligned_alloc.html "cpp/memory/c/aligned alloc")(since C++17), [std::free](free.html "cpp/memory/c/free")

Calls to these functions that allocate or deallocate a particular unit of storage occur in a single total order, and each such deallocation call [happens-before](../../atomic/memory_order.html "cpp/atomic/memory order") the next allocation (if any) in this order.  | (since C++11)  
---|---  
  
## Contents

  * [1 Parameters](calloc.html#Parameters)
  * [2 Return value](calloc.html#Return_value)
  * [3 Notes](calloc.html#Notes)
  * [4 Example](calloc.html#Example)
  * [5 See also](calloc.html#See_also)

  
---  
  
### Parameters

num  |  \-  |  number of objects   
---|---|---  
size  |  \-  |  size of each object   
  
### Return value

On success, returns the pointer to the beginning of newly allocated memory. To avoid a memory leak, the returned pointer must be deallocated with [std::free()](free.html "cpp/memory/c/free") or [std::realloc()](realloc.html "cpp/memory/c/realloc"). 

On failure, returns a null pointer. 

### Notes

Due to the alignment requirements, the number of allocated bytes is not necessarily equal to num * size. 

Initialization to all bits zero does not guarantee that a floating-point or a pointer would be initialized to 0.0 and the null pointer value, respectively (although that is true on all common platforms). 

Originally (in C89), support for zero size was added to accommodate code such as 
    
    
    OBJ *p = calloc(0, sizeof(OBJ)); // "zero-length" placeholder
    ...
    while (1)
    { 
        p = realloc(p, c * sizeof(OBJ)); // reallocations until size settles
        ... // code that may change c or break out of loop
    }

### Example

Run this code
    
    
    #include <cstdlib>
    #include <iostream>
     
    int main()
    {
        int* p1 = (int*)std::calloc(4, sizeof(int)); // allocate and zero out an array of 4 int
        int* p2 = (int*)std::calloc(1, sizeof(int[4])); // same, naming the array type directly
        int* p3 = (int*)std::calloc(4, sizeof *p3); // same, without repeating the type name
     
        if (p2)
            for (int n = 0; n < 4; ++n) // print the array
                [std::cout](../../io/cout.html) << "p2[" << n << "] == " << p2[n] << '\n';
     
        [std::free](free.html)(p1);
        [std::free](free.html)(p2);
        [std::free](free.html)(p3);
    }

Output: 
    
    
    p2[0] == 0
    p2[1] == 0
    p2[2] == 0
    p2[3] == 0

### See also

[C documentation](../../../c/memory/calloc.html "c/memory/calloc") for calloc  
---
