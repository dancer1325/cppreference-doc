 
  


  
  
  
  
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
  
  
  


[`std::auto_ptr`](../auto_ptr.html "cpp/memory/auto ptr")

Member functions  
---  
[auto_ptr::auto_ptr](auto_ptr.html "cpp/memory/auto ptr/auto ptr")  
[auto_ptr::~auto_ptr](~auto_ptr.html "cpp/memory/auto ptr/~auto ptr")  
**auto_ptr::operator=**  
[auto_ptr::operator*auto_ptr::operator->](operator*.html "cpp/memory/auto ptr/operator*")  
[auto_ptr::get](get.html "cpp/memory/auto ptr/get")  
[auto_ptr::release](release.html "cpp/memory/auto ptr/release")  
[auto_ptr::reset](reset.html "cpp/memory/auto ptr/reset")  
[auto_ptr::operator auto_ptr<Y>auto_ptr::operator auto_ptr_ref<Y>](operator_auto_ptr.html "cpp/memory/auto ptr/operator auto ptr")  
  


auto_ptr& operator=( auto_ptr& r ) throw(); |  (1)  |  (deprecated in C++11)   
(removed in C++17)  
---|---|---  
template< class Y >  
auto_ptr& operator=( auto_ptr<Y>& r ) throw(); |  (2)  |  (deprecated in C++11)   
(removed in C++17)  
auto_ptr& operator=( auto_ptr_ref<T> m ) throw(); |  (3)  |  (deprecated in C++11)   
(removed in C++17)  
| |   
  
Replaces the managed object with the one managed by r or m. 

1) Effectively calls reset(r.release()). 

2) Effectively calls reset(r.release()). `Y*` must be implicitly convertible to `T*`.

3) Effectively calls reset(m.release()). `auto_ptr_ref` is an implementation-defined type that holds a reference to `auto_ptr`. [std::auto_ptr](../auto_ptr.html "cpp/memory/auto ptr") is implicitly [convertible to](operator_auto_ptr.html "cpp/memory/auto ptr/operator auto ptr") and [from](auto_ptr.html "cpp/memory/auto ptr/auto ptr") this type. The implementation is allowed to provide the template with a different name or implement equivalent functionality in other ways.

## Contents

  * [1 Parameters](operator=.html#Parameters)
  * [2 Return value](operator=.html#Return_value)
  * [3 Notes](operator=.html#Notes)
  * [4 Defect reports](operator=.html#Defect_reports)

  
---  
  
### Parameters

r  |  \-  |  another `auto_ptr` to transfer the ownership of the object from   
---|---|---  
m  |  \-  |  an object of implementation-defined type that holds a reference to `auto_ptr`  
  
### Return value

*this. 

### Notes

The constructor and the copy assignment operator from `auto_ptr_ref` is provided to allow copy-constructing and assigning [std::auto_ptr](../auto_ptr.html "cpp/memory/auto ptr") from nameless temporaries. Since its copy constructor and copy assignment operator take the argument as non-const reference, they cannot bind rvalue arguments directly. However, a [user-defined conversion](operator_auto_ptr.html "cpp/memory/auto ptr/operator auto ptr") can be executed (which releases the original `auto_ptr`), followed by a call to the constructor or copy-assignment operator that take `auto_ptr_ref` by value. This is an early implementation of [move semantics](../../utility/move.html "cpp/utility/move"). 

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 127](https://cplusplus.github.io/LWG/issue127) | C++98  | `auto_ptr` was not assignable from `auto_ptr_ref` | added overload (3) 
