 
  


  
  
  
  
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
**inout_ptr_t::~inout_ptr_t**  
[inout_ptr_t::operator Pointer*inout_ptr_t::operator void**](operator_ptr.html "cpp/memory/inout ptr t/operator ptr")  
Non-member functions  
[inout_ptr](inout_ptr.html "cpp/memory/inout ptr t/inout ptr")  
  


~inout_ptr_t(); |  |  (since C++23)  
---|---|---  
| |   
  
Resets the adapted `Smart` object by the value of modified `Pointer` object (or the void* object if operator void**() has been called) and the captured arguments. release() may be called on the adapted `Smart` object if it is not called by the constructor. 

Let 

  * `s` denotes the adapted `Smart` object, 
  * `args...` denotes the captured arguments, 
  * `p` denotes the value of stored `Pointer`, or static_cast<Pointer>(*operator void**()) if operator void** has been called, 
  * `SP` be 
    * Smart::pointer, if it is valid and denotes a type, otherwise, 
    * Smart::element_type*, if Smart::element_type is valid and denotes a type, otherwise, 
    * [std::pointer_traits](../pointer_traits.html)<Smart>::element_type*, if [std::pointer_traits](../pointer_traits.html)<Smart>::element_type is valid and denotes a type, otherwise, 
    * `Pointer`, 
  * /*do-release*/ denotes s.release() if the [constructor](inout_ptr_t.html "cpp/memory/inout ptr t/inout ptr t") does not call release(), empty otherwise. 



If `Smart` is a pointer type, the destructor performs 

    s = static_cast<Smart>(p);, and the program is ill-formed if sizeof...(Args) > 0; 

otherwise, if s.reset(static_cast<SP>(p), [std::forward](../../utility/forward.html)<Args>(args)...) is well-formed, the destructor performs 

    /*do-release*/; if (p) { s.reset(static_cast<SP>(p), [std::forward](../../utility/forward.html)<Args>(args)...); }; 

otherwise, if [std::is_constructible_v](../../types/is_constructible.html)<Smart, SP, Args...> is true, the destructor performs 

    /*do-release*/; if (p) { s = Smart(static_cast<SP>(p), [std::forward](../../utility/forward.html)<Args>(args)...); }; 

otherwise, the program is ill-formed. 

### Notes

The implementation may allocate the storage for the data structure needed for `Smart` (e.g. a control block) on construction, in order to leave non-throwing works to the destructor. 

Arguments captured by value are destroyed after resetting. 

### Defect reports

The following behavior-changing defect reports were applied retroactively to previously published C++ standards. 

DR  | Applied to  | Behavior as published  | Correct behavior   
---|---|---|---  
[LWG 3897](https://cplusplus.github.io/LWG/issue3897) | C++23  | the destructor did not update a raw pointer to the null value  | it does 
