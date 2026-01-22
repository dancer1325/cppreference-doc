 
  


  
  
  
  
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
  
  
  


[`std::inout_ptr_t`](../inout_ptr_t.html "cpp/memory/inout ptr t")

Member functions  
---  
[inout_ptr_t::inout_ptr_t](inout_ptr_t.html "cpp/memory/inout ptr t/inout ptr t")  
[inout_ptr_t::~inout_ptr_t](~inout_ptr_t.html "cpp/memory/inout ptr t/~inout ptr t")  
**inout_ptr_t::operator Pointer* inout_ptr_t::operator void****  
Non-member functions  
[inout_ptr](inout_ptr.html "cpp/memory/inout ptr t/inout ptr")  
  


operator Pointer*() const noexcept; |  (1)  |  (since C++23)  
---|---|---  
operator void**() const noexcept; |  (2)  |  (since C++23)  
| |   
  
Exposes the address of a `Pointer` or void* object to a foreign function which will generally release the ownership represented by its value and then re-initialize it. 

1) Converts *this to the address of stored `Pointer` object.

2) Converts *this to the address of a void* object. This conversion function participates in overload resolution only if `Pointer` is not same as void*, and the program is ill-formed if `Pointer` is not a pointer type.  
The initial value of the void* object is equal the value of the stored `Pointer` object converted to void*, and any modification to it affects the `Pointer` value used in the [destructor](~inout_ptr_t.html "cpp/memory/inout ptr t/~inout ptr t"). Accessing the void* object outside the lifetime of *this has undefined behavior.

Once one of these two conversion functions has been called on an `inout_ptr_t` object, the other shall not be called on it, otherwise, the behavior is undefined. 

## Contents

  * [1 Parameters](operator_ptr.html#Parameters)
  * [2 Return value](operator_ptr.html#Return_value)
  * [3 Notes](operator_ptr.html#Notes)
  * [4 Example](operator_ptr.html#Example)

  
---  
  
### Parameters

(none) 

### Return value

1) The address of stored `Pointer` object.

2) The address of the void* object that satisfies aforementioned requirements.

### Notes

If the object pointed by the return value has not been rewritten, it is equal to the value held by adapted `Smart` object before construction. 

On common implementations, the object representation of every `Pointer` that is a pointer type is compatible with that of void*, and therefore these implementations typically store the void* object within the storage for the `Pointer` object, no additional storage needed: 

  * If the implementation enables type-based alias analysis (which relies on the [strict aliasing rule](../../language/reinterpret_cast.html#Type_aliasing "cpp/language/reinterpret cast")), a properly aligned [std::byte](../../types/byte.html)[sizeof(void*)] member subobject may be used, and both conversion functions return the address of objects [implicitly created](../../language/objects.html#Object_creation "cpp/language/object") within the array. 
  * Otherwise, a `Pointer` member subobject may be used for both conversion functions, and (2) may directly returns its address [`reinterpret_cast`](../../language/reinterpret_cast.html "cpp/language/reinterpret cast") to void**. 



If `Pointer` is a pointer type whose object representation is incompatible with that of void*, an additional bool flag may be needed for recording whether (1) (or (2)) has been called. 

### Example

| This section is incomplete  
Reason: no example   
---|---
