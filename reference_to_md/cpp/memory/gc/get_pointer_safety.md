 
  


  
  
  
  
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
| [declare_reachable](declare_reachable.html "cpp/memory/gc/declare reachable")(C++11)(until C++23)  
---  
[declare_no_pointers](declare_no_pointers.html "cpp/memory/gc/declare no pointers")(C++11)(until C++23)  
[pointer_safety](pointer_safety.html "cpp/memory/gc/pointer safety")(C++11)(until C++23)  
  
| [undeclare_reachable](undeclare_reachable.html "cpp/memory/gc/undeclare reachable")(C++11)(until C++23)  
---  
[undeclare_no_pointers](undeclare_no_pointers.html "cpp/memory/gc/undeclare no pointers")(C++11)(until C++23)  
**get_pointer_safety**(C++11)(until C++23)  
  
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
| [malloc](../c/malloc.html "cpp/memory/c/malloc")  
---  
[calloc](../c/calloc.html "cpp/memory/c/calloc")  
[realloc](../c/realloc.html "cpp/memory/c/realloc")  
  
| [free](../c/free.html "cpp/memory/c/free")  
---  
[aligned_alloc](../c/aligned_alloc.html "cpp/memory/c/aligned alloc")(C++17)  
  
  
  


Defined in header `[<memory>](../../header/memory.html "cpp/header/memory")` |  |   
---|---|---  
[std::pointer_safety](pointer_safety.html) get_pointer_safety() noexcept; |  |  (since C++11)   
(removed in C++23)  
| |   
  
Obtains the implementation-defined pointer safety model, which is a value of type [std::pointer_safety](pointer_safety.html "cpp/memory/gc/pointer safety"). 

## Contents

  * [1 Parameters](get_pointer_safety.html#Parameters)
  * [2 Return value](get_pointer_safety.html#Return_value)
  * [3 Example](get_pointer_safety.html#Example)
  * [4 See also](get_pointer_safety.html#See_also)

  
---  
  
### Parameters

(none) 

### Return value

The pointer safety used by this implementation. 

### Example

Run this code
    
    
    #include <iostream>
    #include <memory>
     
    int main()
    {
        [std::cout](../../io/cout.html) << "Pointer safety: ";
        switch (std::get_pointer_safety())
        {
            case [std::pointer_safety::strict](pointer_safety.html):
                [std::cout](../../io/cout.html) << "strict\n";
                break;
            case [std::pointer_safety::preferred](pointer_safety.html):
                [std::cout](../../io/cout.html) << "preferred\n";
                break;
            case [std::pointer_safety::relaxed](pointer_safety.html):
                [std::cout](../../io/cout.html) << "relaxed\n";
                break;
        }
    }

Possible output: 
    
    
    Pointer safety: relaxed

### See also

[ pointer_safety](pointer_safety.html "cpp/memory/gc/pointer safety")(C++11)(removed in C++23) |  lists pointer safety models   
(enum)   
---|---
