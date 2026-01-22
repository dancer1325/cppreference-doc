 
  


  
  
  
  
  
  
  
  
  
  
  


  
  
  
  
[operator newoperator new[]](operator_new.html "cpp/memory/new/operator new")  
[operator deleteoperator delete[]](operator_delete.html "cpp/memory/new/operator delete")  
[nothrow_t](nothrow_t.html "cpp/memory/new/nothrow t")  
[nothrow](nothrow.html "cpp/memory/new/nothrow")  
[new_handler](new_handler.html "cpp/memory/new/new handler")  
[set_new_handler](set_new_handler.html "cpp/memory/new/set new handler")  
[get_new_handler](get_new_handler.html "cpp/memory/new/get new handler")(C++11)  
[bad_alloc](bad_alloc.html "cpp/memory/new/bad alloc")  
[bad_array_new_length](bad_array_new_length.html "cpp/memory/new/bad array new length")(C++11)  
**align_val_t**(C++17)  
[destroying_delete_t](destroying_delete_t.html "cpp/memory/new/destroying delete t")(C++20)  
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
  
  
  


[Low level memory management](../new.html "cpp/memory/new")

[Functions](../new.html#Functions "cpp/memory/new")  
---  
[operator newoperator new[]](operator_new.html "cpp/memory/new/operator new")  
[operator deleteoperator delete[]](operator_delete.html "cpp/memory/new/operator delete")  
[get_new_handler](get_new_handler.html "cpp/memory/new/get new handler")(C++11)  
[set_new_handler](set_new_handler.html "cpp/memory/new/set new handler")  
[Classes](../new.html#Classes "cpp/memory/new")  
[bad_alloc](bad_alloc.html "cpp/memory/new/bad alloc")  
[bad_array_new_length](bad_array_new_length.html "cpp/memory/new/bad array new length")(C++11)  
**align_val_t**(C++17)  
[Types](../new.html#Types "cpp/memory/new")  
[new_handler](new_handler.html "cpp/memory/new/new handler")  
[Objects](../new.html#Objects "cpp/memory/new")  
[nothrow](nothrow.html "cpp/memory/new/nothrow")  
[destroying_delete](destroying_delete_t.html "cpp/memory/new/destroying delete")(C++20)  
[Object access](../new.html#Object_access "cpp/memory/new")  
[launder](../../utility/launder.html "cpp/utility/launder")(C++17)  
  


Defined in header `[<new>](../../header/new.html "cpp/header/new")` |  |   
---|---|---  
enum class align_val_t : [std::size_t](../../types/size_t.html) {}; |  |  (since C++17)  
| |   
  
Both [new-expression](../../language/new.html "cpp/language/new") and [delete-expression](../../language/delete.html "cpp/language/delete"), when used with objects whose alignment requirement is greater than `__STDCPP_DEFAULT_NEW_ALIGNMENT__`, pass that alignment requirement as an argument of type `std::align_val_t` to the selected allocation/deallocation function. 

### Notes

Alignment (as obtained by alignof) has the type [std::size_t](../../types/size_t.html "cpp/types/size t"), but placement forms of allocation and deallocation functions that take [std::size_t](../../types/size_t.html "cpp/types/size t") as an additional parameter are already in use, so this type is used instead. 

Feature-test macro | Value | Std | Feature   
---|---|---|---  
[`__cpp_aligned_new`](../../experimental/feature_test.html#cpp_aligned_new "cpp/feature test") | [`201606L`](../../compiler_support/17.html#cpp_aligned_new_201606L "cpp/compiler support/17") | (C++17) | Dynamic memory allocation for over-aligned data   
  
### See also

[ operator newoperator new[]](operator_new.html "cpp/memory/new/operator new") |  allocation functions   
(function)   
---|---  
[ operator deleteoperator delete[]](operator_delete.html "cpp/memory/new/operator delete") |  deallocation functions   
(function) 
  *[Value]: The year/month in which the feature was adopted. The hyperlink under each value opens a compiler support page with entry for given feature.
  *[Std]: Standard in which the feature is introduced; DR means defect report against that revision
